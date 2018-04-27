/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UMaterialInterface.h
// Date: 06/16/2011 @ 05:19:39.461
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EMaterialUsage
{
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_FracturedMeshes = 1,
	MATUSAGE_ParticleSprites = 2,
	MATUSAGE_BeamTrails = 3,
	MATUSAGE_ParticleSubUV = 4,
	MATUSAGE_Foliage = 5,
	MATUSAGE_SpeedTree = 6,
	MATUSAGE_StaticLighting = 7,
	MATUSAGE_GammaCorrection = 8,
	MATUSAGE_LensFlare = 9,
	MATUSAGE_InstancedMeshParticles = 10,
	MATUSAGE_FluidSurface = 11,
	MATUSAGE_Decals = 12,
	MATUSAGE_MaterialEffect = 13,
	MATUSAGE_MorphTargets = 14,
	MATUSAGE_MAX = 15
};

struct UMaterialInterface_execSetForceMipLevelsToBeResident_Parms
{
	float ForceDuration;
};// FUNC_Native

struct UMaterialInterface_execGetVectorCurveParameterValue_Parms
{
	struct FName ParameterName;
	struct FInterpCurveVector OutValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetVectorParameterValue_Parms
{
	struct FName ParameterName;
	struct FLinearColor OutValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetTextureParameterValue_Parms
{
	struct FName ParameterName;
	class UTexture* OutValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetScalarCurveParameterValue_Parms
{
	struct FName ParameterName;
	struct FInterpCurveFloat OutValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetScalarParameterValue_Parms
{
	struct FName ParameterName;
	float OutValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetFontParameterValue_Parms
{
	struct FName ParameterName;
	class UFont* OutFontValue; // CPF_OutParm
	int OutFontPage; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct UMaterialInterface_execGetPhysicalMaterial_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UMaterialInterface_execGetMaterial_Parms
{
	class UMaterial* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

// (0x3C - 0x50)
class UMaterialInterface : public USurface
{
public:
	struct FRenderCommandFence_Mirror                  ParentRefFence;                              // 0x003C (0x0004)
	unsigned long                                      BeastMaterialDirty : 1;                      // 0x0040 (0x0004) [0x00000001]
	struct FString                                     PreviewMesh;                                 // 0x0044 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.MaterialInterface" );

		return ClassPointer;
	};

public:
	void SetForceMipLevelsToBeResident ( float ForceDuration )
	{
		static UFunction* pfnSetForceMipLevelsToBeResident = NULL;

		if ( !pfnSetForceMipLevelsToBeResident )
			pfnSetForceMipLevelsToBeResident = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.SetForceMipLevelsToBeResident" );

		UMaterialInterface_execSetForceMipLevelsToBeResident_Parms SetForceMipLevelsToBeResident_Parms;
		SetForceMipLevelsToBeResident_Parms.ForceDuration = ForceDuration;

		pfnSetForceMipLevelsToBeResident->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetForceMipLevelsToBeResident, &SetForceMipLevelsToBeResident_Parms, NULL );
		pfnSetForceMipLevelsToBeResident->FunctionFlags |= 0x400;
	};

	bool GetVectorCurveParameterValue ( struct FName ParameterName, struct FInterpCurveVector* OutValue )
	{
		static UFunction* pfnGetVectorCurveParameterValue = NULL;

		if ( !pfnGetVectorCurveParameterValue )
			pfnGetVectorCurveParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetVectorCurveParameterValue" );

		UMaterialInterface_execGetVectorCurveParameterValue_Parms GetVectorCurveParameterValue_Parms;
		memcpy( &GetVectorCurveParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetVectorCurveParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetVectorCurveParameterValue, &GetVectorCurveParameterValue_Parms, NULL );
		pfnGetVectorCurveParameterValue->FunctionFlags |= 0x400;

		if ( OutValue )
			memcpy( OutValue, &GetVectorCurveParameterValue_Parms.OutValue, 0x10 ); // CPF_OutParm

		return GetVectorCurveParameterValue_Parms.ReturnValue;
	};

	bool GetVectorParameterValue ( struct FName ParameterName, struct FLinearColor* OutValue )
	{
		static UFunction* pfnGetVectorParameterValue = NULL;

		if ( !pfnGetVectorParameterValue )
			pfnGetVectorParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetVectorParameterValue" );

		UMaterialInterface_execGetVectorParameterValue_Parms GetVectorParameterValue_Parms;
		memcpy( &GetVectorParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetVectorParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetVectorParameterValue, &GetVectorParameterValue_Parms, NULL );
		pfnGetVectorParameterValue->FunctionFlags |= 0x400;

		if ( OutValue )
			memcpy( OutValue, &GetVectorParameterValue_Parms.OutValue, 0x10 ); // CPF_OutParm

		return GetVectorParameterValue_Parms.ReturnValue;
	};

	bool GetTextureParameterValue ( struct FName ParameterName, class UTexture** OutValue )
	{
		static UFunction* pfnGetTextureParameterValue = NULL;

		if ( !pfnGetTextureParameterValue )
			pfnGetTextureParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetTextureParameterValue" );

		UMaterialInterface_execGetTextureParameterValue_Parms GetTextureParameterValue_Parms;
		memcpy( &GetTextureParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetTextureParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTextureParameterValue, &GetTextureParameterValue_Parms, NULL );
		pfnGetTextureParameterValue->FunctionFlags |= 0x400;

		if ( OutValue )
			*OutValue = GetTextureParameterValue_Parms.OutValue; // CPF_OutParm

		return GetTextureParameterValue_Parms.ReturnValue;
	};

	bool GetScalarCurveParameterValue ( struct FName ParameterName, struct FInterpCurveFloat* OutValue )
	{
		static UFunction* pfnGetScalarCurveParameterValue = NULL;

		if ( !pfnGetScalarCurveParameterValue )
			pfnGetScalarCurveParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetScalarCurveParameterValue" );

		UMaterialInterface_execGetScalarCurveParameterValue_Parms GetScalarCurveParameterValue_Parms;
		memcpy( &GetScalarCurveParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetScalarCurveParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetScalarCurveParameterValue, &GetScalarCurveParameterValue_Parms, NULL );
		pfnGetScalarCurveParameterValue->FunctionFlags |= 0x400;

		if ( OutValue )
			memcpy( OutValue, &GetScalarCurveParameterValue_Parms.OutValue, 0x10 ); // CPF_OutParm

		return GetScalarCurveParameterValue_Parms.ReturnValue;
	};

	bool GetScalarParameterValue ( struct FName ParameterName, float* OutValue )
	{
		static UFunction* pfnGetScalarParameterValue = NULL;

		if ( !pfnGetScalarParameterValue )
			pfnGetScalarParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetScalarParameterValue" );

		UMaterialInterface_execGetScalarParameterValue_Parms GetScalarParameterValue_Parms;
		memcpy( &GetScalarParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetScalarParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetScalarParameterValue, &GetScalarParameterValue_Parms, NULL );
		pfnGetScalarParameterValue->FunctionFlags |= 0x400;

		if ( OutValue )
			*OutValue = GetScalarParameterValue_Parms.OutValue; // CPF_OutParm

		return GetScalarParameterValue_Parms.ReturnValue;
	};

	bool GetFontParameterValue ( struct FName ParameterName, class UFont** OutFontValue, int* OutFontPage )
	{
		static UFunction* pfnGetFontParameterValue = NULL;

		if ( !pfnGetFontParameterValue )
			pfnGetFontParameterValue = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetFontParameterValue" );

		UMaterialInterface_execGetFontParameterValue_Parms GetFontParameterValue_Parms;
		memcpy( &GetFontParameterValue_Parms.ParameterName, &ParameterName, 0x8 );

		pfnGetFontParameterValue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFontParameterValue, &GetFontParameterValue_Parms, NULL );
		pfnGetFontParameterValue->FunctionFlags |= 0x400;

		if ( OutFontValue )
			*OutFontValue = GetFontParameterValue_Parms.OutFontValue; // CPF_OutParm
		if ( OutFontPage )
			*OutFontPage = GetFontParameterValue_Parms.OutFontPage; // CPF_OutParm

		return GetFontParameterValue_Parms.ReturnValue;
	};

	void* GetPhysicalMaterial ()
	{
		static UFunction* pfnGetPhysicalMaterial = NULL;

		if ( !pfnGetPhysicalMaterial )
			pfnGetPhysicalMaterial = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetPhysicalMaterial" );

		UMaterialInterface_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

		pfnGetPhysicalMaterial->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );
		pfnGetPhysicalMaterial->FunctionFlags |= 0x400;

		return GetPhysicalMaterial_Parms.ReturnValue;
	};

	class UMaterial* GetMaterial ()
	{
		static UFunction* pfnGetMaterial = NULL;

		if ( !pfnGetMaterial )
			pfnGetMaterial = UObject::FindObject< UFunction >( "Function Engine.MaterialInterface.GetMaterial" );

		UMaterialInterface_execGetMaterial_Parms GetMaterial_Parms;

		pfnGetMaterial->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMaterial, &GetMaterial_Parms, NULL );
		pfnGetMaterial->FunctionFlags |= 0x400;

		return GetMaterial_Parms.ReturnValue;
	};

};

UClass* UMaterialInterface::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif