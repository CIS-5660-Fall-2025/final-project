using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, IDamagable
{
    [SerializeField] Camera mainCamera;
    [SerializeField] Transform targetTransform;
    Ship ship;
    [SerializeField] PlayerTurret[] turrets;
    public int Health { get; set;} = 1600;

    float fireDelay;

    // Start is called before the first frame update
    void Start()
    {
        ship = GetComponent<Ship>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.A)) {
            ship.Turn(true);
        } else if (Input.GetKey(KeyCode.D)) {
            ship.Turn(false);
        }

        if (Input.GetKey(KeyCode.W)) {
            ship.Accelerate(true);
        } else if (Input.GetKey(KeyCode.S)) {
            ship.Accelerate(false);
        }

        Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
        Plane plane = new Plane(Vector3.up, Vector3.up * 0.5f);

        if (plane.Raycast(ray, out float distance))
        {
            Vector3 worldPoint = ray.GetPoint(distance);

            worldPoint.y = targetTransform.position.y;
            targetTransform.position = worldPoint;
        }

        fireDelay -= Time.deltaTime;
        if (Input.GetMouseButton(0) && fireDelay < 0.001f) {
            fireDelay = 0.1f;
            for (int i = 0; i < turrets.Length; i++) {
                if (turrets[i].FireGuns()) break;
            }
        } 
    }

    public void InflictDamage(int dmg) {
        Health -= dmg;
        if (Health <= 0) {
            Destruction();
        }
    }

    private void Destruction() {
        Debug.Log("dead");
    }
}

public interface IDamagable
{
    int Health { get; set;}
    void InflictDamage(int dmg);

}
