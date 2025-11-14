using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class Fog2DTexture : MonoBehaviour
{
    public int TextureSize = 768;
    public RenderTexture ObjectsRT;
    private RenderTexture CurrRT, TempRT;
    public Shader DissipationShader, AddShader, ScrollShader;
    private Material DissipationMat, AddMat, ScrollMat;

    public Material FullScreenMat;

    private float rippleWorldSize = 400f;

    //temp
    private Material testMat;
    private Vector3 prevLocation;

    // Start is called before the first frame update
    void Start()
    {
        //Creating render textures and materials
        CurrRT = new RenderTexture(TextureSize, TextureSize, 0, RenderTextureFormat.RFloat);
        TempRT = new RenderTexture(TextureSize, TextureSize, 0, RenderTextureFormat.RFloat);
        DissipationMat = new Material(DissipationShader);
        AddMat = new Material(AddShader);
        ScrollMat = new Material(ScrollShader);
        
        FullScreenMat.SetTexture("_DissipationTexture", CurrRT);

        //temp
        testMat = GetComponent<Renderer>().material;
        testMat.SetTexture("_MainTex", CurrRT);

        prevLocation = transform.position;
        StartCoroutine(Dissipate());
    }

    // Update is called once per frame
    IEnumerator Dissipate()
    {
        Vector3 playerOffset;
        while (true) {

            testMat.SetVector("_TexPosition", transform.position);

            playerOffset = transform.position - prevLocation;
            if (playerOffset != Vector3.zero)
            {
                // Convert world offset to normalized UV offset
                Vector2 uvOffset = new Vector2(
                    playerOffset.x / rippleWorldSize,
                    playerOffset.z / rippleWorldSize
                );

                // Negative offset to keep ripples fixed in world space
                Vector4 offsetVec = new Vector4(-uvOffset.x, -uvOffset.y, 0, 0);
                ScrollMat.SetVector("_Offset", offsetVec);

                // Scroll CurrRT
                ScrollMat.SetTexture("_MainTex", CurrRT);
                Graphics.Blit(CurrRT, TempRT, ScrollMat);
                SwapRTs(ref TempRT, ref CurrRT);
            }


            //Copy the result of blending the render textures to TempRT.
            AddMat.SetTexture("_ObjectsRT", ObjectsRT);
            AddMat.SetTexture("_CurrentRT", CurrRT);
            Graphics.Blit(null, TempRT, AddMat);

            SwapRTs(ref TempRT, ref CurrRT);
            //CurrRT holds the new blended one, 
            //TempRT is reused in next step

            yield return new WaitForSeconds(0.004f);

            //Calculate the dissipation, put in TempRT
            DissipationMat.SetTexture("_MainTex", CurrRT);
            Graphics.Blit(null, TempRT, DissipationMat);

            testMat.SetVector("_TexPosition", transform.position);

            //Swap TempRT and CurrentRT
            SwapRTs(ref TempRT, ref CurrRT);

            prevLocation = transform.position;
            //Wait for two frames and then execute again.
            yield return new WaitForSeconds(0.004f);
        }
    }

    void SwapRTs(ref RenderTexture a, ref RenderTexture b)
    {
        var temp = a;
        a = b;
        b = temp;
    }
}