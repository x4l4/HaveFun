/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCLobbyRemotePawn.h
// Date: 06/16/2011 @ 05:19:41.804
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCLobbyRemotePawn_eventOnCreateCharacterComponent_Parms
{
};// FUNC_Event

struct ACCLobbyRemotePawn_execOnVisualUpdated_Parms
{
};// FUNC_Native

struct ACCLobbyRemotePawn_execCreateSimpleMesh_Parms
{
};// FUNC_Native

struct ACCLobbyRemotePawn_execGetAimOffsetRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCLobbyRemotePawn_execTick_Parms
{
	float DeltaTime;
};

struct ACCLobbyRemotePawn_eventPlayFootStepSound_Parms
{
	int FootStep;
};// FUNC_Event

// (0x7C0 - 0xE18)
class ACCLobbyRemotePawn : public ACCLobbyPawn
{
public:
	struct FPathPoint                                  Path[ 50 ];                                  // 0x07C0 (0x0640)
	int                                                CurPoint;                                    // 0x0E00 (0x0004)
	int                                                EndPoint;                                    // 0x0E04 (0x0004)
	float                                              FakeMoveTime;                                // 0x0E08 (0x0004)
	unsigned long                                      IsIdle : 1;                                  // 0x0E0C (0x0004) [0x00000001]
	unsigned long                                      IsStartupIdle : 1;                           // 0x0E0C (0x0004) [0x00000002]
	class USkeletalMeshComponent*                      SimpleMesh;                                  // 0x0E10 (0x0004)
	void*                                              SimpleMeshMtl;                               // 0x0E14 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCLobbyRemotePawn" );

		return ClassPointer;
	};

public:
	void eventOnCreateCharacterComponent ()
	{
		static UFunction* pfnOnCreateCharacterComponent = NULL;

		if ( !pfnOnCreateCharacterComponent )
			pfnOnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.OnCreateCharacterComponent" );

		ACCLobbyRemotePawn_eventOnCreateCharacterComponent_Parms OnCreateCharacterComponent_Parms;

		this->ProcessEvent( pfnOnCreateCharacterComponent, &OnCreateCharacterComponent_Parms, NULL );
	};

	void OnVisualUpdated ()
	{
		static UFunction* pfnOnVisualUpdated = NULL;

		if ( !pfnOnVisualUpdated )
			pfnOnVisualUpdated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.OnVisualUpdated" );

		ACCLobbyRemotePawn_execOnVisualUpdated_Parms OnVisualUpdated_Parms;

		pfnOnVisualUpdated->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOnVisualUpdated, &OnVisualUpdated_Parms, NULL );
		pfnOnVisualUpdated->FunctionFlags |= 0x400;
	};

	void CreateSimpleMesh ()
	{
		static UFunction* pfnCreateSimpleMesh = NULL;

		if ( !pfnCreateSimpleMesh )
			pfnCreateSimpleMesh = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.CreateSimpleMesh" );

		ACCLobbyRemotePawn_execCreateSimpleMesh_Parms CreateSimpleMesh_Parms;

		pfnCreateSimpleMesh->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreateSimpleMesh, &CreateSimpleMesh_Parms, NULL );
		pfnCreateSimpleMesh->FunctionFlags |= 0x400;
	};

	struct FRotator GetAimOffsetRotation ()
	{
		static UFunction* pfnGetAimOffsetRotation = NULL;

		if ( !pfnGetAimOffsetRotation )
			pfnGetAimOffsetRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.GetAimOffsetRotation" );

		ACCLobbyRemotePawn_execGetAimOffsetRotation_Parms GetAimOffsetRotation_Parms;

		this->ProcessEvent( pfnGetAimOffsetRotation, &GetAimOffsetRotation_Parms, NULL );

		return GetAimOffsetRotation_Parms.ReturnValue;
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.Tick" );

		ACCLobbyRemotePawn_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventPlayFootStepSound ( int FootStep )
	{
		static UFunction* pfnPlayFootStepSound = NULL;

		if ( !pfnPlayFootStepSound )
			pfnPlayFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemotePawn.PlayFootStepSound" );

		ACCLobbyRemotePawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
		PlayFootStepSound_Parms.FootStep = FootStep;

		this->ProcessEvent( pfnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
	};

};

UClass* ACCLobbyRemotePawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif