/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: APawn.h
// Date: 06/16/2011 @ 05:19:39.487
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EPathSearchType
{
	PST_Default = 0,
	PST_Breadth = 1,
	PST_NewBestPathTo = 2,
	PST_Constraint = 3,
	PST_MAX = 4
};

struct APawn_eventGetDemoPlayCameraLocationAndRotationAndUpdate_Parms
{
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APawn_eventNotifyWorldCollisionResponse_Parms
{
	class AActor* With;
	struct FVector Delta;
	struct FVector Loc;
	struct FVector N;
	float Time;
	struct FVector AvoidanceNormal;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APawn_eventNotifyPawnCollisionResponse_Parms
{
	class APawn* With;
	struct FVector Delta;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APawn_execSetCinematicMode_Parms
{
	unsigned long bInCinematicMode : 1;
};

struct APawn_execZeroMovementVariables_Parms
{
};

struct APawn_execClearPathStep_Parms
{
};// FUNC_Native

struct APawn_execDrawPathStep_Parms
{
	class UCanvas* C;
};// FUNC_Native

struct APawn_execIncrementPathChild_Parms
{
	int Cnt;
	class UCanvas* C;
};// FUNC_Native

struct APawn_execIncrementPathStep_Parms
{
	int Cnt;
	class UCanvas* C;
};// FUNC_Native

struct APawn_execCreatePathGoalEvaluator_Parms
{
	class UClass* GoalEvalClass;
	void* ReturnValue; // CPF_ReturnParm
};

struct APawn_execCreatePathConstraint_Parms
{
	class UClass* ConstraintClass;
	void* ReturnValue; // CPF_ReturnParm
};

struct APawn_execAddGoalEvaluator_Parms
{
	void* Evaluator;
};// FUNC_Native

struct APawn_execAddPathConstraint_Parms
{
	void* Constraint;
};// FUNC_Native

struct APawn_execClearConstraints_Parms
{
};// FUNC_Native

struct APawn_eventSoakPause_Parms
{
};// FUNC_Event

struct APawn_eventBecomeViewTarget_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct APawn_execAdjustCameraScale_Parms
{
	unsigned long bMoveCameraIn : 1;
};

struct APawn_eventMessagePlayer_Parms
{
	struct FString msg;
};// FUNC_Final FUNC_Event

struct APawn_execEffectIsRelevant_Parms
{
	struct FVector SpawnLocation;
	unsigned long bForceDedicated : 1;
	float CullDistance;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execOnTeleport_Parms
{
	void* Action;
};

struct APawn_execOnSetMaterial_Parms
{
	void* Action;
};

struct APawn_execInCombat_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execPoweredUp_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execGetDamageScaling_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct APawn_execDoKismetAttachment_Parms
{
	class AActor* Attachment;
	void* Action;
};

struct APawn_eventSpawnedByKismet_Parms
{
};// FUNC_Event

struct APawn_execIsStationary_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execGetCollisionExtent_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APawn_execGetCollisionHeight_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct APawn_execGetCollisionRadius_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct APawn_execCheatFly_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execCheatGhost_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execCheatWalk_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execPlayWeaponSwitch_Parms
{
	class AWeapon* OldWeapon;
	class AWeapon* NewWeapon;
};

struct APawn_execSetActiveWeapon_Parms
{
	class AWeapon* NewWeapon;
};

struct APawn_execTossInventory_Parms
{
	class AInventory* Inv;
	struct FVector ForceVelocity;
	class UClass* DamageType;
};

struct APawn_execOnThrowActiveWeapon_Parms
{
	void* Action;
};

struct APawn_execThrowActiveWeapon_Parms
{
	class UClass* DamageType;
};

struct APawn_execDrawHUD_Parms
{
	class AHUD* H;
};

struct APawn_execFindInventoryType_Parms
{
	class UClass* DesiredClass;
	unsigned long bAllowSubclass : 1;
	class AInventory* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APawn_eventCreateInventory_Parms
{
	class UClass* NewInvClass;
	unsigned long bDoNotActivate : 1;
	class AInventory* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Event

struct APawn_execAddDefaultInventory_Parms
{
};

struct APawn_eventStopDriving_Parms
{
	class AVehicle* V;
};// FUNC_Event

struct APawn_eventStartDriving_Parms
{
	class AVehicle* V;
};// FUNC_Event

struct APawn_execCanThrowWeapon_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execSuicide_Parms
{
};

struct APawn_execGetVehicleBase_Parms
{
	class AVehicle* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execPlayLanded_Parms
{
	float ImpactVel;
};

struct APawn_execCannotJumpNow_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_eventPlayFootStepSound_Parms
{
	int FootDown;
};// FUNC_Event

struct APawn_eventTornOff_Parms
{
};// FUNC_Event

struct APawn_execPlayDying_Parms
{
	class UClass* DamageType;
	struct FVector HitLoc;
};

struct APawn_execPerformStartDying_Parms
{
};

struct APawn_execTurnOff_Parms
{
};

struct APawn_execPlayHit_Parms
{
	float Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FVector Momentum;
	struct FTraceHitInfo HitInfo;
	struct FAdditionalHitInfo AddInfo;
};

struct APawn_execPlayDyingSound_Parms
{
};

struct APawn_execDoJump_Parms
{
	unsigned long bUpdating : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execCheckWaterJump_Parms
{
	struct FVector WallNormal; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execTakeDrowningDamage_Parms
{
};

struct APawn_eventBreathTimer_Parms
{
};// FUNC_Event

struct APawn_execIsInPain_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execTouchingWaterVolume_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_eventHeadVolumeChange_Parms
{
	void* newHeadVolume;
};// FUNC_Event

struct APawn_eventLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
};// FUNC_Event

struct APawn_eventHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};// FUNC_Event

struct APawn_eventFalling_Parms
{
};// FUNC_Event

struct APawn_execDied_Parms
{
	class AController* Killer;
	class UClass* DamageType;
	struct FVector HitLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_eventIsSameTeam_Parms
{
	class APawn* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APawn_execGetTeam_Parms
{
	class ATeamInfo* ReturnValue; // CPF_ReturnParm
};

struct APawn_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APawn_eventTakeDamage_Parms
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

struct APawn_eventHealthBelowZero_Parms
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

struct APawn_execSetKillInstigator_Parms
{
	class AController* InstigatedBy;
	class UClass* DamageType;
	class AController* ReturnValue; // CPF_ReturnParm
};

struct APawn_execNotifyTakeHit_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	int Damage;
	class UClass* DamageType;
	struct FVector Momentum;
};

struct APawn_eventTakeRadiusDamageOnBones_Parms
{
	class AController* InstigatedBy;
	float BaseDamage;
	float DamageRadius;
	class UClass* DamageType;
	float Momentum;
	struct FVector HurtOrigin;
	unsigned long bFullDamage : 1;
	class AActor* DamageCauser;
	TArray< struct FName > Bones;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APawn_execPruneDamagedBoneList_Parms
{
	TArray< struct FName > Bones; // CPF_OutParm
};

struct APawn_execHealDamage_Parms
{
	int Amount;
	class AController* Healer;
	class UClass* DamageType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execAdjustDamage_Parms
{
	int inDamage; // CPF_OutParm
	struct FVector Momentum; // CPF_OutParm
	class AController* InstigatedBy;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
};

struct APawn_execSetMovementPhysics_Parms
{
};

struct APawn_execGasp_Parms
{
};

struct APawn_execOnGiveInventory_Parms
{
	void* inAction;
};

struct APawn_execOnAssignController_Parms
{
	void* inAction;
};

struct APawn_execSpawnDefaultController_Parms
{
};

struct APawn_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct APawn_eventPreBeginPlay_Parms
{
};// FUNC_Event

struct APawn_eventDestroyed_Parms
{
};// FUNC_Event

struct APawn_execDetachFromController_Parms
{
	unsigned long bDestroyController : 1;
};

struct APawn_execCrushedBy_Parms
{
	class APawn* OtherPawn;
};

struct APawn_execCanBeBaseForPawn_Parms
{
	class APawn* aPawn;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_eventBaseChange_Parms
{
};// FUNC_Event

struct APawn_eventStuckOnPawn_Parms
{
	class APawn* OtherPawn;
};// FUNC_Event

struct APawn_execJumpOffPawn_Parms
{
};

struct APawn_execgibbedBy_Parms
{
	class AActor* Other;
};

struct APawn_eventEncroachedBy_Parms
{
	class AActor* Other;
};// FUNC_Event

struct APawn_eventEncroachingOn_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APawn_execFaceRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct APawn_execClientSetRotation_Parms
{
	struct FRotator NewRotation;
};

struct APawn_execClientSetLocation_Parms
{
	struct FVector NewLocation;
	struct FRotator NewRotation;
};

struct APawn_execClientRestart_Parms
{
};

struct APawn_execRestart_Parms
{
};

struct APawn_execTakeFallingDamage_Parms
{
};

struct APawn_execKilledBy_Parms
{
	class APawn* EventInstigator;
};

struct APawn_execAddVelocity_Parms
{
	struct FVector NewVelocity;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
};

struct APawn_execRestartPlayer_Parms
{
};

struct APawn_eventStartCrouch_Parms
{
	float HeightAdjust;
};// FUNC_Event

struct APawn_eventEndCrouch_Parms
{
	float HeightAdjust;
};// FUNC_Event

struct APawn_execShouldCrouch_Parms
{
	unsigned long bCrouch : 1;
};

struct APawn_execUnCrouch_Parms
{
};

struct APawn_eventOutsideWorldBounds_Parms
{
};// FUNC_Event

struct APawn_eventFellOutOfWorld_Parms
{
	class UClass* dmgType;
};// FUNC_Event

struct APawn_eventModifyVelocity_Parms
{
	float DeltaTime;
	struct FVector OldVelocity;
};// FUNC_Event

struct APawn_execJumpOutOfWater_Parms
{
	struct FVector jumpDir;
};

struct APawn_execFinishedInterpolation_Parms
{
};

struct APawn_eventClientMessage_Parms
{
	struct FString S;
	struct FName Type;
};// FUNC_Event

struct APawn_execReceiveLocalizedMessage_Parms
{
	class UClass* Message;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};

struct APawn_execHandlePickup_Parms
{
	class AInventory* Inv;
};

struct APawn_execAdjustedStrength_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct APawn_execLineOfSightTo_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execSetMoveTarget_Parms
{
	class AActor* NewTarget;
};

struct APawn_execGetMoveTarget_Parms
{
	class AActor* ReturnValue; // CPF_ReturnParm
};

struct APawn_execNearMoveTarget_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execAffectedByHitEffects_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execInGodMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execPawnCalcCamera_Parms
{
	float fDeltaTime;
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	float out_FOV; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execSetViewRotation_Parms
{
	struct FRotator NewRotation;
};

struct APawn_execGetAdjustedAimFor_Parms
{
	class AWeapon* W;
	struct FVector StartFireLoc;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct APawn_eventInFreeCam_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APawn_eventGetBaseAimRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APawn_eventGetWeaponStartTraceLocation_Parms
{
	class AWeapon* CurrentWeapon;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APawn_eventGetPawnViewLocation_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event FUNC_Native

struct APawn_eventGetViewRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Event FUNC_Native

struct APawn_eventGetActorEyesViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct APawn_execProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator out_DeltaRot; // CPF_OutParm
};

struct APawn_execIsFirstPerson_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execWasPlayerPawn_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execIsPlayerPawn_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execIsLocallyControlled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execIsHumanControlled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct APawn_execClimbLadder_Parms
{
	void* L;
};

struct APawn_execEndClimbLadder_Parms
{
	void* OldLadder;
};

struct APawn_execCanSplash_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_eventSetWalking_Parms
{
	unsigned long bNewIsWalking : 1;
};// FUNC_Event

struct APawn_execRangedAttackTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct APawn_execRecommendLongRangedAttack_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execCanGrabLadder_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execDropToGround_Parms
{
};

struct APawn_execGetDefaultCameraMode_Parms
{
	class APlayerController* RequestedBy;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct APawn_execUnPossessed_Parms
{
};

struct APawn_execUpdateControllerOnPossess_Parms
{
	unsigned long bVehicleTransition : 1;
};

struct APawn_execPossessedBy_Parms
{
	class AController* C;
	unsigned long bVehicleTransition : 1;
};

struct APawn_execNotifyTeamChanged_Parms
{
};

struct APawn_execPlayTeleportEffect_Parms
{
	unsigned long bOut : 1;
	unsigned long bSound : 1;
};

struct APawn_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct APawn_execNeedToTurn_Parms
{
	struct FVector targ;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execIsFiring_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execHasRangedAttack_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execFireOnRelease_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execTooCloseToAttack_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execCanAttack_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execChooseFireMode_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct APawn_execBotFire_Parms
{
	unsigned long bFinished : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execWeaponStoppedFiring_Parms
{
	unsigned long bViaReplication : 1;
};

struct APawn_execWeaponFired_Parms
{
	unsigned long bViaReplication : 1;
	struct FVector StartTraceLocation;
	struct FVector EndTraceLocation;
	struct FAdditionalHitInfo AddInfo;
};

struct APawn_execFlashLocationUpdated_Parms
{
	unsigned long bViaReplication : 1;
};

struct APawn_execFlashCountUpdated_Parms
{
	unsigned long bViaReplication : 1;
};

struct APawn_execClearFlashLocation_Parms
{
	class AWeapon* Who;
};

struct APawn_execSetFlashLocation_Parms
{
	class AWeapon* Who;
	unsigned char FireModeNum;
	struct FVector NewStartTraceLoc;
	struct FVector NewLoc;
	struct FAdditionalHitInfo AddInfo;
};

struct APawn_execClearFlashCount_Parms
{
	class AWeapon* Who;
};

struct APawn_execIncrementFlashCount_Parms
{
	class AWeapon* Who;
	unsigned char FireModeNum;
};

struct APawn_execFiringModeUpdated_Parms
{
	unsigned long bViaReplication : 1;
};

struct APawn_execSetFiringMode_Parms
{
	unsigned char FiringModeNum;
};

struct APawn_execStopFire_Parms
{
	unsigned char FireModeNum;
};

struct APawn_execStartFire_Parms
{
	unsigned char FireModeNum;
};

struct APawn_execStopFiring_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execReset_Parms
{
};

struct APawn_execPlayerChangedTeam_Parms
{
};

struct APawn_execSetBaseEyeheight_Parms
{
};

struct APawn_execSpecialMoveTo_Parms
{
	class ANavigationPoint* Start;
	class ANavigationPoint* End;
	class AActor* Next;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execTermRagdoll_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execInitRagdoll_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execIsValidEnemy_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APawn_execSpecialCostForPath_Parms
{
	void* Path;
	int ReturnValue; // CPF_ReturnParm
};

struct APawn_execGetBoundingCylinder_Parms
{
	float CollisionRadius; // CPF_OutParm
	float CollisionHeight; // CPF_OutParm
};// FUNC_Native

struct APawn_execReachedDesiredRotation_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execSetPushesRigidBodies_Parms
{
	unsigned long NewPush : 1;
};// FUNC_Native

struct APawn_execForceCrouch_Parms
{
};// FUNC_Native

struct APawn_execReachedPoint_Parms
{
	struct FVector Point;
	class AActor* NewAnchor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execReachedDestination_Parms
{
	class AActor* Goal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execGetBestAnchor_Parms
{
	class AActor* TestActor;
	struct FVector TestLocation;
	unsigned long bStartPoint : 1;
	unsigned long bOnlyCheckVisible : 1;
	float out_Dist; // CPF_OutParm
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execSetAnchor_Parms
{
	class ANavigationPoint* NewAnchor;
};// FUNC_Native

struct APawn_execSetRemoteViewPitch_Parms
{
	int NewRemoteViewPitch;
};// FUNC_Final FUNC_Native

struct APawn_execIsInvisible_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execIsValidEnemyTargetFor_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned long bNoPRIisEnemy : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execIsValidTargetFor_Parms
{
	class AController* C;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execSuggestJumpVelocity_Parms
{
	struct FVector JumpVelocity; // CPF_OutParm
	struct FVector Destination;
	struct FVector Start;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APawn_execValidAnchor_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execAdjustDestination_Parms
{
	class AActor* GoalActor;
	struct FVector Dest;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execIsAliveAndWell_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct APawn_execGetBasedPosition_Parms
{
	struct FBasedPosition BP;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APawn_execSetBasedPosition_Parms
{
	struct FBasedPosition BP; // CPF_OutParm
	struct FVector pos;
	class AActor* ForcedBase;
};// FUNC_Final FUNC_Native

// (0x1BC - 0x3D8)
class APawn : public AActor
{
public:
	float                                              MaxStepHeight;                               // 0x01BC (0x0004)
	float                                              MaxJumpHeight;                               // 0x01C0 (0x0004)
	float                                              WalkableFloorZ;                              // 0x01C4 (0x0004)
	class AController*                                 Controller;                                  // 0x01C8 (0x0004)
	class APawn*                                       NextPawn;                                    // 0x01CC (0x0004)
	float                                              NetRelevancyCacheTime;                       // 0x01D0 (0x0004)
	TArray< int >                                      NetRelevancyCache;                           // 0x01D4 (0x000C)
	unsigned long                                      bUpAndOut : 1;                               // 0x01E0 (0x0004) [0x00000001]
	unsigned long                                      bIsWalking : 1;                              // 0x01E0 (0x0004) [0x00000002]
	unsigned long                                      bWantsToCrouch : 1;                          // 0x01E0 (0x0004) [0x00000004]
	unsigned long                                      bIsCrouched : 1;                             // 0x01E0 (0x0004) [0x00000008]
	unsigned long                                      bTryToUncrouch : 1;                          // 0x01E0 (0x0004) [0x00000010]
	unsigned long                                      bCanCrouch : 1;                              // 0x01E0 (0x0004) [0x00000020]
	unsigned long                                      bCrawler : 1;                                // 0x01E0 (0x0004) [0x00000040]
	unsigned long                                      bReducedSpeed : 1;                           // 0x01E0 (0x0004) [0x00000080]
	unsigned long                                      bJumpCapable : 1;                            // 0x01E0 (0x0004) [0x00000100]
	unsigned long                                      bCanJump : 1;                                // 0x01E0 (0x0004) [0x00000200]
	unsigned long                                      bCanWalk : 1;                                // 0x01E0 (0x0004) [0x00000400]
	unsigned long                                      bCanSwim : 1;                                // 0x01E0 (0x0004) [0x00000800]
	unsigned long                                      bCanFly : 1;                                 // 0x01E0 (0x0004) [0x00001000]
	unsigned long                                      bCanClimbLadders : 1;                        // 0x01E0 (0x0004) [0x00002000]
	unsigned long                                      bCanStrafe : 1;                              // 0x01E0 (0x0004) [0x00004000]
	unsigned long                                      bAvoidLedges : 1;                            // 0x01E0 (0x0004) [0x00008000]
	unsigned long                                      bStopAtLedges : 1;                           // 0x01E0 (0x0004) [0x00010000]
	unsigned long                                      bSimulateGravity : 1;                        // 0x01E0 (0x0004) [0x00020000]
	unsigned long                                      bIgnoreForces : 1;                           // 0x01E0 (0x0004) [0x00040000]
	unsigned long                                      bCanWalkOffLedges : 1;                       // 0x01E0 (0x0004) [0x00080000]
	unsigned long                                      bCanBeBaseForPawns : 1;                      // 0x01E0 (0x0004) [0x00100000]
	unsigned long                                      bSimGravityDisabled : 1;                     // 0x01E0 (0x0004) [0x00200000]
	unsigned long                                      bDirectHitWall : 1;                          // 0x01E0 (0x0004) [0x00400000]
	unsigned long                                      bPushesRigidBodies : 1;                      // 0x01E0 (0x0004) [0x00800000]
	unsigned long                                      bForceFloorCheck : 1;                        // 0x01E0 (0x0004) [0x01000000]
	unsigned long                                      bForceKeepAnchor : 1;                        // 0x01E0 (0x0004) [0x02000000]
	unsigned long                                      bCanMantle : 1;                              // 0x01E0 (0x0004) [0x04000000]
	unsigned long                                      bCanClimbUp : 1;                             // 0x01E0 (0x0004) [0x08000000]
	unsigned long                                      bCanClimbCeilings : 1;                       // 0x01E0 (0x0004) [0x10000000]
	unsigned long                                      bCanSwatTurn : 1;                            // 0x01E0 (0x0004) [0x20000000]
	unsigned long                                      bCanLeap : 1;                                // 0x01E0 (0x0004) [0x40000000]
	unsigned long                                      bCanCoverSlip : 1;                           // 0x01E0 (0x0004) [0x80000000]
	unsigned long                                      bDisplayPathErrors : 1;                      // 0x01E4 (0x0004) [0x00000001]
	unsigned long                                      bIsFemale : 1;                               // 0x01E4 (0x0004) [0x00000002]
	unsigned long                                      bCanPickupInventory : 1;                     // 0x01E4 (0x0004) [0x00000004]
	unsigned long                                      bAmbientCreature : 1;                        // 0x01E4 (0x0004) [0x00000008]
	unsigned long                                      bLOSHearing : 1;                             // 0x01E4 (0x0004) [0x00000010]
	unsigned long                                      bMuffledHearing : 1;                         // 0x01E4 (0x0004) [0x00000020]
	unsigned long                                      bDontPossess : 1;                            // 0x01E4 (0x0004) [0x00000040]
	unsigned long                                      bAutoFire : 1;                               // 0x01E4 (0x0004) [0x00000080]
	unsigned long                                      bRollToDesired : 1;                          // 0x01E4 (0x0004) [0x00000100]
	unsigned long                                      bStationary : 1;                             // 0x01E4 (0x0004) [0x00000200]
	unsigned long                                      bCachedRelevant : 1;                         // 0x01E4 (0x0004) [0x00000400]
	unsigned long                                      bSpecialHUD : 1;                             // 0x01E4 (0x0004) [0x00000800]
	unsigned long                                      bNoWeaponFiring : 1;                         // 0x01E4 (0x0004) [0x00001000]
	unsigned long                                      bCanUse : 1;                                 // 0x01E4 (0x0004) [0x00002000]
	unsigned long                                      bModifyReachSpecCost : 1;                    // 0x01E4 (0x0004) [0x00004000]
	unsigned long                                      bModifyNavPointDest : 1;                     // 0x01E4 (0x0004) [0x00008000]
	unsigned long                                      bPathfindsAsVehicle : 1;                     // 0x01E4 (0x0004) [0x00010000]
	unsigned long                                      bRunPhysicsWithNoController : 1;             // 0x01E4 (0x0004) [0x00020000]
	unsigned long                                      bForceMaxAccel : 1;                          // 0x01E4 (0x0004) [0x00040000]
	unsigned long                                      bForceRMVelocity : 1;                        // 0x01E4 (0x0004) [0x00080000]
	unsigned long                                      bForceRegularVelocity : 1;                   // 0x01E4 (0x0004) [0x00100000]
	unsigned long                                      bPlayedDeath : 1;                            // 0x01E4 (0x0004) [0x00200000]
	float                                              UncrouchTime;                                // 0x01E8 (0x0004)
	float                                              CrouchHeight;                                // 0x01EC (0x0004)
	float                                              CrouchRadius;                                // 0x01F0 (0x0004)
	int                                                FullHeight;                                  // 0x01F4 (0x0004)
	float                                              NonPreferredVehiclePathMultiplier;           // 0x01F8 (0x0004)
	unsigned char                                      PathSearchType;                              // 0x01FC (0x0001)
	unsigned char                                      RemoteViewPitch;                             // 0x01FD (0x0001)
	unsigned char                                      FlashCount;                                  // 0x01FE (0x0001)
	unsigned char                                      FiringMode;                                  // 0x01FF (0x0001)
	void*                                              PathConstraintList;                          // 0x0200 (0x0004)
	void*                                              PathGoalList;                                // 0x0204 (0x0004)
	float                                              DesiredSpeed;                                // 0x0208 (0x0004)
	float                                              MaxDesiredSpeed;                             // 0x020C (0x0004)
	float                                              HearingThreshold;                            // 0x0210 (0x0004)
	float                                              Alertness;                                   // 0x0214 (0x0004)
	float                                              SightRadius;                                 // 0x0218 (0x0004)
	float                                              PeripheralVision;                            // 0x021C (0x0004)
	float                                              AvgPhysicsTime;                              // 0x0220 (0x0004)
	float                                              Mass;                                        // 0x0224 (0x0004)
	float                                              Buoyancy;                                    // 0x0228 (0x0004)
	float                                              MeleeRange;                                  // 0x022C (0x0004)
	class ANavigationPoint*                            Anchor;                                      // 0x0230 (0x0004)
	class ANavigationPoint*                            LastAnchor;                                  // 0x0234 (0x0004)
	float                                              FindAnchorFailedTime;                        // 0x0238 (0x0004)
	float                                              LastValidAnchorTime;                         // 0x023C (0x0004)
	float                                              DestinationOffset;                           // 0x0240 (0x0004)
	float                                              NextPathRadius;                              // 0x0244 (0x0004)
	struct FVector                                     SerpentineDir;                               // 0x0248 (0x000C)
	float                                              SerpentineDist;                              // 0x0254 (0x0004)
	float                                              SerpentineTime;                              // 0x0258 (0x0004)
	float                                              SpawnTime;                                   // 0x025C (0x0004)
	int                                                MaxPitchLimit;                               // 0x0260 (0x0004)
	float                                              GroundSpeed;                                 // 0x0264 (0x0004)
	float                                              WaterSpeed;                                  // 0x0268 (0x0004)
	float                                              AirSpeed;                                    // 0x026C (0x0004)
	float                                              LadderSpeed;                                 // 0x0270 (0x0004)
	float                                              AccelRate;                                   // 0x0274 (0x0004)
	float                                              JumpZ;                                       // 0x0278 (0x0004)
	float                                              OutofWaterZ;                                 // 0x027C (0x0004)
	float                                              MaxOutOfWaterStepHeight;                     // 0x0280 (0x0004)
	float                                              AirControl;                                  // 0x0284 (0x0004)
	float                                              WalkingPct;                                  // 0x0288 (0x0004)
	float                                              CrouchedPct;                                 // 0x028C (0x0004)
	float                                              MaxFallSpeed;                                // 0x0290 (0x0004)
	float                                              AIMaxFallSpeedFactor;                        // 0x0294 (0x0004)
	float                                              BaseEyeHeight;                               // 0x0298 (0x0004)
	float                                              EyeHeight;                                   // 0x029C (0x0004)
	struct FVector                                     Floor;                                       // 0x02A0 (0x000C)
	float                                              SplashTime;                                  // 0x02AC (0x0004)
	float                                              OldZ;                                        // 0x02B0 (0x0004)
	void*                                              HeadVolume;                                  // 0x02B4 (0x0004)
	int                                                Health;                                      // 0x02B8 (0x0004)
	int                                                HealthMax;                                   // 0x02BC (0x0004)
	float                                              BreathTime;                                  // 0x02C0 (0x0004)
	float                                              UnderWaterTime;                              // 0x02C4 (0x0004)
	float                                              LastPainTime;                                // 0x02C8 (0x0004)
	struct FVector                                     RMVelocity;                                  // 0x02CC (0x000C)
	struct FVector                                     noise1spot;                                  // 0x02D8 (0x000C)
	float                                              noise1time;                                  // 0x02E4 (0x0004)
	class APawn*                                       noise1other;                                 // 0x02E8 (0x0004)
	float                                              noise1loudness;                              // 0x02EC (0x0004)
	struct FVector                                     noise2spot;                                  // 0x02F0 (0x000C)
	float                                              noise2time;                                  // 0x02FC (0x0004)
	class APawn*                                       noise2other;                                 // 0x0300 (0x0004)
	float                                              noise2loudness;                              // 0x0304 (0x0004)
	float                                              SoundDampening;                              // 0x0308 (0x0004)
	float                                              DamageScaling;                               // 0x030C (0x0004)
	struct FString                                     MenuName;                                    // 0x0310 (0x000C)
	class UClass*                                      ControllerClass;                             // 0x031C (0x0004)
	class APlayerReplicationInfo*                      PlayerReplicationInfo;                       // 0x0320 (0x0004)
	void*                                              OnLadder;                                    // 0x0324 (0x0004)
	struct FName                                       LandMovementState;                           // 0x0328 (0x0008)
	struct FName                                       WaterMovementState;                          // 0x0330 (0x0008)
	void*                                              LastStartSpot;                               // 0x0338 (0x0004)
	float                                              LastStartTime;                               // 0x033C (0x0004)
	struct FVector                                     TakeHitLocation;                             // 0x0340 (0x000C)
	class UClass*                                      HitDamageType;                               // 0x034C (0x0004)
	struct FVector                                     TearOffMomentum;                             // 0x0350 (0x000C)
	class USkeletalMeshComponent*                      Mesh;                                        // 0x035C (0x0004)
	void*                                              CylinderComponent;                           // 0x0360 (0x0004)
	float                                              RBPushRadius;                                // 0x0364 (0x0004)
	float                                              RBPushStrength;                              // 0x0368 (0x0004)
	class AVehicle*                                    DrivenVehicle;                               // 0x036C (0x0004)
	float                                              AlwaysRelevantDistanceSquared;               // 0x0370 (0x0004)
	float                                              VehicleCheckRadius;                          // 0x0374 (0x0004)
	class AController*                                 LastHitBy;                                   // 0x0378 (0x0004)
	float                                              ViewPitchMin;                                // 0x037C (0x0004)
	float                                              ViewPitchMax;                                // 0x0380 (0x0004)
	int                                                AllowedYawError;                             // 0x0384 (0x0004)
	class UClass*                                      InventoryManagerClass;                       // 0x0388 (0x0004)
	void*                                              InvManager;                                  // 0x038C (0x0004)
	class AWeapon*                                     Weapon;                                      // 0x0390 (0x0004)
	class AWeapon*                                     DroppedWeapon;                               // 0x0394 (0x0004)
	struct FFlashLocationInfo                          FlashLocation;                               // 0x0398 (0x0024)
	struct FVector                                     LastFiringFlashLocation;                     // 0x03BC (0x000C)
	int                                                ShotCount;                                   // 0x03C8 (0x0004)
	class UPrimitiveComponent*                         PreRagdollCollisionComponent;                // 0x03CC (0x0004)
	void*                                              PhysicsPushBody;                             // 0x03D0 (0x0004)
	int                                                FailedLandingCount;                          // 0x03D4 (0x0004)

	// Dying

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Pawn" );

		return ClassPointer;
	};

public:
	bool eventGetDemoPlayCameraLocationAndRotationAndUpdate ( struct FVector* out_CamLoc, struct FRotator* out_CamRot )
	{
		static UFunction* pfnGetDemoPlayCameraLocationAndRotationAndUpdate = NULL;

		if ( !pfnGetDemoPlayCameraLocationAndRotationAndUpdate )
			pfnGetDemoPlayCameraLocationAndRotationAndUpdate = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetDemoPlayCameraLocationAndRotationAndUpdate" );

		APawn_eventGetDemoPlayCameraLocationAndRotationAndUpdate_Parms GetDemoPlayCameraLocationAndRotationAndUpdate_Parms;

		this->ProcessEvent( pfnGetDemoPlayCameraLocationAndRotationAndUpdate, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.out_CamRot, 0xC ); // CPF_OutParm

		return GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.ReturnValue;
	};

	struct FVector eventNotifyWorldCollisionResponse ( class AActor* With, struct FVector Delta, struct FVector Loc, struct FVector N, float Time, struct FVector AvoidanceNormal )
	{
		static UFunction* pfnNotifyWorldCollisionResponse = NULL;

		if ( !pfnNotifyWorldCollisionResponse )
			pfnNotifyWorldCollisionResponse = UObject::FindObject< UFunction >( "Function Engine.Pawn.NotifyWorldCollisionResponse" );

		APawn_eventNotifyWorldCollisionResponse_Parms NotifyWorldCollisionResponse_Parms;
		NotifyWorldCollisionResponse_Parms.With = With;
		memcpy( &NotifyWorldCollisionResponse_Parms.Delta, &Delta, 0xC );
		memcpy( &NotifyWorldCollisionResponse_Parms.Loc, &Loc, 0xC );
		memcpy( &NotifyWorldCollisionResponse_Parms.N, &N, 0xC );
		NotifyWorldCollisionResponse_Parms.Time = Time;
		memcpy( &NotifyWorldCollisionResponse_Parms.AvoidanceNormal, &AvoidanceNormal, 0xC );

		this->ProcessEvent( pfnNotifyWorldCollisionResponse, &NotifyWorldCollisionResponse_Parms, NULL );

		return NotifyWorldCollisionResponse_Parms.ReturnValue;
	};

	struct FVector eventNotifyPawnCollisionResponse ( class APawn* With, struct FVector Delta )
	{
		static UFunction* pfnNotifyPawnCollisionResponse = NULL;

		if ( !pfnNotifyPawnCollisionResponse )
			pfnNotifyPawnCollisionResponse = UObject::FindObject< UFunction >( "Function Engine.Pawn.NotifyPawnCollisionResponse" );

		APawn_eventNotifyPawnCollisionResponse_Parms NotifyPawnCollisionResponse_Parms;
		NotifyPawnCollisionResponse_Parms.With = With;
		memcpy( &NotifyPawnCollisionResponse_Parms.Delta, &Delta, 0xC );

		this->ProcessEvent( pfnNotifyPawnCollisionResponse, &NotifyPawnCollisionResponse_Parms, NULL );

		return NotifyPawnCollisionResponse_Parms.ReturnValue;
	};

	void SetCinematicMode ( unsigned long bInCinematicMode )
	{
		static UFunction* pfnSetCinematicMode = NULL;

		if ( !pfnSetCinematicMode )
			pfnSetCinematicMode = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetCinematicMode" );

		APawn_execSetCinematicMode_Parms SetCinematicMode_Parms;
		SetCinematicMode_Parms.bInCinematicMode = bInCinematicMode;

		this->ProcessEvent( pfnSetCinematicMode, &SetCinematicMode_Parms, NULL );
	};

	void ZeroMovementVariables ()
	{
		static UFunction* pfnZeroMovementVariables = NULL;

		if ( !pfnZeroMovementVariables )
			pfnZeroMovementVariables = UObject::FindObject< UFunction >( "Function Engine.Pawn.ZeroMovementVariables" );

		APawn_execZeroMovementVariables_Parms ZeroMovementVariables_Parms;

		this->ProcessEvent( pfnZeroMovementVariables, &ZeroMovementVariables_Parms, NULL );
	};

	void ClearPathStep ()
	{
		static UFunction* pfnClearPathStep = NULL;

		if ( !pfnClearPathStep )
			pfnClearPathStep = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClearPathStep" );

		APawn_execClearPathStep_Parms ClearPathStep_Parms;

		pfnClearPathStep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearPathStep, &ClearPathStep_Parms, NULL );
		pfnClearPathStep->FunctionFlags |= 0x400;
	};

	void DrawPathStep ( class UCanvas* C )
	{
		static UFunction* pfnDrawPathStep = NULL;

		if ( !pfnDrawPathStep )
			pfnDrawPathStep = UObject::FindObject< UFunction >( "Function Engine.Pawn.DrawPathStep" );

		APawn_execDrawPathStep_Parms DrawPathStep_Parms;
		DrawPathStep_Parms.C = C;

		pfnDrawPathStep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawPathStep, &DrawPathStep_Parms, NULL );
		pfnDrawPathStep->FunctionFlags |= 0x400;
	};

	void IncrementPathChild ( int Cnt, class UCanvas* C )
	{
		static UFunction* pfnIncrementPathChild = NULL;

		if ( !pfnIncrementPathChild )
			pfnIncrementPathChild = UObject::FindObject< UFunction >( "Function Engine.Pawn.IncrementPathChild" );

		APawn_execIncrementPathChild_Parms IncrementPathChild_Parms;
		IncrementPathChild_Parms.Cnt = Cnt;
		IncrementPathChild_Parms.C = C;

		pfnIncrementPathChild->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIncrementPathChild, &IncrementPathChild_Parms, NULL );
		pfnIncrementPathChild->FunctionFlags |= 0x400;
	};

	void IncrementPathStep ( int Cnt, class UCanvas* C )
	{
		static UFunction* pfnIncrementPathStep = NULL;

		if ( !pfnIncrementPathStep )
			pfnIncrementPathStep = UObject::FindObject< UFunction >( "Function Engine.Pawn.IncrementPathStep" );

		APawn_execIncrementPathStep_Parms IncrementPathStep_Parms;
		IncrementPathStep_Parms.Cnt = Cnt;
		IncrementPathStep_Parms.C = C;

		pfnIncrementPathStep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIncrementPathStep, &IncrementPathStep_Parms, NULL );
		pfnIncrementPathStep->FunctionFlags |= 0x400;
	};

	void* CreatePathGoalEvaluator ( class UClass* GoalEvalClass )
	{
		static UFunction* pfnCreatePathGoalEvaluator = NULL;

		if ( !pfnCreatePathGoalEvaluator )
			pfnCreatePathGoalEvaluator = UObject::FindObject< UFunction >( "Function Engine.Pawn.CreatePathGoalEvaluator" );

		APawn_execCreatePathGoalEvaluator_Parms CreatePathGoalEvaluator_Parms;
		CreatePathGoalEvaluator_Parms.GoalEvalClass = GoalEvalClass;

		this->ProcessEvent( pfnCreatePathGoalEvaluator, &CreatePathGoalEvaluator_Parms, NULL );

		return CreatePathGoalEvaluator_Parms.ReturnValue;
	};

	void* CreatePathConstraint ( class UClass* ConstraintClass )
	{
		static UFunction* pfnCreatePathConstraint = NULL;

		if ( !pfnCreatePathConstraint )
			pfnCreatePathConstraint = UObject::FindObject< UFunction >( "Function Engine.Pawn.CreatePathConstraint" );

		APawn_execCreatePathConstraint_Parms CreatePathConstraint_Parms;
		CreatePathConstraint_Parms.ConstraintClass = ConstraintClass;

		this->ProcessEvent( pfnCreatePathConstraint, &CreatePathConstraint_Parms, NULL );

		return CreatePathConstraint_Parms.ReturnValue;
	};

	void AddGoalEvaluator ( void* Evaluator )
	{
		static UFunction* pfnAddGoalEvaluator = NULL;

		if ( !pfnAddGoalEvaluator )
			pfnAddGoalEvaluator = UObject::FindObject< UFunction >( "Function Engine.Pawn.AddGoalEvaluator" );

		APawn_execAddGoalEvaluator_Parms AddGoalEvaluator_Parms;
		AddGoalEvaluator_Parms.Evaluator = Evaluator;

		pfnAddGoalEvaluator->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddGoalEvaluator, &AddGoalEvaluator_Parms, NULL );
		pfnAddGoalEvaluator->FunctionFlags |= 0x400;
	};

	void AddPathConstraint ( void* Constraint )
	{
		static UFunction* pfnAddPathConstraint = NULL;

		if ( !pfnAddPathConstraint )
			pfnAddPathConstraint = UObject::FindObject< UFunction >( "Function Engine.Pawn.AddPathConstraint" );

		APawn_execAddPathConstraint_Parms AddPathConstraint_Parms;
		AddPathConstraint_Parms.Constraint = Constraint;

		pfnAddPathConstraint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddPathConstraint, &AddPathConstraint_Parms, NULL );
		pfnAddPathConstraint->FunctionFlags |= 0x400;
	};

	void ClearConstraints ()
	{
		static UFunction* pfnClearConstraints = NULL;

		if ( !pfnClearConstraints )
			pfnClearConstraints = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClearConstraints" );

		APawn_execClearConstraints_Parms ClearConstraints_Parms;

		pfnClearConstraints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearConstraints, &ClearConstraints_Parms, NULL );
		pfnClearConstraints->FunctionFlags |= 0x400;
	};

	void eventSoakPause ()
	{
		static UFunction* pfnSoakPause = NULL;

		if ( !pfnSoakPause )
			pfnSoakPause = UObject::FindObject< UFunction >( "Function Engine.Pawn.SoakPause" );

		APawn_eventSoakPause_Parms SoakPause_Parms;

		this->ProcessEvent( pfnSoakPause, &SoakPause_Parms, NULL );
	};

	void eventBecomeViewTarget ( class APlayerController* PC )
	{
		static UFunction* pfnBecomeViewTarget = NULL;

		if ( !pfnBecomeViewTarget )
			pfnBecomeViewTarget = UObject::FindObject< UFunction >( "Function Engine.Pawn.BecomeViewTarget" );

		APawn_eventBecomeViewTarget_Parms BecomeViewTarget_Parms;
		BecomeViewTarget_Parms.PC = PC;

		this->ProcessEvent( pfnBecomeViewTarget, &BecomeViewTarget_Parms, NULL );
	};

	void AdjustCameraScale ( unsigned long bMoveCameraIn )
	{
		static UFunction* pfnAdjustCameraScale = NULL;

		if ( !pfnAdjustCameraScale )
			pfnAdjustCameraScale = UObject::FindObject< UFunction >( "Function Engine.Pawn.AdjustCameraScale" );

		APawn_execAdjustCameraScale_Parms AdjustCameraScale_Parms;
		AdjustCameraScale_Parms.bMoveCameraIn = bMoveCameraIn;

		this->ProcessEvent( pfnAdjustCameraScale, &AdjustCameraScale_Parms, NULL );
	};

	void eventMessagePlayer ( struct FString msg )
	{
		static UFunction* pfnMessagePlayer = NULL;

		if ( !pfnMessagePlayer )
			pfnMessagePlayer = UObject::FindObject< UFunction >( "Function Engine.Pawn.MessagePlayer" );

		APawn_eventMessagePlayer_Parms MessagePlayer_Parms;
		memcpy( &MessagePlayer_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnMessagePlayer, &MessagePlayer_Parms, NULL );
	};

	bool EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float CullDistance/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnEffectIsRelevant = NULL;

		if ( !pfnEffectIsRelevant )
			pfnEffectIsRelevant = UObject::FindObject< UFunction >( "Function Engine.Pawn.EffectIsRelevant" );

		APawn_execEffectIsRelevant_Parms EffectIsRelevant_Parms;
		memcpy( &EffectIsRelevant_Parms.SpawnLocation, &SpawnLocation, 0xC );
		EffectIsRelevant_Parms.bForceDedicated = bForceDedicated;
		EffectIsRelevant_Parms.CullDistance = CullDistance;

		this->ProcessEvent( pfnEffectIsRelevant, &EffectIsRelevant_Parms, NULL );

		return EffectIsRelevant_Parms.ReturnValue;
	};

	void OnTeleport ( void* Action )
	{
		static UFunction* pfnOnTeleport = NULL;

		if ( !pfnOnTeleport )
			pfnOnTeleport = UObject::FindObject< UFunction >( "Function Engine.Pawn.OnTeleport" );

		APawn_execOnTeleport_Parms OnTeleport_Parms;
		OnTeleport_Parms.Action = Action;

		this->ProcessEvent( pfnOnTeleport, &OnTeleport_Parms, NULL );
	};

	void OnSetMaterial ( void* Action )
	{
		static UFunction* pfnOnSetMaterial = NULL;

		if ( !pfnOnSetMaterial )
			pfnOnSetMaterial = UObject::FindObject< UFunction >( "Function Engine.Pawn.OnSetMaterial" );

		APawn_execOnSetMaterial_Parms OnSetMaterial_Parms;
		OnSetMaterial_Parms.Action = Action;

		this->ProcessEvent( pfnOnSetMaterial, &OnSetMaterial_Parms, NULL );
	};

	bool InCombat ()
	{
		static UFunction* pfnInCombat = NULL;

		if ( !pfnInCombat )
			pfnInCombat = UObject::FindObject< UFunction >( "Function Engine.Pawn.InCombat" );

		APawn_execInCombat_Parms InCombat_Parms;

		this->ProcessEvent( pfnInCombat, &InCombat_Parms, NULL );

		return InCombat_Parms.ReturnValue;
	};

	bool PoweredUp ()
	{
		static UFunction* pfnPoweredUp = NULL;

		if ( !pfnPoweredUp )
			pfnPoweredUp = UObject::FindObject< UFunction >( "Function Engine.Pawn.PoweredUp" );

		APawn_execPoweredUp_Parms PoweredUp_Parms;

		this->ProcessEvent( pfnPoweredUp, &PoweredUp_Parms, NULL );

		return PoweredUp_Parms.ReturnValue;
	};

	float GetDamageScaling ()
	{
		static UFunction* pfnGetDamageScaling = NULL;

		if ( !pfnGetDamageScaling )
			pfnGetDamageScaling = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetDamageScaling" );

		APawn_execGetDamageScaling_Parms GetDamageScaling_Parms;

		this->ProcessEvent( pfnGetDamageScaling, &GetDamageScaling_Parms, NULL );

		return GetDamageScaling_Parms.ReturnValue;
	};

	void DoKismetAttachment ( class AActor* Attachment, void* Action )
	{
		static UFunction* pfnDoKismetAttachment = NULL;

		if ( !pfnDoKismetAttachment )
			pfnDoKismetAttachment = UObject::FindObject< UFunction >( "Function Engine.Pawn.DoKismetAttachment" );

		APawn_execDoKismetAttachment_Parms DoKismetAttachment_Parms;
		DoKismetAttachment_Parms.Attachment = Attachment;
		DoKismetAttachment_Parms.Action = Action;

		this->ProcessEvent( pfnDoKismetAttachment, &DoKismetAttachment_Parms, NULL );
	};

	void eventSpawnedByKismet ()
	{
		static UFunction* pfnSpawnedByKismet = NULL;

		if ( !pfnSpawnedByKismet )
			pfnSpawnedByKismet = UObject::FindObject< UFunction >( "Function Engine.Pawn.SpawnedByKismet" );

		APawn_eventSpawnedByKismet_Parms SpawnedByKismet_Parms;

		this->ProcessEvent( pfnSpawnedByKismet, &SpawnedByKismet_Parms, NULL );
	};

	bool IsStationary ()
	{
		static UFunction* pfnIsStationary = NULL;

		if ( !pfnIsStationary )
			pfnIsStationary = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsStationary" );

		APawn_execIsStationary_Parms IsStationary_Parms;

		this->ProcessEvent( pfnIsStationary, &IsStationary_Parms, NULL );

		return IsStationary_Parms.ReturnValue;
	};

	struct FVector GetCollisionExtent ()
	{
		static UFunction* pfnGetCollisionExtent = NULL;

		if ( !pfnGetCollisionExtent )
			pfnGetCollisionExtent = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetCollisionExtent" );

		APawn_execGetCollisionExtent_Parms GetCollisionExtent_Parms;

		this->ProcessEvent( pfnGetCollisionExtent, &GetCollisionExtent_Parms, NULL );

		return GetCollisionExtent_Parms.ReturnValue;
	};

	float GetCollisionHeight ()
	{
		static UFunction* pfnGetCollisionHeight = NULL;

		if ( !pfnGetCollisionHeight )
			pfnGetCollisionHeight = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetCollisionHeight" );

		APawn_execGetCollisionHeight_Parms GetCollisionHeight_Parms;

		this->ProcessEvent( pfnGetCollisionHeight, &GetCollisionHeight_Parms, NULL );

		return GetCollisionHeight_Parms.ReturnValue;
	};

	float GetCollisionRadius ()
	{
		static UFunction* pfnGetCollisionRadius = NULL;

		if ( !pfnGetCollisionRadius )
			pfnGetCollisionRadius = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetCollisionRadius" );

		APawn_execGetCollisionRadius_Parms GetCollisionRadius_Parms;

		this->ProcessEvent( pfnGetCollisionRadius, &GetCollisionRadius_Parms, NULL );

		return GetCollisionRadius_Parms.ReturnValue;
	};

	bool CheatFly ()
	{
		static UFunction* pfnCheatFly = NULL;

		if ( !pfnCheatFly )
			pfnCheatFly = UObject::FindObject< UFunction >( "Function Engine.Pawn.CheatFly" );

		APawn_execCheatFly_Parms CheatFly_Parms;

		this->ProcessEvent( pfnCheatFly, &CheatFly_Parms, NULL );

		return CheatFly_Parms.ReturnValue;
	};

	bool CheatGhost ()
	{
		static UFunction* pfnCheatGhost = NULL;

		if ( !pfnCheatGhost )
			pfnCheatGhost = UObject::FindObject< UFunction >( "Function Engine.Pawn.CheatGhost" );

		APawn_execCheatGhost_Parms CheatGhost_Parms;

		this->ProcessEvent( pfnCheatGhost, &CheatGhost_Parms, NULL );

		return CheatGhost_Parms.ReturnValue;
	};

	bool CheatWalk ()
	{
		static UFunction* pfnCheatWalk = NULL;

		if ( !pfnCheatWalk )
			pfnCheatWalk = UObject::FindObject< UFunction >( "Function Engine.Pawn.CheatWalk" );

		APawn_execCheatWalk_Parms CheatWalk_Parms;

		this->ProcessEvent( pfnCheatWalk, &CheatWalk_Parms, NULL );

		return CheatWalk_Parms.ReturnValue;
	};

	void PlayWeaponSwitch ( class AWeapon* OldWeapon, class AWeapon* NewWeapon )
	{
		static UFunction* pfnPlayWeaponSwitch = NULL;

		if ( !pfnPlayWeaponSwitch )
			pfnPlayWeaponSwitch = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayWeaponSwitch" );

		APawn_execPlayWeaponSwitch_Parms PlayWeaponSwitch_Parms;
		PlayWeaponSwitch_Parms.OldWeapon = OldWeapon;
		PlayWeaponSwitch_Parms.NewWeapon = NewWeapon;

		this->ProcessEvent( pfnPlayWeaponSwitch, &PlayWeaponSwitch_Parms, NULL );
	};

	void SetActiveWeapon ( class AWeapon* NewWeapon )
	{
		static UFunction* pfnSetActiveWeapon = NULL;

		if ( !pfnSetActiveWeapon )
			pfnSetActiveWeapon = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetActiveWeapon" );

		APawn_execSetActiveWeapon_Parms SetActiveWeapon_Parms;
		SetActiveWeapon_Parms.NewWeapon = NewWeapon;

		this->ProcessEvent( pfnSetActiveWeapon, &SetActiveWeapon_Parms, NULL );
	};

	void TossInventory ( class AInventory* Inv, struct FVector ForceVelocity/*CPF_OptionalParm*/, class UClass* DamageType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTossInventory = NULL;

		if ( !pfnTossInventory )
			pfnTossInventory = UObject::FindObject< UFunction >( "Function Engine.Pawn.TossInventory" );

		APawn_execTossInventory_Parms TossInventory_Parms;
		TossInventory_Parms.Inv = Inv;
		memcpy( &TossInventory_Parms.ForceVelocity, &ForceVelocity, 0xC );
		TossInventory_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnTossInventory, &TossInventory_Parms, NULL );
	};

	void OnThrowActiveWeapon ( void* Action )
	{
		static UFunction* pfnOnThrowActiveWeapon = NULL;

		if ( !pfnOnThrowActiveWeapon )
			pfnOnThrowActiveWeapon = UObject::FindObject< UFunction >( "Function Engine.Pawn.OnThrowActiveWeapon" );

		APawn_execOnThrowActiveWeapon_Parms OnThrowActiveWeapon_Parms;
		OnThrowActiveWeapon_Parms.Action = Action;

		this->ProcessEvent( pfnOnThrowActiveWeapon, &OnThrowActiveWeapon_Parms, NULL );
	};

	void ThrowActiveWeapon ( class UClass* DamageType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnThrowActiveWeapon = NULL;

		if ( !pfnThrowActiveWeapon )
			pfnThrowActiveWeapon = UObject::FindObject< UFunction >( "Function Engine.Pawn.ThrowActiveWeapon" );

		APawn_execThrowActiveWeapon_Parms ThrowActiveWeapon_Parms;
		ThrowActiveWeapon_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnThrowActiveWeapon, &ThrowActiveWeapon_Parms, NULL );
	};

	void DrawHUD ( class AHUD* H )
	{
		static UFunction* pfnDrawHUD = NULL;

		if ( !pfnDrawHUD )
			pfnDrawHUD = UObject::FindObject< UFunction >( "Function Engine.Pawn.DrawHUD" );

		APawn_execDrawHUD_Parms DrawHUD_Parms;
		DrawHUD_Parms.H = H;

		this->ProcessEvent( pfnDrawHUD, &DrawHUD_Parms, NULL );
	};

	class AInventory* FindInventoryType ( class UClass* DesiredClass, unsigned long bAllowSubclass/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindInventoryType = NULL;

		if ( !pfnFindInventoryType )
			pfnFindInventoryType = UObject::FindObject< UFunction >( "Function Engine.Pawn.FindInventoryType" );

		APawn_execFindInventoryType_Parms FindInventoryType_Parms;
		FindInventoryType_Parms.DesiredClass = DesiredClass;
		FindInventoryType_Parms.bAllowSubclass = bAllowSubclass;

		this->ProcessEvent( pfnFindInventoryType, &FindInventoryType_Parms, NULL );

		return FindInventoryType_Parms.ReturnValue;
	};

	class AInventory* eventCreateInventory ( class UClass* NewInvClass, unsigned long bDoNotActivate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCreateInventory = NULL;

		if ( !pfnCreateInventory )
			pfnCreateInventory = UObject::FindObject< UFunction >( "Function Engine.Pawn.CreateInventory" );

		APawn_eventCreateInventory_Parms CreateInventory_Parms;
		CreateInventory_Parms.NewInvClass = NewInvClass;
		CreateInventory_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnCreateInventory, &CreateInventory_Parms, NULL );

		return CreateInventory_Parms.ReturnValue;
	};

	void AddDefaultInventory ()
	{
		static UFunction* pfnAddDefaultInventory = NULL;

		if ( !pfnAddDefaultInventory )
			pfnAddDefaultInventory = UObject::FindObject< UFunction >( "Function Engine.Pawn.AddDefaultInventory" );

		APawn_execAddDefaultInventory_Parms AddDefaultInventory_Parms;

		this->ProcessEvent( pfnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
	};

	void eventStopDriving ( class AVehicle* V )
	{
		static UFunction* pfnStopDriving = NULL;

		if ( !pfnStopDriving )
			pfnStopDriving = UObject::FindObject< UFunction >( "Function Engine.Pawn.StopDriving" );

		APawn_eventStopDriving_Parms StopDriving_Parms;
		StopDriving_Parms.V = V;

		this->ProcessEvent( pfnStopDriving, &StopDriving_Parms, NULL );
	};

	void eventStartDriving ( class AVehicle* V )
	{
		static UFunction* pfnStartDriving = NULL;

		if ( !pfnStartDriving )
			pfnStartDriving = UObject::FindObject< UFunction >( "Function Engine.Pawn.StartDriving" );

		APawn_eventStartDriving_Parms StartDriving_Parms;
		StartDriving_Parms.V = V;

		this->ProcessEvent( pfnStartDriving, &StartDriving_Parms, NULL );
	};

	bool CanThrowWeapon ()
	{
		static UFunction* pfnCanThrowWeapon = NULL;

		if ( !pfnCanThrowWeapon )
			pfnCanThrowWeapon = UObject::FindObject< UFunction >( "Function Engine.Pawn.CanThrowWeapon" );

		APawn_execCanThrowWeapon_Parms CanThrowWeapon_Parms;

		this->ProcessEvent( pfnCanThrowWeapon, &CanThrowWeapon_Parms, NULL );

		return CanThrowWeapon_Parms.ReturnValue;
	};

	void Suicide ()
	{
		static UFunction* pfnSuicide = NULL;

		if ( !pfnSuicide )
			pfnSuicide = UObject::FindObject< UFunction >( "Function Engine.Pawn.Suicide" );

		APawn_execSuicide_Parms Suicide_Parms;

		this->ProcessEvent( pfnSuicide, &Suicide_Parms, NULL );
	};

	class AVehicle* GetVehicleBase ()
	{
		static UFunction* pfnGetVehicleBase = NULL;

		if ( !pfnGetVehicleBase )
			pfnGetVehicleBase = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetVehicleBase" );

		APawn_execGetVehicleBase_Parms GetVehicleBase_Parms;

		pfnGetVehicleBase->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetVehicleBase, &GetVehicleBase_Parms, NULL );
		pfnGetVehicleBase->FunctionFlags |= 0x400;

		return GetVehicleBase_Parms.ReturnValue;
	};

	void PlayLanded ( float ImpactVel )
	{
		static UFunction* pfnPlayLanded = NULL;

		if ( !pfnPlayLanded )
			pfnPlayLanded = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayLanded" );

		APawn_execPlayLanded_Parms PlayLanded_Parms;
		PlayLanded_Parms.ImpactVel = ImpactVel;

		this->ProcessEvent( pfnPlayLanded, &PlayLanded_Parms, NULL );
	};

	bool CannotJumpNow ()
	{
		static UFunction* pfnCannotJumpNow = NULL;

		if ( !pfnCannotJumpNow )
			pfnCannotJumpNow = UObject::FindObject< UFunction >( "Function Engine.Pawn.CannotJumpNow" );

		APawn_execCannotJumpNow_Parms CannotJumpNow_Parms;

		this->ProcessEvent( pfnCannotJumpNow, &CannotJumpNow_Parms, NULL );

		return CannotJumpNow_Parms.ReturnValue;
	};

	void eventPlayFootStepSound ( int FootDown )
	{
		static UFunction* pfnPlayFootStepSound = NULL;

		if ( !pfnPlayFootStepSound )
			pfnPlayFootStepSound = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayFootStepSound" );

		APawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
		PlayFootStepSound_Parms.FootDown = FootDown;

		this->ProcessEvent( pfnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
	};

	void eventTornOff ()
	{
		static UFunction* pfnTornOff = NULL;

		if ( !pfnTornOff )
			pfnTornOff = UObject::FindObject< UFunction >( "Function Engine.Pawn.TornOff" );

		APawn_eventTornOff_Parms TornOff_Parms;

		this->ProcessEvent( pfnTornOff, &TornOff_Parms, NULL );
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc )
	{
		static UFunction* pfnPlayDying = NULL;

		if ( !pfnPlayDying )
			pfnPlayDying = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayDying" );

		APawn_execPlayDying_Parms PlayDying_Parms;
		PlayDying_Parms.DamageType = DamageType;
		memcpy( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

		this->ProcessEvent( pfnPlayDying, &PlayDying_Parms, NULL );
	};

	void PerformStartDying ()
	{
		static UFunction* pfnPerformStartDying = NULL;

		if ( !pfnPerformStartDying )
			pfnPerformStartDying = UObject::FindObject< UFunction >( "Function Engine.Pawn.PerformStartDying" );

		APawn_execPerformStartDying_Parms PerformStartDying_Parms;

		this->ProcessEvent( pfnPerformStartDying, &PerformStartDying_Parms, NULL );
	};

	void TurnOff ()
	{
		static UFunction* pfnTurnOff = NULL;

		if ( !pfnTurnOff )
			pfnTurnOff = UObject::FindObject< UFunction >( "Function Engine.Pawn.TurnOff" );

		APawn_execTurnOff_Parms TurnOff_Parms;

		this->ProcessEvent( pfnTurnOff, &TurnOff_Parms, NULL );
	};

	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnPlayHit = NULL;

		if ( !pfnPlayHit )
			pfnPlayHit = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayHit" );

		APawn_execPlayHit_Parms PlayHit_Parms;
		PlayHit_Parms.Damage = Damage;
		PlayHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
		PlayHit_Parms.DamageType = DamageType;
		memcpy( &PlayHit_Parms.Momentum, &Momentum, 0xC );
		memcpy( &PlayHit_Parms.HitInfo, &HitInfo, 0x1C );
		memcpy( &PlayHit_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnPlayHit, &PlayHit_Parms, NULL );
	};

	void PlayDyingSound ()
	{
		static UFunction* pfnPlayDyingSound = NULL;

		if ( !pfnPlayDyingSound )
			pfnPlayDyingSound = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayDyingSound" );

		APawn_execPlayDyingSound_Parms PlayDyingSound_Parms;

		this->ProcessEvent( pfnPlayDyingSound, &PlayDyingSound_Parms, NULL );
	};

	bool DoJump ( unsigned long bUpdating )
	{
		static UFunction* pfnDoJump = NULL;

		if ( !pfnDoJump )
			pfnDoJump = UObject::FindObject< UFunction >( "Function Engine.Pawn.DoJump" );

		APawn_execDoJump_Parms DoJump_Parms;
		DoJump_Parms.bUpdating = bUpdating;

		this->ProcessEvent( pfnDoJump, &DoJump_Parms, NULL );

		return DoJump_Parms.ReturnValue;
	};

	bool CheckWaterJump ( struct FVector* WallNormal )
	{
		static UFunction* pfnCheckWaterJump = NULL;

		if ( !pfnCheckWaterJump )
			pfnCheckWaterJump = UObject::FindObject< UFunction >( "Function Engine.Pawn.CheckWaterJump" );

		APawn_execCheckWaterJump_Parms CheckWaterJump_Parms;

		this->ProcessEvent( pfnCheckWaterJump, &CheckWaterJump_Parms, NULL );

		if ( WallNormal )
			memcpy( WallNormal, &CheckWaterJump_Parms.WallNormal, 0xC ); // CPF_OutParm

		return CheckWaterJump_Parms.ReturnValue;
	};

	void TakeDrowningDamage ()
	{
		static UFunction* pfnTakeDrowningDamage = NULL;

		if ( !pfnTakeDrowningDamage )
			pfnTakeDrowningDamage = UObject::FindObject< UFunction >( "Function Engine.Pawn.TakeDrowningDamage" );

		APawn_execTakeDrowningDamage_Parms TakeDrowningDamage_Parms;

		this->ProcessEvent( pfnTakeDrowningDamage, &TakeDrowningDamage_Parms, NULL );
	};

	void eventBreathTimer ()
	{
		static UFunction* pfnBreathTimer = NULL;

		if ( !pfnBreathTimer )
			pfnBreathTimer = UObject::FindObject< UFunction >( "Function Engine.Pawn.BreathTimer" );

		APawn_eventBreathTimer_Parms BreathTimer_Parms;

		this->ProcessEvent( pfnBreathTimer, &BreathTimer_Parms, NULL );
	};

	bool IsInPain ()
	{
		static UFunction* pfnIsInPain = NULL;

		if ( !pfnIsInPain )
			pfnIsInPain = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsInPain" );

		APawn_execIsInPain_Parms IsInPain_Parms;

		this->ProcessEvent( pfnIsInPain, &IsInPain_Parms, NULL );

		return IsInPain_Parms.ReturnValue;
	};

	bool TouchingWaterVolume ()
	{
		static UFunction* pfnTouchingWaterVolume = NULL;

		if ( !pfnTouchingWaterVolume )
			pfnTouchingWaterVolume = UObject::FindObject< UFunction >( "Function Engine.Pawn.TouchingWaterVolume" );

		APawn_execTouchingWaterVolume_Parms TouchingWaterVolume_Parms;

		this->ProcessEvent( pfnTouchingWaterVolume, &TouchingWaterVolume_Parms, NULL );

		return TouchingWaterVolume_Parms.ReturnValue;
	};

	void eventHeadVolumeChange ( void* newHeadVolume )
	{
		static UFunction* pfnHeadVolumeChange = NULL;

		if ( !pfnHeadVolumeChange )
			pfnHeadVolumeChange = UObject::FindObject< UFunction >( "Function Engine.Pawn.HeadVolumeChange" );

		APawn_eventHeadVolumeChange_Parms HeadVolumeChange_Parms;
		HeadVolumeChange_Parms.newHeadVolume = newHeadVolume;

		this->ProcessEvent( pfnHeadVolumeChange, &HeadVolumeChange_Parms, NULL );
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnLanded = NULL;

		if ( !pfnLanded )
			pfnLanded = UObject::FindObject< UFunction >( "Function Engine.Pawn.Landed" );

		APawn_eventLanded_Parms Landed_Parms;
		memcpy( &Landed_Parms.HitNormal, &HitNormal, 0xC );
		Landed_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnLanded, &Landed_Parms, NULL );
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall = NULL;

		if ( !pfnHitWall )
			pfnHitWall = UObject::FindObject< UFunction >( "Function Engine.Pawn.HitWall" );

		APawn_eventHitWall_Parms HitWall_Parms;
		memcpy( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Parms.Wall = Wall;
		HitWall_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall, &HitWall_Parms, NULL );
	};

	void eventFalling ()
	{
		static UFunction* pfnFalling = NULL;

		if ( !pfnFalling )
			pfnFalling = UObject::FindObject< UFunction >( "Function Engine.Pawn.Falling" );

		APawn_eventFalling_Parms Falling_Parms;

		this->ProcessEvent( pfnFalling, &Falling_Parms, NULL );
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
	{
		static UFunction* pfnDied = NULL;

		if ( !pfnDied )
			pfnDied = UObject::FindObject< UFunction >( "Function Engine.Pawn.Died" );

		APawn_execDied_Parms Died_Parms;
		Died_Parms.Killer = Killer;
		Died_Parms.DamageType = DamageType;
		memcpy( &Died_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnDied, &Died_Parms, NULL );

		return Died_Parms.ReturnValue;
	};

	bool eventIsSameTeam ( class APawn* Other )
	{
		static UFunction* pfnIsSameTeam = NULL;

		if ( !pfnIsSameTeam )
			pfnIsSameTeam = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsSameTeam" );

		APawn_eventIsSameTeam_Parms IsSameTeam_Parms;
		IsSameTeam_Parms.Other = Other;

		this->ProcessEvent( pfnIsSameTeam, &IsSameTeam_Parms, NULL );

		return IsSameTeam_Parms.ReturnValue;
	};

	class ATeamInfo* GetTeam ()
	{
		static UFunction* pfnGetTeam = NULL;

		if ( !pfnGetTeam )
			pfnGetTeam = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetTeam" );

		APawn_execGetTeam_Parms GetTeam_Parms;

		this->ProcessEvent( pfnGetTeam, &GetTeam_Parms, NULL );

		return GetTeam_Parms.ReturnValue;
	};

	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetTeamNum" );

		APawn_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function Engine.Pawn.TakeDamage" );

		APawn_eventTakeDamage_Parms TakeDamage_Parms;
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

	void eventHealthBelowZero ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHealthBelowZero = NULL;

		if ( !pfnHealthBelowZero )
			pfnHealthBelowZero = UObject::FindObject< UFunction >( "Function Engine.Pawn.HealthBelowZero" );

		APawn_eventHealthBelowZero_Parms HealthBelowZero_Parms;
		HealthBelowZero_Parms.Damage = Damage;
		HealthBelowZero_Parms.InstigatedBy = InstigatedBy;
		memcpy( &HealthBelowZero_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &HealthBelowZero_Parms.Momentum, &Momentum, 0xC );
		HealthBelowZero_Parms.DamageType = DamageType;
		memcpy( &HealthBelowZero_Parms.HitInfo, &HitInfo, 0x1C );
		HealthBelowZero_Parms.DamageCauser = DamageCauser;
		memcpy( &HealthBelowZero_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnHealthBelowZero, &HealthBelowZero_Parms, NULL );
	};

	class AController* SetKillInstigator ( class AController* InstigatedBy, class UClass* DamageType )
	{
		static UFunction* pfnSetKillInstigator = NULL;

		if ( !pfnSetKillInstigator )
			pfnSetKillInstigator = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetKillInstigator" );

		APawn_execSetKillInstigator_Parms SetKillInstigator_Parms;
		SetKillInstigator_Parms.InstigatedBy = InstigatedBy;
		SetKillInstigator_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnSetKillInstigator, &SetKillInstigator_Parms, NULL );

		return SetKillInstigator_Parms.ReturnValue;
	};

	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
	{
		static UFunction* pfnNotifyTakeHit = NULL;

		if ( !pfnNotifyTakeHit )
			pfnNotifyTakeHit = UObject::FindObject< UFunction >( "Function Engine.Pawn.NotifyTakeHit" );

		APawn_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
		NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
		NotifyTakeHit_Parms.Damage = Damage;
		NotifyTakeHit_Parms.DamageType = DamageType;
		memcpy( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

		this->ProcessEvent( pfnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
	};

	bool eventTakeRadiusDamageOnBones ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, TArray< struct FName > Bones )
	{
		static UFunction* pfnTakeRadiusDamageOnBones = NULL;

		if ( !pfnTakeRadiusDamageOnBones )
			pfnTakeRadiusDamageOnBones = UObject::FindObject< UFunction >( "Function Engine.Pawn.TakeRadiusDamageOnBones" );

		APawn_eventTakeRadiusDamageOnBones_Parms TakeRadiusDamageOnBones_Parms;
		TakeRadiusDamageOnBones_Parms.InstigatedBy = InstigatedBy;
		TakeRadiusDamageOnBones_Parms.BaseDamage = BaseDamage;
		TakeRadiusDamageOnBones_Parms.DamageRadius = DamageRadius;
		TakeRadiusDamageOnBones_Parms.DamageType = DamageType;
		TakeRadiusDamageOnBones_Parms.Momentum = Momentum;
		memcpy( &TakeRadiusDamageOnBones_Parms.HurtOrigin, &HurtOrigin, 0xC );
		TakeRadiusDamageOnBones_Parms.bFullDamage = bFullDamage;
		TakeRadiusDamageOnBones_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeRadiusDamageOnBones_Parms.Bones, &Bones, 0xC );

		this->ProcessEvent( pfnTakeRadiusDamageOnBones, &TakeRadiusDamageOnBones_Parms, NULL );

		return TakeRadiusDamageOnBones_Parms.ReturnValue;
	};

	void PruneDamagedBoneList ( TArray< struct FName >* Bones )
	{
		static UFunction* pfnPruneDamagedBoneList = NULL;

		if ( !pfnPruneDamagedBoneList )
			pfnPruneDamagedBoneList = UObject::FindObject< UFunction >( "Function Engine.Pawn.PruneDamagedBoneList" );

		APawn_execPruneDamagedBoneList_Parms PruneDamagedBoneList_Parms;

		this->ProcessEvent( pfnPruneDamagedBoneList, &PruneDamagedBoneList_Parms, NULL );

		if ( Bones )
			memcpy( Bones, &PruneDamagedBoneList_Parms.Bones, 0xC ); // CPF_OutParm
	};

	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
	{
		static UFunction* pfnHealDamage = NULL;

		if ( !pfnHealDamage )
			pfnHealDamage = UObject::FindObject< UFunction >( "Function Engine.Pawn.HealDamage" );

		APawn_execHealDamage_Parms HealDamage_Parms;
		HealDamage_Parms.Amount = Amount;
		HealDamage_Parms.Healer = Healer;
		HealDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnHealDamage, &HealDamage_Parms, NULL );

		return HealDamage_Parms.ReturnValue;
	};

	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, int* inDamage, struct FVector* Momentum )
	{
		static UFunction* pfnAdjustDamage = NULL;

		if ( !pfnAdjustDamage )
			pfnAdjustDamage = UObject::FindObject< UFunction >( "Function Engine.Pawn.AdjustDamage" );

		APawn_execAdjustDamage_Parms AdjustDamage_Parms;
		AdjustDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &AdjustDamage_Parms.HitLocation, &HitLocation, 0xC );
		AdjustDamage_Parms.DamageType = DamageType;
		memcpy( &AdjustDamage_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnAdjustDamage, &AdjustDamage_Parms, NULL );

		if ( inDamage )
			*inDamage = AdjustDamage_Parms.inDamage; // CPF_OutParm
		if ( Momentum )
			memcpy( Momentum, &AdjustDamage_Parms.Momentum, 0xC ); // CPF_OutParm
	};

	void SetMovementPhysics ()
	{
		static UFunction* pfnSetMovementPhysics = NULL;

		if ( !pfnSetMovementPhysics )
			pfnSetMovementPhysics = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetMovementPhysics" );

		APawn_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

		this->ProcessEvent( pfnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
	};

	void Gasp ()
	{
		static UFunction* pfnGasp = NULL;

		if ( !pfnGasp )
			pfnGasp = UObject::FindObject< UFunction >( "Function Engine.Pawn.Gasp" );

		APawn_execGasp_Parms Gasp_Parms;

		this->ProcessEvent( pfnGasp, &Gasp_Parms, NULL );
	};

	void OnGiveInventory ( void* inAction )
	{
		static UFunction* pfnOnGiveInventory = NULL;

		if ( !pfnOnGiveInventory )
			pfnOnGiveInventory = UObject::FindObject< UFunction >( "Function Engine.Pawn.OnGiveInventory" );

		APawn_execOnGiveInventory_Parms OnGiveInventory_Parms;
		OnGiveInventory_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnGiveInventory, &OnGiveInventory_Parms, NULL );
	};

	void OnAssignController ( void* inAction )
	{
		static UFunction* pfnOnAssignController = NULL;

		if ( !pfnOnAssignController )
			pfnOnAssignController = UObject::FindObject< UFunction >( "Function Engine.Pawn.OnAssignController" );

		APawn_execOnAssignController_Parms OnAssignController_Parms;
		OnAssignController_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnAssignController, &OnAssignController_Parms, NULL );
	};

	void SpawnDefaultController ()
	{
		static UFunction* pfnSpawnDefaultController = NULL;

		if ( !pfnSpawnDefaultController )
			pfnSpawnDefaultController = UObject::FindObject< UFunction >( "Function Engine.Pawn.SpawnDefaultController" );

		APawn_execSpawnDefaultController_Parms SpawnDefaultController_Parms;

		this->ProcessEvent( pfnSpawnDefaultController, &SpawnDefaultController_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Pawn.PostBeginPlay" );

		APawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Pawn.PreBeginPlay" );

		APawn_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Pawn.Destroyed" );

		APawn_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void DetachFromController ( unsigned long bDestroyController/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDetachFromController = NULL;

		if ( !pfnDetachFromController )
			pfnDetachFromController = UObject::FindObject< UFunction >( "Function Engine.Pawn.DetachFromController" );

		APawn_execDetachFromController_Parms DetachFromController_Parms;
		DetachFromController_Parms.bDestroyController = bDestroyController;

		this->ProcessEvent( pfnDetachFromController, &DetachFromController_Parms, NULL );
	};

	void CrushedBy ( class APawn* OtherPawn )
	{
		static UFunction* pfnCrushedBy = NULL;

		if ( !pfnCrushedBy )
			pfnCrushedBy = UObject::FindObject< UFunction >( "Function Engine.Pawn.CrushedBy" );

		APawn_execCrushedBy_Parms CrushedBy_Parms;
		CrushedBy_Parms.OtherPawn = OtherPawn;

		this->ProcessEvent( pfnCrushedBy, &CrushedBy_Parms, NULL );
	};

	bool CanBeBaseForPawn ( class APawn* aPawn )
	{
		static UFunction* pfnCanBeBaseForPawn = NULL;

		if ( !pfnCanBeBaseForPawn )
			pfnCanBeBaseForPawn = UObject::FindObject< UFunction >( "Function Engine.Pawn.CanBeBaseForPawn" );

		APawn_execCanBeBaseForPawn_Parms CanBeBaseForPawn_Parms;
		CanBeBaseForPawn_Parms.aPawn = aPawn;

		this->ProcessEvent( pfnCanBeBaseForPawn, &CanBeBaseForPawn_Parms, NULL );

		return CanBeBaseForPawn_Parms.ReturnValue;
	};

	void eventBaseChange ()
	{
		static UFunction* pfnBaseChange = NULL;

		if ( !pfnBaseChange )
			pfnBaseChange = UObject::FindObject< UFunction >( "Function Engine.Pawn.BaseChange" );

		APawn_eventBaseChange_Parms BaseChange_Parms;

		this->ProcessEvent( pfnBaseChange, &BaseChange_Parms, NULL );
	};

	void eventStuckOnPawn ( class APawn* OtherPawn )
	{
		static UFunction* pfnStuckOnPawn = NULL;

		if ( !pfnStuckOnPawn )
			pfnStuckOnPawn = UObject::FindObject< UFunction >( "Function Engine.Pawn.StuckOnPawn" );

		APawn_eventStuckOnPawn_Parms StuckOnPawn_Parms;
		StuckOnPawn_Parms.OtherPawn = OtherPawn;

		this->ProcessEvent( pfnStuckOnPawn, &StuckOnPawn_Parms, NULL );
	};

	void JumpOffPawn ()
	{
		static UFunction* pfnJumpOffPawn = NULL;

		if ( !pfnJumpOffPawn )
			pfnJumpOffPawn = UObject::FindObject< UFunction >( "Function Engine.Pawn.JumpOffPawn" );

		APawn_execJumpOffPawn_Parms JumpOffPawn_Parms;

		this->ProcessEvent( pfnJumpOffPawn, &JumpOffPawn_Parms, NULL );
	};

	void gibbedBy ( class AActor* Other )
	{
		static UFunction* pfngibbedBy = NULL;

		if ( !pfngibbedBy )
			pfngibbedBy = UObject::FindObject< UFunction >( "Function Engine.Pawn.gibbedBy" );

		APawn_execgibbedBy_Parms gibbedBy_Parms;
		gibbedBy_Parms.Other = Other;

		this->ProcessEvent( pfngibbedBy, &gibbedBy_Parms, NULL );
	};

	void eventEncroachedBy ( class AActor* Other )
	{
		static UFunction* pfnEncroachedBy = NULL;

		if ( !pfnEncroachedBy )
			pfnEncroachedBy = UObject::FindObject< UFunction >( "Function Engine.Pawn.EncroachedBy" );

		APawn_eventEncroachedBy_Parms EncroachedBy_Parms;
		EncroachedBy_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachedBy, &EncroachedBy_Parms, NULL );
	};

	bool eventEncroachingOn ( class AActor* Other )
	{
		static UFunction* pfnEncroachingOn = NULL;

		if ( !pfnEncroachingOn )
			pfnEncroachingOn = UObject::FindObject< UFunction >( "Function Engine.Pawn.EncroachingOn" );

		APawn_eventEncroachingOn_Parms EncroachingOn_Parms;
		EncroachingOn_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachingOn, &EncroachingOn_Parms, NULL );

		return EncroachingOn_Parms.ReturnValue;
	};

	void FaceRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFaceRotation = NULL;

		if ( !pfnFaceRotation )
			pfnFaceRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.FaceRotation" );

		APawn_execFaceRotation_Parms FaceRotation_Parms;
		memcpy( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
		FaceRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFaceRotation, &FaceRotation_Parms, NULL );
	};

	void ClientSetRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnClientSetRotation = NULL;

		if ( !pfnClientSetRotation )
			pfnClientSetRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClientSetRotation" );

		APawn_execClientSetRotation_Parms ClientSetRotation_Parms;
		memcpy( &ClientSetRotation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnClientSetRotation, &ClientSetRotation_Parms, NULL );
	};

	void ClientSetLocation ( struct FVector NewLocation, struct FRotator NewRotation )
	{
		static UFunction* pfnClientSetLocation = NULL;

		if ( !pfnClientSetLocation )
			pfnClientSetLocation = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClientSetLocation" );

		APawn_execClientSetLocation_Parms ClientSetLocation_Parms;
		memcpy( &ClientSetLocation_Parms.NewLocation, &NewLocation, 0xC );
		memcpy( &ClientSetLocation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnClientSetLocation, &ClientSetLocation_Parms, NULL );
	};

	void ClientRestart ()
	{
		static UFunction* pfnClientRestart = NULL;

		if ( !pfnClientRestart )
			pfnClientRestart = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClientRestart" );

		APawn_execClientRestart_Parms ClientRestart_Parms;

		this->ProcessEvent( pfnClientRestart, &ClientRestart_Parms, NULL );
	};

	void Restart ()
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function Engine.Pawn.Restart" );

		APawn_execRestart_Parms Restart_Parms;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	void TakeFallingDamage ()
	{
		static UFunction* pfnTakeFallingDamage = NULL;

		if ( !pfnTakeFallingDamage )
			pfnTakeFallingDamage = UObject::FindObject< UFunction >( "Function Engine.Pawn.TakeFallingDamage" );

		APawn_execTakeFallingDamage_Parms TakeFallingDamage_Parms;

		this->ProcessEvent( pfnTakeFallingDamage, &TakeFallingDamage_Parms, NULL );
	};

	void KilledBy ( class APawn* EventInstigator )
	{
		static UFunction* pfnKilledBy = NULL;

		if ( !pfnKilledBy )
			pfnKilledBy = UObject::FindObject< UFunction >( "Function Engine.Pawn.KilledBy" );

		APawn_execKilledBy_Parms KilledBy_Parms;
		KilledBy_Parms.EventInstigator = EventInstigator;

		this->ProcessEvent( pfnKilledBy, &KilledBy_Parms, NULL );
	};

	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddVelocity = NULL;

		if ( !pfnAddVelocity )
			pfnAddVelocity = UObject::FindObject< UFunction >( "Function Engine.Pawn.AddVelocity" );

		APawn_execAddVelocity_Parms AddVelocity_Parms;
		memcpy( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
		memcpy( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
		AddVelocity_Parms.DamageType = DamageType;
		memcpy( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnAddVelocity, &AddVelocity_Parms, NULL );
	};

	void RestartPlayer ()
	{
		static UFunction* pfnRestartPlayer = NULL;

		if ( !pfnRestartPlayer )
			pfnRestartPlayer = UObject::FindObject< UFunction >( "Function Engine.Pawn.RestartPlayer" );

		APawn_execRestartPlayer_Parms RestartPlayer_Parms;

		this->ProcessEvent( pfnRestartPlayer, &RestartPlayer_Parms, NULL );
	};

	void eventStartCrouch ( float HeightAdjust )
	{
		static UFunction* pfnStartCrouch = NULL;

		if ( !pfnStartCrouch )
			pfnStartCrouch = UObject::FindObject< UFunction >( "Function Engine.Pawn.StartCrouch" );

		APawn_eventStartCrouch_Parms StartCrouch_Parms;
		StartCrouch_Parms.HeightAdjust = HeightAdjust;

		this->ProcessEvent( pfnStartCrouch, &StartCrouch_Parms, NULL );
	};

	void eventEndCrouch ( float HeightAdjust )
	{
		static UFunction* pfnEndCrouch = NULL;

		if ( !pfnEndCrouch )
			pfnEndCrouch = UObject::FindObject< UFunction >( "Function Engine.Pawn.EndCrouch" );

		APawn_eventEndCrouch_Parms EndCrouch_Parms;
		EndCrouch_Parms.HeightAdjust = HeightAdjust;

		this->ProcessEvent( pfnEndCrouch, &EndCrouch_Parms, NULL );
	};

	void ShouldCrouch ( unsigned long bCrouch )
	{
		static UFunction* pfnShouldCrouch = NULL;

		if ( !pfnShouldCrouch )
			pfnShouldCrouch = UObject::FindObject< UFunction >( "Function Engine.Pawn.ShouldCrouch" );

		APawn_execShouldCrouch_Parms ShouldCrouch_Parms;
		ShouldCrouch_Parms.bCrouch = bCrouch;

		this->ProcessEvent( pfnShouldCrouch, &ShouldCrouch_Parms, NULL );
	};

	void UnCrouch ()
	{
		static UFunction* pfnUnCrouch = NULL;

		if ( !pfnUnCrouch )
			pfnUnCrouch = UObject::FindObject< UFunction >( "Function Engine.Pawn.UnCrouch" );

		APawn_execUnCrouch_Parms UnCrouch_Parms;

		this->ProcessEvent( pfnUnCrouch, &UnCrouch_Parms, NULL );
	};

	void eventOutsideWorldBounds ()
	{
		static UFunction* pfnOutsideWorldBounds = NULL;

		if ( !pfnOutsideWorldBounds )
			pfnOutsideWorldBounds = UObject::FindObject< UFunction >( "Function Engine.Pawn.OutsideWorldBounds" );

		APawn_eventOutsideWorldBounds_Parms OutsideWorldBounds_Parms;

		this->ProcessEvent( pfnOutsideWorldBounds, &OutsideWorldBounds_Parms, NULL );
	};

	void eventFellOutOfWorld ( class UClass* dmgType )
	{
		static UFunction* pfnFellOutOfWorld = NULL;

		if ( !pfnFellOutOfWorld )
			pfnFellOutOfWorld = UObject::FindObject< UFunction >( "Function Engine.Pawn.FellOutOfWorld" );

		APawn_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
		FellOutOfWorld_Parms.dmgType = dmgType;

		this->ProcessEvent( pfnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
	};

	void eventModifyVelocity ( float DeltaTime, struct FVector OldVelocity )
	{
		static UFunction* pfnModifyVelocity = NULL;

		if ( !pfnModifyVelocity )
			pfnModifyVelocity = UObject::FindObject< UFunction >( "Function Engine.Pawn.ModifyVelocity" );

		APawn_eventModifyVelocity_Parms ModifyVelocity_Parms;
		ModifyVelocity_Parms.DeltaTime = DeltaTime;
		memcpy( &ModifyVelocity_Parms.OldVelocity, &OldVelocity, 0xC );

		this->ProcessEvent( pfnModifyVelocity, &ModifyVelocity_Parms, NULL );
	};

	void JumpOutOfWater ( struct FVector jumpDir )
	{
		static UFunction* pfnJumpOutOfWater = NULL;

		if ( !pfnJumpOutOfWater )
			pfnJumpOutOfWater = UObject::FindObject< UFunction >( "Function Engine.Pawn.JumpOutOfWater" );

		APawn_execJumpOutOfWater_Parms JumpOutOfWater_Parms;
		memcpy( &JumpOutOfWater_Parms.jumpDir, &jumpDir, 0xC );

		this->ProcessEvent( pfnJumpOutOfWater, &JumpOutOfWater_Parms, NULL );
	};

	void FinishedInterpolation ()
	{
		static UFunction* pfnFinishedInterpolation = NULL;

		if ( !pfnFinishedInterpolation )
			pfnFinishedInterpolation = UObject::FindObject< UFunction >( "Function Engine.Pawn.FinishedInterpolation" );

		APawn_execFinishedInterpolation_Parms FinishedInterpolation_Parms;

		this->ProcessEvent( pfnFinishedInterpolation, &FinishedInterpolation_Parms, NULL );
	};

	void eventClientMessage ( struct FString S, struct FName Type/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientMessage = NULL;

		if ( !pfnClientMessage )
			pfnClientMessage = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClientMessage" );

		APawn_eventClientMessage_Parms ClientMessage_Parms;
		memcpy( &ClientMessage_Parms.S, &S, 0xC );
		memcpy( &ClientMessage_Parms.Type, &Type, 0x8 );

		this->ProcessEvent( pfnClientMessage, &ClientMessage_Parms, NULL );
	};

	void ReceiveLocalizedMessage ( class UClass* Message, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnReceiveLocalizedMessage = NULL;

		if ( !pfnReceiveLocalizedMessage )
			pfnReceiveLocalizedMessage = UObject::FindObject< UFunction >( "Function Engine.Pawn.ReceiveLocalizedMessage" );

		APawn_execReceiveLocalizedMessage_Parms ReceiveLocalizedMessage_Parms;
		ReceiveLocalizedMessage_Parms.Message = Message;
		ReceiveLocalizedMessage_Parms.Switch = Switch;
		ReceiveLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		ReceiveLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		ReceiveLocalizedMessage_Parms.OptionalObject = OptionalObject;
		ReceiveLocalizedMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnReceiveLocalizedMessage, &ReceiveLocalizedMessage_Parms, NULL );
	};

	void HandlePickup ( class AInventory* Inv )
	{
		static UFunction* pfnHandlePickup = NULL;

		if ( !pfnHandlePickup )
			pfnHandlePickup = UObject::FindObject< UFunction >( "Function Engine.Pawn.HandlePickup" );

		APawn_execHandlePickup_Parms HandlePickup_Parms;
		HandlePickup_Parms.Inv = Inv;

		this->ProcessEvent( pfnHandlePickup, &HandlePickup_Parms, NULL );
	};

	float AdjustedStrength ()
	{
		static UFunction* pfnAdjustedStrength = NULL;

		if ( !pfnAdjustedStrength )
			pfnAdjustedStrength = UObject::FindObject< UFunction >( "Function Engine.Pawn.AdjustedStrength" );

		APawn_execAdjustedStrength_Parms AdjustedStrength_Parms;

		this->ProcessEvent( pfnAdjustedStrength, &AdjustedStrength_Parms, NULL );

		return AdjustedStrength_Parms.ReturnValue;
	};

	bool LineOfSightTo ( class AActor* Other )
	{
		static UFunction* pfnLineOfSightTo = NULL;

		if ( !pfnLineOfSightTo )
			pfnLineOfSightTo = UObject::FindObject< UFunction >( "Function Engine.Pawn.LineOfSightTo" );

		APawn_execLineOfSightTo_Parms LineOfSightTo_Parms;
		LineOfSightTo_Parms.Other = Other;

		this->ProcessEvent( pfnLineOfSightTo, &LineOfSightTo_Parms, NULL );

		return LineOfSightTo_Parms.ReturnValue;
	};

	void SetMoveTarget ( class AActor* NewTarget )
	{
		static UFunction* pfnSetMoveTarget = NULL;

		if ( !pfnSetMoveTarget )
			pfnSetMoveTarget = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetMoveTarget" );

		APawn_execSetMoveTarget_Parms SetMoveTarget_Parms;
		SetMoveTarget_Parms.NewTarget = NewTarget;

		this->ProcessEvent( pfnSetMoveTarget, &SetMoveTarget_Parms, NULL );
	};

	class AActor* GetMoveTarget ()
	{
		static UFunction* pfnGetMoveTarget = NULL;

		if ( !pfnGetMoveTarget )
			pfnGetMoveTarget = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetMoveTarget" );

		APawn_execGetMoveTarget_Parms GetMoveTarget_Parms;

		this->ProcessEvent( pfnGetMoveTarget, &GetMoveTarget_Parms, NULL );

		return GetMoveTarget_Parms.ReturnValue;
	};

	bool NearMoveTarget ()
	{
		static UFunction* pfnNearMoveTarget = NULL;

		if ( !pfnNearMoveTarget )
			pfnNearMoveTarget = UObject::FindObject< UFunction >( "Function Engine.Pawn.NearMoveTarget" );

		APawn_execNearMoveTarget_Parms NearMoveTarget_Parms;

		this->ProcessEvent( pfnNearMoveTarget, &NearMoveTarget_Parms, NULL );

		return NearMoveTarget_Parms.ReturnValue;
	};

	bool AffectedByHitEffects ()
	{
		static UFunction* pfnAffectedByHitEffects = NULL;

		if ( !pfnAffectedByHitEffects )
			pfnAffectedByHitEffects = UObject::FindObject< UFunction >( "Function Engine.Pawn.AffectedByHitEffects" );

		APawn_execAffectedByHitEffects_Parms AffectedByHitEffects_Parms;

		this->ProcessEvent( pfnAffectedByHitEffects, &AffectedByHitEffects_Parms, NULL );

		return AffectedByHitEffects_Parms.ReturnValue;
	};

	bool InGodMode ()
	{
		static UFunction* pfnInGodMode = NULL;

		if ( !pfnInGodMode )
			pfnInGodMode = UObject::FindObject< UFunction >( "Function Engine.Pawn.InGodMode" );

		APawn_execInGodMode_Parms InGodMode_Parms;

		this->ProcessEvent( pfnInGodMode, &InGodMode_Parms, NULL );

		return InGodMode_Parms.ReturnValue;
	};

	bool PawnCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
	{
		static UFunction* pfnPawnCalcCamera = NULL;

		if ( !pfnPawnCalcCamera )
			pfnPawnCalcCamera = UObject::FindObject< UFunction >( "Function Engine.Pawn.PawnCalcCamera" );

		APawn_execPawnCalcCamera_Parms PawnCalcCamera_Parms;
		PawnCalcCamera_Parms.fDeltaTime = fDeltaTime;

		this->ProcessEvent( pfnPawnCalcCamera, &PawnCalcCamera_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &PawnCalcCamera_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &PawnCalcCamera_Parms.out_CamRot, 0xC ); // CPF_OutParm
		if ( out_FOV )
			*out_FOV = PawnCalcCamera_Parms.out_FOV; // CPF_OutParm

		return PawnCalcCamera_Parms.ReturnValue;
	};

	void SetViewRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnSetViewRotation = NULL;

		if ( !pfnSetViewRotation )
			pfnSetViewRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetViewRotation" );

		APawn_execSetViewRotation_Parms SetViewRotation_Parms;
		memcpy( &SetViewRotation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnSetViewRotation, &SetViewRotation_Parms, NULL );
	};

	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc )
	{
		static UFunction* pfnGetAdjustedAimFor = NULL;

		if ( !pfnGetAdjustedAimFor )
			pfnGetAdjustedAimFor = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetAdjustedAimFor" );

		APawn_execGetAdjustedAimFor_Parms GetAdjustedAimFor_Parms;
		GetAdjustedAimFor_Parms.W = W;
		memcpy( &GetAdjustedAimFor_Parms.StartFireLoc, &StartFireLoc, 0xC );

		this->ProcessEvent( pfnGetAdjustedAimFor, &GetAdjustedAimFor_Parms, NULL );

		return GetAdjustedAimFor_Parms.ReturnValue;
	};

	bool eventInFreeCam ()
	{
		static UFunction* pfnInFreeCam = NULL;

		if ( !pfnInFreeCam )
			pfnInFreeCam = UObject::FindObject< UFunction >( "Function Engine.Pawn.InFreeCam" );

		APawn_eventInFreeCam_Parms InFreeCam_Parms;

		this->ProcessEvent( pfnInFreeCam, &InFreeCam_Parms, NULL );

		return InFreeCam_Parms.ReturnValue;
	};

	struct FRotator eventGetBaseAimRotation ()
	{
		static UFunction* pfnGetBaseAimRotation = NULL;

		if ( !pfnGetBaseAimRotation )
			pfnGetBaseAimRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetBaseAimRotation" );

		APawn_eventGetBaseAimRotation_Parms GetBaseAimRotation_Parms;

		this->ProcessEvent( pfnGetBaseAimRotation, &GetBaseAimRotation_Parms, NULL );

		return GetBaseAimRotation_Parms.ReturnValue;
	};

	struct FVector eventGetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetWeaponStartTraceLocation = NULL;

		if ( !pfnGetWeaponStartTraceLocation )
			pfnGetWeaponStartTraceLocation = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetWeaponStartTraceLocation" );

		APawn_eventGetWeaponStartTraceLocation_Parms GetWeaponStartTraceLocation_Parms;
		GetWeaponStartTraceLocation_Parms.CurrentWeapon = CurrentWeapon;

		this->ProcessEvent( pfnGetWeaponStartTraceLocation, &GetWeaponStartTraceLocation_Parms, NULL );

		return GetWeaponStartTraceLocation_Parms.ReturnValue;
	};

	struct FVector eventGetPawnViewLocation ()
	{
		static UFunction* pfnGetPawnViewLocation = NULL;

		if ( !pfnGetPawnViewLocation )
			pfnGetPawnViewLocation = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetPawnViewLocation" );

		APawn_eventGetPawnViewLocation_Parms GetPawnViewLocation_Parms;

		pfnGetPawnViewLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPawnViewLocation, &GetPawnViewLocation_Parms, NULL );
		pfnGetPawnViewLocation->FunctionFlags |= 0x400;

		return GetPawnViewLocation_Parms.ReturnValue;
	};

	struct FRotator eventGetViewRotation ()
	{
		static UFunction* pfnGetViewRotation = NULL;

		if ( !pfnGetViewRotation )
			pfnGetViewRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetViewRotation" );

		APawn_eventGetViewRotation_Parms GetViewRotation_Parms;

		pfnGetViewRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetViewRotation, &GetViewRotation_Parms, NULL );
		pfnGetViewRotation->FunctionFlags |= 0x400;

		return GetViewRotation_Parms.ReturnValue;
	};

	void eventGetActorEyesViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetActorEyesViewPoint = NULL;

		if ( !pfnGetActorEyesViewPoint )
			pfnGetActorEyesViewPoint = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetActorEyesViewPoint" );

		APawn_eventGetActorEyesViewPoint_Parms GetActorEyesViewPoint_Parms;

		this->ProcessEvent( pfnGetActorEyesViewPoint, &GetActorEyesViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetActorEyesViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetActorEyesViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
	{
		static UFunction* pfnProcessViewRotation = NULL;

		if ( !pfnProcessViewRotation )
			pfnProcessViewRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.ProcessViewRotation" );

		APawn_execProcessViewRotation_Parms ProcessViewRotation_Parms;
		ProcessViewRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
		if ( out_DeltaRot )
			memcpy( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC ); // CPF_OutParm
	};

	bool IsFirstPerson ()
	{
		static UFunction* pfnIsFirstPerson = NULL;

		if ( !pfnIsFirstPerson )
			pfnIsFirstPerson = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsFirstPerson" );

		APawn_execIsFirstPerson_Parms IsFirstPerson_Parms;

		this->ProcessEvent( pfnIsFirstPerson, &IsFirstPerson_Parms, NULL );

		return IsFirstPerson_Parms.ReturnValue;
	};

	bool WasPlayerPawn ()
	{
		static UFunction* pfnWasPlayerPawn = NULL;

		if ( !pfnWasPlayerPawn )
			pfnWasPlayerPawn = UObject::FindObject< UFunction >( "Function Engine.Pawn.WasPlayerPawn" );

		APawn_execWasPlayerPawn_Parms WasPlayerPawn_Parms;

		this->ProcessEvent( pfnWasPlayerPawn, &WasPlayerPawn_Parms, NULL );

		return WasPlayerPawn_Parms.ReturnValue;
	};

	bool IsPlayerPawn ()
	{
		static UFunction* pfnIsPlayerPawn = NULL;

		if ( !pfnIsPlayerPawn )
			pfnIsPlayerPawn = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsPlayerPawn" );

		APawn_execIsPlayerPawn_Parms IsPlayerPawn_Parms;

		pfnIsPlayerPawn->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayerPawn, &IsPlayerPawn_Parms, NULL );
		pfnIsPlayerPawn->FunctionFlags |= 0x400;

		return IsPlayerPawn_Parms.ReturnValue;
	};

	bool IsLocallyControlled ()
	{
		static UFunction* pfnIsLocallyControlled = NULL;

		if ( !pfnIsLocallyControlled )
			pfnIsLocallyControlled = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsLocallyControlled" );

		APawn_execIsLocallyControlled_Parms IsLocallyControlled_Parms;

		pfnIsLocallyControlled->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsLocallyControlled, &IsLocallyControlled_Parms, NULL );
		pfnIsLocallyControlled->FunctionFlags |= 0x400;

		return IsLocallyControlled_Parms.ReturnValue;
	};

	bool IsHumanControlled ()
	{
		static UFunction* pfnIsHumanControlled = NULL;

		if ( !pfnIsHumanControlled )
			pfnIsHumanControlled = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsHumanControlled" );

		APawn_execIsHumanControlled_Parms IsHumanControlled_Parms;

		pfnIsHumanControlled->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsHumanControlled, &IsHumanControlled_Parms, NULL );
		pfnIsHumanControlled->FunctionFlags |= 0x400;

		return IsHumanControlled_Parms.ReturnValue;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Pawn.DisplayDebug" );

		APawn_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	void ClimbLadder ( void* L )
	{
		static UFunction* pfnClimbLadder = NULL;

		if ( !pfnClimbLadder )
			pfnClimbLadder = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClimbLadder" );

		APawn_execClimbLadder_Parms ClimbLadder_Parms;
		ClimbLadder_Parms.L = L;

		this->ProcessEvent( pfnClimbLadder, &ClimbLadder_Parms, NULL );
	};

	void EndClimbLadder ( void* OldLadder )
	{
		static UFunction* pfnEndClimbLadder = NULL;

		if ( !pfnEndClimbLadder )
			pfnEndClimbLadder = UObject::FindObject< UFunction >( "Function Engine.Pawn.EndClimbLadder" );

		APawn_execEndClimbLadder_Parms EndClimbLadder_Parms;
		EndClimbLadder_Parms.OldLadder = OldLadder;

		this->ProcessEvent( pfnEndClimbLadder, &EndClimbLadder_Parms, NULL );
	};

	bool CanSplash ()
	{
		static UFunction* pfnCanSplash = NULL;

		if ( !pfnCanSplash )
			pfnCanSplash = UObject::FindObject< UFunction >( "Function Engine.Pawn.CanSplash" );

		APawn_execCanSplash_Parms CanSplash_Parms;

		this->ProcessEvent( pfnCanSplash, &CanSplash_Parms, NULL );

		return CanSplash_Parms.ReturnValue;
	};

	void eventSetWalking ( unsigned long bNewIsWalking )
	{
		static UFunction* pfnSetWalking = NULL;

		if ( !pfnSetWalking )
			pfnSetWalking = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetWalking" );

		APawn_eventSetWalking_Parms SetWalking_Parms;
		SetWalking_Parms.bNewIsWalking = bNewIsWalking;

		this->ProcessEvent( pfnSetWalking, &SetWalking_Parms, NULL );
	};

	float RangedAttackTime ()
	{
		static UFunction* pfnRangedAttackTime = NULL;

		if ( !pfnRangedAttackTime )
			pfnRangedAttackTime = UObject::FindObject< UFunction >( "Function Engine.Pawn.RangedAttackTime" );

		APawn_execRangedAttackTime_Parms RangedAttackTime_Parms;

		this->ProcessEvent( pfnRangedAttackTime, &RangedAttackTime_Parms, NULL );

		return RangedAttackTime_Parms.ReturnValue;
	};

	bool RecommendLongRangedAttack ()
	{
		static UFunction* pfnRecommendLongRangedAttack = NULL;

		if ( !pfnRecommendLongRangedAttack )
			pfnRecommendLongRangedAttack = UObject::FindObject< UFunction >( "Function Engine.Pawn.RecommendLongRangedAttack" );

		APawn_execRecommendLongRangedAttack_Parms RecommendLongRangedAttack_Parms;

		this->ProcessEvent( pfnRecommendLongRangedAttack, &RecommendLongRangedAttack_Parms, NULL );

		return RecommendLongRangedAttack_Parms.ReturnValue;
	};

	bool CanGrabLadder ()
	{
		static UFunction* pfnCanGrabLadder = NULL;

		if ( !pfnCanGrabLadder )
			pfnCanGrabLadder = UObject::FindObject< UFunction >( "Function Engine.Pawn.CanGrabLadder" );

		APawn_execCanGrabLadder_Parms CanGrabLadder_Parms;

		this->ProcessEvent( pfnCanGrabLadder, &CanGrabLadder_Parms, NULL );

		return CanGrabLadder_Parms.ReturnValue;
	};

	void DropToGround ()
	{
		static UFunction* pfnDropToGround = NULL;

		if ( !pfnDropToGround )
			pfnDropToGround = UObject::FindObject< UFunction >( "Function Engine.Pawn.DropToGround" );

		APawn_execDropToGround_Parms DropToGround_Parms;

		this->ProcessEvent( pfnDropToGround, &DropToGround_Parms, NULL );
	};

	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy )
	{
		static UFunction* pfnGetDefaultCameraMode = NULL;

		if ( !pfnGetDefaultCameraMode )
			pfnGetDefaultCameraMode = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetDefaultCameraMode" );

		APawn_execGetDefaultCameraMode_Parms GetDefaultCameraMode_Parms;
		GetDefaultCameraMode_Parms.RequestedBy = RequestedBy;

		this->ProcessEvent( pfnGetDefaultCameraMode, &GetDefaultCameraMode_Parms, NULL );

		return GetDefaultCameraMode_Parms.ReturnValue;
	};

	void UnPossessed ()
	{
		static UFunction* pfnUnPossessed = NULL;

		if ( !pfnUnPossessed )
			pfnUnPossessed = UObject::FindObject< UFunction >( "Function Engine.Pawn.UnPossessed" );

		APawn_execUnPossessed_Parms UnPossessed_Parms;

		this->ProcessEvent( pfnUnPossessed, &UnPossessed_Parms, NULL );
	};

	void UpdateControllerOnPossess ( unsigned long bVehicleTransition )
	{
		static UFunction* pfnUpdateControllerOnPossess = NULL;

		if ( !pfnUpdateControllerOnPossess )
			pfnUpdateControllerOnPossess = UObject::FindObject< UFunction >( "Function Engine.Pawn.UpdateControllerOnPossess" );

		APawn_execUpdateControllerOnPossess_Parms UpdateControllerOnPossess_Parms;
		UpdateControllerOnPossess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnUpdateControllerOnPossess, &UpdateControllerOnPossess_Parms, NULL );
	};

	void PossessedBy ( class AController* C, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossessedBy = NULL;

		if ( !pfnPossessedBy )
			pfnPossessedBy = UObject::FindObject< UFunction >( "Function Engine.Pawn.PossessedBy" );

		APawn_execPossessedBy_Parms PossessedBy_Parms;
		PossessedBy_Parms.C = C;
		PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossessedBy, &PossessedBy_Parms, NULL );
	};

	void NotifyTeamChanged ()
	{
		static UFunction* pfnNotifyTeamChanged = NULL;

		if ( !pfnNotifyTeamChanged )
			pfnNotifyTeamChanged = UObject::FindObject< UFunction >( "Function Engine.Pawn.NotifyTeamChanged" );

		APawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

		this->ProcessEvent( pfnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
	};

	void PlayTeleportEffect ( unsigned long bOut, unsigned long bSound )
	{
		static UFunction* pfnPlayTeleportEffect = NULL;

		if ( !pfnPlayTeleportEffect )
			pfnPlayTeleportEffect = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayTeleportEffect" );

		APawn_execPlayTeleportEffect_Parms PlayTeleportEffect_Parms;
		PlayTeleportEffect_Parms.bOut = bOut;
		PlayTeleportEffect_Parms.bSound = bSound;

		this->ProcessEvent( pfnPlayTeleportEffect, &PlayTeleportEffect_Parms, NULL );
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetHumanReadableName" );

		APawn_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	bool NeedToTurn ( struct FVector targ )
	{
		static UFunction* pfnNeedToTurn = NULL;

		if ( !pfnNeedToTurn )
			pfnNeedToTurn = UObject::FindObject< UFunction >( "Function Engine.Pawn.NeedToTurn" );

		APawn_execNeedToTurn_Parms NeedToTurn_Parms;
		memcpy( &NeedToTurn_Parms.targ, &targ, 0xC );

		this->ProcessEvent( pfnNeedToTurn, &NeedToTurn_Parms, NULL );

		return NeedToTurn_Parms.ReturnValue;
	};

	bool IsFiring ()
	{
		static UFunction* pfnIsFiring = NULL;

		if ( !pfnIsFiring )
			pfnIsFiring = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsFiring" );

		APawn_execIsFiring_Parms IsFiring_Parms;

		this->ProcessEvent( pfnIsFiring, &IsFiring_Parms, NULL );

		return IsFiring_Parms.ReturnValue;
	};

	bool HasRangedAttack ()
	{
		static UFunction* pfnHasRangedAttack = NULL;

		if ( !pfnHasRangedAttack )
			pfnHasRangedAttack = UObject::FindObject< UFunction >( "Function Engine.Pawn.HasRangedAttack" );

		APawn_execHasRangedAttack_Parms HasRangedAttack_Parms;

		this->ProcessEvent( pfnHasRangedAttack, &HasRangedAttack_Parms, NULL );

		return HasRangedAttack_Parms.ReturnValue;
	};

	bool FireOnRelease ()
	{
		static UFunction* pfnFireOnRelease = NULL;

		if ( !pfnFireOnRelease )
			pfnFireOnRelease = UObject::FindObject< UFunction >( "Function Engine.Pawn.FireOnRelease" );

		APawn_execFireOnRelease_Parms FireOnRelease_Parms;

		this->ProcessEvent( pfnFireOnRelease, &FireOnRelease_Parms, NULL );

		return FireOnRelease_Parms.ReturnValue;
	};

	bool TooCloseToAttack ( class AActor* Other )
	{
		static UFunction* pfnTooCloseToAttack = NULL;

		if ( !pfnTooCloseToAttack )
			pfnTooCloseToAttack = UObject::FindObject< UFunction >( "Function Engine.Pawn.TooCloseToAttack" );

		APawn_execTooCloseToAttack_Parms TooCloseToAttack_Parms;
		TooCloseToAttack_Parms.Other = Other;

		this->ProcessEvent( pfnTooCloseToAttack, &TooCloseToAttack_Parms, NULL );

		return TooCloseToAttack_Parms.ReturnValue;
	};

	bool CanAttack ( class AActor* Other )
	{
		static UFunction* pfnCanAttack = NULL;

		if ( !pfnCanAttack )
			pfnCanAttack = UObject::FindObject< UFunction >( "Function Engine.Pawn.CanAttack" );

		APawn_execCanAttack_Parms CanAttack_Parms;
		CanAttack_Parms.Other = Other;

		this->ProcessEvent( pfnCanAttack, &CanAttack_Parms, NULL );

		return CanAttack_Parms.ReturnValue;
	};

	unsigned char ChooseFireMode ()
	{
		static UFunction* pfnChooseFireMode = NULL;

		if ( !pfnChooseFireMode )
			pfnChooseFireMode = UObject::FindObject< UFunction >( "Function Engine.Pawn.ChooseFireMode" );

		APawn_execChooseFireMode_Parms ChooseFireMode_Parms;

		this->ProcessEvent( pfnChooseFireMode, &ChooseFireMode_Parms, NULL );

		return ChooseFireMode_Parms.ReturnValue;
	};

	bool BotFire ( unsigned long bFinished )
	{
		static UFunction* pfnBotFire = NULL;

		if ( !pfnBotFire )
			pfnBotFire = UObject::FindObject< UFunction >( "Function Engine.Pawn.BotFire" );

		APawn_execBotFire_Parms BotFire_Parms;
		BotFire_Parms.bFinished = bFinished;

		this->ProcessEvent( pfnBotFire, &BotFire_Parms, NULL );

		return BotFire_Parms.ReturnValue;
	};

	void WeaponStoppedFiring ( unsigned long bViaReplication )
	{
		static UFunction* pfnWeaponStoppedFiring = NULL;

		if ( !pfnWeaponStoppedFiring )
			pfnWeaponStoppedFiring = UObject::FindObject< UFunction >( "Function Engine.Pawn.WeaponStoppedFiring" );

		APawn_execWeaponStoppedFiring_Parms WeaponStoppedFiring_Parms;
		WeaponStoppedFiring_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnWeaponStoppedFiring, &WeaponStoppedFiring_Parms, NULL );
	};

	void WeaponFired ( unsigned long bViaReplication, struct FVector StartTraceLocation/*CPF_OptionalParm*/, struct FVector EndTraceLocation/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnWeaponFired = NULL;

		if ( !pfnWeaponFired )
			pfnWeaponFired = UObject::FindObject< UFunction >( "Function Engine.Pawn.WeaponFired" );

		APawn_execWeaponFired_Parms WeaponFired_Parms;
		WeaponFired_Parms.bViaReplication = bViaReplication;
		memcpy( &WeaponFired_Parms.StartTraceLocation, &StartTraceLocation, 0xC );
		memcpy( &WeaponFired_Parms.EndTraceLocation, &EndTraceLocation, 0xC );
		memcpy( &WeaponFired_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnWeaponFired, &WeaponFired_Parms, NULL );
	};

	void FlashLocationUpdated ( unsigned long bViaReplication )
	{
		static UFunction* pfnFlashLocationUpdated = NULL;

		if ( !pfnFlashLocationUpdated )
			pfnFlashLocationUpdated = UObject::FindObject< UFunction >( "Function Engine.Pawn.FlashLocationUpdated" );

		APawn_execFlashLocationUpdated_Parms FlashLocationUpdated_Parms;
		FlashLocationUpdated_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnFlashLocationUpdated, &FlashLocationUpdated_Parms, NULL );
	};

	void FlashCountUpdated ( unsigned long bViaReplication )
	{
		static UFunction* pfnFlashCountUpdated = NULL;

		if ( !pfnFlashCountUpdated )
			pfnFlashCountUpdated = UObject::FindObject< UFunction >( "Function Engine.Pawn.FlashCountUpdated" );

		APawn_execFlashCountUpdated_Parms FlashCountUpdated_Parms;
		FlashCountUpdated_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnFlashCountUpdated, &FlashCountUpdated_Parms, NULL );
	};

	void ClearFlashLocation ( class AWeapon* Who )
	{
		static UFunction* pfnClearFlashLocation = NULL;

		if ( !pfnClearFlashLocation )
			pfnClearFlashLocation = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClearFlashLocation" );

		APawn_execClearFlashLocation_Parms ClearFlashLocation_Parms;
		ClearFlashLocation_Parms.Who = Who;

		this->ProcessEvent( pfnClearFlashLocation, &ClearFlashLocation_Parms, NULL );
	};

	void SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewStartTraceLoc, struct FVector NewLoc, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnSetFlashLocation = NULL;

		if ( !pfnSetFlashLocation )
			pfnSetFlashLocation = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetFlashLocation" );

		APawn_execSetFlashLocation_Parms SetFlashLocation_Parms;
		SetFlashLocation_Parms.Who = Who;
		SetFlashLocation_Parms.FireModeNum = FireModeNum;
		memcpy( &SetFlashLocation_Parms.NewStartTraceLoc, &NewStartTraceLoc, 0xC );
		memcpy( &SetFlashLocation_Parms.NewLoc, &NewLoc, 0xC );
		memcpy( &SetFlashLocation_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnSetFlashLocation, &SetFlashLocation_Parms, NULL );
	};

	void ClearFlashCount ( class AWeapon* Who )
	{
		static UFunction* pfnClearFlashCount = NULL;

		if ( !pfnClearFlashCount )
			pfnClearFlashCount = UObject::FindObject< UFunction >( "Function Engine.Pawn.ClearFlashCount" );

		APawn_execClearFlashCount_Parms ClearFlashCount_Parms;
		ClearFlashCount_Parms.Who = Who;

		this->ProcessEvent( pfnClearFlashCount, &ClearFlashCount_Parms, NULL );
	};

	void IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum )
	{
		static UFunction* pfnIncrementFlashCount = NULL;

		if ( !pfnIncrementFlashCount )
			pfnIncrementFlashCount = UObject::FindObject< UFunction >( "Function Engine.Pawn.IncrementFlashCount" );

		APawn_execIncrementFlashCount_Parms IncrementFlashCount_Parms;
		IncrementFlashCount_Parms.Who = Who;
		IncrementFlashCount_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
	};

	void FiringModeUpdated ( unsigned long bViaReplication )
	{
		static UFunction* pfnFiringModeUpdated = NULL;

		if ( !pfnFiringModeUpdated )
			pfnFiringModeUpdated = UObject::FindObject< UFunction >( "Function Engine.Pawn.FiringModeUpdated" );

		APawn_execFiringModeUpdated_Parms FiringModeUpdated_Parms;
		FiringModeUpdated_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnFiringModeUpdated, &FiringModeUpdated_Parms, NULL );
	};

	void SetFiringMode ( unsigned char FiringModeNum )
	{
		static UFunction* pfnSetFiringMode = NULL;

		if ( !pfnSetFiringMode )
			pfnSetFiringMode = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetFiringMode" );

		APawn_execSetFiringMode_Parms SetFiringMode_Parms;
		SetFiringMode_Parms.FiringModeNum = FiringModeNum;

		this->ProcessEvent( pfnSetFiringMode, &SetFiringMode_Parms, NULL );
	};

	void StopFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnStopFire = NULL;

		if ( !pfnStopFire )
			pfnStopFire = UObject::FindObject< UFunction >( "Function Engine.Pawn.StopFire" );

		APawn_execStopFire_Parms StopFire_Parms;
		StopFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopFire, &StopFire_Parms, NULL );
	};

	void StartFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnStartFire = NULL;

		if ( !pfnStartFire )
			pfnStartFire = UObject::FindObject< UFunction >( "Function Engine.Pawn.StartFire" );

		APawn_execStartFire_Parms StartFire_Parms;
		StartFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStartFire, &StartFire_Parms, NULL );
	};

	bool StopFiring ()
	{
		static UFunction* pfnStopFiring = NULL;

		if ( !pfnStopFiring )
			pfnStopFiring = UObject::FindObject< UFunction >( "Function Engine.Pawn.StopFiring" );

		APawn_execStopFiring_Parms StopFiring_Parms;

		this->ProcessEvent( pfnStopFiring, &StopFiring_Parms, NULL );

		return StopFiring_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.Pawn.Reset" );

		APawn_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void PlayerChangedTeam ()
	{
		static UFunction* pfnPlayerChangedTeam = NULL;

		if ( !pfnPlayerChangedTeam )
			pfnPlayerChangedTeam = UObject::FindObject< UFunction >( "Function Engine.Pawn.PlayerChangedTeam" );

		APawn_execPlayerChangedTeam_Parms PlayerChangedTeam_Parms;

		this->ProcessEvent( pfnPlayerChangedTeam, &PlayerChangedTeam_Parms, NULL );
	};

	void SetBaseEyeheight ()
	{
		static UFunction* pfnSetBaseEyeheight = NULL;

		if ( !pfnSetBaseEyeheight )
			pfnSetBaseEyeheight = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetBaseEyeheight" );

		APawn_execSetBaseEyeheight_Parms SetBaseEyeheight_Parms;

		this->ProcessEvent( pfnSetBaseEyeheight, &SetBaseEyeheight_Parms, NULL );
	};

	bool SpecialMoveTo ( class ANavigationPoint* Start, class ANavigationPoint* End, class AActor* Next )
	{
		static UFunction* pfnSpecialMoveTo = NULL;

		if ( !pfnSpecialMoveTo )
			pfnSpecialMoveTo = UObject::FindObject< UFunction >( "Function Engine.Pawn.SpecialMoveTo" );

		APawn_execSpecialMoveTo_Parms SpecialMoveTo_Parms;
		SpecialMoveTo_Parms.Start = Start;
		SpecialMoveTo_Parms.End = End;
		SpecialMoveTo_Parms.Next = Next;

		this->ProcessEvent( pfnSpecialMoveTo, &SpecialMoveTo_Parms, NULL );

		return SpecialMoveTo_Parms.ReturnValue;
	};

	bool TermRagdoll ()
	{
		static UFunction* pfnTermRagdoll = NULL;

		if ( !pfnTermRagdoll )
			pfnTermRagdoll = UObject::FindObject< UFunction >( "Function Engine.Pawn.TermRagdoll" );

		APawn_execTermRagdoll_Parms TermRagdoll_Parms;

		pfnTermRagdoll->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTermRagdoll, &TermRagdoll_Parms, NULL );
		pfnTermRagdoll->FunctionFlags |= 0x400;

		return TermRagdoll_Parms.ReturnValue;
	};

	bool InitRagdoll ()
	{
		static UFunction* pfnInitRagdoll = NULL;

		if ( !pfnInitRagdoll )
			pfnInitRagdoll = UObject::FindObject< UFunction >( "Function Engine.Pawn.InitRagdoll" );

		APawn_execInitRagdoll_Parms InitRagdoll_Parms;

		pfnInitRagdoll->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitRagdoll, &InitRagdoll_Parms, NULL );
		pfnInitRagdoll->FunctionFlags |= 0x400;

		return InitRagdoll_Parms.ReturnValue;
	};

	bool IsValidEnemy ()
	{
		static UFunction* pfnIsValidEnemy = NULL;

		if ( !pfnIsValidEnemy )
			pfnIsValidEnemy = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsValidEnemy" );

		APawn_execIsValidEnemy_Parms IsValidEnemy_Parms;

		this->ProcessEvent( pfnIsValidEnemy, &IsValidEnemy_Parms, NULL );

		return IsValidEnemy_Parms.ReturnValue;
	};

	int SpecialCostForPath ( void* Path )
	{
		static UFunction* pfnSpecialCostForPath = NULL;

		if ( !pfnSpecialCostForPath )
			pfnSpecialCostForPath = UObject::FindObject< UFunction >( "Function Engine.Pawn.SpecialCostForPath" );

		APawn_execSpecialCostForPath_Parms SpecialCostForPath_Parms;
		SpecialCostForPath_Parms.Path = Path;

		this->ProcessEvent( pfnSpecialCostForPath, &SpecialCostForPath_Parms, NULL );

		return SpecialCostForPath_Parms.ReturnValue;
	};

	void GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight )
	{
		static UFunction* pfnGetBoundingCylinder = NULL;

		if ( !pfnGetBoundingCylinder )
			pfnGetBoundingCylinder = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetBoundingCylinder" );

		APawn_execGetBoundingCylinder_Parms GetBoundingCylinder_Parms;

		pfnGetBoundingCylinder->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoundingCylinder, &GetBoundingCylinder_Parms, NULL );
		pfnGetBoundingCylinder->FunctionFlags |= 0x400;

		if ( CollisionRadius )
			*CollisionRadius = GetBoundingCylinder_Parms.CollisionRadius; // CPF_OutParm
		if ( CollisionHeight )
			*CollisionHeight = GetBoundingCylinder_Parms.CollisionHeight; // CPF_OutParm
	};

	bool ReachedDesiredRotation ()
	{
		static UFunction* pfnReachedDesiredRotation = NULL;

		if ( !pfnReachedDesiredRotation )
			pfnReachedDesiredRotation = UObject::FindObject< UFunction >( "Function Engine.Pawn.ReachedDesiredRotation" );

		APawn_execReachedDesiredRotation_Parms ReachedDesiredRotation_Parms;

		pfnReachedDesiredRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReachedDesiredRotation, &ReachedDesiredRotation_Parms, NULL );
		pfnReachedDesiredRotation->FunctionFlags |= 0x400;

		return ReachedDesiredRotation_Parms.ReturnValue;
	};

	void SetPushesRigidBodies ( unsigned long NewPush )
	{
		static UFunction* pfnSetPushesRigidBodies = NULL;

		if ( !pfnSetPushesRigidBodies )
			pfnSetPushesRigidBodies = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetPushesRigidBodies" );

		APawn_execSetPushesRigidBodies_Parms SetPushesRigidBodies_Parms;
		SetPushesRigidBodies_Parms.NewPush = NewPush;

		pfnSetPushesRigidBodies->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetPushesRigidBodies, &SetPushesRigidBodies_Parms, NULL );
		pfnSetPushesRigidBodies->FunctionFlags |= 0x400;
	};

	void ForceCrouch ()
	{
		static UFunction* pfnForceCrouch = NULL;

		if ( !pfnForceCrouch )
			pfnForceCrouch = UObject::FindObject< UFunction >( "Function Engine.Pawn.ForceCrouch" );

		APawn_execForceCrouch_Parms ForceCrouch_Parms;

		pfnForceCrouch->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceCrouch, &ForceCrouch_Parms, NULL );
		pfnForceCrouch->FunctionFlags |= 0x400;
	};

	bool ReachedPoint ( struct FVector Point, class AActor* NewAnchor )
	{
		static UFunction* pfnReachedPoint = NULL;

		if ( !pfnReachedPoint )
			pfnReachedPoint = UObject::FindObject< UFunction >( "Function Engine.Pawn.ReachedPoint" );

		APawn_execReachedPoint_Parms ReachedPoint_Parms;
		memcpy( &ReachedPoint_Parms.Point, &Point, 0xC );
		ReachedPoint_Parms.NewAnchor = NewAnchor;

		pfnReachedPoint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReachedPoint, &ReachedPoint_Parms, NULL );
		pfnReachedPoint->FunctionFlags |= 0x400;

		return ReachedPoint_Parms.ReturnValue;
	};

	bool ReachedDestination ( class AActor* Goal )
	{
		static UFunction* pfnReachedDestination = NULL;

		if ( !pfnReachedDestination )
			pfnReachedDestination = UObject::FindObject< UFunction >( "Function Engine.Pawn.ReachedDestination" );

		APawn_execReachedDestination_Parms ReachedDestination_Parms;
		ReachedDestination_Parms.Goal = Goal;

		pfnReachedDestination->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReachedDestination, &ReachedDestination_Parms, NULL );
		pfnReachedDestination->FunctionFlags |= 0x400;

		return ReachedDestination_Parms.ReturnValue;
	};

	class ANavigationPoint* GetBestAnchor ( class AActor* TestActor, struct FVector TestLocation, unsigned long bStartPoint, unsigned long bOnlyCheckVisible, float* out_Dist )
	{
		static UFunction* pfnGetBestAnchor = NULL;

		if ( !pfnGetBestAnchor )
			pfnGetBestAnchor = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetBestAnchor" );

		APawn_execGetBestAnchor_Parms GetBestAnchor_Parms;
		GetBestAnchor_Parms.TestActor = TestActor;
		memcpy( &GetBestAnchor_Parms.TestLocation, &TestLocation, 0xC );
		GetBestAnchor_Parms.bStartPoint = bStartPoint;
		GetBestAnchor_Parms.bOnlyCheckVisible = bOnlyCheckVisible;

		pfnGetBestAnchor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBestAnchor, &GetBestAnchor_Parms, NULL );
		pfnGetBestAnchor->FunctionFlags |= 0x400;

		if ( out_Dist )
			*out_Dist = GetBestAnchor_Parms.out_Dist; // CPF_OutParm

		return GetBestAnchor_Parms.ReturnValue;
	};

	void SetAnchor ( class ANavigationPoint* NewAnchor )
	{
		static UFunction* pfnSetAnchor = NULL;

		if ( !pfnSetAnchor )
			pfnSetAnchor = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetAnchor" );

		APawn_execSetAnchor_Parms SetAnchor_Parms;
		SetAnchor_Parms.NewAnchor = NewAnchor;

		pfnSetAnchor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAnchor, &SetAnchor_Parms, NULL );
		pfnSetAnchor->FunctionFlags |= 0x400;
	};

	void SetRemoteViewPitch ( int NewRemoteViewPitch )
	{
		static UFunction* pfnSetRemoteViewPitch = NULL;

		if ( !pfnSetRemoteViewPitch )
			pfnSetRemoteViewPitch = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetRemoteViewPitch" );

		APawn_execSetRemoteViewPitch_Parms SetRemoteViewPitch_Parms;
		SetRemoteViewPitch_Parms.NewRemoteViewPitch = NewRemoteViewPitch;

		pfnSetRemoteViewPitch->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRemoteViewPitch, &SetRemoteViewPitch_Parms, NULL );
		pfnSetRemoteViewPitch->FunctionFlags |= 0x400;
	};

	bool IsInvisible ()
	{
		static UFunction* pfnIsInvisible = NULL;

		if ( !pfnIsInvisible )
			pfnIsInvisible = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsInvisible" );

		APawn_execIsInvisible_Parms IsInvisible_Parms;

		pfnIsInvisible->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsInvisible, &IsInvisible_Parms, NULL );
		pfnIsInvisible->FunctionFlags |= 0x400;

		return IsInvisible_Parms.ReturnValue;
	};

	bool IsValidEnemyTargetFor ( class APlayerReplicationInfo* PRI, unsigned long bNoPRIisEnemy )
	{
		static UFunction* pfnIsValidEnemyTargetFor = NULL;

		if ( !pfnIsValidEnemyTargetFor )
			pfnIsValidEnemyTargetFor = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsValidEnemyTargetFor" );

		APawn_execIsValidEnemyTargetFor_Parms IsValidEnemyTargetFor_Parms;
		IsValidEnemyTargetFor_Parms.PRI = PRI;
		IsValidEnemyTargetFor_Parms.bNoPRIisEnemy = bNoPRIisEnemy;

		pfnIsValidEnemyTargetFor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsValidEnemyTargetFor, &IsValidEnemyTargetFor_Parms, NULL );
		pfnIsValidEnemyTargetFor->FunctionFlags |= 0x400;

		return IsValidEnemyTargetFor_Parms.ReturnValue;
	};

	bool IsValidTargetFor ( class AController* C )
	{
		static UFunction* pfnIsValidTargetFor = NULL;

		if ( !pfnIsValidTargetFor )
			pfnIsValidTargetFor = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsValidTargetFor" );

		APawn_execIsValidTargetFor_Parms IsValidTargetFor_Parms;
		IsValidTargetFor_Parms.C = C;

		pfnIsValidTargetFor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsValidTargetFor, &IsValidTargetFor_Parms, NULL );
		pfnIsValidTargetFor->FunctionFlags |= 0x400;

		return IsValidTargetFor_Parms.ReturnValue;
	};

	bool SuggestJumpVelocity ( struct FVector Destination, struct FVector Start, struct FVector* JumpVelocity )
	{
		static UFunction* pfnSuggestJumpVelocity = NULL;

		if ( !pfnSuggestJumpVelocity )
			pfnSuggestJumpVelocity = UObject::FindObject< UFunction >( "Function Engine.Pawn.SuggestJumpVelocity" );

		APawn_execSuggestJumpVelocity_Parms SuggestJumpVelocity_Parms;
		memcpy( &SuggestJumpVelocity_Parms.Destination, &Destination, 0xC );
		memcpy( &SuggestJumpVelocity_Parms.Start, &Start, 0xC );

		pfnSuggestJumpVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSuggestJumpVelocity, &SuggestJumpVelocity_Parms, NULL );
		pfnSuggestJumpVelocity->FunctionFlags |= 0x400;

		if ( JumpVelocity )
			memcpy( JumpVelocity, &SuggestJumpVelocity_Parms.JumpVelocity, 0xC ); // CPF_OutParm

		return SuggestJumpVelocity_Parms.ReturnValue;
	};

	bool ValidAnchor ()
	{
		static UFunction* pfnValidAnchor = NULL;

		if ( !pfnValidAnchor )
			pfnValidAnchor = UObject::FindObject< UFunction >( "Function Engine.Pawn.ValidAnchor" );

		APawn_execValidAnchor_Parms ValidAnchor_Parms;

		pfnValidAnchor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnValidAnchor, &ValidAnchor_Parms, NULL );
		pfnValidAnchor->FunctionFlags |= 0x400;

		return ValidAnchor_Parms.ReturnValue;
	};

	struct FVector AdjustDestination ( class AActor* GoalActor, struct FVector Dest/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAdjustDestination = NULL;

		if ( !pfnAdjustDestination )
			pfnAdjustDestination = UObject::FindObject< UFunction >( "Function Engine.Pawn.AdjustDestination" );

		APawn_execAdjustDestination_Parms AdjustDestination_Parms;
		AdjustDestination_Parms.GoalActor = GoalActor;
		memcpy( &AdjustDestination_Parms.Dest, &Dest, 0xC );

		pfnAdjustDestination->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAdjustDestination, &AdjustDestination_Parms, NULL );
		pfnAdjustDestination->FunctionFlags |= 0x400;

		return AdjustDestination_Parms.ReturnValue;
	};

	bool IsAliveAndWell ()
	{
		static UFunction* pfnIsAliveAndWell = NULL;

		if ( !pfnIsAliveAndWell )
			pfnIsAliveAndWell = UObject::FindObject< UFunction >( "Function Engine.Pawn.IsAliveAndWell" );

		APawn_execIsAliveAndWell_Parms IsAliveAndWell_Parms;

		pfnIsAliveAndWell->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsAliveAndWell, &IsAliveAndWell_Parms, NULL );
		pfnIsAliveAndWell->FunctionFlags |= 0x400;

		return IsAliveAndWell_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.Pawn.ReplicatedEvent" );

		APawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	struct FVector GetBasedPosition ( struct FBasedPosition BP )
	{
		static UFunction* pfnGetBasedPosition = NULL;

		if ( !pfnGetBasedPosition )
			pfnGetBasedPosition = UObject::FindObject< UFunction >( "Function Engine.Pawn.GetBasedPosition" );

		APawn_execGetBasedPosition_Parms GetBasedPosition_Parms;
		memcpy( &GetBasedPosition_Parms.BP, &BP, 0x34 );

		pfnGetBasedPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBasedPosition, &GetBasedPosition_Parms, NULL );
		pfnGetBasedPosition->FunctionFlags |= 0x400;

		return GetBasedPosition_Parms.ReturnValue;
	};

	void SetBasedPosition ( struct FVector pos, class AActor* ForcedBase/*CPF_OptionalParm*/, struct FBasedPosition* BP )
	{
		static UFunction* pfnSetBasedPosition = NULL;

		if ( !pfnSetBasedPosition )
			pfnSetBasedPosition = UObject::FindObject< UFunction >( "Function Engine.Pawn.SetBasedPosition" );

		APawn_execSetBasedPosition_Parms SetBasedPosition_Parms;
		memcpy( &SetBasedPosition_Parms.pos, &pos, 0xC );
		SetBasedPosition_Parms.ForcedBase = ForcedBase;

		pfnSetBasedPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetBasedPosition, &SetBasedPosition_Parms, NULL );
		pfnSetBasedPosition->FunctionFlags |= 0x400;

		if ( BP )
			memcpy( BP, &SetBasedPosition_Parms.BP, 0x34 ); // CPF_OutParm
	};

};

UClass* APawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif