/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCLobbyController.h
// Date: 06/16/2011 @ 05:19:41.783
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCLobbyController_execTriggerAllSequenceEvents_Parms
{
	class UClass* SeqEventClass;
};

struct ACCLobbyController_execTestShowGame_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execSetTutorialStep_Parms
{
	int Step;
};// FUNC_Exec

struct ACCLobbyController_execFinishTutorial_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execTEST_ClearAllPrefabs_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execTEST_SpawnPrefab_Parms
{
};// FUNC_Exec

struct ACCLobbyController_eventGetClubPrefabManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCLobbyController_execDestroyPrefabDataNative_Parms
{
	void* PrefabInst;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyController_execCreatePrefabDataFromPrefabNative_Parms
{
	struct FVector Loc;
	struct FRotator Rot;
	void* P;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyController_execTEST_EquipItems_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execFindNextStep_Parms
{
	void* T;
	int Id;
};

struct ACCLobbyController_execAnalizeTutorial_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execPrintAlloc_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execPrintAllocatedObjsCount_Parms
{
};// FUNC_Native

struct ACCLobbyController_execSprintLobby_Parms
{
	unsigned long SprintOn : 1;
};// FUNC_Exec

struct ACCLobbyController_execRemoveFromABaseYStack_Parms
{
	unsigned char Type;
};

struct ACCLobbyController_execTriggerEternalRunning_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execaStrafeLobby_Parms
{
	float Speed;
	unsigned long isDown : 1;
};// FUNC_Exec

struct ACCLobbyController_execaBaseYLobby_Parms
{
	float Speed;
	unsigned long isDown : 1;
	unsigned char Type;
};// FUNC_Exec

struct ACCLobbyController_execToggleCharacterMarking_Parms
{
	unsigned long isDown : 1;
};// FUNC_Exec

struct ACCLobbyController_execUpdateMovementInputEntry_Parms
{
	struct FMovementInputInfoEntry Entry; // CPF_OutParm
	float Value;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCLobbyController_execStaticSgn_Parms
{
	float A;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCLobbyController_execUpdateMovementInput_Parms
{
	float Forward;
	float Strafe;
	float ProcessedForward; // CPF_OutParm
	float ProcessedStrafe; // CPF_OutParm
};

struct ACCLobbyController_execResetMovementInputEntry_Parms
{
	struct FMovementInputInfoEntry Entry; // CPF_OutParm
};

struct ACCLobbyController_execResetMovementInput_Parms
{
};

struct ACCLobbyController_execRemoveHighlight_Parms
{
};

struct ACCLobbyController_execHighlightWithColor_Parms
{
	struct FLinearColor clr;
};

struct ACCLobbyController_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCLobbyController_exectutorial_init_Parms
{
};

struct ACCLobbyController_execonTutorialStatusChanged_Parms
{
	unsigned char EventId;
	void* InExtendedParams;
};

struct ACCLobbyController_execonTournamentUpdated_Parms
{
	unsigned char EventId;
	void* InExtendedParams;
};

struct ACCLobbyController_execStartLoadingProcess_Parms
{
	unsigned long bStart : 1;
};

struct ACCLobbyController_execOnRequestBuyItem_Parms
{
	int TemplateId;
	int stackId;
};

struct ACCLobbyController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCLobbyController_execSetNewSpeed_Parms
{
	float NewSpeed;
};// FUNC_Exec

struct ACCLobbyController_eventPossess_Parms
{
	class APawn* aPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct ACCLobbyController_execSetCHPublicAccess_Parms
{
	unsigned long InDoAllow : 1;
};// FUNC_Exec

struct ACCLobbyController_execCmdCraftRoomLeft_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execCmdCraftRoomEntered_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execLeaveClanHall_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execGoToClanHall_Parms
{
	struct FString InClanName;
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execGoToMyClanHall_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execGoToInstance_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCLobbyController_execChangeWeapon_Parms
{
	int WeaponNum;
};// FUNC_Exec

struct ACCLobbyController_execAddSimulatedPlayer_Parms
{
	int Count;
};// FUNC_Exec

struct ACCLobbyController_execOnRBMousePress_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execRestoreMtl_Parms
{
	struct FString MtlName;
};// FUNC_Exec

struct ACCLobbyController_execSetMtl_Parms
{
	struct FString MtlName;
};// FUNC_Exec

struct ACCLobbyController_execSpawnTutorial_Parms
{
	struct FString InTitle;
	struct FString InText;
};// FUNC_Exec

struct ACCLobbyController_execOnLBMousePress_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execRessurect_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execFatality_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execSuicide_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execZoomIn_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execZoomOut_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execOnRollingRelease_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execCheckForAdmireFinish_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execOnRollingPress_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execOnTabReleased_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execOnTabPressed_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execZoomCamera_Parms
{
	float ZoomDir;
};

struct ACCLobbyController_execApplyRotation_Parms
{
	struct FRotator DeltaRotation;
	float DeltaTime;
};

struct ACCLobbyController_execApplyAcceleration_Parms
{
	struct FVector NewAcceleration;
	float DeltaTime;
};

struct ACCLobbyController_execReplicateMovement_Parms
{
};// FUNC_Native

struct ACCLobbyController_execDetermineAcceleration_Parms
{
	unsigned char MoveDir;
	struct FVector out_NewAcceleration; // CPF_OutParm
};// FUNC_Native

struct ACCLobbyController_execAbortSprint_Parms
{
};

struct ACCLobbyController_execGoToSprintState_Parms
{
};

struct ACCLobbyController_execstartsprint_Parms
{
};

struct ACCLobbyController_execSittingProcessMove_Parms
{
	float DeltaTime;
};

struct ACCLobbyController_execFacePawnRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct ACCLobbyController_execPopulationTesterToggleMovement_Parms
{
};// FUNC_Exec

struct ACCLobbyController_execPopulateLobby_Parms
{
	int Count;
	float Density;
};// FUNC_Exec

struct ACCLobbyController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCLobbyController_execnative_AddSimulatedPlayer_Parms
{
	int Count;
};// FUNC_Native

struct ACCLobbyController_execTeleportToInstance_Parms
{
};// FUNC_Native

// (0x774 - 0x7F4)
class ACCLobbyController : public ACCController
{
public:
	int                                                SelectedInstance;                            // 0x0774 (0x0004)
	struct FRotator                                    LockedRotation;                              // 0x0778 (0x000C)
	float                                              FirstInstanceTime;                           // 0x0784 (0x0004)
	float                                              FirstInstanceDelay;                          // 0x0788 (0x0004)
	void*                                              LobbyAvatar;                                 // 0x078C (0x0004)
	int                                                TriggerActiveLobbyExitId;                    // 0x0790 (0x0004)
	int                                                LobbyExitHintIndex;                          // 0x0794 (0x0004)
	struct FVector                                     LastReplicatedLocation;                      // 0x0798 (0x000C)
	struct FVector                                     LastReplicatedVelocity;                      // 0x07A4 (0x000C)
	float                                              AccumulatedTime;                             // 0x07B0 (0x0004)
	int                                                LastReplicatedYaw;                           // 0x07B4 (0x0004)
	unsigned long                                      bLastReplicatedVelocityIs0 : 1;              // 0x07B8 (0x0004) [0x00000001]
	unsigned long                                      bIsSprintEnabledByKey : 1;                   // 0x07B8 (0x0004) [0x00000002]
	void*                                              PopulationTester;                            // 0x07BC (0x0004)
	void*                                              TutorialInst;                                // 0x07C0 (0x0004)
	void*                                              TutorialTemplate1;                           // 0x07C4 (0x0004)
	void*                                              TutorialTemplate2;                           // 0x07C8 (0x0004)
	void*                                              TutorialTemplate3;                           // 0x07CC (0x0004)
	void*                                              ClubPrefabManager;                           // 0x07D0 (0x0004)
	struct FMovementInputInfo                          MovementInputInfoStruct;                     // 0x07D4 (0x0018)
	float                                              MovementInputCooldownTime;                   // 0x07EC (0x0004)
	float                                              SprintTopSpeed;                              // 0x07F0 (0x0004)

	// CCDebugSpectating
	// CCAIDebugSpectating
	// Sprint
	// PlayerWalking
	// VIPSittingLogic
	// SittingLogic
	// PlayerWaiting

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCLobbyController" );

		return ClassPointer;
	};

public:
	void TriggerAllSequenceEvents ( class UClass* SeqEventClass )
	{
		static UFunction* pfnTriggerAllSequenceEvents = NULL;

		if ( !pfnTriggerAllSequenceEvents )
			pfnTriggerAllSequenceEvents = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TriggerAllSequenceEvents" );

		ACCLobbyController_execTriggerAllSequenceEvents_Parms TriggerAllSequenceEvents_Parms;
		TriggerAllSequenceEvents_Parms.SeqEventClass = SeqEventClass;

		this->ProcessEvent( pfnTriggerAllSequenceEvents, &TriggerAllSequenceEvents_Parms, NULL );
	};

	void TestShowGame ()
	{
		static UFunction* pfnTestShowGame = NULL;

		if ( !pfnTestShowGame )
			pfnTestShowGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TestShowGame" );

		ACCLobbyController_execTestShowGame_Parms TestShowGame_Parms;

		this->ProcessEvent( pfnTestShowGame, &TestShowGame_Parms, NULL );
	};

	void SetTutorialStep ( int Step )
	{
		static UFunction* pfnSetTutorialStep = NULL;

		if ( !pfnSetTutorialStep )
			pfnSetTutorialStep = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SetTutorialStep" );

		ACCLobbyController_execSetTutorialStep_Parms SetTutorialStep_Parms;
		SetTutorialStep_Parms.Step = Step;

		this->ProcessEvent( pfnSetTutorialStep, &SetTutorialStep_Parms, NULL );
	};

	void FinishTutorial ()
	{
		static UFunction* pfnFinishTutorial = NULL;

		if ( !pfnFinishTutorial )
			pfnFinishTutorial = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.FinishTutorial" );

		ACCLobbyController_execFinishTutorial_Parms FinishTutorial_Parms;

		this->ProcessEvent( pfnFinishTutorial, &FinishTutorial_Parms, NULL );
	};

	void TEST_ClearAllPrefabs ()
	{
		static UFunction* pfnTEST_ClearAllPrefabs = NULL;

		if ( !pfnTEST_ClearAllPrefabs )
			pfnTEST_ClearAllPrefabs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TEST_ClearAllPrefabs" );

		ACCLobbyController_execTEST_ClearAllPrefabs_Parms TEST_ClearAllPrefabs_Parms;

		this->ProcessEvent( pfnTEST_ClearAllPrefabs, &TEST_ClearAllPrefabs_Parms, NULL );
	};

	void TEST_SpawnPrefab ()
	{
		static UFunction* pfnTEST_SpawnPrefab = NULL;

		if ( !pfnTEST_SpawnPrefab )
			pfnTEST_SpawnPrefab = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TEST_SpawnPrefab" );

		ACCLobbyController_execTEST_SpawnPrefab_Parms TEST_SpawnPrefab_Parms;

		this->ProcessEvent( pfnTEST_SpawnPrefab, &TEST_SpawnPrefab_Parms, NULL );
	};

	void* eventGetClubPrefabManager ()
	{
		static UFunction* pfnGetClubPrefabManager = NULL;

		if ( !pfnGetClubPrefabManager )
			pfnGetClubPrefabManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.GetClubPrefabManager" );

		ACCLobbyController_eventGetClubPrefabManager_Parms GetClubPrefabManager_Parms;

		this->ProcessEvent( pfnGetClubPrefabManager, &GetClubPrefabManager_Parms, NULL );

		return GetClubPrefabManager_Parms.ReturnValue;
	};

	class AActor* DestroyPrefabDataNative ( void* PrefabInst )
	{
		static UFunction* pfnDestroyPrefabDataNative = NULL;

		if ( !pfnDestroyPrefabDataNative )
			pfnDestroyPrefabDataNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.DestroyPrefabDataNative" );

		ACCLobbyController_execDestroyPrefabDataNative_Parms DestroyPrefabDataNative_Parms;
		DestroyPrefabDataNative_Parms.PrefabInst = PrefabInst;

		pfnDestroyPrefabDataNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDestroyPrefabDataNative, &DestroyPrefabDataNative_Parms, NULL );
		pfnDestroyPrefabDataNative->FunctionFlags |= 0x400;

		return DestroyPrefabDataNative_Parms.ReturnValue;
	};

	class AActor* CreatePrefabDataFromPrefabNative ( struct FVector Loc, struct FRotator Rot, void* P )
	{
		static UFunction* pfnCreatePrefabDataFromPrefabNative = NULL;

		if ( !pfnCreatePrefabDataFromPrefabNative )
			pfnCreatePrefabDataFromPrefabNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.CreatePrefabDataFromPrefabNative" );

		ACCLobbyController_execCreatePrefabDataFromPrefabNative_Parms CreatePrefabDataFromPrefabNative_Parms;
		memcpy( &CreatePrefabDataFromPrefabNative_Parms.Loc, &Loc, 0xC );
		memcpy( &CreatePrefabDataFromPrefabNative_Parms.Rot, &Rot, 0xC );
		CreatePrefabDataFromPrefabNative_Parms.P = P;

		pfnCreatePrefabDataFromPrefabNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreatePrefabDataFromPrefabNative, &CreatePrefabDataFromPrefabNative_Parms, NULL );
		pfnCreatePrefabDataFromPrefabNative->FunctionFlags |= 0x400;

		return CreatePrefabDataFromPrefabNative_Parms.ReturnValue;
	};

	void TEST_EquipItems ()
	{
		static UFunction* pfnTEST_EquipItems = NULL;

		if ( !pfnTEST_EquipItems )
			pfnTEST_EquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TEST_EquipItems" );

		ACCLobbyController_execTEST_EquipItems_Parms TEST_EquipItems_Parms;

		this->ProcessEvent( pfnTEST_EquipItems, &TEST_EquipItems_Parms, NULL );
	};

	void FindNextStep ( void* T, int Id )
	{
		static UFunction* pfnFindNextStep = NULL;

		if ( !pfnFindNextStep )
			pfnFindNextStep = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.FindNextStep" );

		ACCLobbyController_execFindNextStep_Parms FindNextStep_Parms;
		FindNextStep_Parms.T = T;
		FindNextStep_Parms.Id = Id;

		this->ProcessEvent( pfnFindNextStep, &FindNextStep_Parms, NULL );
	};

	void AnalizeTutorial ()
	{
		static UFunction* pfnAnalizeTutorial = NULL;

		if ( !pfnAnalizeTutorial )
			pfnAnalizeTutorial = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.AnalizeTutorial" );

		ACCLobbyController_execAnalizeTutorial_Parms AnalizeTutorial_Parms;

		this->ProcessEvent( pfnAnalizeTutorial, &AnalizeTutorial_Parms, NULL );
	};

	void PrintAlloc ()
	{
		static UFunction* pfnPrintAlloc = NULL;

		if ( !pfnPrintAlloc )
			pfnPrintAlloc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PrintAlloc" );

		ACCLobbyController_execPrintAlloc_Parms PrintAlloc_Parms;

		this->ProcessEvent( pfnPrintAlloc, &PrintAlloc_Parms, NULL );
	};

	void PrintAllocatedObjsCount ()
	{
		static UFunction* pfnPrintAllocatedObjsCount = NULL;

		if ( !pfnPrintAllocatedObjsCount )
			pfnPrintAllocatedObjsCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PrintAllocatedObjsCount" );

		ACCLobbyController_execPrintAllocatedObjsCount_Parms PrintAllocatedObjsCount_Parms;

		pfnPrintAllocatedObjsCount->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPrintAllocatedObjsCount, &PrintAllocatedObjsCount_Parms, NULL );
		pfnPrintAllocatedObjsCount->FunctionFlags |= 0x400;
	};

	void SprintLobby ( unsigned long SprintOn )
	{
		static UFunction* pfnSprintLobby = NULL;

		if ( !pfnSprintLobby )
			pfnSprintLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SprintLobby" );

		ACCLobbyController_execSprintLobby_Parms SprintLobby_Parms;
		SprintLobby_Parms.SprintOn = SprintOn;

		this->ProcessEvent( pfnSprintLobby, &SprintLobby_Parms, NULL );
	};

	void RemoveFromABaseYStack ( unsigned char Type )
	{
		static UFunction* pfnRemoveFromABaseYStack = NULL;

		if ( !pfnRemoveFromABaseYStack )
			pfnRemoveFromABaseYStack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.RemoveFromABaseYStack" );

		ACCLobbyController_execRemoveFromABaseYStack_Parms RemoveFromABaseYStack_Parms;
		RemoveFromABaseYStack_Parms.Type = Type;

		this->ProcessEvent( pfnRemoveFromABaseYStack, &RemoveFromABaseYStack_Parms, NULL );
	};

	void TriggerEternalRunning ()
	{
		static UFunction* pfnTriggerEternalRunning = NULL;

		if ( !pfnTriggerEternalRunning )
			pfnTriggerEternalRunning = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TriggerEternalRunning" );

		ACCLobbyController_execTriggerEternalRunning_Parms TriggerEternalRunning_Parms;

		this->ProcessEvent( pfnTriggerEternalRunning, &TriggerEternalRunning_Parms, NULL );
	};

	void aStrafeLobby ( float Speed, unsigned long isDown )
	{
		static UFunction* pfnaStrafeLobby = NULL;

		if ( !pfnaStrafeLobby )
			pfnaStrafeLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.aStrafeLobby" );

		ACCLobbyController_execaStrafeLobby_Parms aStrafeLobby_Parms;
		aStrafeLobby_Parms.Speed = Speed;
		aStrafeLobby_Parms.isDown = isDown;

		this->ProcessEvent( pfnaStrafeLobby, &aStrafeLobby_Parms, NULL );
	};

	void aBaseYLobby ( float Speed, unsigned long isDown, unsigned char Type/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnaBaseYLobby = NULL;

		if ( !pfnaBaseYLobby )
			pfnaBaseYLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.aBaseYLobby" );

		ACCLobbyController_execaBaseYLobby_Parms aBaseYLobby_Parms;
		aBaseYLobby_Parms.Speed = Speed;
		aBaseYLobby_Parms.isDown = isDown;
		aBaseYLobby_Parms.Type = Type;

		this->ProcessEvent( pfnaBaseYLobby, &aBaseYLobby_Parms, NULL );
	};

	void ToggleCharacterMarking ( unsigned long isDown )
	{
		static UFunction* pfnToggleCharacterMarking = NULL;

		if ( !pfnToggleCharacterMarking )
			pfnToggleCharacterMarking = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ToggleCharacterMarking" );

		ACCLobbyController_execToggleCharacterMarking_Parms ToggleCharacterMarking_Parms;
		ToggleCharacterMarking_Parms.isDown = isDown;

		this->ProcessEvent( pfnToggleCharacterMarking, &ToggleCharacterMarking_Parms, NULL );
	};

	float UpdateMovementInputEntry ( float Value, struct FMovementInputInfoEntry* Entry )
	{
		static UFunction* pfnUpdateMovementInputEntry = NULL;

		if ( !pfnUpdateMovementInputEntry )
			pfnUpdateMovementInputEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.UpdateMovementInputEntry" );

		ACCLobbyController_execUpdateMovementInputEntry_Parms UpdateMovementInputEntry_Parms;
		UpdateMovementInputEntry_Parms.Value = Value;

		this->ProcessEvent( pfnUpdateMovementInputEntry, &UpdateMovementInputEntry_Parms, NULL );

		if ( Entry )
			memcpy( Entry, &UpdateMovementInputEntry_Parms.Entry, 0xC ); // CPF_OutParm

		return UpdateMovementInputEntry_Parms.ReturnValue;
	};

	int StaticSgn ( float A )
	{
		static UFunction* pfnStaticSgn = NULL;

		if ( !pfnStaticSgn )
			pfnStaticSgn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.StaticSgn" );

		ACCLobbyController_execStaticSgn_Parms StaticSgn_Parms;
		StaticSgn_Parms.A = A;

		this->ProcessEvent( pfnStaticSgn, &StaticSgn_Parms, NULL );

		return StaticSgn_Parms.ReturnValue;
	};

	void UpdateMovementInput ( float Forward, float Strafe, float* ProcessedForward, float* ProcessedStrafe )
	{
		static UFunction* pfnUpdateMovementInput = NULL;

		if ( !pfnUpdateMovementInput )
			pfnUpdateMovementInput = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.UpdateMovementInput" );

		ACCLobbyController_execUpdateMovementInput_Parms UpdateMovementInput_Parms;
		UpdateMovementInput_Parms.Forward = Forward;
		UpdateMovementInput_Parms.Strafe = Strafe;

		this->ProcessEvent( pfnUpdateMovementInput, &UpdateMovementInput_Parms, NULL );

		if ( ProcessedForward )
			*ProcessedForward = UpdateMovementInput_Parms.ProcessedForward; // CPF_OutParm
		if ( ProcessedStrafe )
			*ProcessedStrafe = UpdateMovementInput_Parms.ProcessedStrafe; // CPF_OutParm
	};

	void ResetMovementInputEntry ( struct FMovementInputInfoEntry* Entry )
	{
		static UFunction* pfnResetMovementInputEntry = NULL;

		if ( !pfnResetMovementInputEntry )
			pfnResetMovementInputEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ResetMovementInputEntry" );

		ACCLobbyController_execResetMovementInputEntry_Parms ResetMovementInputEntry_Parms;

		this->ProcessEvent( pfnResetMovementInputEntry, &ResetMovementInputEntry_Parms, NULL );

		if ( Entry )
			memcpy( Entry, &ResetMovementInputEntry_Parms.Entry, 0xC ); // CPF_OutParm
	};

	void ResetMovementInput ()
	{
		static UFunction* pfnResetMovementInput = NULL;

		if ( !pfnResetMovementInput )
			pfnResetMovementInput = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ResetMovementInput" );

		ACCLobbyController_execResetMovementInput_Parms ResetMovementInput_Parms;

		this->ProcessEvent( pfnResetMovementInput, &ResetMovementInput_Parms, NULL );
	};

	void RemoveHighlight ()
	{
		static UFunction* pfnRemoveHighlight = NULL;

		if ( !pfnRemoveHighlight )
			pfnRemoveHighlight = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.RemoveHighlight" );

		ACCLobbyController_execRemoveHighlight_Parms RemoveHighlight_Parms;

		this->ProcessEvent( pfnRemoveHighlight, &RemoveHighlight_Parms, NULL );
	};

	void HighlightWithColor ( struct FLinearColor clr )
	{
		static UFunction* pfnHighlightWithColor = NULL;

		if ( !pfnHighlightWithColor )
			pfnHighlightWithColor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.HighlightWithColor" );

		ACCLobbyController_execHighlightWithColor_Parms HighlightWithColor_Parms;
		memcpy( &HighlightWithColor_Parms.clr, &clr, 0x10 );

		this->ProcessEvent( pfnHighlightWithColor, &HighlightWithColor_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.Destroyed" );

		ACCLobbyController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void tutorial_init ()
	{
		static UFunction* pfntutorial_init = NULL;

		if ( !pfntutorial_init )
			pfntutorial_init = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.tutorial_init" );

		ACCLobbyController_exectutorial_init_Parms tutorial_init_Parms;

		this->ProcessEvent( pfntutorial_init, &tutorial_init_Parms, NULL );
	};

	void onTutorialStatusChanged ( unsigned char EventId, void* InExtendedParams )
	{
		static UFunction* pfnonTutorialStatusChanged = NULL;

		if ( !pfnonTutorialStatusChanged )
			pfnonTutorialStatusChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.onTutorialStatusChanged" );

		ACCLobbyController_execonTutorialStatusChanged_Parms onTutorialStatusChanged_Parms;
		onTutorialStatusChanged_Parms.EventId = EventId;
		onTutorialStatusChanged_Parms.InExtendedParams = InExtendedParams;

		this->ProcessEvent( pfnonTutorialStatusChanged, &onTutorialStatusChanged_Parms, NULL );
	};

	void onTournamentUpdated ( unsigned char EventId, void* InExtendedParams )
	{
		static UFunction* pfnonTournamentUpdated = NULL;

		if ( !pfnonTournamentUpdated )
			pfnonTournamentUpdated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.onTournamentUpdated" );

		ACCLobbyController_execonTournamentUpdated_Parms onTournamentUpdated_Parms;
		onTournamentUpdated_Parms.EventId = EventId;
		onTournamentUpdated_Parms.InExtendedParams = InExtendedParams;

		this->ProcessEvent( pfnonTournamentUpdated, &onTournamentUpdated_Parms, NULL );
	};

	void StartLoadingProcess ( unsigned long bStart )
	{
		static UFunction* pfnStartLoadingProcess = NULL;

		if ( !pfnStartLoadingProcess )
			pfnStartLoadingProcess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.StartLoadingProcess" );

		ACCLobbyController_execStartLoadingProcess_Parms StartLoadingProcess_Parms;
		StartLoadingProcess_Parms.bStart = bStart;

		this->ProcessEvent( pfnStartLoadingProcess, &StartLoadingProcess_Parms, NULL );
	};

	void OnRequestBuyItem ( int TemplateId, int stackId )
	{
		static UFunction* pfnOnRequestBuyItem = NULL;

		if ( !pfnOnRequestBuyItem )
			pfnOnRequestBuyItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnRequestBuyItem" );

		ACCLobbyController_execOnRequestBuyItem_Parms OnRequestBuyItem_Parms;
		OnRequestBuyItem_Parms.TemplateId = TemplateId;
		OnRequestBuyItem_Parms.stackId = stackId;

		this->ProcessEvent( pfnOnRequestBuyItem, &OnRequestBuyItem_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PlayerTick" );

		ACCLobbyController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void SetNewSpeed ( float NewSpeed )
	{
		static UFunction* pfnSetNewSpeed = NULL;

		if ( !pfnSetNewSpeed )
			pfnSetNewSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SetNewSpeed" );

		ACCLobbyController_execSetNewSpeed_Parms SetNewSpeed_Parms;
		SetNewSpeed_Parms.NewSpeed = NewSpeed;

		this->ProcessEvent( pfnSetNewSpeed, &SetNewSpeed_Parms, NULL );
	};

	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.Possess" );

		ACCLobbyController_eventPossess_Parms Possess_Parms;
		Possess_Parms.aPawn = aPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void SetCHPublicAccess ( unsigned long InDoAllow )
	{
		static UFunction* pfnSetCHPublicAccess = NULL;

		if ( !pfnSetCHPublicAccess )
			pfnSetCHPublicAccess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SetCHPublicAccess" );

		ACCLobbyController_execSetCHPublicAccess_Parms SetCHPublicAccess_Parms;
		SetCHPublicAccess_Parms.InDoAllow = InDoAllow;

		this->ProcessEvent( pfnSetCHPublicAccess, &SetCHPublicAccess_Parms, NULL );
	};

	void CmdCraftRoomLeft ()
	{
		static UFunction* pfnCmdCraftRoomLeft = NULL;

		if ( !pfnCmdCraftRoomLeft )
			pfnCmdCraftRoomLeft = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.CmdCraftRoomLeft" );

		ACCLobbyController_execCmdCraftRoomLeft_Parms CmdCraftRoomLeft_Parms;

		pfnCmdCraftRoomLeft->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCmdCraftRoomLeft, &CmdCraftRoomLeft_Parms, NULL );
		pfnCmdCraftRoomLeft->FunctionFlags |= 0x400;
	};

	void CmdCraftRoomEntered ()
	{
		static UFunction* pfnCmdCraftRoomEntered = NULL;

		if ( !pfnCmdCraftRoomEntered )
			pfnCmdCraftRoomEntered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.CmdCraftRoomEntered" );

		ACCLobbyController_execCmdCraftRoomEntered_Parms CmdCraftRoomEntered_Parms;

		pfnCmdCraftRoomEntered->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCmdCraftRoomEntered, &CmdCraftRoomEntered_Parms, NULL );
		pfnCmdCraftRoomEntered->FunctionFlags |= 0x400;
	};

	void LeaveClanHall ()
	{
		static UFunction* pfnLeaveClanHall = NULL;

		if ( !pfnLeaveClanHall )
			pfnLeaveClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.LeaveClanHall" );

		ACCLobbyController_execLeaveClanHall_Parms LeaveClanHall_Parms;

		pfnLeaveClanHall->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLeaveClanHall, &LeaveClanHall_Parms, NULL );
		pfnLeaveClanHall->FunctionFlags |= 0x400;
	};

	void GoToClanHall ( struct FString InClanName )
	{
		static UFunction* pfnGoToClanHall = NULL;

		if ( !pfnGoToClanHall )
			pfnGoToClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.GoToClanHall" );

		ACCLobbyController_execGoToClanHall_Parms GoToClanHall_Parms;
		memcpy( &GoToClanHall_Parms.InClanName, &InClanName, 0xC );

		pfnGoToClanHall->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGoToClanHall, &GoToClanHall_Parms, NULL );
		pfnGoToClanHall->FunctionFlags |= 0x400;
	};

	void GoToMyClanHall ()
	{
		static UFunction* pfnGoToMyClanHall = NULL;

		if ( !pfnGoToMyClanHall )
			pfnGoToMyClanHall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.GoToMyClanHall" );

		ACCLobbyController_execGoToMyClanHall_Parms GoToMyClanHall_Parms;

		pfnGoToMyClanHall->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGoToMyClanHall, &GoToMyClanHall_Parms, NULL );
		pfnGoToMyClanHall->FunctionFlags |= 0x400;
	};

	void GoToInstance ()
	{
		static UFunction* pfnGoToInstance = NULL;

		if ( !pfnGoToInstance )
			pfnGoToInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.GoToInstance" );

		ACCLobbyController_execGoToInstance_Parms GoToInstance_Parms;

		pfnGoToInstance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGoToInstance, &GoToInstance_Parms, NULL );
		pfnGoToInstance->FunctionFlags |= 0x400;
	};

	void ChangeWeapon ( int WeaponNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChangeWeapon = NULL;

		if ( !pfnChangeWeapon )
			pfnChangeWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ChangeWeapon" );

		ACCLobbyController_execChangeWeapon_Parms ChangeWeapon_Parms;
		ChangeWeapon_Parms.WeaponNum = WeaponNum;

		this->ProcessEvent( pfnChangeWeapon, &ChangeWeapon_Parms, NULL );
	};

	void AddSimulatedPlayer ( int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddSimulatedPlayer = NULL;

		if ( !pfnAddSimulatedPlayer )
			pfnAddSimulatedPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.AddSimulatedPlayer" );

		ACCLobbyController_execAddSimulatedPlayer_Parms AddSimulatedPlayer_Parms;
		AddSimulatedPlayer_Parms.Count = Count;

		this->ProcessEvent( pfnAddSimulatedPlayer, &AddSimulatedPlayer_Parms, NULL );
	};

	void OnRBMousePress ()
	{
		static UFunction* pfnOnRBMousePress = NULL;

		if ( !pfnOnRBMousePress )
			pfnOnRBMousePress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnRBMousePress" );

		ACCLobbyController_execOnRBMousePress_Parms OnRBMousePress_Parms;

		this->ProcessEvent( pfnOnRBMousePress, &OnRBMousePress_Parms, NULL );
	};

	void RestoreMtl ( struct FString MtlName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRestoreMtl = NULL;

		if ( !pfnRestoreMtl )
			pfnRestoreMtl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.RestoreMtl" );

		ACCLobbyController_execRestoreMtl_Parms RestoreMtl_Parms;
		memcpy( &RestoreMtl_Parms.MtlName, &MtlName, 0xC );

		this->ProcessEvent( pfnRestoreMtl, &RestoreMtl_Parms, NULL );
	};

	void SetMtl ( struct FString MtlName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetMtl = NULL;

		if ( !pfnSetMtl )
			pfnSetMtl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SetMtl" );

		ACCLobbyController_execSetMtl_Parms SetMtl_Parms;
		memcpy( &SetMtl_Parms.MtlName, &MtlName, 0xC );

		this->ProcessEvent( pfnSetMtl, &SetMtl_Parms, NULL );
	};

	void SpawnTutorial ( struct FString InTitle, struct FString InText )
	{
		static UFunction* pfnSpawnTutorial = NULL;

		if ( !pfnSpawnTutorial )
			pfnSpawnTutorial = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SpawnTutorial" );

		ACCLobbyController_execSpawnTutorial_Parms SpawnTutorial_Parms;
		memcpy( &SpawnTutorial_Parms.InTitle, &InTitle, 0xC );
		memcpy( &SpawnTutorial_Parms.InText, &InText, 0xC );

		this->ProcessEvent( pfnSpawnTutorial, &SpawnTutorial_Parms, NULL );
	};

	void OnLBMousePress ()
	{
		static UFunction* pfnOnLBMousePress = NULL;

		if ( !pfnOnLBMousePress )
			pfnOnLBMousePress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnLBMousePress" );

		ACCLobbyController_execOnLBMousePress_Parms OnLBMousePress_Parms;

		this->ProcessEvent( pfnOnLBMousePress, &OnLBMousePress_Parms, NULL );
	};

	void Ressurect ()
	{
		static UFunction* pfnRessurect = NULL;

		if ( !pfnRessurect )
			pfnRessurect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.Ressurect" );

		ACCLobbyController_execRessurect_Parms Ressurect_Parms;

		this->ProcessEvent( pfnRessurect, &Ressurect_Parms, NULL );
	};

	void Fatality ()
	{
		static UFunction* pfnFatality = NULL;

		if ( !pfnFatality )
			pfnFatality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.Fatality" );

		ACCLobbyController_execFatality_Parms Fatality_Parms;

		this->ProcessEvent( pfnFatality, &Fatality_Parms, NULL );
	};

	void Suicide ()
	{
		static UFunction* pfnSuicide = NULL;

		if ( !pfnSuicide )
			pfnSuicide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.Suicide" );

		ACCLobbyController_execSuicide_Parms Suicide_Parms;

		this->ProcessEvent( pfnSuicide, &Suicide_Parms, NULL );
	};

	void ZoomIn ()
	{
		static UFunction* pfnZoomIn = NULL;

		if ( !pfnZoomIn )
			pfnZoomIn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ZoomIn" );

		ACCLobbyController_execZoomIn_Parms ZoomIn_Parms;

		this->ProcessEvent( pfnZoomIn, &ZoomIn_Parms, NULL );
	};

	void ZoomOut ()
	{
		static UFunction* pfnZoomOut = NULL;

		if ( !pfnZoomOut )
			pfnZoomOut = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ZoomOut" );

		ACCLobbyController_execZoomOut_Parms ZoomOut_Parms;

		this->ProcessEvent( pfnZoomOut, &ZoomOut_Parms, NULL );
	};

	void OnRollingRelease ()
	{
		static UFunction* pfnOnRollingRelease = NULL;

		if ( !pfnOnRollingRelease )
			pfnOnRollingRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnRollingRelease" );

		ACCLobbyController_execOnRollingRelease_Parms OnRollingRelease_Parms;

		this->ProcessEvent( pfnOnRollingRelease, &OnRollingRelease_Parms, NULL );
	};

	void CheckForAdmireFinish ()
	{
		static UFunction* pfnCheckForAdmireFinish = NULL;

		if ( !pfnCheckForAdmireFinish )
			pfnCheckForAdmireFinish = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.CheckForAdmireFinish" );

		ACCLobbyController_execCheckForAdmireFinish_Parms CheckForAdmireFinish_Parms;

		this->ProcessEvent( pfnCheckForAdmireFinish, &CheckForAdmireFinish_Parms, NULL );
	};

	void OnRollingPress ()
	{
		static UFunction* pfnOnRollingPress = NULL;

		if ( !pfnOnRollingPress )
			pfnOnRollingPress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnRollingPress" );

		ACCLobbyController_execOnRollingPress_Parms OnRollingPress_Parms;

		this->ProcessEvent( pfnOnRollingPress, &OnRollingPress_Parms, NULL );
	};

	void OnTabReleased ()
	{
		static UFunction* pfnOnTabReleased = NULL;

		if ( !pfnOnTabReleased )
			pfnOnTabReleased = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnTabReleased" );

		ACCLobbyController_execOnTabReleased_Parms OnTabReleased_Parms;

		this->ProcessEvent( pfnOnTabReleased, &OnTabReleased_Parms, NULL );
	};

	void OnTabPressed ()
	{
		static UFunction* pfnOnTabPressed = NULL;

		if ( !pfnOnTabPressed )
			pfnOnTabPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.OnTabPressed" );

		ACCLobbyController_execOnTabPressed_Parms OnTabPressed_Parms;

		this->ProcessEvent( pfnOnTabPressed, &OnTabPressed_Parms, NULL );
	};

	void ZoomCamera ( float ZoomDir )
	{
		static UFunction* pfnZoomCamera = NULL;

		if ( !pfnZoomCamera )
			pfnZoomCamera = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ZoomCamera" );

		ACCLobbyController_execZoomCamera_Parms ZoomCamera_Parms;
		ZoomCamera_Parms.ZoomDir = ZoomDir;

		this->ProcessEvent( pfnZoomCamera, &ZoomCamera_Parms, NULL );
	};

	void ApplyRotation ( struct FRotator DeltaRotation, float DeltaTime )
	{
		static UFunction* pfnApplyRotation = NULL;

		if ( !pfnApplyRotation )
			pfnApplyRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ApplyRotation" );

		ACCLobbyController_execApplyRotation_Parms ApplyRotation_Parms;
		memcpy( &ApplyRotation_Parms.DeltaRotation, &DeltaRotation, 0xC );
		ApplyRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnApplyRotation, &ApplyRotation_Parms, NULL );
	};

	void ApplyAcceleration ( struct FVector NewAcceleration, float DeltaTime )
	{
		static UFunction* pfnApplyAcceleration = NULL;

		if ( !pfnApplyAcceleration )
			pfnApplyAcceleration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ApplyAcceleration" );

		ACCLobbyController_execApplyAcceleration_Parms ApplyAcceleration_Parms;
		memcpy( &ApplyAcceleration_Parms.NewAcceleration, &NewAcceleration, 0xC );
		ApplyAcceleration_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnApplyAcceleration, &ApplyAcceleration_Parms, NULL );
	};

	void ReplicateMovement ()
	{
		static UFunction* pfnReplicateMovement = NULL;

		if ( !pfnReplicateMovement )
			pfnReplicateMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.ReplicateMovement" );

		ACCLobbyController_execReplicateMovement_Parms ReplicateMovement_Parms;

		pfnReplicateMovement->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReplicateMovement, &ReplicateMovement_Parms, NULL );
		pfnReplicateMovement->FunctionFlags |= 0x400;
	};

	void DetermineAcceleration ( unsigned char MoveDir, struct FVector* out_NewAcceleration )
	{
		static UFunction* pfnDetermineAcceleration = NULL;

		if ( !pfnDetermineAcceleration )
			pfnDetermineAcceleration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.DetermineAcceleration" );

		ACCLobbyController_execDetermineAcceleration_Parms DetermineAcceleration_Parms;
		DetermineAcceleration_Parms.MoveDir = MoveDir;

		pfnDetermineAcceleration->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDetermineAcceleration, &DetermineAcceleration_Parms, NULL );
		pfnDetermineAcceleration->FunctionFlags |= 0x400;

		if ( out_NewAcceleration )
			memcpy( out_NewAcceleration, &DetermineAcceleration_Parms.out_NewAcceleration, 0xC ); // CPF_OutParm
	};

	void AbortSprint ()
	{
		static UFunction* pfnAbortSprint = NULL;

		if ( !pfnAbortSprint )
			pfnAbortSprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.AbortSprint" );

		ACCLobbyController_execAbortSprint_Parms AbortSprint_Parms;

		this->ProcessEvent( pfnAbortSprint, &AbortSprint_Parms, NULL );
	};

	void GoToSprintState ()
	{
		static UFunction* pfnGoToSprintState = NULL;

		if ( !pfnGoToSprintState )
			pfnGoToSprintState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.GoToSprintState" );

		ACCLobbyController_execGoToSprintState_Parms GoToSprintState_Parms;

		this->ProcessEvent( pfnGoToSprintState, &GoToSprintState_Parms, NULL );
	};

	void startsprint ()
	{
		static UFunction* pfnstartsprint = NULL;

		if ( !pfnstartsprint )
			pfnstartsprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.startsprint" );

		ACCLobbyController_execstartsprint_Parms startsprint_Parms;

		this->ProcessEvent( pfnstartsprint, &startsprint_Parms, NULL );
	};

	void SittingProcessMove ( float DeltaTime )
	{
		static UFunction* pfnSittingProcessMove = NULL;

		if ( !pfnSittingProcessMove )
			pfnSittingProcessMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.SittingProcessMove" );

		ACCLobbyController_execSittingProcessMove_Parms SittingProcessMove_Parms;
		SittingProcessMove_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSittingProcessMove, &SittingProcessMove_Parms, NULL );
	};

	void FacePawnRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFacePawnRotation = NULL;

		if ( !pfnFacePawnRotation )
			pfnFacePawnRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.FacePawnRotation" );

		ACCLobbyController_execFacePawnRotation_Parms FacePawnRotation_Parms;
		memcpy( &FacePawnRotation_Parms.NewRotation, &NewRotation, 0xC );
		FacePawnRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFacePawnRotation, &FacePawnRotation_Parms, NULL );
	};

	void PopulationTesterToggleMovement ()
	{
		static UFunction* pfnPopulationTesterToggleMovement = NULL;

		if ( !pfnPopulationTesterToggleMovement )
			pfnPopulationTesterToggleMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PopulationTesterToggleMovement" );

		ACCLobbyController_execPopulationTesterToggleMovement_Parms PopulationTesterToggleMovement_Parms;

		this->ProcessEvent( pfnPopulationTesterToggleMovement, &PopulationTesterToggleMovement_Parms, NULL );
	};

	void PopulateLobby ( int Count, float Density )
	{
		static UFunction* pfnPopulateLobby = NULL;

		if ( !pfnPopulateLobby )
			pfnPopulateLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PopulateLobby" );

		ACCLobbyController_execPopulateLobby_Parms PopulateLobby_Parms;
		PopulateLobby_Parms.Count = Count;
		PopulateLobby_Parms.Density = Density;

		this->ProcessEvent( pfnPopulateLobby, &PopulateLobby_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.PostBeginPlay" );

		ACCLobbyController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void native_AddSimulatedPlayer ( int Count )
	{
		static UFunction* pfnnative_AddSimulatedPlayer = NULL;

		if ( !pfnnative_AddSimulatedPlayer )
			pfnnative_AddSimulatedPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.native_AddSimulatedPlayer" );

		ACCLobbyController_execnative_AddSimulatedPlayer_Parms native_AddSimulatedPlayer_Parms;
		native_AddSimulatedPlayer_Parms.Count = Count;

		pfnnative_AddSimulatedPlayer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnnative_AddSimulatedPlayer, &native_AddSimulatedPlayer_Parms, NULL );
		pfnnative_AddSimulatedPlayer->FunctionFlags |= 0x400;
	};

	void TeleportToInstance ()
	{
		static UFunction* pfnTeleportToInstance = NULL;

		if ( !pfnTeleportToInstance )
			pfnTeleportToInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyController.TeleportToInstance" );

		ACCLobbyController_execTeleportToInstance_Parms TeleportToInstance_Parms;

		pfnTeleportToInstance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTeleportToInstance, &TeleportToInstance_Parms, NULL );
		pfnTeleportToInstance->FunctionFlags |= 0x400;
	};

};

UClass* ACCLobbyController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif