/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCController.h
// Date: 06/16/2011 @ 05:19:41.213
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EABaseYStackType
{
	EABaseYStackType_Default = 0,
	EABaseYStackType_LRMB = 1,
	EABaseYStackType_TriggerAction = 2,
	EABaseYStackType_MAX = 3
};

enum EMoveDirection
{
	EMD_Stay = 0,
	EMD_Forward = 1,
	EMD_ForwardRight = 2,
	EMD_Right = 3,
	EMD_RightBackward = 4,
	EMD_Backward = 5,
	EMD_BackwardLeft = 6,
	EMD_Left = 7,
	EMD_LeftForward = 8,
	EMD_MAX = 9
};

struct ACCController_execTriggerAllSequenceEvents_Parms
{
	class UClass* SeqEventClass;
};

struct ACCController_execVipProgramDoFading_Parms
{
	float Dest;
	float Time;
};// FUNC_Exec

struct ACCController_execVipProgramNotifyGirlFarFromHead_Parms
{
};// FUNC_Exec

struct ACCController_execVipProgramNotifyGirlNearByHead_Parms
{
};// FUNC_Exec

struct ACCController_execVipProgramDisableCameraAnimation_Parms
{
};

struct ACCController_execVipProgramEnableCameraAnimation_Parms
{
};

struct ACCController_execVipProgramPlayCameraAnimation_Parms
{
	struct FName CameraTrackName;
	struct FMatrix OriginTM; // CPF_OutParm
};

struct ACCController_execVipProgramPlayFromHeadCameraAnimation_Parms
{
};

struct ACCController_execVipProgramPlayAnimation_Parms
{
	struct FName SittingActionName;
};

struct ACCController_execVipProgramMakePawnStandUp_Parms
{
};

struct ACCController_execVipProgramMakePawnSitOnTheChair_Parms
{
	void* SitableChair;
};

struct ACCController_execFinishVipStripGirlProgram_Parms
{
};

struct ACCController_execStartVipStripGirlProgram_Parms
{
};

struct ACCController_execOnSitableLogicStartedIdleState_Parms
{
};

struct ACCController_execFinishSittingImmediately_Parms
{
};

struct ACCController_execFinishSittingLatent_Parms
{
};

struct ACCController_execUserFinishSittingLatent_Parms
{
};// FUNC_Exec

struct ACCController_execStartSittingImmediately_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};

struct ACCController_execStartSittingLatent_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};

struct ACCController_execUserStartSittingLatent_Parms
{
	int AnimIndex;
};// FUNC_Exec

struct ACCController_execRemoveFromABaseYStack_Parms
{
	unsigned char Type;
};

struct ACCController_execUpdateRemoveABaseYStack_Parms
{
	unsigned char Type;
};

struct ACCController_execaStrafeImpl_Parms
{
	float Speed;
	unsigned long isDown : 1;
};// FUNC_Exec

struct ACCController_execaBaseYImpl_Parms
{
	float Speed;
	unsigned long isDown : 1;
	unsigned char Type;
};// FUNC_Exec

struct ACCController_execFindAllAndPrint_Parms
{
};// FUNC_Exec

struct ACCController_execGetAnimTreePoolInstance_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCController_execGetStaticGibManagerStore_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCController_execStopScriptProf_Parms
{
	int Client;
};// FUNC_Exec

struct ACCController_execStartScriptProf_Parms
{
	int Client;
};// FUNC_Exec

struct ACCController_execGetWeaponAttachmentPresetStore_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCController_execBlockForChangeMat_Parms
{
};

struct ACCController_execCheckCameraDistance_Parms
{
};

struct ACCController_execGetBuildNumber_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCController_execServerPingUDSManager_Parms
{
	int MessageSize;
	int Count;
};

struct ACCController_execPingUDSManager_Parms
{
	int MessageSize;
	int Count;
};// FUNC_Exec

struct ACCController_execPingAll_Parms
{
	int MessageSize;
	int Count;
};// FUNC_Exec

struct ACCController_execPing_Parms
{
	int MessageSize;
	int Count;
};// FUNC_Exec

struct ACCController_execOnMapReleased_Parms
{
};// FUNC_Exec

struct ACCController_execOnMapPressed_Parms
{
};// FUNC_Exec

struct ACCController_execGetPlayerNameTag_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned long bAssist : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCController_execShowExp_Parms
{
};// FUNC_Exec

struct ACCController_execSetSimpleMeshDrawDistance_Parms
{
	float NewDistance;
};// FUNC_Exec FUNC_Native

struct ACCController_execSetDesignConstant_Parms
{
	struct FString ConstantName;
	struct FString ConstantValue;
};// FUNC_Exec

struct ACCController_execSetInstanceGameTime_Parms
{
	struct FString InstanceName;
	int GameTime;
};// FUNC_Exec

struct ACCController_execSetInstanceWarmupTime_Parms
{
	struct FString InstanceName;
	int WarmupTime;
};// FUNC_Exec

struct ACCController_execSetInstanceMinPlayers_Parms
{
	struct FString InstanceName;
	int MinPlayers;
};// FUNC_Exec

struct ACCController_execGoToLobby_Parms
{
	struct FString LobbyName;
};// FUNC_Exec

struct ACCController_execGainCounter_Parms
{
	int TypeId;
	int Value;
};// FUNC_Exec

struct ACCController_execCancelQuest_Parms
{
	struct FString QuestName;
};// FUNC_Exec

struct ACCController_execGainQuest_Parms
{
	struct FString QuestName;
};// FUNC_Exec

struct ACCController_execCompleteQuest_Parms
{
	struct FString QuestName;
	unsigned long OnlyMark : 1;
};// FUNC_Exec

struct ACCController_execSetPaperdollItemsDurability_Parms
{
	int Durability;
};// FUNC_Exec

struct ACCController_execGainItem_Parms
{
	struct FString ItemName;
};// FUNC_Exec

struct ACCController_execGainCraftAbility_Parms
{
	struct FString AbilityName;
};// FUNC_Exec

struct ACCController_execGainAbility_Parms
{
	struct FString AbilityName;
	int Level;
};// FUNC_Exec

struct ACCController_execGainProfession_Parms
{
	struct FString ProfessionName;
};// FUNC_Exec

struct ACCController_execStartNextTournamentRound_Parms
{
};// FUNC_Exec

struct ACCController_execStopClanWarPairTime_Parms
{
};// FUNC_Exec

struct ACCController_execStartTournament_Parms
{
};// FUNC_Exec

struct ACCController_execGainClanRate_Parms
{
	int Value;
};// FUNC_Exec

struct ACCController_execGainClass_Parms
{
	struct FString Value;
};// FUNC_Exec

struct ACCController_execGainExp_Parms
{
	int Value;
};// FUNC_Exec

struct ACCController_execGainMoney_Parms
{
	int Value;
};// FUNC_Exec

struct ACCController_execGainGold_Parms
{
	int Value;
};// FUNC_Exec

struct ACCController_execGainAP_Parms
{
	int APValue;
};// FUNC_Exec

struct ACCController_execGainProfessionLvl_Parms
{
	int NewLevel;
};// FUNC_Exec

struct ACCController_execGainLvl_Parms
{
	int NewRPGLevel;
};// FUNC_Exec

struct ACCController_execGainGangLvl_Parms
{
	int NewGangLevel;
};// FUNC_Exec

struct ACCController_execGainGang_Parms
{
	struct FString GangName;
	struct FString Description;
	int LogoId;
	int LogoColorId;
};// FUNC_Exec

struct ACCController_execOpenInstance_Parms
{
	struct FString InstanceName;
};// FUNC_Exec

struct ACCController_execSetHiddenEx_Parms
{
	int V;
};// FUNC_Exec

struct ACCController_eventNotifyControllerTakeDamage_Parms
{
	int Id;
};// FUNC_Event

struct ACCController_eventUpdateGroupPresentation_Parms
{
};// FUNC_Event

struct ACCController_execGetClanName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCController_eventGetName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCController_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCController_execClientSetHUD_Parms
{
	class UClass* newHUDType;
	class UClass* newScoringType;
};

struct ACCController_execPlayAnnouncement_Parms
{
	class UClass* InMessageClass;
	unsigned char MessageIndex;
	class UObject* OptionalObject;
	int OptionalData;
};

struct ACCController_eventLimitViewRotation_Parms
{
	struct FRotator ViewRotation;
	float ViewPitchMin;
	float ViewPitchMax;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCController_execProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator DeltaRot;
};

struct ACCController_execServerSetPlayerViewPoint_Parms
{
	struct FVector POVLocation;
	struct FVector POVRotation;
};

struct ACCController_execUpdateServerCameraView_Parms
{
};

struct ACCController_eventGetPlayerViewPoint_Parms
{
	struct FVector POVLocation; // CPF_OutParm
	struct FRotator POVRotation; // CPF_OutParm
};// FUNC_Event

struct ACCController_eventPossess_Parms
{
	class APawn* aPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct ACCController_execClientPossess_Parms
{
};

struct ACCController_execSpawnCamera_Parms
{
};

struct ACCController_execSetViewTarget_Parms
{
	class AActor* NewViewTarget;
	struct FViewTargetTransitionParams TransitionParams;
};

struct ACCController_execGetAllPawnsInSector_Parms
{
	float Radius;
	float Angle;
	TArray< class ACCLobbyRemoteController* > out_Controllers; // CPF_OutParm
};// FUNC_Native

struct ACCController_execLockMovement_Parms
{
	unsigned long bLock : 1;
};

struct ACCController_execDetermineMoveDir_Parms
{
	float Forward;
	float Strafe;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCController_execOnLBMouseRelease_Parms
{
};// FUNC_Exec

struct ACCController_execOnLBMousePress_Parms
{
};// FUNC_Exec

struct ACCController_execFpsMode_Parms
{
	int on;
};// FUNC_Exec

struct ACCController_execGetPoolDebugInfo_Parms
{
};// FUNC_Exec

struct ACCController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCController_execNotifyConnectionError_Parms
{
	struct FString Message;
	struct FString Title;
};

struct ACCController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCController_execSetActiveAbility_Parms
{
	struct FName AbilityName;
};// FUNC_Exec

struct ACCController_execLobbyLoadingFinished_Parms
{
};// FUNC_Exec

struct ACCController_execStripGirlTestFade_Parms
{
	unsigned long bEnable : 1;
};// FUNC_Exec

struct ACCController_execGetBaseDebugInfo_Parms
{
	TArray< struct FString > BaseDebugInfo; // CPF_OutParm
};

struct ACCController_execStripGirlDebug_Parms
{
	int GirlIndex;
};// FUNC_Exec

struct ACCController_execServerSetShowDebugInfo_Parms
{
	unsigned long bNewShowDebugInfo : 1;
};

struct ACCController_execShowDebugInfo_Parms
{
};// FUNC_Exec

struct ACCController_execdi_Parms
{
};// FUNC_Exec

struct ACCController_eventForceClientMessageSTControllerEx_Parms
{
	struct FString S;
	class AActor* SomeActor;
	unsigned long bOnlyToLocal : 1;
};// FUNC_Event

struct ACCController_eventForceClientMessageSTAllEx_Parms
{
	struct FString S;
};// FUNC_Event

struct ACCController_eventForceClientMessageSTEx_Parms
{
	struct FString S;
};// FUNC_Event

struct ACCController_execForceClientMessageSTAll_Parms
{
	struct FString S;
	class AActor* CalledFrom;
};

struct ACCController_execForceClientMessageST_Parms
{
	struct FString S;
	class AActor* CalledFrom;
};

struct ACCController_eventForceClientMessage_Parms
{
	struct FString S;
	struct FName Type;
	float MsgLifeTime;
};// FUNC_Event

struct ACCController_eventClientMessage_Parms
{
	struct FString S;
	struct FName Type;
	float MsgLifeTime;
};// FUNC_Event

struct ACCController_execTurnClientMessages_Parms
{
};// FUNC_Exec

struct ACCController_execTurnClientMessagesOff_Parms
{
};// FUNC_Exec

struct ACCController_execTurnClientMessagesOn_Parms
{
};// FUNC_Exec

struct ACCController_execSetVals_Parms
{
};

// (0x64C - 0x774)
class ACCController : public ACCBaseController
{
public:
	int                                                YakaNetworkID;                               // 0x064C (0x0004)
	unsigned long                                      bMovementLocked : 1;                         // 0x0650 (0x0004) [0x00000001]
	unsigned long                                      AllowClientMessages : 1;                     // 0x0650 (0x0004) [0x00000002]
	unsigned long                                      bBlockForChangeMat : 1;                      // 0x0650 (0x0004) [0x00000004]
	unsigned long                                      bShowDebugInfo : 1;                          // 0x0650 (0x0004) [0x00000008]
	unsigned long                                      VipProgramCameraAnimationEnabled : 1;        // 0x0650 (0x0004) [0x00000010]
	unsigned long                                      VipGirlNearByHead : 1;                       // 0x0650 (0x0004) [0x00000020]
	float                                              LastCameraTimeStamp;                         // 0x0654 (0x0004)
	class UClass*                                      MatineeCameraClass;                          // 0x0658 (0x0004)
	void*                                              EffectsManager;                              // 0x065C (0x0004)
	class AActor*                                      CalcViewActor;                               // 0x0660 (0x0004)
	struct FVector                                     CalcViewActorLocation;                       // 0x0664 (0x000C)
	struct FVector                                     CalcViewLocation;                            // 0x0670 (0x000C)
	struct FRotator                                    CalcViewRotation;                            // 0x067C (0x000C)
	void*                                              Announcer;                                   // 0x0688 (0x0004)
	unsigned char                                      bAim;                                        // 0x068C (0x0001)
	unsigned char                                      bSprint;                                     // 0x068D (0x0001)
	unsigned char                                      bWalk;                                       // 0x068E (0x0001)
	unsigned char                                      bCrouch;                                     // 0x068F (0x0001)
	unsigned char                                      bRolling;                                    // 0x0690 (0x0001)
	struct FName                                       ActiveAbilityName;                           // 0x0694 (0x0008)
	int                                                CamCheckCurrTicks;                           // 0x069C (0x0004)
	int                                                CamCheckNumOfTicks;                          // 0x06A0 (0x0004)
	float                                              CamCheckSelfCamDist;                         // 0x06A4 (0x0004)
	float                                              CamCheckOtherCamDist;                        // 0x06A8 (0x0004)
	struct FString                                     BuildNumber;                                 // 0x06AC (0x000C)
	float                                              aStrafe;                                     // 0x06B8 (0x0004)
	TArray< float >                                    aStrafeStack;                                // 0x06BC (0x000C)
	float                                              aBaseY;                                      // 0x06C8 (0x0004)
	TArray< struct FaBaseYStackData >                  aBaseYStack;                                 // 0x06CC (0x000C)
	void*                                              WeaponAttachmentPresetStore;                 // 0x06D8 (0x0004)
	void*                                              StaticGibManagerStore;                       // 0x06DC (0x0004)
	void*                                              AnimTreePool;                                // 0x06E0 (0x0004)
	struct FScriptDelegate                             SetGlobalVals;                               // 0x06E4 (0x000C)
	struct FScriptDelegate                             SetHPVals;                                   // 0x06F0 (0x000C)
	struct FScriptDelegate                             SetStmVals;                                  // 0x06FC (0x000C)
	struct FScriptDelegate                             SetSpdVals;                                  // 0x0708 (0x000C)
	struct FScriptDelegate                             SetSttVals;                                  // 0x0714 (0x000C)
	struct FScriptDelegate                             SetWpnVals;                                  // 0x0720 (0x000C)
	struct FScriptDelegate                             SetBsbVals;                                  // 0x072C (0x000C)
	struct FScriptDelegate                             SetWdtVals;                                  // 0x0738 (0x000C)
	struct FScriptDelegate                             SetAbeVals;                                  // 0x0744 (0x000C)
	struct FScriptDelegate                             SetCamRecVals;                               // 0x0750 (0x000C)
	struct FScriptDelegate                             SetDamModifVals;                             // 0x075C (0x000C)
	struct FScriptDelegate                             __SetVals__Delegate;                         // 0x0768 (0x000C)

	// VIPSittingLogic
	// SittingLogic

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCController" );

		return ClassPointer;
	};

public:
	void TriggerAllSequenceEvents ( class UClass* SeqEventClass )
	{
		static UFunction* pfnTriggerAllSequenceEvents = NULL;

		if ( !pfnTriggerAllSequenceEvents )
			pfnTriggerAllSequenceEvents = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.TriggerAllSequenceEvents" );

		ACCController_execTriggerAllSequenceEvents_Parms TriggerAllSequenceEvents_Parms;
		TriggerAllSequenceEvents_Parms.SeqEventClass = SeqEventClass;

		this->ProcessEvent( pfnTriggerAllSequenceEvents, &TriggerAllSequenceEvents_Parms, NULL );
	};

	void VipProgramDoFading ( float Dest, float Time )
	{
		static UFunction* pfnVipProgramDoFading = NULL;

		if ( !pfnVipProgramDoFading )
			pfnVipProgramDoFading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramDoFading" );

		ACCController_execVipProgramDoFading_Parms VipProgramDoFading_Parms;
		VipProgramDoFading_Parms.Dest = Dest;
		VipProgramDoFading_Parms.Time = Time;

		this->ProcessEvent( pfnVipProgramDoFading, &VipProgramDoFading_Parms, NULL );
	};

	void VipProgramNotifyGirlFarFromHead ()
	{
		static UFunction* pfnVipProgramNotifyGirlFarFromHead = NULL;

		if ( !pfnVipProgramNotifyGirlFarFromHead )
			pfnVipProgramNotifyGirlFarFromHead = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramNotifyGirlFarFromHead" );

		ACCController_execVipProgramNotifyGirlFarFromHead_Parms VipProgramNotifyGirlFarFromHead_Parms;

		this->ProcessEvent( pfnVipProgramNotifyGirlFarFromHead, &VipProgramNotifyGirlFarFromHead_Parms, NULL );
	};

	void VipProgramNotifyGirlNearByHead ()
	{
		static UFunction* pfnVipProgramNotifyGirlNearByHead = NULL;

		if ( !pfnVipProgramNotifyGirlNearByHead )
			pfnVipProgramNotifyGirlNearByHead = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramNotifyGirlNearByHead" );

		ACCController_execVipProgramNotifyGirlNearByHead_Parms VipProgramNotifyGirlNearByHead_Parms;

		this->ProcessEvent( pfnVipProgramNotifyGirlNearByHead, &VipProgramNotifyGirlNearByHead_Parms, NULL );
	};

	void VipProgramDisableCameraAnimation ()
	{
		static UFunction* pfnVipProgramDisableCameraAnimation = NULL;

		if ( !pfnVipProgramDisableCameraAnimation )
			pfnVipProgramDisableCameraAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramDisableCameraAnimation" );

		ACCController_execVipProgramDisableCameraAnimation_Parms VipProgramDisableCameraAnimation_Parms;

		this->ProcessEvent( pfnVipProgramDisableCameraAnimation, &VipProgramDisableCameraAnimation_Parms, NULL );
	};

	void VipProgramEnableCameraAnimation ()
	{
		static UFunction* pfnVipProgramEnableCameraAnimation = NULL;

		if ( !pfnVipProgramEnableCameraAnimation )
			pfnVipProgramEnableCameraAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramEnableCameraAnimation" );

		ACCController_execVipProgramEnableCameraAnimation_Parms VipProgramEnableCameraAnimation_Parms;

		this->ProcessEvent( pfnVipProgramEnableCameraAnimation, &VipProgramEnableCameraAnimation_Parms, NULL );
	};

	void VipProgramPlayCameraAnimation ( struct FName CameraTrackName, struct FMatrix* OriginTM )
	{
		static UFunction* pfnVipProgramPlayCameraAnimation = NULL;

		if ( !pfnVipProgramPlayCameraAnimation )
			pfnVipProgramPlayCameraAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramPlayCameraAnimation" );

		ACCController_execVipProgramPlayCameraAnimation_Parms VipProgramPlayCameraAnimation_Parms;
		memcpy( &VipProgramPlayCameraAnimation_Parms.CameraTrackName, &CameraTrackName, 0x8 );

		this->ProcessEvent( pfnVipProgramPlayCameraAnimation, &VipProgramPlayCameraAnimation_Parms, NULL );

		if ( OriginTM )
			memcpy( OriginTM, &VipProgramPlayCameraAnimation_Parms.OriginTM, 0x40 ); // CPF_OutParm
	};

	void VipProgramPlayFromHeadCameraAnimation ()
	{
		static UFunction* pfnVipProgramPlayFromHeadCameraAnimation = NULL;

		if ( !pfnVipProgramPlayFromHeadCameraAnimation )
			pfnVipProgramPlayFromHeadCameraAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramPlayFromHeadCameraAnimation" );

		ACCController_execVipProgramPlayFromHeadCameraAnimation_Parms VipProgramPlayFromHeadCameraAnimation_Parms;

		this->ProcessEvent( pfnVipProgramPlayFromHeadCameraAnimation, &VipProgramPlayFromHeadCameraAnimation_Parms, NULL );
	};

	void VipProgramPlayAnimation ( struct FName SittingActionName )
	{
		static UFunction* pfnVipProgramPlayAnimation = NULL;

		if ( !pfnVipProgramPlayAnimation )
			pfnVipProgramPlayAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramPlayAnimation" );

		ACCController_execVipProgramPlayAnimation_Parms VipProgramPlayAnimation_Parms;
		memcpy( &VipProgramPlayAnimation_Parms.SittingActionName, &SittingActionName, 0x8 );

		this->ProcessEvent( pfnVipProgramPlayAnimation, &VipProgramPlayAnimation_Parms, NULL );
	};

	void VipProgramMakePawnStandUp ()
	{
		static UFunction* pfnVipProgramMakePawnStandUp = NULL;

		if ( !pfnVipProgramMakePawnStandUp )
			pfnVipProgramMakePawnStandUp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramMakePawnStandUp" );

		ACCController_execVipProgramMakePawnStandUp_Parms VipProgramMakePawnStandUp_Parms;

		this->ProcessEvent( pfnVipProgramMakePawnStandUp, &VipProgramMakePawnStandUp_Parms, NULL );
	};

	void VipProgramMakePawnSitOnTheChair ( void* SitableChair )
	{
		static UFunction* pfnVipProgramMakePawnSitOnTheChair = NULL;

		if ( !pfnVipProgramMakePawnSitOnTheChair )
			pfnVipProgramMakePawnSitOnTheChair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.VipProgramMakePawnSitOnTheChair" );

		ACCController_execVipProgramMakePawnSitOnTheChair_Parms VipProgramMakePawnSitOnTheChair_Parms;
		VipProgramMakePawnSitOnTheChair_Parms.SitableChair = SitableChair;

		this->ProcessEvent( pfnVipProgramMakePawnSitOnTheChair, &VipProgramMakePawnSitOnTheChair_Parms, NULL );
	};

	void FinishVipStripGirlProgram ()
	{
		static UFunction* pfnFinishVipStripGirlProgram = NULL;

		if ( !pfnFinishVipStripGirlProgram )
			pfnFinishVipStripGirlProgram = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.FinishVipStripGirlProgram" );

		ACCController_execFinishVipStripGirlProgram_Parms FinishVipStripGirlProgram_Parms;

		this->ProcessEvent( pfnFinishVipStripGirlProgram, &FinishVipStripGirlProgram_Parms, NULL );
	};

	void StartVipStripGirlProgram ()
	{
		static UFunction* pfnStartVipStripGirlProgram = NULL;

		if ( !pfnStartVipStripGirlProgram )
			pfnStartVipStripGirlProgram = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartVipStripGirlProgram" );

		ACCController_execStartVipStripGirlProgram_Parms StartVipStripGirlProgram_Parms;

		this->ProcessEvent( pfnStartVipStripGirlProgram, &StartVipStripGirlProgram_Parms, NULL );
	};

	void OnSitableLogicStartedIdleState ()
	{
		static UFunction* pfnOnSitableLogicStartedIdleState = NULL;

		if ( !pfnOnSitableLogicStartedIdleState )
			pfnOnSitableLogicStartedIdleState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OnSitableLogicStartedIdleState" );

		ACCController_execOnSitableLogicStartedIdleState_Parms OnSitableLogicStartedIdleState_Parms;

		this->ProcessEvent( pfnOnSitableLogicStartedIdleState, &OnSitableLogicStartedIdleState_Parms, NULL );
	};

	void FinishSittingImmediately ()
	{
		static UFunction* pfnFinishSittingImmediately = NULL;

		if ( !pfnFinishSittingImmediately )
			pfnFinishSittingImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.FinishSittingImmediately" );

		ACCController_execFinishSittingImmediately_Parms FinishSittingImmediately_Parms;

		this->ProcessEvent( pfnFinishSittingImmediately, &FinishSittingImmediately_Parms, NULL );
	};

	void FinishSittingLatent ()
	{
		static UFunction* pfnFinishSittingLatent = NULL;

		if ( !pfnFinishSittingLatent )
			pfnFinishSittingLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.FinishSittingLatent" );

		ACCController_execFinishSittingLatent_Parms FinishSittingLatent_Parms;

		this->ProcessEvent( pfnFinishSittingLatent, &FinishSittingLatent_Parms, NULL );
	};

	void UserFinishSittingLatent ()
	{
		static UFunction* pfnUserFinishSittingLatent = NULL;

		if ( !pfnUserFinishSittingLatent )
			pfnUserFinishSittingLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.UserFinishSittingLatent" );

		ACCController_execUserFinishSittingLatent_Parms UserFinishSittingLatent_Parms;

		this->ProcessEvent( pfnUserFinishSittingLatent, &UserFinishSittingLatent_Parms, NULL );
	};

	void StartSittingImmediately ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnStartSittingImmediately = NULL;

		if ( !pfnStartSittingImmediately )
			pfnStartSittingImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartSittingImmediately" );

		ACCController_execStartSittingImmediately_Parms StartSittingImmediately_Parms;
		StartSittingImmediately_Parms.SitableActor = SitableActor;
		StartSittingImmediately_Parms.SitdownType = SitdownType;
		StartSittingImmediately_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnStartSittingImmediately, &StartSittingImmediately_Parms, NULL );
	};

	void StartSittingLatent ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnStartSittingLatent = NULL;

		if ( !pfnStartSittingLatent )
			pfnStartSittingLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartSittingLatent" );

		ACCController_execStartSittingLatent_Parms StartSittingLatent_Parms;
		StartSittingLatent_Parms.SitableActor = SitableActor;
		StartSittingLatent_Parms.SitdownType = SitdownType;
		StartSittingLatent_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnStartSittingLatent, &StartSittingLatent_Parms, NULL );
	};

	void UserStartSittingLatent ( int AnimIndex )
	{
		static UFunction* pfnUserStartSittingLatent = NULL;

		if ( !pfnUserStartSittingLatent )
			pfnUserStartSittingLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.UserStartSittingLatent" );

		ACCController_execUserStartSittingLatent_Parms UserStartSittingLatent_Parms;
		UserStartSittingLatent_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnUserStartSittingLatent, &UserStartSittingLatent_Parms, NULL );
	};

	void RemoveFromABaseYStack ( unsigned char Type )
	{
		static UFunction* pfnRemoveFromABaseYStack = NULL;

		if ( !pfnRemoveFromABaseYStack )
			pfnRemoveFromABaseYStack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.RemoveFromABaseYStack" );

		ACCController_execRemoveFromABaseYStack_Parms RemoveFromABaseYStack_Parms;
		RemoveFromABaseYStack_Parms.Type = Type;

		this->ProcessEvent( pfnRemoveFromABaseYStack, &RemoveFromABaseYStack_Parms, NULL );
	};

	void UpdateRemoveABaseYStack ( unsigned char Type )
	{
		static UFunction* pfnUpdateRemoveABaseYStack = NULL;

		if ( !pfnUpdateRemoveABaseYStack )
			pfnUpdateRemoveABaseYStack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.UpdateRemoveABaseYStack" );

		ACCController_execUpdateRemoveABaseYStack_Parms UpdateRemoveABaseYStack_Parms;
		UpdateRemoveABaseYStack_Parms.Type = Type;

		this->ProcessEvent( pfnUpdateRemoveABaseYStack, &UpdateRemoveABaseYStack_Parms, NULL );
	};

	void aStrafeImpl ( float Speed, unsigned long isDown )
	{
		static UFunction* pfnaStrafeImpl = NULL;

		if ( !pfnaStrafeImpl )
			pfnaStrafeImpl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.aStrafeImpl" );

		ACCController_execaStrafeImpl_Parms aStrafeImpl_Parms;
		aStrafeImpl_Parms.Speed = Speed;
		aStrafeImpl_Parms.isDown = isDown;

		this->ProcessEvent( pfnaStrafeImpl, &aStrafeImpl_Parms, NULL );
	};

	void aBaseYImpl ( float Speed, unsigned long isDown, unsigned char Type/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnaBaseYImpl = NULL;

		if ( !pfnaBaseYImpl )
			pfnaBaseYImpl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.aBaseYImpl" );

		ACCController_execaBaseYImpl_Parms aBaseYImpl_Parms;
		aBaseYImpl_Parms.Speed = Speed;
		aBaseYImpl_Parms.isDown = isDown;
		aBaseYImpl_Parms.Type = Type;

		this->ProcessEvent( pfnaBaseYImpl, &aBaseYImpl_Parms, NULL );
	};

	void FindAllAndPrint ()
	{
		static UFunction* pfnFindAllAndPrint = NULL;

		if ( !pfnFindAllAndPrint )
			pfnFindAllAndPrint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.FindAllAndPrint" );

		ACCController_execFindAllAndPrint_Parms FindAllAndPrint_Parms;

		this->ProcessEvent( pfnFindAllAndPrint, &FindAllAndPrint_Parms, NULL );
	};

	void* GetAnimTreePoolInstance ()
	{
		static UFunction* pfnGetAnimTreePoolInstance = NULL;

		if ( !pfnGetAnimTreePoolInstance )
			pfnGetAnimTreePoolInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetAnimTreePoolInstance" );

		ACCController_execGetAnimTreePoolInstance_Parms GetAnimTreePoolInstance_Parms;

		this->ProcessEvent( pfnGetAnimTreePoolInstance, &GetAnimTreePoolInstance_Parms, NULL );

		return GetAnimTreePoolInstance_Parms.ReturnValue;
	};

	void* GetStaticGibManagerStore ()
	{
		static UFunction* pfnGetStaticGibManagerStore = NULL;

		if ( !pfnGetStaticGibManagerStore )
			pfnGetStaticGibManagerStore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetStaticGibManagerStore" );

		ACCController_execGetStaticGibManagerStore_Parms GetStaticGibManagerStore_Parms;

		this->ProcessEvent( pfnGetStaticGibManagerStore, &GetStaticGibManagerStore_Parms, NULL );

		return GetStaticGibManagerStore_Parms.ReturnValue;
	};

	void StopScriptProf ( int Client/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStopScriptProf = NULL;

		if ( !pfnStopScriptProf )
			pfnStopScriptProf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StopScriptProf" );

		ACCController_execStopScriptProf_Parms StopScriptProf_Parms;
		StopScriptProf_Parms.Client = Client;

		this->ProcessEvent( pfnStopScriptProf, &StopScriptProf_Parms, NULL );
	};

	void StartScriptProf ( int Client/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStartScriptProf = NULL;

		if ( !pfnStartScriptProf )
			pfnStartScriptProf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartScriptProf" );

		ACCController_execStartScriptProf_Parms StartScriptProf_Parms;
		StartScriptProf_Parms.Client = Client;

		this->ProcessEvent( pfnStartScriptProf, &StartScriptProf_Parms, NULL );
	};

	void* GetWeaponAttachmentPresetStore ()
	{
		static UFunction* pfnGetWeaponAttachmentPresetStore = NULL;

		if ( !pfnGetWeaponAttachmentPresetStore )
			pfnGetWeaponAttachmentPresetStore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetWeaponAttachmentPresetStore" );

		ACCController_execGetWeaponAttachmentPresetStore_Parms GetWeaponAttachmentPresetStore_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentPresetStore, &GetWeaponAttachmentPresetStore_Parms, NULL );

		return GetWeaponAttachmentPresetStore_Parms.ReturnValue;
	};

	void BlockForChangeMat ()
	{
		static UFunction* pfnBlockForChangeMat = NULL;

		if ( !pfnBlockForChangeMat )
			pfnBlockForChangeMat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.BlockForChangeMat" );

		ACCController_execBlockForChangeMat_Parms BlockForChangeMat_Parms;

		this->ProcessEvent( pfnBlockForChangeMat, &BlockForChangeMat_Parms, NULL );
	};

	void CheckCameraDistance ()
	{
		static UFunction* pfnCheckCameraDistance = NULL;

		if ( !pfnCheckCameraDistance )
			pfnCheckCameraDistance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.CheckCameraDistance" );

		ACCController_execCheckCameraDistance_Parms CheckCameraDistance_Parms;

		this->ProcessEvent( pfnCheckCameraDistance, &CheckCameraDistance_Parms, NULL );
	};

	struct FString GetBuildNumber ()
	{
		static UFunction* pfnGetBuildNumber = NULL;

		if ( !pfnGetBuildNumber )
			pfnGetBuildNumber = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetBuildNumber" );

		ACCController_execGetBuildNumber_Parms GetBuildNumber_Parms;

		pfnGetBuildNumber->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBuildNumber, &GetBuildNumber_Parms, NULL );
		pfnGetBuildNumber->FunctionFlags |= 0x400;

		return GetBuildNumber_Parms.ReturnValue;
	};

	void ServerPingUDSManager ( int MessageSize, int Count )
	{
		static UFunction* pfnServerPingUDSManager = NULL;

		if ( !pfnServerPingUDSManager )
			pfnServerPingUDSManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ServerPingUDSManager" );

		ACCController_execServerPingUDSManager_Parms ServerPingUDSManager_Parms;
		ServerPingUDSManager_Parms.MessageSize = MessageSize;
		ServerPingUDSManager_Parms.Count = Count;

		this->ProcessEvent( pfnServerPingUDSManager, &ServerPingUDSManager_Parms, NULL );
	};

	void PingUDSManager ( int MessageSize/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPingUDSManager = NULL;

		if ( !pfnPingUDSManager )
			pfnPingUDSManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.PingUDSManager" );

		ACCController_execPingUDSManager_Parms PingUDSManager_Parms;
		PingUDSManager_Parms.MessageSize = MessageSize;
		PingUDSManager_Parms.Count = Count;

		this->ProcessEvent( pfnPingUDSManager, &PingUDSManager_Parms, NULL );
	};

	void PingAll ( int MessageSize/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPingAll = NULL;

		if ( !pfnPingAll )
			pfnPingAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.PingAll" );

		ACCController_execPingAll_Parms PingAll_Parms;
		PingAll_Parms.MessageSize = MessageSize;
		PingAll_Parms.Count = Count;

		this->ProcessEvent( pfnPingAll, &PingAll_Parms, NULL );
	};

	void Ping ( int MessageSize/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPing = NULL;

		if ( !pfnPing )
			pfnPing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.Ping" );

		ACCController_execPing_Parms Ping_Parms;
		Ping_Parms.MessageSize = MessageSize;
		Ping_Parms.Count = Count;

		this->ProcessEvent( pfnPing, &Ping_Parms, NULL );
	};

	void OnMapReleased ()
	{
		static UFunction* pfnOnMapReleased = NULL;

		if ( !pfnOnMapReleased )
			pfnOnMapReleased = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OnMapReleased" );

		ACCController_execOnMapReleased_Parms OnMapReleased_Parms;

		this->ProcessEvent( pfnOnMapReleased, &OnMapReleased_Parms, NULL );
	};

	void OnMapPressed ()
	{
		static UFunction* pfnOnMapPressed = NULL;

		if ( !pfnOnMapPressed )
			pfnOnMapPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OnMapPressed" );

		ACCController_execOnMapPressed_Parms OnMapPressed_Parms;

		this->ProcessEvent( pfnOnMapPressed, &OnMapPressed_Parms, NULL );
	};

	struct FString GetPlayerNameTag ( class APlayerReplicationInfo* PRI, unsigned long bAssist/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetPlayerNameTag = NULL;

		if ( !pfnGetPlayerNameTag )
			pfnGetPlayerNameTag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetPlayerNameTag" );

		ACCController_execGetPlayerNameTag_Parms GetPlayerNameTag_Parms;
		GetPlayerNameTag_Parms.PRI = PRI;
		GetPlayerNameTag_Parms.bAssist = bAssist;

		this->ProcessEvent( pfnGetPlayerNameTag, &GetPlayerNameTag_Parms, NULL );

		return GetPlayerNameTag_Parms.ReturnValue;
	};

	void ShowExp ()
	{
		static UFunction* pfnShowExp = NULL;

		if ( !pfnShowExp )
			pfnShowExp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ShowExp" );

		ACCController_execShowExp_Parms ShowExp_Parms;

		this->ProcessEvent( pfnShowExp, &ShowExp_Parms, NULL );
	};

	void SetSimpleMeshDrawDistance ( float NewDistance )
	{
		static UFunction* pfnSetSimpleMeshDrawDistance = NULL;

		if ( !pfnSetSimpleMeshDrawDistance )
			pfnSetSimpleMeshDrawDistance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetSimpleMeshDrawDistance" );

		ACCController_execSetSimpleMeshDrawDistance_Parms SetSimpleMeshDrawDistance_Parms;
		SetSimpleMeshDrawDistance_Parms.NewDistance = NewDistance;

		pfnSetSimpleMeshDrawDistance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetSimpleMeshDrawDistance, &SetSimpleMeshDrawDistance_Parms, NULL );
		pfnSetSimpleMeshDrawDistance->FunctionFlags |= 0x400;
	};

	void SetDesignConstant ( struct FString ConstantName, struct FString ConstantValue )
	{
		static UFunction* pfnSetDesignConstant = NULL;

		if ( !pfnSetDesignConstant )
			pfnSetDesignConstant = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetDesignConstant" );

		ACCController_execSetDesignConstant_Parms SetDesignConstant_Parms;
		memcpy( &SetDesignConstant_Parms.ConstantName, &ConstantName, 0xC );
		memcpy( &SetDesignConstant_Parms.ConstantValue, &ConstantValue, 0xC );

		this->ProcessEvent( pfnSetDesignConstant, &SetDesignConstant_Parms, NULL );
	};

	void SetInstanceGameTime ( struct FString InstanceName, int GameTime )
	{
		static UFunction* pfnSetInstanceGameTime = NULL;

		if ( !pfnSetInstanceGameTime )
			pfnSetInstanceGameTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetInstanceGameTime" );

		ACCController_execSetInstanceGameTime_Parms SetInstanceGameTime_Parms;
		memcpy( &SetInstanceGameTime_Parms.InstanceName, &InstanceName, 0xC );
		SetInstanceGameTime_Parms.GameTime = GameTime;

		this->ProcessEvent( pfnSetInstanceGameTime, &SetInstanceGameTime_Parms, NULL );
	};

	void SetInstanceWarmupTime ( struct FString InstanceName, int WarmupTime )
	{
		static UFunction* pfnSetInstanceWarmupTime = NULL;

		if ( !pfnSetInstanceWarmupTime )
			pfnSetInstanceWarmupTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetInstanceWarmupTime" );

		ACCController_execSetInstanceWarmupTime_Parms SetInstanceWarmupTime_Parms;
		memcpy( &SetInstanceWarmupTime_Parms.InstanceName, &InstanceName, 0xC );
		SetInstanceWarmupTime_Parms.WarmupTime = WarmupTime;

		this->ProcessEvent( pfnSetInstanceWarmupTime, &SetInstanceWarmupTime_Parms, NULL );
	};

	void SetInstanceMinPlayers ( struct FString InstanceName, int MinPlayers )
	{
		static UFunction* pfnSetInstanceMinPlayers = NULL;

		if ( !pfnSetInstanceMinPlayers )
			pfnSetInstanceMinPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetInstanceMinPlayers" );

		ACCController_execSetInstanceMinPlayers_Parms SetInstanceMinPlayers_Parms;
		memcpy( &SetInstanceMinPlayers_Parms.InstanceName, &InstanceName, 0xC );
		SetInstanceMinPlayers_Parms.MinPlayers = MinPlayers;

		this->ProcessEvent( pfnSetInstanceMinPlayers, &SetInstanceMinPlayers_Parms, NULL );
	};

	void GoToLobby ( struct FString LobbyName )
	{
		static UFunction* pfnGoToLobby = NULL;

		if ( !pfnGoToLobby )
			pfnGoToLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GoToLobby" );

		ACCController_execGoToLobby_Parms GoToLobby_Parms;
		memcpy( &GoToLobby_Parms.LobbyName, &LobbyName, 0xC );

		this->ProcessEvent( pfnGoToLobby, &GoToLobby_Parms, NULL );
	};

	void GainCounter ( int TypeId, int Value )
	{
		static UFunction* pfnGainCounter = NULL;

		if ( !pfnGainCounter )
			pfnGainCounter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainCounter" );

		ACCController_execGainCounter_Parms GainCounter_Parms;
		GainCounter_Parms.TypeId = TypeId;
		GainCounter_Parms.Value = Value;

		this->ProcessEvent( pfnGainCounter, &GainCounter_Parms, NULL );
	};

	void CancelQuest ( struct FString QuestName )
	{
		static UFunction* pfnCancelQuest = NULL;

		if ( !pfnCancelQuest )
			pfnCancelQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.CancelQuest" );

		ACCController_execCancelQuest_Parms CancelQuest_Parms;
		memcpy( &CancelQuest_Parms.QuestName, &QuestName, 0xC );

		this->ProcessEvent( pfnCancelQuest, &CancelQuest_Parms, NULL );
	};

	void GainQuest ( struct FString QuestName )
	{
		static UFunction* pfnGainQuest = NULL;

		if ( !pfnGainQuest )
			pfnGainQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainQuest" );

		ACCController_execGainQuest_Parms GainQuest_Parms;
		memcpy( &GainQuest_Parms.QuestName, &QuestName, 0xC );

		this->ProcessEvent( pfnGainQuest, &GainQuest_Parms, NULL );
	};

	void CompleteQuest ( struct FString QuestName, unsigned long OnlyMark )
	{
		static UFunction* pfnCompleteQuest = NULL;

		if ( !pfnCompleteQuest )
			pfnCompleteQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.CompleteQuest" );

		ACCController_execCompleteQuest_Parms CompleteQuest_Parms;
		memcpy( &CompleteQuest_Parms.QuestName, &QuestName, 0xC );
		CompleteQuest_Parms.OnlyMark = OnlyMark;

		this->ProcessEvent( pfnCompleteQuest, &CompleteQuest_Parms, NULL );
	};

	void SetPaperdollItemsDurability ( int Durability/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetPaperdollItemsDurability = NULL;

		if ( !pfnSetPaperdollItemsDurability )
			pfnSetPaperdollItemsDurability = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetPaperdollItemsDurability" );

		ACCController_execSetPaperdollItemsDurability_Parms SetPaperdollItemsDurability_Parms;
		SetPaperdollItemsDurability_Parms.Durability = Durability;

		this->ProcessEvent( pfnSetPaperdollItemsDurability, &SetPaperdollItemsDurability_Parms, NULL );
	};

	void GainItem ( struct FString ItemName )
	{
		static UFunction* pfnGainItem = NULL;

		if ( !pfnGainItem )
			pfnGainItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainItem" );

		ACCController_execGainItem_Parms GainItem_Parms;
		memcpy( &GainItem_Parms.ItemName, &ItemName, 0xC );

		this->ProcessEvent( pfnGainItem, &GainItem_Parms, NULL );
	};

	void GainCraftAbility ( struct FString AbilityName )
	{
		static UFunction* pfnGainCraftAbility = NULL;

		if ( !pfnGainCraftAbility )
			pfnGainCraftAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainCraftAbility" );

		ACCController_execGainCraftAbility_Parms GainCraftAbility_Parms;
		memcpy( &GainCraftAbility_Parms.AbilityName, &AbilityName, 0xC );

		this->ProcessEvent( pfnGainCraftAbility, &GainCraftAbility_Parms, NULL );
	};

	void GainAbility ( struct FString AbilityName, int Level/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainAbility = NULL;

		if ( !pfnGainAbility )
			pfnGainAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainAbility" );

		ACCController_execGainAbility_Parms GainAbility_Parms;
		memcpy( &GainAbility_Parms.AbilityName, &AbilityName, 0xC );
		GainAbility_Parms.Level = Level;

		this->ProcessEvent( pfnGainAbility, &GainAbility_Parms, NULL );
	};

	void GainProfession ( struct FString ProfessionName )
	{
		static UFunction* pfnGainProfession = NULL;

		if ( !pfnGainProfession )
			pfnGainProfession = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainProfession" );

		ACCController_execGainProfession_Parms GainProfession_Parms;
		memcpy( &GainProfession_Parms.ProfessionName, &ProfessionName, 0xC );

		this->ProcessEvent( pfnGainProfession, &GainProfession_Parms, NULL );
	};

	void StartNextTournamentRound ()
	{
		static UFunction* pfnStartNextTournamentRound = NULL;

		if ( !pfnStartNextTournamentRound )
			pfnStartNextTournamentRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartNextTournamentRound" );

		ACCController_execStartNextTournamentRound_Parms StartNextTournamentRound_Parms;

		this->ProcessEvent( pfnStartNextTournamentRound, &StartNextTournamentRound_Parms, NULL );
	};

	void StopClanWarPairTime ()
	{
		static UFunction* pfnStopClanWarPairTime = NULL;

		if ( !pfnStopClanWarPairTime )
			pfnStopClanWarPairTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StopClanWarPairTime" );

		ACCController_execStopClanWarPairTime_Parms StopClanWarPairTime_Parms;

		this->ProcessEvent( pfnStopClanWarPairTime, &StopClanWarPairTime_Parms, NULL );
	};

	void StartTournament ()
	{
		static UFunction* pfnStartTournament = NULL;

		if ( !pfnStartTournament )
			pfnStartTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StartTournament" );

		ACCController_execStartTournament_Parms StartTournament_Parms;

		this->ProcessEvent( pfnStartTournament, &StartTournament_Parms, NULL );
	};

	void GainClanRate ( int Value/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainClanRate = NULL;

		if ( !pfnGainClanRate )
			pfnGainClanRate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainClanRate" );

		ACCController_execGainClanRate_Parms GainClanRate_Parms;
		GainClanRate_Parms.Value = Value;

		this->ProcessEvent( pfnGainClanRate, &GainClanRate_Parms, NULL );
	};

	void GainClass ( struct FString Value/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainClass = NULL;

		if ( !pfnGainClass )
			pfnGainClass = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainClass" );

		ACCController_execGainClass_Parms GainClass_Parms;
		memcpy( &GainClass_Parms.Value, &Value, 0xC );

		this->ProcessEvent( pfnGainClass, &GainClass_Parms, NULL );
	};

	void GainExp ( int Value/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainExp = NULL;

		if ( !pfnGainExp )
			pfnGainExp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainExp" );

		ACCController_execGainExp_Parms GainExp_Parms;
		GainExp_Parms.Value = Value;

		this->ProcessEvent( pfnGainExp, &GainExp_Parms, NULL );
	};

	void GainMoney ( int Value/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainMoney = NULL;

		if ( !pfnGainMoney )
			pfnGainMoney = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainMoney" );

		ACCController_execGainMoney_Parms GainMoney_Parms;
		GainMoney_Parms.Value = Value;

		this->ProcessEvent( pfnGainMoney, &GainMoney_Parms, NULL );
	};

	void GainGold ( int Value/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainGold = NULL;

		if ( !pfnGainGold )
			pfnGainGold = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainGold" );

		ACCController_execGainGold_Parms GainGold_Parms;
		GainGold_Parms.Value = Value;

		this->ProcessEvent( pfnGainGold, &GainGold_Parms, NULL );
	};

	void GainAP ( int APValue/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainAP = NULL;

		if ( !pfnGainAP )
			pfnGainAP = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainAP" );

		ACCController_execGainAP_Parms GainAP_Parms;
		GainAP_Parms.APValue = APValue;

		this->ProcessEvent( pfnGainAP, &GainAP_Parms, NULL );
	};

	void GainProfessionLvl ( int NewLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainProfessionLvl = NULL;

		if ( !pfnGainProfessionLvl )
			pfnGainProfessionLvl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainProfessionLvl" );

		ACCController_execGainProfessionLvl_Parms GainProfessionLvl_Parms;
		GainProfessionLvl_Parms.NewLevel = NewLevel;

		this->ProcessEvent( pfnGainProfessionLvl, &GainProfessionLvl_Parms, NULL );
	};

	void GainLvl ( int NewRPGLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainLvl = NULL;

		if ( !pfnGainLvl )
			pfnGainLvl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainLvl" );

		ACCController_execGainLvl_Parms GainLvl_Parms;
		GainLvl_Parms.NewRPGLevel = NewRPGLevel;

		this->ProcessEvent( pfnGainLvl, &GainLvl_Parms, NULL );
	};

	void GainGangLvl ( int NewGangLevel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainGangLvl = NULL;

		if ( !pfnGainGangLvl )
			pfnGainGangLvl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainGangLvl" );

		ACCController_execGainGangLvl_Parms GainGangLvl_Parms;
		GainGangLvl_Parms.NewGangLevel = NewGangLevel;

		this->ProcessEvent( pfnGainGangLvl, &GainGangLvl_Parms, NULL );
	};

	void GainGang ( struct FString GangName, struct FString Description/*CPF_OptionalParm*/, int LogoId/*CPF_OptionalParm*/, int LogoColorId/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGainGang = NULL;

		if ( !pfnGainGang )
			pfnGainGang = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GainGang" );

		ACCController_execGainGang_Parms GainGang_Parms;
		memcpy( &GainGang_Parms.GangName, &GangName, 0xC );
		memcpy( &GainGang_Parms.Description, &Description, 0xC );
		GainGang_Parms.LogoId = LogoId;
		GainGang_Parms.LogoColorId = LogoColorId;

		this->ProcessEvent( pfnGainGang, &GainGang_Parms, NULL );
	};

	void OpenInstance ( struct FString InstanceName )
	{
		static UFunction* pfnOpenInstance = NULL;

		if ( !pfnOpenInstance )
			pfnOpenInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OpenInstance" );

		ACCController_execOpenInstance_Parms OpenInstance_Parms;
		memcpy( &OpenInstance_Parms.InstanceName, &InstanceName, 0xC );

		this->ProcessEvent( pfnOpenInstance, &OpenInstance_Parms, NULL );
	};

	void SetHiddenEx ( int V )
	{
		static UFunction* pfnSetHiddenEx = NULL;

		if ( !pfnSetHiddenEx )
			pfnSetHiddenEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetHiddenEx" );

		ACCController_execSetHiddenEx_Parms SetHiddenEx_Parms;
		SetHiddenEx_Parms.V = V;

		this->ProcessEvent( pfnSetHiddenEx, &SetHiddenEx_Parms, NULL );
	};

	void eventNotifyControllerTakeDamage ( int Id )
	{
		static UFunction* pfnNotifyControllerTakeDamage = NULL;

		if ( !pfnNotifyControllerTakeDamage )
			pfnNotifyControllerTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.NotifyControllerTakeDamage" );

		ACCController_eventNotifyControllerTakeDamage_Parms NotifyControllerTakeDamage_Parms;
		NotifyControllerTakeDamage_Parms.Id = Id;

		this->ProcessEvent( pfnNotifyControllerTakeDamage, &NotifyControllerTakeDamage_Parms, NULL );
	};

	void eventUpdateGroupPresentation ()
	{
		static UFunction* pfnUpdateGroupPresentation = NULL;

		if ( !pfnUpdateGroupPresentation )
			pfnUpdateGroupPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.UpdateGroupPresentation" );

		ACCController_eventUpdateGroupPresentation_Parms UpdateGroupPresentation_Parms;

		this->ProcessEvent( pfnUpdateGroupPresentation, &UpdateGroupPresentation_Parms, NULL );
	};

	struct FString GetClanName ()
	{
		static UFunction* pfnGetClanName = NULL;

		if ( !pfnGetClanName )
			pfnGetClanName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetClanName" );

		ACCController_execGetClanName_Parms GetClanName_Parms;

		this->ProcessEvent( pfnGetClanName, &GetClanName_Parms, NULL );

		return GetClanName_Parms.ReturnValue;
	};

	struct FString eventGetName ()
	{
		static UFunction* pfnGetName = NULL;

		if ( !pfnGetName )
			pfnGetName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetName" );

		ACCController_eventGetName_Parms GetName_Parms;

		this->ProcessEvent( pfnGetName, &GetName_Parms, NULL );

		return GetName_Parms.ReturnValue;
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.Destroyed" );

		ACCController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void ClientSetHUD ( class UClass* newHUDType, class UClass* newScoringType )
	{
		static UFunction* pfnClientSetHUD = NULL;

		if ( !pfnClientSetHUD )
			pfnClientSetHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ClientSetHUD" );

		ACCController_execClientSetHUD_Parms ClientSetHUD_Parms;
		ClientSetHUD_Parms.newHUDType = newHUDType;
		ClientSetHUD_Parms.newScoringType = newScoringType;

		this->ProcessEvent( pfnClientSetHUD, &ClientSetHUD_Parms, NULL );
	};

	void PlayAnnouncement ( class UClass* InMessageClass, unsigned char MessageIndex, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayAnnouncement = NULL;

		if ( !pfnPlayAnnouncement )
			pfnPlayAnnouncement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.PlayAnnouncement" );

		ACCController_execPlayAnnouncement_Parms PlayAnnouncement_Parms;
		PlayAnnouncement_Parms.InMessageClass = InMessageClass;
		PlayAnnouncement_Parms.MessageIndex = MessageIndex;
		PlayAnnouncement_Parms.OptionalObject = OptionalObject;
		PlayAnnouncement_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnPlayAnnouncement, &PlayAnnouncement_Parms, NULL );
	};

	struct FRotator eventLimitViewRotation ( struct FRotator ViewRotation, float ViewPitchMin, float ViewPitchMax )
	{
		static UFunction* pfnLimitViewRotation = NULL;

		if ( !pfnLimitViewRotation )
			pfnLimitViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.LimitViewRotation" );

		ACCController_eventLimitViewRotation_Parms LimitViewRotation_Parms;
		memcpy( &LimitViewRotation_Parms.ViewRotation, &ViewRotation, 0xC );
		LimitViewRotation_Parms.ViewPitchMin = ViewPitchMin;
		LimitViewRotation_Parms.ViewPitchMax = ViewPitchMax;

		this->ProcessEvent( pfnLimitViewRotation, &LimitViewRotation_Parms, NULL );

		return LimitViewRotation_Parms.ReturnValue;
	};

	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
	{
		static UFunction* pfnProcessViewRotation = NULL;

		if ( !pfnProcessViewRotation )
			pfnProcessViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ProcessViewRotation" );

		ACCController_execProcessViewRotation_Parms ProcessViewRotation_Parms;
		ProcessViewRotation_Parms.DeltaTime = DeltaTime;
		memcpy( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
	};

	void ServerSetPlayerViewPoint ( struct FVector POVLocation, struct FVector POVRotation )
	{
		static UFunction* pfnServerSetPlayerViewPoint = NULL;

		if ( !pfnServerSetPlayerViewPoint )
			pfnServerSetPlayerViewPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ServerSetPlayerViewPoint" );

		ACCController_execServerSetPlayerViewPoint_Parms ServerSetPlayerViewPoint_Parms;
		memcpy( &ServerSetPlayerViewPoint_Parms.POVLocation, &POVLocation, 0xC );
		memcpy( &ServerSetPlayerViewPoint_Parms.POVRotation, &POVRotation, 0xC );

		this->ProcessEvent( pfnServerSetPlayerViewPoint, &ServerSetPlayerViewPoint_Parms, NULL );
	};

	void UpdateServerCameraView ()
	{
		static UFunction* pfnUpdateServerCameraView = NULL;

		if ( !pfnUpdateServerCameraView )
			pfnUpdateServerCameraView = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.UpdateServerCameraView" );

		ACCController_execUpdateServerCameraView_Parms UpdateServerCameraView_Parms;

		this->ProcessEvent( pfnUpdateServerCameraView, &UpdateServerCameraView_Parms, NULL );
	};

	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation )
	{
		static UFunction* pfnGetPlayerViewPoint = NULL;

		if ( !pfnGetPlayerViewPoint )
			pfnGetPlayerViewPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetPlayerViewPoint" );

		ACCController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

		this->ProcessEvent( pfnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

		if ( POVLocation )
			memcpy( POVLocation, &GetPlayerViewPoint_Parms.POVLocation, 0xC ); // CPF_OutParm
		if ( POVRotation )
			memcpy( POVRotation, &GetPlayerViewPoint_Parms.POVRotation, 0xC ); // CPF_OutParm
	};

	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.Possess" );

		ACCController_eventPossess_Parms Possess_Parms;
		Possess_Parms.aPawn = aPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void ClientPossess ()
	{
		static UFunction* pfnClientPossess = NULL;

		if ( !pfnClientPossess )
			pfnClientPossess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ClientPossess" );

		ACCController_execClientPossess_Parms ClientPossess_Parms;

		this->ProcessEvent( pfnClientPossess, &ClientPossess_Parms, NULL );
	};

	void SpawnCamera ()
	{
		static UFunction* pfnSpawnCamera = NULL;

		if ( !pfnSpawnCamera )
			pfnSpawnCamera = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SpawnCamera" );

		ACCController_execSpawnCamera_Parms SpawnCamera_Parms;

		this->ProcessEvent( pfnSpawnCamera, &SpawnCamera_Parms, NULL );
	};

	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetViewTarget = NULL;

		if ( !pfnSetViewTarget )
			pfnSetViewTarget = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetViewTarget" );

		ACCController_execSetViewTarget_Parms SetViewTarget_Parms;
		SetViewTarget_Parms.NewViewTarget = NewViewTarget;
		memcpy( &SetViewTarget_Parms.TransitionParams, &TransitionParams, 0xC );

		this->ProcessEvent( pfnSetViewTarget, &SetViewTarget_Parms, NULL );
	};

	void GetAllPawnsInSector ( float Radius, float Angle, TArray< class ACCLobbyRemoteController* >* out_Controllers )
	{
		static UFunction* pfnGetAllPawnsInSector = NULL;

		if ( !pfnGetAllPawnsInSector )
			pfnGetAllPawnsInSector = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetAllPawnsInSector" );

		ACCController_execGetAllPawnsInSector_Parms GetAllPawnsInSector_Parms;
		GetAllPawnsInSector_Parms.Radius = Radius;
		GetAllPawnsInSector_Parms.Angle = Angle;

		pfnGetAllPawnsInSector->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAllPawnsInSector, &GetAllPawnsInSector_Parms, NULL );
		pfnGetAllPawnsInSector->FunctionFlags |= 0x400;

		if ( out_Controllers )
			*out_Controllers = GetAllPawnsInSector_Parms.out_Controllers; // CPF_OutParm
	};

	void LockMovement ( unsigned long bLock )
	{
		static UFunction* pfnLockMovement = NULL;

		if ( !pfnLockMovement )
			pfnLockMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.LockMovement" );

		ACCController_execLockMovement_Parms LockMovement_Parms;
		LockMovement_Parms.bLock = bLock;

		this->ProcessEvent( pfnLockMovement, &LockMovement_Parms, NULL );
	};

	unsigned char DetermineMoveDir ( float Forward, float Strafe )
	{
		static UFunction* pfnDetermineMoveDir = NULL;

		if ( !pfnDetermineMoveDir )
			pfnDetermineMoveDir = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.DetermineMoveDir" );

		ACCController_execDetermineMoveDir_Parms DetermineMoveDir_Parms;
		DetermineMoveDir_Parms.Forward = Forward;
		DetermineMoveDir_Parms.Strafe = Strafe;

		this->ProcessEvent( pfnDetermineMoveDir, &DetermineMoveDir_Parms, NULL );

		return DetermineMoveDir_Parms.ReturnValue;
	};

	void OnLBMouseRelease ()
	{
		static UFunction* pfnOnLBMouseRelease = NULL;

		if ( !pfnOnLBMouseRelease )
			pfnOnLBMouseRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OnLBMouseRelease" );

		ACCController_execOnLBMouseRelease_Parms OnLBMouseRelease_Parms;

		this->ProcessEvent( pfnOnLBMouseRelease, &OnLBMouseRelease_Parms, NULL );
	};

	void OnLBMousePress ()
	{
		static UFunction* pfnOnLBMousePress = NULL;

		if ( !pfnOnLBMousePress )
			pfnOnLBMousePress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.OnLBMousePress" );

		ACCController_execOnLBMousePress_Parms OnLBMousePress_Parms;

		this->ProcessEvent( pfnOnLBMousePress, &OnLBMousePress_Parms, NULL );
	};

	void FpsMode ( int on )
	{
		static UFunction* pfnFpsMode = NULL;

		if ( !pfnFpsMode )
			pfnFpsMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.FpsMode" );

		ACCController_execFpsMode_Parms FpsMode_Parms;
		FpsMode_Parms.on = on;

		this->ProcessEvent( pfnFpsMode, &FpsMode_Parms, NULL );
	};

	void GetPoolDebugInfo ()
	{
		static UFunction* pfnGetPoolDebugInfo = NULL;

		if ( !pfnGetPoolDebugInfo )
			pfnGetPoolDebugInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetPoolDebugInfo" );

		ACCController_execGetPoolDebugInfo_Parms GetPoolDebugInfo_Parms;

		this->ProcessEvent( pfnGetPoolDebugInfo, &GetPoolDebugInfo_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.PlayerTick" );

		ACCController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void NotifyConnectionError ( struct FString Message/*CPF_OptionalParm*/, struct FString Title/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnNotifyConnectionError = NULL;

		if ( !pfnNotifyConnectionError )
			pfnNotifyConnectionError = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.NotifyConnectionError" );

		ACCController_execNotifyConnectionError_Parms NotifyConnectionError_Parms;
		memcpy( &NotifyConnectionError_Parms.Message, &Message, 0xC );
		memcpy( &NotifyConnectionError_Parms.Title, &Title, 0xC );

		this->ProcessEvent( pfnNotifyConnectionError, &NotifyConnectionError_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.PostBeginPlay" );

		ACCController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void SetActiveAbility ( struct FName AbilityName )
	{
		static UFunction* pfnSetActiveAbility = NULL;

		if ( !pfnSetActiveAbility )
			pfnSetActiveAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetActiveAbility" );

		ACCController_execSetActiveAbility_Parms SetActiveAbility_Parms;
		memcpy( &SetActiveAbility_Parms.AbilityName, &AbilityName, 0x8 );

		this->ProcessEvent( pfnSetActiveAbility, &SetActiveAbility_Parms, NULL );
	};

	void LobbyLoadingFinished ()
	{
		static UFunction* pfnLobbyLoadingFinished = NULL;

		if ( !pfnLobbyLoadingFinished )
			pfnLobbyLoadingFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.LobbyLoadingFinished" );

		ACCController_execLobbyLoadingFinished_Parms LobbyLoadingFinished_Parms;

		this->ProcessEvent( pfnLobbyLoadingFinished, &LobbyLoadingFinished_Parms, NULL );
	};

	void StripGirlTestFade ( unsigned long bEnable )
	{
		static UFunction* pfnStripGirlTestFade = NULL;

		if ( !pfnStripGirlTestFade )
			pfnStripGirlTestFade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StripGirlTestFade" );

		ACCController_execStripGirlTestFade_Parms StripGirlTestFade_Parms;
		StripGirlTestFade_Parms.bEnable = bEnable;

		this->ProcessEvent( pfnStripGirlTestFade, &StripGirlTestFade_Parms, NULL );
	};

	void GetBaseDebugInfo ( TArray< struct FString >* BaseDebugInfo )
	{
		static UFunction* pfnGetBaseDebugInfo = NULL;

		if ( !pfnGetBaseDebugInfo )
			pfnGetBaseDebugInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.GetBaseDebugInfo" );

		ACCController_execGetBaseDebugInfo_Parms GetBaseDebugInfo_Parms;

		this->ProcessEvent( pfnGetBaseDebugInfo, &GetBaseDebugInfo_Parms, NULL );

		if ( BaseDebugInfo )
			memcpy( BaseDebugInfo, &GetBaseDebugInfo_Parms.BaseDebugInfo, 0xC ); // CPF_OutParm
	};

	void StripGirlDebug ( int GirlIndex )
	{
		static UFunction* pfnStripGirlDebug = NULL;

		if ( !pfnStripGirlDebug )
			pfnStripGirlDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.StripGirlDebug" );

		ACCController_execStripGirlDebug_Parms StripGirlDebug_Parms;
		StripGirlDebug_Parms.GirlIndex = GirlIndex;

		this->ProcessEvent( pfnStripGirlDebug, &StripGirlDebug_Parms, NULL );
	};

	void ServerSetShowDebugInfo ( unsigned long bNewShowDebugInfo )
	{
		static UFunction* pfnServerSetShowDebugInfo = NULL;

		if ( !pfnServerSetShowDebugInfo )
			pfnServerSetShowDebugInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ServerSetShowDebugInfo" );

		ACCController_execServerSetShowDebugInfo_Parms ServerSetShowDebugInfo_Parms;
		ServerSetShowDebugInfo_Parms.bNewShowDebugInfo = bNewShowDebugInfo;

		this->ProcessEvent( pfnServerSetShowDebugInfo, &ServerSetShowDebugInfo_Parms, NULL );
	};

	void ShowDebugInfo ()
	{
		static UFunction* pfnShowDebugInfo = NULL;

		if ( !pfnShowDebugInfo )
			pfnShowDebugInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ShowDebugInfo" );

		ACCController_execShowDebugInfo_Parms ShowDebugInfo_Parms;

		this->ProcessEvent( pfnShowDebugInfo, &ShowDebugInfo_Parms, NULL );
	};

	void di ()
	{
		static UFunction* pfndi = NULL;

		if ( !pfndi )
			pfndi = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.di" );

		ACCController_execdi_Parms di_Parms;

		this->ProcessEvent( pfndi, &di_Parms, NULL );
	};

	void eventForceClientMessageSTControllerEx ( struct FString S, class AActor* SomeActor, unsigned long bOnlyToLocal/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceClientMessageSTControllerEx = NULL;

		if ( !pfnForceClientMessageSTControllerEx )
			pfnForceClientMessageSTControllerEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessageSTControllerEx" );

		ACCController_eventForceClientMessageSTControllerEx_Parms ForceClientMessageSTControllerEx_Parms;
		memcpy( &ForceClientMessageSTControllerEx_Parms.S, &S, 0xC );
		ForceClientMessageSTControllerEx_Parms.SomeActor = SomeActor;
		ForceClientMessageSTControllerEx_Parms.bOnlyToLocal = bOnlyToLocal;

		this->ProcessEvent( pfnForceClientMessageSTControllerEx, &ForceClientMessageSTControllerEx_Parms, NULL );
	};

	void eventForceClientMessageSTAllEx ( struct FString S )
	{
		static UFunction* pfnForceClientMessageSTAllEx = NULL;

		if ( !pfnForceClientMessageSTAllEx )
			pfnForceClientMessageSTAllEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessageSTAllEx" );

		ACCController_eventForceClientMessageSTAllEx_Parms ForceClientMessageSTAllEx_Parms;
		memcpy( &ForceClientMessageSTAllEx_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnForceClientMessageSTAllEx, &ForceClientMessageSTAllEx_Parms, NULL );
	};

	void eventForceClientMessageSTEx ( struct FString S )
	{
		static UFunction* pfnForceClientMessageSTEx = NULL;

		if ( !pfnForceClientMessageSTEx )
			pfnForceClientMessageSTEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessageSTEx" );

		ACCController_eventForceClientMessageSTEx_Parms ForceClientMessageSTEx_Parms;
		memcpy( &ForceClientMessageSTEx_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnForceClientMessageSTEx, &ForceClientMessageSTEx_Parms, NULL );
	};

	void ForceClientMessageSTAll ( struct FString S, class AActor* CalledFrom )
	{
		static UFunction* pfnForceClientMessageSTAll = NULL;

		if ( !pfnForceClientMessageSTAll )
			pfnForceClientMessageSTAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessageSTAll" );

		ACCController_execForceClientMessageSTAll_Parms ForceClientMessageSTAll_Parms;
		memcpy( &ForceClientMessageSTAll_Parms.S, &S, 0xC );
		ForceClientMessageSTAll_Parms.CalledFrom = CalledFrom;

		this->ProcessEvent( pfnForceClientMessageSTAll, &ForceClientMessageSTAll_Parms, NULL );
	};

	void ForceClientMessageST ( struct FString S, class AActor* CalledFrom )
	{
		static UFunction* pfnForceClientMessageST = NULL;

		if ( !pfnForceClientMessageST )
			pfnForceClientMessageST = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessageST" );

		ACCController_execForceClientMessageST_Parms ForceClientMessageST_Parms;
		memcpy( &ForceClientMessageST_Parms.S, &S, 0xC );
		ForceClientMessageST_Parms.CalledFrom = CalledFrom;

		this->ProcessEvent( pfnForceClientMessageST, &ForceClientMessageST_Parms, NULL );
	};

	void eventForceClientMessage ( struct FString S, struct FName Type/*CPF_OptionalParm*/, float MsgLifeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceClientMessage = NULL;

		if ( !pfnForceClientMessage )
			pfnForceClientMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ForceClientMessage" );

		ACCController_eventForceClientMessage_Parms ForceClientMessage_Parms;
		memcpy( &ForceClientMessage_Parms.S, &S, 0xC );
		memcpy( &ForceClientMessage_Parms.Type, &Type, 0x8 );
		ForceClientMessage_Parms.MsgLifeTime = MsgLifeTime;

		this->ProcessEvent( pfnForceClientMessage, &ForceClientMessage_Parms, NULL );
	};

	void eventClientMessage ( struct FString S, struct FName Type/*CPF_OptionalParm*/, float MsgLifeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientMessage = NULL;

		if ( !pfnClientMessage )
			pfnClientMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.ClientMessage" );

		ACCController_eventClientMessage_Parms ClientMessage_Parms;
		memcpy( &ClientMessage_Parms.S, &S, 0xC );
		memcpy( &ClientMessage_Parms.Type, &Type, 0x8 );
		ClientMessage_Parms.MsgLifeTime = MsgLifeTime;

		this->ProcessEvent( pfnClientMessage, &ClientMessage_Parms, NULL );
	};

	void TurnClientMessages ()
	{
		static UFunction* pfnTurnClientMessages = NULL;

		if ( !pfnTurnClientMessages )
			pfnTurnClientMessages = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.TurnClientMessages" );

		ACCController_execTurnClientMessages_Parms TurnClientMessages_Parms;

		this->ProcessEvent( pfnTurnClientMessages, &TurnClientMessages_Parms, NULL );
	};

	void TurnClientMessagesOff ()
	{
		static UFunction* pfnTurnClientMessagesOff = NULL;

		if ( !pfnTurnClientMessagesOff )
			pfnTurnClientMessagesOff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.TurnClientMessagesOff" );

		ACCController_execTurnClientMessagesOff_Parms TurnClientMessagesOff_Parms;

		this->ProcessEvent( pfnTurnClientMessagesOff, &TurnClientMessagesOff_Parms, NULL );
	};

	void TurnClientMessagesOn ()
	{
		static UFunction* pfnTurnClientMessagesOn = NULL;

		if ( !pfnTurnClientMessagesOn )
			pfnTurnClientMessagesOn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.TurnClientMessagesOn" );

		ACCController_execTurnClientMessagesOn_Parms TurnClientMessagesOn_Parms;

		this->ProcessEvent( pfnTurnClientMessagesOn, &TurnClientMessagesOn_Parms, NULL );
	};

	void SetVals ()
	{
		static UFunction* pfnSetVals = NULL;

		if ( !pfnSetVals )
			pfnSetVals = UObject::FindObject< UFunction >( "Function CrimeCraft.CCController.SetVals" );

		ACCController_execSetVals_Parms SetVals_Parms;

		this->ProcessEvent( pfnSetVals, &SetVals_Parms, NULL );
	};

};

UClass* ACCController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif