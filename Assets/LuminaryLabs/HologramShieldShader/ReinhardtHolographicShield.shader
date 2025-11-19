Shader "Custom/ReinhardtHolographicShield"
{
    Properties
    {
        _MainTex ("Noise Texture", 2D) = "white" {}
        _NormalMap ("Normal Map", 2D) = "bump" {}

        _ShieldColor ("Shield Color", Color) = (0.0, 0.5, 1.0, 1.0)
        _EdgeColor ("Hex Pattern Color (Scan/Collision)", Color) = (0.3, 0.8, 1.0, 1.0)
        _BaseHexColor ("Static Hex Pattern Color", Color) = (0.0, 0.3, 0.5, 1.0)

        _FresnelPower ("Fresnel Power", Float) = 3.0
        _FresnelIntensity ("Fresnel Intensity", Range(0, 1)) = 0.3

        _TimeScale ("Time Scale", Float) = 1.0
        _HexScale ("Hexagon Scale", Float) = 10.0 // Controla el tamaño de la repetición
        _HexEdgeSmooth ("Hex Edge Smoothness", Range(0.01, 0.5)) = 0.05
        _HexThickness ("Hex Line Thickness", Range(0.0, 0.5)) = 0.05

        [Header(Collision Effect)]
        
        [Header(General Settings)]
        _BaseAlpha ("Base Alpha", Range(0.0, 0.2)) = 0.05
        _Distortion ("Distortion Amount (UV)", Range(0, 50)) = 10
        _OverallBrightness ("Overall Brightness Multiplier", Range(1.0, 5.0)) = 1.2
        [Toggle(USE_UV_TILING)]_UseUVTiling ("Use Default UV Tiling (Stretch)", Float) = 0

        [Header(Scan Effect)]
        _ScanSpeed ("Scan Speed", Float) = 1.0
        _ScanWidth ("Scan Width", Range(0, 1)) = 0.1

        [Header(Emission)]
        _EmissionColor ("Emission Color", Color) = (0.0, 0.5, 1.0, 1.0)
        _EmissionIntensity ("Emission Intensity", Range(0, 10)) = 1.0
    }
    SubShader
    {
        Tags { "RenderType"="Transparent" "Queue"="Transparent" "RenderPipeline"="UniversalPipeline" }
        LOD 300

        Blend SrcAlpha OneMinusSrcAlpha
        Cull Back
        ZWrite Off

        Pass
        {
            Name "ReinhardtShield"

            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #pragma shader_feature USE_UV_TILING

            #pragma multi_compile _ _MAIN_LIGHT_SHADOWS
            #pragma multi_compile _ _MAIN_LIGHT_SHADOWS_CASCADE
            #pragma multi_compile _ _ADDITIONAL_LIGHTS_VERTEX _ADDITIONAL_LIGHTS
            #pragma multi_compile _ _ADDITIONAL_LIGHT_SHADOWS
            #pragma multi_compile _ _SHADOWS_SOFT

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            // Define maximum collisions supported.
            #define MAX_COLLISIONS 4

            struct Attributes
            {
                float4 positionOS : POSITION;
                float3 normalOS   : NORMAL;
                float4 tangentOS  : TANGENT;
                float2 uv         : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv         : TEXCOORD0;
                float3 positionWS : TEXCOORD1;
                float3 normalWS   : TEXCOORD2;
                float4 positionNDC: TEXCOORD3;
                float3 viewDirWS  : TEXCOORD4;
                float3x3 TBN      : TEXCOORD5;
            };

            // Texture declarations.
            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);
            TEXTURE2D(_NormalMap);
            SAMPLER(sampler_NormalMap);

            CBUFFER_START(UnityPerMaterial)
                float4 _MainTex_ST;
                float4 _NormalMap_ST;

                float4 _ShieldColor;
                float4 _EdgeColor;
                float4 _BaseHexColor;

                float _FresnelPower;
                float _FresnelIntensity;

                float _TimeScale;
                float _HexScale;
                float _HexEdgeSmooth;
                float _HexThickness;

                // Collision arrays.
                float4 _CollisionPoints[MAX_COLLISIONS];
                float _CollisionRadii[MAX_COLLISIONS];
                float _CollisionIntensities[MAX_COLLISIONS];
                float _CollisionStartTimes[MAX_COLLISIONS];
                int   _NumCollisions;
                float _EffectDuration;

                float _BaseAlpha;
                float _Distortion;
                float _OverallBrightness;
                float _UseUVTiling; // Declaración de la variable para el toggle

                float _ScanSpeed;
                float _ScanWidth;
                
                float4 _EmissionColor;
                float _EmissionIntensity;
            CBUFFER_END

            // Basic hexagon pattern: returns 1 inside hex border, 0 outside.
            float HexagonPattern(float2 p, float size, float smooth)
            {
                p = abs(p);
                float hex = max(p.x, dot(p, normalize(float2(0.5, 0.866))));
                return 1.0 - smoothstep(size - smooth, size, hex);
            }

            // Hexagon border.
            float HexagonBorder(float2 p, float size, float lineWidth, float smooth)
            {
                float outer = HexagonPattern(p, size, smooth);
                float inner = HexagonPattern(p, size - lineWidth, smooth);
                return outer - inner;
            }

            // Generates a hex grid pattern.
            float HexGrid(float2 uv, float scale, float lineWidth, float smooth)
            {
                float2 p = uv * scale;
                float2 grid = float2(1.0, 0.866);
                float2 gridUV = frac(p / grid) * 2.0 - 1.0;
                if (fmod(floor(p.y / grid.y), 2.0) != 0.0)
                {
                    gridUV.x += 1.0;
                }
                return HexagonBorder(gridUV, 0.95, lineWidth, smooth);
            }


            // Computes a collision mask for a single collision.
            float CollisionMask(float3 fragPos, float3 collisionPoint, float radius, float collisionStart, float effectDuration)
            {
                float baseMask = 1.0 - smoothstep(radius * 0.8, radius, distance(fragPos, collisionPoint));
                float fade = saturate(1.0 - ((_Time.y - collisionStart) / effectDuration));
                return baseMask * fade;
            }

            // Scan mask: produces a horizontal moving band that is always active.
            float ScanMask(float2 uv, float3 posWS) 
            {
                // El movimiento de la banda (la animación) se basa en la coordenada Z del mundo.
                float globalZPosition = posWS.z; 
                
                // Calcula la posición de la banda basada en Z y el tiempo.
                float scanPos = frac(globalZPosition * 0.1 + _Time.y * _ScanSpeed);
                
                // La banda se dibuja a lo largo del eje Y (uv.y, que es surfaceCoord.y).
                float bandPosition = uv.y;
                
                float mask = smoothstep(scanPos - _ScanWidth, scanPos, bandPosition) 
                             - smoothstep(scanPos, scanPos + _ScanWidth, bandPosition);
                return mask;
            }

            Varyings vert(Attributes IN)
            {
                Varyings OUT = (Varyings)0;
                OUT.positionWS = TransformObjectToWorld(IN.positionOS.xyz);
                OUT.positionCS = TransformWorldToHClip(OUT.positionWS);
                OUT.positionNDC = OUT.positionCS * 0.5f;
                OUT.positionNDC.xy = float2(OUT.positionNDC.x, OUT.positionNDC.y * _ProjectionParams.x)
                                     + float2(OUT.positionNDC.w, OUT.positionNDC.w);
                OUT.positionNDC.zw = OUT.positionCS.zw;
                OUT.normalWS = TransformObjectToWorldNormal(IN.normalOS);
                float3 tangentWS = TransformObjectToWorldDir(IN.tangentOS.xyz);
                float3 bitangentWS = cross(OUT.normalWS, tangentWS) * IN.tangentOS.w;
                OUT.TBN = float3x3(tangentWS, bitangentWS, OUT.normalWS);
                OUT.viewDirWS = GetWorldSpaceViewDir(OUT.positionWS);
                OUT.uv = TRANSFORM_TEX(IN.uv, _MainTex);
                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                // Animation/distortion from noise.
                float2 noiseUV = IN.uv * 2.0 + _Time.y * _TimeScale * 0.1;
                float noise = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, noiseUV).r;
                float noise2 = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, noiseUV * 1.5 + float2(0.7, 0.3)).r;
                
                // --- CALCULO DE COLISIÓN (MOVIDO) ---
                float collisionMask = 0.0;
                for (int i = 0; i < _NumCollisions; i++)
                {
                    float mask = CollisionMask(IN.positionWS, _CollisionPoints[i].xyz, _CollisionRadii[i], _CollisionStartTimes[i], _EffectDuration);
                    mask *= _CollisionIntensities[i];
                    collisionMask = max(collisionMask, mask);
                }
                // --- FIN CALCULO DE COLISIÓN ---


                // --- DISTORSIÓN SUTIL CONDICIONAL ---
                float distortionFactor = _Time.y * 0.01 * collisionMask; 
                float2 normalDistortionUV = IN.uv + distortionFactor; 

                float3 normalMap = UnpackNormal(SAMPLE_TEXTURE2D(_NormalMap, sampler_NormalMap, normalDistortionUV));
                float3 normalTS = normalize(normalMap);
                float3 normalWS = normalize(mul(normalTS, IN.TBN));

                // La distorsión final del patrón.
                float2 distortionOffset = (normalTS.xy * _Distortion * 0.01);
                // --- FIN DISTORSIÓN SUTIL CONDICIONAL ---
                
                // Fresnel for subtle glow.
                float3 viewDir = normalize(IN.viewDirWS);
                float fresnel = pow(1.0 - saturate(dot(normalWS, viewDir)), _FresnelPower);
                
                
                // --- MODIFICACIÓN DE TILING CON SWITCH ---
                float2 surfaceCoord;

                #if defined(USE_UV_TILING)
                    // Opción 1: Tiling por defecto (estira los hexágonos con la escala del objeto)
                    surfaceCoord = IN.uv;
                #else
                    // Opción 2: Tiling Constante (usa World Space YZ)
                    surfaceCoord = IN.positionWS.yz; 
                #endif
                // --- FIN MODIFICACIÓN DE TILING CON SWITCH ---


                // Aplicamos la distorsión a la coordenada seleccionada.
                float2 distortedSurfaceUV = surfaceCoord + distortionOffset;
                
                // Base hex pattern (usa distortedSurfaceUV)
                float baseHex = HexGrid(distortedSurfaceUV, _HexScale, _HexThickness, _HexEdgeSmooth);
                
                // Scan mask (ANIMATION FACTOR - usa surfaceCoord y positionWS)
                float scanMask = ScanMask(surfaceCoord, IN.positionWS); 

                // Combina los factores de animación (scan y colisión)
                float finalAnimationMask = saturate(max(scanMask, collisionMask));


                // --- CÁLCULO DE COLOR ---
                
                // 1. Calcula el color base del escudo incluyendo la emisión.
                float3 shieldBaseColor = _ShieldColor.rgb + (_EmissionColor.rgb * _EmissionIntensity);

                // 2. Patrón Hexagonal Estático: Mezcla el color base del escudo con el color base de las líneas.
                float3 staticHexColor = lerp(shieldBaseColor, _BaseHexColor.rgb, baseHex);

                // 3. Patrón Desplazante (Scan/Collision): Superpone el color de los bordes (_EdgeColor)
                // donde la animación (finalAnimationMask) está activa.
                float3 finalColor = lerp(staticHexColor, _EdgeColor.rgb, finalAnimationMask);

                // 4. Aplica el Fresnel glow.
                finalColor += shieldBaseColor * fresnel * _FresnelIntensity * 0.5;
                
                // 5. Aplicar el multiplicador de brillo general
                finalColor *= _OverallBrightness; 
                // --- FIN CÁLCULO DE COLOR ---


                // El Alpha se mantiene para controlar la transparencia.
                float alpha = saturate(_BaseAlpha + baseHex + finalAnimationMask);
                
                return half4(finalColor, alpha);
            }
            ENDHLSL
        }
    }
    FallBack "Universal Render Pipeline/Lit"
}