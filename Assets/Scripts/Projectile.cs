using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] Transform model;
    private Rigidbody rb;

    private int damage;
    private float lifetime;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        model.forward = rb.velocity.normalized;

        lifetime += Time.deltaTime;
        if (lifetime > 5) Destroy(gameObject);
    }

    void FixedUpdate() {
        rb.AddForce(-4f * Vector3.up, ForceMode.Acceleration);
    }

    void OnCollisionEnter(Collision c) {
        if (c.gameObject.TryGetComponent<IDamagable>(out IDamagable d)) {
            d.InflictDamage(damage);
        }

        Destruction();
    }

    private void Destruction() {
        Destroy(gameObject);
    }

    public void SetValues(int dmg, Vector3 velocity) {
        rb = GetComponent<Rigidbody>();
        damage = dmg;
        rb.velocity = velocity;
    }
}
