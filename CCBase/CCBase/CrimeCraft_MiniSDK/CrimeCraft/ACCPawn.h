/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPawn.h
// Date: 06/16/2011 @ 05:19:40.60
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_AAI_RELEVANCY_TIME               2.0f
#define Const_AdditionalAnimInfo_MaxRotatorParameters 2
#define Const_AdditionalAnimInfo_MaxVectorParameters 2
#define Const_AdditionalAnimInfo_MaxMeshParameters 2

enum EMoveMode
{
	MOVE_RUN = 0,
	MOVE_CROUCH = 1,
	MOVE_SPRINT = 2,
	MOVE_PANIC = 3,
	MOVE_WALK = 4,
	MOVE_ROLLING = 5,
	MOVE_MELEE = 6,
	MOVE_MAX = 7
};

enum ECCD_IKLerpingMode
{
	ECCDIK_None = 0,
	ECCDIK_LerpIntoSpot = 1,
	ECCDIK_LerpOutFromSpot = 2,
	ECCDIK_MAX = 3
};

struct ACCPawn_execResetTurnNodes_Parms
{
	struct FRotator ResetRot;
};

struct ACCPawn_eventrealmClubStandupImmediately_Parms
{
};// FUNC_Event

struct ACCPawn_eventrealmClubStandupLatent_Parms
{
};// FUNC_Event

struct ACCPawn_eventrealmClubSitdownImmediately_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};// FUNC_Event

struct ACCPawn_eventrealmClubSitdownLatent_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};// FUNC_Event

struct ACCPawn_execOnSitableLogicStartedSittingState_Parms
{
	int StartParam;
	int RulingExtraFlags;
};

struct ACCPawn_execOnSitableLogicStartedIdleState_Parms
{
};

struct ACCPawn_execClubTestStage6_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage5_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage4_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage3_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage2_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage1a2_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage1a1_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage1_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestStage0_Parms
{
};// FUNC_Final

struct ACCPawn_execClubTestFromInstance_Parms
{
};// FUNC_Exec

struct ACCPawn_execClubStandupImmediately_Parms
{
};// FUNC_Exec

struct ACCPawn_execClubStandupLatent_Parms
{
};// FUNC_Exec

struct ACCPawn_execClubSitdownImmediately_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};

struct ACCPawn_execClubSitdownLatent_Parms
{
	void* SitableActor;
	int SitdownType;
	int AnimIndex;
};

struct ACCPawn_execClubSitableLogic_ProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator out_DeltaRot; // CPF_OutParm
};// FUNC_Final

struct ACCPawn_execTickClubSitableLogic_Parms
{
	float DeltaTime;
};// FUNC_Final

struct ACCPawn_execChangeClubSitableLogicRulingInfo_Parms
{
	struct FCSLRulingInfo NewRulingInfoStruct; // CPF_OutParm
};// FUNC_Final

struct ACCPawn_execBuildCLSRulingInfo_Parms
{
	unsigned char NewRulingAction;
	struct FCSL_SitableActorInfo NewRulingSitable;
	int NewRulingActionParameter;
	struct FName NewRulingActionNameParameter;
	int NewRulingFlags;
	int NewRulingExtraFlags;
	struct FCSLRulingInfo ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execSitableLogicIsSitting_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCPawn_eventSitableLogicIsActive_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Event

struct ACCPawn_eventSearchForSitableObject_Parms
{
	struct FCSL_SitableActorInfo ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Event

struct ACCPawn_execDoSearchForSitableAndDrawDebug_Parms
{
};// FUNC_Final

struct ACCPawn_execGetInitialPawnTransformForSitable_Parms
{
	struct FCSL_SitableActorInfo Sitable; // CPF_OutParm
	struct FVector OutLocation; // CPF_OutParm
	struct FRotator OutRotation; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCPawn_execConditionalCreateSlubSitableLogic_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCPawn_execCreateSlubSitableLogic_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCPawn_eventSetAnimPosition_Parms
{
	struct FName SlotName;
	int ChannelIndex;
	struct FName InAnimSeqName;
	float InPosition;
	unsigned long bFireNotifies : 1;
	unsigned long bLooping : 1;
};// FUNC_Event

struct ACCPawn_eventBeginAnimControl_Parms
{
	TArray< void* > InAnimSets;
};// FUNC_Event

struct ACCPawn_execOnToggle_Parms
{
	void* Action;
};

struct ACCPawn_execTestPointAtEnd_Parms
{
};

struct ACCPawn_execTestPointAtFourthStage_Parms
{
};

struct ACCPawn_execTestPointAtThirdStage_Parms
{
};

struct ACCPawn_execTestPointAtSecondStage_Parms
{
};

struct ACCPawn_execTestPointAtFirstStage_Parms
{
};

struct ACCPawn_execTestPointAtBegin_Parms
{
};

struct ACCPawn_execServerTestPointAt_Parms
{
	float Time;
	float StartTime;
	float EndTime;
};

struct ACCPawn_execTestPointAt_Parms
{
	float Time;
};// FUNC_Exec

struct ACCPawn_execTestMobileEnd_Parms
{
};

struct ACCPawn_execTestMobileFourthStage_Parms
{
};

struct ACCPawn_execTestMobileThirdStage_Parms
{
};

struct ACCPawn_execTestMobileSecondStage_Parms
{
};

struct ACCPawn_execTestMobileFirstStage_Parms
{
};

struct ACCPawn_execTestMobileBegin_Parms
{
};

struct ACCPawn_execServerTestMobile_Parms
{
	float Time;
	float StartTime;
	float EndTime;
};

struct ACCPawn_execTestMobile_Parms
{
	float Time;
};// FUNC_Exec

struct ACCPawn_execTestLMGEnd_Parms
{
};

struct ACCPawn_execTestLMGFourthStage_Parms
{
};

struct ACCPawn_execTestLMGThirdStage_Parms
{
};

struct ACCPawn_execTestLMGSecondStage_Parms
{
};

struct ACCPawn_execTestLMGFirstStage_Parms
{
};

struct ACCPawn_execTestLMGBegin_Parms
{
};

struct ACCPawn_execServerTestLMG_Parms
{
};

struct ACCPawn_execTestLMG_Parms
{
};// FUNC_Exec

struct ACCPawn_execTestContusionEnd_Parms
{
};

struct ACCPawn_execTestContusionFourthStage_Parms
{
};

struct ACCPawn_execTestContusionThirdStage_Parms
{
};

struct ACCPawn_execTestContusionSecondStage_Parms
{
};

struct ACCPawn_execTestContusionFirstStage_Parms
{
};

struct ACCPawn_execTestContusionBegin_Parms
{
};

struct ACCPawn_execServerTestContusion_Parms
{
	float Time;
};

struct ACCPawn_execTestContusion_Parms
{
	float Time;
};// FUNC_Exec

struct ACCPawn_execGetDamagePenetration_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execTestBM_Parms
{
	float Time;
};// FUNC_Exec

struct ACCPawn_execServerTestBM_Parms
{
	float Time;
};

struct ACCPawn_execFrozeMovementFor_Parms
{
	float frozeTime;
};

struct ACCPawn_execFindMostRelevantTurnNode_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execFindMostRelevantNode_Parms
{
	TArray< void* > Nodes; // CPF_OutParm
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_eventOnCharacterComponentTransformsComputed_Parms
{
	void* Comp;
};// FUNC_Event

struct ACCPawn_execRemoveShadowCharacterComponent_Parms
{
	struct FName Id;
};

struct ACCPawn_execCreateShadowCharacterComponent_Parms
{
	struct FName Id;
	class UMaterialInterface* Mtl;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execFellOutOfWorld_Parms
{
	class UClass* dmgType;
};

struct ACCPawn_execFindAndMoveToPlayerStart_Parms
{
};

struct ACCPawn_execTestEncroachment_Parms
{
	struct FVector Translation;
	struct FVector Extent;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCPawn_execGetClientActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetServerActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetMainActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execSetNewMaterial_Parms
{
	unsigned long bVis : 1;
};

struct ACCPawn_execLoadDebugMovementNodeScaleNative_Parms
{
	struct FString Filename;
};// FUNC_Native

struct ACCPawn_execSaveDebugMovementNodeScaleNative_Parms
{
	struct FString Filename;
};// FUNC_Native

struct ACCPawn_execLoadDebugMovementNodeScale_Parms
{
	struct FString Filename;
};// FUNC_Exec

struct ACCPawn_execSaveDebugMovementNodeScale_Parms
{
	struct FString Filename;
};// FUNC_Exec

struct ACCPawn_eventGetAimRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_execgibbedBy_Parms
{
	class AActor* Other;
};

struct ACCPawn_eventCCUnhide_Parms
{
};// FUNC_Event

struct ACCPawn_eventCCHide_Parms
{
};// FUNC_Event

struct ACCPawn_eventTakeDamage_Parms
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

struct ACCPawn_execGetPawnSoundLocation_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execUpdateCollisionModeForClub_Parms
{
	unsigned long bEffectMode : 1;
};

struct ACCPawn_execUpdateCollisionMode_Parms
{
	unsigned long bEffectMode : 1;
};

struct ACCPawn_execIsInClubMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execUpdateCollisionModeAuto_Parms
{
};

struct ACCPawn_execCheckIfCanStandUpFromCrouch_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execUpdateCollisionSize_Parms
{
};

struct ACCPawn_execGetCollisionSizeValuesForMM_Parms
{
	unsigned char TheMovementMode;
	struct FVector Translation; // CPF_OutParm
	float ColRadius; // CPF_OutParm
	float ColHeight; // CPF_OutParm
};

struct ACCPawn_eventPlayTurnSound_Parms
{
	void* SourceNode;
	float TurnAngle;
};// FUNC_Event

struct ACCPawn_execMovementModeChanged_Parms
{
	unsigned char OldMovementMode;
};

struct ACCPawn_execSetMovementMode_Parms
{
	unsigned char Mode;
};

struct ACCPawn_execGetSpecificLandedSound_Parms
{
	void* FootStepParams;
	float FallingTime;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetLandedSound_Parms
{
	void* PMaterial;
	float FallingTime;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execActuallyPlayLandedSound_Parms
{
	float FallingTime;
	struct FTraceHitInfo HitInfo;
};

struct ACCPawn_eventPlayLandedSound_Parms
{
	float FallingTime;
};// FUNC_Event

struct ACCPawn_execUpdateMovementAmbientSound_Parms
{
	unsigned char Mode;
};

struct ACCPawn_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCPawn_execPlayMovementStepSound_Parms
{
	int FootDown;
	struct FTraceHitInfo HitInfo;
};

struct ACCPawn_execGetSpecificFootStepEffect_Parms
{
	void* FootStepParams;
	int FootDown;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetSpecificFootStepSound_Parms
{
	void* FootStepParams;
	int FootDown;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetFootStepSound_Parms
{
	void* PMaterial;
	int FootDown;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetFootStepEffect_Parms
{
	void* PMaterial;
	int FootDown;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execActuallyPlayFootStepSound_Parms
{
	int FootDown;
	struct FTraceHitInfo HitInfo;
};

struct ACCPawn_execPerformFootStepTrace_Parms
{
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	class AActor* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_eventPlayFootStepSound_Parms
{
	int FootDown;
};// FUNC_Event

struct ACCPawn_execAttachMeshToSocket_Parms
{
	void* InMesh;
	struct FName SocketName;
};

struct ACCPawn_eventHoldGameObject_Parms
{
	void* CarriedObject;
};// FUNC_Event

struct ACCPawn_execClientClearGameObjectFor_Parms
{
	class ACCPawn* Pawn;
};

struct ACCPawn_execUpdateMove_Parms
{
};

struct ACCPawn_execMoveMelee_Parms
{
};

struct ACCPawn_execMoveRolling_Parms
{
};

struct ACCPawn_execMovePanic_Parms
{
};

struct ACCPawn_execMoveSprint_Parms
{
};

struct ACCPawn_execMoveWalk_Parms
{
};

struct ACCPawn_execMoveRun_Parms
{
};

struct ACCPawn_execMoveCrouch_Parms
{
};

struct ACCPawn_execGetAimOffsetRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execUpdateAimOffsetData_Parms
{
	float DeltaTime;
};

struct ACCPawn_execUpdateMeshBoneControllers_Parms
{
	float DeltaTime;
};

struct ACCPawn_execProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator out_DeltaRot; // CPF_OutParm
};

struct ACCPawn_execInterpolatePawnLocation_Parms
{
	float DeltaTime;
};

struct ACCPawn_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCPawn_execTickFootplacement_Parms
{
	float DeltaTime;
};

struct ACCPawn_execCalcCamera_Parms
{
	float fDeltaTime;
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	float out_FOV; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execInitializeAnimationNodes_Parms
{
};

struct ACCPawn_execEquipDefaultItems_Parms
{
};// FUNC_Native

struct ACCPawn_eventOnCreateCharacterComponent_Parms
{
};// FUNC_Event

struct ACCPawn_eventCreateCharacterComponent_Parms
{
	struct FCharacterVisualDescription Appearance; // CPF_OutParm
	unsigned char AnimType;
};// FUNC_Event

struct ACCPawn_eventCreateNPCCharacterComponent_Parms
{
	int VisualId;
};// FUNC_Event

struct ACCPawn_execIThinkNowBotsMustBeVisible_Parms
{
};

struct ACCPawn_execPlayAbilitySoundEffect_Parms
{
	void* Sound;
};

struct ACCPawn_execPlayAbilityPSEffect_Parms
{
	int Index;
	void* PS;
	float PSPlayTime;
	struct FName PSAttachSocket;
	struct FName PSAttachBoneName;
};

struct ACCPawn_execReplicateEmoteShowing_Parms
{
	struct FString EmoteName;
};

struct ACCPawn_execShowEmote_Parms
{
	struct FString EmoteName;
};// FUNC_Exec

struct ACCPawn_execAttachPSToCustomComponent_Parms
{
	struct FString CompName;
	struct FName SocketName;
	void* PS;
};

struct ACCPawn_execClearCCSRotatorParameter_Parms
{
	int Index;
};

struct ACCPawn_execGetCCSRotatorParameter_Parms
{
	int Index;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execSetCCSRotatorParameter_Parms
{
	int Index;
	struct FRotator Value;
};

struct ACCPawn_execClearCCSVectorParameter_Parms
{
	int Index;
};

struct ACCPawn_execGetCCSVectorParameter_Parms
{
	int Index;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execSetCCSVectorParameter_Parms
{
	int Index;
	struct FVector Value;
};

struct ACCPawn_execClearCCSMeshParameter_Parms
{
	int Index;
};

struct ACCPawn_execGetCCSMeshParameter_Parms
{
	int Index;
	class UMeshComponent* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execSetCCSMeshParameter_Parms
{
	int Index;
	class UMeshComponent* Value;
};

struct ACCPawn_execGetCCSPPControllerForSocket_Parms
{
	struct FName SocketName;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execUpdateCustomComponentIKControllerTransform_Parms
{
	void* SkelController;
	struct FName SocketName;
	struct FSkelControlDestLocation DestLocation;
	float Alpha;
};

struct ACCPawn_execUpdateCustomComponentIKFor_Parms
{
	int Index;
	float DeltaTime;
};

struct ACCPawn_execForceDisableCustomComponentIKFor_Parms
{
	int Index;
};

struct ACCPawn_execUpdateCustomComponentLifeTimeFor_Parms
{
	int Index;
	float DeltaTime;
};

struct ACCPawn_execTickCustomComponentSystem_Parms
{
	float DeltaTime;
};

struct ACCPawn_execDeleteReferenceToCustomComonent_Parms
{
	struct FString CompTag;
};

struct ACCPawn_execFindCustomComponent_Parms
{
	struct FString CompTag;
	class UActorComponent* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execPerformCustomComponentIKLerping_Parms
{
	struct FString CompTag;
	unsigned char IKLerpingMode;
	float IKLerpingTime;
	struct FSkelControlDestLocation IKLerpingLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execDetachCustomComponent_Parms
{
	struct FString CompTag;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execAttachCustomComponent_Parms
{
	struct FString CompTag;
	class UActorComponent* Comp;
	struct FName SocketToAttach;
	float TimeOut;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execShowHideFlag_Parms
{
	unsigned long bHide : 1;
};

struct ACCPawn_eventOnAnimEnd_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};// FUNC_Event FUNC_Native

struct ACCPawn_execPostAdditionalAnimationInfoForReplicated_Parms
{
	struct FAdditionalAnimInfo AAI; // CPF_OutParm
};

struct ACCPawn_execPrepareAdditionalAnimationInfoForReplication_Parms
{
	struct FAdditionalAnimInfo AAI; // CPF_OutParm
};

struct ACCPawn_execBuildAAIMeshParameterValue_Parms
{
	struct FString ResourceName;
	class UMeshComponent* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execBuildAAIMeshParameterResourceName_Parms
{
	class UMeshComponent* Value;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execStaticIsTemplate_Parms
{
	class UObject* Obj;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCPawn_execAdditionalAnimationsTimer_Parms
{
};

struct ACCPawn_execAdditionalAnimationsTimer_DoFinishPlayInternal_Parms
{
	unsigned long bNoBlendOut : 1;
};

struct ACCPawn_execAdditionalAnimationsTimer_DoFinishPlay_Parms
{
};

struct ACCPawn_execAdditionalAnimationsTimer_FinishPlay_Parms
{
};

struct ACCPawn_execAdditionalAnimationsTimer_StartPlay_Parms
{
};

struct ACCPawn_execTickAdditionalAnimations_Parms
{
	float DeltaTime;
};

struct ACCPawn_execCreateAAIEffectFor_Parms
{
	struct FString AnimName;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execForceAbortAdditionalAnimation_Parms
{
	unsigned long bNoBlendOut : 1;
};

struct ACCPawn_eventAbortAdditionalAnimation_Parms
{
	unsigned long bNoBlendOut : 1;
};// FUNC_Event

struct ACCPawn_eventIsPlayingAdditionalAnimation_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_eventPlayAdditionalAnimation_Parms
{
	struct FAdditionalAnimInfo AAI; // CPF_OutParm
};// FUNC_Event

struct ACCPawn_execAdditionalAnimationFinished_Parms
{
};

struct ACCPawn_execAdditionalAnimationStarted_Parms
{
};

struct ACCPawn_execServerForceAbortAdditionalAnimation_Parms
{
};

struct ACCPawn_execServerAbortAdditionalAnimation_Parms
{
};

struct ACCPawn_execServerPlayAdditionalAnimation_Parms
{
	struct FAdditionalAnimInfo AAI;
};

struct ACCPawn_execIsReplicatedAdditionalAnimationInfoRelevant_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execTestGetStartAndFinishDelay_Parms
{
	float StartDelay; // CPF_OutParm
	float FinishDelay; // CPF_OutParm
};

struct ACCPawn_execTestAbortAdditionalAnimation_Parms
{
};// FUNC_Exec

struct ACCPawn_execTestPlayAdditionalAnimation_Parms
{
	struct FString AnimName;
	float BlendNodeTarget;
	unsigned long bHideWeaponDueAnim : 1;
};// FUNC_Exec

struct ACCPawn_execGetAAIsNotRelevant_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execCalcAAIBlendTime_Parms
{
	void* ListNode; // CPF_OutParm
	TArray< void* > Selectors; // CPF_OutParm
	int DestListNodeChildIndex;
	float ListNodeBlendTime; // CPF_OutParm
	float SelectorBlendTime; // CPF_OutParm
};

struct ACCPawn_execGetAdditionalAnimationsNames_Parms
{
	TArray< struct FString > Names; // CPF_OutParm
};

struct ACCPawn_eventGetAdditionalAnimationName_Parms
{
	int EntryIndex;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_eventGetAdditionalAnimationSequenceLengthEx_Parms
{
	struct FName AnimName;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_eventGetAdditionalAnimationSequenceLength_Parms
{
	int Index;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_eventIsAdditionalAnimationEntryValid_Parms
{
	int Index;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_eventFindAdditionalAnimationEntryIndex_Parms
{
	struct FName AnimName;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_execPrintAdditionalAnimationsDebugInfo_Parms
{
};

struct ACCPawn_execBuildAdditionalAnimationEntryForNode_Parms
{
	void* BaseEntryNode;
	struct FAdditionalAnimationEntry ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execBuildAdditionalAnimationEntryFor_Parms
{
	int AAINodeIndex;
	int AAIChildIndex;
	struct FAdditionalAnimationEntry ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execBuildAdditionalAnimationNodeInfoFor_Parms
{
	struct FString NodeName;
	struct FAdditionalAnimationNodeInfo NodeInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPawn_execInitializeAdditionalAnimations_Parms
{
};

struct ACCPawn_execPossessedBy_Parms
{
	class AController* C;
	unsigned long bVehicleTransition : 1;
};

struct ACCPawn_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCPawn_eventGetAvatar_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPawn_execGetName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execGetNetworkID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCPawn_execServerSetNetworkID_Parms
{
	int NetId;
};

struct ACCPawn_eventSetSPDModifier_Parms
{
	float Modifier;
};// FUNC_Event

struct ACCPawn_execRegisterInRealmNodesProxy_Parms
{
};// FUNC_Native

struct ACCPawn_execSetNetworkID_Parms
{
	int NetId;
};

struct ACCPawn_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCPawn_execUpdateAimOffset_Parms
{
	struct FRotator NewAimOffsetPct;
	float DeltaTime;
};// FUNC_Final FUNC_Native

struct ACCPawn_execInitializeOtherAnimationNodes_Parms
{
};// FUNC_Native

struct ACCPawn_eventUpdateSpeedParams_Parms
{
};// FUNC_Event

// (0x3D8 - 0x6BC)
class ACCPawn : public APawn
{
public:
	void*                                              CharacterComponent;                          // 0x03D8 (0x0004)
	void*                                              SpriteLod;                                   // 0x03DC (0x0004)
	void*                                              LightEnvironment;                            // 0x03E0 (0x0004)
	void*                                              PawnProps;                                   // 0x03E4 (0x0004)
	int                                                MovementStepsCounter;                        // 0x03E8 (0x0004)
	void*                                              MovementAmbientSound;                        // 0x03EC (0x0004)
	unsigned long                                      LockPitchRotation : 1;                       // 0x03F0 (0x0004) [0x00000001]
	unsigned long                                      LockYawRotation : 1;                         // 0x03F0 (0x0004) [0x00000002]
	unsigned long                                      LockRollRotation : 1;                        // 0x03F0 (0x0004) [0x00000004]
	unsigned long                                      LockPawnRotation : 1;                        // 0x03F0 (0x0004) [0x00000008]
	unsigned long                                      bEnableFootPlacement : 1;                    // 0x03F0 (0x0004) [0x00000010]
	unsigned long                                      bPlayingAdditionalAnim : 1;                  // 0x03F0 (0x0004) [0x00000020]
	unsigned long                                      bCanUseMoveDirection : 1;                    // 0x03F0 (0x0004) [0x00000040]
	unsigned long                                      bUseDebugMovementNodeScale : 1;              // 0x03F0 (0x0004) [0x00000080]
	unsigned long                                      AllowToPlayFootstepSound : 1;                // 0x03F0 (0x0004) [0x00000100]
	unsigned long                                      CanChangeMat : 1;                            // 0x03F0 (0x0004) [0x00000200]
	unsigned long                                      bNoCollisionMode : 1;                        // 0x03F0 (0x0004) [0x00000400]
	TArray< void* >                                    TurnInPlaceNodes;                            // 0x03F4 (0x000C)
	TArray< void* >                                    TurnInMoveNodes;                             // 0x0400 (0x000C)
	void*                                              LeftHandIK1;                                 // 0x040C (0x0004)
	void*                                              LeftHandIK2;                                 // 0x0410 (0x0004)
	struct FSpeedParams                                CachedSpeedParams;                           // 0x0414 (0x0030)
	int                                                NetworkID;                                   // 0x0444 (0x0004)
	struct FName                                       LeftFootBone;                                // 0x0448 (0x0008)
	struct FName                                       RightFootBone;                               // 0x0450 (0x0008)
	struct FName                                       LeftFootControlName;                         // 0x0458 (0x0008)
	struct FName                                       RightFootControlName;                        // 0x0460 (0x0008)
	float                                              BaseTranslationOffset;                       // 0x0468 (0x0004)
	float                                              CrouchTranslationOffset;                     // 0x046C (0x0004)
	float                                              OldLocationZ;                                // 0x0470 (0x0004)
	float                                              ZSmoothingRate;                              // 0x0474 (0x0004)
	float                                              MaxFootPlacementDistSquared;                 // 0x0478 (0x0004)
	void*                                              LeftLegControl;                              // 0x047C (0x0004)
	void*                                              RightLegControl;                             // 0x0480 (0x0004)
	TArray< struct FCustomComponentDesc >              CustomComponents;                            // 0x0484 (0x000C)
	TArray< class UMeshComponent* >                    CCSMeshParameters;                           // 0x0490 (0x000C)
	TArray< struct FVector >                           CCSVectorParameters;                         // 0x049C (0x000C)
	TArray< struct FRotator >                          CCSRotatorParameters;                        // 0x04A8 (0x000C)
	struct FAdditionalAnimInfoRepStruct                ReplicatedAdditionalAnimationInfo;           // 0x04B4 (0x0090)
	struct FAdditionalAnimInfo                         CurrentAdditionalAnimationInfo;              // 0x0544 (0x008C)
	int                                                CurrentAdditionalAnimationEntryIndex;        // 0x05D0 (0x0004)
	void*                                              CurrentAdditionalAnimationEffect;            // 0x05D4 (0x0004)
	TArray< struct FAdditionalAnimationNodeInfo >      AdditionalAnimationNodes;                    // 0x05D8 (0x000C)
	TArray< struct FAdditionalAnimationEntry >         AdditionalAnimationsList;                    // 0x05E4 (0x000C)
	void*                                              AbilityPSEffect[ 3 ];                        // 0x05F0 (0x000C)
	int                                                DrugAutoInjectorLevel;                       // 0x05FC (0x0004)
	unsigned char                                      MovementMode;                                // 0x0600 (0x0001)
	unsigned char                                      PrevMovementMode;                            // 0x0601 (0x0001)
	unsigned char                                      MoveDirection;                               // 0x0602 (0x0001)
	unsigned char                                      RPG_Class;                                   // 0x0603 (0x0001)
	float                                              HP_Current;                                  // 0x0604 (0x0004)
	float                                              HP_Max;                                      // 0x0608 (0x0004)
	float                                              STM_Current;                                 // 0x060C (0x0004)
	float                                              STM_Max;                                     // 0x0610 (0x0004)
	float                                              STM_MinLevelToSprint;                        // 0x0614 (0x0004)
	float                                              STM_RollingCost;                             // 0x0618 (0x0004)
	float                                              SPD_Run;                                     // 0x061C (0x0004)
	float                                              SPD_Sprint;                                  // 0x0620 (0x0004)
	float                                              SPD_Rolling;                                 // 0x0624 (0x0004)
	float                                              RLL_Dist;                                    // 0x0628 (0x0004)
	float                                              RLL_Time;                                    // 0x062C (0x0004)
	float                                              SPD_Modifier;                                // 0x0630 (0x0004)
	TArray< float >                                    DebugMovementNodeScale;                      // 0x0634 (0x000C)
	struct FName                                       WPN_AimingCamDescName;                       // 0x0640 (0x0008)
	struct FName                                       WPN_CrouchAimingCamDescName;                 // 0x0648 (0x0008)
	int                                                STT_Type;                                    // 0x0650 (0x0004)
	float                                              STT_Factor;                                  // 0x0654 (0x0004)
	struct FRotator                                    AimOffsetRotation;                           // 0x0658 (0x000C)
	void*                                              FootStepEffectEmitter;                       // 0x0664 (0x0004)
	float                                              RadarScaleFactor;                            // 0x0668 (0x0004)
	float                                              BlockMovementFor;                            // 0x066C (0x0004)
	float                                              BlockFireFor;                                // 0x0670 (0x0004)
	float                                              ContusionFor;                                // 0x0674 (0x0004)
	float                                              testmobile_Time;                             // 0x0678 (0x0004)
	float                                              testmobile_StartTime;                        // 0x067C (0x0004)
	float                                              testmobile_EndTime;                          // 0x0680 (0x0004)
	float                                              testPointAt_Time;                            // 0x0684 (0x0004)
	float                                              testPointAt_StartTime;                       // 0x0688 (0x0004)
	float                                              testPointAt_EndTime;                         // 0x068C (0x0004)
	struct FVector                                     InterpSavedTranslation;                      // 0x0690 (0x000C)
	struct FVector                                     InterpSavedLocation;                         // 0x069C (0x000C)
	TArray< struct FShadowCharacterComponent >         ShadowCharacterComponents;                   // 0x06A8 (0x000C)
	float                                              ShadowCharacterComponentDelay;               // 0x06B4 (0x0004)
	void*                                              ClubSitableLogic;                            // 0x06B8 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPawn" );

		return ClassPointer;
	};

public:
	void ResetTurnNodes ( struct FRotator ResetRot )
	{
		static UFunction* pfnResetTurnNodes = NULL;

		if ( !pfnResetTurnNodes )
			pfnResetTurnNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ResetTurnNodes" );

		ACCPawn_execResetTurnNodes_Parms ResetTurnNodes_Parms;
		memcpy( &ResetTurnNodes_Parms.ResetRot, &ResetRot, 0xC );

		this->ProcessEvent( pfnResetTurnNodes, &ResetTurnNodes_Parms, NULL );
	};

	void eventrealmClubStandupImmediately ()
	{
		static UFunction* pfnrealmClubStandupImmediately = NULL;

		if ( !pfnrealmClubStandupImmediately )
			pfnrealmClubStandupImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.realmClubStandupImmediately" );

		ACCPawn_eventrealmClubStandupImmediately_Parms realmClubStandupImmediately_Parms;

		this->ProcessEvent( pfnrealmClubStandupImmediately, &realmClubStandupImmediately_Parms, NULL );
	};

	void eventrealmClubStandupLatent ()
	{
		static UFunction* pfnrealmClubStandupLatent = NULL;

		if ( !pfnrealmClubStandupLatent )
			pfnrealmClubStandupLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.realmClubStandupLatent" );

		ACCPawn_eventrealmClubStandupLatent_Parms realmClubStandupLatent_Parms;

		this->ProcessEvent( pfnrealmClubStandupLatent, &realmClubStandupLatent_Parms, NULL );
	};

	void eventrealmClubSitdownImmediately ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnrealmClubSitdownImmediately = NULL;

		if ( !pfnrealmClubSitdownImmediately )
			pfnrealmClubSitdownImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.realmClubSitdownImmediately" );

		ACCPawn_eventrealmClubSitdownImmediately_Parms realmClubSitdownImmediately_Parms;
		realmClubSitdownImmediately_Parms.SitableActor = SitableActor;
		realmClubSitdownImmediately_Parms.SitdownType = SitdownType;
		realmClubSitdownImmediately_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnrealmClubSitdownImmediately, &realmClubSitdownImmediately_Parms, NULL );
	};

	void eventrealmClubSitdownLatent ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnrealmClubSitdownLatent = NULL;

		if ( !pfnrealmClubSitdownLatent )
			pfnrealmClubSitdownLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.realmClubSitdownLatent" );

		ACCPawn_eventrealmClubSitdownLatent_Parms realmClubSitdownLatent_Parms;
		realmClubSitdownLatent_Parms.SitableActor = SitableActor;
		realmClubSitdownLatent_Parms.SitdownType = SitdownType;
		realmClubSitdownLatent_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnrealmClubSitdownLatent, &realmClubSitdownLatent_Parms, NULL );
	};

	void OnSitableLogicStartedSittingState ( int StartParam, int RulingExtraFlags )
	{
		static UFunction* pfnOnSitableLogicStartedSittingState = NULL;

		if ( !pfnOnSitableLogicStartedSittingState )
			pfnOnSitableLogicStartedSittingState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnSitableLogicStartedSittingState" );

		ACCPawn_execOnSitableLogicStartedSittingState_Parms OnSitableLogicStartedSittingState_Parms;
		OnSitableLogicStartedSittingState_Parms.StartParam = StartParam;
		OnSitableLogicStartedSittingState_Parms.RulingExtraFlags = RulingExtraFlags;

		this->ProcessEvent( pfnOnSitableLogicStartedSittingState, &OnSitableLogicStartedSittingState_Parms, NULL );
	};

	void OnSitableLogicStartedIdleState ()
	{
		static UFunction* pfnOnSitableLogicStartedIdleState = NULL;

		if ( !pfnOnSitableLogicStartedIdleState )
			pfnOnSitableLogicStartedIdleState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnSitableLogicStartedIdleState" );

		ACCPawn_execOnSitableLogicStartedIdleState_Parms OnSitableLogicStartedIdleState_Parms;

		this->ProcessEvent( pfnOnSitableLogicStartedIdleState, &OnSitableLogicStartedIdleState_Parms, NULL );
	};

	void ClubTestStage6 ()
	{
		static UFunction* pfnClubTestStage6 = NULL;

		if ( !pfnClubTestStage6 )
			pfnClubTestStage6 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage6" );

		ACCPawn_execClubTestStage6_Parms ClubTestStage6_Parms;

		this->ProcessEvent( pfnClubTestStage6, &ClubTestStage6_Parms, NULL );
	};

	void ClubTestStage5 ()
	{
		static UFunction* pfnClubTestStage5 = NULL;

		if ( !pfnClubTestStage5 )
			pfnClubTestStage5 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage5" );

		ACCPawn_execClubTestStage5_Parms ClubTestStage5_Parms;

		this->ProcessEvent( pfnClubTestStage5, &ClubTestStage5_Parms, NULL );
	};

	void ClubTestStage4 ()
	{
		static UFunction* pfnClubTestStage4 = NULL;

		if ( !pfnClubTestStage4 )
			pfnClubTestStage4 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage4" );

		ACCPawn_execClubTestStage4_Parms ClubTestStage4_Parms;

		this->ProcessEvent( pfnClubTestStage4, &ClubTestStage4_Parms, NULL );
	};

	void ClubTestStage3 ()
	{
		static UFunction* pfnClubTestStage3 = NULL;

		if ( !pfnClubTestStage3 )
			pfnClubTestStage3 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage3" );

		ACCPawn_execClubTestStage3_Parms ClubTestStage3_Parms;

		this->ProcessEvent( pfnClubTestStage3, &ClubTestStage3_Parms, NULL );
	};

	void ClubTestStage2 ()
	{
		static UFunction* pfnClubTestStage2 = NULL;

		if ( !pfnClubTestStage2 )
			pfnClubTestStage2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage2" );

		ACCPawn_execClubTestStage2_Parms ClubTestStage2_Parms;

		this->ProcessEvent( pfnClubTestStage2, &ClubTestStage2_Parms, NULL );
	};

	void ClubTestStage1a2 ()
	{
		static UFunction* pfnClubTestStage1a2 = NULL;

		if ( !pfnClubTestStage1a2 )
			pfnClubTestStage1a2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage1a2" );

		ACCPawn_execClubTestStage1a2_Parms ClubTestStage1a2_Parms;

		this->ProcessEvent( pfnClubTestStage1a2, &ClubTestStage1a2_Parms, NULL );
	};

	void ClubTestStage1a1 ()
	{
		static UFunction* pfnClubTestStage1a1 = NULL;

		if ( !pfnClubTestStage1a1 )
			pfnClubTestStage1a1 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage1a1" );

		ACCPawn_execClubTestStage1a1_Parms ClubTestStage1a1_Parms;

		this->ProcessEvent( pfnClubTestStage1a1, &ClubTestStage1a1_Parms, NULL );
	};

	void ClubTestStage1 ()
	{
		static UFunction* pfnClubTestStage1 = NULL;

		if ( !pfnClubTestStage1 )
			pfnClubTestStage1 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage1" );

		ACCPawn_execClubTestStage1_Parms ClubTestStage1_Parms;

		this->ProcessEvent( pfnClubTestStage1, &ClubTestStage1_Parms, NULL );
	};

	void ClubTestStage0 ()
	{
		static UFunction* pfnClubTestStage0 = NULL;

		if ( !pfnClubTestStage0 )
			pfnClubTestStage0 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestStage0" );

		ACCPawn_execClubTestStage0_Parms ClubTestStage0_Parms;

		this->ProcessEvent( pfnClubTestStage0, &ClubTestStage0_Parms, NULL );
	};

	void ClubTestFromInstance ()
	{
		static UFunction* pfnClubTestFromInstance = NULL;

		if ( !pfnClubTestFromInstance )
			pfnClubTestFromInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubTestFromInstance" );

		ACCPawn_execClubTestFromInstance_Parms ClubTestFromInstance_Parms;

		this->ProcessEvent( pfnClubTestFromInstance, &ClubTestFromInstance_Parms, NULL );
	};

	void ClubStandupImmediately ()
	{
		static UFunction* pfnClubStandupImmediately = NULL;

		if ( !pfnClubStandupImmediately )
			pfnClubStandupImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubStandupImmediately" );

		ACCPawn_execClubStandupImmediately_Parms ClubStandupImmediately_Parms;

		this->ProcessEvent( pfnClubStandupImmediately, &ClubStandupImmediately_Parms, NULL );
	};

	void ClubStandupLatent ()
	{
		static UFunction* pfnClubStandupLatent = NULL;

		if ( !pfnClubStandupLatent )
			pfnClubStandupLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubStandupLatent" );

		ACCPawn_execClubStandupLatent_Parms ClubStandupLatent_Parms;

		this->ProcessEvent( pfnClubStandupLatent, &ClubStandupLatent_Parms, NULL );
	};

	void ClubSitdownImmediately ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnClubSitdownImmediately = NULL;

		if ( !pfnClubSitdownImmediately )
			pfnClubSitdownImmediately = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubSitdownImmediately" );

		ACCPawn_execClubSitdownImmediately_Parms ClubSitdownImmediately_Parms;
		ClubSitdownImmediately_Parms.SitableActor = SitableActor;
		ClubSitdownImmediately_Parms.SitdownType = SitdownType;
		ClubSitdownImmediately_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnClubSitdownImmediately, &ClubSitdownImmediately_Parms, NULL );
	};

	void ClubSitdownLatent ( void* SitableActor, int SitdownType, int AnimIndex )
	{
		static UFunction* pfnClubSitdownLatent = NULL;

		if ( !pfnClubSitdownLatent )
			pfnClubSitdownLatent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubSitdownLatent" );

		ACCPawn_execClubSitdownLatent_Parms ClubSitdownLatent_Parms;
		ClubSitdownLatent_Parms.SitableActor = SitableActor;
		ClubSitdownLatent_Parms.SitdownType = SitdownType;
		ClubSitdownLatent_Parms.AnimIndex = AnimIndex;

		this->ProcessEvent( pfnClubSitdownLatent, &ClubSitdownLatent_Parms, NULL );
	};

	void ClubSitableLogic_ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
	{
		static UFunction* pfnClubSitableLogic_ProcessViewRotation = NULL;

		if ( !pfnClubSitableLogic_ProcessViewRotation )
			pfnClubSitableLogic_ProcessViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClubSitableLogic_ProcessViewRotation" );

		ACCPawn_execClubSitableLogic_ProcessViewRotation_Parms ClubSitableLogic_ProcessViewRotation_Parms;
		ClubSitableLogic_ProcessViewRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnClubSitableLogic_ProcessViewRotation, &ClubSitableLogic_ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ClubSitableLogic_ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
		if ( out_DeltaRot )
			memcpy( out_DeltaRot, &ClubSitableLogic_ProcessViewRotation_Parms.out_DeltaRot, 0xC ); // CPF_OutParm
	};

	void TickClubSitableLogic ( float DeltaTime )
	{
		static UFunction* pfnTickClubSitableLogic = NULL;

		if ( !pfnTickClubSitableLogic )
			pfnTickClubSitableLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TickClubSitableLogic" );

		ACCPawn_execTickClubSitableLogic_Parms TickClubSitableLogic_Parms;
		TickClubSitableLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickClubSitableLogic, &TickClubSitableLogic_Parms, NULL );
	};

	void ChangeClubSitableLogicRulingInfo ( struct FCSLRulingInfo* NewRulingInfoStruct )
	{
		static UFunction* pfnChangeClubSitableLogicRulingInfo = NULL;

		if ( !pfnChangeClubSitableLogicRulingInfo )
			pfnChangeClubSitableLogicRulingInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ChangeClubSitableLogicRulingInfo" );

		ACCPawn_execChangeClubSitableLogicRulingInfo_Parms ChangeClubSitableLogicRulingInfo_Parms;

		this->ProcessEvent( pfnChangeClubSitableLogicRulingInfo, &ChangeClubSitableLogicRulingInfo_Parms, NULL );

		if ( NewRulingInfoStruct )
			memcpy( NewRulingInfoStruct, &ChangeClubSitableLogicRulingInfo_Parms.NewRulingInfoStruct, 0x20 ); // CPF_OutParm
	};

	struct FCSLRulingInfo BuildCLSRulingInfo ( unsigned char NewRulingAction, struct FCSL_SitableActorInfo NewRulingSitable, int NewRulingActionParameter, struct FName NewRulingActionNameParameter, int NewRulingFlags, int NewRulingExtraFlags )
	{
		static UFunction* pfnBuildCLSRulingInfo = NULL;

		if ( !pfnBuildCLSRulingInfo )
			pfnBuildCLSRulingInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildCLSRulingInfo" );

		ACCPawn_execBuildCLSRulingInfo_Parms BuildCLSRulingInfo_Parms;
		BuildCLSRulingInfo_Parms.NewRulingAction = NewRulingAction;
		memcpy( &BuildCLSRulingInfo_Parms.NewRulingSitable, &NewRulingSitable, 0x8 );
		BuildCLSRulingInfo_Parms.NewRulingActionParameter = NewRulingActionParameter;
		memcpy( &BuildCLSRulingInfo_Parms.NewRulingActionNameParameter, &NewRulingActionNameParameter, 0x8 );
		BuildCLSRulingInfo_Parms.NewRulingFlags = NewRulingFlags;
		BuildCLSRulingInfo_Parms.NewRulingExtraFlags = NewRulingExtraFlags;

		this->ProcessEvent( pfnBuildCLSRulingInfo, &BuildCLSRulingInfo_Parms, NULL );

		return BuildCLSRulingInfo_Parms.ReturnValue;
	};

	bool SitableLogicIsSitting ()
	{
		static UFunction* pfnSitableLogicIsSitting = NULL;

		if ( !pfnSitableLogicIsSitting )
			pfnSitableLogicIsSitting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SitableLogicIsSitting" );

		ACCPawn_execSitableLogicIsSitting_Parms SitableLogicIsSitting_Parms;

		this->ProcessEvent( pfnSitableLogicIsSitting, &SitableLogicIsSitting_Parms, NULL );

		return SitableLogicIsSitting_Parms.ReturnValue;
	};

	bool eventSitableLogicIsActive ()
	{
		static UFunction* pfnSitableLogicIsActive = NULL;

		if ( !pfnSitableLogicIsActive )
			pfnSitableLogicIsActive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SitableLogicIsActive" );

		ACCPawn_eventSitableLogicIsActive_Parms SitableLogicIsActive_Parms;

		this->ProcessEvent( pfnSitableLogicIsActive, &SitableLogicIsActive_Parms, NULL );

		return SitableLogicIsActive_Parms.ReturnValue;
	};

	struct FCSL_SitableActorInfo eventSearchForSitableObject ()
	{
		static UFunction* pfnSearchForSitableObject = NULL;

		if ( !pfnSearchForSitableObject )
			pfnSearchForSitableObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SearchForSitableObject" );

		ACCPawn_eventSearchForSitableObject_Parms SearchForSitableObject_Parms;

		this->ProcessEvent( pfnSearchForSitableObject, &SearchForSitableObject_Parms, NULL );

		return SearchForSitableObject_Parms.ReturnValue;
	};

	void DoSearchForSitableAndDrawDebug ()
	{
		static UFunction* pfnDoSearchForSitableAndDrawDebug = NULL;

		if ( !pfnDoSearchForSitableAndDrawDebug )
			pfnDoSearchForSitableAndDrawDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.DoSearchForSitableAndDrawDebug" );

		ACCPawn_execDoSearchForSitableAndDrawDebug_Parms DoSearchForSitableAndDrawDebug_Parms;

		this->ProcessEvent( pfnDoSearchForSitableAndDrawDebug, &DoSearchForSitableAndDrawDebug_Parms, NULL );
	};

	bool GetInitialPawnTransformForSitable ( struct FCSL_SitableActorInfo* Sitable, struct FVector* OutLocation, struct FRotator* OutRotation )
	{
		static UFunction* pfnGetInitialPawnTransformForSitable = NULL;

		if ( !pfnGetInitialPawnTransformForSitable )
			pfnGetInitialPawnTransformForSitable = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetInitialPawnTransformForSitable" );

		ACCPawn_execGetInitialPawnTransformForSitable_Parms GetInitialPawnTransformForSitable_Parms;

		this->ProcessEvent( pfnGetInitialPawnTransformForSitable, &GetInitialPawnTransformForSitable_Parms, NULL );

		if ( Sitable )
			memcpy( Sitable, &GetInitialPawnTransformForSitable_Parms.Sitable, 0x8 ); // CPF_OutParm
		if ( OutLocation )
			memcpy( OutLocation, &GetInitialPawnTransformForSitable_Parms.OutLocation, 0xC ); // CPF_OutParm
		if ( OutRotation )
			memcpy( OutRotation, &GetInitialPawnTransformForSitable_Parms.OutRotation, 0xC ); // CPF_OutParm

		return GetInitialPawnTransformForSitable_Parms.ReturnValue;
	};

	bool ConditionalCreateSlubSitableLogic ()
	{
		static UFunction* pfnConditionalCreateSlubSitableLogic = NULL;

		if ( !pfnConditionalCreateSlubSitableLogic )
			pfnConditionalCreateSlubSitableLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ConditionalCreateSlubSitableLogic" );

		ACCPawn_execConditionalCreateSlubSitableLogic_Parms ConditionalCreateSlubSitableLogic_Parms;

		this->ProcessEvent( pfnConditionalCreateSlubSitableLogic, &ConditionalCreateSlubSitableLogic_Parms, NULL );

		return ConditionalCreateSlubSitableLogic_Parms.ReturnValue;
	};

	bool CreateSlubSitableLogic ()
	{
		static UFunction* pfnCreateSlubSitableLogic = NULL;

		if ( !pfnCreateSlubSitableLogic )
			pfnCreateSlubSitableLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CreateSlubSitableLogic" );

		ACCPawn_execCreateSlubSitableLogic_Parms CreateSlubSitableLogic_Parms;

		this->ProcessEvent( pfnCreateSlubSitableLogic, &CreateSlubSitableLogic_Parms, NULL );

		return CreateSlubSitableLogic_Parms.ReturnValue;
	};

	void eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping )
	{
		static UFunction* pfnSetAnimPosition = NULL;

		if ( !pfnSetAnimPosition )
			pfnSetAnimPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetAnimPosition" );

		ACCPawn_eventSetAnimPosition_Parms SetAnimPosition_Parms;
		memcpy( &SetAnimPosition_Parms.SlotName, &SlotName, 0x8 );
		SetAnimPosition_Parms.ChannelIndex = ChannelIndex;
		memcpy( &SetAnimPosition_Parms.InAnimSeqName, &InAnimSeqName, 0x8 );
		SetAnimPosition_Parms.InPosition = InPosition;
		SetAnimPosition_Parms.bFireNotifies = bFireNotifies;
		SetAnimPosition_Parms.bLooping = bLooping;

		this->ProcessEvent( pfnSetAnimPosition, &SetAnimPosition_Parms, NULL );
	};

	void eventBeginAnimControl ( TArray< void* > InAnimSets )
	{
		static UFunction* pfnBeginAnimControl = NULL;

		if ( !pfnBeginAnimControl )
			pfnBeginAnimControl = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BeginAnimControl" );

		ACCPawn_eventBeginAnimControl_Parms BeginAnimControl_Parms;
		BeginAnimControl_Parms.InAnimSets = InAnimSets;

		this->ProcessEvent( pfnBeginAnimControl, &BeginAnimControl_Parms, NULL );
	};

	void OnToggle ( void* Action )
	{
		static UFunction* pfnOnToggle = NULL;

		if ( !pfnOnToggle )
			pfnOnToggle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnToggle" );

		ACCPawn_execOnToggle_Parms OnToggle_Parms;
		OnToggle_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggle, &OnToggle_Parms, NULL );
	};

	void TestPointAtEnd ()
	{
		static UFunction* pfnTestPointAtEnd = NULL;

		if ( !pfnTestPointAtEnd )
			pfnTestPointAtEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtEnd" );

		ACCPawn_execTestPointAtEnd_Parms TestPointAtEnd_Parms;

		this->ProcessEvent( pfnTestPointAtEnd, &TestPointAtEnd_Parms, NULL );
	};

	void TestPointAtFourthStage ()
	{
		static UFunction* pfnTestPointAtFourthStage = NULL;

		if ( !pfnTestPointAtFourthStage )
			pfnTestPointAtFourthStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtFourthStage" );

		ACCPawn_execTestPointAtFourthStage_Parms TestPointAtFourthStage_Parms;

		this->ProcessEvent( pfnTestPointAtFourthStage, &TestPointAtFourthStage_Parms, NULL );
	};

	void TestPointAtThirdStage ()
	{
		static UFunction* pfnTestPointAtThirdStage = NULL;

		if ( !pfnTestPointAtThirdStage )
			pfnTestPointAtThirdStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtThirdStage" );

		ACCPawn_execTestPointAtThirdStage_Parms TestPointAtThirdStage_Parms;

		this->ProcessEvent( pfnTestPointAtThirdStage, &TestPointAtThirdStage_Parms, NULL );
	};

	void TestPointAtSecondStage ()
	{
		static UFunction* pfnTestPointAtSecondStage = NULL;

		if ( !pfnTestPointAtSecondStage )
			pfnTestPointAtSecondStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtSecondStage" );

		ACCPawn_execTestPointAtSecondStage_Parms TestPointAtSecondStage_Parms;

		this->ProcessEvent( pfnTestPointAtSecondStage, &TestPointAtSecondStage_Parms, NULL );
	};

	void TestPointAtFirstStage ()
	{
		static UFunction* pfnTestPointAtFirstStage = NULL;

		if ( !pfnTestPointAtFirstStage )
			pfnTestPointAtFirstStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtFirstStage" );

		ACCPawn_execTestPointAtFirstStage_Parms TestPointAtFirstStage_Parms;

		this->ProcessEvent( pfnTestPointAtFirstStage, &TestPointAtFirstStage_Parms, NULL );
	};

	void TestPointAtBegin ()
	{
		static UFunction* pfnTestPointAtBegin = NULL;

		if ( !pfnTestPointAtBegin )
			pfnTestPointAtBegin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAtBegin" );

		ACCPawn_execTestPointAtBegin_Parms TestPointAtBegin_Parms;

		this->ProcessEvent( pfnTestPointAtBegin, &TestPointAtBegin_Parms, NULL );
	};

	void ServerTestPointAt ( float Time, float StartTime, float EndTime )
	{
		static UFunction* pfnServerTestPointAt = NULL;

		if ( !pfnServerTestPointAt )
			pfnServerTestPointAt = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerTestPointAt" );

		ACCPawn_execServerTestPointAt_Parms ServerTestPointAt_Parms;
		ServerTestPointAt_Parms.Time = Time;
		ServerTestPointAt_Parms.StartTime = StartTime;
		ServerTestPointAt_Parms.EndTime = EndTime;

		this->ProcessEvent( pfnServerTestPointAt, &ServerTestPointAt_Parms, NULL );
	};

	void TestPointAt ( float Time )
	{
		static UFunction* pfnTestPointAt = NULL;

		if ( !pfnTestPointAt )
			pfnTestPointAt = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPointAt" );

		ACCPawn_execTestPointAt_Parms TestPointAt_Parms;
		TestPointAt_Parms.Time = Time;

		this->ProcessEvent( pfnTestPointAt, &TestPointAt_Parms, NULL );
	};

	void TestMobileEnd ()
	{
		static UFunction* pfnTestMobileEnd = NULL;

		if ( !pfnTestMobileEnd )
			pfnTestMobileEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileEnd" );

		ACCPawn_execTestMobileEnd_Parms TestMobileEnd_Parms;

		this->ProcessEvent( pfnTestMobileEnd, &TestMobileEnd_Parms, NULL );
	};

	void TestMobileFourthStage ()
	{
		static UFunction* pfnTestMobileFourthStage = NULL;

		if ( !pfnTestMobileFourthStage )
			pfnTestMobileFourthStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileFourthStage" );

		ACCPawn_execTestMobileFourthStage_Parms TestMobileFourthStage_Parms;

		this->ProcessEvent( pfnTestMobileFourthStage, &TestMobileFourthStage_Parms, NULL );
	};

	void TestMobileThirdStage ()
	{
		static UFunction* pfnTestMobileThirdStage = NULL;

		if ( !pfnTestMobileThirdStage )
			pfnTestMobileThirdStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileThirdStage" );

		ACCPawn_execTestMobileThirdStage_Parms TestMobileThirdStage_Parms;

		this->ProcessEvent( pfnTestMobileThirdStage, &TestMobileThirdStage_Parms, NULL );
	};

	void TestMobileSecondStage ()
	{
		static UFunction* pfnTestMobileSecondStage = NULL;

		if ( !pfnTestMobileSecondStage )
			pfnTestMobileSecondStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileSecondStage" );

		ACCPawn_execTestMobileSecondStage_Parms TestMobileSecondStage_Parms;

		this->ProcessEvent( pfnTestMobileSecondStage, &TestMobileSecondStage_Parms, NULL );
	};

	void TestMobileFirstStage ()
	{
		static UFunction* pfnTestMobileFirstStage = NULL;

		if ( !pfnTestMobileFirstStage )
			pfnTestMobileFirstStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileFirstStage" );

		ACCPawn_execTestMobileFirstStage_Parms TestMobileFirstStage_Parms;

		this->ProcessEvent( pfnTestMobileFirstStage, &TestMobileFirstStage_Parms, NULL );
	};

	void TestMobileBegin ()
	{
		static UFunction* pfnTestMobileBegin = NULL;

		if ( !pfnTestMobileBegin )
			pfnTestMobileBegin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobileBegin" );

		ACCPawn_execTestMobileBegin_Parms TestMobileBegin_Parms;

		this->ProcessEvent( pfnTestMobileBegin, &TestMobileBegin_Parms, NULL );
	};

	void ServerTestMobile ( float Time, float StartTime, float EndTime )
	{
		static UFunction* pfnServerTestMobile = NULL;

		if ( !pfnServerTestMobile )
			pfnServerTestMobile = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerTestMobile" );

		ACCPawn_execServerTestMobile_Parms ServerTestMobile_Parms;
		ServerTestMobile_Parms.Time = Time;
		ServerTestMobile_Parms.StartTime = StartTime;
		ServerTestMobile_Parms.EndTime = EndTime;

		this->ProcessEvent( pfnServerTestMobile, &ServerTestMobile_Parms, NULL );
	};

	void TestMobile ( float Time )
	{
		static UFunction* pfnTestMobile = NULL;

		if ( !pfnTestMobile )
			pfnTestMobile = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestMobile" );

		ACCPawn_execTestMobile_Parms TestMobile_Parms;
		TestMobile_Parms.Time = Time;

		this->ProcessEvent( pfnTestMobile, &TestMobile_Parms, NULL );
	};

	void TestLMGEnd ()
	{
		static UFunction* pfnTestLMGEnd = NULL;

		if ( !pfnTestLMGEnd )
			pfnTestLMGEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGEnd" );

		ACCPawn_execTestLMGEnd_Parms TestLMGEnd_Parms;

		this->ProcessEvent( pfnTestLMGEnd, &TestLMGEnd_Parms, NULL );
	};

	void TestLMGFourthStage ()
	{
		static UFunction* pfnTestLMGFourthStage = NULL;

		if ( !pfnTestLMGFourthStage )
			pfnTestLMGFourthStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGFourthStage" );

		ACCPawn_execTestLMGFourthStage_Parms TestLMGFourthStage_Parms;

		this->ProcessEvent( pfnTestLMGFourthStage, &TestLMGFourthStage_Parms, NULL );
	};

	void TestLMGThirdStage ()
	{
		static UFunction* pfnTestLMGThirdStage = NULL;

		if ( !pfnTestLMGThirdStage )
			pfnTestLMGThirdStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGThirdStage" );

		ACCPawn_execTestLMGThirdStage_Parms TestLMGThirdStage_Parms;

		this->ProcessEvent( pfnTestLMGThirdStage, &TestLMGThirdStage_Parms, NULL );
	};

	void TestLMGSecondStage ()
	{
		static UFunction* pfnTestLMGSecondStage = NULL;

		if ( !pfnTestLMGSecondStage )
			pfnTestLMGSecondStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGSecondStage" );

		ACCPawn_execTestLMGSecondStage_Parms TestLMGSecondStage_Parms;

		this->ProcessEvent( pfnTestLMGSecondStage, &TestLMGSecondStage_Parms, NULL );
	};

	void TestLMGFirstStage ()
	{
		static UFunction* pfnTestLMGFirstStage = NULL;

		if ( !pfnTestLMGFirstStage )
			pfnTestLMGFirstStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGFirstStage" );

		ACCPawn_execTestLMGFirstStage_Parms TestLMGFirstStage_Parms;

		this->ProcessEvent( pfnTestLMGFirstStage, &TestLMGFirstStage_Parms, NULL );
	};

	void TestLMGBegin ()
	{
		static UFunction* pfnTestLMGBegin = NULL;

		if ( !pfnTestLMGBegin )
			pfnTestLMGBegin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMGBegin" );

		ACCPawn_execTestLMGBegin_Parms TestLMGBegin_Parms;

		this->ProcessEvent( pfnTestLMGBegin, &TestLMGBegin_Parms, NULL );
	};

	void ServerTestLMG ()
	{
		static UFunction* pfnServerTestLMG = NULL;

		if ( !pfnServerTestLMG )
			pfnServerTestLMG = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerTestLMG" );

		ACCPawn_execServerTestLMG_Parms ServerTestLMG_Parms;

		this->ProcessEvent( pfnServerTestLMG, &ServerTestLMG_Parms, NULL );
	};

	void TestLMG ()
	{
		static UFunction* pfnTestLMG = NULL;

		if ( !pfnTestLMG )
			pfnTestLMG = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestLMG" );

		ACCPawn_execTestLMG_Parms TestLMG_Parms;

		this->ProcessEvent( pfnTestLMG, &TestLMG_Parms, NULL );
	};

	void TestContusionEnd ()
	{
		static UFunction* pfnTestContusionEnd = NULL;

		if ( !pfnTestContusionEnd )
			pfnTestContusionEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionEnd" );

		ACCPawn_execTestContusionEnd_Parms TestContusionEnd_Parms;

		this->ProcessEvent( pfnTestContusionEnd, &TestContusionEnd_Parms, NULL );
	};

	void TestContusionFourthStage ()
	{
		static UFunction* pfnTestContusionFourthStage = NULL;

		if ( !pfnTestContusionFourthStage )
			pfnTestContusionFourthStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionFourthStage" );

		ACCPawn_execTestContusionFourthStage_Parms TestContusionFourthStage_Parms;

		this->ProcessEvent( pfnTestContusionFourthStage, &TestContusionFourthStage_Parms, NULL );
	};

	void TestContusionThirdStage ()
	{
		static UFunction* pfnTestContusionThirdStage = NULL;

		if ( !pfnTestContusionThirdStage )
			pfnTestContusionThirdStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionThirdStage" );

		ACCPawn_execTestContusionThirdStage_Parms TestContusionThirdStage_Parms;

		this->ProcessEvent( pfnTestContusionThirdStage, &TestContusionThirdStage_Parms, NULL );
	};

	void TestContusionSecondStage ()
	{
		static UFunction* pfnTestContusionSecondStage = NULL;

		if ( !pfnTestContusionSecondStage )
			pfnTestContusionSecondStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionSecondStage" );

		ACCPawn_execTestContusionSecondStage_Parms TestContusionSecondStage_Parms;

		this->ProcessEvent( pfnTestContusionSecondStage, &TestContusionSecondStage_Parms, NULL );
	};

	void TestContusionFirstStage ()
	{
		static UFunction* pfnTestContusionFirstStage = NULL;

		if ( !pfnTestContusionFirstStage )
			pfnTestContusionFirstStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionFirstStage" );

		ACCPawn_execTestContusionFirstStage_Parms TestContusionFirstStage_Parms;

		this->ProcessEvent( pfnTestContusionFirstStage, &TestContusionFirstStage_Parms, NULL );
	};

	void TestContusionBegin ()
	{
		static UFunction* pfnTestContusionBegin = NULL;

		if ( !pfnTestContusionBegin )
			pfnTestContusionBegin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusionBegin" );

		ACCPawn_execTestContusionBegin_Parms TestContusionBegin_Parms;

		this->ProcessEvent( pfnTestContusionBegin, &TestContusionBegin_Parms, NULL );
	};

	void ServerTestContusion ( float Time )
	{
		static UFunction* pfnServerTestContusion = NULL;

		if ( !pfnServerTestContusion )
			pfnServerTestContusion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerTestContusion" );

		ACCPawn_execServerTestContusion_Parms ServerTestContusion_Parms;
		ServerTestContusion_Parms.Time = Time;

		this->ProcessEvent( pfnServerTestContusion, &ServerTestContusion_Parms, NULL );
	};

	void TestContusion ( float Time )
	{
		static UFunction* pfnTestContusion = NULL;

		if ( !pfnTestContusion )
			pfnTestContusion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestContusion" );

		ACCPawn_execTestContusion_Parms TestContusion_Parms;
		TestContusion_Parms.Time = Time;

		this->ProcessEvent( pfnTestContusion, &TestContusion_Parms, NULL );
	};

	float GetDamagePenetration ()
	{
		static UFunction* pfnGetDamagePenetration = NULL;

		if ( !pfnGetDamagePenetration )
			pfnGetDamagePenetration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetDamagePenetration" );

		ACCPawn_execGetDamagePenetration_Parms GetDamagePenetration_Parms;

		this->ProcessEvent( pfnGetDamagePenetration, &GetDamagePenetration_Parms, NULL );

		return GetDamagePenetration_Parms.ReturnValue;
	};

	void TestBM ( float Time )
	{
		static UFunction* pfnTestBM = NULL;

		if ( !pfnTestBM )
			pfnTestBM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestBM" );

		ACCPawn_execTestBM_Parms TestBM_Parms;
		TestBM_Parms.Time = Time;

		this->ProcessEvent( pfnTestBM, &TestBM_Parms, NULL );
	};

	void ServerTestBM ( float Time )
	{
		static UFunction* pfnServerTestBM = NULL;

		if ( !pfnServerTestBM )
			pfnServerTestBM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerTestBM" );

		ACCPawn_execServerTestBM_Parms ServerTestBM_Parms;
		ServerTestBM_Parms.Time = Time;

		this->ProcessEvent( pfnServerTestBM, &ServerTestBM_Parms, NULL );
	};

	void FrozeMovementFor ( float frozeTime )
	{
		static UFunction* pfnFrozeMovementFor = NULL;

		if ( !pfnFrozeMovementFor )
			pfnFrozeMovementFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FrozeMovementFor" );

		ACCPawn_execFrozeMovementFor_Parms FrozeMovementFor_Parms;
		FrozeMovementFor_Parms.frozeTime = frozeTime;

		this->ProcessEvent( pfnFrozeMovementFor, &FrozeMovementFor_Parms, NULL );
	};

	void* FindMostRelevantTurnNode ()
	{
		static UFunction* pfnFindMostRelevantTurnNode = NULL;

		if ( !pfnFindMostRelevantTurnNode )
			pfnFindMostRelevantTurnNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FindMostRelevantTurnNode" );

		ACCPawn_execFindMostRelevantTurnNode_Parms FindMostRelevantTurnNode_Parms;

		this->ProcessEvent( pfnFindMostRelevantTurnNode, &FindMostRelevantTurnNode_Parms, NULL );

		return FindMostRelevantTurnNode_Parms.ReturnValue;
	};

	void* FindMostRelevantNode ( TArray< void* >* Nodes )
	{
		static UFunction* pfnFindMostRelevantNode = NULL;

		if ( !pfnFindMostRelevantNode )
			pfnFindMostRelevantNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FindMostRelevantNode" );

		ACCPawn_execFindMostRelevantNode_Parms FindMostRelevantNode_Parms;

		this->ProcessEvent( pfnFindMostRelevantNode, &FindMostRelevantNode_Parms, NULL );

		if ( Nodes )
			*Nodes = FindMostRelevantNode_Parms.Nodes; // CPF_OutParm

		return FindMostRelevantNode_Parms.ReturnValue;
	};

	void eventOnCharacterComponentTransformsComputed ( void* Comp )
	{
		static UFunction* pfnOnCharacterComponentTransformsComputed = NULL;

		if ( !pfnOnCharacterComponentTransformsComputed )
			pfnOnCharacterComponentTransformsComputed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnCharacterComponentTransformsComputed" );

		ACCPawn_eventOnCharacterComponentTransformsComputed_Parms OnCharacterComponentTransformsComputed_Parms;
		OnCharacterComponentTransformsComputed_Parms.Comp = Comp;

		this->ProcessEvent( pfnOnCharacterComponentTransformsComputed, &OnCharacterComponentTransformsComputed_Parms, NULL );
	};

	void RemoveShadowCharacterComponent ( struct FName Id )
	{
		static UFunction* pfnRemoveShadowCharacterComponent = NULL;

		if ( !pfnRemoveShadowCharacterComponent )
			pfnRemoveShadowCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.RemoveShadowCharacterComponent" );

		ACCPawn_execRemoveShadowCharacterComponent_Parms RemoveShadowCharacterComponent_Parms;
		memcpy( &RemoveShadowCharacterComponent_Parms.Id, &Id, 0x8 );

		this->ProcessEvent( pfnRemoveShadowCharacterComponent, &RemoveShadowCharacterComponent_Parms, NULL );
	};

	void* CreateShadowCharacterComponent ( struct FName Id, class UMaterialInterface* Mtl )
	{
		static UFunction* pfnCreateShadowCharacterComponent = NULL;

		if ( !pfnCreateShadowCharacterComponent )
			pfnCreateShadowCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CreateShadowCharacterComponent" );

		ACCPawn_execCreateShadowCharacterComponent_Parms CreateShadowCharacterComponent_Parms;
		memcpy( &CreateShadowCharacterComponent_Parms.Id, &Id, 0x8 );
		CreateShadowCharacterComponent_Parms.Mtl = Mtl;

		this->ProcessEvent( pfnCreateShadowCharacterComponent, &CreateShadowCharacterComponent_Parms, NULL );

		return CreateShadowCharacterComponent_Parms.ReturnValue;
	};

	void FellOutOfWorld ( class UClass* dmgType )
	{
		static UFunction* pfnFellOutOfWorld = NULL;

		if ( !pfnFellOutOfWorld )
			pfnFellOutOfWorld = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FellOutOfWorld" );

		ACCPawn_execFellOutOfWorld_Parms FellOutOfWorld_Parms;
		FellOutOfWorld_Parms.dmgType = dmgType;

		this->ProcessEvent( pfnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
	};

	void FindAndMoveToPlayerStart ()
	{
		static UFunction* pfnFindAndMoveToPlayerStart = NULL;

		if ( !pfnFindAndMoveToPlayerStart )
			pfnFindAndMoveToPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FindAndMoveToPlayerStart" );

		ACCPawn_execFindAndMoveToPlayerStart_Parms FindAndMoveToPlayerStart_Parms;

		this->ProcessEvent( pfnFindAndMoveToPlayerStart, &FindAndMoveToPlayerStart_Parms, NULL );
	};

	bool TestEncroachment ( struct FVector Translation, struct FVector Extent )
	{
		static UFunction* pfnTestEncroachment = NULL;

		if ( !pfnTestEncroachment )
			pfnTestEncroachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestEncroachment" );

		ACCPawn_execTestEncroachment_Parms TestEncroachment_Parms;
		memcpy( &TestEncroachment_Parms.Translation, &Translation, 0xC );
		memcpy( &TestEncroachment_Parms.Extent, &Extent, 0xC );

		pfnTestEncroachment->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTestEncroachment, &TestEncroachment_Parms, NULL );
		pfnTestEncroachment->FunctionFlags |= 0x400;

		return TestEncroachment_Parms.ReturnValue;
	};

	void* GetClientActionManager ()
	{
		static UFunction* pfnGetClientActionManager = NULL;

		if ( !pfnGetClientActionManager )
			pfnGetClientActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetClientActionManager" );

		ACCPawn_execGetClientActionManager_Parms GetClientActionManager_Parms;

		this->ProcessEvent( pfnGetClientActionManager, &GetClientActionManager_Parms, NULL );

		return GetClientActionManager_Parms.ReturnValue;
	};

	void* GetServerActionManager ()
	{
		static UFunction* pfnGetServerActionManager = NULL;

		if ( !pfnGetServerActionManager )
			pfnGetServerActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetServerActionManager" );

		ACCPawn_execGetServerActionManager_Parms GetServerActionManager_Parms;

		this->ProcessEvent( pfnGetServerActionManager, &GetServerActionManager_Parms, NULL );

		return GetServerActionManager_Parms.ReturnValue;
	};

	void* GetMainActionManager ()
	{
		static UFunction* pfnGetMainActionManager = NULL;

		if ( !pfnGetMainActionManager )
			pfnGetMainActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetMainActionManager" );

		ACCPawn_execGetMainActionManager_Parms GetMainActionManager_Parms;

		this->ProcessEvent( pfnGetMainActionManager, &GetMainActionManager_Parms, NULL );

		return GetMainActionManager_Parms.ReturnValue;
	};

	void SetNewMaterial ( unsigned long bVis )
	{
		static UFunction* pfnSetNewMaterial = NULL;

		if ( !pfnSetNewMaterial )
			pfnSetNewMaterial = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetNewMaterial" );

		ACCPawn_execSetNewMaterial_Parms SetNewMaterial_Parms;
		SetNewMaterial_Parms.bVis = bVis;

		this->ProcessEvent( pfnSetNewMaterial, &SetNewMaterial_Parms, NULL );
	};

	void LoadDebugMovementNodeScaleNative ( struct FString Filename )
	{
		static UFunction* pfnLoadDebugMovementNodeScaleNative = NULL;

		if ( !pfnLoadDebugMovementNodeScaleNative )
			pfnLoadDebugMovementNodeScaleNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.LoadDebugMovementNodeScaleNative" );

		ACCPawn_execLoadDebugMovementNodeScaleNative_Parms LoadDebugMovementNodeScaleNative_Parms;
		memcpy( &LoadDebugMovementNodeScaleNative_Parms.Filename, &Filename, 0xC );

		pfnLoadDebugMovementNodeScaleNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLoadDebugMovementNodeScaleNative, &LoadDebugMovementNodeScaleNative_Parms, NULL );
		pfnLoadDebugMovementNodeScaleNative->FunctionFlags |= 0x400;
	};

	void SaveDebugMovementNodeScaleNative ( struct FString Filename )
	{
		static UFunction* pfnSaveDebugMovementNodeScaleNative = NULL;

		if ( !pfnSaveDebugMovementNodeScaleNative )
			pfnSaveDebugMovementNodeScaleNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SaveDebugMovementNodeScaleNative" );

		ACCPawn_execSaveDebugMovementNodeScaleNative_Parms SaveDebugMovementNodeScaleNative_Parms;
		memcpy( &SaveDebugMovementNodeScaleNative_Parms.Filename, &Filename, 0xC );

		pfnSaveDebugMovementNodeScaleNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSaveDebugMovementNodeScaleNative, &SaveDebugMovementNodeScaleNative_Parms, NULL );
		pfnSaveDebugMovementNodeScaleNative->FunctionFlags |= 0x400;
	};

	void LoadDebugMovementNodeScale ( struct FString Filename )
	{
		static UFunction* pfnLoadDebugMovementNodeScale = NULL;

		if ( !pfnLoadDebugMovementNodeScale )
			pfnLoadDebugMovementNodeScale = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.LoadDebugMovementNodeScale" );

		ACCPawn_execLoadDebugMovementNodeScale_Parms LoadDebugMovementNodeScale_Parms;
		memcpy( &LoadDebugMovementNodeScale_Parms.Filename, &Filename, 0xC );

		this->ProcessEvent( pfnLoadDebugMovementNodeScale, &LoadDebugMovementNodeScale_Parms, NULL );
	};

	void SaveDebugMovementNodeScale ( struct FString Filename )
	{
		static UFunction* pfnSaveDebugMovementNodeScale = NULL;

		if ( !pfnSaveDebugMovementNodeScale )
			pfnSaveDebugMovementNodeScale = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SaveDebugMovementNodeScale" );

		ACCPawn_execSaveDebugMovementNodeScale_Parms SaveDebugMovementNodeScale_Parms;
		memcpy( &SaveDebugMovementNodeScale_Parms.Filename, &Filename, 0xC );

		this->ProcessEvent( pfnSaveDebugMovementNodeScale, &SaveDebugMovementNodeScale_Parms, NULL );
	};

	struct FRotator eventGetAimRotation ()
	{
		static UFunction* pfnGetAimRotation = NULL;

		if ( !pfnGetAimRotation )
			pfnGetAimRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAimRotation" );

		ACCPawn_eventGetAimRotation_Parms GetAimRotation_Parms;

		this->ProcessEvent( pfnGetAimRotation, &GetAimRotation_Parms, NULL );

		return GetAimRotation_Parms.ReturnValue;
	};

	void gibbedBy ( class AActor* Other )
	{
		static UFunction* pfngibbedBy = NULL;

		if ( !pfngibbedBy )
			pfngibbedBy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.gibbedBy" );

		ACCPawn_execgibbedBy_Parms gibbedBy_Parms;
		gibbedBy_Parms.Other = Other;

		this->ProcessEvent( pfngibbedBy, &gibbedBy_Parms, NULL );
	};

	void eventCCUnhide ()
	{
		static UFunction* pfnCCUnhide = NULL;

		if ( !pfnCCUnhide )
			pfnCCUnhide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CCUnhide" );

		ACCPawn_eventCCUnhide_Parms CCUnhide_Parms;

		this->ProcessEvent( pfnCCUnhide, &CCUnhide_Parms, NULL );
	};

	void eventCCHide ()
	{
		static UFunction* pfnCCHide = NULL;

		if ( !pfnCCHide )
			pfnCCHide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CCHide" );

		ACCPawn_eventCCHide_Parms CCHide_Parms;

		this->ProcessEvent( pfnCCHide, &CCHide_Parms, NULL );
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TakeDamage" );

		ACCPawn_eventTakeDamage_Parms TakeDamage_Parms;
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

	struct FVector GetPawnSoundLocation ()
	{
		static UFunction* pfnGetPawnSoundLocation = NULL;

		if ( !pfnGetPawnSoundLocation )
			pfnGetPawnSoundLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetPawnSoundLocation" );

		ACCPawn_execGetPawnSoundLocation_Parms GetPawnSoundLocation_Parms;

		this->ProcessEvent( pfnGetPawnSoundLocation, &GetPawnSoundLocation_Parms, NULL );

		return GetPawnSoundLocation_Parms.ReturnValue;
	};

	void UpdateCollisionModeForClub ( unsigned long bEffectMode )
	{
		static UFunction* pfnUpdateCollisionModeForClub = NULL;

		if ( !pfnUpdateCollisionModeForClub )
			pfnUpdateCollisionModeForClub = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCollisionModeForClub" );

		ACCPawn_execUpdateCollisionModeForClub_Parms UpdateCollisionModeForClub_Parms;
		UpdateCollisionModeForClub_Parms.bEffectMode = bEffectMode;

		this->ProcessEvent( pfnUpdateCollisionModeForClub, &UpdateCollisionModeForClub_Parms, NULL );
	};

	void UpdateCollisionMode ( unsigned long bEffectMode )
	{
		static UFunction* pfnUpdateCollisionMode = NULL;

		if ( !pfnUpdateCollisionMode )
			pfnUpdateCollisionMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCollisionMode" );

		ACCPawn_execUpdateCollisionMode_Parms UpdateCollisionMode_Parms;
		UpdateCollisionMode_Parms.bEffectMode = bEffectMode;

		this->ProcessEvent( pfnUpdateCollisionMode, &UpdateCollisionMode_Parms, NULL );
	};

	bool IsInClubMode ()
	{
		static UFunction* pfnIsInClubMode = NULL;

		if ( !pfnIsInClubMode )
			pfnIsInClubMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.IsInClubMode" );

		ACCPawn_execIsInClubMode_Parms IsInClubMode_Parms;

		this->ProcessEvent( pfnIsInClubMode, &IsInClubMode_Parms, NULL );

		return IsInClubMode_Parms.ReturnValue;
	};

	void UpdateCollisionModeAuto ()
	{
		static UFunction* pfnUpdateCollisionModeAuto = NULL;

		if ( !pfnUpdateCollisionModeAuto )
			pfnUpdateCollisionModeAuto = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCollisionModeAuto" );

		ACCPawn_execUpdateCollisionModeAuto_Parms UpdateCollisionModeAuto_Parms;

		this->ProcessEvent( pfnUpdateCollisionModeAuto, &UpdateCollisionModeAuto_Parms, NULL );
	};

	bool CheckIfCanStandUpFromCrouch ()
	{
		static UFunction* pfnCheckIfCanStandUpFromCrouch = NULL;

		if ( !pfnCheckIfCanStandUpFromCrouch )
			pfnCheckIfCanStandUpFromCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CheckIfCanStandUpFromCrouch" );

		ACCPawn_execCheckIfCanStandUpFromCrouch_Parms CheckIfCanStandUpFromCrouch_Parms;

		this->ProcessEvent( pfnCheckIfCanStandUpFromCrouch, &CheckIfCanStandUpFromCrouch_Parms, NULL );

		return CheckIfCanStandUpFromCrouch_Parms.ReturnValue;
	};

	void UpdateCollisionSize ()
	{
		static UFunction* pfnUpdateCollisionSize = NULL;

		if ( !pfnUpdateCollisionSize )
			pfnUpdateCollisionSize = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCollisionSize" );

		ACCPawn_execUpdateCollisionSize_Parms UpdateCollisionSize_Parms;

		this->ProcessEvent( pfnUpdateCollisionSize, &UpdateCollisionSize_Parms, NULL );
	};

	void GetCollisionSizeValuesForMM ( unsigned char TheMovementMode, struct FVector* Translation, float* ColRadius, float* ColHeight )
	{
		static UFunction* pfnGetCollisionSizeValuesForMM = NULL;

		if ( !pfnGetCollisionSizeValuesForMM )
			pfnGetCollisionSizeValuesForMM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetCollisionSizeValuesForMM" );

		ACCPawn_execGetCollisionSizeValuesForMM_Parms GetCollisionSizeValuesForMM_Parms;
		GetCollisionSizeValuesForMM_Parms.TheMovementMode = TheMovementMode;

		this->ProcessEvent( pfnGetCollisionSizeValuesForMM, &GetCollisionSizeValuesForMM_Parms, NULL );

		if ( Translation )
			memcpy( Translation, &GetCollisionSizeValuesForMM_Parms.Translation, 0xC ); // CPF_OutParm
		if ( ColRadius )
			*ColRadius = GetCollisionSizeValuesForMM_Parms.ColRadius; // CPF_OutParm
		if ( ColHeight )
			*ColHeight = GetCollisionSizeValuesForMM_Parms.ColHeight; // CPF_OutParm
	};

	void eventPlayTurnSound ( void* SourceNode, float TurnAngle )
	{
		static UFunction* pfnPlayTurnSound = NULL;

		if ( !pfnPlayTurnSound )
			pfnPlayTurnSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayTurnSound" );

		ACCPawn_eventPlayTurnSound_Parms PlayTurnSound_Parms;
		PlayTurnSound_Parms.SourceNode = SourceNode;
		PlayTurnSound_Parms.TurnAngle = TurnAngle;

		this->ProcessEvent( pfnPlayTurnSound, &PlayTurnSound_Parms, NULL );
	};

	void MovementModeChanged ( unsigned char OldMovementMode )
	{
		static UFunction* pfnMovementModeChanged = NULL;

		if ( !pfnMovementModeChanged )
			pfnMovementModeChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MovementModeChanged" );

		ACCPawn_execMovementModeChanged_Parms MovementModeChanged_Parms;
		MovementModeChanged_Parms.OldMovementMode = OldMovementMode;

		this->ProcessEvent( pfnMovementModeChanged, &MovementModeChanged_Parms, NULL );
	};

	void SetMovementMode ( unsigned char Mode )
	{
		static UFunction* pfnSetMovementMode = NULL;

		if ( !pfnSetMovementMode )
			pfnSetMovementMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetMovementMode" );

		ACCPawn_execSetMovementMode_Parms SetMovementMode_Parms;
		SetMovementMode_Parms.Mode = Mode;

		this->ProcessEvent( pfnSetMovementMode, &SetMovementMode_Parms, NULL );
	};

	void* GetSpecificLandedSound ( void* FootStepParams, float FallingTime )
	{
		static UFunction* pfnGetSpecificLandedSound = NULL;

		if ( !pfnGetSpecificLandedSound )
			pfnGetSpecificLandedSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetSpecificLandedSound" );

		ACCPawn_execGetSpecificLandedSound_Parms GetSpecificLandedSound_Parms;
		GetSpecificLandedSound_Parms.FootStepParams = FootStepParams;
		GetSpecificLandedSound_Parms.FallingTime = FallingTime;

		this->ProcessEvent( pfnGetSpecificLandedSound, &GetSpecificLandedSound_Parms, NULL );

		return GetSpecificLandedSound_Parms.ReturnValue;
	};

	void* GetLandedSound ( void* PMaterial, float FallingTime )
	{
		static UFunction* pfnGetLandedSound = NULL;

		if ( !pfnGetLandedSound )
			pfnGetLandedSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetLandedSound" );

		ACCPawn_execGetLandedSound_Parms GetLandedSound_Parms;
		GetLandedSound_Parms.PMaterial = PMaterial;
		GetLandedSound_Parms.FallingTime = FallingTime;

		this->ProcessEvent( pfnGetLandedSound, &GetLandedSound_Parms, NULL );

		return GetLandedSound_Parms.ReturnValue;
	};

	void ActuallyPlayLandedSound ( float FallingTime, struct FTraceHitInfo HitInfo )
	{
		static UFunction* pfnActuallyPlayLandedSound = NULL;

		if ( !pfnActuallyPlayLandedSound )
			pfnActuallyPlayLandedSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ActuallyPlayLandedSound" );

		ACCPawn_execActuallyPlayLandedSound_Parms ActuallyPlayLandedSound_Parms;
		ActuallyPlayLandedSound_Parms.FallingTime = FallingTime;
		memcpy( &ActuallyPlayLandedSound_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnActuallyPlayLandedSound, &ActuallyPlayLandedSound_Parms, NULL );
	};

	void eventPlayLandedSound ( float FallingTime )
	{
		static UFunction* pfnPlayLandedSound = NULL;

		if ( !pfnPlayLandedSound )
			pfnPlayLandedSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayLandedSound" );

		ACCPawn_eventPlayLandedSound_Parms PlayLandedSound_Parms;
		PlayLandedSound_Parms.FallingTime = FallingTime;

		this->ProcessEvent( pfnPlayLandedSound, &PlayLandedSound_Parms, NULL );
	};

	void UpdateMovementAmbientSound ( unsigned char Mode )
	{
		static UFunction* pfnUpdateMovementAmbientSound = NULL;

		if ( !pfnUpdateMovementAmbientSound )
			pfnUpdateMovementAmbientSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateMovementAmbientSound" );

		ACCPawn_execUpdateMovementAmbientSound_Parms UpdateMovementAmbientSound_Parms;
		UpdateMovementAmbientSound_Parms.Mode = Mode;

		this->ProcessEvent( pfnUpdateMovementAmbientSound, &UpdateMovementAmbientSound_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.Destroyed" );

		ACCPawn_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void PlayMovementStepSound ( int FootDown, struct FTraceHitInfo HitInfo )
	{
		static UFunction* pfnPlayMovementStepSound = NULL;

		if ( !pfnPlayMovementStepSound )
			pfnPlayMovementStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayMovementStepSound" );

		ACCPawn_execPlayMovementStepSound_Parms PlayMovementStepSound_Parms;
		PlayMovementStepSound_Parms.FootDown = FootDown;
		memcpy( &PlayMovementStepSound_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnPlayMovementStepSound, &PlayMovementStepSound_Parms, NULL );
	};

	void* GetSpecificFootStepEffect ( void* FootStepParams, int FootDown )
	{
		static UFunction* pfnGetSpecificFootStepEffect = NULL;

		if ( !pfnGetSpecificFootStepEffect )
			pfnGetSpecificFootStepEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetSpecificFootStepEffect" );

		ACCPawn_execGetSpecificFootStepEffect_Parms GetSpecificFootStepEffect_Parms;
		GetSpecificFootStepEffect_Parms.FootStepParams = FootStepParams;
		GetSpecificFootStepEffect_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnGetSpecificFootStepEffect, &GetSpecificFootStepEffect_Parms, NULL );

		return GetSpecificFootStepEffect_Parms.ReturnValue;
	};

	void* GetSpecificFootStepSound ( void* FootStepParams, int FootDown )
	{
		static UFunction* pfnGetSpecificFootStepSound = NULL;

		if ( !pfnGetSpecificFootStepSound )
			pfnGetSpecificFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetSpecificFootStepSound" );

		ACCPawn_execGetSpecificFootStepSound_Parms GetSpecificFootStepSound_Parms;
		GetSpecificFootStepSound_Parms.FootStepParams = FootStepParams;
		GetSpecificFootStepSound_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnGetSpecificFootStepSound, &GetSpecificFootStepSound_Parms, NULL );

		return GetSpecificFootStepSound_Parms.ReturnValue;
	};

	void* GetFootStepSound ( void* PMaterial, int FootDown )
	{
		static UFunction* pfnGetFootStepSound = NULL;

		if ( !pfnGetFootStepSound )
			pfnGetFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetFootStepSound" );

		ACCPawn_execGetFootStepSound_Parms GetFootStepSound_Parms;
		GetFootStepSound_Parms.PMaterial = PMaterial;
		GetFootStepSound_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnGetFootStepSound, &GetFootStepSound_Parms, NULL );

		return GetFootStepSound_Parms.ReturnValue;
	};

	void* GetFootStepEffect ( void* PMaterial, int FootDown )
	{
		static UFunction* pfnGetFootStepEffect = NULL;

		if ( !pfnGetFootStepEffect )
			pfnGetFootStepEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetFootStepEffect" );

		ACCPawn_execGetFootStepEffect_Parms GetFootStepEffect_Parms;
		GetFootStepEffect_Parms.PMaterial = PMaterial;
		GetFootStepEffect_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnGetFootStepEffect, &GetFootStepEffect_Parms, NULL );

		return GetFootStepEffect_Parms.ReturnValue;
	};

	void ActuallyPlayFootStepSound ( int FootDown, struct FTraceHitInfo HitInfo )
	{
		static UFunction* pfnActuallyPlayFootStepSound = NULL;

		if ( !pfnActuallyPlayFootStepSound )
			pfnActuallyPlayFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ActuallyPlayFootStepSound" );

		ACCPawn_execActuallyPlayFootStepSound_Parms ActuallyPlayFootStepSound_Parms;
		ActuallyPlayFootStepSound_Parms.FootDown = FootDown;
		memcpy( &ActuallyPlayFootStepSound_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnActuallyPlayFootStepSound, &ActuallyPlayFootStepSound_Parms, NULL );
	};

	class AActor* PerformFootStepTrace ( struct FTraceHitInfo* HitInfo )
	{
		static UFunction* pfnPerformFootStepTrace = NULL;

		if ( !pfnPerformFootStepTrace )
			pfnPerformFootStepTrace = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PerformFootStepTrace" );

		ACCPawn_execPerformFootStepTrace_Parms PerformFootStepTrace_Parms;

		this->ProcessEvent( pfnPerformFootStepTrace, &PerformFootStepTrace_Parms, NULL );

		if ( HitInfo )
			memcpy( HitInfo, &PerformFootStepTrace_Parms.HitInfo, 0x1C ); // CPF_OutParm

		return PerformFootStepTrace_Parms.ReturnValue;
	};

	void eventPlayFootStepSound ( int FootDown )
	{
		static UFunction* pfnPlayFootStepSound = NULL;

		if ( !pfnPlayFootStepSound )
			pfnPlayFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayFootStepSound" );

		ACCPawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
		PlayFootStepSound_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
	};

	void AttachMeshToSocket ( void* InMesh, struct FName SocketName )
	{
		static UFunction* pfnAttachMeshToSocket = NULL;

		if ( !pfnAttachMeshToSocket )
			pfnAttachMeshToSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AttachMeshToSocket" );

		ACCPawn_execAttachMeshToSocket_Parms AttachMeshToSocket_Parms;
		AttachMeshToSocket_Parms.InMesh = InMesh;
		memcpy( &AttachMeshToSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnAttachMeshToSocket, &AttachMeshToSocket_Parms, NULL );
	};

	void eventHoldGameObject ( void* CarriedObject )
	{
		static UFunction* pfnHoldGameObject = NULL;

		if ( !pfnHoldGameObject )
			pfnHoldGameObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.HoldGameObject" );

		ACCPawn_eventHoldGameObject_Parms HoldGameObject_Parms;
		HoldGameObject_Parms.CarriedObject = CarriedObject;

		this->ProcessEvent( pfnHoldGameObject, &HoldGameObject_Parms, NULL );
	};

	void ClientClearGameObjectFor ( class ACCPawn* Pawn )
	{
		static UFunction* pfnClientClearGameObjectFor = NULL;

		if ( !pfnClientClearGameObjectFor )
			pfnClientClearGameObjectFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClientClearGameObjectFor" );

		ACCPawn_execClientClearGameObjectFor_Parms ClientClearGameObjectFor_Parms;
		ClientClearGameObjectFor_Parms.Pawn = Pawn;

		this->ProcessEvent( pfnClientClearGameObjectFor, &ClientClearGameObjectFor_Parms, NULL );
	};

	void UpdateMove ()
	{
		static UFunction* pfnUpdateMove = NULL;

		if ( !pfnUpdateMove )
			pfnUpdateMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateMove" );

		ACCPawn_execUpdateMove_Parms UpdateMove_Parms;

		this->ProcessEvent( pfnUpdateMove, &UpdateMove_Parms, NULL );
	};

	void MoveMelee ()
	{
		static UFunction* pfnMoveMelee = NULL;

		if ( !pfnMoveMelee )
			pfnMoveMelee = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveMelee" );

		ACCPawn_execMoveMelee_Parms MoveMelee_Parms;

		this->ProcessEvent( pfnMoveMelee, &MoveMelee_Parms, NULL );
	};

	void MoveRolling ()
	{
		static UFunction* pfnMoveRolling = NULL;

		if ( !pfnMoveRolling )
			pfnMoveRolling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveRolling" );

		ACCPawn_execMoveRolling_Parms MoveRolling_Parms;

		this->ProcessEvent( pfnMoveRolling, &MoveRolling_Parms, NULL );
	};

	void MovePanic ()
	{
		static UFunction* pfnMovePanic = NULL;

		if ( !pfnMovePanic )
			pfnMovePanic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MovePanic" );

		ACCPawn_execMovePanic_Parms MovePanic_Parms;

		this->ProcessEvent( pfnMovePanic, &MovePanic_Parms, NULL );
	};

	void MoveSprint ()
	{
		static UFunction* pfnMoveSprint = NULL;

		if ( !pfnMoveSprint )
			pfnMoveSprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveSprint" );

		ACCPawn_execMoveSprint_Parms MoveSprint_Parms;

		this->ProcessEvent( pfnMoveSprint, &MoveSprint_Parms, NULL );
	};

	void MoveWalk ()
	{
		static UFunction* pfnMoveWalk = NULL;

		if ( !pfnMoveWalk )
			pfnMoveWalk = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveWalk" );

		ACCPawn_execMoveWalk_Parms MoveWalk_Parms;

		this->ProcessEvent( pfnMoveWalk, &MoveWalk_Parms, NULL );
	};

	void MoveRun ()
	{
		static UFunction* pfnMoveRun = NULL;

		if ( !pfnMoveRun )
			pfnMoveRun = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveRun" );

		ACCPawn_execMoveRun_Parms MoveRun_Parms;

		this->ProcessEvent( pfnMoveRun, &MoveRun_Parms, NULL );
	};

	void MoveCrouch ()
	{
		static UFunction* pfnMoveCrouch = NULL;

		if ( !pfnMoveCrouch )
			pfnMoveCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.MoveCrouch" );

		ACCPawn_execMoveCrouch_Parms MoveCrouch_Parms;

		this->ProcessEvent( pfnMoveCrouch, &MoveCrouch_Parms, NULL );
	};

	struct FRotator GetAimOffsetRotation ()
	{
		static UFunction* pfnGetAimOffsetRotation = NULL;

		if ( !pfnGetAimOffsetRotation )
			pfnGetAimOffsetRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAimOffsetRotation" );

		ACCPawn_execGetAimOffsetRotation_Parms GetAimOffsetRotation_Parms;

		this->ProcessEvent( pfnGetAimOffsetRotation, &GetAimOffsetRotation_Parms, NULL );

		return GetAimOffsetRotation_Parms.ReturnValue;
	};

	void UpdateAimOffsetData ( float DeltaTime )
	{
		static UFunction* pfnUpdateAimOffsetData = NULL;

		if ( !pfnUpdateAimOffsetData )
			pfnUpdateAimOffsetData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateAimOffsetData" );

		ACCPawn_execUpdateAimOffsetData_Parms UpdateAimOffsetData_Parms;
		UpdateAimOffsetData_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateAimOffsetData, &UpdateAimOffsetData_Parms, NULL );
	};

	void UpdateMeshBoneControllers ( float DeltaTime )
	{
		static UFunction* pfnUpdateMeshBoneControllers = NULL;

		if ( !pfnUpdateMeshBoneControllers )
			pfnUpdateMeshBoneControllers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateMeshBoneControllers" );

		ACCPawn_execUpdateMeshBoneControllers_Parms UpdateMeshBoneControllers_Parms;
		UpdateMeshBoneControllers_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateMeshBoneControllers, &UpdateMeshBoneControllers_Parms, NULL );
	};

	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
	{
		static UFunction* pfnProcessViewRotation = NULL;

		if ( !pfnProcessViewRotation )
			pfnProcessViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ProcessViewRotation" );

		ACCPawn_execProcessViewRotation_Parms ProcessViewRotation_Parms;
		ProcessViewRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
		if ( out_DeltaRot )
			memcpy( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC ); // CPF_OutParm
	};

	void InterpolatePawnLocation ( float DeltaTime )
	{
		static UFunction* pfnInterpolatePawnLocation = NULL;

		if ( !pfnInterpolatePawnLocation )
			pfnInterpolatePawnLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.InterpolatePawnLocation" );

		ACCPawn_execInterpolatePawnLocation_Parms InterpolatePawnLocation_Parms;
		InterpolatePawnLocation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnInterpolatePawnLocation, &InterpolatePawnLocation_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.Tick" );

		ACCPawn_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void TickFootplacement ( float DeltaTime )
	{
		static UFunction* pfnTickFootplacement = NULL;

		if ( !pfnTickFootplacement )
			pfnTickFootplacement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TickFootplacement" );

		ACCPawn_execTickFootplacement_Parms TickFootplacement_Parms;
		TickFootplacement_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickFootplacement, &TickFootplacement_Parms, NULL );
	};

	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
	{
		static UFunction* pfnCalcCamera = NULL;

		if ( !pfnCalcCamera )
			pfnCalcCamera = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CalcCamera" );

		ACCPawn_execCalcCamera_Parms CalcCamera_Parms;
		CalcCamera_Parms.fDeltaTime = fDeltaTime;

		this->ProcessEvent( pfnCalcCamera, &CalcCamera_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC ); // CPF_OutParm
		if ( out_FOV )
			*out_FOV = CalcCamera_Parms.out_FOV; // CPF_OutParm

		return CalcCamera_Parms.ReturnValue;
	};

	void InitializeAnimationNodes ()
	{
		static UFunction* pfnInitializeAnimationNodes = NULL;

		if ( !pfnInitializeAnimationNodes )
			pfnInitializeAnimationNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.InitializeAnimationNodes" );

		ACCPawn_execInitializeAnimationNodes_Parms InitializeAnimationNodes_Parms;

		this->ProcessEvent( pfnInitializeAnimationNodes, &InitializeAnimationNodes_Parms, NULL );
	};

	void EquipDefaultItems ()
	{
		static UFunction* pfnEquipDefaultItems = NULL;

		if ( !pfnEquipDefaultItems )
			pfnEquipDefaultItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.EquipDefaultItems" );

		ACCPawn_execEquipDefaultItems_Parms EquipDefaultItems_Parms;

		pfnEquipDefaultItems->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEquipDefaultItems, &EquipDefaultItems_Parms, NULL );
		pfnEquipDefaultItems->FunctionFlags |= 0x400;
	};

	void eventOnCreateCharacterComponent ()
	{
		static UFunction* pfnOnCreateCharacterComponent = NULL;

		if ( !pfnOnCreateCharacterComponent )
			pfnOnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnCreateCharacterComponent" );

		ACCPawn_eventOnCreateCharacterComponent_Parms OnCreateCharacterComponent_Parms;

		this->ProcessEvent( pfnOnCreateCharacterComponent, &OnCreateCharacterComponent_Parms, NULL );
	};

	void eventCreateCharacterComponent ( unsigned char AnimType, struct FCharacterVisualDescription* Appearance )
	{
		static UFunction* pfnCreateCharacterComponent = NULL;

		if ( !pfnCreateCharacterComponent )
			pfnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CreateCharacterComponent" );

		ACCPawn_eventCreateCharacterComponent_Parms CreateCharacterComponent_Parms;
		CreateCharacterComponent_Parms.AnimType = AnimType;

		this->ProcessEvent( pfnCreateCharacterComponent, &CreateCharacterComponent_Parms, NULL );

		if ( Appearance )
			memcpy( Appearance, &CreateCharacterComponent_Parms.Appearance, 0x48 ); // CPF_OutParm
	};

	void eventCreateNPCCharacterComponent ( int VisualId )
	{
		static UFunction* pfnCreateNPCCharacterComponent = NULL;

		if ( !pfnCreateNPCCharacterComponent )
			pfnCreateNPCCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CreateNPCCharacterComponent" );

		ACCPawn_eventCreateNPCCharacterComponent_Parms CreateNPCCharacterComponent_Parms;
		CreateNPCCharacterComponent_Parms.VisualId = VisualId;

		this->ProcessEvent( pfnCreateNPCCharacterComponent, &CreateNPCCharacterComponent_Parms, NULL );
	};

	void IThinkNowBotsMustBeVisible ()
	{
		static UFunction* pfnIThinkNowBotsMustBeVisible = NULL;

		if ( !pfnIThinkNowBotsMustBeVisible )
			pfnIThinkNowBotsMustBeVisible = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.IThinkNowBotsMustBeVisible" );

		ACCPawn_execIThinkNowBotsMustBeVisible_Parms IThinkNowBotsMustBeVisible_Parms;

		this->ProcessEvent( pfnIThinkNowBotsMustBeVisible, &IThinkNowBotsMustBeVisible_Parms, NULL );
	};

	void PlayAbilitySoundEffect ( void* Sound )
	{
		static UFunction* pfnPlayAbilitySoundEffect = NULL;

		if ( !pfnPlayAbilitySoundEffect )
			pfnPlayAbilitySoundEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayAbilitySoundEffect" );

		ACCPawn_execPlayAbilitySoundEffect_Parms PlayAbilitySoundEffect_Parms;
		PlayAbilitySoundEffect_Parms.Sound = Sound;

		this->ProcessEvent( pfnPlayAbilitySoundEffect, &PlayAbilitySoundEffect_Parms, NULL );
	};

	void PlayAbilityPSEffect ( int Index, void* PS, float PSPlayTime, struct FName PSAttachSocket, struct FName PSAttachBoneName )
	{
		static UFunction* pfnPlayAbilityPSEffect = NULL;

		if ( !pfnPlayAbilityPSEffect )
			pfnPlayAbilityPSEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayAbilityPSEffect" );

		ACCPawn_execPlayAbilityPSEffect_Parms PlayAbilityPSEffect_Parms;
		PlayAbilityPSEffect_Parms.Index = Index;
		PlayAbilityPSEffect_Parms.PS = PS;
		PlayAbilityPSEffect_Parms.PSPlayTime = PSPlayTime;
		memcpy( &PlayAbilityPSEffect_Parms.PSAttachSocket, &PSAttachSocket, 0x8 );
		memcpy( &PlayAbilityPSEffect_Parms.PSAttachBoneName, &PSAttachBoneName, 0x8 );

		this->ProcessEvent( pfnPlayAbilityPSEffect, &PlayAbilityPSEffect_Parms, NULL );
	};

	void ReplicateEmoteShowing ( struct FString EmoteName )
	{
		static UFunction* pfnReplicateEmoteShowing = NULL;

		if ( !pfnReplicateEmoteShowing )
			pfnReplicateEmoteShowing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ReplicateEmoteShowing" );

		ACCPawn_execReplicateEmoteShowing_Parms ReplicateEmoteShowing_Parms;
		memcpy( &ReplicateEmoteShowing_Parms.EmoteName, &EmoteName, 0xC );

		this->ProcessEvent( pfnReplicateEmoteShowing, &ReplicateEmoteShowing_Parms, NULL );
	};

	void ShowEmote ( struct FString EmoteName )
	{
		static UFunction* pfnShowEmote = NULL;

		if ( !pfnShowEmote )
			pfnShowEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ShowEmote" );

		ACCPawn_execShowEmote_Parms ShowEmote_Parms;
		memcpy( &ShowEmote_Parms.EmoteName, &EmoteName, 0xC );

		this->ProcessEvent( pfnShowEmote, &ShowEmote_Parms, NULL );
	};

	void AttachPSToCustomComponent ( struct FString CompName, struct FName SocketName, void* PS )
	{
		static UFunction* pfnAttachPSToCustomComponent = NULL;

		if ( !pfnAttachPSToCustomComponent )
			pfnAttachPSToCustomComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AttachPSToCustomComponent" );

		ACCPawn_execAttachPSToCustomComponent_Parms AttachPSToCustomComponent_Parms;
		memcpy( &AttachPSToCustomComponent_Parms.CompName, &CompName, 0xC );
		memcpy( &AttachPSToCustomComponent_Parms.SocketName, &SocketName, 0x8 );
		AttachPSToCustomComponent_Parms.PS = PS;

		this->ProcessEvent( pfnAttachPSToCustomComponent, &AttachPSToCustomComponent_Parms, NULL );
	};

	void ClearCCSRotatorParameter ( int Index )
	{
		static UFunction* pfnClearCCSRotatorParameter = NULL;

		if ( !pfnClearCCSRotatorParameter )
			pfnClearCCSRotatorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClearCCSRotatorParameter" );

		ACCPawn_execClearCCSRotatorParameter_Parms ClearCCSRotatorParameter_Parms;
		ClearCCSRotatorParameter_Parms.Index = Index;

		this->ProcessEvent( pfnClearCCSRotatorParameter, &ClearCCSRotatorParameter_Parms, NULL );
	};

	struct FRotator GetCCSRotatorParameter ( int Index )
	{
		static UFunction* pfnGetCCSRotatorParameter = NULL;

		if ( !pfnGetCCSRotatorParameter )
			pfnGetCCSRotatorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetCCSRotatorParameter" );

		ACCPawn_execGetCCSRotatorParameter_Parms GetCCSRotatorParameter_Parms;
		GetCCSRotatorParameter_Parms.Index = Index;

		this->ProcessEvent( pfnGetCCSRotatorParameter, &GetCCSRotatorParameter_Parms, NULL );

		return GetCCSRotatorParameter_Parms.ReturnValue;
	};

	void SetCCSRotatorParameter ( int Index, struct FRotator Value )
	{
		static UFunction* pfnSetCCSRotatorParameter = NULL;

		if ( !pfnSetCCSRotatorParameter )
			pfnSetCCSRotatorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetCCSRotatorParameter" );

		ACCPawn_execSetCCSRotatorParameter_Parms SetCCSRotatorParameter_Parms;
		SetCCSRotatorParameter_Parms.Index = Index;
		memcpy( &SetCCSRotatorParameter_Parms.Value, &Value, 0xC );

		this->ProcessEvent( pfnSetCCSRotatorParameter, &SetCCSRotatorParameter_Parms, NULL );
	};

	void ClearCCSVectorParameter ( int Index )
	{
		static UFunction* pfnClearCCSVectorParameter = NULL;

		if ( !pfnClearCCSVectorParameter )
			pfnClearCCSVectorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClearCCSVectorParameter" );

		ACCPawn_execClearCCSVectorParameter_Parms ClearCCSVectorParameter_Parms;
		ClearCCSVectorParameter_Parms.Index = Index;

		this->ProcessEvent( pfnClearCCSVectorParameter, &ClearCCSVectorParameter_Parms, NULL );
	};

	struct FVector GetCCSVectorParameter ( int Index )
	{
		static UFunction* pfnGetCCSVectorParameter = NULL;

		if ( !pfnGetCCSVectorParameter )
			pfnGetCCSVectorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetCCSVectorParameter" );

		ACCPawn_execGetCCSVectorParameter_Parms GetCCSVectorParameter_Parms;
		GetCCSVectorParameter_Parms.Index = Index;

		this->ProcessEvent( pfnGetCCSVectorParameter, &GetCCSVectorParameter_Parms, NULL );

		return GetCCSVectorParameter_Parms.ReturnValue;
	};

	void SetCCSVectorParameter ( int Index, struct FVector Value )
	{
		static UFunction* pfnSetCCSVectorParameter = NULL;

		if ( !pfnSetCCSVectorParameter )
			pfnSetCCSVectorParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetCCSVectorParameter" );

		ACCPawn_execSetCCSVectorParameter_Parms SetCCSVectorParameter_Parms;
		SetCCSVectorParameter_Parms.Index = Index;
		memcpy( &SetCCSVectorParameter_Parms.Value, &Value, 0xC );

		this->ProcessEvent( pfnSetCCSVectorParameter, &SetCCSVectorParameter_Parms, NULL );
	};

	void ClearCCSMeshParameter ( int Index )
	{
		static UFunction* pfnClearCCSMeshParameter = NULL;

		if ( !pfnClearCCSMeshParameter )
			pfnClearCCSMeshParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ClearCCSMeshParameter" );

		ACCPawn_execClearCCSMeshParameter_Parms ClearCCSMeshParameter_Parms;
		ClearCCSMeshParameter_Parms.Index = Index;

		this->ProcessEvent( pfnClearCCSMeshParameter, &ClearCCSMeshParameter_Parms, NULL );
	};

	class UMeshComponent* GetCCSMeshParameter ( int Index )
	{
		static UFunction* pfnGetCCSMeshParameter = NULL;

		if ( !pfnGetCCSMeshParameter )
			pfnGetCCSMeshParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetCCSMeshParameter" );

		ACCPawn_execGetCCSMeshParameter_Parms GetCCSMeshParameter_Parms;
		GetCCSMeshParameter_Parms.Index = Index;

		this->ProcessEvent( pfnGetCCSMeshParameter, &GetCCSMeshParameter_Parms, NULL );

		return GetCCSMeshParameter_Parms.ReturnValue;
	};

	void SetCCSMeshParameter ( int Index, class UMeshComponent* Value )
	{
		static UFunction* pfnSetCCSMeshParameter = NULL;

		if ( !pfnSetCCSMeshParameter )
			pfnSetCCSMeshParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetCCSMeshParameter" );

		ACCPawn_execSetCCSMeshParameter_Parms SetCCSMeshParameter_Parms;
		SetCCSMeshParameter_Parms.Index = Index;
		SetCCSMeshParameter_Parms.Value = Value;

		this->ProcessEvent( pfnSetCCSMeshParameter, &SetCCSMeshParameter_Parms, NULL );
	};

	void* GetCCSPPControllerForSocket ( struct FName SocketName )
	{
		static UFunction* pfnGetCCSPPControllerForSocket = NULL;

		if ( !pfnGetCCSPPControllerForSocket )
			pfnGetCCSPPControllerForSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetCCSPPControllerForSocket" );

		ACCPawn_execGetCCSPPControllerForSocket_Parms GetCCSPPControllerForSocket_Parms;
		memcpy( &GetCCSPPControllerForSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnGetCCSPPControllerForSocket, &GetCCSPPControllerForSocket_Parms, NULL );

		return GetCCSPPControllerForSocket_Parms.ReturnValue;
	};

	void UpdateCustomComponentIKControllerTransform ( void* SkelController, struct FName SocketName, struct FSkelControlDestLocation DestLocation, float Alpha )
	{
		static UFunction* pfnUpdateCustomComponentIKControllerTransform = NULL;

		if ( !pfnUpdateCustomComponentIKControllerTransform )
			pfnUpdateCustomComponentIKControllerTransform = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCustomComponentIKControllerTransform" );

		ACCPawn_execUpdateCustomComponentIKControllerTransform_Parms UpdateCustomComponentIKControllerTransform_Parms;
		UpdateCustomComponentIKControllerTransform_Parms.SkelController = SkelController;
		memcpy( &UpdateCustomComponentIKControllerTransform_Parms.SocketName, &SocketName, 0x8 );
		memcpy( &UpdateCustomComponentIKControllerTransform_Parms.DestLocation, &DestLocation, 0x24 );
		UpdateCustomComponentIKControllerTransform_Parms.Alpha = Alpha;

		this->ProcessEvent( pfnUpdateCustomComponentIKControllerTransform, &UpdateCustomComponentIKControllerTransform_Parms, NULL );
	};

	void UpdateCustomComponentIKFor ( int Index, float DeltaTime )
	{
		static UFunction* pfnUpdateCustomComponentIKFor = NULL;

		if ( !pfnUpdateCustomComponentIKFor )
			pfnUpdateCustomComponentIKFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCustomComponentIKFor" );

		ACCPawn_execUpdateCustomComponentIKFor_Parms UpdateCustomComponentIKFor_Parms;
		UpdateCustomComponentIKFor_Parms.Index = Index;
		UpdateCustomComponentIKFor_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateCustomComponentIKFor, &UpdateCustomComponentIKFor_Parms, NULL );
	};

	void ForceDisableCustomComponentIKFor ( int Index )
	{
		static UFunction* pfnForceDisableCustomComponentIKFor = NULL;

		if ( !pfnForceDisableCustomComponentIKFor )
			pfnForceDisableCustomComponentIKFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ForceDisableCustomComponentIKFor" );

		ACCPawn_execForceDisableCustomComponentIKFor_Parms ForceDisableCustomComponentIKFor_Parms;
		ForceDisableCustomComponentIKFor_Parms.Index = Index;

		this->ProcessEvent( pfnForceDisableCustomComponentIKFor, &ForceDisableCustomComponentIKFor_Parms, NULL );
	};

	void UpdateCustomComponentLifeTimeFor ( int Index, float DeltaTime )
	{
		static UFunction* pfnUpdateCustomComponentLifeTimeFor = NULL;

		if ( !pfnUpdateCustomComponentLifeTimeFor )
			pfnUpdateCustomComponentLifeTimeFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateCustomComponentLifeTimeFor" );

		ACCPawn_execUpdateCustomComponentLifeTimeFor_Parms UpdateCustomComponentLifeTimeFor_Parms;
		UpdateCustomComponentLifeTimeFor_Parms.Index = Index;
		UpdateCustomComponentLifeTimeFor_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateCustomComponentLifeTimeFor, &UpdateCustomComponentLifeTimeFor_Parms, NULL );
	};

	void TickCustomComponentSystem ( float DeltaTime )
	{
		static UFunction* pfnTickCustomComponentSystem = NULL;

		if ( !pfnTickCustomComponentSystem )
			pfnTickCustomComponentSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TickCustomComponentSystem" );

		ACCPawn_execTickCustomComponentSystem_Parms TickCustomComponentSystem_Parms;
		TickCustomComponentSystem_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickCustomComponentSystem, &TickCustomComponentSystem_Parms, NULL );
	};

	void DeleteReferenceToCustomComonent ( struct FString CompTag )
	{
		static UFunction* pfnDeleteReferenceToCustomComonent = NULL;

		if ( !pfnDeleteReferenceToCustomComonent )
			pfnDeleteReferenceToCustomComonent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.DeleteReferenceToCustomComonent" );

		ACCPawn_execDeleteReferenceToCustomComonent_Parms DeleteReferenceToCustomComonent_Parms;
		memcpy( &DeleteReferenceToCustomComonent_Parms.CompTag, &CompTag, 0xC );

		this->ProcessEvent( pfnDeleteReferenceToCustomComonent, &DeleteReferenceToCustomComonent_Parms, NULL );
	};

	class UActorComponent* FindCustomComponent ( struct FString CompTag )
	{
		static UFunction* pfnFindCustomComponent = NULL;

		if ( !pfnFindCustomComponent )
			pfnFindCustomComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FindCustomComponent" );

		ACCPawn_execFindCustomComponent_Parms FindCustomComponent_Parms;
		memcpy( &FindCustomComponent_Parms.CompTag, &CompTag, 0xC );

		this->ProcessEvent( pfnFindCustomComponent, &FindCustomComponent_Parms, NULL );

		return FindCustomComponent_Parms.ReturnValue;
	};

	bool PerformCustomComponentIKLerping ( struct FString CompTag, unsigned char IKLerpingMode, float IKLerpingTime, struct FSkelControlDestLocation IKLerpingLocation )
	{
		static UFunction* pfnPerformCustomComponentIKLerping = NULL;

		if ( !pfnPerformCustomComponentIKLerping )
			pfnPerformCustomComponentIKLerping = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PerformCustomComponentIKLerping" );

		ACCPawn_execPerformCustomComponentIKLerping_Parms PerformCustomComponentIKLerping_Parms;
		memcpy( &PerformCustomComponentIKLerping_Parms.CompTag, &CompTag, 0xC );
		PerformCustomComponentIKLerping_Parms.IKLerpingMode = IKLerpingMode;
		PerformCustomComponentIKLerping_Parms.IKLerpingTime = IKLerpingTime;
		memcpy( &PerformCustomComponentIKLerping_Parms.IKLerpingLocation, &IKLerpingLocation, 0x24 );

		this->ProcessEvent( pfnPerformCustomComponentIKLerping, &PerformCustomComponentIKLerping_Parms, NULL );

		return PerformCustomComponentIKLerping_Parms.ReturnValue;
	};

	bool DetachCustomComponent ( struct FString CompTag )
	{
		static UFunction* pfnDetachCustomComponent = NULL;

		if ( !pfnDetachCustomComponent )
			pfnDetachCustomComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.DetachCustomComponent" );

		ACCPawn_execDetachCustomComponent_Parms DetachCustomComponent_Parms;
		memcpy( &DetachCustomComponent_Parms.CompTag, &CompTag, 0xC );

		this->ProcessEvent( pfnDetachCustomComponent, &DetachCustomComponent_Parms, NULL );

		return DetachCustomComponent_Parms.ReturnValue;
	};

	bool AttachCustomComponent ( struct FString CompTag, class UActorComponent* Comp, struct FName SocketToAttach, float TimeOut/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAttachCustomComponent = NULL;

		if ( !pfnAttachCustomComponent )
			pfnAttachCustomComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AttachCustomComponent" );

		ACCPawn_execAttachCustomComponent_Parms AttachCustomComponent_Parms;
		memcpy( &AttachCustomComponent_Parms.CompTag, &CompTag, 0xC );
		AttachCustomComponent_Parms.Comp = Comp;
		memcpy( &AttachCustomComponent_Parms.SocketToAttach, &SocketToAttach, 0x8 );
		AttachCustomComponent_Parms.TimeOut = TimeOut;

		this->ProcessEvent( pfnAttachCustomComponent, &AttachCustomComponent_Parms, NULL );

		return AttachCustomComponent_Parms.ReturnValue;
	};

	void ShowHideFlag ( unsigned long bHide )
	{
		static UFunction* pfnShowHideFlag = NULL;

		if ( !pfnShowHideFlag )
			pfnShowHideFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ShowHideFlag" );

		ACCPawn_execShowHideFlag_Parms ShowHideFlag_Parms;
		ShowHideFlag_Parms.bHide = bHide;

		this->ProcessEvent( pfnShowHideFlag, &ShowHideFlag_Parms, NULL );
	};

	void eventOnAnimEnd ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnOnAnimEnd = NULL;

		if ( !pfnOnAnimEnd )
			pfnOnAnimEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.OnAnimEnd" );

		ACCPawn_eventOnAnimEnd_Parms OnAnimEnd_Parms;
		OnAnimEnd_Parms.SeqNode = SeqNode;
		OnAnimEnd_Parms.PlayedTime = PlayedTime;
		OnAnimEnd_Parms.ExcessTime = ExcessTime;

		pfnOnAnimEnd->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOnAnimEnd, &OnAnimEnd_Parms, NULL );
		pfnOnAnimEnd->FunctionFlags |= 0x400;
	};

	void PostAdditionalAnimationInfoForReplicated ( struct FAdditionalAnimInfo* AAI )
	{
		static UFunction* pfnPostAdditionalAnimationInfoForReplicated = NULL;

		if ( !pfnPostAdditionalAnimationInfoForReplicated )
			pfnPostAdditionalAnimationInfoForReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PostAdditionalAnimationInfoForReplicated" );

		ACCPawn_execPostAdditionalAnimationInfoForReplicated_Parms PostAdditionalAnimationInfoForReplicated_Parms;

		this->ProcessEvent( pfnPostAdditionalAnimationInfoForReplicated, &PostAdditionalAnimationInfoForReplicated_Parms, NULL );

		if ( AAI )
			memcpy( AAI, &PostAdditionalAnimationInfoForReplicated_Parms.AAI, 0x8C ); // CPF_OutParm
	};

	void PrepareAdditionalAnimationInfoForReplication ( struct FAdditionalAnimInfo* AAI )
	{
		static UFunction* pfnPrepareAdditionalAnimationInfoForReplication = NULL;

		if ( !pfnPrepareAdditionalAnimationInfoForReplication )
			pfnPrepareAdditionalAnimationInfoForReplication = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PrepareAdditionalAnimationInfoForReplication" );

		ACCPawn_execPrepareAdditionalAnimationInfoForReplication_Parms PrepareAdditionalAnimationInfoForReplication_Parms;

		this->ProcessEvent( pfnPrepareAdditionalAnimationInfoForReplication, &PrepareAdditionalAnimationInfoForReplication_Parms, NULL );

		if ( AAI )
			memcpy( AAI, &PrepareAdditionalAnimationInfoForReplication_Parms.AAI, 0x8C ); // CPF_OutParm
	};

	class UMeshComponent* BuildAAIMeshParameterValue ( struct FString ResourceName )
	{
		static UFunction* pfnBuildAAIMeshParameterValue = NULL;

		if ( !pfnBuildAAIMeshParameterValue )
			pfnBuildAAIMeshParameterValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildAAIMeshParameterValue" );

		ACCPawn_execBuildAAIMeshParameterValue_Parms BuildAAIMeshParameterValue_Parms;
		memcpy( &BuildAAIMeshParameterValue_Parms.ResourceName, &ResourceName, 0xC );

		this->ProcessEvent( pfnBuildAAIMeshParameterValue, &BuildAAIMeshParameterValue_Parms, NULL );

		return BuildAAIMeshParameterValue_Parms.ReturnValue;
	};

	struct FString BuildAAIMeshParameterResourceName ( class UMeshComponent* Value )
	{
		static UFunction* pfnBuildAAIMeshParameterResourceName = NULL;

		if ( !pfnBuildAAIMeshParameterResourceName )
			pfnBuildAAIMeshParameterResourceName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildAAIMeshParameterResourceName" );

		ACCPawn_execBuildAAIMeshParameterResourceName_Parms BuildAAIMeshParameterResourceName_Parms;
		BuildAAIMeshParameterResourceName_Parms.Value = Value;

		this->ProcessEvent( pfnBuildAAIMeshParameterResourceName, &BuildAAIMeshParameterResourceName_Parms, NULL );

		return BuildAAIMeshParameterResourceName_Parms.ReturnValue;
	};

	bool StaticIsTemplate ( class UObject* Obj )
	{
		static UFunction* pfnStaticIsTemplate = NULL;

		if ( !pfnStaticIsTemplate )
			pfnStaticIsTemplate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.StaticIsTemplate" );

		ACCPawn_execStaticIsTemplate_Parms StaticIsTemplate_Parms;
		StaticIsTemplate_Parms.Obj = Obj;

		pfnStaticIsTemplate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStaticIsTemplate, &StaticIsTemplate_Parms, NULL );
		pfnStaticIsTemplate->FunctionFlags |= 0x400;

		return StaticIsTemplate_Parms.ReturnValue;
	};

	void AdditionalAnimationsTimer ()
	{
		static UFunction* pfnAdditionalAnimationsTimer = NULL;

		if ( !pfnAdditionalAnimationsTimer )
			pfnAdditionalAnimationsTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationsTimer" );

		ACCPawn_execAdditionalAnimationsTimer_Parms AdditionalAnimationsTimer_Parms;

		this->ProcessEvent( pfnAdditionalAnimationsTimer, &AdditionalAnimationsTimer_Parms, NULL );
	};

	void AdditionalAnimationsTimer_DoFinishPlayInternal ( unsigned long bNoBlendOut )
	{
		static UFunction* pfnAdditionalAnimationsTimer_DoFinishPlayInternal = NULL;

		if ( !pfnAdditionalAnimationsTimer_DoFinishPlayInternal )
			pfnAdditionalAnimationsTimer_DoFinishPlayInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationsTimer_DoFinishPlayInternal" );

		ACCPawn_execAdditionalAnimationsTimer_DoFinishPlayInternal_Parms AdditionalAnimationsTimer_DoFinishPlayInternal_Parms;
		AdditionalAnimationsTimer_DoFinishPlayInternal_Parms.bNoBlendOut = bNoBlendOut;

		this->ProcessEvent( pfnAdditionalAnimationsTimer_DoFinishPlayInternal, &AdditionalAnimationsTimer_DoFinishPlayInternal_Parms, NULL );
	};

	void AdditionalAnimationsTimer_DoFinishPlay ()
	{
		static UFunction* pfnAdditionalAnimationsTimer_DoFinishPlay = NULL;

		if ( !pfnAdditionalAnimationsTimer_DoFinishPlay )
			pfnAdditionalAnimationsTimer_DoFinishPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationsTimer_DoFinishPlay" );

		ACCPawn_execAdditionalAnimationsTimer_DoFinishPlay_Parms AdditionalAnimationsTimer_DoFinishPlay_Parms;

		this->ProcessEvent( pfnAdditionalAnimationsTimer_DoFinishPlay, &AdditionalAnimationsTimer_DoFinishPlay_Parms, NULL );
	};

	void AdditionalAnimationsTimer_FinishPlay ()
	{
		static UFunction* pfnAdditionalAnimationsTimer_FinishPlay = NULL;

		if ( !pfnAdditionalAnimationsTimer_FinishPlay )
			pfnAdditionalAnimationsTimer_FinishPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationsTimer_FinishPlay" );

		ACCPawn_execAdditionalAnimationsTimer_FinishPlay_Parms AdditionalAnimationsTimer_FinishPlay_Parms;

		this->ProcessEvent( pfnAdditionalAnimationsTimer_FinishPlay, &AdditionalAnimationsTimer_FinishPlay_Parms, NULL );
	};

	void AdditionalAnimationsTimer_StartPlay ()
	{
		static UFunction* pfnAdditionalAnimationsTimer_StartPlay = NULL;

		if ( !pfnAdditionalAnimationsTimer_StartPlay )
			pfnAdditionalAnimationsTimer_StartPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationsTimer_StartPlay" );

		ACCPawn_execAdditionalAnimationsTimer_StartPlay_Parms AdditionalAnimationsTimer_StartPlay_Parms;

		this->ProcessEvent( pfnAdditionalAnimationsTimer_StartPlay, &AdditionalAnimationsTimer_StartPlay_Parms, NULL );
	};

	void TickAdditionalAnimations ( float DeltaTime )
	{
		static UFunction* pfnTickAdditionalAnimations = NULL;

		if ( !pfnTickAdditionalAnimations )
			pfnTickAdditionalAnimations = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TickAdditionalAnimations" );

		ACCPawn_execTickAdditionalAnimations_Parms TickAdditionalAnimations_Parms;
		TickAdditionalAnimations_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickAdditionalAnimations, &TickAdditionalAnimations_Parms, NULL );
	};

	void* CreateAAIEffectFor ( struct FString AnimName )
	{
		static UFunction* pfnCreateAAIEffectFor = NULL;

		if ( !pfnCreateAAIEffectFor )
			pfnCreateAAIEffectFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CreateAAIEffectFor" );

		ACCPawn_execCreateAAIEffectFor_Parms CreateAAIEffectFor_Parms;
		memcpy( &CreateAAIEffectFor_Parms.AnimName, &AnimName, 0xC );

		this->ProcessEvent( pfnCreateAAIEffectFor, &CreateAAIEffectFor_Parms, NULL );

		return CreateAAIEffectFor_Parms.ReturnValue;
	};

	void ForceAbortAdditionalAnimation ( unsigned long bNoBlendOut/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceAbortAdditionalAnimation = NULL;

		if ( !pfnForceAbortAdditionalAnimation )
			pfnForceAbortAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ForceAbortAdditionalAnimation" );

		ACCPawn_execForceAbortAdditionalAnimation_Parms ForceAbortAdditionalAnimation_Parms;
		ForceAbortAdditionalAnimation_Parms.bNoBlendOut = bNoBlendOut;

		this->ProcessEvent( pfnForceAbortAdditionalAnimation, &ForceAbortAdditionalAnimation_Parms, NULL );
	};

	void eventAbortAdditionalAnimation ( unsigned long bNoBlendOut/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAbortAdditionalAnimation = NULL;

		if ( !pfnAbortAdditionalAnimation )
			pfnAbortAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AbortAdditionalAnimation" );

		ACCPawn_eventAbortAdditionalAnimation_Parms AbortAdditionalAnimation_Parms;
		AbortAdditionalAnimation_Parms.bNoBlendOut = bNoBlendOut;

		this->ProcessEvent( pfnAbortAdditionalAnimation, &AbortAdditionalAnimation_Parms, NULL );
	};

	bool eventIsPlayingAdditionalAnimation ()
	{
		static UFunction* pfnIsPlayingAdditionalAnimation = NULL;

		if ( !pfnIsPlayingAdditionalAnimation )
			pfnIsPlayingAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.IsPlayingAdditionalAnimation" );

		ACCPawn_eventIsPlayingAdditionalAnimation_Parms IsPlayingAdditionalAnimation_Parms;

		this->ProcessEvent( pfnIsPlayingAdditionalAnimation, &IsPlayingAdditionalAnimation_Parms, NULL );

		return IsPlayingAdditionalAnimation_Parms.ReturnValue;
	};

	void eventPlayAdditionalAnimation ( struct FAdditionalAnimInfo* AAI )
	{
		static UFunction* pfnPlayAdditionalAnimation = NULL;

		if ( !pfnPlayAdditionalAnimation )
			pfnPlayAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PlayAdditionalAnimation" );

		ACCPawn_eventPlayAdditionalAnimation_Parms PlayAdditionalAnimation_Parms;

		this->ProcessEvent( pfnPlayAdditionalAnimation, &PlayAdditionalAnimation_Parms, NULL );

		if ( AAI )
			memcpy( AAI, &PlayAdditionalAnimation_Parms.AAI, 0x8C ); // CPF_OutParm
	};

	void AdditionalAnimationFinished ()
	{
		static UFunction* pfnAdditionalAnimationFinished = NULL;

		if ( !pfnAdditionalAnimationFinished )
			pfnAdditionalAnimationFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationFinished" );

		ACCPawn_execAdditionalAnimationFinished_Parms AdditionalAnimationFinished_Parms;

		this->ProcessEvent( pfnAdditionalAnimationFinished, &AdditionalAnimationFinished_Parms, NULL );
	};

	void AdditionalAnimationStarted ()
	{
		static UFunction* pfnAdditionalAnimationStarted = NULL;

		if ( !pfnAdditionalAnimationStarted )
			pfnAdditionalAnimationStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.AdditionalAnimationStarted" );

		ACCPawn_execAdditionalAnimationStarted_Parms AdditionalAnimationStarted_Parms;

		this->ProcessEvent( pfnAdditionalAnimationStarted, &AdditionalAnimationStarted_Parms, NULL );
	};

	void ServerForceAbortAdditionalAnimation ()
	{
		static UFunction* pfnServerForceAbortAdditionalAnimation = NULL;

		if ( !pfnServerForceAbortAdditionalAnimation )
			pfnServerForceAbortAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerForceAbortAdditionalAnimation" );

		ACCPawn_execServerForceAbortAdditionalAnimation_Parms ServerForceAbortAdditionalAnimation_Parms;

		this->ProcessEvent( pfnServerForceAbortAdditionalAnimation, &ServerForceAbortAdditionalAnimation_Parms, NULL );
	};

	void ServerAbortAdditionalAnimation ()
	{
		static UFunction* pfnServerAbortAdditionalAnimation = NULL;

		if ( !pfnServerAbortAdditionalAnimation )
			pfnServerAbortAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerAbortAdditionalAnimation" );

		ACCPawn_execServerAbortAdditionalAnimation_Parms ServerAbortAdditionalAnimation_Parms;

		this->ProcessEvent( pfnServerAbortAdditionalAnimation, &ServerAbortAdditionalAnimation_Parms, NULL );
	};

	void ServerPlayAdditionalAnimation ( struct FAdditionalAnimInfo AAI )
	{
		static UFunction* pfnServerPlayAdditionalAnimation = NULL;

		if ( !pfnServerPlayAdditionalAnimation )
			pfnServerPlayAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerPlayAdditionalAnimation" );

		ACCPawn_execServerPlayAdditionalAnimation_Parms ServerPlayAdditionalAnimation_Parms;
		memcpy( &ServerPlayAdditionalAnimation_Parms.AAI, &AAI, 0x8C );

		this->ProcessEvent( pfnServerPlayAdditionalAnimation, &ServerPlayAdditionalAnimation_Parms, NULL );
	};

	bool IsReplicatedAdditionalAnimationInfoRelevant ()
	{
		static UFunction* pfnIsReplicatedAdditionalAnimationInfoRelevant = NULL;

		if ( !pfnIsReplicatedAdditionalAnimationInfoRelevant )
			pfnIsReplicatedAdditionalAnimationInfoRelevant = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.IsReplicatedAdditionalAnimationInfoRelevant" );

		ACCPawn_execIsReplicatedAdditionalAnimationInfoRelevant_Parms IsReplicatedAdditionalAnimationInfoRelevant_Parms;

		this->ProcessEvent( pfnIsReplicatedAdditionalAnimationInfoRelevant, &IsReplicatedAdditionalAnimationInfoRelevant_Parms, NULL );

		return IsReplicatedAdditionalAnimationInfoRelevant_Parms.ReturnValue;
	};

	void TestGetStartAndFinishDelay ( float* StartDelay, float* FinishDelay )
	{
		static UFunction* pfnTestGetStartAndFinishDelay = NULL;

		if ( !pfnTestGetStartAndFinishDelay )
			pfnTestGetStartAndFinishDelay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestGetStartAndFinishDelay" );

		ACCPawn_execTestGetStartAndFinishDelay_Parms TestGetStartAndFinishDelay_Parms;

		this->ProcessEvent( pfnTestGetStartAndFinishDelay, &TestGetStartAndFinishDelay_Parms, NULL );

		if ( StartDelay )
			*StartDelay = TestGetStartAndFinishDelay_Parms.StartDelay; // CPF_OutParm
		if ( FinishDelay )
			*FinishDelay = TestGetStartAndFinishDelay_Parms.FinishDelay; // CPF_OutParm
	};

	void TestAbortAdditionalAnimation ()
	{
		static UFunction* pfnTestAbortAdditionalAnimation = NULL;

		if ( !pfnTestAbortAdditionalAnimation )
			pfnTestAbortAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestAbortAdditionalAnimation" );

		ACCPawn_execTestAbortAdditionalAnimation_Parms TestAbortAdditionalAnimation_Parms;

		this->ProcessEvent( pfnTestAbortAdditionalAnimation, &TestAbortAdditionalAnimation_Parms, NULL );
	};

	void TestPlayAdditionalAnimation ( struct FString AnimName, float BlendNodeTarget, unsigned long bHideWeaponDueAnim )
	{
		static UFunction* pfnTestPlayAdditionalAnimation = NULL;

		if ( !pfnTestPlayAdditionalAnimation )
			pfnTestPlayAdditionalAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.TestPlayAdditionalAnimation" );

		ACCPawn_execTestPlayAdditionalAnimation_Parms TestPlayAdditionalAnimation_Parms;
		memcpy( &TestPlayAdditionalAnimation_Parms.AnimName, &AnimName, 0xC );
		TestPlayAdditionalAnimation_Parms.BlendNodeTarget = BlendNodeTarget;
		TestPlayAdditionalAnimation_Parms.bHideWeaponDueAnim = bHideWeaponDueAnim;

		this->ProcessEvent( pfnTestPlayAdditionalAnimation, &TestPlayAdditionalAnimation_Parms, NULL );
	};

	bool GetAAIsNotRelevant ()
	{
		static UFunction* pfnGetAAIsNotRelevant = NULL;

		if ( !pfnGetAAIsNotRelevant )
			pfnGetAAIsNotRelevant = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAAIsNotRelevant" );

		ACCPawn_execGetAAIsNotRelevant_Parms GetAAIsNotRelevant_Parms;

		this->ProcessEvent( pfnGetAAIsNotRelevant, &GetAAIsNotRelevant_Parms, NULL );

		return GetAAIsNotRelevant_Parms.ReturnValue;
	};

	void CalcAAIBlendTime ( int DestListNodeChildIndex, void** ListNode, TArray< void* >* Selectors, float* ListNodeBlendTime, float* SelectorBlendTime )
	{
		static UFunction* pfnCalcAAIBlendTime = NULL;

		if ( !pfnCalcAAIBlendTime )
			pfnCalcAAIBlendTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.CalcAAIBlendTime" );

		ACCPawn_execCalcAAIBlendTime_Parms CalcAAIBlendTime_Parms;
		CalcAAIBlendTime_Parms.DestListNodeChildIndex = DestListNodeChildIndex;

		this->ProcessEvent( pfnCalcAAIBlendTime, &CalcAAIBlendTime_Parms, NULL );

		if ( ListNode )
			*ListNode = CalcAAIBlendTime_Parms.ListNode; // CPF_OutParm
		if ( Selectors )
			*Selectors = CalcAAIBlendTime_Parms.Selectors; // CPF_OutParm
		if ( ListNodeBlendTime )
			*ListNodeBlendTime = CalcAAIBlendTime_Parms.ListNodeBlendTime; // CPF_OutParm
		if ( SelectorBlendTime )
			*SelectorBlendTime = CalcAAIBlendTime_Parms.SelectorBlendTime; // CPF_OutParm
	};

	void GetAdditionalAnimationsNames ( TArray< struct FString >* Names )
	{
		static UFunction* pfnGetAdditionalAnimationsNames = NULL;

		if ( !pfnGetAdditionalAnimationsNames )
			pfnGetAdditionalAnimationsNames = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAdditionalAnimationsNames" );

		ACCPawn_execGetAdditionalAnimationsNames_Parms GetAdditionalAnimationsNames_Parms;

		this->ProcessEvent( pfnGetAdditionalAnimationsNames, &GetAdditionalAnimationsNames_Parms, NULL );

		if ( Names )
			memcpy( Names, &GetAdditionalAnimationsNames_Parms.Names, 0xC ); // CPF_OutParm
	};

	struct FName eventGetAdditionalAnimationName ( int EntryIndex )
	{
		static UFunction* pfnGetAdditionalAnimationName = NULL;

		if ( !pfnGetAdditionalAnimationName )
			pfnGetAdditionalAnimationName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAdditionalAnimationName" );

		ACCPawn_eventGetAdditionalAnimationName_Parms GetAdditionalAnimationName_Parms;
		GetAdditionalAnimationName_Parms.EntryIndex = EntryIndex;

		this->ProcessEvent( pfnGetAdditionalAnimationName, &GetAdditionalAnimationName_Parms, NULL );

		return GetAdditionalAnimationName_Parms.ReturnValue;
	};

	float eventGetAdditionalAnimationSequenceLengthEx ( struct FName AnimName )
	{
		static UFunction* pfnGetAdditionalAnimationSequenceLengthEx = NULL;

		if ( !pfnGetAdditionalAnimationSequenceLengthEx )
			pfnGetAdditionalAnimationSequenceLengthEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAdditionalAnimationSequenceLengthEx" );

		ACCPawn_eventGetAdditionalAnimationSequenceLengthEx_Parms GetAdditionalAnimationSequenceLengthEx_Parms;
		memcpy( &GetAdditionalAnimationSequenceLengthEx_Parms.AnimName, &AnimName, 0x8 );

		this->ProcessEvent( pfnGetAdditionalAnimationSequenceLengthEx, &GetAdditionalAnimationSequenceLengthEx_Parms, NULL );

		return GetAdditionalAnimationSequenceLengthEx_Parms.ReturnValue;
	};

	float eventGetAdditionalAnimationSequenceLength ( int Index )
	{
		static UFunction* pfnGetAdditionalAnimationSequenceLength = NULL;

		if ( !pfnGetAdditionalAnimationSequenceLength )
			pfnGetAdditionalAnimationSequenceLength = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAdditionalAnimationSequenceLength" );

		ACCPawn_eventGetAdditionalAnimationSequenceLength_Parms GetAdditionalAnimationSequenceLength_Parms;
		GetAdditionalAnimationSequenceLength_Parms.Index = Index;

		this->ProcessEvent( pfnGetAdditionalAnimationSequenceLength, &GetAdditionalAnimationSequenceLength_Parms, NULL );

		return GetAdditionalAnimationSequenceLength_Parms.ReturnValue;
	};

	bool eventIsAdditionalAnimationEntryValid ( int Index )
	{
		static UFunction* pfnIsAdditionalAnimationEntryValid = NULL;

		if ( !pfnIsAdditionalAnimationEntryValid )
			pfnIsAdditionalAnimationEntryValid = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.IsAdditionalAnimationEntryValid" );

		ACCPawn_eventIsAdditionalAnimationEntryValid_Parms IsAdditionalAnimationEntryValid_Parms;
		IsAdditionalAnimationEntryValid_Parms.Index = Index;

		this->ProcessEvent( pfnIsAdditionalAnimationEntryValid, &IsAdditionalAnimationEntryValid_Parms, NULL );

		return IsAdditionalAnimationEntryValid_Parms.ReturnValue;
	};

	int eventFindAdditionalAnimationEntryIndex ( struct FName AnimName )
	{
		static UFunction* pfnFindAdditionalAnimationEntryIndex = NULL;

		if ( !pfnFindAdditionalAnimationEntryIndex )
			pfnFindAdditionalAnimationEntryIndex = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.FindAdditionalAnimationEntryIndex" );

		ACCPawn_eventFindAdditionalAnimationEntryIndex_Parms FindAdditionalAnimationEntryIndex_Parms;
		memcpy( &FindAdditionalAnimationEntryIndex_Parms.AnimName, &AnimName, 0x8 );

		this->ProcessEvent( pfnFindAdditionalAnimationEntryIndex, &FindAdditionalAnimationEntryIndex_Parms, NULL );

		return FindAdditionalAnimationEntryIndex_Parms.ReturnValue;
	};

	void PrintAdditionalAnimationsDebugInfo ()
	{
		static UFunction* pfnPrintAdditionalAnimationsDebugInfo = NULL;

		if ( !pfnPrintAdditionalAnimationsDebugInfo )
			pfnPrintAdditionalAnimationsDebugInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PrintAdditionalAnimationsDebugInfo" );

		ACCPawn_execPrintAdditionalAnimationsDebugInfo_Parms PrintAdditionalAnimationsDebugInfo_Parms;

		this->ProcessEvent( pfnPrintAdditionalAnimationsDebugInfo, &PrintAdditionalAnimationsDebugInfo_Parms, NULL );
	};

	struct FAdditionalAnimationEntry BuildAdditionalAnimationEntryForNode ( void* BaseEntryNode )
	{
		static UFunction* pfnBuildAdditionalAnimationEntryForNode = NULL;

		if ( !pfnBuildAdditionalAnimationEntryForNode )
			pfnBuildAdditionalAnimationEntryForNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildAdditionalAnimationEntryForNode" );

		ACCPawn_execBuildAdditionalAnimationEntryForNode_Parms BuildAdditionalAnimationEntryForNode_Parms;
		BuildAdditionalAnimationEntryForNode_Parms.BaseEntryNode = BaseEntryNode;

		this->ProcessEvent( pfnBuildAdditionalAnimationEntryForNode, &BuildAdditionalAnimationEntryForNode_Parms, NULL );

		return BuildAdditionalAnimationEntryForNode_Parms.ReturnValue;
	};

	struct FAdditionalAnimationEntry BuildAdditionalAnimationEntryFor ( int AAINodeIndex, int AAIChildIndex )
	{
		static UFunction* pfnBuildAdditionalAnimationEntryFor = NULL;

		if ( !pfnBuildAdditionalAnimationEntryFor )
			pfnBuildAdditionalAnimationEntryFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildAdditionalAnimationEntryFor" );

		ACCPawn_execBuildAdditionalAnimationEntryFor_Parms BuildAdditionalAnimationEntryFor_Parms;
		BuildAdditionalAnimationEntryFor_Parms.AAINodeIndex = AAINodeIndex;
		BuildAdditionalAnimationEntryFor_Parms.AAIChildIndex = AAIChildIndex;

		this->ProcessEvent( pfnBuildAdditionalAnimationEntryFor, &BuildAdditionalAnimationEntryFor_Parms, NULL );

		return BuildAdditionalAnimationEntryFor_Parms.ReturnValue;
	};

	bool BuildAdditionalAnimationNodeInfoFor ( struct FString NodeName, struct FAdditionalAnimationNodeInfo* NodeInfo )
	{
		static UFunction* pfnBuildAdditionalAnimationNodeInfoFor = NULL;

		if ( !pfnBuildAdditionalAnimationNodeInfoFor )
			pfnBuildAdditionalAnimationNodeInfoFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.BuildAdditionalAnimationNodeInfoFor" );

		ACCPawn_execBuildAdditionalAnimationNodeInfoFor_Parms BuildAdditionalAnimationNodeInfoFor_Parms;
		memcpy( &BuildAdditionalAnimationNodeInfoFor_Parms.NodeName, &NodeName, 0xC );

		this->ProcessEvent( pfnBuildAdditionalAnimationNodeInfoFor, &BuildAdditionalAnimationNodeInfoFor_Parms, NULL );

		if ( NodeInfo )
			memcpy( NodeInfo, &BuildAdditionalAnimationNodeInfoFor_Parms.NodeInfo, 0x14 ); // CPF_OutParm

		return BuildAdditionalAnimationNodeInfoFor_Parms.ReturnValue;
	};

	void InitializeAdditionalAnimations ()
	{
		static UFunction* pfnInitializeAdditionalAnimations = NULL;

		if ( !pfnInitializeAdditionalAnimations )
			pfnInitializeAdditionalAnimations = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.InitializeAdditionalAnimations" );

		ACCPawn_execInitializeAdditionalAnimations_Parms InitializeAdditionalAnimations_Parms;

		this->ProcessEvent( pfnInitializeAdditionalAnimations, &InitializeAdditionalAnimations_Parms, NULL );
	};

	void PossessedBy ( class AController* C, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossessedBy = NULL;

		if ( !pfnPossessedBy )
			pfnPossessedBy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PossessedBy" );

		ACCPawn_execPossessedBy_Parms PossessedBy_Parms;
		PossessedBy_Parms.C = C;
		PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossessedBy, &PossessedBy_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.PostBeginPlay" );

		ACCPawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void* eventGetAvatar ()
	{
		static UFunction* pfnGetAvatar = NULL;

		if ( !pfnGetAvatar )
			pfnGetAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetAvatar" );

		ACCPawn_eventGetAvatar_Parms GetAvatar_Parms;

		this->ProcessEvent( pfnGetAvatar, &GetAvatar_Parms, NULL );

		return GetAvatar_Parms.ReturnValue;
	};

	struct FString GetName ()
	{
		static UFunction* pfnGetName = NULL;

		if ( !pfnGetName )
			pfnGetName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetName" );

		ACCPawn_execGetName_Parms GetName_Parms;

		this->ProcessEvent( pfnGetName, &GetName_Parms, NULL );

		return GetName_Parms.ReturnValue;
	};

	int GetNetworkID ()
	{
		static UFunction* pfnGetNetworkID = NULL;

		if ( !pfnGetNetworkID )
			pfnGetNetworkID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.GetNetworkID" );

		ACCPawn_execGetNetworkID_Parms GetNetworkID_Parms;

		this->ProcessEvent( pfnGetNetworkID, &GetNetworkID_Parms, NULL );

		return GetNetworkID_Parms.ReturnValue;
	};

	void ServerSetNetworkID ( int NetId )
	{
		static UFunction* pfnServerSetNetworkID = NULL;

		if ( !pfnServerSetNetworkID )
			pfnServerSetNetworkID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ServerSetNetworkID" );

		ACCPawn_execServerSetNetworkID_Parms ServerSetNetworkID_Parms;
		ServerSetNetworkID_Parms.NetId = NetId;

		this->ProcessEvent( pfnServerSetNetworkID, &ServerSetNetworkID_Parms, NULL );
	};

	void eventSetSPDModifier ( float Modifier )
	{
		static UFunction* pfnSetSPDModifier = NULL;

		if ( !pfnSetSPDModifier )
			pfnSetSPDModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetSPDModifier" );

		ACCPawn_eventSetSPDModifier_Parms SetSPDModifier_Parms;
		SetSPDModifier_Parms.Modifier = Modifier;

		this->ProcessEvent( pfnSetSPDModifier, &SetSPDModifier_Parms, NULL );
	};

	void RegisterInRealmNodesProxy ()
	{
		static UFunction* pfnRegisterInRealmNodesProxy = NULL;

		if ( !pfnRegisterInRealmNodesProxy )
			pfnRegisterInRealmNodesProxy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.RegisterInRealmNodesProxy" );

		ACCPawn_execRegisterInRealmNodesProxy_Parms RegisterInRealmNodesProxy_Parms;

		pfnRegisterInRealmNodesProxy->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRegisterInRealmNodesProxy, &RegisterInRealmNodesProxy_Parms, NULL );
		pfnRegisterInRealmNodesProxy->FunctionFlags |= 0x400;
	};

	void SetNetworkID ( int NetId )
	{
		static UFunction* pfnSetNetworkID = NULL;

		if ( !pfnSetNetworkID )
			pfnSetNetworkID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.SetNetworkID" );

		ACCPawn_execSetNetworkID_Parms SetNetworkID_Parms;
		SetNetworkID_Parms.NetId = NetId;

		this->ProcessEvent( pfnSetNetworkID, &SetNetworkID_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.ReplicatedEvent" );

		ACCPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void UpdateAimOffset ( struct FRotator NewAimOffsetPct, float DeltaTime )
	{
		static UFunction* pfnUpdateAimOffset = NULL;

		if ( !pfnUpdateAimOffset )
			pfnUpdateAimOffset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateAimOffset" );

		ACCPawn_execUpdateAimOffset_Parms UpdateAimOffset_Parms;
		memcpy( &UpdateAimOffset_Parms.NewAimOffsetPct, &NewAimOffsetPct, 0xC );
		UpdateAimOffset_Parms.DeltaTime = DeltaTime;

		pfnUpdateAimOffset->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateAimOffset, &UpdateAimOffset_Parms, NULL );
		pfnUpdateAimOffset->FunctionFlags |= 0x400;
	};

	void InitializeOtherAnimationNodes ()
	{
		static UFunction* pfnInitializeOtherAnimationNodes = NULL;

		if ( !pfnInitializeOtherAnimationNodes )
			pfnInitializeOtherAnimationNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.InitializeOtherAnimationNodes" );

		ACCPawn_execInitializeOtherAnimationNodes_Parms InitializeOtherAnimationNodes_Parms;

		pfnInitializeOtherAnimationNodes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitializeOtherAnimationNodes, &InitializeOtherAnimationNodes_Parms, NULL );
		pfnInitializeOtherAnimationNodes->FunctionFlags |= 0x400;
	};

	void eventUpdateSpeedParams ()
	{
		static UFunction* pfnUpdateSpeedParams = NULL;

		if ( !pfnUpdateSpeedParams )
			pfnUpdateSpeedParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPawn.UpdateSpeedParams" );

		ACCPawn_eventUpdateSpeedParams_Parms UpdateSpeedParams_Parms;

		this->ProcessEvent( pfnUpdateSpeedParams, &UpdateSpeedParams_Parms, NULL );
	};

};

UClass* ACCPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif