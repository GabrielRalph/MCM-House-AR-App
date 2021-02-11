// Compiled shader for iOS

//////////////////////////////////////////////////////////////////////////
// 
// NOTE: This is *not* a valid shader file, the contents are provided just
// for information and for debugging purposes only.
// 
//////////////////////////////////////////////////////////////////////////
// Skipping shader variants that would not be included into build of current scene.

Shader "GLTFUtility/Standard (Metallic)" {
Properties {
 _Color ("Color", Color) = (1.000000,1.000000,1.000000,1.000000)
 _MainTex ("Albedo (RGB)", 2D) = "white" { }
 _MetallicGlossMap ("Metallic (B) Gloss (G)", 2D) = "white" { }
 _Roughness ("Roughness", Range(0.000000,1.000000)) = 1.000000
 _Metallic ("Metallic", Range(0.000000,1.000000)) = 1.000000
[Normal]  _BumpMap ("Normal", 2D) = "bump" { }
 _BumpScale ("NormalScale", Float) = 1.000000
 _OcclusionMap ("Occlusion (R)", 2D) = "white" { }
 _EmissionMap ("Emission", 2D) = "black" { }
 _EmissionColor ("Emission Color", Color) = (0.000000,0.000000,0.000000,0.000000)
 _AlphaCutoff ("Alpha Cutoff", Range(0.000000,1.000000)) = 0.000000
}
SubShader { 
 LOD 200
 Tags { "RenderType"="Opaque" }
 Pass {
  Name "FORWARD"
  Tags { "LIGHTMODE"="FORWARDBASE" "SHADOWSUPPORT"="true" "RenderType"="Opaque" }
  //////////////////////////////////
  //                              //
  //      Compiled programs       //
  //                              //
  //////////////////////////////////
//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 1
Set CUBE Texture "unity_SpecCube0" to slot 6 sampler slot 0

Constant Buffer "FGlobals" (64 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SpecCube0_HDR at 24
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 40
  ScalarHalf _Metallic at 42
  ScalarHalf _AlphaCutoff at 44
  ScalarHalf _BumpScale at 46
  VectorHalf4 _Color at 48
  VectorHalf4 _EmissionColor at 56
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half2 u_xlat16_4;
    half4 u_xlat16_5;
    half4 u_xlat16_6;
    half3 u_xlat16_7;
    half3 u_xlat16_8;
    half3 u_xlat16_9;
    half u_xlat16_15;
    float u_xlat30;
    half u_xlat16_30;
    bool u_xlatb30;
    half u_xlat16_31;
    float u_xlat32;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb30 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb30) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat30 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat30 = rsqrt(u_xlat30);
    u_xlat2.xyz = float3(u_xlat30) * u_xlat2.xyz;
    u_xlat3.x = input.TEXCOORD3.w;
    u_xlat3.y = input.TEXCOORD4.w;
    u_xlat3.z = input.TEXCOORD5.w;
    u_xlat3.xyz = (-u_xlat3.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat30 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat30 = rsqrt(u_xlat30);
    u_xlat3.xyz = float3(u_xlat30) * u_xlat3.xyz;
    u_xlat16_1.x = dot((-u_xlat3.xyz), u_xlat2.xyz);
    u_xlat16_1.x = u_xlat16_1.x + u_xlat16_1.x;
    u_xlat16_1.xyz = half3(fma(u_xlat2.xyz, (-float3(u_xlat16_1.xxx)), (-u_xlat3.xyz)));
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_31 = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.x = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat4.z = (-float(u_xlat16_31)) + 1.0;
    u_xlat16_15 = half(fma((-u_xlat4.z), 0.699999988, 1.70000005));
    u_xlat16_15 = half(u_xlat4.z * float(u_xlat16_15));
    u_xlat16_15 = u_xlat16_15 * half(6.0);
    u_xlat16_6 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_1.xyz), level(float(u_xlat16_15)));
    u_xlat16_1.x = u_xlat16_6.w + half(-1.0);
    u_xlat16_1.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_1.x, half(1.0));
    u_xlat16_1.x = u_xlat16_1.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_1.xyz = u_xlat16_6.xyz * u_xlat16_1.xxx;
    u_xlat16_30 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_1.xyz = half3(u_xlat16_30) * u_xlat16_1.xyz;
    u_xlat16_15 = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat16_31 = u_xlat16_31 + (-u_xlat16_15);
    u_xlat16_31 = u_xlat16_31 + half(1.0);
    u_xlat16_31 = clamp(u_xlat16_31, 0.0h, 1.0h);
    u_xlat16_7.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.xzw = fma(u_xlat16_5.xxx, u_xlat16_7.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7.xyz = half3(u_xlat16_31) + (-u_xlat16_5.xzw);
    u_xlat30 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat32 = u_xlat30;
    u_xlat32 = clamp(u_xlat32, 0.0f, 1.0f);
    u_xlat30 = u_xlat30 + u_xlat30;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat30)), u_xlat3.xyz);
    u_xlat30 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat30 = clamp(u_xlat30, 0.0f, 1.0f);
    u_xlat16_8.xyz = half3(float3(u_xlat30) * float3(FGlobals._LightColor0.xyz));
    u_xlat30 = dot(u_xlat3.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat30 = u_xlat30 * u_xlat30;
    u_xlat4.x = u_xlat30 * u_xlat30;
    u_xlat30 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat4.xz).x;
    u_xlat30 = u_xlat30 * 16.0;
    u_xlat16_9.xyz = half3(float3(u_xlat16_5.xzw) * float3(u_xlat30));
    u_xlat16_9.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_15), float3(u_xlat16_9.xyz)));
    u_xlat16_31 = half((-u_xlat32) + 1.0);
    u_xlat0.x = float(u_xlat16_31) * float(u_xlat16_31);
    u_xlat0.x = float(u_xlat16_31) * u_xlat0.x;
    u_xlat0.x = float(u_xlat16_31) * u_xlat0.x;
    u_xlat16_5.xyz = half3(fma(u_xlat0.xxx, float3(u_xlat16_7.xyz), float3(u_xlat16_5.xzw)));
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    u_xlat16_1.xyz = fma(u_xlat16_9.xyz, u_xlat16_8.xyz, u_xlat16_1.xyz);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 4
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 5
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (64 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SpecCube0_HDR at 24
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 40
  ScalarHalf _Metallic at 42
  ScalarHalf _AlphaCutoff at 44
  ScalarHalf _BumpScale at 46
  VectorHalf4 _Color at 48
  VectorHalf4 _EmissionColor at 56
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    sampler sampler_OcclusionMap [[ sampler (4) ]],
    sampler sampler_EmissionMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half4 u_xlat16_4;
    half4 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat9;
    half u_xlat16_12;
    float u_xlat16;
    half u_xlat16_19;
    float u_xlat21;
    bool u_xlatb21;
    half u_xlat16_22;
    float u_xlat23;
    half u_xlat16_23;
    float u_xlat24;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.x = input.TEXCOORD3.w;
    u_xlat3.y = input.TEXCOORD4.w;
    u_xlat3.z = input.TEXCOORD5.w;
    u_xlat3.xyz = (-u_xlat3.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat21), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat16_1.x = dot((-u_xlat4.xyz), u_xlat2.xyz);
    u_xlat16_1.x = u_xlat16_1.x + u_xlat16_1.x;
    u_xlat16_1.xyz = half3(fma(u_xlat2.xyz, (-float3(u_xlat16_1.xxx)), (-u_xlat4.xyz)));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat16_22 = half((-u_xlat21) + 1.0);
    u_xlat16_22 = u_xlat16_22 * u_xlat16_22;
    u_xlat16_22 = u_xlat16_22 * u_xlat16_22;
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_5.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_12 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat21 = (-float(u_xlat16_5.x)) + 1.0;
    u_xlat16_19 = half(fma((-u_xlat21), 0.699999988, 1.70000005));
    u_xlat16_19 = half(u_xlat21 * float(u_xlat16_19));
    u_xlat16_19 = u_xlat16_19 * half(6.0);
    u_xlat16_4 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_1.xyz), level(float(u_xlat16_19)));
    u_xlat16_1.x = u_xlat16_4.w + half(-1.0);
    u_xlat16_1.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_1.x, half(1.0));
    u_xlat16_1.x = u_xlat16_1.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_1.xyz = u_xlat16_4.xyz * u_xlat16_1.xxx;
    u_xlat16_23 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_1.xyz = u_xlat16_1.xyz * half3(u_xlat16_23);
    u_xlat23 = u_xlat21 * u_xlat21;
    u_xlat16_19 = half(u_xlat21 * u_xlat23);
    u_xlat21 = fma(u_xlat21, u_xlat21, 1.5);
    u_xlat16_19 = fma((-u_xlat16_19), half(0.280000001), half(1.0));
    u_xlat16_1.xyz = u_xlat16_1.xyz * half3(u_xlat16_19);
    u_xlat16_19 = fma((-u_xlat16_12), half(0.779083729), half(0.779083729));
    u_xlat16_5.x = (-u_xlat16_19) + u_xlat16_5.x;
    u_xlat16_5.x = u_xlat16_5.x + half(1.0);
    u_xlat16_5.x = clamp(u_xlat16_5.x, 0.0h, 1.0h);
    u_xlat16_6.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_6.xyz = fma(half3(u_xlat16_12), u_xlat16_6.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.xyw = u_xlat16_5.xxx + (-u_xlat16_6.xyz);
    u_xlat16_5.xyw = fma(half3(u_xlat16_22), u_xlat16_5.xyw, u_xlat16_6.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_5.xyw;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat3.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat9.x = u_xlat3.x * u_xlat3.x;
    u_xlat16 = max(u_xlat24, 0.319999993);
    u_xlat21 = u_xlat21 * u_xlat16;
    u_xlat16 = fma(u_xlat23, u_xlat23, -1.0);
    u_xlat9.x = fma(u_xlat9.x, u_xlat16, 1.00001001);
    u_xlat21 = u_xlat21 * u_xlat9.x;
    u_xlat21 = u_xlat23 / u_xlat21;
    u_xlat21 = u_xlat21 + -9.99999975e-05;
    u_xlat21 = max(u_xlat21, 0.0);
    u_xlat21 = min(u_xlat21, 100.0);
    u_xlat9.xyz = float3(u_xlat16_6.xyz) * float3(u_xlat21);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_19), u_xlat9.xyz);
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat2.xxx, float3(u_xlat16_1.xyz));
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 4
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 5
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (64 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SpecCube0_HDR at 24
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 40
  ScalarHalf _Metallic at 42
  ScalarHalf _AlphaCutoff at 44
  ScalarHalf _BumpScale at 46
  VectorHalf4 _Color at 48
  VectorHalf4 _EmissionColor at 56
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    sampler sampler_OcclusionMap [[ sampler (4) ]],
    sampler sampler_EmissionMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half4 u_xlat16_4;
    half4 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat9;
    half u_xlat16_12;
    float u_xlat16;
    half u_xlat16_19;
    float u_xlat21;
    bool u_xlatb21;
    half u_xlat16_22;
    float u_xlat23;
    half u_xlat16_23;
    float u_xlat24;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.x = input.TEXCOORD3.w;
    u_xlat3.y = input.TEXCOORD4.w;
    u_xlat3.z = input.TEXCOORD5.w;
    u_xlat3.xyz = (-u_xlat3.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat21), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat16_1.x = dot((-u_xlat4.xyz), u_xlat2.xyz);
    u_xlat16_1.x = u_xlat16_1.x + u_xlat16_1.x;
    u_xlat16_1.xyz = half3(fma(u_xlat2.xyz, (-float3(u_xlat16_1.xxx)), (-u_xlat4.xyz)));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat16_22 = half((-u_xlat21) + 1.0);
    u_xlat16_22 = u_xlat16_22 * u_xlat16_22;
    u_xlat16_22 = u_xlat16_22 * u_xlat16_22;
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_5.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_12 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat21 = (-float(u_xlat16_5.x)) + 1.0;
    u_xlat16_19 = half(fma((-u_xlat21), 0.699999988, 1.70000005));
    u_xlat16_19 = half(u_xlat21 * float(u_xlat16_19));
    u_xlat16_19 = u_xlat16_19 * half(6.0);
    u_xlat16_4 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_1.xyz), level(float(u_xlat16_19)));
    u_xlat16_1.x = u_xlat16_4.w + half(-1.0);
    u_xlat16_1.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_1.x, half(1.0));
    u_xlat16_1.x = u_xlat16_1.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_1.xyz = u_xlat16_4.xyz * u_xlat16_1.xxx;
    u_xlat16_23 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_1.xyz = u_xlat16_1.xyz * half3(u_xlat16_23);
    u_xlat23 = u_xlat21 * u_xlat21;
    u_xlat16_19 = half(u_xlat21 * u_xlat23);
    u_xlat21 = fma(u_xlat21, u_xlat21, 1.5);
    u_xlat16_19 = fma((-u_xlat16_19), half(0.280000001), half(1.0));
    u_xlat16_1.xyz = u_xlat16_1.xyz * half3(u_xlat16_19);
    u_xlat16_19 = fma((-u_xlat16_12), half(0.779083729), half(0.779083729));
    u_xlat16_5.x = (-u_xlat16_19) + u_xlat16_5.x;
    u_xlat16_5.x = u_xlat16_5.x + half(1.0);
    u_xlat16_5.x = clamp(u_xlat16_5.x, 0.0h, 1.0h);
    u_xlat16_6.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_6.xyz = fma(half3(u_xlat16_12), u_xlat16_6.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.xyw = u_xlat16_5.xxx + (-u_xlat16_6.xyz);
    u_xlat16_5.xyw = fma(half3(u_xlat16_22), u_xlat16_5.xyw, u_xlat16_6.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_5.xyw;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat3.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat9.x = u_xlat3.x * u_xlat3.x;
    u_xlat16 = max(u_xlat24, 0.319999993);
    u_xlat21 = u_xlat21 * u_xlat16;
    u_xlat16 = fma(u_xlat23, u_xlat23, -1.0);
    u_xlat9.x = fma(u_xlat9.x, u_xlat16, 1.00001001);
    u_xlat21 = u_xlat21 * u_xlat9.x;
    u_xlat21 = u_xlat23 / u_xlat21;
    u_xlat21 = u_xlat21 + -9.99999975e-05;
    u_xlat21 = max(u_xlat21, 0.0);
    u_xlat21 = min(u_xlat21, 100.0);
    u_xlat9.xyz = float3(u_xlat16_6.xyz) * float3(u_xlat21);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_19), u_xlat9.xyz);
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat2.xxx, float3(u_xlat16_1.xyz));
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 1
Set CUBE Texture "unity_SpecCube0" to slot 6 sampler slot 0

Constant Buffer "FGlobals" (88 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 unity_SpecCube0_HDR at 48
  VectorHalf4 _LightColor0 at 56
  ScalarHalf _Roughness at 64
  ScalarHalf _Metallic at 66
  ScalarHalf _AlphaCutoff at 68
  ScalarHalf _BumpScale at 70
  VectorHalf4 _Color at 72
  VectorHalf4 _EmissionColor at 80
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half3 u_xlat16_1;
    float3 u_xlat2;
    float3 u_xlat3;
    half3 u_xlat16_3;
    half3 u_xlat16_4;
    half u_xlat16_5;
    half4 u_xlat16_6;
    half3 u_xlat16_7;
    half3 u_xlat16_8;
    half3 u_xlat16_9;
    float u_xlat10;
    half3 u_xlat16_15;
    float u_xlat30;
    half u_xlat16_30;
    bool u_xlatb30;
    half u_xlat16_34;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb30 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb30) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat30 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat30 = rsqrt(u_xlat30);
    u_xlat2.xyz = float3(u_xlat30) * u_xlat2.xyz;
    u_xlat16_3.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_3.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat3.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat3.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat3.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat30 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat30 = rsqrt(u_xlat30);
    u_xlat1.xyz = float3(u_xlat30) * u_xlat3.xyz;
    u_xlat16_4.x = dot((-u_xlat2.xyz), u_xlat1.xyz);
    u_xlat16_4.x = u_xlat16_4.x + u_xlat16_4.x;
    u_xlat16_4.xyz = half3(fma(u_xlat1.xyz, (-float3(u_xlat16_4.xxx)), (-u_xlat2.xyz)));
    u_xlat16_3.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_34 = fma((-u_xlat16_3.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5 = u_xlat16_3.y * FGlobals._Metallic;
    u_xlat3.z = (-float(u_xlat16_34)) + 1.0;
    u_xlat16_15.x = half(fma((-u_xlat3.z), 0.699999988, 1.70000005));
    u_xlat16_15.x = half(u_xlat3.z * float(u_xlat16_15.x));
    u_xlat16_15.x = u_xlat16_15.x * half(6.0);
    u_xlat16_6 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_4.xyz), level(float(u_xlat16_15.x)));
    u_xlat16_4.x = u_xlat16_6.w + half(-1.0);
    u_xlat16_4.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_4.x, half(1.0));
    u_xlat16_4.x = u_xlat16_4.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_4.xyz = u_xlat16_6.xyz * u_xlat16_4.xxx;
    u_xlat16_30 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_4.xyz = half3(u_xlat16_30) * u_xlat16_4.xyz;
    u_xlat16_15.x = fma((-u_xlat16_5), half(0.779083729), half(0.779083729));
    u_xlat16_34 = u_xlat16_34 + (-u_xlat16_15.x);
    u_xlat16_34 = u_xlat16_34 + half(1.0);
    u_xlat16_34 = clamp(u_xlat16_34, 0.0h, 1.0h);
    u_xlat16_7.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_15.xyz = half3(float3(u_xlat16_15.xxx) * u_xlat0.xyz);
    u_xlat16_7.xyz = fma(half3(u_xlat16_5), u_xlat16_7.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8.xyz = half3(u_xlat16_34) + (-u_xlat16_7.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat1.xyz);
    u_xlat10 = u_xlat0.x;
    u_xlat10 = clamp(u_xlat10, 0.0f, 1.0f);
    u_xlat0.x = u_xlat0.x + u_xlat0.x;
    u_xlat2.xyz = fma(u_xlat1.xyz, (-u_xlat0.xxx), u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat3.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat3.xz).x;
    u_xlat0.x = u_xlat0.x * 16.0;
    u_xlat16_9.xyz = half3(fma(u_xlat0.xxx, float3(u_xlat16_7.xyz), float3(u_xlat16_15.xyz)));
    u_xlat16_34 = half((-u_xlat10) + 1.0);
    u_xlat0.x = float(u_xlat16_34) * float(u_xlat16_34);
    u_xlat0.x = float(u_xlat16_34) * u_xlat0.x;
    u_xlat0.x = float(u_xlat16_34) * u_xlat0.x;
    u_xlat16_7.xyz = half3(fma(u_xlat0.xxx, float3(u_xlat16_8.xyz), float3(u_xlat16_7.xyz)));
    u_xlat16_4.xyz = u_xlat16_4.xyz * u_xlat16_7.xyz;
    u_xlat0.x = dot(u_xlat1.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat16_7.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat1.w = 1.0;
    u_xlat16_8.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat1));
    u_xlat16_8.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat1));
    u_xlat16_8.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat1));
    u_xlat16_8.xyz = u_xlat16_8.xyz + input.TEXCOORD6.xyz;
    u_xlat16_8.xyz = max(u_xlat16_8.xyz, half3(0.0, 0.0, 0.0));
    u_xlat0.xyz = log2(float3(u_xlat16_8.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat0.xyz = exp2(u_xlat0.xyz);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat0.xyz = max(u_xlat0.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_8.xyz = half3(float3(u_xlat16_30) * u_xlat0.xyz);
    u_xlat16_4.xyz = fma(u_xlat16_8.xyz, u_xlat16_15.xyz, u_xlat16_4.xyz);
    u_xlat16_4.xyz = fma(u_xlat16_9.xyz, u_xlat16_7.xyz, u_xlat16_4.xyz);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_4.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 4
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 5
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (88 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 unity_SpecCube0_HDR at 48
  VectorHalf4 _LightColor0 at 56
  ScalarHalf _Roughness at 64
  ScalarHalf _Metallic at 66
  ScalarHalf _AlphaCutoff at 68
  ScalarHalf _BumpScale at 70
  VectorHalf4 _Color at 72
  VectorHalf4 _EmissionColor at 80
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    sampler sampler_OcclusionMap [[ sampler (4) ]],
    sampler sampler_EmissionMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    half u_xlat16_9;
    float u_xlat11;
    half u_xlat16_17;
    float u_xlat19;
    float u_xlat24;
    half u_xlat16_24;
    bool u_xlatb24;
    float u_xlat26;
    float u_xlat27;
    half u_xlat16_29;
    half u_xlat16_30;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb24 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb24) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat24 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = fma(u_xlat2.xyz, float3(u_xlat24), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = float3(u_xlat24) * u_xlat2.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat24 = max(u_xlat24, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_9 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat26 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat27 = fma(u_xlat26, u_xlat26, 1.5);
    u_xlat24 = u_xlat24 * u_xlat27;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_5.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_5.xy = u_xlat16_5.xy * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_5.xyz));
    u_xlat4.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_5.xyz));
    u_xlat4.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_5.xyz));
    u_xlat27 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat4.xyz = float3(u_xlat27) * u_xlat4.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat3.x = u_xlat3.x * u_xlat3.x;
    u_xlat11 = u_xlat26 * u_xlat26;
    u_xlat19 = fma(u_xlat11, u_xlat11, -1.0);
    u_xlat3.x = fma(u_xlat3.x, u_xlat19, 1.00001001);
    u_xlat24 = u_xlat24 * u_xlat3.x;
    u_xlat24 = u_xlat11 / u_xlat24;
    u_xlat16_17 = half(u_xlat26 * u_xlat11);
    u_xlat16_17 = fma((-u_xlat16_17), half(0.280000001), half(1.0));
    u_xlat24 = u_xlat24 + -9.99999975e-05;
    u_xlat24 = max(u_xlat24, 0.0);
    u_xlat24 = min(u_xlat24, 100.0);
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_5.xyz = fma(half3(u_xlat16_9), u_xlat16_5.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_9 = fma((-u_xlat16_9), half(0.779083729), half(0.779083729));
    u_xlat16_6.xyz = half3(float3(u_xlat16_9) * u_xlat3.xyz);
    u_xlat16_1.x = (-u_xlat16_9) + u_xlat16_1.x;
    u_xlat16_1.x = u_xlat16_1.x + half(1.0);
    u_xlat16_1.x = clamp(u_xlat16_1.x, 0.0h, 1.0h);
    u_xlat16_1.xyw = (-u_xlat16_5.xyz) + u_xlat16_1.xxx;
    u_xlat0.xyz = fma(float3(u_xlat24), float3(u_xlat16_5.xyz), float3(u_xlat16_6.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat4.w = 1.0;
    u_xlat16_7.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat4));
    u_xlat16_7.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat4));
    u_xlat16_7.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat4));
    u_xlat16_7.xyz = u_xlat16_7.xyz + input.TEXCOORD6.xyz;
    u_xlat16_7.xyz = max(u_xlat16_7.xyz, half3(0.0, 0.0, 0.0));
    u_xlat3.xyz = log2(float3(u_xlat16_7.xyz));
    u_xlat3.xyz = u_xlat3.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat3.xyz = exp2(u_xlat3.xyz);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat3.xyz = max(u_xlat3.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_24 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_7.xyz = half3(float3(u_xlat16_24) * u_xlat3.xyz);
    u_xlat16_6.xyz = u_xlat16_6.xyz * u_xlat16_7.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat3.xxx, float3(u_xlat16_6.xyz));
    u_xlat16_29 = half(fma((-u_xlat26), 0.699999988, 1.70000005));
    u_xlat16_29 = half(u_xlat26 * float(u_xlat16_29));
    u_xlat16_29 = u_xlat16_29 * half(6.0);
    u_xlat16_6.x = dot((-u_xlat2.xyz), u_xlat4.xyz);
    u_xlat16_6.x = u_xlat16_6.x + u_xlat16_6.x;
    u_xlat16_6.xyz = half3(fma(u_xlat4.xyz, (-float3(u_xlat16_6.xxx)), (-u_xlat2.xyz)));
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_30 = half((-u_xlat2.x) + 1.0);
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_1.xyw = fma(half3(u_xlat16_30), u_xlat16_1.xyw, u_xlat16_5.xyz);
    u_xlat16_2 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_6.xyz), level(float(u_xlat16_29)));
    u_xlat16_5.x = u_xlat16_2.w + half(-1.0);
    u_xlat16_5.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_5.x, half(1.0));
    u_xlat16_5.x = u_xlat16_5.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_5.xyz = u_xlat16_2.xyz * u_xlat16_5.xxx;
    u_xlat16_5.xyz = half3(u_xlat16_24) * u_xlat16_5.xyz;
    u_xlat16_5.xyz = half3(u_xlat16_17) * u_xlat16_5.xyz;
    u_xlat0.xyz = fma(float3(u_xlat16_5.xyz), float3(u_xlat16_1.xyw), u_xlat0.xyz);
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 4
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 5
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (88 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 unity_SpecCube0_HDR at 48
  VectorHalf4 _LightColor0 at 56
  ScalarHalf _Roughness at 64
  ScalarHalf _Metallic at 66
  ScalarHalf _AlphaCutoff at 68
  ScalarHalf _BumpScale at 70
  VectorHalf4 _Color at 72
  VectorHalf4 _EmissionColor at 80
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    sampler sampler_OcclusionMap [[ sampler (4) ]],
    sampler sampler_EmissionMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    half u_xlat16_9;
    float u_xlat11;
    half u_xlat16_17;
    float u_xlat19;
    float u_xlat24;
    half u_xlat16_24;
    bool u_xlatb24;
    float u_xlat26;
    float u_xlat27;
    half u_xlat16_29;
    half u_xlat16_30;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb24 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb24) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat24 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = fma(u_xlat2.xyz, float3(u_xlat24), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = float3(u_xlat24) * u_xlat2.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat24 = max(u_xlat24, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_9 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat26 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat27 = fma(u_xlat26, u_xlat26, 1.5);
    u_xlat24 = u_xlat24 * u_xlat27;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_5.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_5.xy = u_xlat16_5.xy * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_5.xyz));
    u_xlat4.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_5.xyz));
    u_xlat4.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_5.xyz));
    u_xlat27 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat4.xyz = float3(u_xlat27) * u_xlat4.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat3.x = u_xlat3.x * u_xlat3.x;
    u_xlat11 = u_xlat26 * u_xlat26;
    u_xlat19 = fma(u_xlat11, u_xlat11, -1.0);
    u_xlat3.x = fma(u_xlat3.x, u_xlat19, 1.00001001);
    u_xlat24 = u_xlat24 * u_xlat3.x;
    u_xlat24 = u_xlat11 / u_xlat24;
    u_xlat16_17 = half(u_xlat26 * u_xlat11);
    u_xlat16_17 = fma((-u_xlat16_17), half(0.280000001), half(1.0));
    u_xlat24 = u_xlat24 + -9.99999975e-05;
    u_xlat24 = max(u_xlat24, 0.0);
    u_xlat24 = min(u_xlat24, 100.0);
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_5.xyz = fma(half3(u_xlat16_9), u_xlat16_5.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_9 = fma((-u_xlat16_9), half(0.779083729), half(0.779083729));
    u_xlat16_6.xyz = half3(float3(u_xlat16_9) * u_xlat3.xyz);
    u_xlat16_1.x = (-u_xlat16_9) + u_xlat16_1.x;
    u_xlat16_1.x = u_xlat16_1.x + half(1.0);
    u_xlat16_1.x = clamp(u_xlat16_1.x, 0.0h, 1.0h);
    u_xlat16_1.xyw = (-u_xlat16_5.xyz) + u_xlat16_1.xxx;
    u_xlat0.xyz = fma(float3(u_xlat24), float3(u_xlat16_5.xyz), float3(u_xlat16_6.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat4.w = 1.0;
    u_xlat16_7.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat4));
    u_xlat16_7.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat4));
    u_xlat16_7.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat4));
    u_xlat16_7.xyz = u_xlat16_7.xyz + input.TEXCOORD6.xyz;
    u_xlat16_7.xyz = max(u_xlat16_7.xyz, half3(0.0, 0.0, 0.0));
    u_xlat3.xyz = log2(float3(u_xlat16_7.xyz));
    u_xlat3.xyz = u_xlat3.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat3.xyz = exp2(u_xlat3.xyz);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat3.xyz = max(u_xlat3.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_24 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_7.xyz = half3(float3(u_xlat16_24) * u_xlat3.xyz);
    u_xlat16_6.xyz = u_xlat16_6.xyz * u_xlat16_7.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat3.xxx, float3(u_xlat16_6.xyz));
    u_xlat16_29 = half(fma((-u_xlat26), 0.699999988, 1.70000005));
    u_xlat16_29 = half(u_xlat26 * float(u_xlat16_29));
    u_xlat16_29 = u_xlat16_29 * half(6.0);
    u_xlat16_6.x = dot((-u_xlat2.xyz), u_xlat4.xyz);
    u_xlat16_6.x = u_xlat16_6.x + u_xlat16_6.x;
    u_xlat16_6.xyz = half3(fma(u_xlat4.xyz, (-float3(u_xlat16_6.xxx)), (-u_xlat2.xyz)));
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_30 = half((-u_xlat2.x) + 1.0);
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_1.xyw = fma(half3(u_xlat16_30), u_xlat16_1.xyw, u_xlat16_5.xyz);
    u_xlat16_2 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_6.xyz), level(float(u_xlat16_29)));
    u_xlat16_5.x = u_xlat16_2.w + half(-1.0);
    u_xlat16_5.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_5.x, half(1.0));
    u_xlat16_5.x = u_xlat16_5.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_5.xyz = u_xlat16_2.xyz * u_xlat16_5.xxx;
    u_xlat16_5.xyz = half3(u_xlat16_24) * u_xlat16_5.xyz;
    u_xlat16_5.xyz = half3(u_xlat16_17) * u_xlat16_5.xyz;
    u_xlat0.xyz = fma(float3(u_xlat16_5.xyz), float3(u_xlat16_1.xyw), u_xlat0.xyz);
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 6
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 7
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 1
Set CUBE Texture "unity_SpecCube0" to slot 6 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 7 sampler slot 2

Constant Buffer "FGlobals" (424 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 unity_SpecCube0_HDR at 384
  VectorHalf4 _LightColor0 at 392
  ScalarHalf _Roughness at 400
  ScalarHalf _Metallic at 402
  ScalarHalf _AlphaCutoff at 404
  ScalarHalf _BumpScale at 406
  VectorHalf4 _Color at 408
  VectorHalf4 _EmissionColor at 416
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (1) ]],
    sampler sampler_ShadowMapTexture [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    sampler sampler_OcclusionMap [[ sampler (6) ]],
    sampler sampler_EmissionMap [[ sampler (7) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(6) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(7) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    float3 u_xlat3;
    half3 u_xlat16_3;
    half3 u_xlat16_4;
    float3 u_xlat5;
    half2 u_xlat16_5;
    half4 u_xlat16_6;
    half3 u_xlat16_7;
    half3 u_xlat16_8;
    half u_xlat16_10;
    half3 u_xlat16_16;
    float u_xlat27;
    half u_xlat16_27;
    bool u_xlatb27;
    half u_xlat16_28;
    float u_xlat29;
    half u_xlat16_31;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb27 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb27) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat27 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat27 = sqrt(u_xlat27);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat29 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat27 = u_xlat27 + (-u_xlat29);
    u_xlat27 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat27, u_xlat29);
    u_xlat27 = fma(u_xlat27, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat27 = clamp(u_xlat27, 0.0f, 1.0f);
    u_xlat3.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat3.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat3.xyz);
    u_xlat3.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat3.xyz);
    u_xlat3.xyz = u_xlat3.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat29 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat3.xy, saturate(u_xlat3.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat29, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_10 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat27, float(u_xlat16_10), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat16_3.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_4.xyz = fma(u_xlat16_3.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_4.xy = u_xlat16_4.xy * half2(FGlobals._BumpScale);
    u_xlat3.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_4.xyz));
    u_xlat3.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_4.xyz));
    u_xlat3.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_4.xyz));
    u_xlat27 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat3.xyz = float3(u_xlat27) * u_xlat3.xyz;
    u_xlat27 = dot(u_xlat3.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat27 = clamp(u_xlat27, 0.0f, 1.0f);
    u_xlat16_1.xyz = half3(float3(u_xlat27) * float3(u_xlat16_1.xyz));
    u_xlat27 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat2.xyz = float3(u_xlat27) * u_xlat2.xyz;
    u_xlat16_28 = dot((-u_xlat2.xyz), u_xlat3.xyz);
    u_xlat16_28 = u_xlat16_28 + u_xlat16_28;
    u_xlat16_4.xyz = half3(fma(u_xlat3.xyz, (-float3(u_xlat16_28)), (-u_xlat2.xyz)));
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_28 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_31 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat5.z = (-float(u_xlat16_28)) + 1.0;
    u_xlat16_6.x = half(fma((-u_xlat5.z), 0.699999988, 1.70000005));
    u_xlat16_6.x = half(u_xlat5.z * float(u_xlat16_6.x));
    u_xlat16_6.x = u_xlat16_6.x * half(6.0);
    u_xlat16_6 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_4.xyz), level(float(u_xlat16_6.x)));
    u_xlat16_4.x = u_xlat16_6.w + half(-1.0);
    u_xlat16_4.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_4.x, half(1.0));
    u_xlat16_4.x = u_xlat16_4.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_4.xyz = u_xlat16_6.xyz * u_xlat16_4.xxx;
    u_xlat16_27 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_4.xyz = half3(u_xlat16_27) * u_xlat16_4.xyz;
    u_xlat27 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat29 = u_xlat27;
    u_xlat29 = clamp(u_xlat29, 0.0f, 1.0f);
    u_xlat27 = u_xlat27 + u_xlat27;
    u_xlat2.xyz = fma(u_xlat3.xyz, (-float3(u_xlat27)), u_xlat2.xyz);
    u_xlat27 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat27 = u_xlat27 * u_xlat27;
    u_xlat5.x = u_xlat27 * u_xlat27;
    u_xlat27 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat5.xz).x;
    u_xlat27 = u_xlat27 * 16.0;
    u_xlat16_7.x = half((-u_xlat29) + 1.0);
    u_xlat2.x = float(u_xlat16_7.x) * float(u_xlat16_7.x);
    u_xlat2.x = float(u_xlat16_7.x) * u_xlat2.x;
    u_xlat2.x = float(u_xlat16_7.x) * u_xlat2.x;
    u_xlat16_7.x = fma((-u_xlat16_31), half(0.779083729), half(0.779083729));
    u_xlat16_28 = u_xlat16_28 + (-u_xlat16_7.x);
    u_xlat16_28 = u_xlat16_28 + half(1.0);
    u_xlat16_28 = clamp(u_xlat16_28, 0.0h, 1.0h);
    u_xlat16_16.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_16.xyz = fma(half3(u_xlat16_31), u_xlat16_16.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8.xyz = half3(u_xlat16_28) + (-u_xlat16_16.xyz);
    u_xlat16_8.xyz = half3(fma(u_xlat2.xxx, float3(u_xlat16_8.xyz), float3(u_xlat16_16.xyz)));
    u_xlat16_16.xyz = half3(float3(u_xlat27) * float3(u_xlat16_16.xyz));
    u_xlat16_7.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7.xxx), float3(u_xlat16_16.xyz)));
    u_xlat16_4.xyz = u_xlat16_4.xyz * u_xlat16_8.xyz;
    u_xlat16_1.xyz = fma(u_xlat16_7.xyz, u_xlat16_1.xyz, u_xlat16_4.xyz);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (424 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 unity_SpecCube0_HDR at 384
  VectorHalf4 _LightColor0 at 392
  ScalarHalf _Roughness at 400
  ScalarHalf _Metallic at 402
  ScalarHalf _AlphaCutoff at 404
  ScalarHalf _BumpScale at 406
  VectorHalf4 _Color at 408
  VectorHalf4 _EmissionColor at 416
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half3 u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    half3 u_xlat16_8;
    half3 u_xlat16_13;
    float u_xlat14;
    float u_xlat21;
    half u_xlat16_21;
    bool u_xlatb21;
    half u_xlat16_22;
    float u_xlat23;
    float u_xlat24;
    half u_xlat16_25;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat21 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat21, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_8.x = (-u_xlat16_1.x) + half(1.0);
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = sqrt(u_xlat21);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat23 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat21 = u_xlat21 + (-u_xlat23);
    u_xlat21 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat21, u_xlat23);
    u_xlat21 = fma(u_xlat21, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat16_1.x = half(fma(u_xlat21, float(u_xlat16_8.x), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat7.xyz = fma(u_xlat2.xyz, u_xlat0.xxx, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat0.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat0.x = max(u_xlat0.x, 0.00100000005);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat0.xyz = u_xlat0.xxx * u_xlat7.xyz;
    u_xlat21 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat0.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat21 = max(u_xlat21, 0.319999993);
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_22 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_25 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat23 = (-float(u_xlat16_22)) + 1.0;
    u_xlat24 = fma(u_xlat23, u_xlat23, 1.5);
    u_xlat21 = u_xlat21 * u_xlat24;
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_6.xyz));
    u_xlat24 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat5.xyz = float3(u_xlat24) * u_xlat5.xyz;
    u_xlat0.x = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat7.x = u_xlat23 * u_xlat23;
    u_xlat14 = fma(u_xlat7.x, u_xlat7.x, -1.0);
    u_xlat0.x = fma(u_xlat0.x, u_xlat14, 1.00001001);
    u_xlat0.x = u_xlat0.x * u_xlat21;
    u_xlat0.x = u_xlat7.x / u_xlat0.x;
    u_xlat16_6.x = half(u_xlat23 * u_xlat7.x);
    u_xlat16_6.x = fma((-u_xlat16_6.x), half(0.280000001), half(1.0));
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat16_4.xyz = fma(half3(u_xlat16_25), u_xlat16_4.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_25 = fma((-u_xlat16_25), half(0.779083729), half(0.779083729));
    u_xlat0.xyz = u_xlat0.xxx * float3(u_xlat16_4.xyz);
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_25), u_xlat0.xyz);
    u_xlat16_22 = u_xlat16_22 + (-u_xlat16_25);
    u_xlat16_22 = u_xlat16_22 + half(1.0);
    u_xlat16_22 = clamp(u_xlat16_22, 0.0h, 1.0h);
    u_xlat16_13.xyz = (-u_xlat16_4.xyz) + half3(u_xlat16_22);
    u_xlat0.xyz = float3(u_xlat16_1.xyz) * u_xlat0.xyz;
    u_xlat16_1.x = half(fma((-u_xlat23), 0.699999988, 1.70000005));
    u_xlat16_1.x = half(float(u_xlat16_1.x) * u_xlat23);
    u_xlat16_1.x = u_xlat16_1.x * half(6.0);
    u_xlat16_8.x = dot((-u_xlat2.xyz), u_xlat5.xyz);
    u_xlat16_8.x = u_xlat16_8.x + u_xlat16_8.x;
    u_xlat16_8.xyz = half3(fma(u_xlat5.xyz, (-float3(u_xlat16_8.xxx)), (-u_xlat2.xyz)));
    u_xlat21 = dot(u_xlat5.xyz, u_xlat2.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat5.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_25 = half((-u_xlat21) + 1.0);
    u_xlat16_25 = u_xlat16_25 * u_xlat16_25;
    u_xlat16_25 = u_xlat16_25 * u_xlat16_25;
    u_xlat16_4.xyz = fma(half3(u_xlat16_25), u_xlat16_13.xyz, u_xlat16_4.xyz);
    u_xlat16_1 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_8.xyz), level(float(u_xlat16_1.x)));
    u_xlat16_25 = u_xlat16_1.w + half(-1.0);
    u_xlat16_25 = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_25, half(1.0));
    u_xlat16_25 = u_xlat16_25 * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_13.xyz = u_xlat16_1.xyz * half3(u_xlat16_25);
    u_xlat16_21 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_13.xyz = half3(u_xlat16_21) * u_xlat16_13.xyz;
    u_xlat16_6.xyz = u_xlat16_13.xyz * u_xlat16_6.xxx;
    u_xlat16_4.xyz = u_xlat16_4.xyz * u_xlat16_6.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat2.xxx, float3(u_xlat16_4.xyz));
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (424 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 unity_SpecCube0_HDR at 384
  VectorHalf4 _LightColor0 at 392
  ScalarHalf _Roughness at 400
  ScalarHalf _Metallic at 402
  ScalarHalf _AlphaCutoff at 404
  ScalarHalf _BumpScale at 406
  VectorHalf4 _Color at 408
  VectorHalf4 _EmissionColor at 416
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half3 u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    half3 u_xlat16_8;
    half3 u_xlat16_13;
    float u_xlat14;
    float u_xlat21;
    half u_xlat16_21;
    bool u_xlatb21;
    half u_xlat16_22;
    float u_xlat23;
    float u_xlat24;
    half u_xlat16_25;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat21 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat21, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_8.x = (-u_xlat16_1.x) + half(1.0);
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = sqrt(u_xlat21);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat23 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat21 = u_xlat21 + (-u_xlat23);
    u_xlat21 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat21, u_xlat23);
    u_xlat21 = fma(u_xlat21, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat16_1.x = half(fma(u_xlat21, float(u_xlat16_8.x), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat7.xyz = fma(u_xlat2.xyz, u_xlat0.xxx, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat0.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat0.x = max(u_xlat0.x, 0.00100000005);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat0.xyz = u_xlat0.xxx * u_xlat7.xyz;
    u_xlat21 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat0.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat21 = max(u_xlat21, 0.319999993);
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_22 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_25 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat23 = (-float(u_xlat16_22)) + 1.0;
    u_xlat24 = fma(u_xlat23, u_xlat23, 1.5);
    u_xlat21 = u_xlat21 * u_xlat24;
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_6.xyz));
    u_xlat24 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat5.xyz = float3(u_xlat24) * u_xlat5.xyz;
    u_xlat0.x = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat7.x = u_xlat23 * u_xlat23;
    u_xlat14 = fma(u_xlat7.x, u_xlat7.x, -1.0);
    u_xlat0.x = fma(u_xlat0.x, u_xlat14, 1.00001001);
    u_xlat0.x = u_xlat0.x * u_xlat21;
    u_xlat0.x = u_xlat7.x / u_xlat0.x;
    u_xlat16_6.x = half(u_xlat23 * u_xlat7.x);
    u_xlat16_6.x = fma((-u_xlat16_6.x), half(0.280000001), half(1.0));
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat16_4.xyz = fma(half3(u_xlat16_25), u_xlat16_4.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_25 = fma((-u_xlat16_25), half(0.779083729), half(0.779083729));
    u_xlat0.xyz = u_xlat0.xxx * float3(u_xlat16_4.xyz);
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_25), u_xlat0.xyz);
    u_xlat16_22 = u_xlat16_22 + (-u_xlat16_25);
    u_xlat16_22 = u_xlat16_22 + half(1.0);
    u_xlat16_22 = clamp(u_xlat16_22, 0.0h, 1.0h);
    u_xlat16_13.xyz = (-u_xlat16_4.xyz) + half3(u_xlat16_22);
    u_xlat0.xyz = float3(u_xlat16_1.xyz) * u_xlat0.xyz;
    u_xlat16_1.x = half(fma((-u_xlat23), 0.699999988, 1.70000005));
    u_xlat16_1.x = half(float(u_xlat16_1.x) * u_xlat23);
    u_xlat16_1.x = u_xlat16_1.x * half(6.0);
    u_xlat16_8.x = dot((-u_xlat2.xyz), u_xlat5.xyz);
    u_xlat16_8.x = u_xlat16_8.x + u_xlat16_8.x;
    u_xlat16_8.xyz = half3(fma(u_xlat5.xyz, (-float3(u_xlat16_8.xxx)), (-u_xlat2.xyz)));
    u_xlat21 = dot(u_xlat5.xyz, u_xlat2.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat5.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_25 = half((-u_xlat21) + 1.0);
    u_xlat16_25 = u_xlat16_25 * u_xlat16_25;
    u_xlat16_25 = u_xlat16_25 * u_xlat16_25;
    u_xlat16_4.xyz = fma(half3(u_xlat16_25), u_xlat16_13.xyz, u_xlat16_4.xyz);
    u_xlat16_1 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_8.xyz), level(float(u_xlat16_1.x)));
    u_xlat16_25 = u_xlat16_1.w + half(-1.0);
    u_xlat16_25 = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_25, half(1.0));
    u_xlat16_25 = u_xlat16_25 * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_13.xyz = u_xlat16_1.xyz * half3(u_xlat16_25);
    u_xlat16_21 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_13.xyz = half3(u_xlat16_21) * u_xlat16_13.xyz;
    u_xlat16_6.xyz = u_xlat16_13.xyz * u_xlat16_6.xxx;
    u_xlat16_4.xyz = u_xlat16_4.xyz * u_xlat16_6.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat2.xxx, float3(u_xlat16_4.xyz));
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 6
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 7
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 1
Set CUBE Texture "unity_SpecCube0" to slot 6 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 7 sampler slot 2

Constant Buffer "FGlobals" (440 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 48
  Matrix4x4 unity_MatrixV at 336
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 _LightShadowData at 304
  Vector4 unity_ShadowFadeCenterAndType at 320
  VectorHalf4 unity_SpecCube0_HDR at 400
  VectorHalf4 _LightColor0 at 408
  ScalarHalf _Roughness at 416
  ScalarHalf _Metallic at 418
  ScalarHalf _AlphaCutoff at 420
  ScalarHalf _BumpScale at 422
  VectorHalf4 _Color at 424
  VectorHalf4 _EmissionColor at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (1) ]],
    sampler sampler_ShadowMapTexture [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    sampler sampler_OcclusionMap [[ sampler (6) ]],
    sampler sampler_EmissionMap [[ sampler (7) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(6) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(7) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half3 u_xlat16_4;
    float3 u_xlat5;
    half2 u_xlat16_5;
    half3 u_xlat16_6;
    half4 u_xlat16_7;
    half3 u_xlat16_8;
    half3 u_xlat16_9;
    half3 u_xlat16_10;
    float u_xlat11;
    half3 u_xlat16_17;
    float u_xlat22;
    float u_xlat33;
    bool u_xlatb33;
    half u_xlat16_35;
    half u_xlat16_37;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb33 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb33) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat33 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat2.xyz;
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat2.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat33 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat33 = sqrt(u_xlat33);
    u_xlat2.x = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat2.x = rsqrt(u_xlat2.x);
    u_xlat2.xyz = u_xlat2.xxx * u_xlat3.xyz;
    u_xlat16_4.x = dot((-u_xlat2.xyz), u_xlat1.xyz);
    u_xlat16_4.x = u_xlat16_4.x + u_xlat16_4.x;
    u_xlat16_4.xyz = half3(fma(u_xlat1.xyz, (-float3(u_xlat16_4.xxx)), (-u_xlat2.xyz)));
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_37 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6.x = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat5.z = (-float(u_xlat16_37)) + 1.0;
    u_xlat16_17.x = half(fma((-u_xlat5.z), 0.699999988, 1.70000005));
    u_xlat16_17.x = half(u_xlat5.z * float(u_xlat16_17.x));
    u_xlat16_17.x = u_xlat16_17.x * half(6.0);
    u_xlat16_7 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_4.xyz), level(float(u_xlat16_17.x)));
    u_xlat16_4.x = u_xlat16_7.w + half(-1.0);
    u_xlat16_4.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_4.x, half(1.0));
    u_xlat16_4.x = u_xlat16_4.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_4.xyz = u_xlat16_7.xyz * u_xlat16_4.xxx;
    u_xlat16_35 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_4.xyz = half3(u_xlat16_35) * u_xlat16_4.xyz;
    u_xlat16_17.x = fma((-u_xlat16_6.x), half(0.779083729), half(0.779083729));
    u_xlat16_37 = u_xlat16_37 + (-u_xlat16_17.x);
    u_xlat16_37 = u_xlat16_37 + half(1.0);
    u_xlat16_37 = clamp(u_xlat16_37, 0.0h, 1.0h);
    u_xlat16_8.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_17.xyz = half3(float3(u_xlat16_17.xxx) * u_xlat0.xyz);
    u_xlat16_8.xyz = fma(u_xlat16_6.xxx, u_xlat16_8.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_9.xyz = half3(u_xlat16_37) + (-u_xlat16_8.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat1.xyz);
    u_xlat11 = u_xlat0.x;
    u_xlat11 = clamp(u_xlat11, 0.0f, 1.0f);
    u_xlat0.x = u_xlat0.x + u_xlat0.x;
    u_xlat2.xyz = fma(u_xlat1.xyz, (-u_xlat0.xxx), u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat5.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat5.xz).x;
    u_xlat0.x = u_xlat0.x * 16.0;
    u_xlat16_10.xyz = half3(fma(u_xlat0.xxx, float3(u_xlat16_8.xyz), float3(u_xlat16_17.xyz)));
    u_xlat16_37 = half((-u_xlat11) + 1.0);
    u_xlat0.x = float(u_xlat16_37) * float(u_xlat16_37);
    u_xlat0.x = float(u_xlat16_37) * u_xlat0.x;
    u_xlat0.x = float(u_xlat16_37) * u_xlat0.x;
    u_xlat16_8.xyz = half3(fma(u_xlat0.xxx, float3(u_xlat16_9.xyz), float3(u_xlat16_8.xyz)));
    u_xlat16_4.xyz = u_xlat16_4.xyz * u_xlat16_8.xyz;
    u_xlat0.x = dot(u_xlat1.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat1.w = 1.0;
    u_xlat16_8.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat1));
    u_xlat16_8.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat1));
    u_xlat16_8.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat1));
    u_xlat16_8.xyz = u_xlat16_8.xyz + input.TEXCOORD6.xyz;
    u_xlat16_8.xyz = max(u_xlat16_8.xyz, half3(0.0, 0.0, 0.0));
    u_xlat2.xyz = log2(float3(u_xlat16_8.xyz));
    u_xlat2.xyz = u_xlat2.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat2.xyz = exp2(u_xlat2.xyz);
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat2.xyz = max(u_xlat2.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_8.xyz = half3(float3(u_xlat16_35) * u_xlat2.xyz);
    u_xlat16_4.xyz = fma(u_xlat16_8.xyz, u_xlat16_17.xyz, u_xlat16_4.xyz);
    u_xlat2.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat2.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat2.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat11 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat22 = (-u_xlat11) + u_xlat33;
    u_xlat11 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat22, u_xlat11);
    u_xlat11 = fma(u_xlat11, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat11 = clamp(u_xlat11, 0.0f, 1.0f);
    u_xlat2.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat22 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_37 = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_37 = half(fma(u_xlat22, float(u_xlat16_37), float(FGlobals._LightShadowData.x)));
    u_xlat16_6.x = (-u_xlat16_37) + half(1.0);
    u_xlat16_37 = half(fma(u_xlat11, float(u_xlat16_6.x), float(u_xlat16_37)));
    u_xlat16_6.xyz = half3(u_xlat16_37) * FGlobals._LightColor0.xyz;
    u_xlat16_6.xyz = half3(u_xlat0.xxx * float3(u_xlat16_6.xyz));
    u_xlat16_4.xyz = fma(u_xlat16_10.xyz, u_xlat16_6.xyz, u_xlat16_4.xyz);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_4.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (440 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 48
  Matrix4x4 unity_MatrixV at 336
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 _LightShadowData at 304
  Vector4 unity_ShadowFadeCenterAndType at 320
  VectorHalf4 unity_SpecCube0_HDR at 400
  VectorHalf4 _LightColor0 at 408
  ScalarHalf _Roughness at 416
  ScalarHalf _Metallic at 418
  ScalarHalf _AlphaCutoff at 420
  ScalarHalf _BumpScale at 422
  VectorHalf4 _Color at 424
  VectorHalf4 _EmissionColor at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_4;
    half4 u_xlat16_5;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    half3 u_xlat16_9;
    float u_xlat11;
    half3 u_xlat16_13;
    float u_xlat19;
    float u_xlat24;
    half u_xlat16_24;
    bool u_xlatb24;
    half u_xlat16_25;
    float u_xlat26;
    float u_xlat27;
    half u_xlat16_30;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb24 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb24) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat24 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat24, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_9.x = (-u_xlat16_1.x) + half(1.0);
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = sqrt(u_xlat24);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat26 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat24 = u_xlat24 + (-u_xlat26);
    u_xlat24 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat24, u_xlat26);
    u_xlat24 = fma(u_xlat24, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat16_1.x = half(fma(u_xlat24, float(u_xlat16_9.x), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat24 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = fma(u_xlat2.xyz, float3(u_xlat24), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = float3(u_xlat24) * u_xlat2.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat24 = max(u_xlat24, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_25 = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.x = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat26 = (-float(u_xlat16_25)) + 1.0;
    u_xlat27 = fma(u_xlat26, u_xlat26, 1.5);
    u_xlat24 = u_xlat24 * u_xlat27;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_13.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_13.xy = u_xlat16_13.xy * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_13.xyz));
    u_xlat4.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_13.xyz));
    u_xlat4.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_13.xyz));
    u_xlat27 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat4.xyz = float3(u_xlat27) * u_xlat4.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat3.x = u_xlat3.x * u_xlat3.x;
    u_xlat11 = u_xlat26 * u_xlat26;
    u_xlat19 = fma(u_xlat11, u_xlat11, -1.0);
    u_xlat3.x = fma(u_xlat3.x, u_xlat19, 1.00001001);
    u_xlat24 = u_xlat24 * u_xlat3.x;
    u_xlat24 = u_xlat11 / u_xlat24;
    u_xlat16_13.x = half(u_xlat26 * u_xlat11);
    u_xlat16_13.x = fma((-u_xlat16_13.x), half(0.280000001), half(1.0));
    u_xlat24 = u_xlat24 + -9.99999975e-05;
    u_xlat24 = max(u_xlat24, 0.0);
    u_xlat24 = min(u_xlat24, 100.0);
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_6.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_6.xyz = fma(u_xlat16_5.xxx, u_xlat16_6.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.x = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat16_7.xyz = half3(u_xlat3.xyz * float3(u_xlat16_5.xxx));
    u_xlat16_25 = u_xlat16_25 + (-u_xlat16_5.x);
    u_xlat16_25 = u_xlat16_25 + half(1.0);
    u_xlat16_25 = clamp(u_xlat16_25, 0.0h, 1.0h);
    u_xlat16_5.xzw = (-u_xlat16_6.xyz) + half3(u_xlat16_25);
    u_xlat0.xyz = fma(float3(u_xlat24), float3(u_xlat16_6.xyz), float3(u_xlat16_7.xyz));
    u_xlat0.xyz = float3(u_xlat16_1.xyz) * u_xlat0.xyz;
    u_xlat4.w = 1.0;
    u_xlat16_1.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat4));
    u_xlat16_1.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat4));
    u_xlat16_1.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat4));
    u_xlat16_1.xyz = u_xlat16_1.xyz + input.TEXCOORD6.xyz;
    u_xlat16_1.xyz = max(u_xlat16_1.xyz, half3(0.0, 0.0, 0.0));
    u_xlat3.xyz = log2(float3(u_xlat16_1.xyz));
    u_xlat3.xyz = u_xlat3.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat3.xyz = exp2(u_xlat3.xyz);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat3.xyz = max(u_xlat3.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_24 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_1.xyz = half3(float3(u_xlat16_24) * u_xlat3.xyz);
    u_xlat16_1.xyz = u_xlat16_7.xyz * u_xlat16_1.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat3.xxx, float3(u_xlat16_1.xyz));
    u_xlat16_1.x = half(fma((-u_xlat26), 0.699999988, 1.70000005));
    u_xlat16_1.x = half(float(u_xlat16_1.x) * u_xlat26);
    u_xlat16_1.x = u_xlat16_1.x * half(6.0);
    u_xlat16_9.x = dot((-u_xlat2.xyz), u_xlat4.xyz);
    u_xlat16_9.x = u_xlat16_9.x + u_xlat16_9.x;
    u_xlat16_9.xyz = half3(fma(u_xlat4.xyz, (-float3(u_xlat16_9.xxx)), (-u_xlat2.xyz)));
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_30 = half((-u_xlat2.x) + 1.0);
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_5.xzw = fma(half3(u_xlat16_30), u_xlat16_5.xzw, u_xlat16_6.xyz);
    u_xlat16_1 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_9.xyz), level(float(u_xlat16_1.x)));
    u_xlat16_6.x = u_xlat16_1.w + half(-1.0);
    u_xlat16_6.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_6.x, half(1.0));
    u_xlat16_6.x = u_xlat16_6.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_6.xyz = u_xlat16_1.xyz * u_xlat16_6.xxx;
    u_xlat16_6.xyz = half3(u_xlat16_24) * u_xlat16_6.xyz;
    u_xlat16_6.xyz = u_xlat16_13.xxx * u_xlat16_6.xyz;
    u_xlat0.xyz = fma(float3(u_xlat16_6.xyz), float3(u_xlat16_5.xzw), u_xlat0.xyz);
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD6.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_OcclusionMap" to slot 3 sampler slot 5
Set 2D Texture "_EmissionMap" to slot 4 sampler slot 6
Set CUBE Texture "unity_SpecCube0" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (440 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 48
  Matrix4x4 unity_MatrixV at 336
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 unity_SHAr at 24
  VectorHalf4 unity_SHAg at 32
  VectorHalf4 unity_SHAb at 40
  VectorHalf4 _LightShadowData at 304
  Vector4 unity_ShadowFadeCenterAndType at 320
  VectorHalf4 unity_SpecCube0_HDR at 400
  VectorHalf4 _LightColor0 at 408
  ScalarHalf _Roughness at 416
  ScalarHalf _Metallic at 418
  ScalarHalf _AlphaCutoff at 420
  ScalarHalf _BumpScale at 422
  VectorHalf4 _Color at 424
  VectorHalf4 _EmissionColor at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 unity_SpecCube0_HDR;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_SpecCube0 [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    sampler sampler_OcclusionMap [[ sampler (5) ]],
    sampler sampler_EmissionMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    texturecube<half, access::sample > unity_SpecCube0 [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_4;
    half4 u_xlat16_5;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    half3 u_xlat16_9;
    float u_xlat11;
    half3 u_xlat16_13;
    float u_xlat19;
    float u_xlat24;
    half u_xlat16_24;
    bool u_xlatb24;
    half u_xlat16_25;
    float u_xlat26;
    float u_xlat27;
    half u_xlat16_30;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb24 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb24) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = input.TEXCOORD4.www * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD3.www, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.www, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat24 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat24, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_9.x = (-u_xlat16_1.x) + half(1.0);
    u_xlat2.x = input.TEXCOORD3.w;
    u_xlat2.y = input.TEXCOORD4.w;
    u_xlat2.z = input.TEXCOORD5.w;
    u_xlat3.xyz = u_xlat2.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat2.xyz = (-u_xlat2.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = sqrt(u_xlat24);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat26 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat24 = u_xlat24 + (-u_xlat26);
    u_xlat24 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat24, u_xlat26);
    u_xlat24 = fma(u_xlat24, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat16_1.x = half(fma(u_xlat24, float(u_xlat16_9.x), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat24 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = fma(u_xlat2.xyz, float3(u_xlat24), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.xyz = float3(u_xlat24) * u_xlat2.xyz;
    u_xlat24 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat24 = max(u_xlat24, 0.00100000005);
    u_xlat24 = rsqrt(u_xlat24);
    u_xlat3.xyz = float3(u_xlat24) * u_xlat3.xyz;
    u_xlat24 = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat24 = clamp(u_xlat24, 0.0f, 1.0f);
    u_xlat24 = max(u_xlat24, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_25 = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.x = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat26 = (-float(u_xlat16_25)) + 1.0;
    u_xlat27 = fma(u_xlat26, u_xlat26, 1.5);
    u_xlat24 = u_xlat24 * u_xlat27;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_13.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_13.xy = u_xlat16_13.xy * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_13.xyz));
    u_xlat4.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_13.xyz));
    u_xlat4.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_13.xyz));
    u_xlat27 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat27 = rsqrt(u_xlat27);
    u_xlat4.xyz = float3(u_xlat27) * u_xlat4.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat3.x = u_xlat3.x * u_xlat3.x;
    u_xlat11 = u_xlat26 * u_xlat26;
    u_xlat19 = fma(u_xlat11, u_xlat11, -1.0);
    u_xlat3.x = fma(u_xlat3.x, u_xlat19, 1.00001001);
    u_xlat24 = u_xlat24 * u_xlat3.x;
    u_xlat24 = u_xlat11 / u_xlat24;
    u_xlat16_13.x = half(u_xlat26 * u_xlat11);
    u_xlat16_13.x = fma((-u_xlat16_13.x), half(0.280000001), half(1.0));
    u_xlat24 = u_xlat24 + -9.99999975e-05;
    u_xlat24 = max(u_xlat24, 0.0);
    u_xlat24 = min(u_xlat24, 100.0);
    u_xlat3.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_6.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_6.xyz = fma(u_xlat16_5.xxx, u_xlat16_6.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.x = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat16_7.xyz = half3(u_xlat3.xyz * float3(u_xlat16_5.xxx));
    u_xlat16_25 = u_xlat16_25 + (-u_xlat16_5.x);
    u_xlat16_25 = u_xlat16_25 + half(1.0);
    u_xlat16_25 = clamp(u_xlat16_25, 0.0h, 1.0h);
    u_xlat16_5.xzw = (-u_xlat16_6.xyz) + half3(u_xlat16_25);
    u_xlat0.xyz = fma(float3(u_xlat24), float3(u_xlat16_6.xyz), float3(u_xlat16_7.xyz));
    u_xlat0.xyz = float3(u_xlat16_1.xyz) * u_xlat0.xyz;
    u_xlat4.w = 1.0;
    u_xlat16_1.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat4));
    u_xlat16_1.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat4));
    u_xlat16_1.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat4));
    u_xlat16_1.xyz = u_xlat16_1.xyz + input.TEXCOORD6.xyz;
    u_xlat16_1.xyz = max(u_xlat16_1.xyz, half3(0.0, 0.0, 0.0));
    u_xlat3.xyz = log2(float3(u_xlat16_1.xyz));
    u_xlat3.xyz = u_xlat3.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat3.xyz = exp2(u_xlat3.xyz);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat3.xyz = max(u_xlat3.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_24 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    u_xlat16_1.xyz = half3(float3(u_xlat16_24) * u_xlat3.xyz);
    u_xlat16_1.xyz = u_xlat16_7.xyz * u_xlat16_1.xyz;
    u_xlat3.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat3.x = clamp(u_xlat3.x, 0.0f, 1.0f);
    u_xlat0.xyz = fma(u_xlat0.xyz, u_xlat3.xxx, float3(u_xlat16_1.xyz));
    u_xlat16_1.x = half(fma((-u_xlat26), 0.699999988, 1.70000005));
    u_xlat16_1.x = half(float(u_xlat16_1.x) * u_xlat26);
    u_xlat16_1.x = u_xlat16_1.x * half(6.0);
    u_xlat16_9.x = dot((-u_xlat2.xyz), u_xlat4.xyz);
    u_xlat16_9.x = u_xlat16_9.x + u_xlat16_9.x;
    u_xlat16_9.xyz = half3(fma(u_xlat4.xyz, (-float3(u_xlat16_9.xxx)), (-u_xlat2.xyz)));
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat16_30 = half((-u_xlat2.x) + 1.0);
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_30 = u_xlat16_30 * u_xlat16_30;
    u_xlat16_5.xzw = fma(half3(u_xlat16_30), u_xlat16_5.xzw, u_xlat16_6.xyz);
    u_xlat16_1 = unity_SpecCube0.sample(samplerunity_SpecCube0, float3(u_xlat16_9.xyz), level(float(u_xlat16_1.x)));
    u_xlat16_6.x = u_xlat16_1.w + half(-1.0);
    u_xlat16_6.x = fma(FGlobals.unity_SpecCube0_HDR.w, u_xlat16_6.x, half(1.0));
    u_xlat16_6.x = u_xlat16_6.x * FGlobals.unity_SpecCube0_HDR.x;
    u_xlat16_6.xyz = u_xlat16_1.xyz * u_xlat16_6.xxx;
    u_xlat16_6.xyz = half3(u_xlat16_24) * u_xlat16_6.xyz;
    u_xlat16_6.xyz = u_xlat16_13.xxx * u_xlat16_6.xyz;
    u_xlat0.xyz = fma(float3(u_xlat16_6.xyz), float3(u_xlat16_5.xzw), u_xlat0.xyz);
    u_xlat16_2.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target0.xyz = half3(fma(float3(u_xlat16_2.xyz), float3(FGlobals._EmissionColor.xyz), u_xlat0.xyz));
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL LIGHTPROBE_SH SHADOWS_SCREEN VERTEXLIGHT_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (448 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 160
  Matrix4x4 unity_WorldToObject at 224
  Matrix4x4 unity_MatrixVP at 304
  Vector4 unity_4LightPosX0 at 0
  Vector4 unity_4LightPosY0 at 16
  Vector4 unity_4LightPosZ0 at 32
  VectorHalf4 unity_4LightAtten0 at 48
  VectorHalf4 unity_LightColor[8] at 56
  VectorHalf4 unity_SHBr at 120
  VectorHalf4 unity_SHBg at 128
  VectorHalf4 unity_SHBb at 136
  VectorHalf4 unity_SHC at 144
  Vector4 unity_WorldTransformParams at 288
  Vector4 _MainTex_ST at 368
  Vector4 _BumpMap_ST at 384
  Vector4 _MetallicGlossMap_ST at 400
  Vector4 _OcclusionMap_ST at 416
  Vector4 _EmissionMap_ST at 432
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 unity_4LightPosX0;
    float4 unity_4LightPosY0;
    float4 unity_4LightPosZ0;
    half4 unity_4LightAtten0;
    half4 unity_LightColor[8];
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    half3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD8 [[ user(TEXCOORD8) ]];
    float4 TEXCOORD9 [[ user(TEXCOORD9) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    half4 u_xlat16_2;
    float4 u_xlat3;
    float4 u_xlat4;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float u_xlat21;
    float u_xlat22;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat21 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat1.xyz = float3(u_xlat21) * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat21 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat22 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat22 = rsqrt(u_xlat22);
    u_xlat2 = float4(u_xlat22) * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.w = u_xlat0.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    u_xlat1 = (-u_xlat0.xxxx) + VGlobals.unity_4LightPosX0;
    u_xlat3 = (-u_xlat0.yyyy) + VGlobals.unity_4LightPosY0;
    u_xlat0 = (-u_xlat0.zzzz) + VGlobals.unity_4LightPosZ0;
    u_xlat4 = u_xlat2.yyyy * u_xlat3;
    u_xlat3 = u_xlat3 * u_xlat3;
    u_xlat3 = fma(u_xlat1, u_xlat1, u_xlat3);
    u_xlat1 = fma(u_xlat1, u_xlat2.xxxx, u_xlat4);
    u_xlat1 = fma(u_xlat0, u_xlat2.wwzw, u_xlat1);
    u_xlat0 = fma(u_xlat0, u_xlat0, u_xlat3);
    u_xlat0 = max(u_xlat0, float4(9.99999997e-07, 9.99999997e-07, 9.99999997e-07, 9.99999997e-07));
    u_xlat3 = rsqrt(u_xlat0);
    u_xlat0 = fma(u_xlat0, float4(VGlobals.unity_4LightAtten0), float4(1.0, 1.0, 1.0, 1.0));
    u_xlat0 = float4(1.0, 1.0, 1.0, 1.0) / u_xlat0;
    u_xlat1 = u_xlat1 * u_xlat3;
    u_xlat1 = max(u_xlat1, float4(0.0, 0.0, 0.0, 0.0));
    u_xlat0 = u_xlat0 * u_xlat1;
    u_xlat1.xyz = u_xlat0.yyy * float3(VGlobals.unity_LightColor[1].xyz);
    u_xlat1.xyz = fma(float3(VGlobals.unity_LightColor[0].xyz), u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[2].xyz), u_xlat0.zzz, u_xlat1.xyz);
    u_xlat0.xyz = fma(float3(VGlobals.unity_LightColor[3].xyz), u_xlat0.www, u_xlat0.xyz);
    u_xlat1.xyz = fma(u_xlat0.xyz, float3(0.305306017, 0.305306017, 0.305306017), float3(0.682171106, 0.682171106, 0.682171106));
    u_xlat1.xyz = fma(u_xlat0.xyz, u_xlat1.xyz, float3(0.0125228781, 0.0125228781, 0.0125228781));
    u_xlat16_5.x = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_5.x = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_5.x))));
    u_xlat16_2 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_6.x = dot(VGlobals.unity_SHBr, u_xlat16_2);
    u_xlat16_6.y = dot(VGlobals.unity_SHBg, u_xlat16_2);
    u_xlat16_6.z = dot(VGlobals.unity_SHBb, u_xlat16_2);
    u_xlat16_5.xyz = fma(VGlobals.unity_SHC.xyz, u_xlat16_5.xxx, u_xlat16_6.xyz);
    output.TEXCOORD6.xyz = half3(fma(u_xlat0.xyz, u_xlat1.xyz, float3(u_xlat16_5.xyz)));
    output.TEXCOORD8 = float4(0.0, 0.0, 0.0, 0.0);
    output.TEXCOORD9 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Fragment shader for "metal":
// No shader variant for this keyword set. The closest match will be used instead.

 }
 Pass {
  Name "FORWARD"
  Tags { "LIGHTMODE"="FORWARDADD" "SHADOWSUPPORT"="true" "RenderType"="Opaque" }
  ZWrite Off
  Blend One One
  //////////////////////////////////
  //                              //
  //      Compiled programs       //
  //                              //
  //////////////////////////////////
//////////////////////////////////////////////////////
Global Keywords: POINT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "unity_NHxRoughness" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    half u_xlat16_7;
    half2 u_xlat16_8;
    float u_xlat18;
    bool u_xlatb18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat18 = u_xlat18 + u_xlat18;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat18)), u_xlat3.xyz);
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat3.x = u_xlat18 * u_xlat18;
    u_xlat16_8.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_8.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_8.y * FGlobals._Metallic;
    u_xlat3.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat3.xy).x;
    u_xlat18 = u_xlat18 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat18) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7), float3(u_xlat16_1.xzw)));
    u_xlat0.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat0.xyz);
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat0.xyz);
    u_xlat0.xyz = u_xlat0.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xx).x;
    u_xlat16_5.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_5.xyz = half3(u_xlat2.xxx * float3(u_xlat16_5.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float4 u_xlat2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half u_xlat16_6;
    float u_xlat7;
    float u_xlat12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    float u_xlat18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat17 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat17 = rsqrt(u_xlat17);
    u_xlat3.xyz = float3(u_xlat17) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat15), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat15 = max(u_xlat15, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat17 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = fma(u_xlat17, u_xlat17, 1.5);
    u_xlat17 = u_xlat17 * u_xlat17;
    u_xlat15 = u_xlat15 * u_xlat18;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat7 = clamp(u_xlat7, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat2.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat2.xzw);
    u_xlat2.xzw = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xzw);
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xzw);
    u_xlat2.xzw = u_xlat2.xzw + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat15 = dot(u_xlat2.xzw, u_xlat2.xzw);
    u_xlat15 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat15)).x;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = float3(u_xlat7) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float4 u_xlat2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half u_xlat16_6;
    float u_xlat7;
    float u_xlat12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    float u_xlat18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat17 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat17 = rsqrt(u_xlat17);
    u_xlat3.xyz = float3(u_xlat17) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat15), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat15 = max(u_xlat15, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat17 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = fma(u_xlat17, u_xlat17, 1.5);
    u_xlat17 = u_xlat17 * u_xlat17;
    u_xlat15 = u_xlat15 * u_xlat18;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat7 = clamp(u_xlat7, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat2.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat2.xzw);
    u_xlat2.xzw = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xzw);
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xzw);
    u_xlat2.xzw = u_xlat2.xzw + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat15 = dot(u_xlat2.xzw, u_xlat2.xzw);
    u_xlat15 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat15)).x;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = float3(u_xlat7) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "unity_NHxRoughness" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 32
  ScalarHalf _Metallic at 34
  ScalarHalf _AlphaCutoff at 36
  ScalarHalf _BumpScale at 38
  VectorHalf4 _Color at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half3 u_xlat16_4;
    half3 u_xlat16_9;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    half u_xlat16_16;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = float3(u_xlat15) * u_xlat3.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = u_xlat15 + u_xlat15;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat15)), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat15 = dot(u_xlat3.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = u_xlat15 * u_xlat15;
    u_xlat2.x = u_xlat15 * u_xlat15;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_16 = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_4.x = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat2.y = (-float(u_xlat16_16)) + 1.0;
    u_xlat15 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat2.xy).x;
    u_xlat15 = u_xlat15 * 16.0;
    u_xlat16_9.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_9.xyz = fma(u_xlat16_4.xxx, u_xlat16_9.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_16 = fma((-u_xlat16_4.x), half(0.779083729), half(0.779083729));
    u_xlat16_4.xyz = half3(float3(u_xlat15) * float3(u_xlat16_9.xyz));
    u_xlat16_4.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_16), float3(u_xlat16_4.xyz)));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_4.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 32
  ScalarHalf _Metallic at 34
  ScalarHalf _AlphaCutoff at 36
  ScalarHalf _BumpScale at 38
  VectorHalf4 _Color at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_5;
    float3 u_xlat6;
    float u_xlat10;
    half2 u_xlat16_10;
    float u_xlat12;
    bool u_xlatb12;
    float u_xlat14;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat2.xyz = float3(u_xlat12) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat12), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = max(u_xlat12, 0.00100000005);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = float3(u_xlat12) * u_xlat3.xyz;
    u_xlat12 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat12 = clamp(u_xlat12, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat6.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat6.x = clamp(u_xlat6.x, 0.0f, 1.0f);
    u_xlat6.x = max(u_xlat6.x, 0.319999993);
    u_xlat12 = u_xlat12 * u_xlat12;
    u_xlat16_10.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_10.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5 = u_xlat16_10.y * FGlobals._Metallic;
    u_xlat10 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat14 = u_xlat10 * u_xlat10;
    u_xlat10 = fma(u_xlat10, u_xlat10, 1.5);
    u_xlat6.x = u_xlat10 * u_xlat6.x;
    u_xlat10 = fma(u_xlat14, u_xlat14, -1.0);
    u_xlat12 = fma(u_xlat12, u_xlat10, 1.00001001);
    u_xlat12 = u_xlat12 * u_xlat6.x;
    u_xlat12 = u_xlat14 / u_xlat12;
    u_xlat12 = u_xlat12 + -9.99999975e-05;
    u_xlat12 = max(u_xlat12, 0.0);
    u_xlat12 = min(u_xlat12, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_5), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5 = fma((-u_xlat16_5), half(0.779083729), half(0.779083729));
    u_xlat6.xyz = float3(u_xlat12) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_5), u_xlat6.xyz);
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 32
  ScalarHalf _Metallic at 34
  ScalarHalf _AlphaCutoff at 36
  ScalarHalf _BumpScale at 38
  VectorHalf4 _Color at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_5;
    float3 u_xlat6;
    float u_xlat10;
    half2 u_xlat16_10;
    float u_xlat12;
    bool u_xlatb12;
    float u_xlat14;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat2.xyz = float3(u_xlat12) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat12), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = max(u_xlat12, 0.00100000005);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = float3(u_xlat12) * u_xlat3.xyz;
    u_xlat12 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat12 = clamp(u_xlat12, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat6.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat6.x = clamp(u_xlat6.x, 0.0f, 1.0f);
    u_xlat6.x = max(u_xlat6.x, 0.319999993);
    u_xlat12 = u_xlat12 * u_xlat12;
    u_xlat16_10.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_10.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5 = u_xlat16_10.y * FGlobals._Metallic;
    u_xlat10 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat14 = u_xlat10 * u_xlat10;
    u_xlat10 = fma(u_xlat10, u_xlat10, 1.5);
    u_xlat6.x = u_xlat10 * u_xlat6.x;
    u_xlat10 = fma(u_xlat14, u_xlat14, -1.0);
    u_xlat12 = fma(u_xlat12, u_xlat10, 1.00001001);
    u_xlat12 = u_xlat12 * u_xlat6.x;
    u_xlat12 = u_xlat14 / u_xlat12;
    u_xlat12 = u_xlat12 + -9.99999975e-05;
    u_xlat12 = max(u_xlat12, 0.0);
    u_xlat12 = min(u_xlat12, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_5), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5 = fma((-u_xlat16_5), half(0.779083729), half(0.779083729));
    u_xlat6.xyz = float3(u_xlat12) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_5), u_xlat6.xyz);
    u_xlat0.xyz = u_xlat0.xyz * float3(FGlobals._LightColor0.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    half u_xlat16_7;
    float2 u_xlat8;
    half2 u_xlat16_8;
    bool u_xlatb8;
    float u_xlat18;
    bool u_xlatb18;
    half u_xlat16_19;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat18 = u_xlat18 + u_xlat18;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat18)), u_xlat3.xyz);
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat3.x = u_xlat18 * u_xlat18;
    u_xlat16_8.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_8.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_8.y * FGlobals._Metallic;
    u_xlat3.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat3.xy).x;
    u_xlat18 = u_xlat18 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat18) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7), float3(u_xlat16_1.xzw)));
    u_xlat0 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat0 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat0);
    u_xlat0 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat0);
    u_xlat0 = u_xlat0 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat8.xy = u_xlat0.xy / u_xlat0.ww;
    u_xlat8.xy = u_xlat8.xy + float2(0.5, 0.5);
    u_xlat18 = _LightTexture0.sample(sampler_LightTexture0, u_xlat8.xy).w;
    u_xlatb8 = 0.0<u_xlat0.z;
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTextureB0.sample(sampler_LightTextureB0, u_xlat0.xx).x;
    u_xlat16_19 = (u_xlatb8) ? half(1.0) : half(0.0);
    u_xlat16_19 = half(u_xlat18 * float(u_xlat16_19));
    u_xlat16_19 = half(u_xlat0.x * float(u_xlat16_19));
    u_xlat16_5.xyz = half3(u_xlat16_19) * FGlobals._LightColor0.xyz;
    u_xlat16_5.xyz = half3(u_xlat2.xxx * float3(u_xlat16_5.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 1

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_LightTextureB0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half4 u_xlat16_1;
    float4 u_xlat2;
    bool u_xlatb2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half3 u_xlat16_5;
    half u_xlat16_7;
    float u_xlat8;
    float u_xlat14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    float u_xlat21;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat20 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat20 = rsqrt(u_xlat20);
    u_xlat3.xyz = float3(u_xlat20) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat18 = max(u_xlat18, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat20 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat21 = fma(u_xlat20, u_xlat20, 1.5);
    u_xlat20 = u_xlat20 * u_xlat20;
    u_xlat18 = u_xlat18 * u_xlat21;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat21 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8 = clamp(u_xlat8, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat2.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat2.xzw);
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat2.xz = u_xlat1.xy / u_xlat1.ww;
    u_xlat2.xz = u_xlat2.xz + float2(0.5, 0.5);
    u_xlat18 = _LightTexture0.sample(sampler_LightTexture0, u_xlat2.xz).w;
    u_xlatb2 = 0.0<u_xlat1.z;
    u_xlat14 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat14 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat14)).x;
    u_xlat16_5.x = (u_xlatb2) ? half(1.0) : half(0.0);
    u_xlat16_5.x = half(u_xlat18 * float(u_xlat16_5.x));
    u_xlat16_5.x = half(u_xlat14 * float(u_xlat16_5.x));
    u_xlat16_5.xyz = u_xlat16_5.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_5.xyz);
    u_xlat0.xyz = float3(u_xlat8) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 1

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_LightTextureB0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half4 u_xlat16_1;
    float4 u_xlat2;
    bool u_xlatb2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half3 u_xlat16_5;
    half u_xlat16_7;
    float u_xlat8;
    float u_xlat14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    float u_xlat21;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat20 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat20 = rsqrt(u_xlat20);
    u_xlat3.xyz = float3(u_xlat20) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat18 = max(u_xlat18, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat20 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat21 = fma(u_xlat20, u_xlat20, 1.5);
    u_xlat20 = u_xlat20 * u_xlat20;
    u_xlat18 = u_xlat18 * u_xlat21;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat21 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8 = clamp(u_xlat8, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat2.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat2.xzw);
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat2.xz = u_xlat1.xy / u_xlat1.ww;
    u_xlat2.xz = u_xlat2.xz + float2(0.5, 0.5);
    u_xlat18 = _LightTexture0.sample(sampler_LightTexture0, u_xlat2.xz).w;
    u_xlatb2 = 0.0<u_xlat1.z;
    u_xlat14 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat14 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat14)).x;
    u_xlat16_5.x = (u_xlatb2) ? half(1.0) : half(0.0);
    u_xlat16_5.x = half(u_xlat18 * float(u_xlat16_5.x));
    u_xlat16_5.x = half(u_xlat14 * float(u_xlat16_5.x));
    u_xlat16_5.xyz = u_xlat16_5.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_5.xyz);
    u_xlat0.xyz = float3(u_xlat8) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 2
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 1
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float u_xlat6;
    half u_xlat16_7;
    half2 u_xlat16_8;
    float u_xlat18;
    bool u_xlatb18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat18 = u_xlat18 + u_xlat18;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat18)), u_xlat3.xyz);
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat3.x = u_xlat18 * u_xlat18;
    u_xlat16_8.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_8.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_8.y * FGlobals._Metallic;
    u_xlat3.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat3.xy).x;
    u_xlat18 = u_xlat18 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat18) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7), float3(u_xlat16_1.xzw)));
    u_xlat0.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat0.xyz);
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat0.xyz);
    u_xlat0.xyz = u_xlat0.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat18 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xyz).w;
    u_xlat6 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat18)).x;
    u_xlat0.x = u_xlat0.x * u_xlat6;
    u_xlat16_5.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_5.xyz = half3(u_xlat2.xxx * float3(u_xlat16_5.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 1
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_LightTextureB0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float4 u_xlat2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half u_xlat16_6;
    float u_xlat7;
    float u_xlat12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    float u_xlat18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat17 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat17 = rsqrt(u_xlat17);
    u_xlat3.xyz = float3(u_xlat17) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat15), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat15 = max(u_xlat15, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat17 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = fma(u_xlat17, u_xlat17, 1.5);
    u_xlat17 = u_xlat17 * u_xlat17;
    u_xlat15 = u_xlat15 * u_xlat18;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat7 = clamp(u_xlat7, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat2.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat2.xzw);
    u_xlat2.xzw = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xzw);
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xzw);
    u_xlat2.xzw = u_xlat2.xzw + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat15 = dot(u_xlat2.xzw, u_xlat2.xzw);
    u_xlat2.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat2.xzw).w;
    u_xlat15 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat15)).x;
    u_xlat15 = u_xlat2.x * u_xlat15;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = float3(u_xlat7) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 1
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 48
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 32
  ScalarHalf _Roughness at 112
  ScalarHalf _Metallic at 114
  ScalarHalf _AlphaCutoff at 116
  ScalarHalf _BumpScale at 118
  VectorHalf4 _Color at 120
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_LightTextureB0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float4 u_xlat2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    half u_xlat16_6;
    float u_xlat7;
    float u_xlat12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    float u_xlat18;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat17 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat17 = rsqrt(u_xlat17);
    u_xlat3.xyz = float3(u_xlat17) * u_xlat3.xyz;
    u_xlat2.xyz = fma(u_xlat2.xyz, float3(u_xlat15), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat15 = max(u_xlat15, 0.319999993);
    u_xlat16_4.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_4.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_4.y * FGlobals._Metallic;
    u_xlat17 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat18 = fma(u_xlat17, u_xlat17, 1.5);
    u_xlat17 = u_xlat17 * u_xlat17;
    u_xlat15 = u_xlat15 * u_xlat18;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xzw = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xz = u_xlat16_1.xz * half2(FGlobals._BumpScale);
    u_xlat4.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xzw));
    u_xlat4.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xzw));
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat4.xyz;
    u_xlat2.x = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat7 = clamp(u_xlat7, 0.0f, 1.0f);
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat2.x = fma(u_xlat2.x, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat2.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat2.xzw = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat2.xzw);
    u_xlat2.xzw = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xzw);
    u_xlat2.xzw = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xzw);
    u_xlat2.xzw = u_xlat2.xzw + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat15 = dot(u_xlat2.xzw, u_xlat2.xzw);
    u_xlat2.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat2.xzw).w;
    u_xlat15 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat15)).x;
    u_xlat15 = u_xlat2.x * u_xlat15;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = float3(u_xlat7) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "unity_NHxRoughness" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (112 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 32
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 96
  ScalarHalf _Metallic at 98
  ScalarHalf _AlphaCutoff at 100
  ScalarHalf _BumpScale at 102
  VectorHalf4 _Color at 104
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half3 u_xlat16_4;
    half u_xlat16_6;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat3.xyz = float3(u_xlat15) * u_xlat3.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat2.xyz);
    u_xlat15 = u_xlat15 + u_xlat15;
    u_xlat3.xyz = fma(u_xlat2.xyz, (-float3(u_xlat15)), u_xlat3.xyz);
    u_xlat15 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat3.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat2.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat2.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat2.xy).x;
    u_xlat2.x = u_xlat2.x * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat16_1.xzw) * u_xlat2.xxx);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_6), float3(u_xlat16_1.xzw)));
    u_xlat0.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat0.xy);
    u_xlat0.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat0.xy);
    u_xlat0.xy = u_xlat0.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xy).w;
    u_xlat16_4.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_4.xyz = half3(float3(u_xlat15) * float3(u_xlat16_4.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_4.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (112 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 32
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 96
  ScalarHalf _Metallic at 98
  ScalarHalf _AlphaCutoff at 100
  ScalarHalf _BumpScale at 102
  VectorHalf4 _Color at 104
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_5;
    float3 u_xlat6;
    float u_xlat10;
    half2 u_xlat16_10;
    float u_xlat12;
    bool u_xlatb12;
    float u_xlat14;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat2.xyz = float3(u_xlat12) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat12), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = max(u_xlat12, 0.00100000005);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = float3(u_xlat12) * u_xlat3.xyz;
    u_xlat12 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat12 = clamp(u_xlat12, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat6.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat6.x = clamp(u_xlat6.x, 0.0f, 1.0f);
    u_xlat6.x = max(u_xlat6.x, 0.319999993);
    u_xlat12 = u_xlat12 * u_xlat12;
    u_xlat16_10.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_10.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5 = u_xlat16_10.y * FGlobals._Metallic;
    u_xlat10 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat14 = u_xlat10 * u_xlat10;
    u_xlat10 = fma(u_xlat10, u_xlat10, 1.5);
    u_xlat6.x = u_xlat10 * u_xlat6.x;
    u_xlat10 = fma(u_xlat14, u_xlat14, -1.0);
    u_xlat12 = fma(u_xlat12, u_xlat10, 1.00001001);
    u_xlat12 = u_xlat12 * u_xlat6.x;
    u_xlat12 = u_xlat14 / u_xlat12;
    u_xlat12 = u_xlat12 + -9.99999975e-05;
    u_xlat12 = max(u_xlat12, 0.0);
    u_xlat12 = min(u_xlat12, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_5), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5 = fma((-u_xlat16_5), half(0.779083729), half(0.779083729));
    u_xlat6.xyz = float3(u_xlat12) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_5), u_xlat6.xyz);
    u_xlat6.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat6.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat6.xy);
    u_xlat6.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat6.xy);
    u_xlat6.xy = u_xlat6.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat12 = _LightTexture0.sample(sampler_LightTexture0, u_xlat6.xy).w;
    u_xlat16_1.xyz = half3(float3(u_xlat12) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (112 bytes) on slot 0 {
  Matrix4x4 unity_WorldToLight at 32
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightColor0 at 24
  ScalarHalf _Roughness at 96
  ScalarHalf _Metallic at 98
  ScalarHalf _AlphaCutoff at 100
  ScalarHalf _BumpScale at 102
  VectorHalf4 _Color at 104
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_LightTexture0 [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_5;
    float3 u_xlat6;
    float u_xlat10;
    half2 u_xlat16_10;
    float u_xlat12;
    bool u_xlatb12;
    float u_xlat14;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat2.xyz = float3(u_xlat12) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = fma(u_xlat3.xyz, float3(u_xlat12), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat12 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat12 = max(u_xlat12, 0.00100000005);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat3.xyz = float3(u_xlat12) * u_xlat3.xyz;
    u_xlat12 = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat12 = clamp(u_xlat12, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat6.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat3.xyz);
    u_xlat6.x = clamp(u_xlat6.x, 0.0f, 1.0f);
    u_xlat6.x = max(u_xlat6.x, 0.319999993);
    u_xlat12 = u_xlat12 * u_xlat12;
    u_xlat16_10.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_10.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5 = u_xlat16_10.y * FGlobals._Metallic;
    u_xlat10 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat14 = u_xlat10 * u_xlat10;
    u_xlat10 = fma(u_xlat10, u_xlat10, 1.5);
    u_xlat6.x = u_xlat10 * u_xlat6.x;
    u_xlat10 = fma(u_xlat14, u_xlat14, -1.0);
    u_xlat12 = fma(u_xlat12, u_xlat10, 1.00001001);
    u_xlat12 = u_xlat12 * u_xlat6.x;
    u_xlat12 = u_xlat14 / u_xlat12;
    u_xlat12 = u_xlat12 + -9.99999975e-05;
    u_xlat12 = max(u_xlat12, 0.0);
    u_xlat12 = min(u_xlat12, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_5), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5 = fma((-u_xlat16_5), half(0.779083729), half(0.779083729));
    u_xlat6.xyz = float3(u_xlat12) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_5), u_xlat6.xyz);
    u_xlat6.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat6.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat6.xy);
    u_xlat6.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat6.xy);
    u_xlat6.xy = u_xlat6.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat12 = _LightTexture0.sample(sampler_LightTexture0, u_xlat6.xy).w;
    u_xlat16_1.xyz = half3(float3(u_xlat12) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 4
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 5
Set 2D Texture "_BumpMap" to slot 2 sampler slot 6
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 2
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 3
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_LightTextureB0 [[ sampler (3) ]],
    sampler sampler_MainTex [[ sampler (4) ]],
    sampler sampler_MetallicGlossMap [[ sampler (5) ]],
    sampler sampler_BumpMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float4 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    half u_xlat16_8;
    float2 u_xlat9;
    half2 u_xlat16_9;
    bool u_xlatb9;
    float u_xlat14;
    float u_xlat21;
    bool u_xlatb21;
    half u_xlat16_22;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat21 = u_xlat21 + u_xlat21;
    u_xlat4.xyz = fma(u_xlat2.xyz, (-float3(u_xlat21)), u_xlat4.xyz);
    u_xlat5.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat21 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = float3(u_xlat21) * u_xlat5.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat5.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat21 = u_xlat21 * u_xlat21;
    u_xlat4.x = u_xlat21 * u_xlat21;
    u_xlat16_9.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_9.x), FGlobals._Roughness, half(1.0));
    u_xlat16_8 = u_xlat16_9.y * FGlobals._Metallic;
    u_xlat4.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat21 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat4.xy).x;
    u_xlat21 = u_xlat21 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_8), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8 = fma((-u_xlat16_8), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat21) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_8), float3(u_xlat16_1.xzw)));
    u_xlat0.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat0.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat0.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat0.x = dot(u_xlat3.xyz, u_xlat0.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat0.x) + u_xlat7.x;
    u_xlat0.x = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat0.x);
    u_xlat0.x = fma(u_xlat0.x, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat3 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
    u_xlat3 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat3);
    u_xlat3 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat3);
    u_xlat3 = u_xlat3 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
    u_xlat7.xyz = u_xlat3.xyz / u_xlat3.www;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
    u_xlat14 = (-float(FGlobals._LightShadowData.x)) + 1.0;
    u_xlat7.x = fma(u_xlat7.x, u_xlat14, float(FGlobals._LightShadowData.x));
    u_xlat16_22 = half((-u_xlat7.x) + 1.0);
    u_xlat16_22 = half(fma(u_xlat0.x, float(u_xlat16_22), u_xlat7.x));
    u_xlat0 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat0 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat0);
    u_xlat0 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat0);
    u_xlat0 = u_xlat0 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat9.xy = u_xlat0.xy / u_xlat0.ww;
    u_xlat9.xy = u_xlat9.xy + float2(0.5, 0.5);
    u_xlat21 = _LightTexture0.sample(sampler_LightTexture0, u_xlat9.xy).w;
    u_xlatb9 = 0.0<u_xlat0.z;
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTextureB0.sample(sampler_LightTextureB0, u_xlat0.xx).x;
    u_xlat16_6.x = (u_xlatb9) ? half(1.0) : half(0.0);
    u_xlat16_6.x = half(u_xlat21 * float(u_xlat16_6.x));
    u_xlat16_6.x = half(u_xlat0.x * float(u_xlat16_6.x));
    u_xlat16_22 = u_xlat16_22 * u_xlat16_6.x;
    u_xlat16_6.xyz = half3(u_xlat16_22) * FGlobals._LightColor0.xyz;
    u_xlat16_6.xyz = half3(u_xlat2.xxx * float3(u_xlat16_6.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_6.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 2
Set 2D Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half3 u_xlat16_6;
    half u_xlat16_8;
    float3 u_xlat9;
    bool u_xlatb9;
    half u_xlat16_13;
    float u_xlat16;
    half2 u_xlat16_16;
    float u_xlat21;
    bool u_xlatb21;
    float u_xlat23;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat21), u_xlat3.xyz);
    u_xlat21 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat21 = max(u_xlat21, 0.00100000005);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = float3(u_xlat21) * u_xlat5.xyz;
    u_xlat21 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat9.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat9.x = clamp(u_xlat9.x, 0.0f, 1.0f);
    u_xlat9.x = max(u_xlat9.x, 0.319999993);
    u_xlat21 = u_xlat21 * u_xlat21;
    u_xlat16_16.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_16.x), FGlobals._Roughness, half(1.0));
    u_xlat16_8 = u_xlat16_16.y * FGlobals._Metallic;
    u_xlat16 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat23 = u_xlat16 * u_xlat16;
    u_xlat16 = fma(u_xlat16, u_xlat16, 1.5);
    u_xlat9.x = u_xlat16 * u_xlat9.x;
    u_xlat16 = fma(u_xlat23, u_xlat23, -1.0);
    u_xlat21 = fma(u_xlat21, u_xlat16, 1.00001001);
    u_xlat21 = u_xlat21 * u_xlat9.x;
    u_xlat21 = u_xlat23 / u_xlat21;
    u_xlat21 = u_xlat21 + -9.99999975e-05;
    u_xlat21 = max(u_xlat21, 0.0);
    u_xlat21 = min(u_xlat21, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_8), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8 = fma((-u_xlat16_8), half(0.779083729), half(0.779083729));
    u_xlat9.xyz = float3(u_xlat21) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_8), u_xlat9.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat9.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat9.x = dot(u_xlat9.xyz, u_xlat9.xyz);
    u_xlat9.x = sqrt(u_xlat9.x);
    u_xlat9.x = (-u_xlat21) + u_xlat9.x;
    u_xlat21 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat9.x, u_xlat21);
    u_xlat21 = fma(u_xlat21, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
    u_xlat9.xyz = u_xlat1.xyz / u_xlat1.www;
    u_xlat9.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
    u_xlat16 = (-float(FGlobals._LightShadowData.x)) + 1.0;
    u_xlat9.x = fma(u_xlat9.x, u_xlat16, float(FGlobals._LightShadowData.x));
    u_xlat16_6.x = half((-u_xlat9.x) + 1.0);
    u_xlat16_6.x = half(fma(u_xlat21, float(u_xlat16_6.x), u_xlat9.x));
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat9.xy = u_xlat1.xy / u_xlat1.ww;
    u_xlat9.xy = u_xlat9.xy + float2(0.5, 0.5);
    u_xlat21 = _LightTexture0.sample(sampler_LightTexture0, u_xlat9.xy).w;
    u_xlatb9 = 0.0<u_xlat1.z;
    u_xlat16 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat16 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat16)).x;
    u_xlat16_13 = (u_xlatb9) ? half(1.0) : half(0.0);
    u_xlat16_13 = half(u_xlat21 * float(u_xlat16_13));
    u_xlat16_13 = half(u_xlat16 * float(u_xlat16_13));
    u_xlat16_6.x = u_xlat16_6.x * u_xlat16_13;
    u_xlat16_6.xyz = u_xlat16_6.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_6.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 2
Set 2D Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half3 u_xlat16_6;
    half u_xlat16_8;
    float3 u_xlat9;
    bool u_xlatb9;
    half u_xlat16_13;
    float u_xlat16;
    half2 u_xlat16_16;
    float u_xlat21;
    bool u_xlatb21;
    float u_xlat23;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat3.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat21), u_xlat3.xyz);
    u_xlat21 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat21 = max(u_xlat21, 0.00100000005);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = float3(u_xlat21) * u_xlat5.xyz;
    u_xlat21 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat9.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat9.x = clamp(u_xlat9.x, 0.0f, 1.0f);
    u_xlat9.x = max(u_xlat9.x, 0.319999993);
    u_xlat21 = u_xlat21 * u_xlat21;
    u_xlat16_16.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_16.x), FGlobals._Roughness, half(1.0));
    u_xlat16_8 = u_xlat16_16.y * FGlobals._Metallic;
    u_xlat16 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat23 = u_xlat16 * u_xlat16;
    u_xlat16 = fma(u_xlat16, u_xlat16, 1.5);
    u_xlat9.x = u_xlat16 * u_xlat9.x;
    u_xlat16 = fma(u_xlat23, u_xlat23, -1.0);
    u_xlat21 = fma(u_xlat21, u_xlat16, 1.00001001);
    u_xlat21 = u_xlat21 * u_xlat9.x;
    u_xlat21 = u_xlat23 / u_xlat21;
    u_xlat21 = u_xlat21 + -9.99999975e-05;
    u_xlat21 = max(u_xlat21, 0.0);
    u_xlat21 = min(u_xlat21, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_8), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8 = fma((-u_xlat16_8), half(0.779083729), half(0.779083729));
    u_xlat9.xyz = float3(u_xlat21) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_8), u_xlat9.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat9.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat9.x = dot(u_xlat9.xyz, u_xlat9.xyz);
    u_xlat9.x = sqrt(u_xlat9.x);
    u_xlat9.x = (-u_xlat21) + u_xlat9.x;
    u_xlat21 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat9.x, u_xlat21);
    u_xlat21 = fma(u_xlat21, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat21 = clamp(u_xlat21, 0.0f, 1.0f);
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
    u_xlat9.xyz = u_xlat1.xyz / u_xlat1.www;
    u_xlat9.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
    u_xlat16 = (-float(FGlobals._LightShadowData.x)) + 1.0;
    u_xlat9.x = fma(u_xlat9.x, u_xlat16, float(FGlobals._LightShadowData.x));
    u_xlat16_6.x = half((-u_xlat9.x) + 1.0);
    u_xlat16_6.x = half(fma(u_xlat21, float(u_xlat16_6.x), u_xlat9.x));
    u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat1);
    u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat1);
    u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat9.xy = u_xlat1.xy / u_xlat1.ww;
    u_xlat9.xy = u_xlat9.xy + float2(0.5, 0.5);
    u_xlat21 = _LightTexture0.sample(sampler_LightTexture0, u_xlat9.xy).w;
    u_xlatb9 = 0.0<u_xlat1.z;
    u_xlat16 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat16 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat16)).x;
    u_xlat16_13 = (u_xlatb9) ? half(1.0) : half(0.0);
    u_xlat16_13 = half(u_xlat21 * float(u_xlat16_13));
    u_xlat16_13 = half(u_xlat16 * float(u_xlat16_13));
    u_xlat16_6.x = u_xlat16_6.x * u_xlat16_13;
    u_xlat16_6.xyz = u_xlat16_6.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_6.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SHADOWS_SOFT SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 4
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 5
Set 2D Texture "_BumpMap" to slot 2 sampler slot 6
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 2
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 3
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (544 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 464
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  Vector4 _ShadowOffsets[4] at 400
  ScalarHalf _Roughness at 528
  ScalarHalf _Metallic at 530
  ScalarHalf _AlphaCutoff at 532
  ScalarHalf _BumpScale at 534
  VectorHalf4 _Color at 536
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 _ShadowOffsets[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_LightTextureB0 [[ sampler (3) ]],
    sampler sampler_MainTex [[ sampler (4) ]],
    sampler sampler_MetallicGlossMap [[ sampler (5) ]],
    sampler sampler_BumpMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float4 u_xlat1;
    half u_xlat16_1;
    bool u_xlatb1;
    float3 u_xlat2;
    float3 u_xlat3;
    half4 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float4 u_xlat6;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat12;
    half3 u_xlat16_16;
    half u_xlat16_27;
    float u_xlat33;
    bool u_xlatb33;
    half u_xlat16_38;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat2.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat16_3 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat3.xyz = float3(u_xlat16_3.xyz) * float3(FGlobals._Color.xyz);
    u_xlat4.xyz = u_xlat3.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.x = fma(u_xlat16_3.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb33 = u_xlat16_5.x<half(0.0);
    if(((int(u_xlatb33) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_6.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_5.x = u_xlat16_6.y * FGlobals._Metallic;
    u_xlat16_16.x = fma((-u_xlat16_6.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_7.xyz = fma(u_xlat16_6.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_7.xy = u_xlat16_7.xy * half2(FGlobals._BumpScale);
    u_xlat6 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat6 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat6);
    u_xlat6 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat6);
    u_xlat6 = u_xlat6 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat8.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat8.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat8.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat8.xyz);
    u_xlat1.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat1.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat1.x = sqrt(u_xlat1.x);
    u_xlat1.x = (-u_xlat33) + u_xlat1.x;
    u_xlat33 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat1.x, u_xlat33);
    u_xlat33 = fma(u_xlat33, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlatb1 = u_xlat33<0.99000001;
    if(u_xlatb1){
        u_xlat1 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
        u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat1);
        u_xlat1 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat1);
        u_xlat1 = u_xlat1 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
        u_xlat1.xyz = u_xlat1.xyz / u_xlat1.www;
        u_xlat8.xyz = u_xlat1.xyz + FGlobals._ShadowOffsets[0].xyz;
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xy, saturate(u_xlat8.z), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + FGlobals._ShadowOffsets[1].xyz;
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + FGlobals._ShadowOffsets[2].xyz;
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat1.xyz = u_xlat1.xyz + FGlobals._ShadowOffsets[3].xyz;
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat1.xy, saturate(u_xlat1.z), level(0.0));
        u_xlat1.x = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat12 = (-float(FGlobals._LightShadowData.x)) + 1.0;
        u_xlat1.x = fma(u_xlat1.x, u_xlat12, float(FGlobals._LightShadowData.x));
        u_xlat16_1 = half(u_xlat1.x);
    } else {
        u_xlat16_1 = half(1.0);
    }
    u_xlat16_27 = (-u_xlat16_1) + half(1.0);
    u_xlat16_27 = half(fma(u_xlat33, float(u_xlat16_27), float(u_xlat16_1)));
    u_xlatb33 = 0.0<u_xlat6.z;
    u_xlat16_38 = (u_xlatb33) ? half(1.0) : half(0.0);
    u_xlat8.xy = u_xlat6.xy / u_xlat6.ww;
    u_xlat8.xy = u_xlat8.xy + float2(0.5, 0.5);
    u_xlat33 = _LightTexture0.sample(sampler_LightTexture0, u_xlat8.xy).w;
    u_xlat16_38 = half(u_xlat33 * float(u_xlat16_38));
    u_xlat33 = dot(u_xlat6.xyz, u_xlat6.xyz);
    u_xlat33 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat33)).x;
    u_xlat16_38 = half(u_xlat33 * float(u_xlat16_38));
    u_xlat16_27 = u_xlat16_27 * u_xlat16_38;
    u_xlat6.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_7.xyz));
    u_xlat6.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_7.xyz));
    u_xlat6.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_7.xyz));
    u_xlat33 = dot(u_xlat6.xyz, u_xlat6.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat6.xyz = float3(u_xlat33) * u_xlat6.xyz;
    u_xlat16_7.xyz = half3(u_xlat16_27) * FGlobals._LightColor0.xyz;
    u_xlat16_10.xyz = half3(fma(u_xlat3.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(u_xlat16_5.xxx, u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.x = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat33 = dot(u_xlat2.xyz, u_xlat6.xyz);
    u_xlat33 = u_xlat33 + u_xlat33;
    u_xlat2.xyz = fma(u_xlat6.xyz, (-float3(u_xlat33)), u_xlat2.xyz);
    u_xlat33 = dot(u_xlat6.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat0.xyz);
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.y = (-float(u_xlat16_16.x)) + 1.0;
    u_xlat0.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat0.xy).x;
    u_xlat0.x = u_xlat0.x * 16.0;
    u_xlat16_16.xyz = half3(float3(u_xlat16_10.xyz) * u_xlat0.xxx);
    u_xlat16_5.xyz = half3(fma(u_xlat4.xyz, float3(u_xlat16_5.xxx), float3(u_xlat16_16.xyz)));
    u_xlat16_7.xyz = half3(float3(u_xlat33) * float3(u_xlat16_7.xyz));
    output.SV_Target0.xyz = u_xlat16_5.xyz * u_xlat16_7.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SHADOWS_SOFT SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 2
Set 2D Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (544 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 464
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  Vector4 _ShadowOffsets[4] at 400
  ScalarHalf _Roughness at 528
  ScalarHalf _Metallic at 530
  ScalarHalf _AlphaCutoff at 532
  ScalarHalf _BumpScale at 534
  VectorHalf4 _Color at 536
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 _ShadowOffsets[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float4 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float4 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    half u_xlat16_35;
    bool u_xlatb35;
    float u_xlat36;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat5 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat5);
    u_xlat5 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat5);
    u_xlat5 = u_xlat5 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
        u_xlat7 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat7);
        u_xlat7 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat7);
        u_xlat7 = u_xlat7 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
        u_xlat7.xyz = u_xlat7.xyz / u_xlat7.www;
        u_xlat8.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[0].xyz;
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xy, saturate(u_xlat8.z), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[1].xyz;
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[2].xyz;
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[3].xyz;
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat36 = (-float(FGlobals._LightShadowData.x)) + 1.0;
        u_xlat35 = fma(u_xlat35, u_xlat36, float(FGlobals._LightShadowData.x));
        u_xlat16_35 = half(u_xlat35);
    } else {
        u_xlat16_35 = half(1.0);
    }
    u_xlat16_26 = (-u_xlat16_35) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_26), float(u_xlat16_35)));
    u_xlatb34 = 0.0<u_xlat5.z;
    u_xlat16_37 = (u_xlatb34) ? half(1.0) : half(0.0);
    u_xlat7.xy = u_xlat5.xy / u_xlat5.ww;
    u_xlat7.xy = u_xlat7.xy + float2(0.5, 0.5);
    u_xlat34 = _LightTexture0.sample(sampler_LightTexture0, u_xlat7.xy).w;
    u_xlat16_37 = half(u_xlat34 * float(u_xlat16_37));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat34)).x;
    u_xlat16_37 = half(u_xlat34 * float(u_xlat16_37));
    u_xlat16_26 = u_xlat16_26 * u_xlat16_37;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = rsqrt(u_xlat34);
    u_xlat5.xyz = float3(u_xlat34) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(u_xlat16_26) * FGlobals._LightColor0.xyz;
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: SHADOWS_DEPTH SHADOWS_SOFT SPOT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2], u_xlat0.zzzz, u_xlat1);
    output.TEXCOORD6 = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3], u_xlat0.wwww, u_xlat1);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_LightTextureB0" to slot 4 sampler slot 2
Set 2D Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (544 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 464
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  Vector4 _ShadowOffsets[4] at 400
  ScalarHalf _Roughness at 528
  ScalarHalf _Metallic at 530
  ScalarHalf _AlphaCutoff at 532
  ScalarHalf _BumpScale at 534
  VectorHalf4 _Color at 536
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 _ShadowOffsets[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(4) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float4 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float4 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    half u_xlat16_35;
    bool u_xlatb35;
    float u_xlat36;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1];
    u_xlat5 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0], input.TEXCOORD5.xxxx, u_xlat5);
    u_xlat5 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2], input.TEXCOORD5.zzzz, u_xlat5);
    u_xlat5 = u_xlat5 + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3];
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7 = input.TEXCOORD5.yyyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1];
        u_xlat7 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0], input.TEXCOORD5.xxxx, u_xlat7);
        u_xlat7 = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2], input.TEXCOORD5.zzzz, u_xlat7);
        u_xlat7 = u_xlat7 + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3];
        u_xlat7.xyz = u_xlat7.xyz / u_xlat7.www;
        u_xlat8.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[0].xyz;
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xy, saturate(u_xlat8.z), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[1].xyz;
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[2].xyz;
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xy, saturate(u_xlat9.z), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + FGlobals._ShadowOffsets[3].xyz;
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat36 = (-float(FGlobals._LightShadowData.x)) + 1.0;
        u_xlat35 = fma(u_xlat35, u_xlat36, float(FGlobals._LightShadowData.x));
        u_xlat16_35 = half(u_xlat35);
    } else {
        u_xlat16_35 = half(1.0);
    }
    u_xlat16_26 = (-u_xlat16_35) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_26), float(u_xlat16_35)));
    u_xlatb34 = 0.0<u_xlat5.z;
    u_xlat16_37 = (u_xlatb34) ? half(1.0) : half(0.0);
    u_xlat7.xy = u_xlat5.xy / u_xlat5.ww;
    u_xlat7.xy = u_xlat7.xy + float2(0.5, 0.5);
    u_xlat34 = _LightTexture0.sample(sampler_LightTexture0, u_xlat7.xy).w;
    u_xlat16_37 = half(u_xlat34 * float(u_xlat16_37));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat34)).x;
    u_xlat16_37 = half(u_xlat34 * float(u_xlat16_37));
    u_xlat16_26 = u_xlat16_26 * u_xlat16_37;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = rsqrt(u_xlat34);
    u_xlat5.xyz = float3(u_xlat34) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(u_xlat16_26) * FGlobals._LightColor0.xyz;
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "unity_NHxRoughness" to slot 3 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 4 sampler slot 1

Constant Buffer "FGlobals" (408 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 392
  ScalarHalf _Metallic at 394
  ScalarHalf _AlphaCutoff at 396
  ScalarHalf _BumpScale at 398
  VectorHalf4 _Color at 400
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(3) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float u_xlat6;
    half u_xlat16_7;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    half u_xlat16_19;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat18 = u_xlat18 + u_xlat18;
    u_xlat4.xyz = fma(u_xlat2.xyz, (-float3(u_xlat18)), u_xlat4.xyz);
    u_xlat18 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat2.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat2.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat2.xy).x;
    u_xlat2.x = u_xlat2.x * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat16_1.xzw) * u_xlat2.xxx);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7), float3(u_xlat16_1.xzw)));
    u_xlat0.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat0.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat0.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat0.x = dot(u_xlat3.xyz, u_xlat0.xyz);
    u_xlat2.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat6 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat6 = sqrt(u_xlat6);
    u_xlat6 = (-u_xlat0.x) + u_xlat6;
    u_xlat0.x = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat6, u_xlat0.x);
    u_xlat0.x = fma(u_xlat0.x, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat2.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat6 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_19 = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_19 = half(fma(u_xlat6, float(u_xlat16_19), float(FGlobals._LightShadowData.x)));
    u_xlat16_5.x = (-u_xlat16_19) + half(1.0);
    u_xlat16_19 = half(fma(u_xlat0.x, float(u_xlat16_5.x), float(u_xlat16_19)));
    u_xlat16_5.xyz = half3(u_xlat16_19) * FGlobals._LightColor0.xyz;
    u_xlat16_5.xyz = half3(float3(u_xlat18) * float3(u_xlat16_5.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_ShadowMapTexture" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (408 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 392
  ScalarHalf _Metallic at 394
  ScalarHalf _AlphaCutoff at 396
  ScalarHalf _BumpScale at 398
  VectorHalf4 _Color at 400
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half u_xlat16_6;
    float3 u_xlat7;
    float u_xlat12;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = fma(u_xlat3.xyz, float3(u_xlat15), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = float3(u_xlat15) * u_xlat4.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat4.xyz);
    u_xlat7.x = clamp(u_xlat7.x, 0.0f, 1.0f);
    u_xlat7.x = max(u_xlat7.x, 0.319999993);
    u_xlat15 = u_xlat15 * u_xlat15;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat12 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat17 = u_xlat12 * u_xlat12;
    u_xlat12 = fma(u_xlat12, u_xlat12, 1.5);
    u_xlat7.x = u_xlat12 * u_xlat7.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat15 = fma(u_xlat15, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat7.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat7.xyz = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat7.xyz);
    u_xlat4.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat4.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat4.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat15) + u_xlat7.x;
    u_xlat15 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat15);
    u_xlat15 = fma(u_xlat15, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat7.xyz);
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat7.xyz);
    u_xlat7.xyz = u_xlat7.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat7.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_6 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat15, float(u_xlat16_6), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (272 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float3 u_xlat2;
    float u_xlat9;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat0);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat0);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat0.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat0.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat0.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat9 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat0.xyz = float3(u_xlat9) * u_xlat0.xyz;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat9 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat9 = rsqrt(u_xlat9);
    u_xlat1.xyz = float3(u_xlat9) * u_xlat1.xyz;
    u_xlat2.xyz = u_xlat0.xyz * u_xlat1.xyz;
    u_xlat2.xyz = fma(u_xlat0.zxy, u_xlat1.yzx, (-u_xlat2.xyz));
    u_xlat9 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat2.xyz = float3(u_xlat9) * u_xlat2.xyz;
    output.TEXCOORD2.y = u_xlat2.x;
    output.TEXCOORD2.x = u_xlat1.z;
    output.TEXCOORD2.z = u_xlat0.y;
    output.TEXCOORD3.x = u_xlat1.x;
    output.TEXCOORD4.x = u_xlat1.y;
    output.TEXCOORD3.z = u_xlat0.z;
    output.TEXCOORD4.z = u_xlat0.x;
    output.TEXCOORD3.y = u_xlat2.y;
    output.TEXCOORD4.y = u_xlat2.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 1
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 2
Set 2D Texture "_BumpMap" to slot 2 sampler slot 3
Set 2D Texture "_ShadowMapTexture" to slot 3 sampler slot 0

Constant Buffer "FGlobals" (408 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 392
  ScalarHalf _Metallic at 394
  ScalarHalf _AlphaCutoff at 396
  ScalarHalf _BumpScale at 398
  VectorHalf4 _Color at 400
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_MainTex [[ sampler (1) ]],
    sampler sampler_MetallicGlossMap [[ sampler (2) ]],
    sampler sampler_BumpMap [[ sampler (3) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(3) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half u_xlat16_6;
    float3 u_xlat7;
    float u_xlat12;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = fma(u_xlat3.xyz, float3(u_xlat15), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = float3(u_xlat15) * u_xlat4.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat4.xyz);
    u_xlat7.x = clamp(u_xlat7.x, 0.0f, 1.0f);
    u_xlat7.x = max(u_xlat7.x, 0.319999993);
    u_xlat15 = u_xlat15 * u_xlat15;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat12 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat17 = u_xlat12 * u_xlat12;
    u_xlat12 = fma(u_xlat12, u_xlat12, 1.5);
    u_xlat7.x = u_xlat12 * u_xlat7.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat15 = fma(u_xlat15, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat7.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat7.xyz = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat7.xyz);
    u_xlat4.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat4.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat4.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat15) + u_xlat7.x;
    u_xlat15 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat15);
    u_xlat15 = fma(u_xlat15, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat7.xyz);
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat7.xyz);
    u_xlat7.xyz = u_xlat7.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat7.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_6 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat15, float(u_xlat16_6), float(u_xlat16_1.x)));
    u_xlat16_1.xyz = u_xlat16_1.xxx * FGlobals._LightColor0.xyz;
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 4 sampler slot 0
Set 2D Texture "_ShadowMapTexture" to slot 5 sampler slot 1

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(4) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float u_xlat6;
    half u_xlat16_7;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    half u_xlat16_19;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat4.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat18 = u_xlat18 + u_xlat18;
    u_xlat4.xyz = fma(u_xlat2.xyz, (-float3(u_xlat18)), u_xlat4.xyz);
    u_xlat18 = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat4.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat2.x = u_xlat2.x * u_xlat2.x;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat2.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat2.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat2.xy).x;
    u_xlat2.x = u_xlat2.x * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat16_1.xzw) * u_xlat2.xxx);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_7), float3(u_xlat16_1.xzw)));
    u_xlat0.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat0.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat0.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat0.x = dot(u_xlat3.xyz, u_xlat0.xyz);
    u_xlat2.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat6 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat6 = sqrt(u_xlat6);
    u_xlat6 = (-u_xlat0.x) + u_xlat6;
    u_xlat0.x = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat6, u_xlat0.x);
    u_xlat0.x = fma(u_xlat0.x, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat2.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat2.xyz);
    u_xlat2.xyz = u_xlat2.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat6 = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat2.xy, saturate(u_xlat2.z), level(0.0));
    u_xlat16_19 = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_19 = half(fma(u_xlat6, float(u_xlat16_19), float(FGlobals._LightShadowData.x)));
    u_xlat16_5.x = (-u_xlat16_19) + half(1.0);
    u_xlat16_19 = half(fma(u_xlat0.x, float(u_xlat16_5.x), float(u_xlat16_19)));
    u_xlat0.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat0.xy);
    u_xlat0.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat0.xy);
    u_xlat0.xy = u_xlat0.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xy).w;
    u_xlat0.x = float(u_xlat16_19) * u_xlat0.x;
    u_xlat16_5.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_5.xyz = half3(float3(u_xlat18) * float3(u_xlat16_5.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_5.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half u_xlat16_6;
    float3 u_xlat7;
    float u_xlat12;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = fma(u_xlat3.xyz, float3(u_xlat15), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = float3(u_xlat15) * u_xlat4.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat4.xyz);
    u_xlat7.x = clamp(u_xlat7.x, 0.0f, 1.0f);
    u_xlat7.x = max(u_xlat7.x, 0.319999993);
    u_xlat15 = u_xlat15 * u_xlat15;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat12 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat17 = u_xlat12 * u_xlat12;
    u_xlat12 = fma(u_xlat12, u_xlat12, 1.5);
    u_xlat7.x = u_xlat12 * u_xlat7.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat15 = fma(u_xlat15, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat7.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat7.xyz = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat7.xyz);
    u_xlat4.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat4.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat4.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat15) + u_xlat7.x;
    u_xlat15 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat15);
    u_xlat15 = fma(u_xlat15, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat7.xyz);
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat7.xyz);
    u_xlat7.xyz = u_xlat7.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat7.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_6 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat15, float(u_xlat16_6), float(u_xlat16_1.x)));
    u_xlat7.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat7.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat7.xy);
    u_xlat7.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat7.xy);
    u_xlat7.xy = u_xlat7.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat15 = _LightTexture0.sample(sampler_LightTexture0, u_xlat7.xy).w;
    u_xlat15 = float(u_xlat16_1.x) * u_xlat15;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: DIRECTIONAL_COOKIE SHADOWS_SCREEN 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float2 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xy = u_xlat0.yy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, u_xlat0.xx, u_xlat1.xy);
    u_xlat0.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, u_xlat0.zz, u_xlat0.xy);
    output.TEXCOORD6.xy = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy, u_xlat0.ww, u_xlat0.xy);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set 2D Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (480 bytes) on slot 0 {
  Matrix4x4 unity_WorldToShadow[4] at 32
  Matrix4x4 unity_MatrixV at 320
  Matrix4x4 unity_WorldToLight at 400
  Vector3 _WorldSpaceCameraPos at 0
  VectorHalf4 _WorldSpaceLightPos0 at 16
  VectorHalf4 _LightShadowData at 288
  Vector4 unity_ShadowFadeCenterAndType at 304
  VectorHalf4 _LightColor0 at 384
  ScalarHalf _Roughness at 464
  ScalarHalf _Metallic at 466
  ScalarHalf _AlphaCutoff at 468
  ScalarHalf _BumpScale at 470
  VectorHalf4 _Color at 472
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    half4 _WorldSpaceLightPos0;
    float4 hlslcc_mtx4x4unity_WorldToShadow[16];
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depth2d<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    half u_xlat16_6;
    float3 u_xlat7;
    float u_xlat12;
    half2 u_xlat16_12;
    float u_xlat15;
    bool u_xlatb15;
    float u_xlat17;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb15 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb15) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat15 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat2.xyz = float3(u_xlat15) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = fma(u_xlat3.xyz, float3(u_xlat15), float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat15 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat15 = max(u_xlat15, 0.00100000005);
    u_xlat15 = rsqrt(u_xlat15);
    u_xlat4.xyz = float3(u_xlat15) * u_xlat4.xyz;
    u_xlat15 = dot(u_xlat2.xyz, u_xlat4.xyz);
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, float3(FGlobals._WorldSpaceLightPos0.xyz));
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat7.x = dot(float3(FGlobals._WorldSpaceLightPos0.xyz), u_xlat4.xyz);
    u_xlat7.x = clamp(u_xlat7.x, 0.0f, 1.0f);
    u_xlat7.x = max(u_xlat7.x, 0.319999993);
    u_xlat15 = u_xlat15 * u_xlat15;
    u_xlat16_12.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_12.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6 = u_xlat16_12.y * FGlobals._Metallic;
    u_xlat12 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat17 = u_xlat12 * u_xlat12;
    u_xlat12 = fma(u_xlat12, u_xlat12, 1.5);
    u_xlat7.x = u_xlat12 * u_xlat7.x;
    u_xlat12 = fma(u_xlat17, u_xlat17, -1.0);
    u_xlat15 = fma(u_xlat15, u_xlat12, 1.00001001);
    u_xlat15 = u_xlat15 * u_xlat7.x;
    u_xlat15 = u_xlat17 / u_xlat15;
    u_xlat15 = u_xlat15 + -9.99999975e-05;
    u_xlat15 = max(u_xlat15, 0.0);
    u_xlat15 = min(u_xlat15, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_6), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_6 = fma((-u_xlat16_6), half(0.779083729), half(0.779083729));
    u_xlat7.xyz = float3(u_xlat15) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_6), u_xlat7.xyz);
    u_xlat4.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat4.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat4.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat15 = dot(u_xlat3.xyz, u_xlat4.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat15) + u_xlat7.x;
    u_xlat15 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat15);
    u_xlat15 = fma(u_xlat15, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat15 = clamp(u_xlat15, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToShadow[1].xyz;
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[0].xyz, input.TEXCOORD5.xxx, u_xlat7.xyz);
    u_xlat7.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToShadow[2].xyz, input.TEXCOORD5.zzz, u_xlat7.xyz);
    u_xlat7.xyz = u_xlat7.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToShadow[3].xyz;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xy, saturate(u_xlat7.z), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat7.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_6 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat15, float(u_xlat16_6), float(u_xlat16_1.x)));
    u_xlat7.xy = input.TEXCOORD5.yy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xy;
    u_xlat7.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xy, input.TEXCOORD5.xx, u_xlat7.xy);
    u_xlat7.xy = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xy, input.TEXCOORD5.zz, u_xlat7.xy);
    u_xlat7.xy = u_xlat7.xy + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xy;
    u_xlat15 = _LightTexture0.sample(sampler_LightTexture0, u_xlat7.xy).w;
    u_xlat15 = float(u_xlat16_1.x) * u_xlat15;
    u_xlat16_1.xyz = half3(float3(u_xlat15) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 4 sampler slot 0
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 1

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    half u_xlat16_8;
    float u_xlat9;
    half2 u_xlat16_9;
    float u_xlat21;
    bool u_xlatb21;
    half u_xlat16_22;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat21 = u_xlat21 + u_xlat21;
    u_xlat4.xyz = fma(u_xlat2.xyz, (-float3(u_xlat21)), u_xlat4.xyz);
    u_xlat5.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat21 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = float3(u_xlat21) * u_xlat5.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat5.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat21 = u_xlat21 * u_xlat21;
    u_xlat4.x = u_xlat21 * u_xlat21;
    u_xlat16_9.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_9.x), FGlobals._Roughness, half(1.0));
    u_xlat16_8 = u_xlat16_9.y * FGlobals._Metallic;
    u_xlat4.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat21 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat4.xy).x;
    u_xlat21 = u_xlat21 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_8), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8 = fma((-u_xlat16_8), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat21) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_8), float3(u_xlat16_1.xzw)));
    u_xlat0.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat0.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat0.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat0.x = dot(u_xlat3.xyz, u_xlat0.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat0.x) + u_xlat7.x;
    u_xlat0.x = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat0.x);
    u_xlat0.x = fma(u_xlat0.x, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat9 = max(abs(u_xlat7.y), abs(u_xlat7.x));
    u_xlat9 = max(abs(u_xlat7.z), u_xlat9);
    u_xlat9 = u_xlat9 + (-FGlobals._LightProjectionParams.z);
    u_xlat9 = max(u_xlat9, 9.99999975e-06);
    u_xlat9 = u_xlat9 * FGlobals._LightProjectionParams.w;
    u_xlat9 = FGlobals._LightProjectionParams.y / u_xlat9;
    u_xlat9 = u_xlat9 + (-FGlobals._LightProjectionParams.x);
    u_xlat9 = (-u_xlat9) + 1.0;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat9), level(0.0));
    u_xlat16_22 = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_22 = half(fma(u_xlat7.x, float(u_xlat16_22), float(FGlobals._LightShadowData.x)));
    u_xlat16_6.x = (-u_xlat16_22) + half(1.0);
    u_xlat16_22 = half(fma(u_xlat0.x, float(u_xlat16_6.x), float(u_xlat16_22)));
    u_xlat0.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat0.xyz);
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat0.xyz);
    u_xlat0.xyz = u_xlat0.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xx).x;
    u_xlat0.x = float(u_xlat16_22) * u_xlat0.x;
    u_xlat16_6.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_6.xyz = half3(u_xlat2.xxx * float3(u_xlat16_6.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_6.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half u_xlat16_7;
    float3 u_xlat8;
    float u_xlat14;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = float3(u_xlat18) * u_xlat5.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat8.x = clamp(u_xlat8.x, 0.0f, 1.0f);
    u_xlat8.x = max(u_xlat8.x, 0.319999993);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat14 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat20 = u_xlat14 * u_xlat14;
    u_xlat14 = fma(u_xlat14, u_xlat14, 1.5);
    u_xlat8.x = u_xlat14 * u_xlat8.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat18 = fma(u_xlat18, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat8.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat8.xyz = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat8.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat8.x = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = sqrt(u_xlat8.x);
    u_xlat8.x = (-u_xlat18) + u_xlat8.x;
    u_xlat18 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat8.x, u_xlat18);
    u_xlat18 = fma(u_xlat18, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat3.x = max(abs(u_xlat8.y), abs(u_xlat8.x));
    u_xlat3.x = max(abs(u_xlat8.z), u_xlat3.x);
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.z);
    u_xlat3.x = max(u_xlat3.x, 9.99999975e-06);
    u_xlat3.x = u_xlat3.x * FGlobals._LightProjectionParams.w;
    u_xlat3.x = FGlobals._LightProjectionParams.y / u_xlat3.x;
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.x);
    u_xlat3.x = (-u_xlat3.x) + 1.0;
    u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat3.x), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat8.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_7 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat18, float(u_xlat16_7), float(u_xlat16_1.x)));
    u_xlat8.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat8.xyz);
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat8.xyz);
    u_xlat8.xyz = u_xlat8.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat18 = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat18 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat18)).x;
    u_xlat18 = float(u_xlat16_1.x) * u_xlat18;
    u_xlat16_1.xyz = half3(float3(u_xlat18) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half u_xlat16_7;
    float3 u_xlat8;
    float u_xlat14;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = float3(u_xlat18) * u_xlat5.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat8.x = clamp(u_xlat8.x, 0.0f, 1.0f);
    u_xlat8.x = max(u_xlat8.x, 0.319999993);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat14 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat20 = u_xlat14 * u_xlat14;
    u_xlat14 = fma(u_xlat14, u_xlat14, 1.5);
    u_xlat8.x = u_xlat14 * u_xlat8.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat18 = fma(u_xlat18, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat8.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat8.xyz = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat8.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat8.x = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = sqrt(u_xlat8.x);
    u_xlat8.x = (-u_xlat18) + u_xlat8.x;
    u_xlat18 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat8.x, u_xlat18);
    u_xlat18 = fma(u_xlat18, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat3.x = max(abs(u_xlat8.y), abs(u_xlat8.x));
    u_xlat3.x = max(abs(u_xlat8.z), u_xlat3.x);
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.z);
    u_xlat3.x = max(u_xlat3.x, 9.99999975e-06);
    u_xlat3.x = u_xlat3.x * FGlobals._LightProjectionParams.w;
    u_xlat3.x = FGlobals._LightProjectionParams.y / u_xlat3.x;
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.x);
    u_xlat3.x = (-u_xlat3.x) + 1.0;
    u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat3.x), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat8.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_7 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat18, float(u_xlat16_7), float(u_xlat16_1.x)));
    u_xlat8.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat8.xyz);
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat8.xyz);
    u_xlat8.xyz = u_xlat8.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat18 = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat18 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat18)).x;
    u_xlat18 = float(u_xlat16_1.x) * u_xlat18;
    u_xlat16_1.xyz = half3(float3(u_xlat18) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 4 sampler slot 0
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 1

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    bool u_xlatb1;
    float3 u_xlat2;
    float3 u_xlat3;
    half4 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float3 u_xlat6;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    half3 u_xlat16_16;
    half u_xlat16_27;
    float u_xlat33;
    bool u_xlatb33;
    float u_xlat34;
    half u_xlat16_38;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat2.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat16_3 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat3.xyz = float3(u_xlat16_3.xyz) * float3(FGlobals._Color.xyz);
    u_xlat4.xyz = u_xlat3.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.x = fma(u_xlat16_3.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb33 = u_xlat16_5.x<half(0.0);
    if(((int(u_xlatb33) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_6.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_5.x = u_xlat16_6.y * FGlobals._Metallic;
    u_xlat16_16.x = fma((-u_xlat16_6.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_7.xyz = fma(u_xlat16_6.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_7.xy = u_xlat16_7.xy * half2(FGlobals._BumpScale);
    u_xlat6.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat6.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat6.xyz);
    u_xlat6.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat6.xyz);
    u_xlat6.xyz = u_xlat6.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat8.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat8.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat8.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat8.xyz);
    u_xlat1.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat1.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat1.x = sqrt(u_xlat1.x);
    u_xlat1.x = (-u_xlat33) + u_xlat1.x;
    u_xlat33 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat1.x, u_xlat33);
    u_xlat33 = fma(u_xlat33, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlatb1 = u_xlat33<0.99000001;
    if(u_xlatb1){
        u_xlat1.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat34 = max(abs(u_xlat1.y), abs(u_xlat1.x));
        u_xlat34 = max(abs(u_xlat1.z), u_xlat34);
        u_xlat34 = u_xlat34 + (-FGlobals._LightProjectionParams.z);
        u_xlat34 = max(u_xlat34, 9.99999975e-06);
        u_xlat34 = u_xlat34 * FGlobals._LightProjectionParams.w;
        u_xlat34 = FGlobals._LightProjectionParams.y / u_xlat34;
        u_xlat34 = u_xlat34 + (-FGlobals._LightProjectionParams.x);
        u_xlat34 = (-u_xlat34) + 1.0;
        u_xlat8.xyz = u_xlat1.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat34), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat34), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat34), level(0.0));
        u_xlat1.xyz = u_xlat1.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat1.xyz, saturate(u_xlat34), level(0.0));
        u_xlat1.x = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_27 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_27 = half(fma(u_xlat1.x, float(u_xlat16_27), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_27 = half(1.0);
    }
    u_xlat16_38 = (-u_xlat16_27) + half(1.0);
    u_xlat16_27 = half(fma(u_xlat33, float(u_xlat16_38), float(u_xlat16_27)));
    u_xlat33 = dot(u_xlat6.xyz, u_xlat6.xyz);
    u_xlat33 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat33)).x;
    u_xlat33 = float(u_xlat16_27) * u_xlat33;
    u_xlat1.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_7.xyz));
    u_xlat1.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_7.xyz));
    u_xlat1.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_7.xyz));
    u_xlat34 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat34 = rsqrt(u_xlat34);
    u_xlat1.xyz = float3(u_xlat34) * u_xlat1.xyz;
    u_xlat16_7.xyz = half3(float3(u_xlat33) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat3.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(u_xlat16_5.xxx, u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.x = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat33 = dot(u_xlat2.xyz, u_xlat1.xyz);
    u_xlat33 = u_xlat33 + u_xlat33;
    u_xlat2.xyz = fma(u_xlat1.xyz, (-float3(u_xlat33)), u_xlat2.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat0.xyz);
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.y = (-float(u_xlat16_16.x)) + 1.0;
    u_xlat0.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat0.xy).x;
    u_xlat0.x = u_xlat0.x * 16.0;
    u_xlat16_16.xyz = half3(float3(u_xlat16_10.xyz) * u_xlat0.xxx);
    u_xlat16_5.xyz = half3(fma(u_xlat4.xyz, float3(u_xlat16_5.xxx), float3(u_xlat16_16.xyz)));
    u_xlat16_7.xyz = half3(float3(u_xlat33) * float3(u_xlat16_7.xyz));
    output.SV_Target0.xyz = u_xlat16_5.xyz * u_xlat16_7.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    bool u_xlatb35;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat5.xyz);
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat5.xyz);
    u_xlat5.xyz = u_xlat5.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat35 = max(abs(u_xlat7.y), abs(u_xlat7.x));
        u_xlat35 = max(abs(u_xlat7.z), u_xlat35);
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.z);
        u_xlat35 = max(u_xlat35, 9.99999975e-06);
        u_xlat35 = u_xlat35 * FGlobals._LightProjectionParams.w;
        u_xlat35 = FGlobals._LightProjectionParams.y / u_xlat35;
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.x);
        u_xlat35 = (-u_xlat35) + 1.0;
        u_xlat8.xyz = u_xlat7.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat35), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_26 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_26 = half(fma(u_xlat35, float(u_xlat16_26), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_26 = half(1.0);
    }
    u_xlat16_37 = (-u_xlat16_26) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_37), float(u_xlat16_26)));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat34)).x;
    u_xlat34 = float(u_xlat16_26) * u_xlat34;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat35 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat35 = rsqrt(u_xlat35);
    u_xlat5.xyz = float3(u_xlat35) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(float3(u_xlat34) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 2
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 3
Set 2D Texture "_BumpMap" to slot 2 sampler slot 4
Set 2D Texture "_LightTexture0" to slot 3 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 4 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_MainTex [[ sampler (2) ]],
    sampler sampler_MetallicGlossMap [[ sampler (3) ]],
    sampler sampler_BumpMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTexture0 [[ texture(3) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    bool u_xlatb35;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat5.xyz);
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat5.xyz);
    u_xlat5.xyz = u_xlat5.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat35 = max(abs(u_xlat7.y), abs(u_xlat7.x));
        u_xlat35 = max(abs(u_xlat7.z), u_xlat35);
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.z);
        u_xlat35 = max(u_xlat35, 9.99999975e-06);
        u_xlat35 = u_xlat35 * FGlobals._LightProjectionParams.w;
        u_xlat35 = FGlobals._LightProjectionParams.y / u_xlat35;
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.x);
        u_xlat35 = (-u_xlat35) + 1.0;
        u_xlat8.xyz = u_xlat7.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat35), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_26 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_26 = half(fma(u_xlat35, float(u_xlat16_26), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_26 = half(1.0);
    }
    u_xlat16_37 = (-u_xlat16_26) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_37), float(u_xlat16_26)));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTexture0.sample(sampler_LightTexture0, float2(u_xlat34)).x;
    u_xlat34 = float(u_xlat16_26) * u_xlat34;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat35 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat35 = rsqrt(u_xlat35);
    u_xlat5.xyz = float3(u_xlat35) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(float3(u_xlat34) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 4
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 5
Set 2D Texture "_BumpMap" to slot 2 sampler slot 6
Set 2D Texture "_LightTextureB0" to slot 3
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0
Set CUBE Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_LightTextureB0 [[ sampler (3) ]],
    sampler sampler_MainTex [[ sampler (4) ]],
    sampler sampler_MetallicGlossMap [[ sampler (5) ]],
    sampler sampler_BumpMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    half u_xlat16_8;
    float u_xlat9;
    half2 u_xlat16_9;
    float u_xlat21;
    bool u_xlatb21;
    half u_xlat16_22;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb21 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb21) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat21 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat2.xyz = float3(u_xlat21) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat21 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat4.xyz = float3(u_xlat21) * u_xlat3.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat2.xyz);
    u_xlat21 = u_xlat21 + u_xlat21;
    u_xlat4.xyz = fma(u_xlat2.xyz, (-float3(u_xlat21)), u_xlat4.xyz);
    u_xlat5.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat21 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat21 = rsqrt(u_xlat21);
    u_xlat5.xyz = float3(u_xlat21) * u_xlat5.xyz;
    u_xlat21 = dot(u_xlat4.xyz, u_xlat5.xyz);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat21 = u_xlat21 * u_xlat21;
    u_xlat4.x = u_xlat21 * u_xlat21;
    u_xlat16_9.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_9.x), FGlobals._Roughness, half(1.0));
    u_xlat16_8 = u_xlat16_9.y * FGlobals._Metallic;
    u_xlat4.y = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat21 = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat4.xy).x;
    u_xlat21 = u_xlat21 * 16.0;
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_8), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_8 = fma((-u_xlat16_8), half(0.779083729), half(0.779083729));
    u_xlat16_1.xzw = half3(float3(u_xlat21) * float3(u_xlat16_1.xzw));
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(u_xlat16_8), float3(u_xlat16_1.xzw)));
    u_xlat0.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat0.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat0.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat0.x = dot(u_xlat3.xyz, u_xlat0.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat7.x = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat7.x = sqrt(u_xlat7.x);
    u_xlat7.x = (-u_xlat0.x) + u_xlat7.x;
    u_xlat0.x = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat7.x, u_xlat0.x);
    u_xlat0.x = fma(u_xlat0.x, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat9 = max(abs(u_xlat7.y), abs(u_xlat7.x));
    u_xlat9 = max(abs(u_xlat7.z), u_xlat9);
    u_xlat9 = u_xlat9 + (-FGlobals._LightProjectionParams.z);
    u_xlat9 = max(u_xlat9, 9.99999975e-06);
    u_xlat9 = u_xlat9 * FGlobals._LightProjectionParams.w;
    u_xlat9 = FGlobals._LightProjectionParams.y / u_xlat9;
    u_xlat9 = u_xlat9 + (-FGlobals._LightProjectionParams.x);
    u_xlat9 = (-u_xlat9) + 1.0;
    u_xlat7.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat9), level(0.0));
    u_xlat16_22 = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_22 = half(fma(u_xlat7.x, float(u_xlat16_22), float(FGlobals._LightShadowData.x)));
    u_xlat16_6.x = (-u_xlat16_22) + half(1.0);
    u_xlat16_22 = half(fma(u_xlat0.x, float(u_xlat16_6.x), float(u_xlat16_22)));
    u_xlat0.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat0.xyz);
    u_xlat0.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat0.xyz);
    u_xlat0.xyz = u_xlat0.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat21 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat0.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat0.xyz).w;
    u_xlat7.x = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat21)).x;
    u_xlat0.x = u_xlat0.x * u_xlat7.x;
    u_xlat0.x = float(u_xlat16_22) * u_xlat0.x;
    u_xlat16_6.xyz = half3(u_xlat0.xxx * float3(FGlobals._LightColor0.xyz));
    u_xlat16_6.xyz = half3(u_xlat2.xxx * float3(u_xlat16_6.xyz));
    output.SV_Target0.xyz = u_xlat16_1.xyz * u_xlat16_6.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 2
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half u_xlat16_7;
    float3 u_xlat8;
    float u_xlat14;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = float3(u_xlat18) * u_xlat5.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat8.x = clamp(u_xlat8.x, 0.0f, 1.0f);
    u_xlat8.x = max(u_xlat8.x, 0.319999993);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat14 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat20 = u_xlat14 * u_xlat14;
    u_xlat14 = fma(u_xlat14, u_xlat14, 1.5);
    u_xlat8.x = u_xlat14 * u_xlat8.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat18 = fma(u_xlat18, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat8.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat8.xyz = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat8.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat8.x = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = sqrt(u_xlat8.x);
    u_xlat8.x = (-u_xlat18) + u_xlat8.x;
    u_xlat18 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat8.x, u_xlat18);
    u_xlat18 = fma(u_xlat18, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat3.x = max(abs(u_xlat8.y), abs(u_xlat8.x));
    u_xlat3.x = max(abs(u_xlat8.z), u_xlat3.x);
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.z);
    u_xlat3.x = max(u_xlat3.x, 9.99999975e-06);
    u_xlat3.x = u_xlat3.x * FGlobals._LightProjectionParams.w;
    u_xlat3.x = FGlobals._LightProjectionParams.y / u_xlat3.x;
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.x);
    u_xlat3.x = (-u_xlat3.x) + 1.0;
    u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat3.x), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat8.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_7 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat18, float(u_xlat16_7), float(u_xlat16_1.x)));
    u_xlat8.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat8.xyz);
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat8.xyz);
    u_xlat8.xyz = u_xlat8.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat18 = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat8.xyz).w;
    u_xlat18 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat18)).x;
    u_xlat18 = u_xlat8.x * u_xlat18;
    u_xlat18 = float(u_xlat16_1.x) * u_xlat18;
    u_xlat16_1.xyz = half3(float3(u_xlat18) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 2
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half4 u_xlat16_1;
    float3 u_xlat2;
    half3 u_xlat16_2;
    float3 u_xlat3;
    float3 u_xlat4;
    float3 u_xlat5;
    half u_xlat16_7;
    float3 u_xlat8;
    float u_xlat14;
    half2 u_xlat16_14;
    float u_xlat18;
    bool u_xlatb18;
    float u_xlat20;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb18 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb18) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_2.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_2.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat2.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat18 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat2.xyz = float3(u_xlat18) * u_xlat2.xyz;
    u_xlat3.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat18 = dot(u_xlat3.xyz, u_xlat3.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat3.xyz = float3(u_xlat18) * u_xlat3.xyz;
    u_xlat4.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat4.xyz);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = fma(u_xlat4.xyz, float3(u_xlat18), u_xlat3.xyz);
    u_xlat18 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat18 = max(u_xlat18, 0.00100000005);
    u_xlat18 = rsqrt(u_xlat18);
    u_xlat5.xyz = float3(u_xlat18) * u_xlat5.xyz;
    u_xlat18 = dot(u_xlat2.xyz, u_xlat5.xyz);
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat2.x = dot(u_xlat2.xyz, u_xlat3.xyz);
    u_xlat2.x = clamp(u_xlat2.x, 0.0f, 1.0f);
    u_xlat8.x = dot(u_xlat3.xyz, u_xlat5.xyz);
    u_xlat8.x = clamp(u_xlat8.x, 0.0f, 1.0f);
    u_xlat8.x = max(u_xlat8.x, 0.319999993);
    u_xlat18 = u_xlat18 * u_xlat18;
    u_xlat16_14.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_1.x = fma((-u_xlat16_14.x), FGlobals._Roughness, half(1.0));
    u_xlat16_7 = u_xlat16_14.y * FGlobals._Metallic;
    u_xlat14 = (-float(u_xlat16_1.x)) + 1.0;
    u_xlat20 = u_xlat14 * u_xlat14;
    u_xlat14 = fma(u_xlat14, u_xlat14, 1.5);
    u_xlat8.x = u_xlat14 * u_xlat8.x;
    u_xlat14 = fma(u_xlat20, u_xlat20, -1.0);
    u_xlat18 = fma(u_xlat18, u_xlat14, 1.00001001);
    u_xlat18 = u_xlat18 * u_xlat8.x;
    u_xlat18 = u_xlat20 / u_xlat18;
    u_xlat18 = u_xlat18 + -9.99999975e-05;
    u_xlat18 = max(u_xlat18, 0.0);
    u_xlat18 = min(u_xlat18, 100.0);
    u_xlat16_1.xzw = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat0.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xzw = fma(half3(u_xlat16_7), u_xlat16_1.xzw, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_7 = fma((-u_xlat16_7), half(0.779083729), half(0.779083729));
    u_xlat8.xyz = float3(u_xlat18) * float3(u_xlat16_1.xzw);
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(u_xlat16_7), u_xlat8.xyz);
    u_xlat3.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat3.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat3.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat18 = dot(u_xlat4.xyz, u_xlat3.xyz);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat8.x = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = sqrt(u_xlat8.x);
    u_xlat8.x = (-u_xlat18) + u_xlat8.x;
    u_xlat18 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat8.x, u_xlat18);
    u_xlat18 = fma(u_xlat18, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat18 = clamp(u_xlat18, 0.0f, 1.0f);
    u_xlat8.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
    u_xlat3.x = max(abs(u_xlat8.y), abs(u_xlat8.x));
    u_xlat3.x = max(abs(u_xlat8.z), u_xlat3.x);
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.z);
    u_xlat3.x = max(u_xlat3.x, 9.99999975e-06);
    u_xlat3.x = u_xlat3.x * FGlobals._LightProjectionParams.w;
    u_xlat3.x = FGlobals._LightProjectionParams.y / u_xlat3.x;
    u_xlat3.x = u_xlat3.x + (-FGlobals._LightProjectionParams.x);
    u_xlat3.x = (-u_xlat3.x) + 1.0;
    u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat3.x), level(0.0));
    u_xlat16_1.x = (-FGlobals._LightShadowData.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat8.x, float(u_xlat16_1.x), float(FGlobals._LightShadowData.x)));
    u_xlat16_7 = (-u_xlat16_1.x) + half(1.0);
    u_xlat16_1.x = half(fma(u_xlat18, float(u_xlat16_7), float(u_xlat16_1.x)));
    u_xlat8.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat8.xyz);
    u_xlat8.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat8.xyz);
    u_xlat8.xyz = u_xlat8.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat18 = dot(u_xlat8.xyz, u_xlat8.xyz);
    u_xlat8.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat8.xyz).w;
    u_xlat18 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat18)).x;
    u_xlat18 = u_xlat8.x * u_xlat18;
    u_xlat18 = float(u_xlat16_1.x) * u_xlat18;
    u_xlat16_1.xyz = half3(float3(u_xlat18) * float3(FGlobals._LightColor0.xyz));
    u_xlat0.xyz = u_xlat0.xyz * float3(u_xlat16_1.xyz);
    u_xlat0.xyz = u_xlat2.xxx * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 4
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 5
Set 2D Texture "_BumpMap" to slot 2 sampler slot 6
Set 2D Texture "_LightTextureB0" to slot 3
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 2
Set 2D Texture "unity_NHxRoughness" to slot 5 sampler slot 0
Set CUBE Texture "_ShadowMapTexture" to slot 6 sampler slot 1

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler samplerunity_NHxRoughness [[ sampler (0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (1) ]],
    sampler sampler_LightTexture0 [[ sampler (2) ]],
    sampler sampler_LightTextureB0 [[ sampler (3) ]],
    sampler sampler_MainTex [[ sampler (4) ]],
    sampler sampler_MetallicGlossMap [[ sampler (5) ]],
    sampler sampler_BumpMap [[ sampler (6) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    texture2d<float, access::sample > unity_NHxRoughness [[ texture(5) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(6) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    bool u_xlatb1;
    float3 u_xlat2;
    float3 u_xlat3;
    half4 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_5;
    float3 u_xlat6;
    half3 u_xlat16_6;
    half3 u_xlat16_7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    half3 u_xlat16_16;
    half u_xlat16_27;
    float u_xlat33;
    bool u_xlatb33;
    float u_xlat34;
    half u_xlat16_38;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat2.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat16_3 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat3.xyz = float3(u_xlat16_3.xyz) * float3(FGlobals._Color.xyz);
    u_xlat4.xyz = u_xlat3.xyz * float3(input.COLOR0.xyz);
    u_xlat16_5.x = fma(u_xlat16_3.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb33 = u_xlat16_5.x<half(0.0);
    if(((int(u_xlatb33) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_6.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_5.x = u_xlat16_6.y * FGlobals._Metallic;
    u_xlat16_16.x = fma((-u_xlat16_6.x), FGlobals._Roughness, half(1.0));
    u_xlat16_6.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_7.xyz = fma(u_xlat16_6.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_7.xy = u_xlat16_7.xy * half2(FGlobals._BumpScale);
    u_xlat6.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat6.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat6.xyz);
    u_xlat6.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat6.xyz);
    u_xlat6.xyz = u_xlat6.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat8.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat8.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat8.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat8.xyz);
    u_xlat1.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat1.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat1.x = sqrt(u_xlat1.x);
    u_xlat1.x = (-u_xlat33) + u_xlat1.x;
    u_xlat33 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat1.x, u_xlat33);
    u_xlat33 = fma(u_xlat33, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlatb1 = u_xlat33<0.99000001;
    if(u_xlatb1){
        u_xlat1.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat34 = max(abs(u_xlat1.y), abs(u_xlat1.x));
        u_xlat34 = max(abs(u_xlat1.z), u_xlat34);
        u_xlat34 = u_xlat34 + (-FGlobals._LightProjectionParams.z);
        u_xlat34 = max(u_xlat34, 9.99999975e-06);
        u_xlat34 = u_xlat34 * FGlobals._LightProjectionParams.w;
        u_xlat34 = FGlobals._LightProjectionParams.y / u_xlat34;
        u_xlat34 = u_xlat34 + (-FGlobals._LightProjectionParams.x);
        u_xlat34 = (-u_xlat34) + 1.0;
        u_xlat8.xyz = u_xlat1.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat34), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat34), level(0.0));
        u_xlat9.xyz = u_xlat1.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat34), level(0.0));
        u_xlat1.xyz = u_xlat1.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat1.xyz, saturate(u_xlat34), level(0.0));
        u_xlat1.x = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_27 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_27 = half(fma(u_xlat1.x, float(u_xlat16_27), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_27 = half(1.0);
    }
    u_xlat16_38 = (-u_xlat16_27) + half(1.0);
    u_xlat16_27 = half(fma(u_xlat33, float(u_xlat16_38), float(u_xlat16_27)));
    u_xlat33 = dot(u_xlat6.xyz, u_xlat6.xyz);
    u_xlat33 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat33)).x;
    u_xlat1.x = _LightTexture0.sample(sampler_LightTexture0, u_xlat6.xyz).w;
    u_xlat33 = u_xlat33 * u_xlat1.x;
    u_xlat33 = float(u_xlat16_27) * u_xlat33;
    u_xlat1.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_7.xyz));
    u_xlat1.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_7.xyz));
    u_xlat1.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_7.xyz));
    u_xlat34 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat34 = rsqrt(u_xlat34);
    u_xlat1.xyz = float3(u_xlat34) * u_xlat1.xyz;
    u_xlat16_7.xyz = half3(float3(u_xlat33) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat3.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(u_xlat16_5.xxx, u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_5.x = fma((-u_xlat16_5.x), half(0.779083729), half(0.779083729));
    u_xlat33 = dot(u_xlat2.xyz, u_xlat1.xyz);
    u_xlat33 = u_xlat33 + u_xlat33;
    u_xlat2.xyz = fma(u_xlat1.xyz, (-float3(u_xlat33)), u_xlat2.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat0.xyz);
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.x = u_xlat0.x * u_xlat0.x;
    u_xlat0.y = (-float(u_xlat16_16.x)) + 1.0;
    u_xlat0.x = unity_NHxRoughness.sample(samplerunity_NHxRoughness, u_xlat0.xy).x;
    u_xlat0.x = u_xlat0.x * 16.0;
    u_xlat16_16.xyz = half3(float3(u_xlat16_10.xyz) * u_xlat0.xxx);
    u_xlat16_5.xyz = half3(fma(u_xlat4.xyz, float3(u_xlat16_5.xxx), float3(u_xlat16_16.xyz)));
    u_xlat16_7.xyz = half3(float3(u_xlat33) * float3(u_xlat16_7.xyz));
    output.SV_Target0.xyz = u_xlat16_5.xyz * u_xlat16_7.xyz;
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 2
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    bool u_xlatb35;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat5.xyz);
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat5.xyz);
    u_xlat5.xyz = u_xlat5.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat35 = max(abs(u_xlat7.y), abs(u_xlat7.x));
        u_xlat35 = max(abs(u_xlat7.z), u_xlat35);
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.z);
        u_xlat35 = max(u_xlat35, 9.99999975e-06);
        u_xlat35 = u_xlat35 * FGlobals._LightProjectionParams.w;
        u_xlat35 = FGlobals._LightProjectionParams.y / u_xlat35;
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.x);
        u_xlat35 = (-u_xlat35) + 1.0;
        u_xlat8.xyz = u_xlat7.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat35), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_26 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_26 = half(fma(u_xlat35, float(u_xlat16_26), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_26 = half(1.0);
    }
    u_xlat16_37 = (-u_xlat16_26) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_37), float(u_xlat16_26)));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat34)).x;
    u_xlat35 = _LightTexture0.sample(sampler_LightTexture0, u_xlat5.xyz).w;
    u_xlat34 = u_xlat34 * u_xlat35;
    u_xlat34 = float(u_xlat16_26) * u_xlat34;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat35 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat35 = rsqrt(u_xlat35);
    u_xlat5.xyz = float3(u_xlat35) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(float3(u_xlat34) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: POINT_COOKIE SHADOWS_CUBE SHADOWS_SOFT 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (336 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Matrix4x4 unity_WorldToLight at 208
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 272
  Vector4 _BumpMap_ST at 288
  Vector4 _MetallicGlossMap_ST at 304
  Vector4 _OcclusionMap_ST at 320
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float3 TEXCOORD6 [[ user(TEXCOORD6) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    float u_xlat13;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat13 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat1.xyz = float3(u_xlat13) * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat13 = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat13 = rsqrt(u_xlat13);
    u_xlat2.xyz = float3(u_xlat13) * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat13 = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = float3(u_xlat13) * u_xlat3.xyz;
    output.TEXCOORD2.y = u_xlat3.x;
    output.TEXCOORD2.x = u_xlat2.z;
    output.TEXCOORD2.z = u_xlat1.y;
    output.TEXCOORD3.x = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat2.y;
    output.TEXCOORD3.z = u_xlat1.z;
    output.TEXCOORD4.z = u_xlat1.x;
    output.TEXCOORD3.y = u_xlat3.y;
    output.TEXCOORD4.y = u_xlat3.z;
    output.TEXCOORD5.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3], input.POSITION0.wwww, u_xlat0);
    output.COLOR0 = input.COLOR0;
    u_xlat1.xyz = u_xlat0.yyy * VGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, u_xlat0.xxx, u_xlat1.xyz);
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, u_xlat0.zzz, u_xlat1.xyz);
    output.TEXCOORD6.xyz = fma(VGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz, u_xlat0.www, u_xlat0.xyz);
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0 sampler slot 3
Set 2D Texture "_MetallicGlossMap" to slot 1 sampler slot 4
Set 2D Texture "_BumpMap" to slot 2 sampler slot 5
Set 2D Texture "_LightTextureB0" to slot 3 sampler slot 2
Set CUBE Texture "_LightTexture0" to slot 4 sampler slot 1
Set CUBE Texture "_ShadowMapTexture" to slot 5 sampler slot 0

Constant Buffer "FGlobals" (256 bytes) on slot 0 {
  Matrix4x4 unity_MatrixV at 96
  Matrix4x4 unity_WorldToLight at 176
  Vector3 _WorldSpaceCameraPos at 0
  Vector4 _WorldSpaceLightPos0 at 16
  Vector4 _LightPositionRange at 32
  Vector4 _LightProjectionParams at 48
  VectorHalf4 _LightShadowData at 64
  Vector4 unity_ShadowFadeCenterAndType at 80
  VectorHalf4 _LightColor0 at 160
  ScalarHalf _Roughness at 240
  ScalarHalf _Metallic at 242
  ScalarHalf _AlphaCutoff at 244
  ScalarHalf _BumpScale at 246
  VectorHalf4 _Color at 248
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float3 _WorldSpaceCameraPos;
    float4 _WorldSpaceLightPos0;
    float4 _LightPositionRange;
    float4 _LightProjectionParams;
    half4 _LightShadowData;
    float4 unity_ShadowFadeCenterAndType;
    float4 hlslcc_mtx4x4unity_MatrixV[4];
    half4 _LightColor0;
    float4 hlslcc_mtx4x4unity_WorldToLight[4];
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float3 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float3 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float3 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float3 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

constexpr sampler _mtl_xl_shadow_sampler(address::clamp_to_edge, filter::linear, compare_func::greater_equal);
fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_ShadowMapTexture [[ sampler (0) ]],
    sampler sampler_LightTexture0 [[ sampler (1) ]],
    sampler sampler_LightTextureB0 [[ sampler (2) ]],
    sampler sampler_MainTex [[ sampler (3) ]],
    sampler sampler_MetallicGlossMap [[ sampler (4) ]],
    sampler sampler_BumpMap [[ sampler (5) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<float, access::sample > _LightTextureB0 [[ texture(3) ]] ,
    texturecube<float, access::sample > _LightTexture0 [[ texture(4) ]] ,
    depthcube<float, access::sample > _ShadowMapTexture [[ texture(5) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    float3 u_xlat1;
    float3 u_xlat2;
    half4 u_xlat16_2;
    float3 u_xlat3;
    half u_xlat16_4;
    float3 u_xlat5;
    half3 u_xlat16_5;
    half3 u_xlat16_6;
    float3 u_xlat7;
    float4 u_xlat8;
    float3 u_xlat9;
    half3 u_xlat16_10;
    float u_xlat11;
    float u_xlat12;
    half u_xlat16_15;
    float u_xlat22;
    half u_xlat16_26;
    float u_xlat33;
    float u_xlat34;
    bool u_xlatb34;
    float u_xlat35;
    bool u_xlatb35;
    half u_xlat16_37;
    u_xlat0.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceLightPos0.xyz;
    u_xlat33 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    u_xlat1.xyz = (-input.TEXCOORD5.xyz) + FGlobals._WorldSpaceCameraPos.xyzx.xyz;
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat16_2 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat2.xyz = float3(u_xlat16_2.xyz) * float3(FGlobals._Color.xyz);
    u_xlat3.xyz = u_xlat2.xyz * float3(input.COLOR0.xyz);
    u_xlat16_4 = fma(u_xlat16_2.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlatb34 = u_xlat16_4<half(0.0);
    if(((int(u_xlatb34) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_5.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_4 = u_xlat16_5.y * FGlobals._Metallic;
    u_xlat16_15 = fma((-u_xlat16_5.x), FGlobals._Roughness, half(1.0));
    u_xlat16_5.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_6.xyz = fma(u_xlat16_5.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_6.xy = u_xlat16_6.xy * half2(FGlobals._BumpScale);
    u_xlat5.xyz = input.TEXCOORD5.yyy * FGlobals.hlslcc_mtx4x4unity_WorldToLight[1].xyz;
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[0].xyz, input.TEXCOORD5.xxx, u_xlat5.xyz);
    u_xlat5.xyz = fma(FGlobals.hlslcc_mtx4x4unity_WorldToLight[2].xyz, input.TEXCOORD5.zzz, u_xlat5.xyz);
    u_xlat5.xyz = u_xlat5.xyz + FGlobals.hlslcc_mtx4x4unity_WorldToLight[3].xyz;
    u_xlat7.x = FGlobals.hlslcc_mtx4x4unity_MatrixV[0].z;
    u_xlat7.y = FGlobals.hlslcc_mtx4x4unity_MatrixV[1].z;
    u_xlat7.z = FGlobals.hlslcc_mtx4x4unity_MatrixV[2].z;
    u_xlat34 = dot(u_xlat1.xyz, u_xlat7.xyz);
    u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals.unity_ShadowFadeCenterAndType.xyz);
    u_xlat35 = dot(u_xlat7.xyz, u_xlat7.xyz);
    u_xlat35 = sqrt(u_xlat35);
    u_xlat35 = (-u_xlat34) + u_xlat35;
    u_xlat34 = fma(FGlobals.unity_ShadowFadeCenterAndType.w, u_xlat35, u_xlat34);
    u_xlat34 = fma(u_xlat34, float(FGlobals._LightShadowData.z), float(FGlobals._LightShadowData.w));
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlatb35 = u_xlat34<0.99000001;
    if(u_xlatb35){
        u_xlat7.xyz = input.TEXCOORD5.xyz + (-FGlobals._LightPositionRange.xyz);
        u_xlat35 = max(abs(u_xlat7.y), abs(u_xlat7.x));
        u_xlat35 = max(abs(u_xlat7.z), u_xlat35);
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.z);
        u_xlat35 = max(u_xlat35, 9.99999975e-06);
        u_xlat35 = u_xlat35 * FGlobals._LightProjectionParams.w;
        u_xlat35 = FGlobals._LightProjectionParams.y / u_xlat35;
        u_xlat35 = u_xlat35 + (-FGlobals._LightProjectionParams.x);
        u_xlat35 = (-u_xlat35) + 1.0;
        u_xlat8.xyz = u_xlat7.xyz + float3(0.0078125, 0.0078125, 0.0078125);
        u_xlat8.x = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat8.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, -0.0078125, 0.0078125);
        u_xlat8.y = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat9.xyz = u_xlat7.xyz + float3(-0.0078125, 0.0078125, -0.0078125);
        u_xlat8.z = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat9.xyz, saturate(u_xlat35), level(0.0));
        u_xlat7.xyz = u_xlat7.xyz + float3(0.0078125, -0.0078125, -0.0078125);
        u_xlat8.w = _ShadowMapTexture.sample_compare(_mtl_xl_shadow_sampler, u_xlat7.xyz, saturate(u_xlat35), level(0.0));
        u_xlat35 = dot(u_xlat8, float4(0.25, 0.25, 0.25, 0.25));
        u_xlat16_26 = (-FGlobals._LightShadowData.x) + half(1.0);
        u_xlat16_26 = half(fma(u_xlat35, float(u_xlat16_26), float(FGlobals._LightShadowData.x)));
    } else {
        u_xlat16_26 = half(1.0);
    }
    u_xlat16_37 = (-u_xlat16_26) + half(1.0);
    u_xlat16_26 = half(fma(u_xlat34, float(u_xlat16_37), float(u_xlat16_26)));
    u_xlat34 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat34 = _LightTextureB0.sample(sampler_LightTextureB0, float2(u_xlat34)).x;
    u_xlat35 = _LightTexture0.sample(sampler_LightTexture0, u_xlat5.xyz).w;
    u_xlat34 = u_xlat34 * u_xlat35;
    u_xlat34 = float(u_xlat16_26) * u_xlat34;
    u_xlat5.x = dot(input.TEXCOORD2.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.y = dot(input.TEXCOORD3.xyz, float3(u_xlat16_6.xyz));
    u_xlat5.z = dot(input.TEXCOORD4.xyz, float3(u_xlat16_6.xyz));
    u_xlat35 = dot(u_xlat5.xyz, u_xlat5.xyz);
    u_xlat35 = rsqrt(u_xlat35);
    u_xlat5.xyz = float3(u_xlat35) * u_xlat5.xyz;
    u_xlat16_6.xyz = half3(float3(u_xlat34) * float3(FGlobals._LightColor0.xyz));
    u_xlat16_10.xyz = half3(fma(u_xlat2.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_10.xyz = fma(half3(u_xlat16_4), u_xlat16_10.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_4 = fma((-u_xlat16_4), half(0.779083729), half(0.779083729));
    u_xlat1.xyz = fma(u_xlat1.xyz, float3(u_xlat33), u_xlat0.xyz);
    u_xlat33 = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat33 = max(u_xlat33, 0.00100000005);
    u_xlat33 = rsqrt(u_xlat33);
    u_xlat1.xyz = float3(u_xlat33) * u_xlat1.xyz;
    u_xlat33 = dot(u_xlat5.xyz, u_xlat0.xyz);
    u_xlat33 = clamp(u_xlat33, 0.0f, 1.0f);
    u_xlat34 = dot(u_xlat5.xyz, u_xlat1.xyz);
    u_xlat34 = clamp(u_xlat34, 0.0f, 1.0f);
    u_xlat0.x = dot(u_xlat0.xyz, u_xlat1.xyz);
    u_xlat0.x = clamp(u_xlat0.x, 0.0f, 1.0f);
    u_xlat11 = (-float(u_xlat16_15)) + 1.0;
    u_xlat22 = u_xlat11 * u_xlat11;
    u_xlat1.x = u_xlat34 * u_xlat34;
    u_xlat12 = fma(u_xlat22, u_xlat22, -1.0);
    u_xlat1.x = fma(u_xlat1.x, u_xlat12, 1.00001001);
    u_xlat0.x = max(u_xlat0.x, 0.319999993);
    u_xlat11 = fma(u_xlat11, u_xlat11, 1.5);
    u_xlat0.x = u_xlat11 * u_xlat0.x;
    u_xlat0.x = u_xlat1.x * u_xlat0.x;
    u_xlat0.x = u_xlat22 / u_xlat0.x;
    u_xlat0.x = u_xlat0.x + -9.99999975e-05;
    u_xlat0.x = max(u_xlat0.x, 0.0);
    u_xlat0.x = min(u_xlat0.x, 100.0);
    u_xlat0.xyz = float3(u_xlat16_10.xyz) * u_xlat0.xxx;
    u_xlat0.xyz = fma(u_xlat3.xyz, float3(u_xlat16_4), u_xlat0.xyz);
    u_xlat0.xyz = float3(u_xlat16_6.xyz) * u_xlat0.xyz;
    u_xlat0.xyz = float3(u_xlat33) * u_xlat0.xyz;
    output.SV_Target0.xyz = half3(u_xlat0.xyz);
    output.SV_Target0.w = half(1.0);
    return output;
}


 }
 Pass {
  Name "DEFERRED"
  Tags { "LIGHTMODE"="DEFERRED" "RenderType"="Opaque" }
  //////////////////////////////////
  //                              //
  //      Compiled programs       //
  //                              //
  //////////////////////////////////
//////////////////////////////////////////////////////
Global Keywords: <none>
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(exp2((-u_xlat0.xyz)));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: <none>
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(exp2((-u_xlat0.xyz)));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: <none>
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(exp2((-u_xlat0.xyz)));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.xyz = exp2((-u_xlat16_1.xyz));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.xyz = exp2((-u_xlat16_1.xyz));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.xyz = exp2((-u_xlat16_1.xyz));
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(u_xlat0.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(u_xlat0.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (288 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_WorldToObject at 64
  Matrix4x4 unity_MatrixVP at 144
  Vector4 unity_WorldTransformParams at 128
  Vector4 _MainTex_ST at 208
  Vector4 _BumpMap_ST at 224
  Vector4 _MetallicGlossMap_ST at 240
  Vector4 _OcclusionMap_ST at 256
  Vector4 _EmissionMap_ST at 272
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat1.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat1.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    u_xlat2.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat2.xyz);
    u_xlat2.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat2.xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2.xyz = u_xlat0.xxx * u_xlat2.xyz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.xyz;
    u_xlat3.xyz = fma(u_xlat1.zxy, u_xlat2.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.x = u_xlat2.z;
    output.TEXCOORD3.z = u_xlat1.y;
    output.TEXCOORD4.x = u_xlat2.x;
    output.TEXCOORD5.x = u_xlat2.y;
    output.TEXCOORD4.z = u_xlat1.z;
    output.TEXCOORD5.z = u_xlat1.x;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  ScalarHalf _Roughness at 0
  ScalarHalf _Metallic at 2
  ScalarHalf _AlphaCutoff at 4
  ScalarHalf _BumpScale at 6
  VectorHalf4 _Color at 8
  VectorHalf4 _EmissionColor at 16
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float3 u_xlat2;
    half u_xlat16_3;
    float u_xlat12;
    half u_xlat16_12;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat16_12 = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_12;
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3 = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    output.SV_Target0.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3));
    u_xlat16_0.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_1.xyz = fma(u_xlat16_0.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_1.xy = u_xlat16_1.xy * half2(FGlobals._BumpScale);
    u_xlat0.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_1.xyz));
    u_xlat0.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_1.xyz));
    u_xlat12 = dot(u_xlat0.xyz, u_xlat0.xyz);
    u_xlat12 = rsqrt(u_xlat12);
    u_xlat0.xyz = float3(u_xlat12) * u_xlat0.xyz;
    u_xlat0.xyz = fma(u_xlat0.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat0.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._EmissionColor.xyz);
    output.SV_Target3.xyz = half3(u_xlat0.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target3.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target3.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


//////////////////////////////////////////////////////
Global Keywords: LIGHTPROBE_SH UNITY_HDR_ON 
Local Keywords: <none>
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "Normal"
Uses vertex data channel "TexCoord0"
Uses vertex data channel "Color"

Constant Buffer "VGlobals" (320 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 32
  Matrix4x4 unity_WorldToObject at 96
  Matrix4x4 unity_MatrixVP at 176
  VectorHalf4 unity_SHBr at 0
  VectorHalf4 unity_SHBg at 8
  VectorHalf4 unity_SHBb at 16
  VectorHalf4 unity_SHC at 24
  Vector4 unity_WorldTransformParams at 160
  Vector4 _MainTex_ST at 240
  Vector4 _BumpMap_ST at 256
  Vector4 _MetallicGlossMap_ST at 272
  Vector4 _OcclusionMap_ST at 288
  Vector4 _EmissionMap_ST at 304
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    half4 unity_SHBr;
    half4 unity_SHBg;
    half4 unity_SHBb;
    half4 unity_SHC;
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_WorldToObject[4];
    float4 unity_WorldTransformParams;
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
    float4 _MainTex_ST;
    float4 _BumpMap_ST;
    float4 _MetallicGlossMap_ST;
    float4 _OcclusionMap_ST;
    float4 _EmissionMap_ST;
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 TANGENT0 [[ attribute(1) ]] ;
    float3 NORMAL0 [[ attribute(2) ]] ;
    float4 TEXCOORD0 [[ attribute(3) ]] ;
    half4 COLOR0 [[ attribute(4) ]] ;
};

struct Mtl_VertexOut
{
    float4 mtl_Position [[ position ]];
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]];
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]];
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]];
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]];
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]];
    half4 COLOR0 [[ user(COLOR0) ]];
    float4 TEXCOORD7 [[ user(TEXCOORD7) ]];
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    half4 u_xlat16_0;
    float4 u_xlat1;
    float4 u_xlat2;
    float3 u_xlat3;
    half u_xlat16_4;
    half3 u_xlat16_5;
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat1 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat0.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3].xyz, input.POSITION0.www, u_xlat0.xyz);
    u_xlat2 = u_xlat1.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat1.xxxx, u_xlat2);
    u_xlat2 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat1.zzzz, u_xlat2);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat1.wwww, u_xlat2);
    output.TEXCOORD0.xy = fma(input.TEXCOORD0.xy, VGlobals._MainTex_ST.xy, VGlobals._MainTex_ST.zw);
    output.TEXCOORD0.zw = fma(input.TEXCOORD0.xy, VGlobals._BumpMap_ST.xy, VGlobals._BumpMap_ST.zw);
    output.TEXCOORD1.xy = fma(input.TEXCOORD0.xy, VGlobals._MetallicGlossMap_ST.xy, VGlobals._MetallicGlossMap_ST.zw);
    output.TEXCOORD1.zw = fma(input.TEXCOORD0.xy, VGlobals._OcclusionMap_ST.xy, VGlobals._OcclusionMap_ST.zw);
    output.TEXCOORD2.xy = fma(input.TEXCOORD0.xy, VGlobals._EmissionMap_ST.xy, VGlobals._EmissionMap_ST.zw);
    output.TEXCOORD3.w = u_xlat0.x;
    u_xlat1.xyz = input.TANGENT0.yyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1].yzx;
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0].yzx, input.TANGENT0.xxx, u_xlat1.xyz);
    u_xlat1.xyz = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2].yzx, input.TANGENT0.zzz, u_xlat1.xyz);
    u_xlat0.x = dot(u_xlat1.xyz, u_xlat1.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat1.xyz = u_xlat0.xxx * u_xlat1.xyz;
    output.TEXCOORD3.x = u_xlat1.z;
    u_xlat2.x = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[0].xyz);
    u_xlat2.y = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[1].xyz);
    u_xlat2.z = dot(input.NORMAL0.xyz, VGlobals.hlslcc_mtx4x4unity_WorldToObject[2].xyz);
    u_xlat0.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat0.x = rsqrt(u_xlat0.x);
    u_xlat2 = u_xlat0.xxxx * u_xlat2.xyzz;
    u_xlat3.xyz = u_xlat1.xyz * u_xlat2.wxy;
    u_xlat3.xyz = fma(u_xlat2.ywx, u_xlat1.yzx, (-u_xlat3.xyz));
    u_xlat0.x = input.TANGENT0.w * VGlobals.unity_WorldTransformParams.w;
    u_xlat3.xyz = u_xlat0.xxx * u_xlat3.xyz;
    output.TEXCOORD3.y = u_xlat3.x;
    output.TEXCOORD3.z = u_xlat2.x;
    output.TEXCOORD4.x = u_xlat1.x;
    output.TEXCOORD5.x = u_xlat1.y;
    output.TEXCOORD4.w = u_xlat0.y;
    output.TEXCOORD5.w = u_xlat0.z;
    output.TEXCOORD4.y = u_xlat3.y;
    output.TEXCOORD5.y = u_xlat3.z;
    output.TEXCOORD4.z = u_xlat2.y;
    output.TEXCOORD5.z = u_xlat2.w;
    output.COLOR0 = input.COLOR0;
    output.TEXCOORD7 = float4(0.0, 0.0, 0.0, 0.0);
    u_xlat16_4 = half(u_xlat2.y * u_xlat2.y);
    u_xlat16_4 = half(fma(u_xlat2.x, u_xlat2.x, (-float(u_xlat16_4))));
    u_xlat16_0 = half4(u_xlat2.ywzx * u_xlat2);
    u_xlat16_5.x = dot(VGlobals.unity_SHBr, u_xlat16_0);
    u_xlat16_5.y = dot(VGlobals.unity_SHBg, u_xlat16_0);
    u_xlat16_5.z = dot(VGlobals.unity_SHBb, u_xlat16_0);
    output.TEXCOORD8.xyz = fma(VGlobals.unity_SHC.xyz, half3(u_xlat16_4), u_xlat16_5.xyz);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0
Set 2D Texture "_MetallicGlossMap" to slot 1
Set 2D Texture "_BumpMap" to slot 2
Set 2D Texture "_OcclusionMap" to slot 3
Set 2D Texture "_EmissionMap" to slot 4

Constant Buffer "FGlobals" (48 bytes) on slot 0 {
  VectorHalf4 unity_SHAr at 0
  VectorHalf4 unity_SHAg at 8
  VectorHalf4 unity_SHAb at 16
  ScalarHalf _Roughness at 24
  ScalarHalf _Metallic at 26
  ScalarHalf _AlphaCutoff at 28
  ScalarHalf _BumpScale at 30
  VectorHalf4 _Color at 32
  VectorHalf4 _EmissionColor at 40
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    half4 unity_SHAr;
    half4 unity_SHAg;
    half4 unity_SHAb;
    half _Roughness;
    half _Metallic;
    half _AlphaCutoff;
    half _BumpScale;
    half4 _Color;
    half4 _EmissionColor;
};

struct Mtl_FragmentIn
{
    float4 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
    float4 TEXCOORD1 [[ user(TEXCOORD1) ]] ;
    float2 TEXCOORD2 [[ user(TEXCOORD2) ]] ;
    float4 TEXCOORD3 [[ user(TEXCOORD3) ]] ;
    float4 TEXCOORD4 [[ user(TEXCOORD4) ]] ;
    float4 TEXCOORD5 [[ user(TEXCOORD5) ]] ;
    half4 COLOR0 [[ user(COLOR0) ]] ;
    half3 TEXCOORD8 [[ user(TEXCOORD8) ]] ;
};

struct Mtl_FragmentOut
{
    half4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
    half4 SV_Target1 [[ color(xlt_remap_o[1]) ]];
    half4 SV_Target2 [[ color(xlt_remap_o[2]) ]];
    half4 SV_Target3 [[ color(xlt_remap_o[3]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    sampler sampler_MetallicGlossMap [[ sampler (1) ]],
    sampler sampler_BumpMap [[ sampler (2) ]],
    sampler sampler_OcclusionMap [[ sampler (3) ]],
    sampler sampler_EmissionMap [[ sampler (4) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    texture2d<half, access::sample > _MetallicGlossMap [[ texture(1) ]] ,
    texture2d<half, access::sample > _BumpMap [[ texture(2) ]] ,
    texture2d<half, access::sample > _OcclusionMap [[ texture(3) ]] ,
    texture2d<half, access::sample > _EmissionMap [[ texture(4) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float3 u_xlat0;
    half4 u_xlat16_0;
    half3 u_xlat16_1;
    float4 u_xlat2;
    half3 u_xlat16_3;
    float3 u_xlat4;
    half3 u_xlat16_4;
    bool u_xlatb12;
    half u_xlat16_13;
    u_xlat16_0 = _MainTex.sample(sampler_MainTex, input.TEXCOORD0.xy);
    u_xlat16_1.x = fma(u_xlat16_0.w, FGlobals._Color.w, (-FGlobals._AlphaCutoff));
    u_xlat0.xyz = float3(u_xlat16_0.xyz) * float3(FGlobals._Color.xyz);
    u_xlatb12 = u_xlat16_1.x<half(0.0);
    if(((int(u_xlatb12) * int(0xffffffffu)))!=0){discard_fragment();}
    u_xlat2.xyz = u_xlat0.xyz * float3(input.COLOR0.xyz);
    u_xlat16_1.xyz = half3(fma(u_xlat0.xyz, float3(input.COLOR0.xyz), float3(-0.220916301, -0.220916301, -0.220916301)));
    u_xlat16_0.xy = _MetallicGlossMap.sample(sampler_MetallicGlossMap, input.TEXCOORD1.xy).yz;
    u_xlat16_13 = u_xlat16_0.y * FGlobals._Metallic;
    output.SV_Target1.w = fma((-u_xlat16_0.x), FGlobals._Roughness, half(1.0));
    u_xlat16_3.x = fma((-u_xlat16_13), half(0.779083729), half(0.779083729));
    output.SV_Target1.xyz = fma(half3(u_xlat16_13), u_xlat16_1.xyz, half3(0.220916301, 0.220916301, 0.220916301));
    u_xlat16_1.xyz = half3(u_xlat2.xyz * float3(u_xlat16_3.xxx));
    output.SV_Target0.xyz = u_xlat16_1.xyz;
    u_xlat16_0.x = _OcclusionMap.sample(sampler_OcclusionMap, input.TEXCOORD1.zw).x;
    output.SV_Target0.w = u_xlat16_0.x;
    u_xlat16_4.xyz = _BumpMap.sample(sampler_BumpMap, input.TEXCOORD0.zw).xyz;
    u_xlat16_3.xyz = fma(u_xlat16_4.xyz, half3(2.0, 2.0, 2.0), half3(-1.0, -1.0, -1.0));
    u_xlat16_3.xy = u_xlat16_3.xy * half2(FGlobals._BumpScale);
    u_xlat2.x = dot(input.TEXCOORD3.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.y = dot(input.TEXCOORD4.xyz, float3(u_xlat16_3.xyz));
    u_xlat2.z = dot(input.TEXCOORD5.xyz, float3(u_xlat16_3.xyz));
    u_xlat4.x = dot(u_xlat2.xyz, u_xlat2.xyz);
    u_xlat4.x = rsqrt(u_xlat4.x);
    u_xlat2.xyz = u_xlat4.xxx * u_xlat2.xyz;
    u_xlat4.xyz = fma(u_xlat2.xyz, float3(0.5, 0.5, 0.5), float3(0.5, 0.5, 0.5));
    output.SV_Target2.xyz = half3(u_xlat4.xyz);
    output.SV_Target2.w = half(1.0);
    u_xlat2.w = 1.0;
    u_xlat16_3.x = half(dot(float4(FGlobals.unity_SHAr), u_xlat2));
    u_xlat16_3.y = half(dot(float4(FGlobals.unity_SHAg), u_xlat2));
    u_xlat16_3.z = half(dot(float4(FGlobals.unity_SHAb), u_xlat2));
    u_xlat16_3.xyz = u_xlat16_3.xyz + input.TEXCOORD8.xyz;
    u_xlat16_3.xyz = max(u_xlat16_3.xyz, half3(0.0, 0.0, 0.0));
    u_xlat4.xyz = log2(float3(u_xlat16_3.xyz));
    u_xlat4.xyz = u_xlat4.xyz * float3(0.416666657, 0.416666657, 0.416666657);
    u_xlat4.xyz = exp2(u_xlat4.xyz);
    u_xlat4.xyz = fma(u_xlat4.xyz, float3(1.05499995, 1.05499995, 1.05499995), float3(-0.0549999997, -0.0549999997, -0.0549999997));
    u_xlat4.xyz = max(u_xlat4.xyz, float3(0.0, 0.0, 0.0));
    u_xlat16_3.xyz = half3(float3(u_xlat16_0.xxx) * u_xlat4.xyz);
    u_xlat16_1.xyz = u_xlat16_1.xyz * u_xlat16_3.xyz;
    u_xlat16_0.xyz = _EmissionMap.sample(sampler_EmissionMap, input.TEXCOORD2.xy).xyz;
    output.SV_Target3.xyz = fma(u_xlat16_0.xyz, FGlobals._EmissionColor.xyz, u_xlat16_1.xyz);
    output.SV_Target3.w = half(1.0);
    return output;
}


 }
}
Fallback "Diffuse"
}