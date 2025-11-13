using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FogVariables : MonoBehaviour
{
    public Material FullScreenMat;
    public Transform FogBox;

    // Start is called before the first frame update
    void Start()
    {
        FullScreenMat.SetVector("_BoundsMin", FogBox.position - FogBox.localScale / 2);
        FullScreenMat.SetVector("_BoundsMax", FogBox.position + FogBox.localScale / 2);
    }
    void OnDestroy() {
        
    }
}
