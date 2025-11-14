using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class BulletPool
{
    private static readonly int maxSizeBulletPool = 120;
    private static readonly int defaultSizeBulletPool = 20;

    private static GameObject bulletPrefab = Resources.Load<GameObject>("Shell");
    public static IObjectPool<Projectile> bulletPool = new ObjectPool<Projectile>(CreateBullet, ActionOnGetBullet, ActionOnReleaseBullet, ActionOnDestroyBullet, true, defaultSizeBulletPool, maxSizeBulletPool);

    private static Projectile CreateBullet() {
        GameObject bullet = Object.Instantiate(bulletPrefab);
        bullet.SetActive(false);
        return bullet.GetComponent<Projectile>();
    }

    private static void ActionOnGetBullet(Projectile bullet) {
        bullet.gameObject.SetActive(true);
    }

    private static void ActionOnReleaseBullet(Projectile bullet) {
        bullet.ResetValues();

        //discard the trail
        bullet.gameObject.SetActive(false);
    }

    private static void ActionOnDestroyBullet(Projectile bullet) {
        GameObject.Destroy(bullet.gameObject);
    }
    
}
