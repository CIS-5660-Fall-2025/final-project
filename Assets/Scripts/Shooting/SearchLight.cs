using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SearchLight : MonoBehaviour
{
    [SerializeField] Transform targetTransform;
    private float TurnSpeed;
    private float cTurretTurn;


    // Start is called before the first frame update
    void Start()
    {
        TurnSpeed = 100;
    }

    // Update is called once per frame
    void Update()
    {
        TurnLight();

        transform.localEulerAngles += cTurretTurn * Time.deltaTime * Vector3.up;
    }

    protected void TurnLight() {
        Vector3 TargetDir = targetTransform.position - transform.position;
        TargetDir.y = 0;
        float dir = Vector3.Dot(-transform.right, TargetDir.normalized);
        if (dir > 0.02f){
            cTurretTurn = Mathf.Max(-TurnSpeed, cTurretTurn - 900 * Time.deltaTime);
        } else if (dir < -0.02f) {
            cTurretTurn = Mathf.Min(TurnSpeed, cTurretTurn + 900 * Time.deltaTime);
        } else {
            if (Mathf.Abs(cTurretTurn) > 0.001f){
                cTurretTurn /= 1.4f;
            } else {
                cTurretTurn = 0;
            }
        }
    }
}
