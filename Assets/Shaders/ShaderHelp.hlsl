
void DistortVertex_float(float3 WorldPos, float Time, float Intensity, float Scale, float TimeScale, out float OUT)
{
    
    float2 scaledPos = WorldPos.xz * Scale;

    float wave1 = 0.08 * sin(dot(scaledPos, normalize(float2(1.0, 0.3))) * 0.157 + Time * 0.06 * TimeScale);
    float wave2 = 0.06 * sin(dot(scaledPos, normalize(float2(-0.6, 1.0))) * 0.196 + Time * 0.04 * TimeScale + 1.37);
    float wave3 = 0.045 * sin(dot(scaledPos, normalize(float2(0.9, -0.2))) * 0.1142 + Time * 0.08 * TimeScale + 2.9);

    float displacement = (wave1 + wave2 + wave3) * Intensity;

    OUT = displacement;
}
