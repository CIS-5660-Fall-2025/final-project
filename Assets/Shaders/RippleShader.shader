Shader "Unlit/RippleShader"
{
    Properties
    {
        
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _PrevRT;
            sampler2D _CurrentRT;
            float4 _CurrentRT_TexelSize;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float3 e = float3(_CurrentRT_TexelSize.xy,0);
                float2 uv = i.uv;
                float speed = 0.05f;

                float p_down = tex2D(_CurrentRT, uv - e.zy * speed).x;
                float p_up = tex2D(_CurrentRT, uv + e.zy * speed).x;
                float p_left = tex2D(_CurrentRT, uv - e.xz * speed).x;
                float p_right = tex2D(_CurrentRT, uv + e.xz * speed).x;

                float p_center = tex2D(_PrevRT, uv).x;

                float d = (p_down + p_up + p_left + p_right) / 2 - p_center;
                d *= 0.96f;
                return d;
            }
            ENDCG
        }
    }
}
