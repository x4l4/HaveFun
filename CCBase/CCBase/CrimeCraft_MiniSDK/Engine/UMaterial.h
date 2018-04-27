/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UMaterial.h
// Date: 06/16/2011 @ 05:19:39.464
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EBeastSampledResolution
{
	SRES = 0,
	SRES_MAX = 4
};

enum EBeastOpacitySource
{
	OPSRC_Diffuse = 0,
	OPSRC_Emissive = 1,
	OPSRC_Specular = 2,
	OPSRC_MAX = 3
};

enum EBeastOpacityMix
{
	OPMIX_OnlySource = 0,
	OPMIX_SourceAndOpacity = 1,
	OPMIX_MAX = 2
};

enum EMaterialLightingModel
{
	MLM_Phong = 0,
	MLM_NonDirectional = 1,
	MLM_Unlit = 2,
	MLM_SHPRT = 3,
	MLM_Custom = 4,
	MLM_MAX = 5
};

enum EBlendMode
{
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_MAX = 5
};

struct UMaterial_execGetTextures_Parms
{
	TArray< class UTexture* > ReturnValue; // CPF_ReturnParm
};

// (0x50 - 0x2D4)
class UMaterial : public UMaterialInterface
{
public:
	void*                                              PhysMaterial;                                // 0x0050 (0x0004)
	class UClass*                                      PhysicalMaterial;                            // 0x0054 (0x0004)
	struct FColorMaterialInput                         DiffuseColor;                                // 0x0058 (0x0024)
	struct FScalarMaterialInput                        DiffusePower;                                // 0x007C (0x0024)
	struct FColorMaterialInput                         SpecularColor;                               // 0x00A0 (0x0024)
	struct FScalarMaterialInput                        SpecularPower;                               // 0x00C4 (0x0024)
	struct FVectorMaterialInput                        Normal;                                      // 0x00E8 (0x002C)
	struct FColorMaterialInput                         EmissiveColor;                               // 0x0114 (0x0024)
	struct FScalarMaterialInput                        Opacity;                                     // 0x0138 (0x0024)
	struct FScalarMaterialInput                        OpacityMask;                                 // 0x015C (0x0024)
	float                                              OpacityMaskClipValue;                        // 0x0180 (0x0004)
	struct FVector2MaterialInput                       Distortion;                                  // 0x0184 (0x0028)
	unsigned char                                      BlendMode;                                   // 0x01AC (0x0001)
	unsigned char                                      LightingModel;                               // 0x01AD (0x0001)
	struct FColorMaterialInput                         CustomLighting;                              // 0x01B0 (0x0024)
	struct FScalarMaterialInput                        TwoSidedLightingMask;                        // 0x01D4 (0x0024)
	struct FColorMaterialInput                         TwoSidedLightingColor;                       // 0x01F8 (0x0024)
	unsigned long                                      TwoSided : 1;                                // 0x021C (0x0004) [0x00000001]
	unsigned long                                      bDisableDepthTest : 1;                       // 0x021C (0x0004) [0x00000002]
	unsigned long                                      bAllowFog : 1;                               // 0x021C (0x0004) [0x00000004]
	unsigned long                                      bUseOneLayerDistortion : 1;                  // 0x021C (0x0004) [0x00000008]
	unsigned long                                      bUsedAsLightFunction : 1;                    // 0x021C (0x0004) [0x00000010]
	unsigned long                                      bUsedWithFogVolumes : 1;                     // 0x021C (0x0004) [0x00000020]
	unsigned long                                      bUsedAsSpecialEngineMaterial : 1;            // 0x021C (0x0004) [0x00000040]
	unsigned long                                      bUsedWithSkeletalMesh : 1;                   // 0x021C (0x0004) [0x00000080]
	unsigned long                                      bUsedWithFracturedMeshes : 1;                // 0x021C (0x0004) [0x00000100]
	unsigned long                                      bUsedWithParticleSystem : 1;                 // 0x021C (0x0004) [0x00000200]
	unsigned long                                      bUsedWithParticleSprites : 1;                // 0x021C (0x0004) [0x00000400]
	unsigned long                                      bUsedWithBeamTrails : 1;                     // 0x021C (0x0004) [0x00000800]
	unsigned long                                      bUsedWithParticleSubUV : 1;                  // 0x021C (0x0004) [0x00001000]
	unsigned long                                      bUsedWithFoliage : 1;                        // 0x021C (0x0004) [0x00002000]
	unsigned long                                      bUsedWithSpeedTree : 1;                      // 0x021C (0x0004) [0x00004000]
	unsigned long                                      bUsedWithStaticLighting : 1;                 // 0x021C (0x0004) [0x00008000]
	unsigned long                                      bUsedWithLensFlare : 1;                      // 0x021C (0x0004) [0x00010000]
	unsigned long                                      bUsedWithGammaCorrection : 1;                // 0x021C (0x0004) [0x00020000]
	unsigned long                                      bUsedWithInstancedMeshParticles : 1;         // 0x021C (0x0004) [0x00040000]
	unsigned long                                      bUsedWithFluidSurfaces : 1;                  // 0x021C (0x0004) [0x00080000]
	unsigned long                                      bUsedWithDecals : 1;                         // 0x021C (0x0004) [0x00100000]
	unsigned long                                      bUsedWithMaterialEffect : 1;                 // 0x021C (0x0004) [0x00200000]
	unsigned long                                      bUsedWithMorphTargets : 1;                   // 0x021C (0x0004) [0x00400000]
	unsigned long                                      Wireframe : 1;                               // 0x021C (0x0004) [0x00800000]
	unsigned long                                      bIsFallbackMaterial : 1;                     // 0x021C (0x0004) [0x01000000]
	unsigned long                                      bUsesDistortion : 1;                         // 0x021C (0x0004) [0x02000000]
	unsigned long                                      bIsMasked : 1;                               // 0x021C (0x0004) [0x04000000]
	unsigned long                                      bSupportsSinglePassSHLight : 1;              // 0x021C (0x0004) [0x08000000]
	unsigned long                                      bIsPreviewMaterial : 1;                      // 0x021C (0x0004) [0x10000000]
	class UMaterial*                                   FallbackMaterial;                            // 0x0220 (0x0004)
	struct FPointer                                    MaterialResources[ 2 ];                      // 0x0224 (0x0008)
	struct FPointer                                    DefaultMaterialInstances[ 2 ];               // 0x022C (0x0008)
	int                                                EditorX;                                     // 0x0234 (0x0004)
	int                                                EditorY;                                     // 0x0238 (0x0004)
	int                                                EditorPitch;                                 // 0x023C (0x0004)
	int                                                EditorYaw;                                   // 0x0240 (0x0004)
	TArray< void* >                                    Expressions;                                 // 0x0244 (0x000C)
	TArray< void* >                                    EditorComments;                              // 0x0250 (0x000C)
	TArray< void* >                                    EditorCompounds;                             // 0x025C (0x000C)
	unsigned char                                      unknown_data11[ 60 ];                        // 0x0268 (0x003C)
	TArray< class UTexture* >                          ReferencedTextures;                          // 0x02A4 (0x000C)
	TArray< struct FName >                             ContentTags;                                 // 0x02B0 (0x000C)
	struct FBeastMaterialPropertiesContainer           BeastMaterialProperties;                     // 0x02BC (0x0018)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Material" );

		return ClassPointer;
	};

public:
	TArray< class UTexture* > GetTextures ()
	{
		static UFunction* pfnGetTextures = NULL;

		if ( !pfnGetTextures )
			pfnGetTextures = UObject::FindObject< UFunction >( "Function Engine.Material.GetTextures" );

		UMaterial_execGetTextures_Parms GetTextures_Parms;

		this->ProcessEvent( pfnGetTextures, &GetTextures_Parms, NULL );

		return GetTextures_Parms.ReturnValue;
	};

};

UClass* UMaterial::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif