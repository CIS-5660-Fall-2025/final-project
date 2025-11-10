using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Turret : MonoBehaviour
{
    [SerializeField] GameObject shellPrefab;
    [SerializeField] Transform targetTransform;
    [SerializeField] protected Transform turretBase, turret;
    [SerializeField] Transform firePoint;
    [Header("Constraints")]
    public bool FrontBlocked;
    public bool BackBlocked;
    [Header("Reload")]
    public float ReloadTime;
    public float reloadTimer;
    [Header("Turning")]
    public float TurretSpeed;
    public float cTurretTurn;
    [Header("Projectile Settings")]
    public int damage;
    public int bulletSpeed;
    

    protected bool CheckAngle() {
        float dot = Vector3.Dot(turretBase.forward, turret.forward);
        if (FrontBlocked && dot > 0.8) return false;
        if (BackBlocked && dot < -0.8) return false;
        return true;
    }

    protected bool CheckAim() {
        Vector3 TargetDir = (targetTransform.position - turretBase.position);
        TargetDir.y = 0;
        Vector3 turretForward = turret.forward;
        turretForward.y = 0;
        return Vector3.Dot(TargetDir.normalized, turretForward.normalized) > 0.98f;
    }

    protected void TurnTurret() {
        Vector3 TargetDir = targetTransform.position - turretBase.position;
        TargetDir.y = 0;
        float dir = Vector3.Dot(-turret.right, TargetDir.normalized);
        if (dir > 0.02f){
            cTurretTurn = Mathf.Max(-TurretSpeed, cTurretTurn - 900 * Time.deltaTime);
        } else if (dir < -0.02f) {
            cTurretTurn = Mathf.Min(TurretSpeed, cTurretTurn + 900 * Time.deltaTime);
        } else {
            if (Mathf.Abs(cTurretTurn) > 0.001f){
                cTurretTurn /= 1.4f;
            } else {
                cTurretTurn = 0;
            }
        }
    }

    protected bool Fire(bool offset, float offsetAmount = 1f) {
        if (reloadTimer > 0.01f || !CheckAngle() || !CheckAim() || getDist() < 2.4f) return false;
        reloadTimer = ReloadTime;

        Vector3 targetPos = targetTransform.position;
        if (offset) {
            Vector3 offsetPos = Random.insideUnitSphere * offsetAmount;
            offsetPos.y = 0;
            targetPos += offsetPos;
        }

        Vector3 bulletDir = Math.CalculateElevation(firePoint.position, targetPos, 4f, bulletSpeed);
        if (bulletDir.magnitude < 0.5f) return false;

        GameObject shell = Instantiate(shellPrefab, firePoint.position, Quaternion.identity);
        shell.GetComponent<Projectile>().SetValues(damage, bulletSpeed * bulletDir);
        return true;
    }

    protected float getDist() {
        return Vector3.Distance(turret.position, targetTransform.position);
    }

    protected virtual IEnumerator idleTurretTurn() {
        while (true) {
            yield return new WaitForSeconds(3);
            if (Vector3.Dot(-turret.right, turretBase.forward) > 0.6f) {
                cTurretTurn = -12;
            } else if (Vector3.Dot(-turret.right, turretBase.forward) < -0.6f) {
                cTurretTurn = 12;
            } else {
                float r = Random.value;
                if (Mathf.Abs(cTurretTurn) > 0.1f) {
                    cTurretTurn = 0;
                } else if (r < 0.4f) {
                    cTurretTurn = 10;
                } else if (r < 0.8f) {
                    cTurretTurn = -10;
                } else {
                    cTurretTurn = 0;
                }
            }
        }
    }

}
