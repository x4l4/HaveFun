/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCLobbyPawn.h
// Date: 06/16/2011 @ 05:19:41.195
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCLobbyPawn_execResetTurnNodes_Parms
{
	struct FRotator ResetRot;
};

struct ACCLobbyPawn_execFaceRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct ACCLobbyPawn_execTickFootplacement_Parms
{
	float DeltaTime;
};

struct ACCLobbyPawn_execgibbedBy_Parms
{
	class AActor* Other;
};

struct ACCLobbyPawn_eventOnNotifyCharacterLevelUp_Parms
{
	int Level;
};// FUNC_Event

struct ACCLobbyPawn_eventPlayAdditionalAnimation_Parms
{
	struct FAdditionalAnimInfo AAI; // CPF_OutParm
};// FUNC_Event

struct ACCLobbyPawn_execGetCanPlayIdleAnimation_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCLobbyPawn_execUpdateIdleAnimationsStatus_Parms
{
};

struct ACCLobbyPawn_execTick_Parms
{
	float DeltaTime;
};

struct ACCLobbyPawn_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCLobbyPawn_execReplicateEmoteShowing_Parms
{
	struct FString EmoteName;
};// FUNC_Native

struct ACCLobbyPawn_eventRequestDetachDollComponent_Parms
{
};// FUNC_Event

struct ACCLobbyPawn_eventRequestAttachDollComponent_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCLobbyPawn_eventUpdateSpeedParams_Parms
{
};// FUNC_Event

struct ACCLobbyPawn_execCalcBaseRunSpeed_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

// (0x6BC - 0x7C0)
class ACCLobbyPawn : public ACCPawn
{
public:
	float                                              LOBBY_SPD_Run;                               // 0x06BC (0x0004)
	float                                              LOBBY_SPD_BackwardModifier;                  // 0x06C0 (0x0004)
	float                                              LOBBY_SPD_StrafeModifier;                    // 0x06C4 (0x0004)
	float                                              LOBBY_SPD_Sprint;                            // 0x06C8 (0x0004)
	float                                              LOBBY_ACC_Sprint;                            // 0x06CC (0x0004)
	struct FCCPawnAnimationsData                       LobbyAnimationsData[ 6 ];                    // 0x06D0 (0x00D8)
	void*                                              PlayerDollComponent;                         // 0x07A8 (0x0004)
	unsigned long                                      bBlockIdleAnimations : 1;                    // 0x07AC (0x0004) [0x00000001]
	struct FRotator                                    PrevRotation;                                // 0x07B0 (0x000C)
	float                                              LastCannotPlayIdleAnimationTime;             // 0x07BC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCLobbyPawn" );

		return ClassPointer;
	};

public:
	void ResetTurnNodes ( struct FRotator ResetRot )
	{
		static UFunction* pfnResetTurnNodes = NULL;

		if ( !pfnResetTurnNodes )
			pfnResetTurnNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.ResetTurnNodes" );

		ACCLobbyPawn_execResetTurnNodes_Parms ResetTurnNodes_Parms;
		memcpy( &ResetTurnNodes_Parms.ResetRot, &ResetRot, 0xC );

		this->ProcessEvent( pfnResetTurnNodes, &ResetTurnNodes_Parms, NULL );
	};

	void FaceRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFaceRotation = NULL;

		if ( !pfnFaceRotation )
			pfnFaceRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.FaceRotation" );

		ACCLobbyPawn_execFaceRotation_Parms FaceRotation_Parms;
		memcpy( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
		FaceRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFaceRotation, &FaceRotation_Parms, NULL );
	};

	void TickFootplacement ( float DeltaTime )
	{
		static UFunction* pfnTickFootplacement = NULL;

		if ( !pfnTickFootplacement )
			pfnTickFootplacement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.TickFootplacement" );

		ACCLobbyPawn_execTickFootplacement_Parms TickFootplacement_Parms;
		TickFootplacement_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickFootplacement, &TickFootplacement_Parms, NULL );
	};

	void gibbedBy ( class AActor* Other )
	{
		static UFunction* pfngibbedBy = NULL;

		if ( !pfngibbedBy )
			pfngibbedBy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.gibbedBy" );

		ACCLobbyPawn_execgibbedBy_Parms gibbedBy_Parms;
		gibbedBy_Parms.Other = Other;

		this->ProcessEvent( pfngibbedBy, &gibbedBy_Parms, NULL );
	};

	void eventOnNotifyCharacterLevelUp ( int Level )
	{
		static UFunction* pfnOnNotifyCharacterLevelUp = NULL;

		if ( !pfnOnNotifyCharacterLevelUp )
			pfnOnNotifyCharacterLevelUp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.OnNotifyCharacterLevelUp" );

		ACCLobbyPawn_eventOnNotifyCharacterLevelUp_Parms OnNotifyCharacterLevelUp_Parms;
		OnNotifyCharacterLevelUp_Parms.Level = Level;

		this->ProcessEvent( pfnOnNotifyCharacterLevelUp, &OnNotifyCharacterLevelUp_Parms, NULL );
	};

	void eventPlayAdditionalAnimation ( struct FAdditionalAnimInfo* AAI )
	{
		static UFunction* pfnPlayAdditionalAnimation = NULL;

		if ( !pfnPlayAdditionalAnimation )
			pfnPlayAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.PlayAdditionalAnimation" );

		ACCLobbyPawn_eventPlayAdditionalAnimation_Parms PlayAdditionalAnimation_Parms;

		this->ProcessEvent( pfnPlayAdditionalAnimation, &PlayAdditionalAnimation_Parms, NULL );

		if ( AAI )
			memcpy( AAI, &PlayAdditionalAnimation_Parms.AAI, 0x8C ); // CPF_OutParm
	};

	bool GetCanPlayIdleAnimation ()
	{
		static UFunction* pfnGetCanPlayIdleAnimation = NULL;

		if ( !pfnGetCanPlayIdleAnimation )
			pfnGetCanPlayIdleAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.GetCanPlayIdleAnimation" );

		ACCLobbyPawn_execGetCanPlayIdleAnimation_Parms GetCanPlayIdleAnimation_Parms;

		this->ProcessEvent( pfnGetCanPlayIdleAnimation, &GetCanPlayIdleAnimation_Parms, NULL );

		return GetCanPlayIdleAnimation_Parms.ReturnValue;
	};

	void UpdateIdleAnimationsStatus ()
	{
		static UFunction* pfnUpdateIdleAnimationsStatus = NULL;

		if ( !pfnUpdateIdleAnimationsStatus )
			pfnUpdateIdleAnimationsStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.UpdateIdleAnimationsStatus" );

		ACCLobbyPawn_execUpdateIdleAnimationsStatus_Parms UpdateIdleAnimationsStatus_Parms;

		this->ProcessEvent( pfnUpdateIdleAnimationsStatus, &UpdateIdleAnimationsStatus_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.Tick" );

		ACCLobbyPawn_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.PostBeginPlay" );

		ACCLobbyPawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void ReplicateEmoteShowing ( struct FString EmoteName )
	{
		static UFunction* pfnReplicateEmoteShowing = NULL;

		if ( !pfnReplicateEmoteShowing )
			pfnReplicateEmoteShowing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.ReplicateEmoteShowing" );

		ACCLobbyPawn_execReplicateEmoteShowing_Parms ReplicateEmoteShowing_Parms;
		memcpy( &ReplicateEmoteShowing_Parms.EmoteName, &EmoteName, 0xC );

		pfnReplicateEmoteShowing->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReplicateEmoteShowing, &ReplicateEmoteShowing_Parms, NULL );
		pfnReplicateEmoteShowing->FunctionFlags |= 0x400;
	};

	void eventRequestDetachDollComponent ()
	{
		static UFunction* pfnRequestDetachDollComponent = NULL;

		if ( !pfnRequestDetachDollComponent )
			pfnRequestDetachDollComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.RequestDetachDollComponent" );

		ACCLobbyPawn_eventRequestDetachDollComponent_Parms RequestDetachDollComponent_Parms;

		this->ProcessEvent( pfnRequestDetachDollComponent, &RequestDetachDollComponent_Parms, NULL );
	};

	void* eventRequestAttachDollComponent ()
	{
		static UFunction* pfnRequestAttachDollComponent = NULL;

		if ( !pfnRequestAttachDollComponent )
			pfnRequestAttachDollComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.RequestAttachDollComponent" );

		ACCLobbyPawn_eventRequestAttachDollComponent_Parms RequestAttachDollComponent_Parms;

		this->ProcessEvent( pfnRequestAttachDollComponent, &RequestAttachDollComponent_Parms, NULL );

		return RequestAttachDollComponent_Parms.ReturnValue;
	};

	void eventUpdateSpeedParams ()
	{
		static UFunction* pfnUpdateSpeedParams = NULL;

		if ( !pfnUpdateSpeedParams )
			pfnUpdateSpeedParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.UpdateSpeedParams" );

		ACCLobbyPawn_eventUpdateSpeedParams_Parms UpdateSpeedParams_Parms;

		this->ProcessEvent( pfnUpdateSpeedParams, &UpdateSpeedParams_Parms, NULL );
	};

	float CalcBaseRunSpeed ()
	{
		static UFunction* pfnCalcBaseRunSpeed = NULL;

		if ( !pfnCalcBaseRunSpeed )
			pfnCalcBaseRunSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyPawn.CalcBaseRunSpeed" );

		ACCLobbyPawn_execCalcBaseRunSpeed_Parms CalcBaseRunSpeed_Parms;

		this->ProcessEvent( pfnCalcBaseRunSpeed, &CalcBaseRunSpeed_Parms, NULL );

		return CalcBaseRunSpeed_Parms.ReturnValue;
	};

};

UClass* ACCLobbyPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif