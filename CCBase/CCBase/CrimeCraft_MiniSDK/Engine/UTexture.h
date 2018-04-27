/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UTexture.h
// Date: 06/16/2011 @ 05:19:38.921
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum CompressionQualityClass
{
	QualityFastest = 0,
	QualityNormal = 1,
	QualityProduction = 2,
	QualityHighest = 3,
	CompressionQualityClass_MAX = 4
};

enum TextureGroup
{
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_LightAndShadowMap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MAX = 19
};

enum TextureAddress
{
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

enum TextureFilter
{
	TF_Nearest = 0,
	TF_Linear = 1,
	TF_MAX = 2
};

enum EPixelFormat
{
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_A8R8G8B8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_FilteredShadowDepth = 13,
	PF_R32F = 14,
	PF_G16R16 = 15,
	PF_G16R16F = 16,
	PF_G16R16F_FILTER = 17,
	PF_G32R32F = 18,
	PF_A2B10G10R10 = 19,
	PF_A16B16G16R16 = 20,
	PF_D24 = 21,
	PF_R16F = 22,
	PF_R16F_FILTER = 23,
	//PF_MAX = 24
};

enum TextureCompressionSettings
{
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Displacementmap = 2,
	TC_NormalmapAlpha = 3,
	TC_Grayscale = 4,
	TC_HighDynamicRange = 5,
	TC_Default_DXT1A = 6,
	TC_MAX = 7
};

// (0x3C - 0xC4)
class UTexture : public USurface
{
public:
	unsigned long                                      SRGB : 1;                                    // 0x003C (0x0004) [0x00000001]
	unsigned long                                      RGBE : 1;                                    // 0x003C (0x0004) [0x00000002]
	unsigned long                                      CompressionNoAlpha : 1;                      // 0x003C (0x0004) [0x00000004]
	unsigned long                                      CompressionNone : 1;                         // 0x003C (0x0004) [0x00000008]
	unsigned long                                      CompressionNoMipmaps : 1;                    // 0x003C (0x0004) [0x00000010]
	unsigned long                                      ForceBinaryAlpha : 1;                        // 0x003C (0x0004) [0x00000020]
	unsigned long                                      CompressionFullDynamicRange : 1;             // 0x003C (0x0004) [0x00000040]
	unsigned long                                      DeferCompression : 1;                        // 0x003C (0x0004) [0x00000080]
	unsigned long                                      NeverStream : 1;                             // 0x003C (0x0004) [0x00000100]
	unsigned long                                      bDitherMipMapAlpha : 1;                      // 0x003C (0x0004) [0x00000200]
	unsigned long                                      bPreserveBorderR : 1;                        // 0x003C (0x0004) [0x00000400]
	unsigned long                                      bPreserveBorderG : 1;                        // 0x003C (0x0004) [0x00000800]
	unsigned long                                      bPreserveBorderB : 1;                        // 0x003C (0x0004) [0x00001000]
	unsigned long                                      bPreserveBorderA : 1;                        // 0x003C (0x0004) [0x00002000]
	unsigned long                                      bNoTiling : 1;                               // 0x003C (0x0004) [0x00004000]
	unsigned long                                      bAsyncResourceReleaseHasBeenStarted : 1;     // 0x003C (0x0004) [0x00008000]
	float                                              UnpackMin[ 4 ];                              // 0x0040 (0x0010)
	float                                              UnpackMax[ 4 ];                              // 0x0050 (0x0010)
	struct FUntypedBulkData_Mirror                     SourceArt;                                   // 0x0060 (0x0034)
	float                                              BinaryAlphaThreshold;                        // 0x0094 (0x0004)
	float                                              ErrorSearchThresholdRMS;                     // 0x0098 (0x0004)
	unsigned char                                      CompressionQuality;                          // 0x009C (0x0001)
	unsigned char                                      CompressionSettings;                         // 0x009D (0x0001)
	unsigned char                                      Filter;                                      // 0x009E (0x0001)
	unsigned char                                      LODGroup;                                    // 0x009F (0x0001)
	int                                                LODBias;                                     // 0x00A0 (0x0004)
	int                                                CachedCombinedLODBias;                       // 0x00A4 (0x0004)
	struct FString                                     SourceFilePath;                              // 0x00A8 (0x000C)
	struct FString                                     SourceFileTimestamp;                         // 0x00B4 (0x000C)
	struct FPointer                                    Resource;                                    // 0x00C0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Texture" );

		return ClassPointer;
	};

public:
};

UClass* UTexture::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif