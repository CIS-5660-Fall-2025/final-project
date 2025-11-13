static const float STEP_SIZE = 0.05;


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
float sampleDensity(float3 Position)
{
    return 0.1;
}

void RayMarcher_float(
    float4 SceneColor,
    float3 RayOrigin,
    float3 RayDirection,
    float3 BoundsMin,
    float3 BoundsMax,
    float Depth,
    float3 RayDirectionVew,
    out float4 outValue
)
{
    float2 RayBoxInfo = rayBoxDist(BoundsMin, BoundsMax, RayOrigin, normalize(RayDirection));
    
    
    float4 finalCol = SceneColor;
    
    float distToPoint = Depth / abs(RayDirectionVew.z);
    
    /* // box raytrace test
    if (RayBoxInfo.y > 0 && RayBoxInfo.x < distToPoint)
    {
        finalCol = 0;
    }
    */
    float distTravelled = 0;
    float distLimit = min(distToPoint - RayBoxInfo.x, RayBoxInfo.y);
    
    float totalDensity = 0;
    while (distTravelled < distLimit)
    {
        float3 marchPos = RayOrigin + RayDirection * (RayBoxInfo.x + distTravelled);
        totalDensity += sampleDensity(marchPos) * STEP_SIZE;
        distTravelled += STEP_SIZE;

    }
    float transmittance = exp(-totalDensity);
    
    
    outValue = lerp(float4(0.7, 0.7, 0.7, 1.0), finalCol, transmittance);

}
