using UnityEngine;
using UnityEngine.Rendering;

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

    RenderTexture heightRT, tempRT;
    RenderTexture areaRT;

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

    public LevelSchedule[] levels;

    void Start()
    {
        if (!inputHeight) { Debug.LogError("Missing input height"); return; }
        if (!erosionCS) { Debug.LogError("Missing Erosion.compute"); return; }
        if (!targetTerrain) { Debug.LogError("Missing Terrain"); return; }
        if (levels == null || levels.Length == 0)
        {
            levels = new[] { new LevelSchedule { erosionSteps = 0, thermalSteps = 0, depositionSteps = 0 } };
        }

        InitKernels();
        CreateRTs(inputHeight.width, inputHeight.height);

        CopyTextureToRT(inputHeight, heightRT);

        // Main algorithm
        RunMultiscalePipeline();

        // Update Terrain
        UpdateTerrainFromRT(heightRT, targetTerrain, terrainSizeXZ, terrainMaxHeight);
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

    void CreateRTs(int w, int h)
    {
        var descT = new RenderTextureDescriptor(w, h, RenderTextureFormat.RFloat, 0);
        descT.enableRandomWrite = true;

        heightRT = new RenderTexture(descT); heightRT.Create();
        tempRT = new RenderTexture(descT); tempRT.Create();

        var descA = new RenderTextureDescriptor(w, h, RenderTextureFormat.RFloat, 0);
        descA.enableRandomWrite = true;
        areaRT = new RenderTexture(descA); areaRT.Create();
    }

    void CopyTextureToRT(Texture2D src, RenderTexture dst)
    {
        erosionCS.SetTexture(kCopyFromTexture, "_InHeightTex", src);
        erosionCS.SetTexture(kCopyFromTexture, "_OutHeightRT", dst);
        DispatchFor(dst, kCopyFromTexture);
    }

    void RunMultiscalePipeline()
    {
        // T
        RenderTexture T = heightRT;
        RenderTexture tmp = tempRT;

        int w = T.width;
        int h = T.height;

        // For each level
        for (int level = 0; level < levels.Length; level++)
        {
            var L = levels[level];

            // U(T)
            if (level > 0)
            {
                int newW = w * 2;
                int newH = h * 2;

                RenderTexture coarseT = T;
                RecreateRTs(ref T, ref tmp, ref areaRT, newW, newH);

                Upsample2x(coarseT, T);
                coarseT.Release();

                w = newW;
                h = newH;
            }

            // E(T)
            for (int i = 0; i < L.erosionSteps; i++)
            {
                FlowRoutingOnce(T, areaRT);
                ErodeOnce(T, areaRT, tmp);
                Swap(ref T, ref tmp);
            }

            // T(T)
            for (int i = 0; i < L.thermalSteps; i++)
            {
                ThermalOnce(T, tmp);
                Swap(ref T, ref tmp);
            }

            // D(T)
            for (int i = 0; i < L.depositionSteps; i++)
            {
                FlowRoutingOnce(T, areaRT); 
                DepositOnce(T, areaRT, tmp);
                Swap(ref T, ref tmp);
            }
        }

        // R(T)
        DiffuseRetarget(T, tmp);
        Swap(ref T, ref tmp);

        // B(T)
        MultiBreaching(T, tmp);
        Swap(ref T, ref tmp);

        heightRT = T;
    }

    void Upsample2x(RenderTexture height, RenderTexture dst)
    {

    }

    void FlowRoutingOnce(RenderTexture height, RenderTexture outArea)
    {

    }

    void ErodeOnce(RenderTexture height, RenderTexture outArea, RenderTexture dst)
    {

    }

    void ThermalOnce(RenderTexture height, RenderTexture dst)
    {

    }

    void DepositOnce(RenderTexture height, RenderTexture outArea, RenderTexture dst)
    {

    }

    void DiffuseRetarget(RenderTexture height, RenderTexture dst)
    {

    }

    void MultiBreaching(RenderTexture height, RenderTexture dst)
    {

    }

    void DispatchFor(RenderTexture rt, int kernel)
    {
        int gx = (rt.width + 7) / 8;
        int gy = (rt.height + 7) / 8;
        erosionCS.Dispatch(kernel, gx, gy, 1);
    }

    void RecreateRTs(ref RenderTexture T, ref RenderTexture tmp, ref RenderTexture area, int w, int h)
    {
        if (T != null) T.Release();
        if (tmp != null) tmp.Release();
        if (area != null) area.Release();

        var descT = new RenderTextureDescriptor(w, h, RenderTextureFormat.RFloat, 0);
        descT.enableRandomWrite = true;
        T = new RenderTexture(descT); T.Create();
        tmp = new RenderTexture(descT); tmp.Create();

        var descA = new RenderTextureDescriptor(w, h, RenderTextureFormat.RFloat, 0);
        descA.enableRandomWrite = true;
        area = new RenderTexture(descA); area.Create();
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