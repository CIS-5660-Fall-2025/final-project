float2 rayBoxDist(float3 BoundsMin, float3 BoundsMax, float3 RayOrigin, float3 RayDirection)
{
    float3 t0 = (BoundsMin - RayOrigin) / RayDirection;
    float3 t1 = (BoundsMax - RayOrigin) / RayDirection;
    float3 tmin = min(t0, t1);
    float3 tmax = max(t0, t1);

    float distA = max(max(tmin.x, tmin.y), tmin.z);
    float distB = min(min(tmax.x, tmax.y), tmax.z);

    float distToBox = max(0, distA);
    float distInsideBox = max(0, distB - distToBox);
    return float2(distToBox, distInsideBox);
}

void RayMarcher_float(
    float4 SceneColor,
    float3 RayOrigin,
    float3 RayDirection,
    float3 BoundsMin,
    float3 BoundsMax,
    out float4 outValue
)
{
    float2 RayBoxInfo = rayBoxDist(BoundsMin, BoundsMax, RayOrigin, RayDirection);

    float4 finalCol = SceneColor;
    if (RayBoxInfo.y > 0)
    {
        finalCol = 0;
    }

    outValue = finalCol;
}
