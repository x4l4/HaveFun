/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UMeshComponent.h
// Date: 06/16/2011 @ 05:19:39.658
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UMeshComponent_execCreateAndSetMaterialInstanceTimeVarying_Parms
{
	int ElementIndex;
	void* ReturnValue; // CPF_ReturnParm
};

struct UMeshComponent_execCreateAndSetMaterialInstanceConstant_Parms
{
	int ElementIndex;
	void* ReturnValue; // CPF_ReturnParm
};

struct UMeshComponent_execPrestreamTextures_Parms
{
	float Seconds;
	unsigned long bPrioritizeCharacterTextures : 1;
};// FUNC_Final FUNC_Native

struct UMeshComponent_execGetNumElements_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UMeshComponent_execSetMaterial_Parms
{
	int ElementIndex;
	class UMaterialInterface* Material;
};// FUNC_Native

struct UMeshComponent_execGetMaterial_Parms
{
	int ElementIndex;
	class UMaterialInterface* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

// (0x1CC - 0x1D8)
class UMeshComponent : public UPrimitiveComponent
{
public:
	TArray< class UMaterialInterface* >                Materials;                                   // 0x01CC (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.MeshComponent" );

		return ClassPointer;
	};

public:
	void* CreateAndSetMaterialInstanceTimeVarying ( int ElementIndex )
	{
		static UFunction* pfnCreateAndSetMaterialInstanceTimeVarying = NULL;

		if ( !pfnCreateAndSetMaterialInstanceTimeVarying )
			pfnCreateAndSetMaterialInstanceTimeVarying = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.CreateAndSetMaterialInstanceTimeVarying" );

		UMeshComponent_execCreateAndSetMaterialInstanceTimeVarying_Parms CreateAndSetMaterialInstanceTimeVarying_Parms;
		CreateAndSetMaterialInstanceTimeVarying_Parms.ElementIndex = ElementIndex;

		this->ProcessEvent( pfnCreateAndSetMaterialInstanceTimeVarying, &CreateAndSetMaterialInstanceTimeVarying_Parms, NULL );

		return CreateAndSetMaterialInstanceTimeVarying_Parms.ReturnValue;
	};

	void* CreateAndSetMaterialInstanceConstant ( int ElementIndex )
	{
		static UFunction* pfnCreateAndSetMaterialInstanceConstant = NULL;

		if ( !pfnCreateAndSetMaterialInstanceConstant )
			pfnCreateAndSetMaterialInstanceConstant = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.CreateAndSetMaterialInstanceConstant" );

		UMeshComponent_execCreateAndSetMaterialInstanceConstant_Parms CreateAndSetMaterialInstanceConstant_Parms;
		CreateAndSetMaterialInstanceConstant_Parms.ElementIndex = ElementIndex;

		this->ProcessEvent( pfnCreateAndSetMaterialInstanceConstant, &CreateAndSetMaterialInstanceConstant_Parms, NULL );

		return CreateAndSetMaterialInstanceConstant_Parms.ReturnValue;
	};

	void PrestreamTextures ( float Seconds, unsigned long bPrioritizeCharacterTextures )
	{
		static UFunction* pfnPrestreamTextures = NULL;

		if ( !pfnPrestreamTextures )
			pfnPrestreamTextures = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.PrestreamTextures" );

		UMeshComponent_execPrestreamTextures_Parms PrestreamTextures_Parms;
		PrestreamTextures_Parms.Seconds = Seconds;
		PrestreamTextures_Parms.bPrioritizeCharacterTextures = bPrioritizeCharacterTextures;

		pfnPrestreamTextures->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPrestreamTextures, &PrestreamTextures_Parms, NULL );
		pfnPrestreamTextures->FunctionFlags |= 0x400;
	};

	int GetNumElements ()
	{
		static UFunction* pfnGetNumElements = NULL;

		if ( !pfnGetNumElements )
			pfnGetNumElements = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.GetNumElements" );

		UMeshComponent_execGetNumElements_Parms GetNumElements_Parms;

		pfnGetNumElements->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetNumElements, &GetNumElements_Parms, NULL );
		pfnGetNumElements->FunctionFlags |= 0x400;

		return GetNumElements_Parms.ReturnValue;
	};

	void SetMaterial ( int ElementIndex, class UMaterialInterface* Material )
	{
		static UFunction* pfnSetMaterial = NULL;

		if ( !pfnSetMaterial )
			pfnSetMaterial = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.SetMaterial" );

		UMeshComponent_execSetMaterial_Parms SetMaterial_Parms;
		SetMaterial_Parms.ElementIndex = ElementIndex;
		SetMaterial_Parms.Material = Material;

		pfnSetMaterial->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetMaterial, &SetMaterial_Parms, NULL );
		pfnSetMaterial->FunctionFlags |= 0x400;
	};

	class UMaterialInterface* GetMaterial ( int ElementIndex )
	{
		static UFunction* pfnGetMaterial = NULL;

		if ( !pfnGetMaterial )
			pfnGetMaterial = UObject::FindObject< UFunction >( "Function Engine.MeshComponent.GetMaterial" );

		UMeshComponent_execGetMaterial_Parms GetMaterial_Parms;
		GetMaterial_Parms.ElementIndex = ElementIndex;

		pfnGetMaterial->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMaterial, &GetMaterial_Parms, NULL );
		pfnGetMaterial->FunctionFlags |= 0x400;

		return GetMaterial_Parms.ReturnValue;
	};

};

UClass* UMeshComponent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif