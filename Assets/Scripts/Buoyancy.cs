using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Buoyancy : MonoBehaviour
{
    [SerializeField] float amp = 0.4f;
    [SerializeField] float timescale = 0.5f;

    private float timeOffset;
    private float yOffset;
    // Start is called before the first frame update
    void Start()
    {
        timeOffset = Random.value;
        yOffset = transform.localPosition.y;
    }

    // Update is called once per frame
    void Update()
    {
        transform.localPosition = new Vector3(
            transform.localPosition.x, 
            yOffset + amp * Mathf.Sin(timescale * Time.deltaTime + timeOffset),
            transform.localPosition.z);
    }
}
