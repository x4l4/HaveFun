/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AActor.h
// Date: 06/16/2011 @ 05:19:38.935
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_RB_Sleeping                          0x02
#define Const_RB_NeedsUpdate                       0x01
#define Const_RB_None                              0x00
#define Const_RBSTATE_ANGVELSCALE                  1000.0
#define Const_RBSTATE_LINVELSCALE                  10.0
#define Const_ACTORMAXSTEPHEIGHT                   35.0
#define Const_MINFLOORZ                            0.7
#define Const_SHOTFLAG_AlreadyDead                 256
#define Const_SHOTFLAG_SimpleHitEffect             128
#define Const_SHOTFLAG_DontReplicateToShooter      64
#define Const_SHOTFLAG_UseEmpiricSpread            32
#define Const_SHOTFLAG_LastShell                   16
#define Const_SHOTFLAG_SpawnTrace                  8
#define Const_SHOTFLAG_HeadShot                    4
#define Const_SHOTFLAG_Critical                    2
#define Const_SHOTFLAG_Penetration                 1
#define Const_REP_RBLOCATION_ERROR_TOLERANCE_SQ    16.0f
#define Const_TRACEFLAG_GrenadeTrajectoryTest      16
#define Const_TRACEFLAG_Blocking                   8
#define Const_TRACEFLAG_SkipMovers                 4
#define Const_TRACEFLAG_PhysicsVolumes             2
#define Const_TRACEFLAG_Bullet                     1

enum EDoubleClickDir
{
	DCLICK_None = 0,
	DCLICK_Left = 1,
	DCLICK_Right = 2,
	DCLICK_Forward = 3,
	DCLICK_Back = 4,
	DCLICK_Active = 5,
	DCLICK_Done = 6,
	DCLICK_MAX = 7
};

enum ETravelType
{
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

enum ECollisionType
{
	COLLIDE_CustomDefault = 0,
	COLLIDE_NoCollision = 1,
	COLLIDE_BlockAll = 2,
	COLLIDE_BlockWeapons = 3,
	COLLIDE_TouchAll = 4,
	COLLIDE_TouchWeapons = 5,
	COLLIDE_BlockAllButWeapons = 6,
	COLLIDE_TouchAllButWeapons = 7,
	COLLIDE_BlockWeaponsKickable = 8,
	COLLIDE_BlockPawnNonZeroExtentOnly = 9,
	COLLIDE_MAX = 10
};

enum ENetRole
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

enum EMoveDir
{
	MD_Stationary = 0,
	MD_Forward = 1,
	MD_Backward = 2,
	MD_Left = 3,
	MD_Right = 4,
	MD_Up = 5,
	MD_Down = 6,
	MD_MAX = 7
};

enum EPhysics
{
	PHYS_None = 0,
	PHYS_Walking = 1,
	PHYS_Falling = 2,
	PHYS_Swimming = 3,
	PHYS_Flying = 4,
	PHYS_Rotating = 5,
	PHYS_Projectile = 6,
	PHYS_Interpolating = 7,
	PHYS_Spider = 8,
	PHYS_Ladder = 9,
	PHYS_RigidBody = 10,
	PHYS_SoftBody = 11,
	PHYS_Unused = 12,
	PHYS_MAX = 13
};

struct AActor_execGoToStateChecked_Parms
{
	struct FName NewState;
	struct FName Label;
	unsigned long bForceEvents : 1;
	unsigned long bKeepStack : 1;
};

struct AActor_eventPostDemoRewind_Parms
{
};// FUNC_Event

struct AActor_eventAnimTreeUpdated_Parms
{
	class USkeletalMeshComponent* SkelMesh;
};// FUNC_Event

struct AActor_execSupportsKismetModification_Parms
{
	class USequenceOp* AskingOp;
	struct FString Reason; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_eventPlayParticleEffect_Parms
{
	void* AnimNotifyData;
};// FUNC_Event

struct AActor_execOnForceMaterialMipsResident_Parms
{
	void* Action;
};

struct AActor_execGetAimAdhesionExtent_Parms
{
	float Width; // CPF_OutParm
	float Height; // CPF_OutParm
	struct FVector Center; // CPF_OutParm
};

struct AActor_execGetAimFrictionExtent_Parms
{
	float Width; // CPF_OutParm
	float Height; // CPF_OutParm
	struct FVector Center; // CPF_OutParm
};

struct AActor_execIsInPersistentLevel_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_eventOnRigidBodySpringOverextension_Parms
{
	void* BodyInstance;
};// FUNC_Event

struct AActor_execGetPackageGuid_Parms
{
	struct FName PackageName;
	struct FGuid ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent* SkelComp;
};// FUNC_Event

struct AActor_eventRootMotionExtracted_Parms
{
	class USkeletalMeshComponent* SkelComp;
	struct FBoneAtom ExtractedRootMotionDelta; // CPF_OutParm
};// FUNC_Event

struct AActor_eventRootMotionModeChanged_Parms
{
	class USkeletalMeshComponent* SkelComp;
};// FUNC_Event

struct AActor_eventPostRenderFor_Parms
{
	class APlayerController* PC;
	class UCanvas* Canvas;
	struct FVector CameraPosition;
	struct FVector CameraDir;
};// FUNC_Event

struct AActor_execNativePostRenderFor_Parms
{
	class APlayerController* PC;
	class UCanvas* Canvas;
	struct FVector CameraPosition;
	struct FVector CameraDir;
};// FUNC_Native

struct AActor_execSetHUDLocation_Parms
{
	struct FVector NewHUDLocation;
};// FUNC_Native

struct AActor_eventOnRanOver_Parms
{
	class ASVehicle* Vehicle;
	class UPrimitiveComponent* RunOverComponent;
	int WheelIndex;
};// FUNC_Event

struct AActor_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent* HitComponent;
	class UPrimitiveComponent* OtherComponent;
	struct FCollisionImpactData RigidCollisionData; // CPF_OutParm
	int ContactIndex;
};// FUNC_Event

struct AActor_eventInterpolationChanged_Parms
{
	void* InterpAction;
};// FUNC_Event

struct AActor_eventInterpolationFinished_Parms
{
	void* InterpAction;
};// FUNC_Event

struct AActor_eventInterpolationStarted_Parms
{
	void* InterpAction;
};// FUNC_Event

struct AActor_execPickedUpBy_Parms
{
	class APawn* P;
};

struct AActor_eventSpawnedByKismet_Parms
{
};// FUNC_Event

struct AActor_execGetTargetLocation_Parms
{
	class AActor* RequestedBy;
	unsigned long bRequestAlternateLoc : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execFindGoodEndView_Parms
{
	class APlayerController* PC;
	struct FRotator GoodRotation; // CPF_OutParm
};

struct AActor_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct AActor_execGetLocationStringFor_Parms
{
	class APlayerReplicationInfo* PRI;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_eventScriptGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AActor_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execPawnBaseDied_Parms
{
};

struct AActor_execIsPlayerOwned_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct AActor_eventGetActorEyesViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct AActor_execIsStationary_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventGetActorFaceFXAsset_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AActor_execCanActorPlayFaceFXAnim_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execIsActorPlayingFaceFXAnim_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventSetSkelControlScale_Parms
{
	struct FName SkelControlName;
	float Scale;
};// FUNC_Event

struct AActor_eventSetMorphWeight_Parms
{
	struct FName MorphNodeName;
	float MorphWeight;
};// FUNC_Event

struct AActor_eventStopActorFaceFXAnim_Parms
{
};// FUNC_Event

struct AActor_eventPlayActorFaceFXAnim_Parms
{
	void* AnimSet;
	struct FString GroupName;
	struct FString SeqName;
	void* SoundCueToPlay;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AActor_eventFinishAnimControl_Parms
{
};// FUNC_Event

struct AActor_eventSetAnimPosition_Parms
{
	struct FName SlotName;
	int ChannelIndex;
	struct FName InAnimSeqName;
	float InPosition;
	unsigned long bFireNotifies : 1;
	unsigned long bLooping : 1;
};// FUNC_Event

struct AActor_eventBeginAnimControl_Parms
{
	TArray< void* > InAnimSets;
};// FUNC_Event

struct AActor_eventOnAnimPlay_Parms
{
	void* SeqNode;
};// FUNC_Event

struct AActor_eventOnAnimEnd_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};// FUNC_Event

struct AActor_execOnMakeNoise_Parms
{
	void* Action;
};

struct AActor_execDoKismetAttachment_Parms
{
	class AActor* Attachment;
	void* Action;
};

struct AActor_execOnAttachToActor_Parms
{
	void* Action;
};

struct AActor_execOnToggleHidden_Parms
{
	void* Action;
};

struct AActor_execOnChangeCollision_Parms
{
	void* Action;
};

struct AActor_execOnSetPhysics_Parms
{
	void* Action;
};

struct AActor_execOnSetBlockRigidBody_Parms
{
	void* Action;
};

struct AActor_execOnTeleport_Parms
{
	void* Action;
};

struct AActor_execOnHealDamage_Parms
{
	void* Action;
};

struct AActor_execPrestreamTextures_Parms
{
	float Seconds;
	unsigned long bEnableStreaming : 1;
};// FUNC_Native

struct AActor_execOnCauseDamage_Parms
{
	void* Action;
};

struct AActor_eventShutDown_Parms
{
};// FUNC_Event

struct AActor_execSetNetUpdateTime_Parms
{
	float NewUpdateTime;
};// FUNC_Final FUNC_Native

struct AActor_eventForceNetRelevant_Parms
{
};// FUNC_Event

struct AActor_execOnDestroy_Parms
{
	void* Action;
};

struct AActor_execClearLatentAction_Parms
{
	class UClass* actionClass;
	unsigned long bAborted : 1;
	void* exceptionAction;
};// FUNC_Final

struct AActor_execFindEventsOfClass_Parms
{
	class UClass* EventClass;
	TArray< class USequenceEvent* > out_EventList; // CPF_OutParm
	unsigned long bIncludeDisabled : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct AActor_execActivateEventClass_Parms
{
	class UClass* InClass;
	class AActor* InInstigator;
	TArray< class USequenceEvent* > EventList; // CPF_OutParm
	TArray< int > ActivateIndices; // CPF_OutParm
	unsigned long bTest : 1;
	TArray< class USequenceEvent* > ActivatedEvents; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct AActor_execTriggerEventClass_Parms
{
	class UClass* InEventClass;
	class AActor* InInstigator;
	int ActivateIndex;
	unsigned long bTest : 1;
	TArray< class USequenceEvent* > ActivatedEvents; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execTimeSince_Parms
{
	float Time;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct AActor_execEffectIsRelevant_Parms
{
	struct FVector SpawnLocation;
	unsigned long bForceDedicated : 1;
	float CullDistance;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execCheckMaxEffectDistance_Parms
{
	class APlayerController* P;
	struct FVector SpawnLocation;
	float CullDistance;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execApplyFluidSurfaceImpact_Parms
{
	void* Fluid;
	struct FVector HitLocation;
};

struct AActor_execCanSplash_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execPlayTeleportEffect_Parms
{
	unsigned long bOut : 1;
	unsigned long bSound : 1;
};

struct AActor_execIsInPain_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execIsInVolume_Parms
{
	class AVolume* aVolume;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventReset_Parms
{
};// FUNC_Event

struct AActor_eventGetFaceFXAudioComponent_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AActor_eventModifyHearSoundComponent_Parms
{
	void* AC;
};// FUNC_Event

struct AActor_execGetPhysicsName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct AActor_execGetDebugName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_execSetGRI_Parms
{
	class AGameReplicationInfo* GRI;
};

struct AActor_execMatchStarting_Parms
{
};

struct AActor_execGetLocalString_Parms
{
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_execReplaceText_Parms
{
	struct FString Text; // CPF_OutParm
	struct FString Replace;
	struct FString With;
};

struct AActor_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_execGetItemName_Parms
{
	struct FString FullName;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AActor_execCalcCamera_Parms
{
	float fDeltaTime;
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	float out_FOV; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventEndViewTarget_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct AActor_eventBecomeViewTarget_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct AActor_execCheckForErrors_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventDebugFreezeGame_Parms
{
	class AActor* ActorToLookAt;
};// FUNC_Event

struct AActor_execGetGravityZ_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execCheckHitInfo_Parms
{
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	class UPrimitiveComponent* FallBackComponent;
	struct FVector Dir;
	struct FVector out_HitLocation; // CPF_OutParm
};// FUNC_Final

struct AActor_execTakeRadiusDamage_Parms
{
	class AController* InstigatedBy;
	float BaseDamage;
	float DamageRadius;
	class UClass* DamageType;
	float Momentum;
	struct FVector HurtOrigin;
	unsigned long bFullDamage : 1;
	class AActor* DamageCauser;
};

struct AActor_execHealDamage_Parms
{
	int Amount;
	class AController* Healer;
	class UClass* DamageType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventTakeDamage_Parms
{
	int DamageAmount;
	class AController* EventInstigator;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct AActor_execKilledBy_Parms
{
	class APawn* EventInstigator;
};

struct AActor_execHurtRadius_Parms
{
	float BaseDamage;
	float DamageRadius;
	class UClass* DamageType;
	float Momentum;
	struct FVector HurtOrigin;
	class AActor* IgnoredActor;
	class AController* InstigatedByController;
	unsigned long bDoFullDamage : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execStopsProjectile_Parms
{
	class AProjectile* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventNotifySkelControlBeyondLimit_Parms
{
	void* LookAt;
};// FUNC_Event

struct AActor_eventConstraintBrokenNotify_Parms
{
	class AActor* ConOwner;
	void* ConSetup;
	void* ConInstance;
};// FUNC_Event

struct AActor_eventSetInitialState_Parms
{
};// FUNC_Event

struct AActor_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AActor_eventBroadcastLocalizedTeamMessage_Parms
{
	int TeamIndex;
	class UClass* InMessageClass;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};// FUNC_Event

struct AActor_eventBroadcastLocalizedMessage_Parms
{
	class UClass* InMessageClass;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};// FUNC_Event

struct AActor_eventPreBeginPlay_Parms
{
};// FUNC_Event

struct AActor_execFindActorsOfClass_Parms
{
	class UClass* ActorClass;
	TArray< class AActor* > out_Actors; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct AActor_execLocalPlayerControllers_Parms
{
	class UClass* BaseClass;
	class APlayerController* PC; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execAllOwnedComponents_Parms
{
	class UClass* BaseClass;
	class UActorComponent* OutComponent; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execComponentList_Parms
{
	class UClass* BaseClass;
	class UActorComponent* out_Component; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execOverlappingActors_Parms
{
	class UClass* BaseClass;
	class AActor* out_Actor; // CPF_OutParm
	float Radius;
	struct FVector Loc;
	unsigned long bIgnoreHidden : 1;
};// FUNC_Final FUNC_Native

struct AActor_execCollidingActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
	float Radius;
	struct FVector Loc;
	unsigned long bUseOverlapCheck : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x0141]

struct AActor_execVisibleCollidingActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
	float Radius;
	struct FVector Loc;
	unsigned long bIgnoreHidden : 1;
	struct FVector Extent;
	unsigned long bTraceActors : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x0138]

struct AActor_execVisibleActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
	float Radius;
	struct FVector Loc;
};// FUNC_Final FUNC_Native NativeIndex[0x0137]

struct AActor_execTraceActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
	struct FVector HitLoc; // CPF_OutParm
	struct FVector HitNorm; // CPF_OutParm
	struct FVector End;
	struct FVector Start;
	struct FVector Extent;
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	int ExtraTraceFlags;
};// FUNC_Final FUNC_Native NativeIndex[0x0135]

struct AActor_execTouchingActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x0133]

struct AActor_execBasedActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x0132]

struct AActor_execChildActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x0131]

struct AActor_execDynamicActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x0139]

struct AActor_execAllActors_Parms
{
	class UClass* BaseClass;
	class AActor* Actor; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x0130]

struct AActor_execGetURLMap_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0223]

struct AActor_execPostTeleport_Parms
{
	void* OutTeleporter;
};

struct AActor_execPreTeleport_Parms
{
	void* InTeleporter;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_execGetDestination_Parms
{
	class AController* C;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execSuggestTossVelocity_Parms
{
	struct FVector TossVelocity; // CPF_OutParm
	struct FVector Destination;
	struct FVector Start;
	float TossSpeed;
	float BaseTossZ;
	float DesiredZPct;
	struct FVector CollisionSize;
	float TerminalVelocity;
	float OverrideGravityZ;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execPlayerCanSeeMe_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0214]

struct AActor_execMakeNoise_Parms
{
	float Loudness;
	struct FName NoiseType;
};// FUNC_Final FUNC_Native NativeIndex[0x0200]

struct AActor_execPlaySound_Parms
{
	void* InSoundCue;
	unsigned long bNotReplicated : 1;
	unsigned long bNoRepToOwner : 1;
	unsigned long bStopWhenOwnerDestroyed : 1;
	struct FVector SoundLocation;
	unsigned long bNoRepToRelevant : 1;
};// FUNC_Final FUNC_Native

struct AActor_execCreateAudioComponent_Parms
{
	void* InSoundCue;
	unsigned long bPlay : 1;
	unsigned long bStopWhenOwnerDestroyed : 1;
	unsigned long bUseLocation : 1;
	struct FVector SourceLocation;
	unsigned long bAttachToSelf : 1;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execGetRemainingTimeForTimer_Parms
{
	struct FName TimerFuncName;
	class UObject* inObj;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct AActor_execGetTimerRate_Parms
{
	struct FName TimerFuncName;
	class UObject* inObj;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execGetTimerCount_Parms
{
	struct FName inTimerFunc;
	class UObject* inObj;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execIsTimerActive_Parms
{
	struct FName inTimerFunc;
	class UObject* inObj;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execPauseTimer_Parms
{
	unsigned long bPause : 1;
	struct FName inTimerFunc;
	class UObject* inObj;
};// FUNC_Final FUNC_Native

struct AActor_execClearTimer_Parms
{
	struct FName inTimerFunc;
	class UObject* inObj;
};// FUNC_Final FUNC_Native

struct AActor_execSetTimer_Parms
{
	float InRate;
	unsigned long inbLoop : 1;
	struct FName inTimerFunc;
	class UObject* inObj;
};// FUNC_Final FUNC_Native NativeIndex[0x0118]

struct AActor_eventTornOff_Parms
{
};// FUNC_Event

struct AActor_execDestroy_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0117]

struct AActor_execSpawn_Parms
{
	class UClass* SpawnClass;
	class AActor* SpawnOwner;
	struct FName SpawnTag;
	struct FVector SpawnLocation;
	struct FRotator SpawnRotation;
	class AActor* ActorTemplate;
	unsigned long bNoCollisionFail : 1;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execGetBoundingCylinder_Parms
{
	float CollisionRadius; // CPF_OutParm
	float CollisionHeight; // CPF_OutParm
};// FUNC_Native

struct AActor_execGetComponentsBoundingBox_Parms
{
	struct FBox ActorBox; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execIsOverlapping_Parms
{
	class AActor* A;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execContainsPoint_Parms
{
	struct FVector Spot;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execFindSpot_Parms
{
	struct FVector BoxExtent;
	struct FVector SpotLocation; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execTraceAllPhysicsAssetInteractions_Parms
{
	class USkeletalMeshComponent* SkelMeshComp;
	struct FVector EndTrace;
	struct FVector StartTrace;
	TArray< struct FImpactInfo > out_Hits; // CPF_OutParm
	struct FVector Extent;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execFastTrace_Parms
{
	struct FVector TraceEnd;
	struct FVector TraceStart;
	struct FVector BoxExtent;
	unsigned long bTraceBullet : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0224]

struct AActor_execPointCheckComponent_Parms
{
	class UPrimitiveComponent* InComponent;
	struct FVector PointLocation;
	struct FVector PointExtent;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execTraceComponent_Parms
{
	struct FVector HitLocation; // CPF_OutParm
	struct FVector HitNormal; // CPF_OutParm
	class UPrimitiveComponent* InComponent;
	struct FVector TraceEnd;
	struct FVector TraceStart;
	struct FVector Extent;
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execTrace_Parms
{
	struct FVector HitLocation; // CPF_OutParm
	struct FVector HitNormal; // CPF_OutParm
	struct FVector TraceEnd;
	struct FVector TraceStart;
	unsigned long bTraceActors : 1;
	struct FVector Extent;
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	int ExtraTraceFlags;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0115]

struct AActor_execMakeEmptyAdditionalHitInfo_Parms
{
	struct FAdditionalHitInfo ReturnValue; // CPF_ReturnParm
};

struct AActor_execMakeAdditionalHitInfo_Parms
{
	int HitEffectType;
	unsigned long bUseHitAnimation : 1;
	int ShotFlags;
	struct FAdditionalHitInfo ReturnValue; // CPF_ReturnParm
};

struct AActor_execVolumeBasedDestroy_Parms
{
	void* PV;
};

struct AActor_eventOutsideWorldBounds_Parms
{
};// FUNC_Event

struct AActor_eventFellOutOfWorld_Parms
{
	class UClass* dmgType;
};// FUNC_Event

struct AActor_execUsedBy_Parms
{
	class APawn* User;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AActor_eventOverRotated_Parms
{
	struct FRotator out_Desired; // CPF_OutParm
	struct FRotator out_Actual; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AActor_execClampRotation_Parms
{
	struct FRotator out_Rot; // CPF_OutParm
	struct FRotator rBase;
	struct FRotator rUpperLimits;
	struct FRotator rLowerLimits;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_eventRanInto_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventEncroachedBy_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventEncroachingOn_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AActor_eventCollisionChanged_Parms
{
};// FUNC_Event

struct AActor_eventSpecialHandling_Parms
{
	class APawn* Other;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AActor_eventDetach_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventAttach_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventBaseChange_Parms
{
};// FUNC_Event

struct AActor_eventBump_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitNormal;
};// FUNC_Event

struct AActor_eventUnTouch_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventPostTouch_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct AActor_eventPhysicsVolumeChange_Parms
{
	void* NewVolume;
};// FUNC_Event

struct AActor_eventLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
};// FUNC_Event

struct AActor_eventFalling_Parms
{
};// FUNC_Event

struct AActor_eventHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};// FUNC_Event

struct AActor_eventTimer_Parms
{
};// FUNC_Event

struct AActor_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct AActor_eventLostChild_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventGainedChild_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AActor_eventDestroyed_Parms
{
};// FUNC_Event

struct AActor_execSetTickGroup_Parms
{
	unsigned char NewTickGroup;
};// FUNC_Final FUNC_Native

struct AActor_execReattachComponent_Parms
{
	class UActorComponent* ComponentToReattach;
};// FUNC_Final FUNC_Native

struct AActor_execDetachComponent_Parms
{
	class UActorComponent* ExComponent;
};// FUNC_Final FUNC_Native

struct AActor_execAttachComponent_Parms
{
	class UActorComponent* NewComponent;
};// FUNC_Final FUNC_Native

struct AActor_execUnClock_Parms
{
	float Time; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execClock_Parms
{
	float Time; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AActor_execSetPhysics_Parms
{
	unsigned char newPhysics;
};// FUNC_Final FUNC_Native NativeIndex[0x0F82]

struct AActor_execSetOnlyOwnerSee_Parms
{
	unsigned long bNewOnlyOwnerSee : 1;
};// FUNC_Final FUNC_Native

struct AActor_execSetHidden_Parms
{
	unsigned long bNewHidden : 1;
};// FUNC_Final FUNC_Native

struct AActor_execChartData_Parms
{
	struct FString DataName;
	float DataValue;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugCone_Parms
{
	struct FVector Origin;
	struct FVector Direction;
	float Length;
	float AngleWidth;
	float AngleHeight;
	int NumSides;
	struct FColor DrawColor;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugCylinder_Parms
{
	struct FVector Start;
	struct FVector End;
	float Radius;
	int Segments;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugSphere_Parms
{
	struct FVector Center;
	float Radius;
	int Segments;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugCoordinateSystem_Parms
{
	struct FVector AxisLoc;
	struct FRotator AxisRot;
	float Scale;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugBox_Parms
{
	struct FVector Center;
	struct FVector Extent;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execDrawDebugLine_Parms
{
	struct FVector LineStart;
	struct FVector LineEnd;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};// FUNC_Final FUNC_Native

struct AActor_execFlushPersistentDebugLines_Parms
{
};// FUNC_Final FUNC_Native

struct AActor_execSetForcedInitialReplicatedProperty_Parms
{
	void* PropToReplicate;
	unsigned long bAdd : 1;
};// FUNC_Final FUNC_Native

struct AActor_eventReplicatedDataBinding_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AActor_eventReplicatedEventEx_Parms
{
	struct FName VarName;
	int ArrayIndex;
};// FUNC_Event

struct AActor_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AActor_execIsOwnedBy_Parms
{
	class AActor* TestActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execGetBaseMost_Parms
{
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execIsBasedOn_Parms
{
	class AActor* TestActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execFindBase_Parms
{
};// FUNC_Native

struct AActor_execSetOwner_Parms
{
	class AActor* NewOwner;
};// FUNC_Final FUNC_Native NativeIndex[0x0110]

struct AActor_execSetBase_Parms
{
	class AActor* NewBase;
	struct FVector NewFloor;
	class USkeletalMeshComponent* SkelComp;
	struct FName AttachName;
};// FUNC_Final FUNC_Native NativeIndex[0x012A]

struct AActor_execGetTerminalVelocity_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execAutonomousPhysics_Parms
{
	float DeltaSeconds;
};// FUNC_Final FUNC_Native NativeIndex[0x0F83]

struct AActor_execMoveSmooth_Parms
{
	struct FVector Delta;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0F81]

struct AActor_execfixedTurn_Parms
{
	int Current;
	int Desired;
	int DeltaRate;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execSetHardAttach_Parms
{
	unsigned long bNewHardAttach : 1;
};// FUNC_Final FUNC_Native

struct AActor_execSetRelativeLocation_Parms
{
	struct FVector NewLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execSetRelativeRotation_Parms
{
	struct FRotator NewRotation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AActor_execSetZone_Parms
{
	unsigned long bForceRefresh : 1;
};// FUNC_Final FUNC_Native

struct AActor_execMovingWhichWay_Parms
{
	float Amount; // CPF_OutParm
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execSetRotation_Parms
{
	struct FRotator NewRotation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x012B]

struct AActor_execSetLocation_Parms
{
	struct FVector NewLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x010B]

struct AActor_execMove_Parms
{
	struct FVector Delta;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x010A]

struct AActor_execSetDrawScale3D_Parms
{
	struct FVector NewScale3D;
};// FUNC_Final FUNC_Native

struct AActor_execSetDrawScale_Parms
{
	float NewScale;
};// FUNC_Final FUNC_Native

struct AActor_execSetCollisionType_Parms
{
	unsigned char NewCollisionType;
};// FUNC_Final FUNC_Native

struct AActor_execSetCollisionSize_Parms
{
	float NewRadius;
	float NewHeight;
};// FUNC_Final FUNC_Native NativeIndex[0x011B]

struct AActor_execSetCollision_Parms
{
	unsigned long bNewColActors : 1;
	unsigned long bNewBlockActors : 1;
	unsigned long bNewIgnoreEncroachers : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x0106]

struct AActor_execFinishAnim_Parms
{
	void* SeqNode;
};// FUNC_Final FUNC_Native NativeIndex[0x0105]

struct AActor_execSleep_Parms
{
	float Seconds;
};// FUNC_Final FUNC_Native NativeIndex[0x0100]

struct AActor_execConsoleCommand_Parms
{
	struct FString Command;
	unsigned long bWriteToLog : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AActor_execForceUpdateComponents_Parms
{
	unsigned long bCollisionUpdate : 1;
	unsigned long bTransformOnly : 1;
};// FUNC_Native

// (0x3C - 0x1BC)
class AActor : public UObject
{
public:
	TArray< class UActorComponent* >                   Components;                                  // 0x003C (0x000C)
	TArray< class UActorComponent* >                   AllComponents;                               // 0x0048 (0x000C)
	struct FVector                                     Location;                                    // 0x0054 (0x000C)
	struct FRotator                                    Rotation;                                    // 0x0060 (0x000C)
	float                                              DrawScale;                                   // 0x006C (0x0004)
	struct FVector                                     DrawScale3D;                                 // 0x0070 (0x000C)
	struct FVector                                     PrePivot;                                    // 0x007C (0x000C)
	struct FRenderCommandFence                         DetachFence;                                 // 0x0088 (0x0004)
	float                                              CustomTimeDilation;                          // 0x008C (0x0004)
	unsigned char                                      Physics;                                     // 0x0090 (0x0001)
	unsigned char                                      RemoteRole;                                  // 0x0091 (0x0001)
	unsigned char                                      Role;                                        // 0x0092 (0x0001)
	unsigned char                                      CollisionType;                               // 0x0093 (0x0001)
	unsigned char                                      ReplicatedCollisionType;                     // 0x0094 (0x0001)
	unsigned char                                      TickGroup;                                   // 0x0095 (0x0001)
	class AActor*                                      Owner;                                       // 0x0098 (0x0004)
	class AActor*                                      Base;                                        // 0x009C (0x0004)
	TArray< struct FTimerData >                        Timers;                                      // 0x00A0 (0x000C)
	unsigned long                                      bStatic : 1;                                 // 0x00AC (0x0004) [0x00000001]
	unsigned long                                      bHidden : 1;                                 // 0x00AC (0x0004) [0x00000002]
	unsigned long                                      bNoDelete : 1;                               // 0x00AC (0x0004) [0x00000004]
	unsigned long                                      bDeleteMe : 1;                               // 0x00AC (0x0004) [0x00000008]
	unsigned long                                      bTicked : 1;                                 // 0x00AC (0x0004) [0x00000010]
	unsigned long                                      bOnlyOwnerSee : 1;                           // 0x00AC (0x0004) [0x00000020]
	unsigned long                                      bStasis : 1;                                 // 0x00AC (0x0004) [0x00000040]
	unsigned long                                      bWorldGeometry : 1;                          // 0x00AC (0x0004) [0x00000080]
	unsigned long                                      bIgnoreRigidBodyPawns : 1;                   // 0x00AC (0x0004) [0x00000100]
	unsigned long                                      bOrientOnSlope : 1;                          // 0x00AC (0x0004) [0x00000200]
	unsigned long                                      bIgnoreEncroachers : 1;                      // 0x00AC (0x0004) [0x00000400]
	unsigned long                                      bPushedByEncroachers : 1;                    // 0x00AC (0x0004) [0x00000800]
	unsigned long                                      bDestroyedByInterpActor : 1;                 // 0x00AC (0x0004) [0x00001000]
	unsigned long                                      bRouteBeginPlayEvenIfStatic : 1;             // 0x00AC (0x0004) [0x00002000]
	unsigned long                                      bIsMoving : 1;                               // 0x00AC (0x0004) [0x00004000]
	unsigned long                                      bAlwaysEncroachCheck : 1;                    // 0x00AC (0x0004) [0x00008000]
	unsigned long                                      bHasAlternateTargetLocation : 1;             // 0x00AC (0x0004) [0x00010000]
	unsigned long                                      bCanStepUpOn : 1;                            // 0x00AC (0x0004) [0x00020000]
	unsigned long                                      bNetTemporary : 1;                           // 0x00AC (0x0004) [0x00040000]
	unsigned long                                      bOnlyRelevantToOwner : 1;                    // 0x00AC (0x0004) [0x00080000]
	unsigned long                                      bNetDirty : 1;                               // 0x00AC (0x0004) [0x00100000]
	unsigned long                                      bAlwaysRelevant : 1;                         // 0x00AC (0x0004) [0x00200000]
	unsigned long                                      bReplicateInstigator : 1;                    // 0x00AC (0x0004) [0x00400000]
	unsigned long                                      bReplicateMovement : 1;                      // 0x00AC (0x0004) [0x00800000]
	unsigned long                                      bDisablePhysicsReplication : 1;              // 0x00AC (0x0004) [0x01000000]
	unsigned long                                      bSkipActorPropertyReplication : 1;           // 0x00AC (0x0004) [0x02000000]
	unsigned long                                      bUpdateSimulatedPosition : 1;                // 0x00AC (0x0004) [0x04000000]
	unsigned long                                      bTearOff : 1;                                // 0x00AC (0x0004) [0x08000000]
	unsigned long                                      bOnlyDirtyReplication : 1;                   // 0x00AC (0x0004) [0x10000000]
	unsigned long                                      bAllowFluidSurfaceInteraction : 1;           // 0x00AC (0x0004) [0x20000000]
	unsigned long                                      bDemoRecording : 1;                          // 0x00AC (0x0004) [0x40000000]
	unsigned long                                      bDemoOwner : 1;                              // 0x00AC (0x0004) [0x80000000]
	unsigned long                                      bForceDemoRelevant : 1;                      // 0x00B0 (0x0004) [0x00000001]
	unsigned long                                      bNetInitialRotation : 1;                     // 0x00B0 (0x0004) [0x00000002]
	unsigned long                                      bReplicateRigidBodyLocation : 1;             // 0x00B0 (0x0004) [0x00000004]
	unsigned long                                      bKillDuringLevelTransition : 1;              // 0x00B0 (0x0004) [0x00000008]
	unsigned long                                      bExchangedRoles : 1;                         // 0x00B0 (0x0004) [0x00000010]
	unsigned long                                      bConsiderAllStaticMeshComponentsForStreaming : 1; // 0x00B0 (0x0004) [0x00000020]
	unsigned long                                      bDebug : 1;                                  // 0x00B0 (0x0004) [0x00000040]
	unsigned long                                      bPostRenderIfNotVisible : 1;                 // 0x00B0 (0x0004) [0x00000080]
	unsigned long                                      bForceNetUpdate : 1;                         // 0x00B0 (0x0004) [0x00000100]
	unsigned long                                      bPendingNetUpdate : 1;                       // 0x00B0 (0x0004) [0x00000200]
	unsigned long                                      bHardAttach : 1;                             // 0x00B0 (0x0004) [0x00000400]
	unsigned long                                      bIgnoreBaseRotation : 1;                     // 0x00B0 (0x0004) [0x00000800]
	unsigned long                                      bShadowParented : 1;                         // 0x00B0 (0x0004) [0x00001000]
	unsigned long                                      bUseBaseRotationAndLocation : 1;             // 0x00B0 (0x0004) [0x00002000]
	unsigned long                                      bCanBeAdheredTo : 1;                         // 0x00B0 (0x0004) [0x00004000]
	unsigned long                                      bCanBeFrictionedTo : 1;                      // 0x00B0 (0x0004) [0x00008000]
	unsigned long                                      bHurtEntry : 1;                              // 0x00B0 (0x0004) [0x00010000]
	unsigned long                                      bGameRelevant : 1;                           // 0x00B0 (0x0004) [0x00020000]
	unsigned long                                      bMovable : 1;                                // 0x00B0 (0x0004) [0x00040000]
	unsigned long                                      bDestroyInPainVolume : 1;                    // 0x00B0 (0x0004) [0x00080000]
	unsigned long                                      bCanBeDamaged : 1;                           // 0x00B0 (0x0004) [0x00100000]
	unsigned long                                      bShouldBaseAtStartup : 1;                    // 0x00B0 (0x0004) [0x00200000]
	unsigned long                                      bPendingDelete : 1;                          // 0x00B0 (0x0004) [0x00400000]
	unsigned long                                      bCanTeleport : 1;                            // 0x00B0 (0x0004) [0x00800000]
	unsigned long                                      bAlwaysTick : 1;                             // 0x00B0 (0x0004) [0x01000000]
	unsigned long                                      bBlocksNavigation : 1;                       // 0x00B0 (0x0004) [0x02000000]
	unsigned long                                      BlockRigidBody : 1;                          // 0x00B0 (0x0004) [0x04000000]
	unsigned long                                      bCollideWhenPlacing : 1;                     // 0x00B0 (0x0004) [0x08000000]
	unsigned long                                      bCollideActors : 1;                          // 0x00B0 (0x0004) [0x10000000]
	unsigned long                                      bCollideWorld : 1;                           // 0x00B0 (0x0004) [0x20000000]
	unsigned long                                      bCollideComplex : 1;                         // 0x00B0 (0x0004) [0x40000000]
	unsigned long                                      bBlockActors : 1;                            // 0x00B0 (0x0004) [0x80000000]
	unsigned long                                      bProjTarget : 1;                             // 0x00B4 (0x0004) [0x00000001]
	unsigned long                                      bBlocksTeleport : 1;                         // 0x00B4 (0x0004) [0x00000002]
	unsigned long                                      bIgnorePawnNonZeroExtent : 1;                // 0x00B4 (0x0004) [0x00000004]
	unsigned long                                      bNoEncroachCheck : 1;                        // 0x00B4 (0x0004) [0x00000008]
	unsigned long                                      bPhysRigidBodyOutOfWorldCheck : 1;           // 0x00B4 (0x0004) [0x00000010]
	unsigned long                                      bComponentOutsideWorld : 1;                  // 0x00B4 (0x0004) [0x00000020]
	unsigned long                                      bBounce : 1;                                 // 0x00B4 (0x0004) [0x00000040]
	unsigned long                                      bJustTeleported : 1;                         // 0x00B4 (0x0004) [0x00000080]
	unsigned long                                      bNetInitial : 1;                             // 0x00B4 (0x0004) [0x00000100]
	unsigned long                                      bNetOwner : 1;                               // 0x00B4 (0x0004) [0x00000200]
	unsigned long                                      bHiddenEd : 1;                               // 0x00B4 (0x0004) [0x00000400]
	unsigned long                                      bHiddenEdGroup : 1;                          // 0x00B4 (0x0004) [0x00000800]
	unsigned long                                      bHiddenEdCustom : 1;                         // 0x00B4 (0x0004) [0x00001000]
	unsigned long                                      bEdShouldSnap : 1;                           // 0x00B4 (0x0004) [0x00002000]
	unsigned long                                      bTempEditor : 1;                             // 0x00B4 (0x0004) [0x00004000]
	unsigned long                                      bPathColliding : 1;                          // 0x00B4 (0x0004) [0x00008000]
	unsigned long                                      bPathTemp : 1;                               // 0x00B4 (0x0004) [0x00010000]
	unsigned long                                      bScriptInitialized : 1;                      // 0x00B4 (0x0004) [0x00020000]
	unsigned long                                      bLockLocation : 1;                           // 0x00B4 (0x0004) [0x00040000]
	unsigned long                                      bForceAllowKismetModification : 1;           // 0x00B4 (0x0004) [0x00080000]
	int                                                NetTag;                                      // 0x00B8 (0x0004)
	float                                              NetUpdateTime;                               // 0x00BC (0x0004)
	float                                              NetUpdateFrequency;                          // 0x00C0 (0x0004)
	float                                              NetPriority;                                 // 0x00C4 (0x0004)
	float                                              LastNetUpdateTime;                           // 0x00C8 (0x0004)
	class APawn*                                       Instigator;                                  // 0x00CC (0x0004)
	class AWorldInfo*                                  WorldInfo;                                   // 0x00D0 (0x0004)
	float                                              LifeSpan;                                    // 0x00D4 (0x0004)
	float                                              CreationTime;                                // 0x00D8 (0x0004)
	float                                              LastRenderTime;                              // 0x00DC (0x0004)
	struct FName                                       Tag;                                         // 0x00E0 (0x0008)
	struct FName                                       InitialState;                                // 0x00E8 (0x0008)
	struct FName                                       Group;                                       // 0x00F0 (0x0008)
	TArray< class AActor* >                            Touching;                                    // 0x00F8 (0x000C)
	TArray< class AActor* >                            Children;                                    // 0x0104 (0x000C)
	float                                              LatentFloat;                                 // 0x0110 (0x0004)
	void*                                              LatentSeqNode;                               // 0x0114 (0x0004)
	void*                                              PhysicsVolume;                               // 0x0118 (0x0004)
	struct FVector                                     Velocity;                                    // 0x011C (0x000C)
	struct FVector                                     Acceleration;                                // 0x0128 (0x000C)
	struct FVector                                     AngularVelocity;                             // 0x0134 (0x000C)
	class USkeletalMeshComponent*                      BaseSkelComponent;                           // 0x0140 (0x0004)
	struct FName                                       BaseBoneName;                                // 0x0144 (0x0008)
	TArray< class AActor* >                            Attached;                                    // 0x014C (0x000C)
	struct FVector                                     RelativeLocation;                            // 0x0158 (0x000C)
	struct FRotator                                    RelativeRotation;                            // 0x0164 (0x000C)
	class UPrimitiveComponent*                         CollisionComponent;                          // 0x0170 (0x0004)
	int                                                OverlapTag;                                  // 0x0174 (0x0004)
	struct FRotator                                    RotationRate;                                // 0x0178 (0x000C)
	struct FRotator                                    DesiredRotation;                             // 0x0184 (0x000C)
	class AActor*                                      PendingTouch;                                // 0x0190 (0x0004)
	class UClass*                                      MessageClass;                                // 0x0194 (0x0004)
	TArray< class UClass* >                            SupportedEvents;                             // 0x0198 (0x000C)
	TArray< class USequenceEvent* >                    GeneratedEvents;                             // 0x01A4 (0x000C)
	TArray< void* >                                    LatentActions;                               // 0x01B0 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Actor" );

		return ClassPointer;
	};

public:
	void GoToStateChecked ( struct FName NewState/*CPF_OptionalParm*/, struct FName Label/*CPF_OptionalParm*/, unsigned long bForceEvents/*CPF_OptionalParm*/, unsigned long bKeepStack/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGoToStateChecked = NULL;

		if ( !pfnGoToStateChecked )
			pfnGoToStateChecked = UObject::FindObject< UFunction >( "Function Engine.Actor.GoToStateChecked" );

		AActor_execGoToStateChecked_Parms GoToStateChecked_Parms;
		memcpy( &GoToStateChecked_Parms.NewState, &NewState, 0x8 );
		memcpy( &GoToStateChecked_Parms.Label, &Label, 0x8 );
		GoToStateChecked_Parms.bForceEvents = bForceEvents;
		GoToStateChecked_Parms.bKeepStack = bKeepStack;

		this->ProcessEvent( pfnGoToStateChecked, &GoToStateChecked_Parms, NULL );
	};

	void eventPostDemoRewind ()
	{
		static UFunction* pfnPostDemoRewind = NULL;

		if ( !pfnPostDemoRewind )
			pfnPostDemoRewind = UObject::FindObject< UFunction >( "Function Engine.Actor.PostDemoRewind" );

		AActor_eventPostDemoRewind_Parms PostDemoRewind_Parms;

		this->ProcessEvent( pfnPostDemoRewind, &PostDemoRewind_Parms, NULL );
	};

	void eventAnimTreeUpdated ( class USkeletalMeshComponent* SkelMesh )
	{
		static UFunction* pfnAnimTreeUpdated = NULL;

		if ( !pfnAnimTreeUpdated )
			pfnAnimTreeUpdated = UObject::FindObject< UFunction >( "Function Engine.Actor.AnimTreeUpdated" );

		AActor_eventAnimTreeUpdated_Parms AnimTreeUpdated_Parms;
		AnimTreeUpdated_Parms.SkelMesh = SkelMesh;

		this->ProcessEvent( pfnAnimTreeUpdated, &AnimTreeUpdated_Parms, NULL );
	};

	bool SupportsKismetModification ( class USequenceOp* AskingOp, struct FString* Reason )
	{
		static UFunction* pfnSupportsKismetModification = NULL;

		if ( !pfnSupportsKismetModification )
			pfnSupportsKismetModification = UObject::FindObject< UFunction >( "Function Engine.Actor.SupportsKismetModification" );

		AActor_execSupportsKismetModification_Parms SupportsKismetModification_Parms;
		SupportsKismetModification_Parms.AskingOp = AskingOp;

		pfnSupportsKismetModification->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSupportsKismetModification, &SupportsKismetModification_Parms, NULL );
		pfnSupportsKismetModification->FunctionFlags |= 0x400;

		if ( Reason )
			memcpy( Reason, &SupportsKismetModification_Parms.Reason, 0xC ); // CPF_OutParm

		return SupportsKismetModification_Parms.ReturnValue;
	};

	void eventPlayParticleEffect ( void* AnimNotifyData )
	{
		static UFunction* pfnPlayParticleEffect = NULL;

		if ( !pfnPlayParticleEffect )
			pfnPlayParticleEffect = UObject::FindObject< UFunction >( "Function Engine.Actor.PlayParticleEffect" );

		AActor_eventPlayParticleEffect_Parms PlayParticleEffect_Parms;
		PlayParticleEffect_Parms.AnimNotifyData = AnimNotifyData;

		this->ProcessEvent( pfnPlayParticleEffect, &PlayParticleEffect_Parms, NULL );
	};

	void OnForceMaterialMipsResident ( void* Action )
	{
		static UFunction* pfnOnForceMaterialMipsResident = NULL;

		if ( !pfnOnForceMaterialMipsResident )
			pfnOnForceMaterialMipsResident = UObject::FindObject< UFunction >( "Function Engine.Actor.OnForceMaterialMipsResident" );

		AActor_execOnForceMaterialMipsResident_Parms OnForceMaterialMipsResident_Parms;
		OnForceMaterialMipsResident_Parms.Action = Action;

		this->ProcessEvent( pfnOnForceMaterialMipsResident, &OnForceMaterialMipsResident_Parms, NULL );
	};

	void GetAimAdhesionExtent ( float* Width, float* Height, struct FVector* Center )
	{
		static UFunction* pfnGetAimAdhesionExtent = NULL;

		if ( !pfnGetAimAdhesionExtent )
			pfnGetAimAdhesionExtent = UObject::FindObject< UFunction >( "Function Engine.Actor.GetAimAdhesionExtent" );

		AActor_execGetAimAdhesionExtent_Parms GetAimAdhesionExtent_Parms;

		this->ProcessEvent( pfnGetAimAdhesionExtent, &GetAimAdhesionExtent_Parms, NULL );

		if ( Width )
			*Width = GetAimAdhesionExtent_Parms.Width; // CPF_OutParm
		if ( Height )
			*Height = GetAimAdhesionExtent_Parms.Height; // CPF_OutParm
		if ( Center )
			memcpy( Center, &GetAimAdhesionExtent_Parms.Center, 0xC ); // CPF_OutParm
	};

	void GetAimFrictionExtent ( float* Width, float* Height, struct FVector* Center )
	{
		static UFunction* pfnGetAimFrictionExtent = NULL;

		if ( !pfnGetAimFrictionExtent )
			pfnGetAimFrictionExtent = UObject::FindObject< UFunction >( "Function Engine.Actor.GetAimFrictionExtent" );

		AActor_execGetAimFrictionExtent_Parms GetAimFrictionExtent_Parms;

		this->ProcessEvent( pfnGetAimFrictionExtent, &GetAimFrictionExtent_Parms, NULL );

		if ( Width )
			*Width = GetAimFrictionExtent_Parms.Width; // CPF_OutParm
		if ( Height )
			*Height = GetAimFrictionExtent_Parms.Height; // CPF_OutParm
		if ( Center )
			memcpy( Center, &GetAimFrictionExtent_Parms.Center, 0xC ); // CPF_OutParm
	};

	bool IsInPersistentLevel ()
	{
		static UFunction* pfnIsInPersistentLevel = NULL;

		if ( !pfnIsInPersistentLevel )
			pfnIsInPersistentLevel = UObject::FindObject< UFunction >( "Function Engine.Actor.IsInPersistentLevel" );

		AActor_execIsInPersistentLevel_Parms IsInPersistentLevel_Parms;

		pfnIsInPersistentLevel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsInPersistentLevel, &IsInPersistentLevel_Parms, NULL );
		pfnIsInPersistentLevel->FunctionFlags |= 0x400;

		return IsInPersistentLevel_Parms.ReturnValue;
	};

	void eventOnRigidBodySpringOverextension ( void* BodyInstance )
	{
		static UFunction* pfnOnRigidBodySpringOverextension = NULL;

		if ( !pfnOnRigidBodySpringOverextension )
			pfnOnRigidBodySpringOverextension = UObject::FindObject< UFunction >( "Function Engine.Actor.OnRigidBodySpringOverextension" );

		AActor_eventOnRigidBodySpringOverextension_Parms OnRigidBodySpringOverextension_Parms;
		OnRigidBodySpringOverextension_Parms.BodyInstance = BodyInstance;

		this->ProcessEvent( pfnOnRigidBodySpringOverextension, &OnRigidBodySpringOverextension_Parms, NULL );
	};

	struct FGuid GetPackageGuid ( struct FName PackageName )
	{
		static UFunction* pfnGetPackageGuid = NULL;

		if ( !pfnGetPackageGuid )
			pfnGetPackageGuid = UObject::FindObject< UFunction >( "Function Engine.Actor.GetPackageGuid" );

		AActor_execGetPackageGuid_Parms GetPackageGuid_Parms;
		memcpy( &GetPackageGuid_Parms.PackageName, &PackageName, 0x8 );

		pfnGetPackageGuid->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPackageGuid, &GetPackageGuid_Parms, NULL );
		pfnGetPackageGuid->FunctionFlags |= 0x400;

		return GetPackageGuid_Parms.ReturnValue;
	};

	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
	{
		static UFunction* pfnPostInitAnimTree = NULL;

		if ( !pfnPostInitAnimTree )
			pfnPostInitAnimTree = UObject::FindObject< UFunction >( "Function Engine.Actor.PostInitAnimTree" );

		AActor_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
		PostInitAnimTree_Parms.SkelComp = SkelComp;

		this->ProcessEvent( pfnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
	};

	void eventRootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta )
	{
		static UFunction* pfnRootMotionExtracted = NULL;

		if ( !pfnRootMotionExtracted )
			pfnRootMotionExtracted = UObject::FindObject< UFunction >( "Function Engine.Actor.RootMotionExtracted" );

		AActor_eventRootMotionExtracted_Parms RootMotionExtracted_Parms;
		RootMotionExtracted_Parms.SkelComp = SkelComp;

		this->ProcessEvent( pfnRootMotionExtracted, &RootMotionExtracted_Parms, NULL );

		if ( ExtractedRootMotionDelta )
			memcpy( ExtractedRootMotionDelta, &RootMotionExtracted_Parms.ExtractedRootMotionDelta, 0x28 ); // CPF_OutParm
	};

	void eventRootMotionModeChanged ( class USkeletalMeshComponent* SkelComp )
	{
		static UFunction* pfnRootMotionModeChanged = NULL;

		if ( !pfnRootMotionModeChanged )
			pfnRootMotionModeChanged = UObject::FindObject< UFunction >( "Function Engine.Actor.RootMotionModeChanged" );

		AActor_eventRootMotionModeChanged_Parms RootMotionModeChanged_Parms;
		RootMotionModeChanged_Parms.SkelComp = SkelComp;

		this->ProcessEvent( pfnRootMotionModeChanged, &RootMotionModeChanged_Parms, NULL );
	};

	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
	{
		static UFunction* pfnPostRenderFor = NULL;

		if ( !pfnPostRenderFor )
			pfnPostRenderFor = UObject::FindObject< UFunction >( "Function Engine.Actor.PostRenderFor" );

		AActor_eventPostRenderFor_Parms PostRenderFor_Parms;
		PostRenderFor_Parms.PC = PC;
		PostRenderFor_Parms.Canvas = Canvas;
		memcpy( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
		memcpy( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

		this->ProcessEvent( pfnPostRenderFor, &PostRenderFor_Parms, NULL );
	};

	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
	{
		static UFunction* pfnNativePostRenderFor = NULL;

		if ( !pfnNativePostRenderFor )
			pfnNativePostRenderFor = UObject::FindObject< UFunction >( "Function Engine.Actor.NativePostRenderFor" );

		AActor_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
		NativePostRenderFor_Parms.PC = PC;
		NativePostRenderFor_Parms.Canvas = Canvas;
		memcpy( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
		memcpy( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

		pfnNativePostRenderFor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );
		pfnNativePostRenderFor->FunctionFlags |= 0x400;
	};

	void SetHUDLocation ( struct FVector NewHUDLocation )
	{
		static UFunction* pfnSetHUDLocation = NULL;

		if ( !pfnSetHUDLocation )
			pfnSetHUDLocation = UObject::FindObject< UFunction >( "Function Engine.Actor.SetHUDLocation" );

		AActor_execSetHUDLocation_Parms SetHUDLocation_Parms;
		memcpy( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

		pfnSetHUDLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetHUDLocation, &SetHUDLocation_Parms, NULL );
		pfnSetHUDLocation->FunctionFlags |= 0x400;
	};

	void eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex )
	{
		static UFunction* pfnOnRanOver = NULL;

		if ( !pfnOnRanOver )
			pfnOnRanOver = UObject::FindObject< UFunction >( "Function Engine.Actor.OnRanOver" );

		AActor_eventOnRanOver_Parms OnRanOver_Parms;
		OnRanOver_Parms.Vehicle = Vehicle;
		OnRanOver_Parms.RunOverComponent = RunOverComponent;
		OnRanOver_Parms.WheelIndex = WheelIndex;

		this->ProcessEvent( pfnOnRanOver, &OnRanOver_Parms, NULL );
	};

	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
	{
		static UFunction* pfnRigidBodyCollision = NULL;

		if ( !pfnRigidBodyCollision )
			pfnRigidBodyCollision = UObject::FindObject< UFunction >( "Function Engine.Actor.RigidBodyCollision" );

		AActor_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
		RigidBodyCollision_Parms.HitComponent = HitComponent;
		RigidBodyCollision_Parms.OtherComponent = OtherComponent;
		RigidBodyCollision_Parms.ContactIndex = ContactIndex;

		this->ProcessEvent( pfnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

		if ( RigidCollisionData )
			memcpy( RigidCollisionData, &RigidBodyCollision_Parms.RigidCollisionData, 0x24 ); // CPF_OutParm
	};

	void eventInterpolationChanged ( void* InterpAction )
	{
		static UFunction* pfnInterpolationChanged = NULL;

		if ( !pfnInterpolationChanged )
			pfnInterpolationChanged = UObject::FindObject< UFunction >( "Function Engine.Actor.InterpolationChanged" );

		AActor_eventInterpolationChanged_Parms InterpolationChanged_Parms;
		InterpolationChanged_Parms.InterpAction = InterpAction;

		this->ProcessEvent( pfnInterpolationChanged, &InterpolationChanged_Parms, NULL );
	};

	void eventInterpolationFinished ( void* InterpAction )
	{
		static UFunction* pfnInterpolationFinished = NULL;

		if ( !pfnInterpolationFinished )
			pfnInterpolationFinished = UObject::FindObject< UFunction >( "Function Engine.Actor.InterpolationFinished" );

		AActor_eventInterpolationFinished_Parms InterpolationFinished_Parms;
		InterpolationFinished_Parms.InterpAction = InterpAction;

		this->ProcessEvent( pfnInterpolationFinished, &InterpolationFinished_Parms, NULL );
	};

	void eventInterpolationStarted ( void* InterpAction )
	{
		static UFunction* pfnInterpolationStarted = NULL;

		if ( !pfnInterpolationStarted )
			pfnInterpolationStarted = UObject::FindObject< UFunction >( "Function Engine.Actor.InterpolationStarted" );

		AActor_eventInterpolationStarted_Parms InterpolationStarted_Parms;
		InterpolationStarted_Parms.InterpAction = InterpAction;

		this->ProcessEvent( pfnInterpolationStarted, &InterpolationStarted_Parms, NULL );
	};

	void PickedUpBy ( class APawn* P )
	{
		static UFunction* pfnPickedUpBy = NULL;

		if ( !pfnPickedUpBy )
			pfnPickedUpBy = UObject::FindObject< UFunction >( "Function Engine.Actor.PickedUpBy" );

		AActor_execPickedUpBy_Parms PickedUpBy_Parms;
		PickedUpBy_Parms.P = P;

		this->ProcessEvent( pfnPickedUpBy, &PickedUpBy_Parms, NULL );
	};

	void eventSpawnedByKismet ()
	{
		static UFunction* pfnSpawnedByKismet = NULL;

		if ( !pfnSpawnedByKismet )
			pfnSpawnedByKismet = UObject::FindObject< UFunction >( "Function Engine.Actor.SpawnedByKismet" );

		AActor_eventSpawnedByKismet_Parms SpawnedByKismet_Parms;

		this->ProcessEvent( pfnSpawnedByKismet, &SpawnedByKismet_Parms, NULL );
	};

	struct FVector GetTargetLocation ( class AActor* RequestedBy/*CPF_OptionalParm*/, unsigned long bRequestAlternateLoc/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetTargetLocation = NULL;

		if ( !pfnGetTargetLocation )
			pfnGetTargetLocation = UObject::FindObject< UFunction >( "Function Engine.Actor.GetTargetLocation" );

		AActor_execGetTargetLocation_Parms GetTargetLocation_Parms;
		GetTargetLocation_Parms.RequestedBy = RequestedBy;
		GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

		pfnGetTargetLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTargetLocation, &GetTargetLocation_Parms, NULL );
		pfnGetTargetLocation->FunctionFlags |= 0x400;

		return GetTargetLocation_Parms.ReturnValue;
	};

	void FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation )
	{
		static UFunction* pfnFindGoodEndView = NULL;

		if ( !pfnFindGoodEndView )
			pfnFindGoodEndView = UObject::FindObject< UFunction >( "Function Engine.Actor.FindGoodEndView" );

		AActor_execFindGoodEndView_Parms FindGoodEndView_Parms;
		FindGoodEndView_Parms.PC = PC;

		this->ProcessEvent( pfnFindGoodEndView, &FindGoodEndView_Parms, NULL );

		if ( GoodRotation )
			memcpy( GoodRotation, &FindGoodEndView_Parms.GoodRotation, 0xC ); // CPF_OutParm
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function Engine.Actor.NotifyLocalPlayerTeamReceived" );

		AActor_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	struct FString GetLocationStringFor ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnGetLocationStringFor = NULL;

		if ( !pfnGetLocationStringFor )
			pfnGetLocationStringFor = UObject::FindObject< UFunction >( "Function Engine.Actor.GetLocationStringFor" );

		AActor_execGetLocationStringFor_Parms GetLocationStringFor_Parms;
		GetLocationStringFor_Parms.PRI = PRI;

		this->ProcessEvent( pfnGetLocationStringFor, &GetLocationStringFor_Parms, NULL );

		return GetLocationStringFor_Parms.ReturnValue;
	};

	unsigned char eventScriptGetTeamNum ()
	{
		static UFunction* pfnScriptGetTeamNum = NULL;

		if ( !pfnScriptGetTeamNum )
			pfnScriptGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.Actor.ScriptGetTeamNum" );

		AActor_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

		this->ProcessEvent( pfnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

		return ScriptGetTeamNum_Parms.ReturnValue;
	};

	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.Actor.GetTeamNum" );

		AActor_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	void PawnBaseDied ()
	{
		static UFunction* pfnPawnBaseDied = NULL;

		if ( !pfnPawnBaseDied )
			pfnPawnBaseDied = UObject::FindObject< UFunction >( "Function Engine.Actor.PawnBaseDied" );

		AActor_execPawnBaseDied_Parms PawnBaseDied_Parms;

		this->ProcessEvent( pfnPawnBaseDied, &PawnBaseDied_Parms, NULL );
	};

	bool IsPlayerOwned ()
	{
		static UFunction* pfnIsPlayerOwned = NULL;

		if ( !pfnIsPlayerOwned )
			pfnIsPlayerOwned = UObject::FindObject< UFunction >( "Function Engine.Actor.IsPlayerOwned" );

		AActor_execIsPlayerOwned_Parms IsPlayerOwned_Parms;

		pfnIsPlayerOwned->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayerOwned, &IsPlayerOwned_Parms, NULL );
		pfnIsPlayerOwned->FunctionFlags |= 0x400;

		return IsPlayerOwned_Parms.ReturnValue;
	};

	void eventGetActorEyesViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetActorEyesViewPoint = NULL;

		if ( !pfnGetActorEyesViewPoint )
			pfnGetActorEyesViewPoint = UObject::FindObject< UFunction >( "Function Engine.Actor.GetActorEyesViewPoint" );

		AActor_eventGetActorEyesViewPoint_Parms GetActorEyesViewPoint_Parms;

		this->ProcessEvent( pfnGetActorEyesViewPoint, &GetActorEyesViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetActorEyesViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetActorEyesViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	bool IsStationary ()
	{
		static UFunction* pfnIsStationary = NULL;

		if ( !pfnIsStationary )
			pfnIsStationary = UObject::FindObject< UFunction >( "Function Engine.Actor.IsStationary" );

		AActor_execIsStationary_Parms IsStationary_Parms;

		this->ProcessEvent( pfnIsStationary, &IsStationary_Parms, NULL );

		return IsStationary_Parms.ReturnValue;
	};

	void* eventGetActorFaceFXAsset ()
	{
		static UFunction* pfnGetActorFaceFXAsset = NULL;

		if ( !pfnGetActorFaceFXAsset )
			pfnGetActorFaceFXAsset = UObject::FindObject< UFunction >( "Function Engine.Actor.GetActorFaceFXAsset" );

		AActor_eventGetActorFaceFXAsset_Parms GetActorFaceFXAsset_Parms;

		this->ProcessEvent( pfnGetActorFaceFXAsset, &GetActorFaceFXAsset_Parms, NULL );

		return GetActorFaceFXAsset_Parms.ReturnValue;
	};

	bool CanActorPlayFaceFXAnim ()
	{
		static UFunction* pfnCanActorPlayFaceFXAnim = NULL;

		if ( !pfnCanActorPlayFaceFXAnim )
			pfnCanActorPlayFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.Actor.CanActorPlayFaceFXAnim" );

		AActor_execCanActorPlayFaceFXAnim_Parms CanActorPlayFaceFXAnim_Parms;

		this->ProcessEvent( pfnCanActorPlayFaceFXAnim, &CanActorPlayFaceFXAnim_Parms, NULL );

		return CanActorPlayFaceFXAnim_Parms.ReturnValue;
	};

	bool IsActorPlayingFaceFXAnim ()
	{
		static UFunction* pfnIsActorPlayingFaceFXAnim = NULL;

		if ( !pfnIsActorPlayingFaceFXAnim )
			pfnIsActorPlayingFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.Actor.IsActorPlayingFaceFXAnim" );

		AActor_execIsActorPlayingFaceFXAnim_Parms IsActorPlayingFaceFXAnim_Parms;

		this->ProcessEvent( pfnIsActorPlayingFaceFXAnim, &IsActorPlayingFaceFXAnim_Parms, NULL );

		return IsActorPlayingFaceFXAnim_Parms.ReturnValue;
	};

	void eventSetSkelControlScale ( struct FName SkelControlName, float Scale )
	{
		static UFunction* pfnSetSkelControlScale = NULL;

		if ( !pfnSetSkelControlScale )
			pfnSetSkelControlScale = UObject::FindObject< UFunction >( "Function Engine.Actor.SetSkelControlScale" );

		AActor_eventSetSkelControlScale_Parms SetSkelControlScale_Parms;
		memcpy( &SetSkelControlScale_Parms.SkelControlName, &SkelControlName, 0x8 );
		SetSkelControlScale_Parms.Scale = Scale;

		this->ProcessEvent( pfnSetSkelControlScale, &SetSkelControlScale_Parms, NULL );
	};

	void eventSetMorphWeight ( struct FName MorphNodeName, float MorphWeight )
	{
		static UFunction* pfnSetMorphWeight = NULL;

		if ( !pfnSetMorphWeight )
			pfnSetMorphWeight = UObject::FindObject< UFunction >( "Function Engine.Actor.SetMorphWeight" );

		AActor_eventSetMorphWeight_Parms SetMorphWeight_Parms;
		memcpy( &SetMorphWeight_Parms.MorphNodeName, &MorphNodeName, 0x8 );
		SetMorphWeight_Parms.MorphWeight = MorphWeight;

		this->ProcessEvent( pfnSetMorphWeight, &SetMorphWeight_Parms, NULL );
	};

	void eventStopActorFaceFXAnim ()
	{
		static UFunction* pfnStopActorFaceFXAnim = NULL;

		if ( !pfnStopActorFaceFXAnim )
			pfnStopActorFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.Actor.StopActorFaceFXAnim" );

		AActor_eventStopActorFaceFXAnim_Parms StopActorFaceFXAnim_Parms;

		this->ProcessEvent( pfnStopActorFaceFXAnim, &StopActorFaceFXAnim_Parms, NULL );
	};

	bool eventPlayActorFaceFXAnim ( void* AnimSet, struct FString GroupName, struct FString SeqName, void* SoundCueToPlay )
	{
		static UFunction* pfnPlayActorFaceFXAnim = NULL;

		if ( !pfnPlayActorFaceFXAnim )
			pfnPlayActorFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.Actor.PlayActorFaceFXAnim" );

		AActor_eventPlayActorFaceFXAnim_Parms PlayActorFaceFXAnim_Parms;
		PlayActorFaceFXAnim_Parms.AnimSet = AnimSet;
		memcpy( &PlayActorFaceFXAnim_Parms.GroupName, &GroupName, 0xC );
		memcpy( &PlayActorFaceFXAnim_Parms.SeqName, &SeqName, 0xC );
		PlayActorFaceFXAnim_Parms.SoundCueToPlay = SoundCueToPlay;

		this->ProcessEvent( pfnPlayActorFaceFXAnim, &PlayActorFaceFXAnim_Parms, NULL );

		return PlayActorFaceFXAnim_Parms.ReturnValue;
	};

	void eventFinishAnimControl ()
	{
		static UFunction* pfnFinishAnimControl = NULL;

		if ( !pfnFinishAnimControl )
			pfnFinishAnimControl = UObject::FindObject< UFunction >( "Function Engine.Actor.FinishAnimControl" );

		AActor_eventFinishAnimControl_Parms FinishAnimControl_Parms;

		this->ProcessEvent( pfnFinishAnimControl, &FinishAnimControl_Parms, NULL );
	};

	void eventSetAnimPosition ( struct FName SlotName, int ChannelIndex, struct FName InAnimSeqName, float InPosition, unsigned long bFireNotifies, unsigned long bLooping )
	{
		static UFunction* pfnSetAnimPosition = NULL;

		if ( !pfnSetAnimPosition )
			pfnSetAnimPosition = UObject::FindObject< UFunction >( "Function Engine.Actor.SetAnimPosition" );

		AActor_eventSetAnimPosition_Parms SetAnimPosition_Parms;
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
			pfnBeginAnimControl = UObject::FindObject< UFunction >( "Function Engine.Actor.BeginAnimControl" );

		AActor_eventBeginAnimControl_Parms BeginAnimControl_Parms;
		BeginAnimControl_Parms.InAnimSets = InAnimSets;

		this->ProcessEvent( pfnBeginAnimControl, &BeginAnimControl_Parms, NULL );
	};

	void eventOnAnimPlay ( void* SeqNode )
	{
		static UFunction* pfnOnAnimPlay = NULL;

		if ( !pfnOnAnimPlay )
			pfnOnAnimPlay = UObject::FindObject< UFunction >( "Function Engine.Actor.OnAnimPlay" );

		AActor_eventOnAnimPlay_Parms OnAnimPlay_Parms;
		OnAnimPlay_Parms.SeqNode = SeqNode;

		this->ProcessEvent( pfnOnAnimPlay, &OnAnimPlay_Parms, NULL );
	};

	void eventOnAnimEnd ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnOnAnimEnd = NULL;

		if ( !pfnOnAnimEnd )
			pfnOnAnimEnd = UObject::FindObject< UFunction >( "Function Engine.Actor.OnAnimEnd" );

		AActor_eventOnAnimEnd_Parms OnAnimEnd_Parms;
		OnAnimEnd_Parms.SeqNode = SeqNode;
		OnAnimEnd_Parms.PlayedTime = PlayedTime;
		OnAnimEnd_Parms.ExcessTime = ExcessTime;

		this->ProcessEvent( pfnOnAnimEnd, &OnAnimEnd_Parms, NULL );
	};

	void OnMakeNoise ( void* Action )
	{
		static UFunction* pfnOnMakeNoise = NULL;

		if ( !pfnOnMakeNoise )
			pfnOnMakeNoise = UObject::FindObject< UFunction >( "Function Engine.Actor.OnMakeNoise" );

		AActor_execOnMakeNoise_Parms OnMakeNoise_Parms;
		OnMakeNoise_Parms.Action = Action;

		this->ProcessEvent( pfnOnMakeNoise, &OnMakeNoise_Parms, NULL );
	};

	void DoKismetAttachment ( class AActor* Attachment, void* Action )
	{
		static UFunction* pfnDoKismetAttachment = NULL;

		if ( !pfnDoKismetAttachment )
			pfnDoKismetAttachment = UObject::FindObject< UFunction >( "Function Engine.Actor.DoKismetAttachment" );

		AActor_execDoKismetAttachment_Parms DoKismetAttachment_Parms;
		DoKismetAttachment_Parms.Attachment = Attachment;
		DoKismetAttachment_Parms.Action = Action;

		this->ProcessEvent( pfnDoKismetAttachment, &DoKismetAttachment_Parms, NULL );
	};

	void OnAttachToActor ( void* Action )
	{
		static UFunction* pfnOnAttachToActor = NULL;

		if ( !pfnOnAttachToActor )
			pfnOnAttachToActor = UObject::FindObject< UFunction >( "Function Engine.Actor.OnAttachToActor" );

		AActor_execOnAttachToActor_Parms OnAttachToActor_Parms;
		OnAttachToActor_Parms.Action = Action;

		this->ProcessEvent( pfnOnAttachToActor, &OnAttachToActor_Parms, NULL );
	};

	void OnToggleHidden ( void* Action )
	{
		static UFunction* pfnOnToggleHidden = NULL;

		if ( !pfnOnToggleHidden )
			pfnOnToggleHidden = UObject::FindObject< UFunction >( "Function Engine.Actor.OnToggleHidden" );

		AActor_execOnToggleHidden_Parms OnToggleHidden_Parms;
		OnToggleHidden_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggleHidden, &OnToggleHidden_Parms, NULL );
	};

	void OnChangeCollision ( void* Action )
	{
		static UFunction* pfnOnChangeCollision = NULL;

		if ( !pfnOnChangeCollision )
			pfnOnChangeCollision = UObject::FindObject< UFunction >( "Function Engine.Actor.OnChangeCollision" );

		AActor_execOnChangeCollision_Parms OnChangeCollision_Parms;
		OnChangeCollision_Parms.Action = Action;

		this->ProcessEvent( pfnOnChangeCollision, &OnChangeCollision_Parms, NULL );
	};

	void OnSetPhysics ( void* Action )
	{
		static UFunction* pfnOnSetPhysics = NULL;

		if ( !pfnOnSetPhysics )
			pfnOnSetPhysics = UObject::FindObject< UFunction >( "Function Engine.Actor.OnSetPhysics" );

		AActor_execOnSetPhysics_Parms OnSetPhysics_Parms;
		OnSetPhysics_Parms.Action = Action;

		this->ProcessEvent( pfnOnSetPhysics, &OnSetPhysics_Parms, NULL );
	};

	void OnSetBlockRigidBody ( void* Action )
	{
		static UFunction* pfnOnSetBlockRigidBody = NULL;

		if ( !pfnOnSetBlockRigidBody )
			pfnOnSetBlockRigidBody = UObject::FindObject< UFunction >( "Function Engine.Actor.OnSetBlockRigidBody" );

		AActor_execOnSetBlockRigidBody_Parms OnSetBlockRigidBody_Parms;
		OnSetBlockRigidBody_Parms.Action = Action;

		this->ProcessEvent( pfnOnSetBlockRigidBody, &OnSetBlockRigidBody_Parms, NULL );
	};

	void OnTeleport ( void* Action )
	{
		static UFunction* pfnOnTeleport = NULL;

		if ( !pfnOnTeleport )
			pfnOnTeleport = UObject::FindObject< UFunction >( "Function Engine.Actor.OnTeleport" );

		AActor_execOnTeleport_Parms OnTeleport_Parms;
		OnTeleport_Parms.Action = Action;

		this->ProcessEvent( pfnOnTeleport, &OnTeleport_Parms, NULL );
	};

	void OnHealDamage ( void* Action )
	{
		static UFunction* pfnOnHealDamage = NULL;

		if ( !pfnOnHealDamage )
			pfnOnHealDamage = UObject::FindObject< UFunction >( "Function Engine.Actor.OnHealDamage" );

		AActor_execOnHealDamage_Parms OnHealDamage_Parms;
		OnHealDamage_Parms.Action = Action;

		this->ProcessEvent( pfnOnHealDamage, &OnHealDamage_Parms, NULL );
	};

	void PrestreamTextures ( float Seconds, unsigned long bEnableStreaming )
	{
		static UFunction* pfnPrestreamTextures = NULL;

		if ( !pfnPrestreamTextures )
			pfnPrestreamTextures = UObject::FindObject< UFunction >( "Function Engine.Actor.PrestreamTextures" );

		AActor_execPrestreamTextures_Parms PrestreamTextures_Parms;
		PrestreamTextures_Parms.Seconds = Seconds;
		PrestreamTextures_Parms.bEnableStreaming = bEnableStreaming;

		pfnPrestreamTextures->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPrestreamTextures, &PrestreamTextures_Parms, NULL );
		pfnPrestreamTextures->FunctionFlags |= 0x400;
	};

	void OnCauseDamage ( void* Action )
	{
		static UFunction* pfnOnCauseDamage = NULL;

		if ( !pfnOnCauseDamage )
			pfnOnCauseDamage = UObject::FindObject< UFunction >( "Function Engine.Actor.OnCauseDamage" );

		AActor_execOnCauseDamage_Parms OnCauseDamage_Parms;
		OnCauseDamage_Parms.Action = Action;

		this->ProcessEvent( pfnOnCauseDamage, &OnCauseDamage_Parms, NULL );
	};

	void eventShutDown ()
	{
		static UFunction* pfnShutDown = NULL;

		if ( !pfnShutDown )
			pfnShutDown = UObject::FindObject< UFunction >( "Function Engine.Actor.ShutDown" );

		AActor_eventShutDown_Parms ShutDown_Parms;

		this->ProcessEvent( pfnShutDown, &ShutDown_Parms, NULL );
	};

	void SetNetUpdateTime ( float NewUpdateTime )
	{
		static UFunction* pfnSetNetUpdateTime = NULL;

		if ( !pfnSetNetUpdateTime )
			pfnSetNetUpdateTime = UObject::FindObject< UFunction >( "Function Engine.Actor.SetNetUpdateTime" );

		AActor_execSetNetUpdateTime_Parms SetNetUpdateTime_Parms;
		SetNetUpdateTime_Parms.NewUpdateTime = NewUpdateTime;

		pfnSetNetUpdateTime->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetNetUpdateTime, &SetNetUpdateTime_Parms, NULL );
		pfnSetNetUpdateTime->FunctionFlags |= 0x400;
	};

	void eventForceNetRelevant ()
	{
		static UFunction* pfnForceNetRelevant = NULL;

		if ( !pfnForceNetRelevant )
			pfnForceNetRelevant = UObject::FindObject< UFunction >( "Function Engine.Actor.ForceNetRelevant" );

		AActor_eventForceNetRelevant_Parms ForceNetRelevant_Parms;

		this->ProcessEvent( pfnForceNetRelevant, &ForceNetRelevant_Parms, NULL );
	};

	void OnDestroy ( void* Action )
	{
		static UFunction* pfnOnDestroy = NULL;

		if ( !pfnOnDestroy )
			pfnOnDestroy = UObject::FindObject< UFunction >( "Function Engine.Actor.OnDestroy" );

		AActor_execOnDestroy_Parms OnDestroy_Parms;
		OnDestroy_Parms.Action = Action;

		this->ProcessEvent( pfnOnDestroy, &OnDestroy_Parms, NULL );
	};

	void ClearLatentAction ( class UClass* actionClass, unsigned long bAborted/*CPF_OptionalParm*/, void* exceptionAction/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClearLatentAction = NULL;

		if ( !pfnClearLatentAction )
			pfnClearLatentAction = UObject::FindObject< UFunction >( "Function Engine.Actor.ClearLatentAction" );

		AActor_execClearLatentAction_Parms ClearLatentAction_Parms;
		ClearLatentAction_Parms.actionClass = actionClass;
		ClearLatentAction_Parms.bAborted = bAborted;
		ClearLatentAction_Parms.exceptionAction = exceptionAction;

		this->ProcessEvent( pfnClearLatentAction, &ClearLatentAction_Parms, NULL );
	};

	bool FindEventsOfClass ( class UClass* EventClass, unsigned long bIncludeDisabled/*CPF_OptionalParm*/, TArray< class USequenceEvent* >* out_EventList )
	{
		static UFunction* pfnFindEventsOfClass = NULL;

		if ( !pfnFindEventsOfClass )
			pfnFindEventsOfClass = UObject::FindObject< UFunction >( "Function Engine.Actor.FindEventsOfClass" );

		AActor_execFindEventsOfClass_Parms FindEventsOfClass_Parms;
		FindEventsOfClass_Parms.EventClass = EventClass;
		FindEventsOfClass_Parms.bIncludeDisabled = bIncludeDisabled;

		this->ProcessEvent( pfnFindEventsOfClass, &FindEventsOfClass_Parms, NULL );

		if ( out_EventList )
			*out_EventList = FindEventsOfClass_Parms.out_EventList; // CPF_OutParm

		return FindEventsOfClass_Parms.ReturnValue;
	};

	bool ActivateEventClass ( class UClass* InClass, class AActor* InInstigator, unsigned long bTest/*CPF_OptionalParm*/, TArray< class USequenceEvent* >* EventList, TArray< int >* ActivateIndices, TArray< class USequenceEvent* >* ActivatedEvents )
	{
		static UFunction* pfnActivateEventClass = NULL;

		if ( !pfnActivateEventClass )
			pfnActivateEventClass = UObject::FindObject< UFunction >( "Function Engine.Actor.ActivateEventClass" );

		AActor_execActivateEventClass_Parms ActivateEventClass_Parms;
		ActivateEventClass_Parms.InClass = InClass;
		ActivateEventClass_Parms.InInstigator = InInstigator;
		ActivateEventClass_Parms.bTest = bTest;

		this->ProcessEvent( pfnActivateEventClass, &ActivateEventClass_Parms, NULL );

		if ( EventList )
			*EventList = ActivateEventClass_Parms.EventList; // CPF_OutParm
		if ( ActivateIndices )
			*ActivateIndices = ActivateEventClass_Parms.ActivateIndices; // CPF_OutParm
		if ( ActivatedEvents )
			*ActivatedEvents = ActivateEventClass_Parms.ActivatedEvents; // CPF_OutParm

		return ActivateEventClass_Parms.ReturnValue;
	};

	bool TriggerEventClass ( class UClass* InEventClass, class AActor* InInstigator, int ActivateIndex/*CPF_OptionalParm*/, unsigned long bTest/*CPF_OptionalParm*/, TArray< class USequenceEvent* >* ActivatedEvents )
	{
		static UFunction* pfnTriggerEventClass = NULL;

		if ( !pfnTriggerEventClass )
			pfnTriggerEventClass = UObject::FindObject< UFunction >( "Function Engine.Actor.TriggerEventClass" );

		AActor_execTriggerEventClass_Parms TriggerEventClass_Parms;
		TriggerEventClass_Parms.InEventClass = InEventClass;
		TriggerEventClass_Parms.InInstigator = InInstigator;
		TriggerEventClass_Parms.ActivateIndex = ActivateIndex;
		TriggerEventClass_Parms.bTest = bTest;

		this->ProcessEvent( pfnTriggerEventClass, &TriggerEventClass_Parms, NULL );

		if ( ActivatedEvents )
			*ActivatedEvents = TriggerEventClass_Parms.ActivatedEvents; // CPF_OutParm

		return TriggerEventClass_Parms.ReturnValue;
	};

	float TimeSince ( float Time )
	{
		static UFunction* pfnTimeSince = NULL;

		if ( !pfnTimeSince )
			pfnTimeSince = UObject::FindObject< UFunction >( "Function Engine.Actor.TimeSince" );

		AActor_execTimeSince_Parms TimeSince_Parms;
		TimeSince_Parms.Time = Time;

		this->ProcessEvent( pfnTimeSince, &TimeSince_Parms, NULL );

		return TimeSince_Parms.ReturnValue;
	};

	bool EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float CullDistance/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnEffectIsRelevant = NULL;

		if ( !pfnEffectIsRelevant )
			pfnEffectIsRelevant = UObject::FindObject< UFunction >( "Function Engine.Actor.EffectIsRelevant" );

		AActor_execEffectIsRelevant_Parms EffectIsRelevant_Parms;
		memcpy( &EffectIsRelevant_Parms.SpawnLocation, &SpawnLocation, 0xC );
		EffectIsRelevant_Parms.bForceDedicated = bForceDedicated;
		EffectIsRelevant_Parms.CullDistance = CullDistance;

		this->ProcessEvent( pfnEffectIsRelevant, &EffectIsRelevant_Parms, NULL );

		return EffectIsRelevant_Parms.ReturnValue;
	};

	bool CheckMaxEffectDistance ( class APlayerController* P, struct FVector SpawnLocation, float CullDistance/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCheckMaxEffectDistance = NULL;

		if ( !pfnCheckMaxEffectDistance )
			pfnCheckMaxEffectDistance = UObject::FindObject< UFunction >( "Function Engine.Actor.CheckMaxEffectDistance" );

		AActor_execCheckMaxEffectDistance_Parms CheckMaxEffectDistance_Parms;
		CheckMaxEffectDistance_Parms.P = P;
		memcpy( &CheckMaxEffectDistance_Parms.SpawnLocation, &SpawnLocation, 0xC );
		CheckMaxEffectDistance_Parms.CullDistance = CullDistance;

		this->ProcessEvent( pfnCheckMaxEffectDistance, &CheckMaxEffectDistance_Parms, NULL );

		return CheckMaxEffectDistance_Parms.ReturnValue;
	};

	void ApplyFluidSurfaceImpact ( void* Fluid, struct FVector HitLocation )
	{
		static UFunction* pfnApplyFluidSurfaceImpact = NULL;

		if ( !pfnApplyFluidSurfaceImpact )
			pfnApplyFluidSurfaceImpact = UObject::FindObject< UFunction >( "Function Engine.Actor.ApplyFluidSurfaceImpact" );

		AActor_execApplyFluidSurfaceImpact_Parms ApplyFluidSurfaceImpact_Parms;
		ApplyFluidSurfaceImpact_Parms.Fluid = Fluid;
		memcpy( &ApplyFluidSurfaceImpact_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnApplyFluidSurfaceImpact, &ApplyFluidSurfaceImpact_Parms, NULL );
	};

	bool CanSplash ()
	{
		static UFunction* pfnCanSplash = NULL;

		if ( !pfnCanSplash )
			pfnCanSplash = UObject::FindObject< UFunction >( "Function Engine.Actor.CanSplash" );

		AActor_execCanSplash_Parms CanSplash_Parms;

		this->ProcessEvent( pfnCanSplash, &CanSplash_Parms, NULL );

		return CanSplash_Parms.ReturnValue;
	};

	void PlayTeleportEffect ( unsigned long bOut, unsigned long bSound )
	{
		static UFunction* pfnPlayTeleportEffect = NULL;

		if ( !pfnPlayTeleportEffect )
			pfnPlayTeleportEffect = UObject::FindObject< UFunction >( "Function Engine.Actor.PlayTeleportEffect" );

		AActor_execPlayTeleportEffect_Parms PlayTeleportEffect_Parms;
		PlayTeleportEffect_Parms.bOut = bOut;
		PlayTeleportEffect_Parms.bSound = bSound;

		this->ProcessEvent( pfnPlayTeleportEffect, &PlayTeleportEffect_Parms, NULL );
	};

	bool IsInPain ()
	{
		static UFunction* pfnIsInPain = NULL;

		if ( !pfnIsInPain )
			pfnIsInPain = UObject::FindObject< UFunction >( "Function Engine.Actor.IsInPain" );

		AActor_execIsInPain_Parms IsInPain_Parms;

		this->ProcessEvent( pfnIsInPain, &IsInPain_Parms, NULL );

		return IsInPain_Parms.ReturnValue;
	};

	bool IsInVolume ( class AVolume* aVolume )
	{
		static UFunction* pfnIsInVolume = NULL;

		if ( !pfnIsInVolume )
			pfnIsInVolume = UObject::FindObject< UFunction >( "Function Engine.Actor.IsInVolume" );

		AActor_execIsInVolume_Parms IsInVolume_Parms;
		IsInVolume_Parms.aVolume = aVolume;

		this->ProcessEvent( pfnIsInVolume, &IsInVolume_Parms, NULL );

		return IsInVolume_Parms.ReturnValue;
	};

	void eventReset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.Actor.Reset" );

		AActor_eventReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void* eventGetFaceFXAudioComponent ()
	{
		static UFunction* pfnGetFaceFXAudioComponent = NULL;

		if ( !pfnGetFaceFXAudioComponent )
			pfnGetFaceFXAudioComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.GetFaceFXAudioComponent" );

		AActor_eventGetFaceFXAudioComponent_Parms GetFaceFXAudioComponent_Parms;

		this->ProcessEvent( pfnGetFaceFXAudioComponent, &GetFaceFXAudioComponent_Parms, NULL );

		return GetFaceFXAudioComponent_Parms.ReturnValue;
	};

	void eventModifyHearSoundComponent ( void* AC )
	{
		static UFunction* pfnModifyHearSoundComponent = NULL;

		if ( !pfnModifyHearSoundComponent )
			pfnModifyHearSoundComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.ModifyHearSoundComponent" );

		AActor_eventModifyHearSoundComponent_Parms ModifyHearSoundComponent_Parms;
		ModifyHearSoundComponent_Parms.AC = AC;

		this->ProcessEvent( pfnModifyHearSoundComponent, &ModifyHearSoundComponent_Parms, NULL );
	};

	struct FString GetPhysicsName ()
	{
		static UFunction* pfnGetPhysicsName = NULL;

		if ( !pfnGetPhysicsName )
			pfnGetPhysicsName = UObject::FindObject< UFunction >( "Function Engine.Actor.GetPhysicsName" );

		AActor_execGetPhysicsName_Parms GetPhysicsName_Parms;

		this->ProcessEvent( pfnGetPhysicsName, &GetPhysicsName_Parms, NULL );

		return GetPhysicsName_Parms.ReturnValue;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Actor.DisplayDebug" );

		AActor_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	struct FString GetDebugName ()
	{
		static UFunction* pfnGetDebugName = NULL;

		if ( !pfnGetDebugName )
			pfnGetDebugName = UObject::FindObject< UFunction >( "Function Engine.Actor.GetDebugName" );

		AActor_execGetDebugName_Parms GetDebugName_Parms;

		this->ProcessEvent( pfnGetDebugName, &GetDebugName_Parms, NULL );

		return GetDebugName_Parms.ReturnValue;
	};

	void SetGRI ( class AGameReplicationInfo* GRI )
	{
		static UFunction* pfnSetGRI = NULL;

		if ( !pfnSetGRI )
			pfnSetGRI = UObject::FindObject< UFunction >( "Function Engine.Actor.SetGRI" );

		AActor_execSetGRI_Parms SetGRI_Parms;
		SetGRI_Parms.GRI = GRI;

		this->ProcessEvent( pfnSetGRI, &SetGRI_Parms, NULL );
	};

	void MatchStarting ()
	{
		static UFunction* pfnMatchStarting = NULL;

		if ( !pfnMatchStarting )
			pfnMatchStarting = UObject::FindObject< UFunction >( "Function Engine.Actor.MatchStarting" );

		AActor_execMatchStarting_Parms MatchStarting_Parms;

		this->ProcessEvent( pfnMatchStarting, &MatchStarting_Parms, NULL );
	};

	struct FString GetLocalString ( int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetLocalString = NULL;

		if ( !pfnGetLocalString )
			pfnGetLocalString = UObject::FindObject< UFunction >( "Function Engine.Actor.GetLocalString" );

		AActor_execGetLocalString_Parms GetLocalString_Parms;
		GetLocalString_Parms.Switch = Switch;
		GetLocalString_Parms.RelatedPRI1 = RelatedPRI1;
		GetLocalString_Parms.RelatedPRI1 = RelatedPRI1;

		this->ProcessEvent( pfnGetLocalString, &GetLocalString_Parms, NULL );

		return GetLocalString_Parms.ReturnValue;
	};

	void ReplaceText ( struct FString Replace, struct FString With, struct FString* Text )
	{
		static UFunction* pfnReplaceText = NULL;

		if ( !pfnReplaceText )
			pfnReplaceText = UObject::FindObject< UFunction >( "Function Engine.Actor.ReplaceText" );

		AActor_execReplaceText_Parms ReplaceText_Parms;
		memcpy( &ReplaceText_Parms.Replace, &Replace, 0xC );
		memcpy( &ReplaceText_Parms.With, &With, 0xC );

		this->ProcessEvent( pfnReplaceText, &ReplaceText_Parms, NULL );

		if ( Text )
			memcpy( Text, &ReplaceText_Parms.Text, 0xC ); // CPF_OutParm
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.Actor.GetHumanReadableName" );

		AActor_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	struct FString GetItemName ( struct FString FullName )
	{
		static UFunction* pfnGetItemName = NULL;

		if ( !pfnGetItemName )
			pfnGetItemName = UObject::FindObject< UFunction >( "Function Engine.Actor.GetItemName" );

		AActor_execGetItemName_Parms GetItemName_Parms;
		memcpy( &GetItemName_Parms.FullName, &FullName, 0xC );

		this->ProcessEvent( pfnGetItemName, &GetItemName_Parms, NULL );

		return GetItemName_Parms.ReturnValue;
	};

	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
	{
		static UFunction* pfnCalcCamera = NULL;

		if ( !pfnCalcCamera )
			pfnCalcCamera = UObject::FindObject< UFunction >( "Function Engine.Actor.CalcCamera" );

		AActor_execCalcCamera_Parms CalcCamera_Parms;
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

	void eventEndViewTarget ( class APlayerController* PC )
	{
		static UFunction* pfnEndViewTarget = NULL;

		if ( !pfnEndViewTarget )
			pfnEndViewTarget = UObject::FindObject< UFunction >( "Function Engine.Actor.EndViewTarget" );

		AActor_eventEndViewTarget_Parms EndViewTarget_Parms;
		EndViewTarget_Parms.PC = PC;

		this->ProcessEvent( pfnEndViewTarget, &EndViewTarget_Parms, NULL );
	};

	void eventBecomeViewTarget ( class APlayerController* PC )
	{
		static UFunction* pfnBecomeViewTarget = NULL;

		if ( !pfnBecomeViewTarget )
			pfnBecomeViewTarget = UObject::FindObject< UFunction >( "Function Engine.Actor.BecomeViewTarget" );

		AActor_eventBecomeViewTarget_Parms BecomeViewTarget_Parms;
		BecomeViewTarget_Parms.PC = PC;

		this->ProcessEvent( pfnBecomeViewTarget, &BecomeViewTarget_Parms, NULL );
	};

	bool CheckForErrors ()
	{
		static UFunction* pfnCheckForErrors = NULL;

		if ( !pfnCheckForErrors )
			pfnCheckForErrors = UObject::FindObject< UFunction >( "Function Engine.Actor.CheckForErrors" );

		AActor_execCheckForErrors_Parms CheckForErrors_Parms;

		this->ProcessEvent( pfnCheckForErrors, &CheckForErrors_Parms, NULL );

		return CheckForErrors_Parms.ReturnValue;
	};

	void eventDebugFreezeGame ( class AActor* ActorToLookAt/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDebugFreezeGame = NULL;

		if ( !pfnDebugFreezeGame )
			pfnDebugFreezeGame = UObject::FindObject< UFunction >( "Function Engine.Actor.DebugFreezeGame" );

		AActor_eventDebugFreezeGame_Parms DebugFreezeGame_Parms;
		DebugFreezeGame_Parms.ActorToLookAt = ActorToLookAt;

		this->ProcessEvent( pfnDebugFreezeGame, &DebugFreezeGame_Parms, NULL );
	};

	float GetGravityZ ()
	{
		static UFunction* pfnGetGravityZ = NULL;

		if ( !pfnGetGravityZ )
			pfnGetGravityZ = UObject::FindObject< UFunction >( "Function Engine.Actor.GetGravityZ" );

		AActor_execGetGravityZ_Parms GetGravityZ_Parms;

		pfnGetGravityZ->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetGravityZ, &GetGravityZ_Parms, NULL );
		pfnGetGravityZ->FunctionFlags |= 0x400;

		return GetGravityZ_Parms.ReturnValue;
	};

	void CheckHitInfo ( class UPrimitiveComponent* FallBackComponent, struct FVector Dir, struct FTraceHitInfo* HitInfo, struct FVector* out_HitLocation )
	{
		static UFunction* pfnCheckHitInfo = NULL;

		if ( !pfnCheckHitInfo )
			pfnCheckHitInfo = UObject::FindObject< UFunction >( "Function Engine.Actor.CheckHitInfo" );

		AActor_execCheckHitInfo_Parms CheckHitInfo_Parms;
		CheckHitInfo_Parms.FallBackComponent = FallBackComponent;
		memcpy( &CheckHitInfo_Parms.Dir, &Dir, 0xC );

		this->ProcessEvent( pfnCheckHitInfo, &CheckHitInfo_Parms, NULL );

		if ( HitInfo )
			memcpy( HitInfo, &CheckHitInfo_Parms.HitInfo, 0x1C ); // CPF_OutParm
		if ( out_HitLocation )
			memcpy( out_HitLocation, &CheckHitInfo_Parms.out_HitLocation, 0xC ); // CPF_OutParm
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser )
	{
		static UFunction* pfnTakeRadiusDamage = NULL;

		if ( !pfnTakeRadiusDamage )
			pfnTakeRadiusDamage = UObject::FindObject< UFunction >( "Function Engine.Actor.TakeRadiusDamage" );

		AActor_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
		TakeRadiusDamage_Parms.InstigatedBy = InstigatedBy;
		TakeRadiusDamage_Parms.BaseDamage = BaseDamage;
		TakeRadiusDamage_Parms.DamageRadius = DamageRadius;
		TakeRadiusDamage_Parms.DamageType = DamageType;
		TakeRadiusDamage_Parms.Momentum = Momentum;
		memcpy( &TakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
		TakeRadiusDamage_Parms.bFullDamage = bFullDamage;
		TakeRadiusDamage_Parms.DamageCauser = DamageCauser;

		this->ProcessEvent( pfnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
	};

	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
	{
		static UFunction* pfnHealDamage = NULL;

		if ( !pfnHealDamage )
			pfnHealDamage = UObject::FindObject< UFunction >( "Function Engine.Actor.HealDamage" );

		AActor_execHealDamage_Parms HealDamage_Parms;
		HealDamage_Parms.Amount = Amount;
		HealDamage_Parms.Healer = Healer;
		HealDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnHealDamage, &HealDamage_Parms, NULL );

		return HealDamage_Parms.ReturnValue;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function Engine.Actor.TakeDamage" );

		AActor_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.DamageAmount = DamageAmount;
		TakeDamage_Parms.EventInstigator = EventInstigator;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	void KilledBy ( class APawn* EventInstigator )
	{
		static UFunction* pfnKilledBy = NULL;

		if ( !pfnKilledBy )
			pfnKilledBy = UObject::FindObject< UFunction >( "Function Engine.Actor.KilledBy" );

		AActor_execKilledBy_Parms KilledBy_Parms;
		KilledBy_Parms.EventInstigator = EventInstigator;

		this->ProcessEvent( pfnKilledBy, &KilledBy_Parms, NULL );
	};

	bool HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor/*CPF_OptionalParm*/, class AController* InstigatedByController/*CPF_OptionalParm*/, unsigned long bDoFullDamage/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHurtRadius = NULL;

		if ( !pfnHurtRadius )
			pfnHurtRadius = UObject::FindObject< UFunction >( "Function Engine.Actor.HurtRadius" );

		AActor_execHurtRadius_Parms HurtRadius_Parms;
		HurtRadius_Parms.BaseDamage = BaseDamage;
		HurtRadius_Parms.DamageRadius = DamageRadius;
		HurtRadius_Parms.DamageType = DamageType;
		HurtRadius_Parms.Momentum = Momentum;
		memcpy( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
		HurtRadius_Parms.IgnoredActor = IgnoredActor;
		HurtRadius_Parms.InstigatedByController = InstigatedByController;
		HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

		this->ProcessEvent( pfnHurtRadius, &HurtRadius_Parms, NULL );

		return HurtRadius_Parms.ReturnValue;
	};

	bool StopsProjectile ( class AProjectile* P )
	{
		static UFunction* pfnStopsProjectile = NULL;

		if ( !pfnStopsProjectile )
			pfnStopsProjectile = UObject::FindObject< UFunction >( "Function Engine.Actor.StopsProjectile" );

		AActor_execStopsProjectile_Parms StopsProjectile_Parms;
		StopsProjectile_Parms.P = P;

		this->ProcessEvent( pfnStopsProjectile, &StopsProjectile_Parms, NULL );

		return StopsProjectile_Parms.ReturnValue;
	};

	void eventNotifySkelControlBeyondLimit ( void* LookAt )
	{
		static UFunction* pfnNotifySkelControlBeyondLimit = NULL;

		if ( !pfnNotifySkelControlBeyondLimit )
			pfnNotifySkelControlBeyondLimit = UObject::FindObject< UFunction >( "Function Engine.Actor.NotifySkelControlBeyondLimit" );

		AActor_eventNotifySkelControlBeyondLimit_Parms NotifySkelControlBeyondLimit_Parms;
		NotifySkelControlBeyondLimit_Parms.LookAt = LookAt;

		this->ProcessEvent( pfnNotifySkelControlBeyondLimit, &NotifySkelControlBeyondLimit_Parms, NULL );
	};

	void eventConstraintBrokenNotify ( class AActor* ConOwner, void* ConSetup, void* ConInstance )
	{
		static UFunction* pfnConstraintBrokenNotify = NULL;

		if ( !pfnConstraintBrokenNotify )
			pfnConstraintBrokenNotify = UObject::FindObject< UFunction >( "Function Engine.Actor.ConstraintBrokenNotify" );

		AActor_eventConstraintBrokenNotify_Parms ConstraintBrokenNotify_Parms;
		ConstraintBrokenNotify_Parms.ConOwner = ConOwner;
		ConstraintBrokenNotify_Parms.ConSetup = ConSetup;
		ConstraintBrokenNotify_Parms.ConInstance = ConInstance;

		this->ProcessEvent( pfnConstraintBrokenNotify, &ConstraintBrokenNotify_Parms, NULL );
	};

	void eventSetInitialState ()
	{
		static UFunction* pfnSetInitialState = NULL;

		if ( !pfnSetInitialState )
			pfnSetInitialState = UObject::FindObject< UFunction >( "Function Engine.Actor.SetInitialState" );

		AActor_eventSetInitialState_Parms SetInitialState_Parms;

		this->ProcessEvent( pfnSetInitialState, &SetInitialState_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Actor.PostBeginPlay" );

		AActor_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventBroadcastLocalizedTeamMessage ( int TeamIndex, class UClass* InMessageClass, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastLocalizedTeamMessage = NULL;

		if ( !pfnBroadcastLocalizedTeamMessage )
			pfnBroadcastLocalizedTeamMessage = UObject::FindObject< UFunction >( "Function Engine.Actor.BroadcastLocalizedTeamMessage" );

		AActor_eventBroadcastLocalizedTeamMessage_Parms BroadcastLocalizedTeamMessage_Parms;
		BroadcastLocalizedTeamMessage_Parms.TeamIndex = TeamIndex;
		BroadcastLocalizedTeamMessage_Parms.InMessageClass = InMessageClass;
		BroadcastLocalizedTeamMessage_Parms.Switch = Switch;
		BroadcastLocalizedTeamMessage_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedTeamMessage_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedTeamMessage_Parms.OptionalObject = OptionalObject;
		BroadcastLocalizedTeamMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnBroadcastLocalizedTeamMessage, &BroadcastLocalizedTeamMessage_Parms, NULL );
	};

	void eventBroadcastLocalizedMessage ( class UClass* InMessageClass, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastLocalizedMessage = NULL;

		if ( !pfnBroadcastLocalizedMessage )
			pfnBroadcastLocalizedMessage = UObject::FindObject< UFunction >( "Function Engine.Actor.BroadcastLocalizedMessage" );

		AActor_eventBroadcastLocalizedMessage_Parms BroadcastLocalizedMessage_Parms;
		BroadcastLocalizedMessage_Parms.InMessageClass = InMessageClass;
		BroadcastLocalizedMessage_Parms.Switch = Switch;
		BroadcastLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedMessage_Parms.OptionalObject = OptionalObject;
		BroadcastLocalizedMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnBroadcastLocalizedMessage, &BroadcastLocalizedMessage_Parms, NULL );
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Actor.PreBeginPlay" );

		AActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	bool FindActorsOfClass ( class UClass* ActorClass, TArray< class AActor* >* out_Actors )
	{
		static UFunction* pfnFindActorsOfClass = NULL;

		if ( !pfnFindActorsOfClass )
			pfnFindActorsOfClass = UObject::FindObject< UFunction >( "Function Engine.Actor.FindActorsOfClass" );

		AActor_execFindActorsOfClass_Parms FindActorsOfClass_Parms;
		FindActorsOfClass_Parms.ActorClass = ActorClass;

		this->ProcessEvent( pfnFindActorsOfClass, &FindActorsOfClass_Parms, NULL );

		if ( out_Actors )
			*out_Actors = FindActorsOfClass_Parms.out_Actors; // CPF_OutParm

		return FindActorsOfClass_Parms.ReturnValue;
	};

	void LocalPlayerControllers ( class UClass* BaseClass, class APlayerController** PC )
	{
		static UFunction* pfnLocalPlayerControllers = NULL;

		if ( !pfnLocalPlayerControllers )
			pfnLocalPlayerControllers = UObject::FindObject< UFunction >( "Function Engine.Actor.LocalPlayerControllers" );

		AActor_execLocalPlayerControllers_Parms LocalPlayerControllers_Parms;
		LocalPlayerControllers_Parms.BaseClass = BaseClass;

		pfnLocalPlayerControllers->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLocalPlayerControllers, &LocalPlayerControllers_Parms, NULL );
		pfnLocalPlayerControllers->FunctionFlags |= 0x400;

		if ( PC )
			*PC = LocalPlayerControllers_Parms.PC; // CPF_OutParm
	};

	void AllOwnedComponents ( class UClass* BaseClass, class UActorComponent** OutComponent )
	{
		static UFunction* pfnAllOwnedComponents = NULL;

		if ( !pfnAllOwnedComponents )
			pfnAllOwnedComponents = UObject::FindObject< UFunction >( "Function Engine.Actor.AllOwnedComponents" );

		AActor_execAllOwnedComponents_Parms AllOwnedComponents_Parms;
		AllOwnedComponents_Parms.BaseClass = BaseClass;

		pfnAllOwnedComponents->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllOwnedComponents, &AllOwnedComponents_Parms, NULL );
		pfnAllOwnedComponents->FunctionFlags |= 0x400;

		if ( OutComponent )
			*OutComponent = AllOwnedComponents_Parms.OutComponent; // CPF_OutParm
	};

	void ComponentList ( class UClass* BaseClass, class UActorComponent** out_Component )
	{
		static UFunction* pfnComponentList = NULL;

		if ( !pfnComponentList )
			pfnComponentList = UObject::FindObject< UFunction >( "Function Engine.Actor.ComponentList" );

		AActor_execComponentList_Parms ComponentList_Parms;
		ComponentList_Parms.BaseClass = BaseClass;

		pfnComponentList->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnComponentList, &ComponentList_Parms, NULL );
		pfnComponentList->FunctionFlags |= 0x400;

		if ( out_Component )
			*out_Component = ComponentList_Parms.out_Component; // CPF_OutParm
	};

	void OverlappingActors ( class UClass* BaseClass, float Radius, struct FVector Loc/*CPF_OptionalParm*/, unsigned long bIgnoreHidden/*CPF_OptionalParm*/, class AActor** out_Actor )
	{
		static UFunction* pfnOverlappingActors = NULL;

		if ( !pfnOverlappingActors )
			pfnOverlappingActors = UObject::FindObject< UFunction >( "Function Engine.Actor.OverlappingActors" );

		AActor_execOverlappingActors_Parms OverlappingActors_Parms;
		OverlappingActors_Parms.BaseClass = BaseClass;
		OverlappingActors_Parms.Radius = Radius;
		memcpy( &OverlappingActors_Parms.Loc, &Loc, 0xC );
		OverlappingActors_Parms.bIgnoreHidden = bIgnoreHidden;

		pfnOverlappingActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOverlappingActors, &OverlappingActors_Parms, NULL );
		pfnOverlappingActors->FunctionFlags |= 0x400;

		if ( out_Actor )
			*out_Actor = OverlappingActors_Parms.out_Actor; // CPF_OutParm
	};

	void CollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc/*CPF_OptionalParm*/, unsigned long bUseOverlapCheck/*CPF_OptionalParm*/, class AActor** Actor )
	{
		static UFunction* pfnCollidingActors = NULL;

		if ( !pfnCollidingActors )
			pfnCollidingActors = UObject::FindObject< UFunction >( "Function Engine.Actor.CollidingActors" );

		AActor_execCollidingActors_Parms CollidingActors_Parms;
		CollidingActors_Parms.BaseClass = BaseClass;
		CollidingActors_Parms.Radius = Radius;
		memcpy( &CollidingActors_Parms.Loc, &Loc, 0xC );
		CollidingActors_Parms.bUseOverlapCheck = bUseOverlapCheck;

		WORD NativeIndex = pfnCollidingActors->iNative;
		pfnCollidingActors->iNative = 0;

		pfnCollidingActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCollidingActors, &CollidingActors_Parms, NULL );
		pfnCollidingActors->FunctionFlags |= 0x400;

		pfnCollidingActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = CollidingActors_Parms.Actor; // CPF_OutParm
	};

	void VisibleCollidingActors ( class UClass* BaseClass, float Radius, struct FVector Loc/*CPF_OptionalParm*/, unsigned long bIgnoreHidden/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, unsigned long bTraceActors/*CPF_OptionalParm*/, class AActor** Actor )
	{
		static UFunction* pfnVisibleCollidingActors = NULL;

		if ( !pfnVisibleCollidingActors )
			pfnVisibleCollidingActors = UObject::FindObject< UFunction >( "Function Engine.Actor.VisibleCollidingActors" );

		AActor_execVisibleCollidingActors_Parms VisibleCollidingActors_Parms;
		VisibleCollidingActors_Parms.BaseClass = BaseClass;
		VisibleCollidingActors_Parms.Radius = Radius;
		memcpy( &VisibleCollidingActors_Parms.Loc, &Loc, 0xC );
		VisibleCollidingActors_Parms.bIgnoreHidden = bIgnoreHidden;
		memcpy( &VisibleCollidingActors_Parms.Extent, &Extent, 0xC );
		VisibleCollidingActors_Parms.bTraceActors = bTraceActors;

		WORD NativeIndex = pfnVisibleCollidingActors->iNative;
		pfnVisibleCollidingActors->iNative = 0;

		pfnVisibleCollidingActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnVisibleCollidingActors, &VisibleCollidingActors_Parms, NULL );
		pfnVisibleCollidingActors->FunctionFlags |= 0x400;

		pfnVisibleCollidingActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = VisibleCollidingActors_Parms.Actor; // CPF_OutParm
	};

	void VisibleActors ( class UClass* BaseClass, float Radius/*CPF_OptionalParm*/, struct FVector Loc/*CPF_OptionalParm*/, class AActor** Actor )
	{
		static UFunction* pfnVisibleActors = NULL;

		if ( !pfnVisibleActors )
			pfnVisibleActors = UObject::FindObject< UFunction >( "Function Engine.Actor.VisibleActors" );

		AActor_execVisibleActors_Parms VisibleActors_Parms;
		VisibleActors_Parms.BaseClass = BaseClass;
		VisibleActors_Parms.Radius = Radius;
		memcpy( &VisibleActors_Parms.Loc, &Loc, 0xC );

		WORD NativeIndex = pfnVisibleActors->iNative;
		pfnVisibleActors->iNative = 0;

		pfnVisibleActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnVisibleActors, &VisibleActors_Parms, NULL );
		pfnVisibleActors->FunctionFlags |= 0x400;

		pfnVisibleActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = VisibleActors_Parms.Actor; // CPF_OutParm
	};

	void TraceActors ( class UClass* BaseClass, struct FVector End, struct FVector Start/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, int ExtraTraceFlags/*CPF_OptionalParm*/, class AActor** Actor, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo )
	{
		static UFunction* pfnTraceActors = NULL;

		if ( !pfnTraceActors )
			pfnTraceActors = UObject::FindObject< UFunction >( "Function Engine.Actor.TraceActors" );

		AActor_execTraceActors_Parms TraceActors_Parms;
		TraceActors_Parms.BaseClass = BaseClass;
		memcpy( &TraceActors_Parms.End, &End, 0xC );
		memcpy( &TraceActors_Parms.Start, &Start, 0xC );
		memcpy( &TraceActors_Parms.Extent, &Extent, 0xC );
		TraceActors_Parms.ExtraTraceFlags = ExtraTraceFlags;

		WORD NativeIndex = pfnTraceActors->iNative;
		pfnTraceActors->iNative = 0;

		pfnTraceActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTraceActors, &TraceActors_Parms, NULL );
		pfnTraceActors->FunctionFlags |= 0x400;

		pfnTraceActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = TraceActors_Parms.Actor; // CPF_OutParm
		if ( HitLoc )
			memcpy( HitLoc, &TraceActors_Parms.HitLoc, 0xC ); // CPF_OutParm
		if ( HitNorm )
			memcpy( HitNorm, &TraceActors_Parms.HitNorm, 0xC ); // CPF_OutParm
		if ( HitInfo )
			memcpy( HitInfo, &TraceActors_Parms.HitInfo, 0x1C ); // CPF_OutParm
	};

	void TouchingActors ( class UClass* BaseClass, class AActor** Actor )
	{
		static UFunction* pfnTouchingActors = NULL;

		if ( !pfnTouchingActors )
			pfnTouchingActors = UObject::FindObject< UFunction >( "Function Engine.Actor.TouchingActors" );

		AActor_execTouchingActors_Parms TouchingActors_Parms;
		TouchingActors_Parms.BaseClass = BaseClass;

		WORD NativeIndex = pfnTouchingActors->iNative;
		pfnTouchingActors->iNative = 0;

		pfnTouchingActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTouchingActors, &TouchingActors_Parms, NULL );
		pfnTouchingActors->FunctionFlags |= 0x400;

		pfnTouchingActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = TouchingActors_Parms.Actor; // CPF_OutParm
	};

	void BasedActors ( class UClass* BaseClass, class AActor** Actor )
	{
		static UFunction* pfnBasedActors = NULL;

		if ( !pfnBasedActors )
			pfnBasedActors = UObject::FindObject< UFunction >( "Function Engine.Actor.BasedActors" );

		AActor_execBasedActors_Parms BasedActors_Parms;
		BasedActors_Parms.BaseClass = BaseClass;

		WORD NativeIndex = pfnBasedActors->iNative;
		pfnBasedActors->iNative = 0;

		pfnBasedActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBasedActors, &BasedActors_Parms, NULL );
		pfnBasedActors->FunctionFlags |= 0x400;

		pfnBasedActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = BasedActors_Parms.Actor; // CPF_OutParm
	};

	void ChildActors ( class UClass* BaseClass, class AActor** Actor )
	{
		static UFunction* pfnChildActors = NULL;

		if ( !pfnChildActors )
			pfnChildActors = UObject::FindObject< UFunction >( "Function Engine.Actor.ChildActors" );

		AActor_execChildActors_Parms ChildActors_Parms;
		ChildActors_Parms.BaseClass = BaseClass;

		WORD NativeIndex = pfnChildActors->iNative;
		pfnChildActors->iNative = 0;

		pfnChildActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnChildActors, &ChildActors_Parms, NULL );
		pfnChildActors->FunctionFlags |= 0x400;

		pfnChildActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = ChildActors_Parms.Actor; // CPF_OutParm
	};

	void DynamicActors ( class UClass* BaseClass, class AActor** Actor )
	{
		static UFunction* pfnDynamicActors = NULL;

		if ( !pfnDynamicActors )
			pfnDynamicActors = UObject::FindObject< UFunction >( "Function Engine.Actor.DynamicActors" );

		AActor_execDynamicActors_Parms DynamicActors_Parms;
		DynamicActors_Parms.BaseClass = BaseClass;

		WORD NativeIndex = pfnDynamicActors->iNative;
		pfnDynamicActors->iNative = 0;

		pfnDynamicActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDynamicActors, &DynamicActors_Parms, NULL );
		pfnDynamicActors->FunctionFlags |= 0x400;

		pfnDynamicActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = DynamicActors_Parms.Actor; // CPF_OutParm
	};

	void AllActors ( class UClass* BaseClass, class AActor** Actor )
	{
		static UFunction* pfnAllActors = NULL;

		if ( !pfnAllActors )
			pfnAllActors = UObject::FindObject< UFunction >( "Function Engine.Actor.AllActors" );

		AActor_execAllActors_Parms AllActors_Parms;
		AllActors_Parms.BaseClass = BaseClass;

		WORD NativeIndex = pfnAllActors->iNative;
		pfnAllActors->iNative = 0;

		pfnAllActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllActors, &AllActors_Parms, NULL );
		pfnAllActors->FunctionFlags |= 0x400;

		pfnAllActors->iNative = NativeIndex;

		if ( Actor )
			*Actor = AllActors_Parms.Actor; // CPF_OutParm
	};

	struct FString GetURLMap ()
	{
		static UFunction* pfnGetURLMap = NULL;

		if ( !pfnGetURLMap )
			pfnGetURLMap = UObject::FindObject< UFunction >( "Function Engine.Actor.GetURLMap" );

		AActor_execGetURLMap_Parms GetURLMap_Parms;

		WORD NativeIndex = pfnGetURLMap->iNative;
		pfnGetURLMap->iNative = 0;

		pfnGetURLMap->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetURLMap, &GetURLMap_Parms, NULL );
		pfnGetURLMap->FunctionFlags |= 0x400;

		pfnGetURLMap->iNative = NativeIndex;

		return GetURLMap_Parms.ReturnValue;
	};

	void PostTeleport ( void* OutTeleporter )
	{
		static UFunction* pfnPostTeleport = NULL;

		if ( !pfnPostTeleport )
			pfnPostTeleport = UObject::FindObject< UFunction >( "Function Engine.Actor.PostTeleport" );

		AActor_execPostTeleport_Parms PostTeleport_Parms;
		PostTeleport_Parms.OutTeleporter = OutTeleporter;

		this->ProcessEvent( pfnPostTeleport, &PostTeleport_Parms, NULL );
	};

	bool PreTeleport ( void* InTeleporter )
	{
		static UFunction* pfnPreTeleport = NULL;

		if ( !pfnPreTeleport )
			pfnPreTeleport = UObject::FindObject< UFunction >( "Function Engine.Actor.PreTeleport" );

		AActor_execPreTeleport_Parms PreTeleport_Parms;
		PreTeleport_Parms.InTeleporter = InTeleporter;

		this->ProcessEvent( pfnPreTeleport, &PreTeleport_Parms, NULL );

		return PreTeleport_Parms.ReturnValue;
	};

	struct FVector GetDestination ( class AController* C )
	{
		static UFunction* pfnGetDestination = NULL;

		if ( !pfnGetDestination )
			pfnGetDestination = UObject::FindObject< UFunction >( "Function Engine.Actor.GetDestination" );

		AActor_execGetDestination_Parms GetDestination_Parms;
		GetDestination_Parms.C = C;

		pfnGetDestination->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDestination, &GetDestination_Parms, NULL );
		pfnGetDestination->FunctionFlags |= 0x400;

		return GetDestination_Parms.ReturnValue;
	};

	bool SuggestTossVelocity ( struct FVector Destination, struct FVector Start, float TossSpeed, float BaseTossZ/*CPF_OptionalParm*/, float DesiredZPct/*CPF_OptionalParm*/, struct FVector CollisionSize/*CPF_OptionalParm*/, float TerminalVelocity/*CPF_OptionalParm*/, float OverrideGravityZ/*CPF_OptionalParm*/, struct FVector* TossVelocity )
	{
		static UFunction* pfnSuggestTossVelocity = NULL;

		if ( !pfnSuggestTossVelocity )
			pfnSuggestTossVelocity = UObject::FindObject< UFunction >( "Function Engine.Actor.SuggestTossVelocity" );

		AActor_execSuggestTossVelocity_Parms SuggestTossVelocity_Parms;
		memcpy( &SuggestTossVelocity_Parms.Destination, &Destination, 0xC );
		memcpy( &SuggestTossVelocity_Parms.Start, &Start, 0xC );
		SuggestTossVelocity_Parms.TossSpeed = TossSpeed;
		SuggestTossVelocity_Parms.BaseTossZ = BaseTossZ;
		SuggestTossVelocity_Parms.DesiredZPct = DesiredZPct;
		memcpy( &SuggestTossVelocity_Parms.CollisionSize, &CollisionSize, 0xC );
		SuggestTossVelocity_Parms.TerminalVelocity = TerminalVelocity;
		SuggestTossVelocity_Parms.OverrideGravityZ = OverrideGravityZ;

		pfnSuggestTossVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSuggestTossVelocity, &SuggestTossVelocity_Parms, NULL );
		pfnSuggestTossVelocity->FunctionFlags |= 0x400;

		if ( TossVelocity )
			memcpy( TossVelocity, &SuggestTossVelocity_Parms.TossVelocity, 0xC ); // CPF_OutParm

		return SuggestTossVelocity_Parms.ReturnValue;
	};

	bool PlayerCanSeeMe ()
	{
		static UFunction* pfnPlayerCanSeeMe = NULL;

		if ( !pfnPlayerCanSeeMe )
			pfnPlayerCanSeeMe = UObject::FindObject< UFunction >( "Function Engine.Actor.PlayerCanSeeMe" );

		AActor_execPlayerCanSeeMe_Parms PlayerCanSeeMe_Parms;

		WORD NativeIndex = pfnPlayerCanSeeMe->iNative;
		pfnPlayerCanSeeMe->iNative = 0;

		pfnPlayerCanSeeMe->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlayerCanSeeMe, &PlayerCanSeeMe_Parms, NULL );
		pfnPlayerCanSeeMe->FunctionFlags |= 0x400;

		pfnPlayerCanSeeMe->iNative = NativeIndex;

		return PlayerCanSeeMe_Parms.ReturnValue;
	};

	void MakeNoise ( float Loudness, struct FName NoiseType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMakeNoise = NULL;

		if ( !pfnMakeNoise )
			pfnMakeNoise = UObject::FindObject< UFunction >( "Function Engine.Actor.MakeNoise" );

		AActor_execMakeNoise_Parms MakeNoise_Parms;
		MakeNoise_Parms.Loudness = Loudness;
		memcpy( &MakeNoise_Parms.NoiseType, &NoiseType, 0x8 );

		WORD NativeIndex = pfnMakeNoise->iNative;
		pfnMakeNoise->iNative = 0;

		pfnMakeNoise->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMakeNoise, &MakeNoise_Parms, NULL );
		pfnMakeNoise->FunctionFlags |= 0x400;

		pfnMakeNoise->iNative = NativeIndex;
	};

	void PlaySound ( void* InSoundCue, unsigned long bNotReplicated/*CPF_OptionalParm*/, unsigned long bNoRepToOwner/*CPF_OptionalParm*/, unsigned long bStopWhenOwnerDestroyed/*CPF_OptionalParm*/, struct FVector SoundLocation/*CPF_OptionalParm*/, unsigned long bNoRepToRelevant/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlaySound = NULL;

		if ( !pfnPlaySound )
			pfnPlaySound = UObject::FindObject< UFunction >( "Function Engine.Actor.PlaySound" );

		AActor_execPlaySound_Parms PlaySound_Parms;
		PlaySound_Parms.InSoundCue = InSoundCue;
		PlaySound_Parms.bNotReplicated = bNotReplicated;
		PlaySound_Parms.bNoRepToOwner = bNoRepToOwner;
		PlaySound_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
		memcpy( &PlaySound_Parms.SoundLocation, &SoundLocation, 0xC );
		PlaySound_Parms.bNoRepToRelevant = bNoRepToRelevant;

		pfnPlaySound->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlaySound, &PlaySound_Parms, NULL );
		pfnPlaySound->FunctionFlags |= 0x400;
	};

	void* CreateAudioComponent ( void* InSoundCue, unsigned long bPlay/*CPF_OptionalParm*/, unsigned long bStopWhenOwnerDestroyed/*CPF_OptionalParm*/, unsigned long bUseLocation/*CPF_OptionalParm*/, struct FVector SourceLocation/*CPF_OptionalParm*/, unsigned long bAttachToSelf/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCreateAudioComponent = NULL;

		if ( !pfnCreateAudioComponent )
			pfnCreateAudioComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.CreateAudioComponent" );

		AActor_execCreateAudioComponent_Parms CreateAudioComponent_Parms;
		CreateAudioComponent_Parms.InSoundCue = InSoundCue;
		CreateAudioComponent_Parms.bPlay = bPlay;
		CreateAudioComponent_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
		CreateAudioComponent_Parms.bUseLocation = bUseLocation;
		memcpy( &CreateAudioComponent_Parms.SourceLocation, &SourceLocation, 0xC );
		CreateAudioComponent_Parms.bAttachToSelf = bAttachToSelf;

		pfnCreateAudioComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreateAudioComponent, &CreateAudioComponent_Parms, NULL );
		pfnCreateAudioComponent->FunctionFlags |= 0x400;

		return CreateAudioComponent_Parms.ReturnValue;
	};

	float GetRemainingTimeForTimer ( struct FName TimerFuncName/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetRemainingTimeForTimer = NULL;

		if ( !pfnGetRemainingTimeForTimer )
			pfnGetRemainingTimeForTimer = UObject::FindObject< UFunction >( "Function Engine.Actor.GetRemainingTimeForTimer" );

		AActor_execGetRemainingTimeForTimer_Parms GetRemainingTimeForTimer_Parms;
		memcpy( &GetRemainingTimeForTimer_Parms.TimerFuncName, &TimerFuncName, 0x8 );
		GetRemainingTimeForTimer_Parms.inObj = inObj;

		this->ProcessEvent( pfnGetRemainingTimeForTimer, &GetRemainingTimeForTimer_Parms, NULL );

		return GetRemainingTimeForTimer_Parms.ReturnValue;
	};

	float GetTimerRate ( struct FName TimerFuncName/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetTimerRate = NULL;

		if ( !pfnGetTimerRate )
			pfnGetTimerRate = UObject::FindObject< UFunction >( "Function Engine.Actor.GetTimerRate" );

		AActor_execGetTimerRate_Parms GetTimerRate_Parms;
		memcpy( &GetTimerRate_Parms.TimerFuncName, &TimerFuncName, 0x8 );
		GetTimerRate_Parms.inObj = inObj;

		pfnGetTimerRate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTimerRate, &GetTimerRate_Parms, NULL );
		pfnGetTimerRate->FunctionFlags |= 0x400;

		return GetTimerRate_Parms.ReturnValue;
	};

	float GetTimerCount ( struct FName inTimerFunc/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetTimerCount = NULL;

		if ( !pfnGetTimerCount )
			pfnGetTimerCount = UObject::FindObject< UFunction >( "Function Engine.Actor.GetTimerCount" );

		AActor_execGetTimerCount_Parms GetTimerCount_Parms;
		memcpy( &GetTimerCount_Parms.inTimerFunc, &inTimerFunc, 0x8 );
		GetTimerCount_Parms.inObj = inObj;

		pfnGetTimerCount->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTimerCount, &GetTimerCount_Parms, NULL );
		pfnGetTimerCount->FunctionFlags |= 0x400;

		return GetTimerCount_Parms.ReturnValue;
	};

	bool IsTimerActive ( struct FName inTimerFunc/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsTimerActive = NULL;

		if ( !pfnIsTimerActive )
			pfnIsTimerActive = UObject::FindObject< UFunction >( "Function Engine.Actor.IsTimerActive" );

		AActor_execIsTimerActive_Parms IsTimerActive_Parms;
		memcpy( &IsTimerActive_Parms.inTimerFunc, &inTimerFunc, 0x8 );
		IsTimerActive_Parms.inObj = inObj;

		pfnIsTimerActive->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsTimerActive, &IsTimerActive_Parms, NULL );
		pfnIsTimerActive->FunctionFlags |= 0x400;

		return IsTimerActive_Parms.ReturnValue;
	};

	void PauseTimer ( unsigned long bPause, struct FName inTimerFunc/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPauseTimer = NULL;

		if ( !pfnPauseTimer )
			pfnPauseTimer = UObject::FindObject< UFunction >( "Function Engine.Actor.PauseTimer" );

		AActor_execPauseTimer_Parms PauseTimer_Parms;
		PauseTimer_Parms.bPause = bPause;
		memcpy( &PauseTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
		PauseTimer_Parms.inObj = inObj;

		pfnPauseTimer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPauseTimer, &PauseTimer_Parms, NULL );
		pfnPauseTimer->FunctionFlags |= 0x400;
	};

	void ClearTimer ( struct FName inTimerFunc/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClearTimer = NULL;

		if ( !pfnClearTimer )
			pfnClearTimer = UObject::FindObject< UFunction >( "Function Engine.Actor.ClearTimer" );

		AActor_execClearTimer_Parms ClearTimer_Parms;
		memcpy( &ClearTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
		ClearTimer_Parms.inObj = inObj;

		pfnClearTimer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearTimer, &ClearTimer_Parms, NULL );
		pfnClearTimer->FunctionFlags |= 0x400;
	};

	void SetTimer ( float InRate, unsigned long inbLoop/*CPF_OptionalParm*/, struct FName inTimerFunc/*CPF_OptionalParm*/, class UObject* inObj/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetTimer = NULL;

		if ( !pfnSetTimer )
			pfnSetTimer = UObject::FindObject< UFunction >( "Function Engine.Actor.SetTimer" );

		AActor_execSetTimer_Parms SetTimer_Parms;
		SetTimer_Parms.InRate = InRate;
		SetTimer_Parms.inbLoop = inbLoop;
		memcpy( &SetTimer_Parms.inTimerFunc, &inTimerFunc, 0x8 );
		SetTimer_Parms.inObj = inObj;

		WORD NativeIndex = pfnSetTimer->iNative;
		pfnSetTimer->iNative = 0;

		pfnSetTimer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetTimer, &SetTimer_Parms, NULL );
		pfnSetTimer->FunctionFlags |= 0x400;

		pfnSetTimer->iNative = NativeIndex;
	};

	void eventTornOff ()
	{
		static UFunction* pfnTornOff = NULL;

		if ( !pfnTornOff )
			pfnTornOff = UObject::FindObject< UFunction >( "Function Engine.Actor.TornOff" );

		AActor_eventTornOff_Parms TornOff_Parms;

		this->ProcessEvent( pfnTornOff, &TornOff_Parms, NULL );
	};

	bool Destroy ()
	{
		static UFunction* pfnDestroy = NULL;

		if ( !pfnDestroy )
			pfnDestroy = UObject::FindObject< UFunction >( "Function Engine.Actor.Destroy" );

		AActor_execDestroy_Parms Destroy_Parms;

		WORD NativeIndex = pfnDestroy->iNative;
		pfnDestroy->iNative = 0;

		pfnDestroy->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDestroy, &Destroy_Parms, NULL );
		pfnDestroy->FunctionFlags |= 0x400;

		pfnDestroy->iNative = NativeIndex;

		return Destroy_Parms.ReturnValue;
	};

	class AActor* Spawn ( class UClass* SpawnClass, class AActor* SpawnOwner/*CPF_OptionalParm*/, struct FName SpawnTag/*CPF_OptionalParm*/, struct FVector SpawnLocation/*CPF_OptionalParm*/, struct FRotator SpawnRotation/*CPF_OptionalParm*/, class AActor* ActorTemplate/*CPF_OptionalParm*/, unsigned long bNoCollisionFail/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawn = NULL;

		if ( !pfnSpawn )
			pfnSpawn = UObject::FindObject< UFunction >( "Function Engine.Actor.Spawn" );

		AActor_execSpawn_Parms Spawn_Parms;
		Spawn_Parms.SpawnClass = SpawnClass;
		Spawn_Parms.SpawnOwner = SpawnOwner;
		memcpy( &Spawn_Parms.SpawnTag, &SpawnTag, 0x8 );
		memcpy( &Spawn_Parms.SpawnLocation, &SpawnLocation, 0xC );
		memcpy( &Spawn_Parms.SpawnRotation, &SpawnRotation, 0xC );
		Spawn_Parms.ActorTemplate = ActorTemplate;
		Spawn_Parms.bNoCollisionFail = bNoCollisionFail;

		pfnSpawn->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSpawn, &Spawn_Parms, NULL );
		pfnSpawn->FunctionFlags |= 0x400;

		return Spawn_Parms.ReturnValue;
	};

	void GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight )
	{
		static UFunction* pfnGetBoundingCylinder = NULL;

		if ( !pfnGetBoundingCylinder )
			pfnGetBoundingCylinder = UObject::FindObject< UFunction >( "Function Engine.Actor.GetBoundingCylinder" );

		AActor_execGetBoundingCylinder_Parms GetBoundingCylinder_Parms;

		pfnGetBoundingCylinder->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoundingCylinder, &GetBoundingCylinder_Parms, NULL );
		pfnGetBoundingCylinder->FunctionFlags |= 0x400;

		if ( CollisionRadius )
			*CollisionRadius = GetBoundingCylinder_Parms.CollisionRadius; // CPF_OutParm
		if ( CollisionHeight )
			*CollisionHeight = GetBoundingCylinder_Parms.CollisionHeight; // CPF_OutParm
	};

	void GetComponentsBoundingBox ( struct FBox* ActorBox )
	{
		static UFunction* pfnGetComponentsBoundingBox = NULL;

		if ( !pfnGetComponentsBoundingBox )
			pfnGetComponentsBoundingBox = UObject::FindObject< UFunction >( "Function Engine.Actor.GetComponentsBoundingBox" );

		AActor_execGetComponentsBoundingBox_Parms GetComponentsBoundingBox_Parms;

		pfnGetComponentsBoundingBox->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetComponentsBoundingBox, &GetComponentsBoundingBox_Parms, NULL );
		pfnGetComponentsBoundingBox->FunctionFlags |= 0x400;

		if ( ActorBox )
			memcpy( ActorBox, &GetComponentsBoundingBox_Parms.ActorBox, 0x1C ); // CPF_OutParm
	};

	bool IsOverlapping ( class AActor* A )
	{
		static UFunction* pfnIsOverlapping = NULL;

		if ( !pfnIsOverlapping )
			pfnIsOverlapping = UObject::FindObject< UFunction >( "Function Engine.Actor.IsOverlapping" );

		AActor_execIsOverlapping_Parms IsOverlapping_Parms;
		IsOverlapping_Parms.A = A;

		pfnIsOverlapping->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsOverlapping, &IsOverlapping_Parms, NULL );
		pfnIsOverlapping->FunctionFlags |= 0x400;

		return IsOverlapping_Parms.ReturnValue;
	};

	bool ContainsPoint ( struct FVector Spot )
	{
		static UFunction* pfnContainsPoint = NULL;

		if ( !pfnContainsPoint )
			pfnContainsPoint = UObject::FindObject< UFunction >( "Function Engine.Actor.ContainsPoint" );

		AActor_execContainsPoint_Parms ContainsPoint_Parms;
		memcpy( &ContainsPoint_Parms.Spot, &Spot, 0xC );

		pfnContainsPoint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnContainsPoint, &ContainsPoint_Parms, NULL );
		pfnContainsPoint->FunctionFlags |= 0x400;

		return ContainsPoint_Parms.ReturnValue;
	};

	bool FindSpot ( struct FVector BoxExtent, struct FVector* SpotLocation )
	{
		static UFunction* pfnFindSpot = NULL;

		if ( !pfnFindSpot )
			pfnFindSpot = UObject::FindObject< UFunction >( "Function Engine.Actor.FindSpot" );

		AActor_execFindSpot_Parms FindSpot_Parms;
		memcpy( &FindSpot_Parms.BoxExtent, &BoxExtent, 0xC );

		pfnFindSpot->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindSpot, &FindSpot_Parms, NULL );
		pfnFindSpot->FunctionFlags |= 0x400;

		if ( SpotLocation )
			memcpy( SpotLocation, &FindSpot_Parms.SpotLocation, 0xC ); // CPF_OutParm

		return FindSpot_Parms.ReturnValue;
	};

	bool TraceAllPhysicsAssetInteractions ( class USkeletalMeshComponent* SkelMeshComp, struct FVector EndTrace, struct FVector StartTrace, struct FVector Extent/*CPF_OptionalParm*/, TArray< struct FImpactInfo >* out_Hits )
	{
		static UFunction* pfnTraceAllPhysicsAssetInteractions = NULL;

		if ( !pfnTraceAllPhysicsAssetInteractions )
			pfnTraceAllPhysicsAssetInteractions = UObject::FindObject< UFunction >( "Function Engine.Actor.TraceAllPhysicsAssetInteractions" );

		AActor_execTraceAllPhysicsAssetInteractions_Parms TraceAllPhysicsAssetInteractions_Parms;
		TraceAllPhysicsAssetInteractions_Parms.SkelMeshComp = SkelMeshComp;
		memcpy( &TraceAllPhysicsAssetInteractions_Parms.EndTrace, &EndTrace, 0xC );
		memcpy( &TraceAllPhysicsAssetInteractions_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &TraceAllPhysicsAssetInteractions_Parms.Extent, &Extent, 0xC );

		pfnTraceAllPhysicsAssetInteractions->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTraceAllPhysicsAssetInteractions, &TraceAllPhysicsAssetInteractions_Parms, NULL );
		pfnTraceAllPhysicsAssetInteractions->FunctionFlags |= 0x400;

		if ( out_Hits )
			memcpy( out_Hits, &TraceAllPhysicsAssetInteractions_Parms.out_Hits, 0xC ); // CPF_OutParm

		return TraceAllPhysicsAssetInteractions_Parms.ReturnValue;
	};

	bool FastTrace ( struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, struct FVector BoxExtent/*CPF_OptionalParm*/, unsigned long bTraceBullet/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFastTrace = NULL;

		if ( !pfnFastTrace )
			pfnFastTrace = UObject::FindObject< UFunction >( "Function Engine.Actor.FastTrace" );

		AActor_execFastTrace_Parms FastTrace_Parms;
		memcpy( &FastTrace_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &FastTrace_Parms.TraceStart, &TraceStart, 0xC );
		memcpy( &FastTrace_Parms.BoxExtent, &BoxExtent, 0xC );
		FastTrace_Parms.bTraceBullet = bTraceBullet;

		WORD NativeIndex = pfnFastTrace->iNative;
		pfnFastTrace->iNative = 0;

		pfnFastTrace->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFastTrace, &FastTrace_Parms, NULL );
		pfnFastTrace->FunctionFlags |= 0x400;

		pfnFastTrace->iNative = NativeIndex;

		return FastTrace_Parms.ReturnValue;
	};

	bool PointCheckComponent ( class UPrimitiveComponent* InComponent, struct FVector PointLocation, struct FVector PointExtent )
	{
		static UFunction* pfnPointCheckComponent = NULL;

		if ( !pfnPointCheckComponent )
			pfnPointCheckComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.PointCheckComponent" );

		AActor_execPointCheckComponent_Parms PointCheckComponent_Parms;
		PointCheckComponent_Parms.InComponent = InComponent;
		memcpy( &PointCheckComponent_Parms.PointLocation, &PointLocation, 0xC );
		memcpy( &PointCheckComponent_Parms.PointExtent, &PointExtent, 0xC );

		pfnPointCheckComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPointCheckComponent, &PointCheckComponent_Parms, NULL );
		pfnPointCheckComponent->FunctionFlags |= 0x400;

		return PointCheckComponent_Parms.ReturnValue;
	};

	bool TraceComponent ( class UPrimitiveComponent* InComponent, struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
	{
		static UFunction* pfnTraceComponent = NULL;

		if ( !pfnTraceComponent )
			pfnTraceComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.TraceComponent" );

		AActor_execTraceComponent_Parms TraceComponent_Parms;
		TraceComponent_Parms.InComponent = InComponent;
		memcpy( &TraceComponent_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &TraceComponent_Parms.TraceStart, &TraceStart, 0xC );
		memcpy( &TraceComponent_Parms.Extent, &Extent, 0xC );

		pfnTraceComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTraceComponent, &TraceComponent_Parms, NULL );
		pfnTraceComponent->FunctionFlags |= 0x400;

		if ( HitLocation )
			memcpy( HitLocation, &TraceComponent_Parms.HitLocation, 0xC ); // CPF_OutParm
		if ( HitNormal )
			memcpy( HitNormal, &TraceComponent_Parms.HitNormal, 0xC ); // CPF_OutParm
		if ( HitInfo )
			memcpy( HitInfo, &TraceComponent_Parms.HitInfo, 0x1C ); // CPF_OutParm

		return TraceComponent_Parms.ReturnValue;
	};

	class AActor* Trace ( struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, unsigned long bTraceActors/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, int ExtraTraceFlags/*CPF_OptionalParm*/, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
	{
		static UFunction* pfnTrace = NULL;

		if ( !pfnTrace )
			pfnTrace = UObject::FindObject< UFunction >( "Function Engine.Actor.Trace" );

		AActor_execTrace_Parms Trace_Parms;
		memcpy( &Trace_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &Trace_Parms.TraceStart, &TraceStart, 0xC );
		Trace_Parms.bTraceActors = bTraceActors;
		memcpy( &Trace_Parms.Extent, &Extent, 0xC );
		Trace_Parms.ExtraTraceFlags = ExtraTraceFlags;

		WORD NativeIndex = pfnTrace->iNative;
		pfnTrace->iNative = 0;

		pfnTrace->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTrace, &Trace_Parms, NULL );
		pfnTrace->FunctionFlags |= 0x400;

		pfnTrace->iNative = NativeIndex;

		if ( HitLocation )
			memcpy( HitLocation, &Trace_Parms.HitLocation, 0xC ); // CPF_OutParm
		if ( HitNormal )
			memcpy( HitNormal, &Trace_Parms.HitNormal, 0xC ); // CPF_OutParm
		if ( HitInfo )
			memcpy( HitInfo, &Trace_Parms.HitInfo, 0x1C ); // CPF_OutParm

		return Trace_Parms.ReturnValue;
	};

	struct FAdditionalHitInfo MakeEmptyAdditionalHitInfo ()
	{
		static UFunction* pfnMakeEmptyAdditionalHitInfo = NULL;

		if ( !pfnMakeEmptyAdditionalHitInfo )
			pfnMakeEmptyAdditionalHitInfo = UObject::FindObject< UFunction >( "Function Engine.Actor.MakeEmptyAdditionalHitInfo" );

		AActor_execMakeEmptyAdditionalHitInfo_Parms MakeEmptyAdditionalHitInfo_Parms;

		this->ProcessEvent( pfnMakeEmptyAdditionalHitInfo, &MakeEmptyAdditionalHitInfo_Parms, NULL );

		return MakeEmptyAdditionalHitInfo_Parms.ReturnValue;
	};

	struct FAdditionalHitInfo MakeAdditionalHitInfo ( int HitEffectType, unsigned long bUseHitAnimation/*CPF_OptionalParm*/, int ShotFlags/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMakeAdditionalHitInfo = NULL;

		if ( !pfnMakeAdditionalHitInfo )
			pfnMakeAdditionalHitInfo = UObject::FindObject< UFunction >( "Function Engine.Actor.MakeAdditionalHitInfo" );

		AActor_execMakeAdditionalHitInfo_Parms MakeAdditionalHitInfo_Parms;
		MakeAdditionalHitInfo_Parms.HitEffectType = HitEffectType;
		MakeAdditionalHitInfo_Parms.bUseHitAnimation = bUseHitAnimation;
		MakeAdditionalHitInfo_Parms.ShotFlags = ShotFlags;

		this->ProcessEvent( pfnMakeAdditionalHitInfo, &MakeAdditionalHitInfo_Parms, NULL );

		return MakeAdditionalHitInfo_Parms.ReturnValue;
	};

	void VolumeBasedDestroy ( void* PV )
	{
		static UFunction* pfnVolumeBasedDestroy = NULL;

		if ( !pfnVolumeBasedDestroy )
			pfnVolumeBasedDestroy = UObject::FindObject< UFunction >( "Function Engine.Actor.VolumeBasedDestroy" );

		AActor_execVolumeBasedDestroy_Parms VolumeBasedDestroy_Parms;
		VolumeBasedDestroy_Parms.PV = PV;

		this->ProcessEvent( pfnVolumeBasedDestroy, &VolumeBasedDestroy_Parms, NULL );
	};

	void eventOutsideWorldBounds ()
	{
		static UFunction* pfnOutsideWorldBounds = NULL;

		if ( !pfnOutsideWorldBounds )
			pfnOutsideWorldBounds = UObject::FindObject< UFunction >( "Function Engine.Actor.OutsideWorldBounds" );

		AActor_eventOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

		this->ProcessEvent( pfnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
	};

	void eventFellOutOfWorld ( class UClass* dmgType )
	{
		static UFunction* pfnFellOutOfWorld = NULL;

		if ( !pfnFellOutOfWorld )
			pfnFellOutOfWorld = UObject::FindObject< UFunction >( "Function Engine.Actor.FellOutOfWorld" );

		AActor_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
		FellOutOfWorld_Parms.dmgType = dmgType;

		this->ProcessEvent( pfnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
	};

	bool UsedBy ( class APawn* User )
	{
		static UFunction* pfnUsedBy = NULL;

		if ( !pfnUsedBy )
			pfnUsedBy = UObject::FindObject< UFunction >( "Function Engine.Actor.UsedBy" );

		AActor_execUsedBy_Parms UsedBy_Parms;
		UsedBy_Parms.User = User;

		this->ProcessEvent( pfnUsedBy, &UsedBy_Parms, NULL );

		return UsedBy_Parms.ReturnValue;
	};

	bool eventOverRotated ( struct FRotator* out_Desired, struct FRotator* out_Actual )
	{
		static UFunction* pfnOverRotated = NULL;

		if ( !pfnOverRotated )
			pfnOverRotated = UObject::FindObject< UFunction >( "Function Engine.Actor.OverRotated" );

		AActor_eventOverRotated_Parms OverRotated_Parms;

		this->ProcessEvent( pfnOverRotated, &OverRotated_Parms, NULL );

		if ( out_Desired )
			memcpy( out_Desired, &OverRotated_Parms.out_Desired, 0xC ); // CPF_OutParm
		if ( out_Actual )
			memcpy( out_Actual, &OverRotated_Parms.out_Actual, 0xC ); // CPF_OutParm

		return OverRotated_Parms.ReturnValue;
	};

	bool ClampRotation ( struct FRotator rBase, struct FRotator rUpperLimits, struct FRotator rLowerLimits, struct FRotator* out_Rot )
	{
		static UFunction* pfnClampRotation = NULL;

		if ( !pfnClampRotation )
			pfnClampRotation = UObject::FindObject< UFunction >( "Function Engine.Actor.ClampRotation" );

		AActor_execClampRotation_Parms ClampRotation_Parms;
		memcpy( &ClampRotation_Parms.rBase, &rBase, 0xC );
		memcpy( &ClampRotation_Parms.rUpperLimits, &rUpperLimits, 0xC );
		memcpy( &ClampRotation_Parms.rLowerLimits, &rLowerLimits, 0xC );

		pfnClampRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClampRotation, &ClampRotation_Parms, NULL );
		pfnClampRotation->FunctionFlags |= 0x400;

		if ( out_Rot )
			memcpy( out_Rot, &ClampRotation_Parms.out_Rot, 0xC ); // CPF_OutParm

		return ClampRotation_Parms.ReturnValue;
	};

	void eventRanInto ( class AActor* Other )
	{
		static UFunction* pfnRanInto = NULL;

		if ( !pfnRanInto )
			pfnRanInto = UObject::FindObject< UFunction >( "Function Engine.Actor.RanInto" );

		AActor_eventRanInto_Parms RanInto_Parms;
		RanInto_Parms.Other = Other;

		this->ProcessEvent( pfnRanInto, &RanInto_Parms, NULL );
	};

	void eventEncroachedBy ( class AActor* Other )
	{
		static UFunction* pfnEncroachedBy = NULL;

		if ( !pfnEncroachedBy )
			pfnEncroachedBy = UObject::FindObject< UFunction >( "Function Engine.Actor.EncroachedBy" );

		AActor_eventEncroachedBy_Parms EncroachedBy_Parms;
		EncroachedBy_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachedBy, &EncroachedBy_Parms, NULL );
	};

	bool eventEncroachingOn ( class AActor* Other )
	{
		static UFunction* pfnEncroachingOn = NULL;

		if ( !pfnEncroachingOn )
			pfnEncroachingOn = UObject::FindObject< UFunction >( "Function Engine.Actor.EncroachingOn" );

		AActor_eventEncroachingOn_Parms EncroachingOn_Parms;
		EncroachingOn_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachingOn, &EncroachingOn_Parms, NULL );

		return EncroachingOn_Parms.ReturnValue;
	};

	void eventCollisionChanged ()
	{
		static UFunction* pfnCollisionChanged = NULL;

		if ( !pfnCollisionChanged )
			pfnCollisionChanged = UObject::FindObject< UFunction >( "Function Engine.Actor.CollisionChanged" );

		AActor_eventCollisionChanged_Parms CollisionChanged_Parms;

		this->ProcessEvent( pfnCollisionChanged, &CollisionChanged_Parms, NULL );
	};

	class AActor* eventSpecialHandling ( class APawn* Other )
	{
		static UFunction* pfnSpecialHandling = NULL;

		if ( !pfnSpecialHandling )
			pfnSpecialHandling = UObject::FindObject< UFunction >( "Function Engine.Actor.SpecialHandling" );

		AActor_eventSpecialHandling_Parms SpecialHandling_Parms;
		SpecialHandling_Parms.Other = Other;

		this->ProcessEvent( pfnSpecialHandling, &SpecialHandling_Parms, NULL );

		return SpecialHandling_Parms.ReturnValue;
	};

	void eventDetach ( class AActor* Other )
	{
		static UFunction* pfnDetach = NULL;

		if ( !pfnDetach )
			pfnDetach = UObject::FindObject< UFunction >( "Function Engine.Actor.Detach" );

		AActor_eventDetach_Parms Detach_Parms;
		Detach_Parms.Other = Other;

		this->ProcessEvent( pfnDetach, &Detach_Parms, NULL );
	};

	void eventAttach ( class AActor* Other )
	{
		static UFunction* pfnAttach = NULL;

		if ( !pfnAttach )
			pfnAttach = UObject::FindObject< UFunction >( "Function Engine.Actor.Attach" );

		AActor_eventAttach_Parms Attach_Parms;
		Attach_Parms.Other = Other;

		this->ProcessEvent( pfnAttach, &Attach_Parms, NULL );
	};

	void eventBaseChange ()
	{
		static UFunction* pfnBaseChange = NULL;

		if ( !pfnBaseChange )
			pfnBaseChange = UObject::FindObject< UFunction >( "Function Engine.Actor.BaseChange" );

		AActor_eventBaseChange_Parms BaseChange_Parms;

		this->ProcessEvent( pfnBaseChange, &BaseChange_Parms, NULL );
	};

	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
	{
		static UFunction* pfnBump = NULL;

		if ( !pfnBump )
			pfnBump = UObject::FindObject< UFunction >( "Function Engine.Actor.Bump" );

		AActor_eventBump_Parms Bump_Parms;
		Bump_Parms.Other = Other;
		Bump_Parms.OtherComp = OtherComp;
		memcpy( &Bump_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnBump, &Bump_Parms, NULL );
	};

	void eventUnTouch ( class AActor* Other )
	{
		static UFunction* pfnUnTouch = NULL;

		if ( !pfnUnTouch )
			pfnUnTouch = UObject::FindObject< UFunction >( "Function Engine.Actor.UnTouch" );

		AActor_eventUnTouch_Parms UnTouch_Parms;
		UnTouch_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouch, &UnTouch_Parms, NULL );
	};

	void eventPostTouch ( class AActor* Other )
	{
		static UFunction* pfnPostTouch = NULL;

		if ( !pfnPostTouch )
			pfnPostTouch = UObject::FindObject< UFunction >( "Function Engine.Actor.PostTouch" );

		AActor_eventPostTouch_Parms PostTouch_Parms;
		PostTouch_Parms.Other = Other;

		this->ProcessEvent( pfnPostTouch, &PostTouch_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function Engine.Actor.Touch" );

		AActor_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void eventPhysicsVolumeChange ( void* NewVolume )
	{
		static UFunction* pfnPhysicsVolumeChange = NULL;

		if ( !pfnPhysicsVolumeChange )
			pfnPhysicsVolumeChange = UObject::FindObject< UFunction >( "Function Engine.Actor.PhysicsVolumeChange" );

		AActor_eventPhysicsVolumeChange_Parms PhysicsVolumeChange_Parms;
		PhysicsVolumeChange_Parms.NewVolume = NewVolume;

		this->ProcessEvent( pfnPhysicsVolumeChange, &PhysicsVolumeChange_Parms, NULL );
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnLanded = NULL;

		if ( !pfnLanded )
			pfnLanded = UObject::FindObject< UFunction >( "Function Engine.Actor.Landed" );

		AActor_eventLanded_Parms Landed_Parms;
		memcpy( &Landed_Parms.HitNormal, &HitNormal, 0xC );
		Landed_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnLanded, &Landed_Parms, NULL );
	};

	void eventFalling ()
	{
		static UFunction* pfnFalling = NULL;

		if ( !pfnFalling )
			pfnFalling = UObject::FindObject< UFunction >( "Function Engine.Actor.Falling" );

		AActor_eventFalling_Parms Falling_Parms;

		this->ProcessEvent( pfnFalling, &Falling_Parms, NULL );
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall = NULL;

		if ( !pfnHitWall )
			pfnHitWall = UObject::FindObject< UFunction >( "Function Engine.Actor.HitWall" );

		AActor_eventHitWall_Parms HitWall_Parms;
		memcpy( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Parms.Wall = Wall;
		HitWall_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall, &HitWall_Parms, NULL );
	};

	void eventTimer ()
	{
		static UFunction* pfnTimer = NULL;

		if ( !pfnTimer )
			pfnTimer = UObject::FindObject< UFunction >( "Function Engine.Actor.Timer" );

		AActor_eventTimer_Parms Timer_Parms;

		this->ProcessEvent( pfnTimer, &Timer_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function Engine.Actor.Tick" );

		AActor_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventLostChild ( class AActor* Other )
	{
		static UFunction* pfnLostChild = NULL;

		if ( !pfnLostChild )
			pfnLostChild = UObject::FindObject< UFunction >( "Function Engine.Actor.LostChild" );

		AActor_eventLostChild_Parms LostChild_Parms;
		LostChild_Parms.Other = Other;

		this->ProcessEvent( pfnLostChild, &LostChild_Parms, NULL );
	};

	void eventGainedChild ( class AActor* Other )
	{
		static UFunction* pfnGainedChild = NULL;

		if ( !pfnGainedChild )
			pfnGainedChild = UObject::FindObject< UFunction >( "Function Engine.Actor.GainedChild" );

		AActor_eventGainedChild_Parms GainedChild_Parms;
		GainedChild_Parms.Other = Other;

		this->ProcessEvent( pfnGainedChild, &GainedChild_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Actor.Destroyed" );

		AActor_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void SetTickGroup ( unsigned char NewTickGroup )
	{
		static UFunction* pfnSetTickGroup = NULL;

		if ( !pfnSetTickGroup )
			pfnSetTickGroup = UObject::FindObject< UFunction >( "Function Engine.Actor.SetTickGroup" );

		AActor_execSetTickGroup_Parms SetTickGroup_Parms;
		SetTickGroup_Parms.NewTickGroup = NewTickGroup;

		pfnSetTickGroup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetTickGroup, &SetTickGroup_Parms, NULL );
		pfnSetTickGroup->FunctionFlags |= 0x400;
	};

	void ReattachComponent ( class UActorComponent* ComponentToReattach )
	{
		static UFunction* pfnReattachComponent = NULL;

		if ( !pfnReattachComponent )
			pfnReattachComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.ReattachComponent" );

		AActor_execReattachComponent_Parms ReattachComponent_Parms;
		ReattachComponent_Parms.ComponentToReattach = ComponentToReattach;

		pfnReattachComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReattachComponent, &ReattachComponent_Parms, NULL );
		pfnReattachComponent->FunctionFlags |= 0x400;
	};

	void DetachComponent ( class UActorComponent* ExComponent )
	{
		static UFunction* pfnDetachComponent = NULL;

		if ( !pfnDetachComponent )
			pfnDetachComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.DetachComponent" );

		AActor_execDetachComponent_Parms DetachComponent_Parms;
		DetachComponent_Parms.ExComponent = ExComponent;

		pfnDetachComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDetachComponent, &DetachComponent_Parms, NULL );
		pfnDetachComponent->FunctionFlags |= 0x400;
	};

	void AttachComponent ( class UActorComponent* NewComponent )
	{
		static UFunction* pfnAttachComponent = NULL;

		if ( !pfnAttachComponent )
			pfnAttachComponent = UObject::FindObject< UFunction >( "Function Engine.Actor.AttachComponent" );

		AActor_execAttachComponent_Parms AttachComponent_Parms;
		AttachComponent_Parms.NewComponent = NewComponent;

		pfnAttachComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAttachComponent, &AttachComponent_Parms, NULL );
		pfnAttachComponent->FunctionFlags |= 0x400;
	};

	void UnClock ( float* Time )
	{
		static UFunction* pfnUnClock = NULL;

		if ( !pfnUnClock )
			pfnUnClock = UObject::FindObject< UFunction >( "Function Engine.Actor.UnClock" );

		AActor_execUnClock_Parms UnClock_Parms;

		pfnUnClock->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUnClock, &UnClock_Parms, NULL );
		pfnUnClock->FunctionFlags |= 0x400;

		if ( Time )
			*Time = UnClock_Parms.Time; // CPF_OutParm
	};

	void Clock ( float* Time )
	{
		static UFunction* pfnClock = NULL;

		if ( !pfnClock )
			pfnClock = UObject::FindObject< UFunction >( "Function Engine.Actor.Clock" );

		AActor_execClock_Parms Clock_Parms;

		pfnClock->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClock, &Clock_Parms, NULL );
		pfnClock->FunctionFlags |= 0x400;

		if ( Time )
			*Time = Clock_Parms.Time; // CPF_OutParm
	};

	void SetPhysics ( unsigned char newPhysics )
	{
		static UFunction* pfnSetPhysics = NULL;

		if ( !pfnSetPhysics )
			pfnSetPhysics = UObject::FindObject< UFunction >( "Function Engine.Actor.SetPhysics" );

		AActor_execSetPhysics_Parms SetPhysics_Parms;
		SetPhysics_Parms.newPhysics = newPhysics;

		WORD NativeIndex = pfnSetPhysics->iNative;
		pfnSetPhysics->iNative = 0;

		pfnSetPhysics->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetPhysics, &SetPhysics_Parms, NULL );
		pfnSetPhysics->FunctionFlags |= 0x400;

		pfnSetPhysics->iNative = NativeIndex;
	};

	void SetOnlyOwnerSee ( unsigned long bNewOnlyOwnerSee )
	{
		static UFunction* pfnSetOnlyOwnerSee = NULL;

		if ( !pfnSetOnlyOwnerSee )
			pfnSetOnlyOwnerSee = UObject::FindObject< UFunction >( "Function Engine.Actor.SetOnlyOwnerSee" );

		AActor_execSetOnlyOwnerSee_Parms SetOnlyOwnerSee_Parms;
		SetOnlyOwnerSee_Parms.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

		pfnSetOnlyOwnerSee->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetOnlyOwnerSee, &SetOnlyOwnerSee_Parms, NULL );
		pfnSetOnlyOwnerSee->FunctionFlags |= 0x400;
	};

	void SetHidden ( unsigned long bNewHidden )
	{
		static UFunction* pfnSetHidden = NULL;

		if ( !pfnSetHidden )
			pfnSetHidden = UObject::FindObject< UFunction >( "Function Engine.Actor.SetHidden" );

		AActor_execSetHidden_Parms SetHidden_Parms;
		SetHidden_Parms.bNewHidden = bNewHidden;

		pfnSetHidden->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetHidden, &SetHidden_Parms, NULL );
		pfnSetHidden->FunctionFlags |= 0x400;
	};

	void ChartData ( struct FString DataName, float DataValue )
	{
		static UFunction* pfnChartData = NULL;

		if ( !pfnChartData )
			pfnChartData = UObject::FindObject< UFunction >( "Function Engine.Actor.ChartData" );

		AActor_execChartData_Parms ChartData_Parms;
		memcpy( &ChartData_Parms.DataName, &DataName, 0xC );
		ChartData_Parms.DataValue = DataValue;

		pfnChartData->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnChartData, &ChartData_Parms, NULL );
		pfnChartData->FunctionFlags |= 0x400;
	};

	void DrawDebugCone ( struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, struct FColor DrawColor, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugCone = NULL;

		if ( !pfnDrawDebugCone )
			pfnDrawDebugCone = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugCone" );

		AActor_execDrawDebugCone_Parms DrawDebugCone_Parms;
		memcpy( &DrawDebugCone_Parms.Origin, &Origin, 0xC );
		memcpy( &DrawDebugCone_Parms.Direction, &Direction, 0xC );
		DrawDebugCone_Parms.Length = Length;
		DrawDebugCone_Parms.AngleWidth = AngleWidth;
		DrawDebugCone_Parms.AngleHeight = AngleHeight;
		DrawDebugCone_Parms.NumSides = NumSides;
		memcpy( &DrawDebugCone_Parms.DrawColor, &DrawColor, 0x4 );
		DrawDebugCone_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugCone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugCone, &DrawDebugCone_Parms, NULL );
		pfnDrawDebugCone->FunctionFlags |= 0x400;
	};

	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugCylinder = NULL;

		if ( !pfnDrawDebugCylinder )
			pfnDrawDebugCylinder = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugCylinder" );

		AActor_execDrawDebugCylinder_Parms DrawDebugCylinder_Parms;
		memcpy( &DrawDebugCylinder_Parms.Start, &Start, 0xC );
		memcpy( &DrawDebugCylinder_Parms.End, &End, 0xC );
		DrawDebugCylinder_Parms.Radius = Radius;
		DrawDebugCylinder_Parms.Segments = Segments;
		DrawDebugCylinder_Parms.R = R;
		DrawDebugCylinder_Parms.G = G;
		DrawDebugCylinder_Parms.B = B;
		DrawDebugCylinder_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugCylinder->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugCylinder, &DrawDebugCylinder_Parms, NULL );
		pfnDrawDebugCylinder->FunctionFlags |= 0x400;
	};

	void DrawDebugSphere ( struct FVector Center, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugSphere = NULL;

		if ( !pfnDrawDebugSphere )
			pfnDrawDebugSphere = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugSphere" );

		AActor_execDrawDebugSphere_Parms DrawDebugSphere_Parms;
		memcpy( &DrawDebugSphere_Parms.Center, &Center, 0xC );
		DrawDebugSphere_Parms.Radius = Radius;
		DrawDebugSphere_Parms.Segments = Segments;
		DrawDebugSphere_Parms.R = R;
		DrawDebugSphere_Parms.G = G;
		DrawDebugSphere_Parms.B = B;
		DrawDebugSphere_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugSphere->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugSphere, &DrawDebugSphere_Parms, NULL );
		pfnDrawDebugSphere->FunctionFlags |= 0x400;
	};

	void DrawDebugCoordinateSystem ( struct FVector AxisLoc, struct FRotator AxisRot, float Scale, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugCoordinateSystem = NULL;

		if ( !pfnDrawDebugCoordinateSystem )
			pfnDrawDebugCoordinateSystem = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugCoordinateSystem" );

		AActor_execDrawDebugCoordinateSystem_Parms DrawDebugCoordinateSystem_Parms;
		memcpy( &DrawDebugCoordinateSystem_Parms.AxisLoc, &AxisLoc, 0xC );
		memcpy( &DrawDebugCoordinateSystem_Parms.AxisRot, &AxisRot, 0xC );
		DrawDebugCoordinateSystem_Parms.Scale = Scale;
		DrawDebugCoordinateSystem_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugCoordinateSystem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugCoordinateSystem, &DrawDebugCoordinateSystem_Parms, NULL );
		pfnDrawDebugCoordinateSystem->FunctionFlags |= 0x400;
	};

	void DrawDebugBox ( struct FVector Center, struct FVector Extent, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugBox = NULL;

		if ( !pfnDrawDebugBox )
			pfnDrawDebugBox = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugBox" );

		AActor_execDrawDebugBox_Parms DrawDebugBox_Parms;
		memcpy( &DrawDebugBox_Parms.Center, &Center, 0xC );
		memcpy( &DrawDebugBox_Parms.Extent, &Extent, 0xC );
		DrawDebugBox_Parms.R = R;
		DrawDebugBox_Parms.G = G;
		DrawDebugBox_Parms.B = B;
		DrawDebugBox_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugBox->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugBox, &DrawDebugBox_Parms, NULL );
		pfnDrawDebugBox->FunctionFlags |= 0x400;
	};

	void DrawDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDrawDebugLine = NULL;

		if ( !pfnDrawDebugLine )
			pfnDrawDebugLine = UObject::FindObject< UFunction >( "Function Engine.Actor.DrawDebugLine" );

		AActor_execDrawDebugLine_Parms DrawDebugLine_Parms;
		memcpy( &DrawDebugLine_Parms.LineStart, &LineStart, 0xC );
		memcpy( &DrawDebugLine_Parms.LineEnd, &LineEnd, 0xC );
		DrawDebugLine_Parms.R = R;
		DrawDebugLine_Parms.G = G;
		DrawDebugLine_Parms.B = B;
		DrawDebugLine_Parms.bPersistentLines = bPersistentLines;

		pfnDrawDebugLine->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugLine, &DrawDebugLine_Parms, NULL );
		pfnDrawDebugLine->FunctionFlags |= 0x400;
	};

	void FlushPersistentDebugLines ()
	{
		static UFunction* pfnFlushPersistentDebugLines = NULL;

		if ( !pfnFlushPersistentDebugLines )
			pfnFlushPersistentDebugLines = UObject::FindObject< UFunction >( "Function Engine.Actor.FlushPersistentDebugLines" );

		AActor_execFlushPersistentDebugLines_Parms FlushPersistentDebugLines_Parms;

		pfnFlushPersistentDebugLines->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFlushPersistentDebugLines, &FlushPersistentDebugLines_Parms, NULL );
		pfnFlushPersistentDebugLines->FunctionFlags |= 0x400;
	};

	void SetForcedInitialReplicatedProperty ( void* PropToReplicate, unsigned long bAdd )
	{
		static UFunction* pfnSetForcedInitialReplicatedProperty = NULL;

		if ( !pfnSetForcedInitialReplicatedProperty )
			pfnSetForcedInitialReplicatedProperty = UObject::FindObject< UFunction >( "Function Engine.Actor.SetForcedInitialReplicatedProperty" );

		AActor_execSetForcedInitialReplicatedProperty_Parms SetForcedInitialReplicatedProperty_Parms;
		SetForcedInitialReplicatedProperty_Parms.PropToReplicate = PropToReplicate;
		SetForcedInitialReplicatedProperty_Parms.bAdd = bAdd;

		pfnSetForcedInitialReplicatedProperty->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetForcedInitialReplicatedProperty, &SetForcedInitialReplicatedProperty_Parms, NULL );
		pfnSetForcedInitialReplicatedProperty->FunctionFlags |= 0x400;
	};

	void eventReplicatedDataBinding ( struct FName VarName )
	{
		static UFunction* pfnReplicatedDataBinding = NULL;

		if ( !pfnReplicatedDataBinding )
			pfnReplicatedDataBinding = UObject::FindObject< UFunction >( "Function Engine.Actor.ReplicatedDataBinding" );

		AActor_eventReplicatedDataBinding_Parms ReplicatedDataBinding_Parms;
		memcpy( &ReplicatedDataBinding_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedDataBinding, &ReplicatedDataBinding_Parms, NULL );
	};

	void eventReplicatedEventEx ( struct FName VarName, int ArrayIndex )
	{
		static UFunction* pfnReplicatedEventEx = NULL;

		if ( !pfnReplicatedEventEx )
			pfnReplicatedEventEx = UObject::FindObject< UFunction >( "Function Engine.Actor.ReplicatedEventEx" );

		AActor_eventReplicatedEventEx_Parms ReplicatedEventEx_Parms;
		memcpy( &ReplicatedEventEx_Parms.VarName, &VarName, 0x8 );
		ReplicatedEventEx_Parms.ArrayIndex = ArrayIndex;

		this->ProcessEvent( pfnReplicatedEventEx, &ReplicatedEventEx_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.Actor.ReplicatedEvent" );

		AActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	bool IsOwnedBy ( class AActor* TestActor )
	{
		static UFunction* pfnIsOwnedBy = NULL;

		if ( !pfnIsOwnedBy )
			pfnIsOwnedBy = UObject::FindObject< UFunction >( "Function Engine.Actor.IsOwnedBy" );

		AActor_execIsOwnedBy_Parms IsOwnedBy_Parms;
		IsOwnedBy_Parms.TestActor = TestActor;

		pfnIsOwnedBy->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsOwnedBy, &IsOwnedBy_Parms, NULL );
		pfnIsOwnedBy->FunctionFlags |= 0x400;

		return IsOwnedBy_Parms.ReturnValue;
	};

	class AActor* GetBaseMost ()
	{
		static UFunction* pfnGetBaseMost = NULL;

		if ( !pfnGetBaseMost )
			pfnGetBaseMost = UObject::FindObject< UFunction >( "Function Engine.Actor.GetBaseMost" );

		AActor_execGetBaseMost_Parms GetBaseMost_Parms;

		pfnGetBaseMost->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBaseMost, &GetBaseMost_Parms, NULL );
		pfnGetBaseMost->FunctionFlags |= 0x400;

		return GetBaseMost_Parms.ReturnValue;
	};

	bool IsBasedOn ( class AActor* TestActor )
	{
		static UFunction* pfnIsBasedOn = NULL;

		if ( !pfnIsBasedOn )
			pfnIsBasedOn = UObject::FindObject< UFunction >( "Function Engine.Actor.IsBasedOn" );

		AActor_execIsBasedOn_Parms IsBasedOn_Parms;
		IsBasedOn_Parms.TestActor = TestActor;

		pfnIsBasedOn->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsBasedOn, &IsBasedOn_Parms, NULL );
		pfnIsBasedOn->FunctionFlags |= 0x400;

		return IsBasedOn_Parms.ReturnValue;
	};

	void FindBase ()
	{
		static UFunction* pfnFindBase = NULL;

		if ( !pfnFindBase )
			pfnFindBase = UObject::FindObject< UFunction >( "Function Engine.Actor.FindBase" );

		AActor_execFindBase_Parms FindBase_Parms;

		pfnFindBase->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindBase, &FindBase_Parms, NULL );
		pfnFindBase->FunctionFlags |= 0x400;
	};

	void SetOwner ( class AActor* NewOwner )
	{
		static UFunction* pfnSetOwner = NULL;

		if ( !pfnSetOwner )
			pfnSetOwner = UObject::FindObject< UFunction >( "Function Engine.Actor.SetOwner" );

		AActor_execSetOwner_Parms SetOwner_Parms;
		SetOwner_Parms.NewOwner = NewOwner;

		WORD NativeIndex = pfnSetOwner->iNative;
		pfnSetOwner->iNative = 0;

		pfnSetOwner->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetOwner, &SetOwner_Parms, NULL );
		pfnSetOwner->FunctionFlags |= 0x400;

		pfnSetOwner->iNative = NativeIndex;
	};

	void SetBase ( class AActor* NewBase, struct FVector NewFloor/*CPF_OptionalParm*/, class USkeletalMeshComponent* SkelComp/*CPF_OptionalParm*/, struct FName AttachName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetBase = NULL;

		if ( !pfnSetBase )
			pfnSetBase = UObject::FindObject< UFunction >( "Function Engine.Actor.SetBase" );

		AActor_execSetBase_Parms SetBase_Parms;
		SetBase_Parms.NewBase = NewBase;
		memcpy( &SetBase_Parms.NewFloor, &NewFloor, 0xC );
		SetBase_Parms.SkelComp = SkelComp;
		memcpy( &SetBase_Parms.AttachName, &AttachName, 0x8 );

		WORD NativeIndex = pfnSetBase->iNative;
		pfnSetBase->iNative = 0;

		pfnSetBase->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetBase, &SetBase_Parms, NULL );
		pfnSetBase->FunctionFlags |= 0x400;

		pfnSetBase->iNative = NativeIndex;
	};

	float GetTerminalVelocity ()
	{
		static UFunction* pfnGetTerminalVelocity = NULL;

		if ( !pfnGetTerminalVelocity )
			pfnGetTerminalVelocity = UObject::FindObject< UFunction >( "Function Engine.Actor.GetTerminalVelocity" );

		AActor_execGetTerminalVelocity_Parms GetTerminalVelocity_Parms;

		pfnGetTerminalVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTerminalVelocity, &GetTerminalVelocity_Parms, NULL );
		pfnGetTerminalVelocity->FunctionFlags |= 0x400;

		return GetTerminalVelocity_Parms.ReturnValue;
	};

	void AutonomousPhysics ( float DeltaSeconds )
	{
		static UFunction* pfnAutonomousPhysics = NULL;

		if ( !pfnAutonomousPhysics )
			pfnAutonomousPhysics = UObject::FindObject< UFunction >( "Function Engine.Actor.AutonomousPhysics" );

		AActor_execAutonomousPhysics_Parms AutonomousPhysics_Parms;
		AutonomousPhysics_Parms.DeltaSeconds = DeltaSeconds;

		WORD NativeIndex = pfnAutonomousPhysics->iNative;
		pfnAutonomousPhysics->iNative = 0;

		pfnAutonomousPhysics->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAutonomousPhysics, &AutonomousPhysics_Parms, NULL );
		pfnAutonomousPhysics->FunctionFlags |= 0x400;

		pfnAutonomousPhysics->iNative = NativeIndex;
	};

	bool MoveSmooth ( struct FVector Delta )
	{
		static UFunction* pfnMoveSmooth = NULL;

		if ( !pfnMoveSmooth )
			pfnMoveSmooth = UObject::FindObject< UFunction >( "Function Engine.Actor.MoveSmooth" );

		AActor_execMoveSmooth_Parms MoveSmooth_Parms;
		memcpy( &MoveSmooth_Parms.Delta, &Delta, 0xC );

		WORD NativeIndex = pfnMoveSmooth->iNative;
		pfnMoveSmooth->iNative = 0;

		pfnMoveSmooth->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMoveSmooth, &MoveSmooth_Parms, NULL );
		pfnMoveSmooth->FunctionFlags |= 0x400;

		pfnMoveSmooth->iNative = NativeIndex;

		return MoveSmooth_Parms.ReturnValue;
	};

	int fixedTurn ( int Current, int Desired, int DeltaRate )
	{
		static UFunction* pfnfixedTurn = NULL;

		if ( !pfnfixedTurn )
			pfnfixedTurn = UObject::FindObject< UFunction >( "Function Engine.Actor.fixedTurn" );

		AActor_execfixedTurn_Parms fixedTurn_Parms;
		fixedTurn_Parms.Current = Current;
		fixedTurn_Parms.Desired = Desired;
		fixedTurn_Parms.DeltaRate = DeltaRate;

		pfnfixedTurn->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnfixedTurn, &fixedTurn_Parms, NULL );
		pfnfixedTurn->FunctionFlags |= 0x400;

		return fixedTurn_Parms.ReturnValue;
	};

	void SetHardAttach ( unsigned long bNewHardAttach/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetHardAttach = NULL;

		if ( !pfnSetHardAttach )
			pfnSetHardAttach = UObject::FindObject< UFunction >( "Function Engine.Actor.SetHardAttach" );

		AActor_execSetHardAttach_Parms SetHardAttach_Parms;
		SetHardAttach_Parms.bNewHardAttach = bNewHardAttach;

		pfnSetHardAttach->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetHardAttach, &SetHardAttach_Parms, NULL );
		pfnSetHardAttach->FunctionFlags |= 0x400;
	};

	bool SetRelativeLocation ( struct FVector NewLocation )
	{
		static UFunction* pfnSetRelativeLocation = NULL;

		if ( !pfnSetRelativeLocation )
			pfnSetRelativeLocation = UObject::FindObject< UFunction >( "Function Engine.Actor.SetRelativeLocation" );

		AActor_execSetRelativeLocation_Parms SetRelativeLocation_Parms;
		memcpy( &SetRelativeLocation_Parms.NewLocation, &NewLocation, 0xC );

		pfnSetRelativeLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRelativeLocation, &SetRelativeLocation_Parms, NULL );
		pfnSetRelativeLocation->FunctionFlags |= 0x400;

		return SetRelativeLocation_Parms.ReturnValue;
	};

	bool SetRelativeRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnSetRelativeRotation = NULL;

		if ( !pfnSetRelativeRotation )
			pfnSetRelativeRotation = UObject::FindObject< UFunction >( "Function Engine.Actor.SetRelativeRotation" );

		AActor_execSetRelativeRotation_Parms SetRelativeRotation_Parms;
		memcpy( &SetRelativeRotation_Parms.NewRotation, &NewRotation, 0xC );

		pfnSetRelativeRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRelativeRotation, &SetRelativeRotation_Parms, NULL );
		pfnSetRelativeRotation->FunctionFlags |= 0x400;

		return SetRelativeRotation_Parms.ReturnValue;
	};

	void SetZone ( unsigned long bForceRefresh )
	{
		static UFunction* pfnSetZone = NULL;

		if ( !pfnSetZone )
			pfnSetZone = UObject::FindObject< UFunction >( "Function Engine.Actor.SetZone" );

		AActor_execSetZone_Parms SetZone_Parms;
		SetZone_Parms.bForceRefresh = bForceRefresh;

		pfnSetZone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetZone, &SetZone_Parms, NULL );
		pfnSetZone->FunctionFlags |= 0x400;
	};

	unsigned char MovingWhichWay ( float* Amount )
	{
		static UFunction* pfnMovingWhichWay = NULL;

		if ( !pfnMovingWhichWay )
			pfnMovingWhichWay = UObject::FindObject< UFunction >( "Function Engine.Actor.MovingWhichWay" );

		AActor_execMovingWhichWay_Parms MovingWhichWay_Parms;

		pfnMovingWhichWay->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMovingWhichWay, &MovingWhichWay_Parms, NULL );
		pfnMovingWhichWay->FunctionFlags |= 0x400;

		if ( Amount )
			*Amount = MovingWhichWay_Parms.Amount; // CPF_OutParm

		return MovingWhichWay_Parms.ReturnValue;
	};

	bool SetRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnSetRotation = NULL;

		if ( !pfnSetRotation )
			pfnSetRotation = UObject::FindObject< UFunction >( "Function Engine.Actor.SetRotation" );

		AActor_execSetRotation_Parms SetRotation_Parms;
		memcpy( &SetRotation_Parms.NewRotation, &NewRotation, 0xC );

		WORD NativeIndex = pfnSetRotation->iNative;
		pfnSetRotation->iNative = 0;

		pfnSetRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRotation, &SetRotation_Parms, NULL );
		pfnSetRotation->FunctionFlags |= 0x400;

		pfnSetRotation->iNative = NativeIndex;

		return SetRotation_Parms.ReturnValue;
	};

	bool SetLocation ( struct FVector NewLocation )
	{
		static UFunction* pfnSetLocation = NULL;

		if ( !pfnSetLocation )
			pfnSetLocation = UObject::FindObject< UFunction >( "Function Engine.Actor.SetLocation" );

		AActor_execSetLocation_Parms SetLocation_Parms;
		memcpy( &SetLocation_Parms.NewLocation, &NewLocation, 0xC );

		WORD NativeIndex = pfnSetLocation->iNative;
		pfnSetLocation->iNative = 0;

		pfnSetLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetLocation, &SetLocation_Parms, NULL );
		pfnSetLocation->FunctionFlags |= 0x400;

		pfnSetLocation->iNative = NativeIndex;

		return SetLocation_Parms.ReturnValue;
	};

	bool Move ( struct FVector Delta )
	{
		static UFunction* pfnMove = NULL;

		if ( !pfnMove )
			pfnMove = UObject::FindObject< UFunction >( "Function Engine.Actor.Move" );

		AActor_execMove_Parms Move_Parms;
		memcpy( &Move_Parms.Delta, &Delta, 0xC );

		WORD NativeIndex = pfnMove->iNative;
		pfnMove->iNative = 0;

		pfnMove->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMove, &Move_Parms, NULL );
		pfnMove->FunctionFlags |= 0x400;

		pfnMove->iNative = NativeIndex;

		return Move_Parms.ReturnValue;
	};

	void SetDrawScale3D ( struct FVector NewScale3D )
	{
		static UFunction* pfnSetDrawScale3D = NULL;

		if ( !pfnSetDrawScale3D )
			pfnSetDrawScale3D = UObject::FindObject< UFunction >( "Function Engine.Actor.SetDrawScale3D" );

		AActor_execSetDrawScale3D_Parms SetDrawScale3D_Parms;
		memcpy( &SetDrawScale3D_Parms.NewScale3D, &NewScale3D, 0xC );

		pfnSetDrawScale3D->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetDrawScale3D, &SetDrawScale3D_Parms, NULL );
		pfnSetDrawScale3D->FunctionFlags |= 0x400;
	};

	void SetDrawScale ( float NewScale )
	{
		static UFunction* pfnSetDrawScale = NULL;

		if ( !pfnSetDrawScale )
			pfnSetDrawScale = UObject::FindObject< UFunction >( "Function Engine.Actor.SetDrawScale" );

		AActor_execSetDrawScale_Parms SetDrawScale_Parms;
		SetDrawScale_Parms.NewScale = NewScale;

		pfnSetDrawScale->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetDrawScale, &SetDrawScale_Parms, NULL );
		pfnSetDrawScale->FunctionFlags |= 0x400;
	};

	void SetCollisionType ( unsigned char NewCollisionType )
	{
		static UFunction* pfnSetCollisionType = NULL;

		if ( !pfnSetCollisionType )
			pfnSetCollisionType = UObject::FindObject< UFunction >( "Function Engine.Actor.SetCollisionType" );

		AActor_execSetCollisionType_Parms SetCollisionType_Parms;
		SetCollisionType_Parms.NewCollisionType = NewCollisionType;

		pfnSetCollisionType->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetCollisionType, &SetCollisionType_Parms, NULL );
		pfnSetCollisionType->FunctionFlags |= 0x400;
	};

	void SetCollisionSize ( float NewRadius, float NewHeight )
	{
		static UFunction* pfnSetCollisionSize = NULL;

		if ( !pfnSetCollisionSize )
			pfnSetCollisionSize = UObject::FindObject< UFunction >( "Function Engine.Actor.SetCollisionSize" );

		AActor_execSetCollisionSize_Parms SetCollisionSize_Parms;
		SetCollisionSize_Parms.NewRadius = NewRadius;
		SetCollisionSize_Parms.NewHeight = NewHeight;

		WORD NativeIndex = pfnSetCollisionSize->iNative;
		pfnSetCollisionSize->iNative = 0;

		pfnSetCollisionSize->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetCollisionSize, &SetCollisionSize_Parms, NULL );
		pfnSetCollisionSize->FunctionFlags |= 0x400;

		pfnSetCollisionSize->iNative = NativeIndex;
	};

	void SetCollision ( unsigned long bNewColActors/*CPF_OptionalParm*/, unsigned long bNewBlockActors/*CPF_OptionalParm*/, unsigned long bNewIgnoreEncroachers/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetCollision = NULL;

		if ( !pfnSetCollision )
			pfnSetCollision = UObject::FindObject< UFunction >( "Function Engine.Actor.SetCollision" );

		AActor_execSetCollision_Parms SetCollision_Parms;
		SetCollision_Parms.bNewColActors = bNewColActors;
		SetCollision_Parms.bNewBlockActors = bNewBlockActors;
		SetCollision_Parms.bNewIgnoreEncroachers = bNewIgnoreEncroachers;

		WORD NativeIndex = pfnSetCollision->iNative;
		pfnSetCollision->iNative = 0;

		pfnSetCollision->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetCollision, &SetCollision_Parms, NULL );
		pfnSetCollision->FunctionFlags |= 0x400;

		pfnSetCollision->iNative = NativeIndex;
	};

	void FinishAnim ( void* SeqNode )
	{
		static UFunction* pfnFinishAnim = NULL;

		if ( !pfnFinishAnim )
			pfnFinishAnim = UObject::FindObject< UFunction >( "Function Engine.Actor.FinishAnim" );

		AActor_execFinishAnim_Parms FinishAnim_Parms;
		FinishAnim_Parms.SeqNode = SeqNode;

		WORD NativeIndex = pfnFinishAnim->iNative;
		pfnFinishAnim->iNative = 0;

		pfnFinishAnim->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFinishAnim, &FinishAnim_Parms, NULL );
		pfnFinishAnim->FunctionFlags |= 0x400;

		pfnFinishAnim->iNative = NativeIndex;
	};

	void Sleep ( float Seconds )
	{
		static UFunction* pfnSleep = NULL;

		if ( !pfnSleep )
			pfnSleep = UObject::FindObject< UFunction >( "Function Engine.Actor.Sleep" );

		AActor_execSleep_Parms Sleep_Parms;
		Sleep_Parms.Seconds = Seconds;

		WORD NativeIndex = pfnSleep->iNative;
		pfnSleep->iNative = 0;

		pfnSleep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSleep, &Sleep_Parms, NULL );
		pfnSleep->FunctionFlags |= 0x400;

		pfnSleep->iNative = NativeIndex;
	};

	struct FString ConsoleCommand ( struct FString Command, unsigned long bWriteToLog/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnConsoleCommand = NULL;

		if ( !pfnConsoleCommand )
			pfnConsoleCommand = UObject::FindObject< UFunction >( "Function Engine.Actor.ConsoleCommand" );

		AActor_execConsoleCommand_Parms ConsoleCommand_Parms;
		memcpy( &ConsoleCommand_Parms.Command, &Command, 0xC );
		ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

		pfnConsoleCommand->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnConsoleCommand, &ConsoleCommand_Parms, NULL );
		pfnConsoleCommand->FunctionFlags |= 0x400;

		return ConsoleCommand_Parms.ReturnValue;
	};

	void ForceUpdateComponents ( unsigned long bCollisionUpdate/*CPF_OptionalParm*/, unsigned long bTransformOnly/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceUpdateComponents = NULL;

		if ( !pfnForceUpdateComponents )
			pfnForceUpdateComponents = UObject::FindObject< UFunction >( "Function Engine.Actor.ForceUpdateComponents" );

		AActor_execForceUpdateComponents_Parms ForceUpdateComponents_Parms;
		ForceUpdateComponents_Parms.bCollisionUpdate = bCollisionUpdate;
		ForceUpdateComponents_Parms.bTransformOnly = bTransformOnly;

		pfnForceUpdateComponents->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceUpdateComponents, &ForceUpdateComponents_Parms, NULL );
		pfnForceUpdateComponents->FunctionFlags |= 0x400;
	};

};

UClass* AActor::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif