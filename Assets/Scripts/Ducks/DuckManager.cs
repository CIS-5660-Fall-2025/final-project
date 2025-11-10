using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DuckManager : MonoBehaviour
{
    [SerializeField] Player player;
    public static DuckManager Instance;
    public List<IBoid> Ducks = new List<IBoid>();
    public List<Transform> EnemyArray = new List<Transform>();
    public Vector3 TargetPosition = new Vector3(300, 0, 300);

    private float healTimer = 10;

    void Awake()
    {
        Instance = this;
    }

    void Start() {
        //StartCoroutine(SetTargetAssignEnemy());
    }

    void Update()
    {
        healTimer -= Time.deltaTime;
        if (healTimer < 0) {
            healTimer = 10;
            if (player.Health < 1500)
                player.Health += Ducks.Count * 10;
        }
    }

    private IEnumerator SetTargetAssignEnemy() {
        yield return null;
    }

    public void DuckDied(IBoid d) {
        Ducks.Remove(d);
    }

    private Vector3 GetCenter() {
        Vector3 center = Vector3.zero;
        int count = 0;
        foreach (IBoid other in Ducks)
        {
            center += other.GetPosition();
            count++;
        }

        if (count == 0) return Vector3.zero;
        center /= count;
        return center;
    }
}
