/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ADebugCameraController.h
// Date: 06/16/2011 @ 05:19:41.909
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ADebugCameraController_execDisableDebugCamera_Parms
{
};

struct ADebugCameraController_execNormalSpeed_Parms
{
};// FUNC_Exec

struct ADebugCameraController_execMoreSpeed_Parms
{
};// FUNC_Exec

struct ADebugCameraController_execSetFreezeRendering_Parms
{
};// FUNC_Exec

struct ADebugCameraController_execOnDeactivate_Parms
{
	class APlayerController* PC;
};

struct ADebugCameraController_execOnActivate_Parms
{
	class APlayerController* PC;
};

struct ADebugCameraController_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x5B4 - 0x5C4)
class ADebugCameraController : public APlayerController
{
public:
	class APlayerController*                           OryginalControllerRef;                       // 0x05B4 (0x0004)
	void*                                              OryginalPlayer;                              // 0x05B8 (0x0004)
	unsigned long                                      bIsFrozenRendering : 1;                      // 0x05BC (0x0004) [0x00000001]
	void*                                              DrawFrustum;                                 // 0x05C0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.DebugCameraController" );

		return ClassPointer;
	};

public:
	void DisableDebugCamera ()
	{
		static UFunction* pfnDisableDebugCamera = NULL;

		if ( !pfnDisableDebugCamera )
			pfnDisableDebugCamera = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.DisableDebugCamera" );

		ADebugCameraController_execDisableDebugCamera_Parms DisableDebugCamera_Parms;

		this->ProcessEvent( pfnDisableDebugCamera, &DisableDebugCamera_Parms, NULL );
	};

	void NormalSpeed ()
	{
		static UFunction* pfnNormalSpeed = NULL;

		if ( !pfnNormalSpeed )
			pfnNormalSpeed = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.NormalSpeed" );

		ADebugCameraController_execNormalSpeed_Parms NormalSpeed_Parms;

		this->ProcessEvent( pfnNormalSpeed, &NormalSpeed_Parms, NULL );
	};

	void MoreSpeed ()
	{
		static UFunction* pfnMoreSpeed = NULL;

		if ( !pfnMoreSpeed )
			pfnMoreSpeed = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.MoreSpeed" );

		ADebugCameraController_execMoreSpeed_Parms MoreSpeed_Parms;

		this->ProcessEvent( pfnMoreSpeed, &MoreSpeed_Parms, NULL );
	};

	void SetFreezeRendering ()
	{
		static UFunction* pfnSetFreezeRendering = NULL;

		if ( !pfnSetFreezeRendering )
			pfnSetFreezeRendering = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.SetFreezeRendering" );

		ADebugCameraController_execSetFreezeRendering_Parms SetFreezeRendering_Parms;

		this->ProcessEvent( pfnSetFreezeRendering, &SetFreezeRendering_Parms, NULL );
	};

	void OnDeactivate ( class APlayerController* PC )
	{
		static UFunction* pfnOnDeactivate = NULL;

		if ( !pfnOnDeactivate )
			pfnOnDeactivate = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.OnDeactivate" );

		ADebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;
		OnDeactivate_Parms.PC = PC;

		this->ProcessEvent( pfnOnDeactivate, &OnDeactivate_Parms, NULL );
	};

	void OnActivate ( class APlayerController* PC )
	{
		static UFunction* pfnOnActivate = NULL;

		if ( !pfnOnActivate )
			pfnOnActivate = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.OnActivate" );

		ADebugCameraController_execOnActivate_Parms OnActivate_Parms;
		OnActivate_Parms.PC = PC;

		this->ProcessEvent( pfnOnActivate, &OnActivate_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.DebugCameraController.PostBeginPlay" );

		ADebugCameraController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ADebugCameraController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif