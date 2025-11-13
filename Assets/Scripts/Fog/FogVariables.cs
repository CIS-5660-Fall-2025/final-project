using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FogVariables : MonoBehaviour
{
    public Material FullScreenMat;
    public Transform FogBox;
    private Vector3 savedScale;

    // Start is called before the first frame update
    void Start()
    {
        savedScale = FogBox.lossyScale;
        FullScreenMat.SetVector("_BoundsMin", FogBox.position - savedScale / 2);
        FullScreenMat.SetVector("_BoundsMax", FogBox.position + savedScale / 2);

        StartCoroutine(UpdateOffset());
    }

    private IEnumerator UpdateOffset() {
        while (true) {
            yield return null;
            FullScreenMat.SetVector("_BoundsMin", FogBox.position - savedScale / 2);
            FullScreenMat.SetVector("_BoundsMax", FogBox.position + savedScale / 2);
        }
    }

    void OnDestroy() {
        
    }
}
