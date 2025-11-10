using UnityEngine;
using UnityEngine.Rendering;
using System.Collections.Generic;

public class GpuTerrainPipeline : MonoBehaviour
{
    [Header("Input")]
    public Texture2D inputHeight;

    [Header("Terrain")]
    public Terrain targetTerrain;       
    public float terrainSizeXZ = 10000f;
    public float terrainMaxHeight = 3000f; 

    [Header("Shaders")]
    public ComputeShader erosionCS;

    [Header("Pipeline Settings")]
    public float baseResolution = 256f;

    int kCopyFromTexture;
    int kUpsample2x;
    int kFlowRouting;
    int kErode;
    int kThermal;
    int kDeposit;
    int kRetarget;
    int kBreach;

    [System.Serializable]
    public struct LevelSchedule
    {
        public int erosionSteps; 
        public int thermalSteps;  
        public int depositionSteps;
    }

    [SerializeField]
    public LevelSchedule[] levels = new LevelSchedule[]
    {
        new LevelSchedule { erosionSteps = 200, thermalSteps = 200, depositionSteps = 200 },
        new LevelSchedule { erosionSteps = 200, thermalSteps = 200, depositionSteps = 200 },
        new LevelSchedule { erosionSteps = 200, thermalSteps = 200, depositionSteps = 200 }
    };

    private Dictionary<int, RenderTexture> heightRTs = new Dictionary<int, RenderTexture>();
    private Dictionary<int, RenderTexture> streamRTs = new Dictionary<int, RenderTexture>();
    private Dictionary<int, RenderTexture> sedimentRTs = new Dictionary<int, RenderTexture>();
    private Dictionary<int, RenderTexture> tempRTs = new Dictionary<int, RenderTexture>();

    [Header("Erosion Parameters")]
    [Range(0.0001f, 0.001f)]
    public float erosionK = 0.0005f;
    [Range(0.5f, 1.5f)]
    public float erosionPSA = 0.8f;
    [Range(1.0f, 3.0f)]
    public float erosionPSL = 2.0f;
    [Range(0.1f, 5.0f)]
    public float erosionDT = 1.0f;
    [Range(1.0f, 5.0f)]
    public float flowP = 1.3f;

    [Header("Thermal Parameters")]
    [Range(20f, 50f)]
    public float talus = 30f;
    [Range(0.1f, 2.0f)]
    public float thermalDT = 1.0f;

    [Header("Deposition Parameters")]
    [Range(0.1f, 5.0f)]
    public float depositionStrength = 1.0f;
    [Range(1.0f, 5.0f)]
    public float rainIntensity = 2.6f;

    void Start()
    {
        if (!inputHeight) { Debug.LogError("Missing input height"); return; }
        if (!erosionCS) { Debug.LogError("Missing Erosion.compute"); return; }
        if (!targetTerrain) { Debug.LogError("Missing Terrain"); return; }

        InitKernels();
        InitRenderTextures();

        // Main algorithm
        RunMultiscalePipeline();

        // Update Terrain
        int rt = Mathf.Max(0, levels.Length - 1);
        UpdateTerrainFromRT(heightRTs[rt], targetTerrain, terrainSizeXZ, terrainMaxHeight);
    }

    void InitKernels()
    {
        kCopyFromTexture = erosionCS.FindKernel("CopyFromTexture");
        kUpsample2x = erosionCS.FindKernel("Upsample2x");  
        kFlowRouting = erosionCS.FindKernel("FlowRouting"); 
        kErode = erosionCS.FindKernel("ErosionStep"); 
        kThermal = erosionCS.FindKernel("ThermalStep"); 
        kDeposit = erosionCS.FindKernel("DepositStep");
        kRetarget = erosionCS.FindKernel("Retargeting");
        kBreach = erosionCS.FindKernel("Breaching");
    }

    RenderTexture CreateRT(int w, int h)
    {
        var desc = new RenderTextureDescriptor(w, h, RenderTextureFormat.RFloat, 0);
        desc.enableRandomWrite = true;
        var rt = new RenderTexture(desc);
        rt.Create();
        return rt;
    }

    void CopyTextureToRT(Texture2D src, RenderTexture dst)
    {
        erosionCS.SetTexture(kCopyFromTexture, "_InHeightTex", src);
        erosionCS.SetTexture(kCopyFromTexture, "_OutHeightRT", dst);
        DispatchFor(dst, kCopyFromTexture);
    }

    void InitRenderTextures()
    {
        int w = (int)baseResolution;
        int h = (int)baseResolution;

        for (int level = 0; level < levels.Length; level++)
        {
            int key = level;

            if (!heightRTs.ContainsKey(level))
                heightRTs[level] = CreateRT(w, h);
            if (!streamRTs.ContainsKey(level))
                streamRTs[level] = CreateRT(w, h);
            if (!sedimentRTs.ContainsKey(level))
                sedimentRTs[level] = CreateRT(w, h);
            if (!tempRTs.ContainsKey(level))
                tempRTs[level] = CreateRT(w, h);

            w *= 2;
            h *= 2;
        }

        if (levels.Length == 0)
        {
            if (!heightRTs.ContainsKey(0))
                heightRTs[0] = CreateRT(w, h);
        }

        CopyTextureToRT(inputHeight, heightRTs[0]);
    }

    void RunMultiscalePipeline()
    {
        if (levels.Length == 0) return;

        Debug.Log($"Starting multi-scale pipeline with {levels.Length} levels");

        for (int level = 0; level < levels.Length; level++)
        {
            Debug.Log($"--- Processing Level {level} ---");

            RenderTexture height = heightRTs[level];
            RenderTexture stream = streamRTs[level];
            RenderTexture sediment = sedimentRTs[level];
            RenderTexture temp = tempRTs[level];

            var schedule = levels[level];

            // U: Upsample if not first level
            if (level > 0)
            {
                Debug.Log($"  Upsampling from level {level - 1}");
                Upsample2x(heightRTs[level - 1], height);
                Debug.Log(height.width);
            }

            // E: Erosion steps
            Debug.Log($"  Erosion: {schedule.erosionSteps} steps");
            for (int i = 0; i < schedule.erosionSteps; i++)
            {
                FlowRoutingOnce(height, stream);
                ErodeOnce(height, stream, temp);
                Swap(ref height, ref temp);
            }

            // T: Thermal relaxation steps
            Debug.Log($"  Thermal: {schedule.thermalSteps} steps");
            for (int i = 0; i < schedule.thermalSteps; i++)
            {
                ThermalOnce(height, temp);
                Swap(ref height, ref temp);
            }

            // D: Deposition steps
            Debug.Log($"  Deposition: {schedule.depositionSteps} steps");
            for (int i = 0; i < schedule.depositionSteps; i++)
            {
                FlowRoutingOnce(height, stream);
                DepositOnce(height, stream, sediment, temp);
                Swap(ref height, ref temp);
            }

            // Store result back
            heightRTs[level] = height;
            streamRTs[level] = stream;
            sedimentRTs[level] = sediment;
            tempRTs[level] = temp;
        }

        //// R: Ridge/peak retargeting (after all levels)
        //if (levels.Length > 0)
        //{
        //    Debug.Log("Retargeting to preserve ridges");
        //    RenderTexture finalHeight = heightRTs[levels.Length - 1];
        //    RenderTexture finalTemp = tempRTs[levels.Length - 1];
        //    DiffuseRetarget(finalHeight, finalTemp);
        //    Swap(ref finalHeight, ref finalTemp);
        //    heightRTs[levels.Length - 1] = finalHeight;
        //}

        //// B: Multi-scale partial breaching
        //if (levels.Length > 0)
        //{
        //    Debug.Log("Breaching to remove pits");
        //    RenderTexture finalHeight = heightRTs[levels.Length - 1];
        //    RenderTexture finalTemp = tempRTs[levels.Length - 1];
        //    MultiBreaching(finalHeight, finalTemp);
        //    Swap(ref finalHeight, ref finalTemp);
        //    heightRTs[levels.Length - 1] = finalHeight;
        //}

        Debug.Log("Multi-scale pipeline complete");
    }

    void Upsample2x(RenderTexture src, RenderTexture dst)
    {
        SetCommonUniforms(src);
        erosionCS.SetTexture(kUpsample2x, "_InHeightRT", src);
        erosionCS.SetTexture(kUpsample2x, "_OutHeightRT", dst);
        DispatchFor(dst, kUpsample2x);
    }

    void FlowRoutingOnce(RenderTexture height, RenderTexture stream)
    {
        SetCommonUniforms(height);
        erosionCS.SetTexture(kFlowRouting, "_InHeightRT", height);
        erosionCS.SetTexture(kFlowRouting, "_StreamRT", stream);
        DispatchFor(height, kFlowRouting);
    }

    void ErodeOnce(RenderTexture height, RenderTexture stream, RenderTexture dst)
    {
        SetCommonUniforms(height);
        SetErosionUniforms();
        erosionCS.SetTexture(kErode, "_InHeightRT", height);
        erosionCS.SetTexture(kErode, "_StreamRT", stream);
        erosionCS.SetTexture(kErode, "_OutHeightRT", dst);
        DispatchFor(height, kErode);
    }

    void ThermalOnce(RenderTexture height, RenderTexture dst)
    {
        SetCommonUniforms(height);
        SetThermalUniforms();
        erosionCS.SetTexture(kThermal, "_InHeightRT", height);
        erosionCS.SetTexture(kThermal, "_TempRT", dst);
        DispatchFor(height, kThermal);
    }

    void DepositOnce(RenderTexture height, RenderTexture stream, RenderTexture sediment, RenderTexture dst)
    {
        SetCommonUniforms(height);
        SetDepositionUniforms();
        erosionCS.SetTexture(kDeposit, "_InHeightRT", height);
        erosionCS.SetTexture(kDeposit, "_StreamRT", stream);
        erosionCS.SetTexture(kDeposit, "_SedimentRT", sediment);
        erosionCS.SetTexture(kDeposit, "_OutHeightRT", dst);
        DispatchFor(height, kDeposit);
    }

    void DiffuseRetarget(RenderTexture height, RenderTexture dst)
    {
        SetCommonUniforms(height);
        erosionCS.SetTexture(kRetarget, "_InHeightRT", height);
        erosionCS.SetTexture(kRetarget, "_TempRT", dst);
        DispatchFor(height, kRetarget);
    }

    void MultiBreaching(RenderTexture height, RenderTexture dst)
    {
        for (int iter = 0; iter < 3; iter++)
        {
            SetCommonUniforms(height);
            erosionCS.SetTexture(kBreach, "_InHeightRT", height);
            erosionCS.SetTexture(kBreach, "_TempRT", dst);
            DispatchFor(height, kBreach);
            Swap(ref height, ref dst);
        }
    }

    void SetCommonUniforms(RenderTexture rt)
    {
        erosionCS.SetInt("_Width", rt.width);
        erosionCS.SetInt("_Height", rt.height);
        erosionCS.SetFloat("_CellSize", 1.0f);
    }

    void SetErosionUniforms()
    {
        erosionCS.SetFloat("_ErosionK", erosionK);
        erosionCS.SetFloat("_ErosionPSA", erosionPSA);
        erosionCS.SetFloat("_ErosionPSL", erosionPSL);
        erosionCS.SetFloat("_ErosionDT", erosionDT);
        erosionCS.SetFloat("_FlowP", flowP);
    }

    void SetThermalUniforms()
    {
        erosionCS.SetFloat("_Talus", talus);
        erosionCS.SetFloat("_ThermalDT", thermalDT);
    }

    void SetDepositionUniforms()
    {
        erosionCS.SetFloat("_DepositionStrength", depositionStrength);
        erosionCS.SetFloat("_RainIntensity", rainIntensity);
        erosionCS.SetFloat("_FlowP", flowP);
    }

    void DispatchFor(RenderTexture rt, int kernel)
    {
        int gx = (rt.width + 7) / 8;
        int gy = (rt.height + 7) / 8;
        erosionCS.Dispatch(kernel, gx, gy, 1);
    }

    static void Swap(ref RenderTexture a, ref RenderTexture b)
    {
        var t = a; a = b; b = t;
    }

    void UpdateTerrainFromRT(RenderTexture srcRT, Terrain terrain, float sizeXZ, float maxHeight)
    {
        var td = terrain.terrainData;

        int terrainRes = Mathf.ClosestPowerOfTwo(Mathf.Min(srcRT.width, srcRT.height)) + 1;
        td.heightmapResolution = terrainRes;
        td.size = new Vector3(sizeXZ, maxHeight, sizeXZ);

        AsyncGPUReadback.Request(srcRT, 0, (req) =>
        {
            if (req.hasError) { Debug.LogError("GPU readback failed"); return; }

            var data = req.GetData<float>(); 
            int w = srcRT.width, h = srcRT.height;

            var heights = new float[terrainRes, terrainRes];
            for (int y = 0; y < terrainRes; y++)
            {
                float v = (float)y / (terrainRes - 1);
                float srcY = v * (h - 1);
                int y0 = Mathf.FloorToInt(srcY);
                int y1 = Mathf.Min(y0 + 1, h - 1);
                float ty = srcY - y0;

                for (int x = 0; x < terrainRes; x++)
                {
                    float u = (float)x / (terrainRes - 1);
                    float srcX = u * (w - 1);
                    int x0 = Mathf.FloorToInt(srcX);
                    int x1 = Mathf.Min(x0 + 1, w - 1);
                    float tx = srcX - x0;

                    float h00 = data[y0 * w + x0];
                    float h10 = data[y0 * w + x1];
                    float h01 = data[y1 * w + x0];
                    float h11 = data[y1 * w + x1];

                    float hx0 = Mathf.Lerp(h00, h10, tx);
                    float hx1 = Mathf.Lerp(h01, h11, tx);
                    float hxy = Mathf.Lerp(hx0, hx1, ty);

                    heights[y, x] = Mathf.Clamp01(hxy);
                }
            }

            td.SetHeights(0, 0, heights);
            Debug.Log($"Terrain updated: RT {inputHeight.width}x{inputHeight.height} -> heights {terrainRes}x{terrainRes}");
        });
    }
}