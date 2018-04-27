/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UFont.h
// Date: 06/16/2011 @ 05:19:39.256
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_NULLCHARACTER                        127

struct UFont_execGetMaxCharHeight_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UFont_execGetAuthoredViewportHeight_Parms
{
	float ViewportHeight;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UFont_execGetScalingFactor_Parms
{
	float HeightTest;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UFont_execGetResolutionPageIndex_Parms
{
	float HeightTest;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

// (0x3C - 0x130)
class UFont : public UObject
{
public:
	TArray< struct FFontCharacter >                    Characters;                                  // 0x003C (0x000C)
	TArray< class UTexture2D* >                        Textures;                                    // 0x0048 (0x000C)
	unsigned char                                      unknown_data07[ 60 ];                        // 0x0054 (0x003C)
	int                                                IsRemapped;                                  // 0x0090 (0x0004)
	int                                                Kerning;                                     // 0x0094 (0x0004)
	struct FFontImportOptionsData                      ImportOptions;                               // 0x0098 (0x0088)
	int                                                NumCharacters;                               // 0x0120 (0x0004)
	TArray< int >                                      MaxCharHeight;                               // 0x0124 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Font" );

		return ClassPointer;
	};

public:
	float GetMaxCharHeight ()
	{
		static UFunction* pfnGetMaxCharHeight = NULL;

		if ( !pfnGetMaxCharHeight )
			pfnGetMaxCharHeight = UObject::FindObject< UFunction >( "Function Engine.Font.GetMaxCharHeight" );

		UFont_execGetMaxCharHeight_Parms GetMaxCharHeight_Parms;

		pfnGetMaxCharHeight->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMaxCharHeight, &GetMaxCharHeight_Parms, NULL );
		pfnGetMaxCharHeight->FunctionFlags |= 0x400;

		return GetMaxCharHeight_Parms.ReturnValue;
	};

	float GetAuthoredViewportHeight ( float ViewportHeight )
	{
		static UFunction* pfnGetAuthoredViewportHeight = NULL;

		if ( !pfnGetAuthoredViewportHeight )
			pfnGetAuthoredViewportHeight = UObject::FindObject< UFunction >( "Function Engine.Font.GetAuthoredViewportHeight" );

		UFont_execGetAuthoredViewportHeight_Parms GetAuthoredViewportHeight_Parms;
		GetAuthoredViewportHeight_Parms.ViewportHeight = ViewportHeight;

		pfnGetAuthoredViewportHeight->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAuthoredViewportHeight, &GetAuthoredViewportHeight_Parms, NULL );
		pfnGetAuthoredViewportHeight->FunctionFlags |= 0x400;

		return GetAuthoredViewportHeight_Parms.ReturnValue;
	};

	float GetScalingFactor ( float HeightTest )
	{
		static UFunction* pfnGetScalingFactor = NULL;

		if ( !pfnGetScalingFactor )
			pfnGetScalingFactor = UObject::FindObject< UFunction >( "Function Engine.Font.GetScalingFactor" );

		UFont_execGetScalingFactor_Parms GetScalingFactor_Parms;
		GetScalingFactor_Parms.HeightTest = HeightTest;

		pfnGetScalingFactor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetScalingFactor, &GetScalingFactor_Parms, NULL );
		pfnGetScalingFactor->FunctionFlags |= 0x400;

		return GetScalingFactor_Parms.ReturnValue;
	};

	int GetResolutionPageIndex ( float HeightTest )
	{
		static UFunction* pfnGetResolutionPageIndex = NULL;

		if ( !pfnGetResolutionPageIndex )
			pfnGetResolutionPageIndex = UObject::FindObject< UFunction >( "Function Engine.Font.GetResolutionPageIndex" );

		UFont_execGetResolutionPageIndex_Parms GetResolutionPageIndex_Parms;
		GetResolutionPageIndex_Parms.HeightTest = HeightTest;

		pfnGetResolutionPageIndex->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetResolutionPageIndex, &GetResolutionPageIndex_Parms, NULL );
		pfnGetResolutionPageIndex->FunctionFlags |= 0x400;

		return GetResolutionPageIndex_Parms.ReturnValue;
	};

};

UClass* UFont::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif