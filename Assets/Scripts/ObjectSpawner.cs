using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    public GameObject prefabA;
    public GameObject prefabB;

    public Transform player;

    public float innerRadius = 30f;   // No spawns inside this
    public float outerRadius = 200f;  // Spawns only inside this

    public int spawnCount = 50;       // How many to spawn per call

    [ContextMenu("Spawn Now")]
    public void Spawn()
    {
        for (int i = 0; i < spawnCount; i++)
        {
            Vector2 offset;

            // Generate a random point until it's within the valid ring
            do
            {
                offset = Random.insideUnitCircle * outerRadius;
            }
            while (offset.magnitude < innerRadius);

            Vector3 pos = new Vector3(
                player.position.x + offset.x,
                0f,
                player.position.z + offset.y
            );

            GameObject prefab = (Random.value < 0.5f ? prefabA : prefabB);
            Instantiate(prefab, pos, Quaternion.identity);
        }
    }
}
