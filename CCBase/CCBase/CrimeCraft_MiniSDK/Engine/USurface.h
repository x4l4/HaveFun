/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USurface.h
// Date: 06/16/2011 @ 05:19:38.920
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct USurface_execGetSurfaceHeight_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USurface_execGetSurfaceWidth_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

// (0x3C - 0x3C)
class USurface : public UObject
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Surface" );

		return ClassPointer;
	};

public:
	float GetSurfaceHeight ()
	{
		static UFunction* pfnGetSurfaceHeight = NULL;

		if ( !pfnGetSurfaceHeight )
			pfnGetSurfaceHeight = UObject::FindObject< UFunction >( "Function Engine.Surface.GetSurfaceHeight" );

		USurface_execGetSurfaceHeight_Parms GetSurfaceHeight_Parms;

		pfnGetSurfaceHeight->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSurfaceHeight, &GetSurfaceHeight_Parms, NULL );
		pfnGetSurfaceHeight->FunctionFlags |= 0x400;

		return GetSurfaceHeight_Parms.ReturnValue;
	};

	float GetSurfaceWidth ()
	{
		static UFunction* pfnGetSurfaceWidth = NULL;

		if ( !pfnGetSurfaceWidth )
			pfnGetSurfaceWidth = UObject::FindObject< UFunction >( "Function Engine.Surface.GetSurfaceWidth" );

		USurface_execGetSurfaceWidth_Parms GetSurfaceWidth_Parms;

		pfnGetSurfaceWidth->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSurfaceWidth, &GetSurfaceWidth_Parms, NULL );
		pfnGetSurfaceWidth->FunctionFlags |= 0x400;

		return GetSurfaceWidth_Parms.ReturnValue;
	};

};

UClass* USurface::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif