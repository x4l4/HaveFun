/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCBotPawn.h
// Date: 06/16/2011 @ 05:19:40.472
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_ENEMY_LIST_SIZE                      3

enum ESpecialMove
{
	SM_None = 0,
	SM_Leapfrog_Fwd = 1,
	SM_Leapfrog_Bwd = 2,
	SM_Leapfrog_Left = 3,
	SM_Leapfrog_Right = 4,
	SM_Test = 5,
	SXX_Fix_Max = 6,
	ESpecialMove_MAX = 7
};

struct ACCBotPawn_execSimpleSolveAimProblems_Parms
{
	float DeltaTime;
};

struct ACCBotPawn_execAttachWeaponToCarrySlotSocket_Parms
{
	class USkeletalMeshComponent* WpnMesh;
	struct FName SocketName;
};

struct ACCBotPawn_execPrintGivenDamage_Parms
{
	class ACCPlayerReplicationInfo* Target;
	int Damage;
};

struct ACCBotPawn_execPrintTakenDamage_Parms
{
	class ACCPlayerReplicationInfo* pInstigator;
	int Damage;
};

struct ACCBotPawn_execGetShouldCalculateAimOffset_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBotPawn_execCalculateAimOffsetTarget_Parms
{
	class AWeapon* Weap;
	struct FVector WeaponLocation;
	struct FRotator BaseAimRotation;
	class AActor* TargetActor; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCBotPawn_eventTakeDamage_Parms
{
	int Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCBotPawn_execPossessedBy_Parms
{
	class AController* C;
	unsigned long bVehicleTransition : 1;
};

struct ACCBotPawn_execRestart_Parms
{
};

struct ACCBotPawn_eventGetAvatar_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCBotPawn_execNotifyPlayerReplicationInfoReplicated_Parms
{
};

struct ACCBotPawn_execSpecialMoveTo_Parms
{
	class ANavigationPoint* Start;
	class ANavigationPoint* End;
	class AActor* Next;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBotPawn_execSetPRIPlayerState_Parms
{
	int State;
};

struct ACCBotPawn_execDrawDebug_Parms
{
	class AHUD* HUD;
	float DY;
};

struct ACCBotPawn_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCBotPawn_execDoFakeEquipItems_Parms
{
};

struct ACCBotPawn_execFakeEquipItems_Parms
{
};

struct ACCBotPawn_eventCreateCharacterComponent_Parms
{
	struct FCharacterVisualDescription Appearance; // CPF_OutParm
	unsigned char AnimType;
};// FUNC_Event

struct ACCBotPawn_execAddAssistScore_Parms
{
	class ACCPlayerReplicationInfo* KillerPRI;
};

struct ACCBotPawn_execOnDestroy_Parms
{
	void* Action;
};

struct ACCBotPawn_execSetDepthPriorityGroup_Parms
{
	unsigned char NewDepthPriorityGroup;
};

struct ACCBotPawn_execPostBeginPlay_Parms
{
};

struct ACCBotPawn_execIsSpeaking_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBotPawn_execUpdateSpeechSoundLocation_Parms
{
};

struct ACCBotPawn_execTimer_SpeechStop_Parms
{
};// FUNC_Final

struct ACCBotPawn_execPlaySpeechSound_Parms
{
	void* Cue;
};

struct ACCBotPawn_eventOnAnimEnd_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};// FUNC_Event

struct ACCBotPawn_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCBotPawn_execGetSpecialMoveDist_Parms
{
	unsigned char Move;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCBotPawn_execCheckIsSpecialMoveInstanced_Parms
{
	unsigned char Move;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBotPawn_execIsCanDoSpecialMove_Parms
{
	unsigned char Move;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBotPawn_eventStopSpecialMove_Parms
{
};// FUNC_Event

struct ACCBotPawn_execStartSpecialMove_Parms
{
	unsigned char Move;
};

// (0x1AC0 - 0x1C40)
class ACCBotPawn : public ACCInstancePawn
{
public:
	struct FCCBotPawnDebugInfo                         di;                                          // 0x1AC0 (0x0038)
	struct FCCBotPawnDebugInfo2                        DI2;                                         // 0x1AF8 (0x0050)
	struct FCCBotPawnDebugInfo3                        DI3;                                         // 0x1B48 (0x0054)
	struct FCCBotPawnDebugInfo4                        DI4;                                         // 0x1B9C (0x002C)
	struct FCCBotPawnDebugInfoUS                       DIUS;                                        // 0x1BC8 (0x0044)
	float                                              TimeSinceLastDebugUpdate;                    // 0x1C0C (0x0004)
	TArray< class UClass* >                            SpecialMoveClasses;                          // 0x1C10 (0x000C)
	TArray< void* >                                    SpecialMoves;                                // 0x1C1C (0x000C)
	unsigned char                                      SpecialMove;                                 // 0x1C28 (0x0001)
	unsigned char                                      ReplicatedSpecialMove;                       // 0x1C29 (0x0001)
	unsigned long                                      bSpeaking : 1;                               // 0x1C2C (0x0004) [0x00000001]
	void*                                              SoundGroup;                                  // 0x1C30 (0x0004)
	void*                                              SpeechSound;                                 // 0x1C34 (0x0004)
	void*                                              RespawnSoundComponent;                       // 0x1C38 (0x0004)
	void*                                              PickupSoundComponent;                        // 0x1C3C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCBotPawn" );

		return ClassPointer;
	};

public:
	void SimpleSolveAimProblems ( float DeltaTime )
	{
		static UFunction* pfnSimpleSolveAimProblems = NULL;

		if ( !pfnSimpleSolveAimProblems )
			pfnSimpleSolveAimProblems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.SimpleSolveAimProblems" );

		ACCBotPawn_execSimpleSolveAimProblems_Parms SimpleSolveAimProblems_Parms;
		SimpleSolveAimProblems_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSimpleSolveAimProblems, &SimpleSolveAimProblems_Parms, NULL );
	};

	void AttachWeaponToCarrySlotSocket ( class USkeletalMeshComponent* WpnMesh, struct FName SocketName )
	{
		static UFunction* pfnAttachWeaponToCarrySlotSocket = NULL;

		if ( !pfnAttachWeaponToCarrySlotSocket )
			pfnAttachWeaponToCarrySlotSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.AttachWeaponToCarrySlotSocket" );

		ACCBotPawn_execAttachWeaponToCarrySlotSocket_Parms AttachWeaponToCarrySlotSocket_Parms;
		AttachWeaponToCarrySlotSocket_Parms.WpnMesh = WpnMesh;
		memcpy( &AttachWeaponToCarrySlotSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnAttachWeaponToCarrySlotSocket, &AttachWeaponToCarrySlotSocket_Parms, NULL );
	};

	void PrintGivenDamage ( class ACCPlayerReplicationInfo* Target, int Damage )
	{
		static UFunction* pfnPrintGivenDamage = NULL;

		if ( !pfnPrintGivenDamage )
			pfnPrintGivenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.PrintGivenDamage" );

		ACCBotPawn_execPrintGivenDamage_Parms PrintGivenDamage_Parms;
		PrintGivenDamage_Parms.Target = Target;
		PrintGivenDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPrintGivenDamage, &PrintGivenDamage_Parms, NULL );
	};

	void PrintTakenDamage ( class ACCPlayerReplicationInfo* pInstigator, int Damage )
	{
		static UFunction* pfnPrintTakenDamage = NULL;

		if ( !pfnPrintTakenDamage )
			pfnPrintTakenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.PrintTakenDamage" );

		ACCBotPawn_execPrintTakenDamage_Parms PrintTakenDamage_Parms;
		PrintTakenDamage_Parms.pInstigator = pInstigator;
		PrintTakenDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPrintTakenDamage, &PrintTakenDamage_Parms, NULL );
	};

	bool GetShouldCalculateAimOffset ()
	{
		static UFunction* pfnGetShouldCalculateAimOffset = NULL;

		if ( !pfnGetShouldCalculateAimOffset )
			pfnGetShouldCalculateAimOffset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.GetShouldCalculateAimOffset" );

		ACCBotPawn_execGetShouldCalculateAimOffset_Parms GetShouldCalculateAimOffset_Parms;

		this->ProcessEvent( pfnGetShouldCalculateAimOffset, &GetShouldCalculateAimOffset_Parms, NULL );

		return GetShouldCalculateAimOffset_Parms.ReturnValue;
	};

	struct FVector CalculateAimOffsetTarget ( class AWeapon* Weap, struct FVector WeaponLocation, struct FRotator BaseAimRotation, class AActor** TargetActor )
	{
		static UFunction* pfnCalculateAimOffsetTarget = NULL;

		if ( !pfnCalculateAimOffsetTarget )
			pfnCalculateAimOffsetTarget = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.CalculateAimOffsetTarget" );

		ACCBotPawn_execCalculateAimOffsetTarget_Parms CalculateAimOffsetTarget_Parms;
		CalculateAimOffsetTarget_Parms.Weap = Weap;
		memcpy( &CalculateAimOffsetTarget_Parms.WeaponLocation, &WeaponLocation, 0xC );
		memcpy( &CalculateAimOffsetTarget_Parms.BaseAimRotation, &BaseAimRotation, 0xC );

		this->ProcessEvent( pfnCalculateAimOffsetTarget, &CalculateAimOffsetTarget_Parms, NULL );

		if ( TargetActor )
			*TargetActor = CalculateAimOffsetTarget_Parms.TargetActor; // CPF_OutParm

		return CalculateAimOffsetTarget_Parms.ReturnValue;
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.TakeDamage" );

		ACCBotPawn_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.Damage = Damage;
		TakeDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	void PossessedBy ( class AController* C, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossessedBy = NULL;

		if ( !pfnPossessedBy )
			pfnPossessedBy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.PossessedBy" );

		ACCBotPawn_execPossessedBy_Parms PossessedBy_Parms;
		PossessedBy_Parms.C = C;
		PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossessedBy, &PossessedBy_Parms, NULL );
	};

	void Restart ()
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.Restart" );

		ACCBotPawn_execRestart_Parms Restart_Parms;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	void* eventGetAvatar ()
	{
		static UFunction* pfnGetAvatar = NULL;

		if ( !pfnGetAvatar )
			pfnGetAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.GetAvatar" );

		ACCBotPawn_eventGetAvatar_Parms GetAvatar_Parms;

		this->ProcessEvent( pfnGetAvatar, &GetAvatar_Parms, NULL );

		return GetAvatar_Parms.ReturnValue;
	};

	void NotifyPlayerReplicationInfoReplicated ()
	{
		static UFunction* pfnNotifyPlayerReplicationInfoReplicated = NULL;

		if ( !pfnNotifyPlayerReplicationInfoReplicated )
			pfnNotifyPlayerReplicationInfoReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.NotifyPlayerReplicationInfoReplicated" );

		ACCBotPawn_execNotifyPlayerReplicationInfoReplicated_Parms NotifyPlayerReplicationInfoReplicated_Parms;

		this->ProcessEvent( pfnNotifyPlayerReplicationInfoReplicated, &NotifyPlayerReplicationInfoReplicated_Parms, NULL );
	};

	bool SpecialMoveTo ( class ANavigationPoint* Start, class ANavigationPoint* End, class AActor* Next )
	{
		static UFunction* pfnSpecialMoveTo = NULL;

		if ( !pfnSpecialMoveTo )
			pfnSpecialMoveTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.SpecialMoveTo" );

		ACCBotPawn_execSpecialMoveTo_Parms SpecialMoveTo_Parms;
		SpecialMoveTo_Parms.Start = Start;
		SpecialMoveTo_Parms.End = End;
		SpecialMoveTo_Parms.Next = Next;

		this->ProcessEvent( pfnSpecialMoveTo, &SpecialMoveTo_Parms, NULL );

		return SpecialMoveTo_Parms.ReturnValue;
	};

	void SetPRIPlayerState ( int State )
	{
		static UFunction* pfnSetPRIPlayerState = NULL;

		if ( !pfnSetPRIPlayerState )
			pfnSetPRIPlayerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.SetPRIPlayerState" );

		ACCBotPawn_execSetPRIPlayerState_Parms SetPRIPlayerState_Parms;
		SetPRIPlayerState_Parms.State = State;

		this->ProcessEvent( pfnSetPRIPlayerState, &SetPRIPlayerState_Parms, NULL );
	};

	void DrawDebug ( class AHUD* HUD, float DY )
	{
		static UFunction* pfnDrawDebug = NULL;

		if ( !pfnDrawDebug )
			pfnDrawDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.DrawDebug" );

		ACCBotPawn_execDrawDebug_Parms DrawDebug_Parms;
		DrawDebug_Parms.HUD = HUD;
		DrawDebug_Parms.DY = DY;

		this->ProcessEvent( pfnDrawDebug, &DrawDebug_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.Tick" );

		ACCBotPawn_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void DoFakeEquipItems ()
	{
		static UFunction* pfnDoFakeEquipItems = NULL;

		if ( !pfnDoFakeEquipItems )
			pfnDoFakeEquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.DoFakeEquipItems" );

		ACCBotPawn_execDoFakeEquipItems_Parms DoFakeEquipItems_Parms;

		this->ProcessEvent( pfnDoFakeEquipItems, &DoFakeEquipItems_Parms, NULL );
	};

	void FakeEquipItems ()
	{
		static UFunction* pfnFakeEquipItems = NULL;

		if ( !pfnFakeEquipItems )
			pfnFakeEquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.FakeEquipItems" );

		ACCBotPawn_execFakeEquipItems_Parms FakeEquipItems_Parms;

		this->ProcessEvent( pfnFakeEquipItems, &FakeEquipItems_Parms, NULL );
	};

	void eventCreateCharacterComponent ( unsigned char AnimType, struct FCharacterVisualDescription* Appearance )
	{
		static UFunction* pfnCreateCharacterComponent = NULL;

		if ( !pfnCreateCharacterComponent )
			pfnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.CreateCharacterComponent" );

		ACCBotPawn_eventCreateCharacterComponent_Parms CreateCharacterComponent_Parms;
		CreateCharacterComponent_Parms.AnimType = AnimType;

		this->ProcessEvent( pfnCreateCharacterComponent, &CreateCharacterComponent_Parms, NULL );

		if ( Appearance )
			memcpy( Appearance, &CreateCharacterComponent_Parms.Appearance, 0x48 ); // CPF_OutParm
	};

	void AddAssistScore ( class ACCPlayerReplicationInfo* KillerPRI )
	{
		static UFunction* pfnAddAssistScore = NULL;

		if ( !pfnAddAssistScore )
			pfnAddAssistScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.AddAssistScore" );

		ACCBotPawn_execAddAssistScore_Parms AddAssistScore_Parms;
		AddAssistScore_Parms.KillerPRI = KillerPRI;

		this->ProcessEvent( pfnAddAssistScore, &AddAssistScore_Parms, NULL );
	};

	void OnDestroy ( void* Action )
	{
		static UFunction* pfnOnDestroy = NULL;

		if ( !pfnOnDestroy )
			pfnOnDestroy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.OnDestroy" );

		ACCBotPawn_execOnDestroy_Parms OnDestroy_Parms;
		OnDestroy_Parms.Action = Action;

		this->ProcessEvent( pfnOnDestroy, &OnDestroy_Parms, NULL );
	};

	void SetDepthPriorityGroup ( unsigned char NewDepthPriorityGroup )
	{
		static UFunction* pfnSetDepthPriorityGroup = NULL;

		if ( !pfnSetDepthPriorityGroup )
			pfnSetDepthPriorityGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.SetDepthPriorityGroup" );

		ACCBotPawn_execSetDepthPriorityGroup_Parms SetDepthPriorityGroup_Parms;
		SetDepthPriorityGroup_Parms.NewDepthPriorityGroup = NewDepthPriorityGroup;

		this->ProcessEvent( pfnSetDepthPriorityGroup, &SetDepthPriorityGroup_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.PostBeginPlay" );

		ACCBotPawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool IsSpeaking ()
	{
		static UFunction* pfnIsSpeaking = NULL;

		if ( !pfnIsSpeaking )
			pfnIsSpeaking = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.IsSpeaking" );

		ACCBotPawn_execIsSpeaking_Parms IsSpeaking_Parms;

		this->ProcessEvent( pfnIsSpeaking, &IsSpeaking_Parms, NULL );

		return IsSpeaking_Parms.ReturnValue;
	};

	void UpdateSpeechSoundLocation ()
	{
		static UFunction* pfnUpdateSpeechSoundLocation = NULL;

		if ( !pfnUpdateSpeechSoundLocation )
			pfnUpdateSpeechSoundLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.UpdateSpeechSoundLocation" );

		ACCBotPawn_execUpdateSpeechSoundLocation_Parms UpdateSpeechSoundLocation_Parms;

		this->ProcessEvent( pfnUpdateSpeechSoundLocation, &UpdateSpeechSoundLocation_Parms, NULL );
	};

	void Timer_SpeechStop ()
	{
		static UFunction* pfnTimer_SpeechStop = NULL;

		if ( !pfnTimer_SpeechStop )
			pfnTimer_SpeechStop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.Timer_SpeechStop" );

		ACCBotPawn_execTimer_SpeechStop_Parms Timer_SpeechStop_Parms;

		this->ProcessEvent( pfnTimer_SpeechStop, &Timer_SpeechStop_Parms, NULL );
	};

	void PlaySpeechSound ( void* Cue )
	{
		static UFunction* pfnPlaySpeechSound = NULL;

		if ( !pfnPlaySpeechSound )
			pfnPlaySpeechSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.PlaySpeechSound" );

		ACCBotPawn_execPlaySpeechSound_Parms PlaySpeechSound_Parms;
		PlaySpeechSound_Parms.Cue = Cue;

		this->ProcessEvent( pfnPlaySpeechSound, &PlaySpeechSound_Parms, NULL );
	};

	void eventOnAnimEnd ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnOnAnimEnd = NULL;

		if ( !pfnOnAnimEnd )
			pfnOnAnimEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.OnAnimEnd" );

		ACCBotPawn_eventOnAnimEnd_Parms OnAnimEnd_Parms;
		OnAnimEnd_Parms.SeqNode = SeqNode;
		OnAnimEnd_Parms.PlayedTime = PlayedTime;
		OnAnimEnd_Parms.ExcessTime = ExcessTime;

		this->ProcessEvent( pfnOnAnimEnd, &OnAnimEnd_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.ReplicatedEvent" );

		ACCBotPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	float GetSpecialMoveDist ( unsigned char Move )
	{
		static UFunction* pfnGetSpecialMoveDist = NULL;

		if ( !pfnGetSpecialMoveDist )
			pfnGetSpecialMoveDist = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.GetSpecialMoveDist" );

		ACCBotPawn_execGetSpecialMoveDist_Parms GetSpecialMoveDist_Parms;
		GetSpecialMoveDist_Parms.Move = Move;

		this->ProcessEvent( pfnGetSpecialMoveDist, &GetSpecialMoveDist_Parms, NULL );

		return GetSpecialMoveDist_Parms.ReturnValue;
	};

	bool CheckIsSpecialMoveInstanced ( unsigned char Move )
	{
		static UFunction* pfnCheckIsSpecialMoveInstanced = NULL;

		if ( !pfnCheckIsSpecialMoveInstanced )
			pfnCheckIsSpecialMoveInstanced = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.CheckIsSpecialMoveInstanced" );

		ACCBotPawn_execCheckIsSpecialMoveInstanced_Parms CheckIsSpecialMoveInstanced_Parms;
		CheckIsSpecialMoveInstanced_Parms.Move = Move;

		this->ProcessEvent( pfnCheckIsSpecialMoveInstanced, &CheckIsSpecialMoveInstanced_Parms, NULL );

		return CheckIsSpecialMoveInstanced_Parms.ReturnValue;
	};

	bool IsCanDoSpecialMove ( unsigned char Move )
	{
		static UFunction* pfnIsCanDoSpecialMove = NULL;

		if ( !pfnIsCanDoSpecialMove )
			pfnIsCanDoSpecialMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.IsCanDoSpecialMove" );

		ACCBotPawn_execIsCanDoSpecialMove_Parms IsCanDoSpecialMove_Parms;
		IsCanDoSpecialMove_Parms.Move = Move;

		this->ProcessEvent( pfnIsCanDoSpecialMove, &IsCanDoSpecialMove_Parms, NULL );

		return IsCanDoSpecialMove_Parms.ReturnValue;
	};

	void eventStopSpecialMove ()
	{
		static UFunction* pfnStopSpecialMove = NULL;

		if ( !pfnStopSpecialMove )
			pfnStopSpecialMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.StopSpecialMove" );

		ACCBotPawn_eventStopSpecialMove_Parms StopSpecialMove_Parms;

		this->ProcessEvent( pfnStopSpecialMove, &StopSpecialMove_Parms, NULL );
	};

	void StartSpecialMove ( unsigned char Move )
	{
		static UFunction* pfnStartSpecialMove = NULL;

		if ( !pfnStartSpecialMove )
			pfnStartSpecialMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotPawn.StartSpecialMove" );

		ACCBotPawn_execStartSpecialMove_Parms StartSpecialMove_Parms;
		StartSpecialMove_Parms.Move = Move;

		this->ProcessEvent( pfnStartSpecialMove, &StartSpecialMove_Parms, NULL );
	};

};

UClass* ACCBotPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif