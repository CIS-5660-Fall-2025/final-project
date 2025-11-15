using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectColor : MonoBehaviour
{
    private MaterialPropertyBlock mpb;
    private MeshRenderer mr;
    private static readonly Color[] colors =
    {
        Color.red,
        new Color(1f, 0.5f, 0f),
        Color.yellow,
        Color.green,
        Color.cyan,
        Color.blue,
        new Color(0.5f, 0f, 1f)

    };
    [SerializeField] bool positionAware;
    [SerializeField] bool despawnable;

    void Awake()
    {
        mr = GetComponent<MeshRenderer>();
        mpb = new MaterialPropertyBlock();
    }
    
    public void Reset() {
        Color c;
        if (positionAware){
            if (transform.position.x > 0) {
                if (transform.position.z > 0) {
                    c = Color.red;
                } else {
                    c = Color.yellow;
                }
            } else {
                if (transform.position.z > 0) {
                    c = Color.green;
                } else {
                    c = Color.blue;
                }
            }
        } else {
            c = colors[Random.Range(0, colors.Length)];
        }

        mpb.SetColor("_BaseColor", c);
        mr.SetPropertyBlock(mpb);

        
        //randomize orientation
        transform.localEulerAngles = new Vector3(0, 360 * Random.value, 0);

        if (despawnable) {
            StartCoroutine(Despawn());
        }
    }

    IEnumerator Despawn() {
        while (true) {
            yield return new WaitForSeconds (10 + 5 * Random.value);

            if (Vector3.Distance(transform.position, EnemyManager.Instance.playerTransform.position) > 320) {
                //despawn
                BulletPool.ballPool.Release(this.gameObject);
                break;
            }
        }
    }
}
