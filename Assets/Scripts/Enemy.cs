using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Enemy : MonoBehaviour
{
    private GameObject player;
    
    protected float getDist() {
        return Vector3.Distance(transform.position, player.transform.position);
    }
    protected bool lineOfSightCheck() {
        if (player == null) {
            return false;
        }
        return !Physics.Raycast(player.transform.position, 
            transform.position - player.transform.position, getDist(), 1 << 7);
    }
}
