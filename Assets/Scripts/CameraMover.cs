using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMover : MonoBehaviour
{
    [SerializeField] Transform targetTranform, followTransform;
    private Vector3 offset;
    private float offsetMultiplier;
    private Vector3 velocity;
    // Start is called before the first frame update
    void Start()
    {
        followTransform.position = targetTranform.position;
        offset = transform.position - targetTranform.position;
        offsetMultiplier = 1;
        velocity = Vector3.zero;
    }

    void Update() {
        float scrollValue = Input.mouseScrollDelta.y;
        if (scrollValue != 0f)
        {
            float step = 0.05f;
            offsetMultiplier -= Mathf.Sign(scrollValue) * step;
            offsetMultiplier = Mathf.Clamp(offsetMultiplier, 0.3f, 1f);
        }
    }

    void FixedUpdate()
    {
        followTransform.position = Vector3.SmoothDamp(
            followTransform.position,
            targetTranform.position,
            ref velocity,
            0.7f,
            Mathf.Infinity,
            Time.fixedDeltaTime);

        transform.position = followTransform.position + offset * offsetMultiplier;
    }
}
