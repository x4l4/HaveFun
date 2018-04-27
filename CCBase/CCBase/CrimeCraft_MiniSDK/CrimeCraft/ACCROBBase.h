/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCROBBase.h
// Date: 06/16/2011 @ 05:19:41.883
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCROBBase_execUpdateVisual_Parms
{
};

struct ACCROBBase_eventStartDeposit_Parms
{
};// FUNC_Event

struct ACCROBBase_eventStartRobbery_Parms
{
};// FUNC_Event

struct ACCROBBase_execUpdate_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBBase_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCROBBase_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct ACCROBBase_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCROBBase_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCROBBase_execDepositScore_Parms
{
	class APawn* P;
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCROBBase_execRobberyScore_Parms
{
	class APawn* P;
	float DeltaTime;
	int NumRobbering;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCROBBase_execUpdateNative_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCROBBase_execIsActorInVolume_Parms
{
	class AActor* TestActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x2E4)
class ACCROBBase : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x02B8 (0x0004)
	void*                                              ROBBaseMesh;                                 // 0x02BC (0x0004)
	void*                                              AttachedVisualMaterialInst;                  // 0x02C0 (0x0004)
	unsigned long                                      BlueBase : 1;                                // 0x02C4 (0x0004) [0x00000001]
	unsigned long                                      RedBase : 1;                                 // 0x02C4 (0x0004) [0x00000002]
	float                                              CaptureDist;                                 // 0x02C8 (0x0004)
	float                                              UnlockTime;                                  // 0x02CC (0x0004)
	float                                              LockTime;                                    // 0x02D0 (0x0004)
	void*                                              StartRobberySound;                           // 0x02D4 (0x0004)
	void*                                              StartDepositSound;                           // 0x02D8 (0x0004)
	float                                              LockState;                                   // 0x02DC (0x0004)
	float                                              ScoreState;                                  // 0x02E0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCROBBase" );

		return ClassPointer;
	};

public:
	void UpdateVisual ()
	{
		static UFunction* pfnUpdateVisual = NULL;

		if ( !pfnUpdateVisual )
			pfnUpdateVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.UpdateVisual" );

		ACCROBBase_execUpdateVisual_Parms UpdateVisual_Parms;

		this->ProcessEvent( pfnUpdateVisual, &UpdateVisual_Parms, NULL );
	};

	void eventStartDeposit ()
	{
		static UFunction* pfnStartDeposit = NULL;

		if ( !pfnStartDeposit )
			pfnStartDeposit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.StartDeposit" );

		ACCROBBase_eventStartDeposit_Parms StartDeposit_Parms;

		this->ProcessEvent( pfnStartDeposit, &StartDeposit_Parms, NULL );
	};

	void eventStartRobbery ()
	{
		static UFunction* pfnStartRobbery = NULL;

		if ( !pfnStartRobbery )
			pfnStartRobbery = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.StartRobbery" );

		ACCROBBase_eventStartRobbery_Parms StartRobbery_Parms;

		this->ProcessEvent( pfnStartRobbery, &StartRobbery_Parms, NULL );
	};

	bool Update ( float DeltaTime )
	{
		static UFunction* pfnUpdate = NULL;

		if ( !pfnUpdate )
			pfnUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.Update" );

		ACCROBBase_execUpdate_Parms Update_Parms;
		Update_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdate, &Update_Parms, NULL );

		return Update_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.ReplicatedEvent" );

		ACCROBBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.NotifyLocalPlayerTeamReceived" );

		ACCROBBase_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.PostBeginPlay" );

		ACCROBBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.UpdateRadarPresentation" );

		ACCROBBase_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

	float DepositScore ( class APawn* P, float DeltaTime )
	{
		static UFunction* pfnDepositScore = NULL;

		if ( !pfnDepositScore )
			pfnDepositScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.DepositScore" );

		ACCROBBase_execDepositScore_Parms DepositScore_Parms;
		DepositScore_Parms.P = P;
		DepositScore_Parms.DeltaTime = DeltaTime;

		pfnDepositScore->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDepositScore, &DepositScore_Parms, NULL );
		pfnDepositScore->FunctionFlags |= 0x400;

		return DepositScore_Parms.ReturnValue;
	};

	float RobberyScore ( class APawn* P, float DeltaTime, int NumRobbering )
	{
		static UFunction* pfnRobberyScore = NULL;

		if ( !pfnRobberyScore )
			pfnRobberyScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.RobberyScore" );

		ACCROBBase_execRobberyScore_Parms RobberyScore_Parms;
		RobberyScore_Parms.P = P;
		RobberyScore_Parms.DeltaTime = DeltaTime;
		RobberyScore_Parms.NumRobbering = NumRobbering;

		pfnRobberyScore->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRobberyScore, &RobberyScore_Parms, NULL );
		pfnRobberyScore->FunctionFlags |= 0x400;

		return RobberyScore_Parms.ReturnValue;
	};

	bool UpdateNative ( float DeltaTime )
	{
		static UFunction* pfnUpdateNative = NULL;

		if ( !pfnUpdateNative )
			pfnUpdateNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.UpdateNative" );

		ACCROBBase_execUpdateNative_Parms UpdateNative_Parms;
		UpdateNative_Parms.DeltaTime = DeltaTime;

		pfnUpdateNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateNative, &UpdateNative_Parms, NULL );
		pfnUpdateNative->FunctionFlags |= 0x400;

		return UpdateNative_Parms.ReturnValue;
	};

	bool IsActorInVolume ( class AActor* TestActor )
	{
		static UFunction* pfnIsActorInVolume = NULL;

		if ( !pfnIsActorInVolume )
			pfnIsActorInVolume = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBBase.IsActorInVolume" );

		ACCROBBase_execIsActorInVolume_Parms IsActorInVolume_Parms;
		IsActorInVolume_Parms.TestActor = TestActor;

		pfnIsActorInVolume->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsActorInVolume, &IsActorInVolume_Parms, NULL );
		pfnIsActorInVolume->FunctionFlags |= 0x400;

		return IsActorInVolume_Parms.ReturnValue;
	};

};

UClass* ACCROBBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif