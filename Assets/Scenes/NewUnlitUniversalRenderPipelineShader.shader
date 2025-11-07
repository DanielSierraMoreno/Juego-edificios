Shader "Custom/Electric Cube Combined Offset"
{
    Properties
    {
        [MainTexture] _BaseMap("Albedo (RGB)", 2D) = "white" {}
        [MainColor] _BaseColor("Color", Color) = (1,1,1,1)
        [HDR] _EmissionColor("Emission Color", Color) = (0,0,0)
        
        // --- Propiedades para el Desplazamiento Suave (Oscilatorio) ---
        _SlidingMaxOffset("Sliding Max Offset (+/-)", Range(0.0, 0.05)) = 0.01 
        _SlidingSpeed("Sliding Oscillation Speed", Range(0.1, 40.0)) = 5.0

        // --- Propiedades para el Ruido/Temblor por Píxel ---
        _NoiseMagnitude("Noise Magnitude (+/-)", Range(0.0, 0.02)) = 0.005 
        _NoiseSpeed("Noise Speed", Range(0.1, 20.0)) = 10.0
    }

    SubShader
    {
        Tags 
        { 
            "RenderType" = "Opaque" 
            "RenderPipeline" = "UniversalPipeline" 
            "UniversalMaterialType" = "Unlit"
        }

        LOD 100

        Pass
        {
            Name "Forward"
            Tags { "LightMode" = "UniversalForward" }

            HLSLPROGRAM
            #pragma target 3.0

            #pragma vertex vert
            #pragma fragment frag
            
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            // Definiciones de propiedades del Shader (Input)
            CBUFFER_START(UnityPerMaterial)
                TEXTURE2D(_BaseMap);
                SAMPLER(sampler_BaseMap);
                float4 _BaseMap_ST;

                float4 _BaseColor;
                float4 _EmissionColor;
                
                // Variables para el desplazamiento suave
                float _SlidingMaxOffset;
                float _SlidingSpeed;

                // Variables para el ruido por píxel
                float _NoiseMagnitude;
                float _NoiseSpeed;
            CBUFFER_END
            
            // --- LÓGICA DE DESPLAZAMIENTO HLSL COMBINADA ---
            
            // Función pseudo-aleatoria simple (para el ruido por píxel)
            float SimpleRandom(float2 co, float speed_multiplier)
            {
                float time_seed = _Time.y * speed_multiplier + co.x * co.y * 10.0;
                return frac(sin(dot(float2(time_seed, time_seed * 1.618), float2(12.9898, 78.233))) * 43758.5453);
            }

            float2 GetCombinedOffsetUV(float2 uv)
            {
                float2 finalOffset = float2(0, 0);

                // --- 1. Cálculo del Offset Suave (Oscilatorio / Desplazamiento General) ---
                float sliding_time_val = _Time.y * _SlidingSpeed;
                float slidingOffsetX = sin(sliding_time_val + 1.5) * _SlidingMaxOffset;
                float slidingOffsetY = cos(sliding_time_val + 0.5) * _SlidingMaxOffset; 
                finalOffset += float2(slidingOffsetX, slidingOffsetY);

                // --- 2. Cálculo del Ruido por Píxel (Temblor / Borrosidad) ---
                float randomX = SimpleRandom(uv + float2(0.1, 0.0), _NoiseSpeed);
                float randomY = SimpleRandom(uv + float2(0.0, 0.7), _NoiseSpeed);
                
                float noiseOffsetX = (randomX * 2.0 * _NoiseMagnitude) - _NoiseMagnitude;
                float noiseOffsetY = (randomY * 2.0 * _NoiseMagnitude) - _NoiseMagnitude;
                finalOffset += float2(noiseOffsetX, noiseOffsetY);

                // 3. Aplicar el offset combinado
                uv.x += finalOffset.x;
                uv.y += finalOffset.y;

                return uv;
            }
            
            // --- FIN DE LÓGICA DE DESPLAZAMIENTO COMBINADA ---

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0; 
            };

            Varyings vert (Attributes input)
            {
                Varyings output;
                
                VertexPositionInputs positionInputs = GetVertexPositionInputs(input.positionOS.xyz);
                output.positionCS = positionInputs.positionCS;
                
                output.uv = TRANSFORM_TEX(input.uv, _BaseMap);

                return output;
            }

            half4 frag (Varyings input) : SV_TARGET
            {
                // ** APLICACIÓN DEL OFFSET COMBINADO **
                float2 uv_modified = GetCombinedOffsetUV(input.uv);
                
                // Muestrear la textura de Albedo con el UV modificado
                half4 baseColor = SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, uv_modified) * _BaseColor;

                // Añadir la Emisión
                half3 emission = _EmissionColor.rgb;
                
                return half4(baseColor.rgb + emission, baseColor.a);
            }
            ENDHLSL
        }
    }
}