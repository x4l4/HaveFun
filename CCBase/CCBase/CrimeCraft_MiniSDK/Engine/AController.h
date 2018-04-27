/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AController.h
// Date: 06/16/2011 @ 05:19:39.135
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_LATENT_MOVETOWARD                    503

struct AController_execReadyForLift_Parms
{
};

struct AController_execSendMessage_Parms
{
	class APlayerReplicationInfo* Recipient;
	struct FName MessageType;
	float Wait;
	class UClass* DamageType;
};

struct AController_eventCurrentLevelUnloaded_Parms
{
};// FUNC_Event

struct AController_execGetRouteGoalAfter_Parms
{
	int RouteIdx;
	class AActor* ReturnValue; // CPF_ReturnParm
};

struct AController_eventIsInCombat_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventIsSpectating_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_execGetKillerController_Parms
{
	class AController* ReturnValue; // CPF_ReturnParm
};

struct AController_execOnToggleHidden_Parms
{
	void* Action;
};

struct AController_execNotifyAddInventory_Parms
{
	class AInventory* NewItem;
};

struct AController_execOnCauseDamage_Parms
{
	void* Action;
};

struct AController_execNotifyCoverClaimViolation_Parms
{
	class AController* NewClaim;
	void* Link;
	int SlotIdx;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_eventNotifyCoverAdjusted_Parms
{
};// FUNC_Event

struct AController_execNotifyCoverDisabled_Parms
{
	void* Link;
	int SlotIdx;
	unsigned long bAdjacentIdx : 1;
};

struct AController_execOnToggleAffectedByHitEffects_Parms
{
	void* inAction;
};

struct AController_execOnToggleGodMode_Parms
{
	void* inAction;
};

struct AController_execOnTeleport_Parms
{
	void* Action;
};

struct AController_execOnMakeNoise_Parms
{
	void* Action;
};

struct AController_execIsDead_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AController_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct AController_execStopLatentExecution_Parms
{
};// FUNC_Final FUNC_Native

struct AController_execInLatentExecution_Parms
{
	int LatentActionNumber;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_eventNotifyMissedJump_Parms
{
};// FUNC_Event

struct AController_eventNotifyJumpApex_Parms
{
};// FUNC_Event

struct AController_eventNotifyBump_Parms
{
	class AActor* Other;
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventNotifyFallingHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
};// FUNC_Event

struct AController_eventNotifyHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventNotifyLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventNotifyHeadVolumeChange_Parms
{
	void* NewVolume;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventNotifyPhysicsVolumeChange_Parms
{
	void* NewVolume;
};// FUNC_Event

struct AController_execLandingShake_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_execIsAimingAt_Parms
{
	class AActor* ATarget;
	float Epsilon;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_eventGetActorEyesViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct AController_eventGetPlayerViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct AController_eventHandlePathObstruction_Parms
{
	class AActor* BlockedBy;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_execUnderLift_Parms
{
	void* Lift;
};

struct AController_eventMoverFinished_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_execWaitForMover_Parms
{
	void* M;
};

struct AController_eventAllowDetourTo_Parms
{
	class ANavigationPoint* N;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AController_eventMayFall_Parms
{
};// FUNC_Event

struct AController_execEndClimbLadder_Parms
{
};// FUNC_Native

struct AController_eventLongFall_Parms
{
};// FUNC_Event

struct AController_execWaitForLanding_Parms
{
	float waitDuration;
};// FUNC_Final FUNC_Native NativeIndex[0x020F]

struct AController_execPickWallAdjust_Parms
{
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x020E]

struct AController_eventMoveUnreachable_Parms
{
	struct FVector AttemptedDest;
	class AActor* AttemptedTarget;
};// FUNC_Event

struct AController_execActorReachable_Parms
{
	class AActor* anActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0208]

struct AController_execPointReachable_Parms
{
	struct FVector aPoint;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0209]

struct AController_execFindPathToIntercept_Parms
{
	class APawn* P;
	class AActor* InRouteGoal;
	unsigned long bWeightDetours : 1;
	int MaxPathLength;
	unsigned long bReturnPartial : 1;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execFindRandomDest_Parms
{
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x020D]

struct AController_execFindPathTowardNearest_Parms
{
	class UClass* GoalClass;
	unsigned long bWeightDetours : 1;
	int MaxPathLength;
	unsigned long bReturnPartial : 1;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execFindPathToward_Parms
{
	class AActor* anActor;
	unsigned long bWeightDetours : 1;
	int MaxPathLength;
	unsigned long bReturnPartial : 1;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0205]

struct AController_execFindPathTo_Parms
{
	struct FVector aPoint;
	int MaxPathLength;
	unsigned long bReturnPartial : 1;
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0206]

struct AController_execFinishRotation_Parms
{
};// FUNC_Final FUNC_Native NativeIndex[0x01FC]

struct AController_eventSetupSpecialPathAbilities_Parms
{
};// FUNC_Event

struct AController_execMoveToward_Parms
{
	class AActor* NewTarget;
	class AActor* ViewFocus;
	float DestinationOffset;
	unsigned long bUseStrafing : 1;
	unsigned long bShouldWalk : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x01F6]

struct AController_execMoveTo_Parms
{
	struct FVector NewDestination;
	class AActor* ViewFocus;
	unsigned long bShouldWalk : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x01F4]

struct AController_eventEnemyNotVisible_Parms
{
};// FUNC_Event

struct AController_eventSeeMonster_Parms
{
	class APawn* Seen;
};// FUNC_Event

struct AController_eventSeePlayer_Parms
{
	class APawn* Seen;
};// FUNC_Event

struct AController_eventHearNoise_Parms
{
	float Loudness;
	class AActor* NoiseMaker;
	struct FName NoiseType;
};// FUNC_Event

struct AController_execPickTarget_Parms
{
	class UClass* TargetClass;
	float bestAim; // CPF_OutParm
	float bestDist; // CPF_OutParm
	struct FVector FireDir;
	struct FVector projStart;
	float MaxRange;
	class APawn* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0213]

struct AController_execCanSeeByPoints_Parms
{
	struct FVector ViewLocation;
	struct FVector TestLocation;
	struct FRotator ViewRotation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0219]

struct AController_execCanSee_Parms
{
	class APawn* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0215]

struct AController_execLineOfSightTo_Parms
{
	class AActor* Other;
	struct FVector chkLocation;
	unsigned long bTryAlternateTargetLoc : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0202]

struct AController_execNotifyChangedWeapon_Parms
{
	class AWeapon* PrevWeapon;
	class AWeapon* NewWeapon;
};

struct AController_execClientSetWeapon_Parms
{
	class UClass* WeaponClass;
};

struct AController_execClientSwitchToBestWeapon_Parms
{
	unsigned long bForceNewWeapon : 1;
};

struct AController_execSwitchToBestWeapon_Parms
{
	unsigned long bForceNewWeapon : 1;
};// FUNC_Exec

struct AController_execReceiveProjectileWarning_Parms
{
	class AProjectile* Proj;
};

struct AController_execReceiveWarning_Parms
{
	class APawn* shooter;
	float projSpeed;
	struct FVector FireDir;
};

struct AController_execInstantWarnTarget_Parms
{
	class AActor* InTarget;
	class AWeapon* FiredWeapon;
	struct FVector FireDir;
};

struct AController_execGetAdjustedAimFor_Parms
{
	class AWeapon* W;
	struct FVector StartFireLoc;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct AController_execHandlePickup_Parms
{
	class AInventory* Inv;
};

struct AController_execRoundHasEnded_Parms
{
	class AActor* EndRoundFocus;
};

struct AController_eventStopFiring_Parms
{
};// FUNC_Event

struct AController_execFireWeaponAt_Parms
{
	class AActor* inActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_eventRatePickup_Parms
{
	class AActor* PickupHolder;
	class UClass* inPickup;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AController_execWarnProjExplode_Parms
{
	class AProjectile* Proj;
};

struct AController_execNotifyProjLanded_Parms
{
	class AProjectile* Proj;
};

struct AController_execNotifyKilled_Parms
{
	class AController* Killer;
	class AController* Killed;
	class APawn* KilledPawn;
};

struct AController_execGameHasEnded_Parms
{
	class AActor* EndGameFocus;
	unsigned long bIsWinner : 1;
};

struct AController_execSetCharacter_Parms
{
	struct FString inCharacter;
};

struct AController_execServerGivePawn_Parms
{
};

struct AController_execServerRestartPlayer_Parms
{
};

struct AController_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AController_execInitPlayerReplicationInfo_Parms
{
};

struct AController_execNotifyTakeHit_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	int Damage;
	class UClass* DamageType;
	struct FVector Momentum;
};

struct AController_execEnemyJustTeleported_Parms
{
};

struct AController_execBeyondFogDistance_Parms
{
	struct FVector ViewPoint;
	struct FVector OtherPoint;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execRestart_Parms
{
	unsigned long bVehicleTransition : 1;
};

struct AController_execCleanupPRI_Parms
{
};

struct AController_eventDestroyed_Parms
{
};// FUNC_Event

struct AController_eventNotifyPostLanded_Parms
{
};// FUNC_Event

struct AController_execGoToDeadState_Parms
{
};

struct AController_execGamePlayEndedState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AController_execPawnDied_Parms
{
	class APawn* inPawn;
};

struct AController_eventUnPossess_Parms
{
};// FUNC_Event

struct AController_execUpdateSex_Parms
{
};

struct AController_eventPossess_Parms
{
	class APawn* inPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct AController_execOnPossess_Parms
{
	void* inAction;
};

struct AController_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AController_execClientSetRotation_Parms
{
	struct FRotator NewRotation;
	unsigned long bResetCamera : 1;
};

struct AController_execClientSetLocation_Parms
{
	struct FVector NewLocation;
	struct FRotator NewRotation;
};

struct AController_execReset_Parms
{
};

struct AController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AController_execGetAdjustLocation_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execSetAdjustLocation_Parms
{
	struct FVector NewLoc;
	unsigned long bAdjust : 1;
	unsigned long bOffsetFromBase : 1;
};// FUNC_Final FUNC_Native

struct AController_execGetDestinationPosition_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execSetDestinationPosition_Parms
{
	struct FVector Dest;
	unsigned long bOffsetFromBase : 1;
};// FUNC_Final FUNC_Native

struct AController_execGetFocalPoint_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execSetFocalPoint_Parms
{
	struct FVector FP;
	unsigned long bOffsetFromBase : 1;
};// FUNC_Final FUNC_Native

struct AController_execGetBasedPosition_Parms
{
	struct FBasedPosition BP;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AController_execSetBasedPosition_Parms
{
	struct FBasedPosition BP; // CPF_OutParm
	struct FVector pos;
	class AActor* ForcedBase;
};// FUNC_Final FUNC_Native

struct AController_execRouteCache_RemoveIndex_Parms
{
	int InIndex;
	int Count;
};// FUNC_Native

struct AController_execRouteCache_RemoveItem_Parms
{
	class ANavigationPoint* Nav;
};// FUNC_Native

struct AController_execRouteCache_InsertItem_Parms
{
	class ANavigationPoint* Nav;
	int Idx;
};// FUNC_Native

struct AController_execRouteCache_AddItem_Parms
{
	class ANavigationPoint* Nav;
};// FUNC_Native

struct AController_execRouteCache_Empty_Parms
{
};// FUNC_Native

struct AController_execIsLocalPlayerController_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x1BC - 0x344)
class AController : public AActor
{
public:
	class APawn*                                       Pawn;                                        // 0x01BC (0x0004)
	class APlayerReplicationInfo*                      PlayerReplicationInfo;                       // 0x01C0 (0x0004)
	int                                                PlayerNum;                                   // 0x01C4 (0x0004)
	class AController*                                 NextController;                              // 0x01C8 (0x0004)
	unsigned long                                      bIsPlayer : 1;                               // 0x01CC (0x0004) [0x00000001]
	unsigned long                                      bGodMode : 1;                                // 0x01CC (0x0004) [0x00000002]
	unsigned long                                      bAffectedByHitEffects : 1;                   // 0x01CC (0x0004) [0x00000004]
	unsigned long                                      bSoaking : 1;                                // 0x01CC (0x0004) [0x00000008]
	unsigned long                                      bSlowerZAcquire : 1;                         // 0x01CC (0x0004) [0x00000010]
	unsigned long                                      bForceStrafe : 1;                            // 0x01CC (0x0004) [0x00000020]
	unsigned long                                      bNotifyPostLanded : 1;                       // 0x01CC (0x0004) [0x00000040]
	unsigned long                                      bNotifyApex : 1;                             // 0x01CC (0x0004) [0x00000080]
	unsigned long                                      bAdvancedTactics : 1;                        // 0x01CC (0x0004) [0x00000100]
	unsigned long                                      bCanDoSpecial : 1;                           // 0x01CC (0x0004) [0x00000200]
	unsigned long                                      bAdjusting : 1;                              // 0x01CC (0x0004) [0x00000400]
	unsigned long                                      bPreparingMove : 1;                          // 0x01CC (0x0004) [0x00000800]
	unsigned long                                      bLOSflag : 1;                                // 0x01CC (0x0004) [0x00001000]
	unsigned long                                      bUsePlayerHearing : 1;                       // 0x01CC (0x0004) [0x00002000]
	unsigned long                                      bNotifyFallingHitWall : 1;                   // 0x01CC (0x0004) [0x00004000]
	unsigned long                                      bForceDesiredRotation : 1;                   // 0x01CC (0x0004) [0x00008000]
	unsigned long                                      bPreciseDestination : 1;                     // 0x01CC (0x0004) [0x00010000]
	unsigned long                                      bSeeFriendly : 1;                            // 0x01CC (0x0004) [0x00020000]
	unsigned long                                      bUsingPathLanes : 1;                         // 0x01CC (0x0004) [0x00040000]
	unsigned char                                      bFire;                                       // 0x01D0 (0x0001)
	float                                              MinHitWall;                                  // 0x01D4 (0x0004)
	float                                              MoveTimer;                                   // 0x01D8 (0x0004)
	class AActor*                                      MoveTarget;                                  // 0x01DC (0x0004)
	struct FBasedPosition                              DestinationPosition;                         // 0x01E0 (0x0034)
	struct FBasedPosition                              FocalPosition;                               // 0x0214 (0x0034)
	class AActor*                                      Focus;                                       // 0x0248 (0x0004)
	class AActor*                                      GoalList[ 4 ];                               // 0x024C (0x0010)
	struct FBasedPosition                              AdjustPosition;                              // 0x025C (0x0034)
	class ANavigationPoint*                            StartSpot;                                   // 0x0290 (0x0004)
	TArray< class ANavigationPoint* >                  RouteCache;                                  // 0x0294 (0x000C)
	void*                                              CurrentPath;                                 // 0x02A0 (0x0004)
	void*                                              NextRoutePath;                               // 0x02A4 (0x0004)
	struct FVector                                     CurrentPathDir;                              // 0x02A8 (0x000C)
	class AActor*                                      RouteGoal;                                   // 0x02B4 (0x0004)
	float                                              RouteDist;                                   // 0x02B8 (0x0004)
	float                                              LastRouteFind;                               // 0x02BC (0x0004)
	void*                                              PendingMover;                                // 0x02C0 (0x0004)
	class AActor*                                      FailedMoveTarget;                            // 0x02C4 (0x0004)
	int                                                MoveFailureCount;                            // 0x02C8 (0x0004)
	float                                              GroundPitchTime;                             // 0x02CC (0x0004)
	struct FVector                                     ViewX;                                       // 0x02D0 (0x000C)
	struct FVector                                     ViewY;                                       // 0x02DC (0x000C)
	struct FVector                                     ViewZ;                                       // 0x02E8 (0x000C)
	class APawn*                                       ShotTarget;                                  // 0x02F4 (0x0004)
	class AActor*                                      LastFailedReach;                             // 0x02F8 (0x0004)
	float                                              FailedReachTime;                             // 0x02FC (0x0004)
	struct FVector                                     FailedReachLocation;                         // 0x0300 (0x000C)
	float                                              SightCounter;                                // 0x030C (0x0004)
	float                                              SightCounterInterval;                        // 0x0310 (0x0004)
	float                                              RespawnPredictionTime;                       // 0x0314 (0x0004)
	float                                              InUseNodeCostMultiplier;                     // 0x0318 (0x0004)
	int                                                HighJumpNodeCostModifier;                    // 0x031C (0x0004)
	class APawn*                                       Enemy;                                       // 0x0320 (0x0004)
	class AActor*                                      Target;                                      // 0x0324 (0x0004)
	TArray< struct FVisiblePortalInfo >                VisiblePortals;                              // 0x0328 (0x000C)
	float                                              LaneOffset;                                  // 0x0334 (0x0004)
	struct FRotator                                    OldBasedRotation;                            // 0x0338 (0x000C)

	// RoundEnded
	// Dead

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Controller" );

		return ClassPointer;
	};

public:
	void ReadyForLift ()
	{
		static UFunction* pfnReadyForLift = NULL;

		if ( !pfnReadyForLift )
			pfnReadyForLift = UObject::FindObject< UFunction >( "Function Engine.Controller.ReadyForLift" );

		AController_execReadyForLift_Parms ReadyForLift_Parms;

		this->ProcessEvent( pfnReadyForLift, &ReadyForLift_Parms, NULL );
	};

	void SendMessage ( class APlayerReplicationInfo* Recipient, struct FName MessageType, float Wait, class UClass* DamageType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSendMessage = NULL;

		if ( !pfnSendMessage )
			pfnSendMessage = UObject::FindObject< UFunction >( "Function Engine.Controller.SendMessage" );

		AController_execSendMessage_Parms SendMessage_Parms;
		SendMessage_Parms.Recipient = Recipient;
		memcpy( &SendMessage_Parms.MessageType, &MessageType, 0x8 );
		SendMessage_Parms.Wait = Wait;
		SendMessage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnSendMessage, &SendMessage_Parms, NULL );
	};

	void eventCurrentLevelUnloaded ()
	{
		static UFunction* pfnCurrentLevelUnloaded = NULL;

		if ( !pfnCurrentLevelUnloaded )
			pfnCurrentLevelUnloaded = UObject::FindObject< UFunction >( "Function Engine.Controller.CurrentLevelUnloaded" );

		AController_eventCurrentLevelUnloaded_Parms CurrentLevelUnloaded_Parms;

		this->ProcessEvent( pfnCurrentLevelUnloaded, &CurrentLevelUnloaded_Parms, NULL );
	};

	class AActor* GetRouteGoalAfter ( int RouteIdx )
	{
		static UFunction* pfnGetRouteGoalAfter = NULL;

		if ( !pfnGetRouteGoalAfter )
			pfnGetRouteGoalAfter = UObject::FindObject< UFunction >( "Function Engine.Controller.GetRouteGoalAfter" );

		AController_execGetRouteGoalAfter_Parms GetRouteGoalAfter_Parms;
		GetRouteGoalAfter_Parms.RouteIdx = RouteIdx;

		this->ProcessEvent( pfnGetRouteGoalAfter, &GetRouteGoalAfter_Parms, NULL );

		return GetRouteGoalAfter_Parms.ReturnValue;
	};

	bool eventIsInCombat ()
	{
		static UFunction* pfnIsInCombat = NULL;

		if ( !pfnIsInCombat )
			pfnIsInCombat = UObject::FindObject< UFunction >( "Function Engine.Controller.IsInCombat" );

		AController_eventIsInCombat_Parms IsInCombat_Parms;

		this->ProcessEvent( pfnIsInCombat, &IsInCombat_Parms, NULL );

		return IsInCombat_Parms.ReturnValue;
	};

	bool eventIsSpectating ()
	{
		static UFunction* pfnIsSpectating = NULL;

		if ( !pfnIsSpectating )
			pfnIsSpectating = UObject::FindObject< UFunction >( "Function Engine.Controller.IsSpectating" );

		AController_eventIsSpectating_Parms IsSpectating_Parms;

		this->ProcessEvent( pfnIsSpectating, &IsSpectating_Parms, NULL );

		return IsSpectating_Parms.ReturnValue;
	};

	class AController* GetKillerController ()
	{
		static UFunction* pfnGetKillerController = NULL;

		if ( !pfnGetKillerController )
			pfnGetKillerController = UObject::FindObject< UFunction >( "Function Engine.Controller.GetKillerController" );

		AController_execGetKillerController_Parms GetKillerController_Parms;

		this->ProcessEvent( pfnGetKillerController, &GetKillerController_Parms, NULL );

		return GetKillerController_Parms.ReturnValue;
	};

	void OnToggleHidden ( void* Action )
	{
		static UFunction* pfnOnToggleHidden = NULL;

		if ( !pfnOnToggleHidden )
			pfnOnToggleHidden = UObject::FindObject< UFunction >( "Function Engine.Controller.OnToggleHidden" );

		AController_execOnToggleHidden_Parms OnToggleHidden_Parms;
		OnToggleHidden_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggleHidden, &OnToggleHidden_Parms, NULL );
	};

	void NotifyAddInventory ( class AInventory* NewItem )
	{
		static UFunction* pfnNotifyAddInventory = NULL;

		if ( !pfnNotifyAddInventory )
			pfnNotifyAddInventory = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyAddInventory" );

		AController_execNotifyAddInventory_Parms NotifyAddInventory_Parms;
		NotifyAddInventory_Parms.NewItem = NewItem;

		this->ProcessEvent( pfnNotifyAddInventory, &NotifyAddInventory_Parms, NULL );
	};

	void OnCauseDamage ( void* Action )
	{
		static UFunction* pfnOnCauseDamage = NULL;

		if ( !pfnOnCauseDamage )
			pfnOnCauseDamage = UObject::FindObject< UFunction >( "Function Engine.Controller.OnCauseDamage" );

		AController_execOnCauseDamage_Parms OnCauseDamage_Parms;
		OnCauseDamage_Parms.Action = Action;

		this->ProcessEvent( pfnOnCauseDamage, &OnCauseDamage_Parms, NULL );
	};

	bool NotifyCoverClaimViolation ( class AController* NewClaim, void* Link, int SlotIdx )
	{
		static UFunction* pfnNotifyCoverClaimViolation = NULL;

		if ( !pfnNotifyCoverClaimViolation )
			pfnNotifyCoverClaimViolation = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyCoverClaimViolation" );

		AController_execNotifyCoverClaimViolation_Parms NotifyCoverClaimViolation_Parms;
		NotifyCoverClaimViolation_Parms.NewClaim = NewClaim;
		NotifyCoverClaimViolation_Parms.Link = Link;
		NotifyCoverClaimViolation_Parms.SlotIdx = SlotIdx;

		this->ProcessEvent( pfnNotifyCoverClaimViolation, &NotifyCoverClaimViolation_Parms, NULL );

		return NotifyCoverClaimViolation_Parms.ReturnValue;
	};

	void eventNotifyCoverAdjusted ()
	{
		static UFunction* pfnNotifyCoverAdjusted = NULL;

		if ( !pfnNotifyCoverAdjusted )
			pfnNotifyCoverAdjusted = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyCoverAdjusted" );

		AController_eventNotifyCoverAdjusted_Parms NotifyCoverAdjusted_Parms;

		this->ProcessEvent( pfnNotifyCoverAdjusted, &NotifyCoverAdjusted_Parms, NULL );
	};

	void NotifyCoverDisabled ( void* Link, int SlotIdx, unsigned long bAdjacentIdx/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnNotifyCoverDisabled = NULL;

		if ( !pfnNotifyCoverDisabled )
			pfnNotifyCoverDisabled = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyCoverDisabled" );

		AController_execNotifyCoverDisabled_Parms NotifyCoverDisabled_Parms;
		NotifyCoverDisabled_Parms.Link = Link;
		NotifyCoverDisabled_Parms.SlotIdx = SlotIdx;
		NotifyCoverDisabled_Parms.bAdjacentIdx = bAdjacentIdx;

		this->ProcessEvent( pfnNotifyCoverDisabled, &NotifyCoverDisabled_Parms, NULL );
	};

	void OnToggleAffectedByHitEffects ( void* inAction )
	{
		static UFunction* pfnOnToggleAffectedByHitEffects = NULL;

		if ( !pfnOnToggleAffectedByHitEffects )
			pfnOnToggleAffectedByHitEffects = UObject::FindObject< UFunction >( "Function Engine.Controller.OnToggleAffectedByHitEffects" );

		AController_execOnToggleAffectedByHitEffects_Parms OnToggleAffectedByHitEffects_Parms;
		OnToggleAffectedByHitEffects_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnToggleAffectedByHitEffects, &OnToggleAffectedByHitEffects_Parms, NULL );
	};

	void OnToggleGodMode ( void* inAction )
	{
		static UFunction* pfnOnToggleGodMode = NULL;

		if ( !pfnOnToggleGodMode )
			pfnOnToggleGodMode = UObject::FindObject< UFunction >( "Function Engine.Controller.OnToggleGodMode" );

		AController_execOnToggleGodMode_Parms OnToggleGodMode_Parms;
		OnToggleGodMode_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnToggleGodMode, &OnToggleGodMode_Parms, NULL );
	};

	void OnTeleport ( void* Action )
	{
		static UFunction* pfnOnTeleport = NULL;

		if ( !pfnOnTeleport )
			pfnOnTeleport = UObject::FindObject< UFunction >( "Function Engine.Controller.OnTeleport" );

		AController_execOnTeleport_Parms OnTeleport_Parms;
		OnTeleport_Parms.Action = Action;

		this->ProcessEvent( pfnOnTeleport, &OnTeleport_Parms, NULL );
	};

	void OnMakeNoise ( void* Action )
	{
		static UFunction* pfnOnMakeNoise = NULL;

		if ( !pfnOnMakeNoise )
			pfnOnMakeNoise = UObject::FindObject< UFunction >( "Function Engine.Controller.OnMakeNoise" );

		AController_execOnMakeNoise_Parms OnMakeNoise_Parms;
		OnMakeNoise_Parms.Action = Action;

		this->ProcessEvent( pfnOnMakeNoise, &OnMakeNoise_Parms, NULL );
	};

	bool IsDead ()
	{
		static UFunction* pfnIsDead = NULL;

		if ( !pfnIsDead )
			pfnIsDead = UObject::FindObject< UFunction >( "Function Engine.Controller.IsDead" );

		AController_execIsDead_Parms IsDead_Parms;

		this->ProcessEvent( pfnIsDead, &IsDead_Parms, NULL );

		return IsDead_Parms.ReturnValue;
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.Controller.GetHumanReadableName" );

		AController_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Controller.DisplayDebug" );

		AController_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	void StopLatentExecution ()
	{
		static UFunction* pfnStopLatentExecution = NULL;

		if ( !pfnStopLatentExecution )
			pfnStopLatentExecution = UObject::FindObject< UFunction >( "Function Engine.Controller.StopLatentExecution" );

		AController_execStopLatentExecution_Parms StopLatentExecution_Parms;

		pfnStopLatentExecution->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStopLatentExecution, &StopLatentExecution_Parms, NULL );
		pfnStopLatentExecution->FunctionFlags |= 0x400;
	};

	bool InLatentExecution ( int LatentActionNumber )
	{
		static UFunction* pfnInLatentExecution = NULL;

		if ( !pfnInLatentExecution )
			pfnInLatentExecution = UObject::FindObject< UFunction >( "Function Engine.Controller.InLatentExecution" );

		AController_execInLatentExecution_Parms InLatentExecution_Parms;
		InLatentExecution_Parms.LatentActionNumber = LatentActionNumber;

		pfnInLatentExecution->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInLatentExecution, &InLatentExecution_Parms, NULL );
		pfnInLatentExecution->FunctionFlags |= 0x400;

		return InLatentExecution_Parms.ReturnValue;
	};

	void eventNotifyMissedJump ()
	{
		static UFunction* pfnNotifyMissedJump = NULL;

		if ( !pfnNotifyMissedJump )
			pfnNotifyMissedJump = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyMissedJump" );

		AController_eventNotifyMissedJump_Parms NotifyMissedJump_Parms;

		this->ProcessEvent( pfnNotifyMissedJump, &NotifyMissedJump_Parms, NULL );
	};

	void eventNotifyJumpApex ()
	{
		static UFunction* pfnNotifyJumpApex = NULL;

		if ( !pfnNotifyJumpApex )
			pfnNotifyJumpApex = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyJumpApex" );

		AController_eventNotifyJumpApex_Parms NotifyJumpApex_Parms;

		this->ProcessEvent( pfnNotifyJumpApex, &NotifyJumpApex_Parms, NULL );
	};

	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal )
	{
		static UFunction* pfnNotifyBump = NULL;

		if ( !pfnNotifyBump )
			pfnNotifyBump = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyBump" );

		AController_eventNotifyBump_Parms NotifyBump_Parms;
		NotifyBump_Parms.Other = Other;
		memcpy( &NotifyBump_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnNotifyBump, &NotifyBump_Parms, NULL );

		return NotifyBump_Parms.ReturnValue;
	};

	void eventNotifyFallingHitWall ( struct FVector HitNormal, class AActor* Wall )
	{
		static UFunction* pfnNotifyFallingHitWall = NULL;

		if ( !pfnNotifyFallingHitWall )
			pfnNotifyFallingHitWall = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyFallingHitWall" );

		AController_eventNotifyFallingHitWall_Parms NotifyFallingHitWall_Parms;
		memcpy( &NotifyFallingHitWall_Parms.HitNormal, &HitNormal, 0xC );
		NotifyFallingHitWall_Parms.Wall = Wall;

		this->ProcessEvent( pfnNotifyFallingHitWall, &NotifyFallingHitWall_Parms, NULL );
	};

	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall )
	{
		static UFunction* pfnNotifyHitWall = NULL;

		if ( !pfnNotifyHitWall )
			pfnNotifyHitWall = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyHitWall" );

		AController_eventNotifyHitWall_Parms NotifyHitWall_Parms;
		memcpy( &NotifyHitWall_Parms.HitNormal, &HitNormal, 0xC );
		NotifyHitWall_Parms.Wall = Wall;

		this->ProcessEvent( pfnNotifyHitWall, &NotifyHitWall_Parms, NULL );

		return NotifyHitWall_Parms.ReturnValue;
	};

	bool eventNotifyLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnNotifyLanded = NULL;

		if ( !pfnNotifyLanded )
			pfnNotifyLanded = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyLanded" );

		AController_eventNotifyLanded_Parms NotifyLanded_Parms;
		memcpy( &NotifyLanded_Parms.HitNormal, &HitNormal, 0xC );
		NotifyLanded_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnNotifyLanded, &NotifyLanded_Parms, NULL );

		return NotifyLanded_Parms.ReturnValue;
	};

	bool eventNotifyHeadVolumeChange ( void* NewVolume )
	{
		static UFunction* pfnNotifyHeadVolumeChange = NULL;

		if ( !pfnNotifyHeadVolumeChange )
			pfnNotifyHeadVolumeChange = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyHeadVolumeChange" );

		AController_eventNotifyHeadVolumeChange_Parms NotifyHeadVolumeChange_Parms;
		NotifyHeadVolumeChange_Parms.NewVolume = NewVolume;

		this->ProcessEvent( pfnNotifyHeadVolumeChange, &NotifyHeadVolumeChange_Parms, NULL );

		return NotifyHeadVolumeChange_Parms.ReturnValue;
	};

	void eventNotifyPhysicsVolumeChange ( void* NewVolume )
	{
		static UFunction* pfnNotifyPhysicsVolumeChange = NULL;

		if ( !pfnNotifyPhysicsVolumeChange )
			pfnNotifyPhysicsVolumeChange = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyPhysicsVolumeChange" );

		AController_eventNotifyPhysicsVolumeChange_Parms NotifyPhysicsVolumeChange_Parms;
		NotifyPhysicsVolumeChange_Parms.NewVolume = NewVolume;

		this->ProcessEvent( pfnNotifyPhysicsVolumeChange, &NotifyPhysicsVolumeChange_Parms, NULL );
	};

	bool LandingShake ()
	{
		static UFunction* pfnLandingShake = NULL;

		if ( !pfnLandingShake )
			pfnLandingShake = UObject::FindObject< UFunction >( "Function Engine.Controller.LandingShake" );

		AController_execLandingShake_Parms LandingShake_Parms;

		this->ProcessEvent( pfnLandingShake, &LandingShake_Parms, NULL );

		return LandingShake_Parms.ReturnValue;
	};

	bool IsAimingAt ( class AActor* ATarget, float Epsilon )
	{
		static UFunction* pfnIsAimingAt = NULL;

		if ( !pfnIsAimingAt )
			pfnIsAimingAt = UObject::FindObject< UFunction >( "Function Engine.Controller.IsAimingAt" );

		AController_execIsAimingAt_Parms IsAimingAt_Parms;
		IsAimingAt_Parms.ATarget = ATarget;
		IsAimingAt_Parms.Epsilon = Epsilon;

		this->ProcessEvent( pfnIsAimingAt, &IsAimingAt_Parms, NULL );

		return IsAimingAt_Parms.ReturnValue;
	};

	void eventGetActorEyesViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetActorEyesViewPoint = NULL;

		if ( !pfnGetActorEyesViewPoint )
			pfnGetActorEyesViewPoint = UObject::FindObject< UFunction >( "Function Engine.Controller.GetActorEyesViewPoint" );

		AController_eventGetActorEyesViewPoint_Parms GetActorEyesViewPoint_Parms;

		this->ProcessEvent( pfnGetActorEyesViewPoint, &GetActorEyesViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetActorEyesViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetActorEyesViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetPlayerViewPoint = NULL;

		if ( !pfnGetPlayerViewPoint )
			pfnGetPlayerViewPoint = UObject::FindObject< UFunction >( "Function Engine.Controller.GetPlayerViewPoint" );

		AController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

		this->ProcessEvent( pfnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetPlayerViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetPlayerViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	bool eventHandlePathObstruction ( class AActor* BlockedBy )
	{
		static UFunction* pfnHandlePathObstruction = NULL;

		if ( !pfnHandlePathObstruction )
			pfnHandlePathObstruction = UObject::FindObject< UFunction >( "Function Engine.Controller.HandlePathObstruction" );

		AController_eventHandlePathObstruction_Parms HandlePathObstruction_Parms;
		HandlePathObstruction_Parms.BlockedBy = BlockedBy;

		this->ProcessEvent( pfnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

		return HandlePathObstruction_Parms.ReturnValue;
	};

	void UnderLift ( void* Lift )
	{
		static UFunction* pfnUnderLift = NULL;

		if ( !pfnUnderLift )
			pfnUnderLift = UObject::FindObject< UFunction >( "Function Engine.Controller.UnderLift" );

		AController_execUnderLift_Parms UnderLift_Parms;
		UnderLift_Parms.Lift = Lift;

		this->ProcessEvent( pfnUnderLift, &UnderLift_Parms, NULL );
	};

	bool eventMoverFinished ()
	{
		static UFunction* pfnMoverFinished = NULL;

		if ( !pfnMoverFinished )
			pfnMoverFinished = UObject::FindObject< UFunction >( "Function Engine.Controller.MoverFinished" );

		AController_eventMoverFinished_Parms MoverFinished_Parms;

		this->ProcessEvent( pfnMoverFinished, &MoverFinished_Parms, NULL );

		return MoverFinished_Parms.ReturnValue;
	};

	void WaitForMover ( void* M )
	{
		static UFunction* pfnWaitForMover = NULL;

		if ( !pfnWaitForMover )
			pfnWaitForMover = UObject::FindObject< UFunction >( "Function Engine.Controller.WaitForMover" );

		AController_execWaitForMover_Parms WaitForMover_Parms;
		WaitForMover_Parms.M = M;

		this->ProcessEvent( pfnWaitForMover, &WaitForMover_Parms, NULL );
	};

	bool eventAllowDetourTo ( class ANavigationPoint* N )
	{
		static UFunction* pfnAllowDetourTo = NULL;

		if ( !pfnAllowDetourTo )
			pfnAllowDetourTo = UObject::FindObject< UFunction >( "Function Engine.Controller.AllowDetourTo" );

		AController_eventAllowDetourTo_Parms AllowDetourTo_Parms;
		AllowDetourTo_Parms.N = N;

		this->ProcessEvent( pfnAllowDetourTo, &AllowDetourTo_Parms, NULL );

		return AllowDetourTo_Parms.ReturnValue;
	};

	void eventMayFall ()
	{
		static UFunction* pfnMayFall = NULL;

		if ( !pfnMayFall )
			pfnMayFall = UObject::FindObject< UFunction >( "Function Engine.Controller.MayFall" );

		AController_eventMayFall_Parms MayFall_Parms;

		this->ProcessEvent( pfnMayFall, &MayFall_Parms, NULL );
	};

	void EndClimbLadder ()
	{
		static UFunction* pfnEndClimbLadder = NULL;

		if ( !pfnEndClimbLadder )
			pfnEndClimbLadder = UObject::FindObject< UFunction >( "Function Engine.Controller.EndClimbLadder" );

		AController_execEndClimbLadder_Parms EndClimbLadder_Parms;

		pfnEndClimbLadder->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEndClimbLadder, &EndClimbLadder_Parms, NULL );
		pfnEndClimbLadder->FunctionFlags |= 0x400;
	};

	void eventLongFall ()
	{
		static UFunction* pfnLongFall = NULL;

		if ( !pfnLongFall )
			pfnLongFall = UObject::FindObject< UFunction >( "Function Engine.Controller.LongFall" );

		AController_eventLongFall_Parms LongFall_Parms;

		this->ProcessEvent( pfnLongFall, &LongFall_Parms, NULL );
	};

	void WaitForLanding ( float waitDuration/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnWaitForLanding = NULL;

		if ( !pfnWaitForLanding )
			pfnWaitForLanding = UObject::FindObject< UFunction >( "Function Engine.Controller.WaitForLanding" );

		AController_execWaitForLanding_Parms WaitForLanding_Parms;
		WaitForLanding_Parms.waitDuration = waitDuration;

		WORD NativeIndex = pfnWaitForLanding->iNative;
		pfnWaitForLanding->iNative = 0;

		pfnWaitForLanding->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnWaitForLanding, &WaitForLanding_Parms, NULL );
		pfnWaitForLanding->FunctionFlags |= 0x400;

		pfnWaitForLanding->iNative = NativeIndex;
	};

	bool PickWallAdjust ( struct FVector HitNormal )
	{
		static UFunction* pfnPickWallAdjust = NULL;

		if ( !pfnPickWallAdjust )
			pfnPickWallAdjust = UObject::FindObject< UFunction >( "Function Engine.Controller.PickWallAdjust" );

		AController_execPickWallAdjust_Parms PickWallAdjust_Parms;
		memcpy( &PickWallAdjust_Parms.HitNormal, &HitNormal, 0xC );

		WORD NativeIndex = pfnPickWallAdjust->iNative;
		pfnPickWallAdjust->iNative = 0;

		pfnPickWallAdjust->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPickWallAdjust, &PickWallAdjust_Parms, NULL );
		pfnPickWallAdjust->FunctionFlags |= 0x400;

		pfnPickWallAdjust->iNative = NativeIndex;

		return PickWallAdjust_Parms.ReturnValue;
	};

	void eventMoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget )
	{
		static UFunction* pfnMoveUnreachable = NULL;

		if ( !pfnMoveUnreachable )
			pfnMoveUnreachable = UObject::FindObject< UFunction >( "Function Engine.Controller.MoveUnreachable" );

		AController_eventMoveUnreachable_Parms MoveUnreachable_Parms;
		memcpy( &MoveUnreachable_Parms.AttemptedDest, &AttemptedDest, 0xC );
		MoveUnreachable_Parms.AttemptedTarget = AttemptedTarget;

		this->ProcessEvent( pfnMoveUnreachable, &MoveUnreachable_Parms, NULL );
	};

	bool ActorReachable ( class AActor* anActor )
	{
		static UFunction* pfnActorReachable = NULL;

		if ( !pfnActorReachable )
			pfnActorReachable = UObject::FindObject< UFunction >( "Function Engine.Controller.ActorReachable" );

		AController_execActorReachable_Parms ActorReachable_Parms;
		ActorReachable_Parms.anActor = anActor;

		WORD NativeIndex = pfnActorReachable->iNative;
		pfnActorReachable->iNative = 0;

		pfnActorReachable->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnActorReachable, &ActorReachable_Parms, NULL );
		pfnActorReachable->FunctionFlags |= 0x400;

		pfnActorReachable->iNative = NativeIndex;

		return ActorReachable_Parms.ReturnValue;
	};

	bool PointReachable ( struct FVector aPoint )
	{
		static UFunction* pfnPointReachable = NULL;

		if ( !pfnPointReachable )
			pfnPointReachable = UObject::FindObject< UFunction >( "Function Engine.Controller.PointReachable" );

		AController_execPointReachable_Parms PointReachable_Parms;
		memcpy( &PointReachable_Parms.aPoint, &aPoint, 0xC );

		WORD NativeIndex = pfnPointReachable->iNative;
		pfnPointReachable->iNative = 0;

		pfnPointReachable->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPointReachable, &PointReachable_Parms, NULL );
		pfnPointReachable->FunctionFlags |= 0x400;

		pfnPointReachable->iNative = NativeIndex;

		return PointReachable_Parms.ReturnValue;
	};

	class AActor* FindPathToIntercept ( class APawn* P, class AActor* InRouteGoal, unsigned long bWeightDetours/*CPF_OptionalParm*/, int MaxPathLength/*CPF_OptionalParm*/, unsigned long bReturnPartial/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPathToIntercept = NULL;

		if ( !pfnFindPathToIntercept )
			pfnFindPathToIntercept = UObject::FindObject< UFunction >( "Function Engine.Controller.FindPathToIntercept" );

		AController_execFindPathToIntercept_Parms FindPathToIntercept_Parms;
		FindPathToIntercept_Parms.P = P;
		FindPathToIntercept_Parms.InRouteGoal = InRouteGoal;
		FindPathToIntercept_Parms.bWeightDetours = bWeightDetours;
		FindPathToIntercept_Parms.MaxPathLength = MaxPathLength;
		FindPathToIntercept_Parms.bReturnPartial = bReturnPartial;

		pfnFindPathToIntercept->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindPathToIntercept, &FindPathToIntercept_Parms, NULL );
		pfnFindPathToIntercept->FunctionFlags |= 0x400;

		return FindPathToIntercept_Parms.ReturnValue;
	};

	class ANavigationPoint* FindRandomDest ()
	{
		static UFunction* pfnFindRandomDest = NULL;

		if ( !pfnFindRandomDest )
			pfnFindRandomDest = UObject::FindObject< UFunction >( "Function Engine.Controller.FindRandomDest" );

		AController_execFindRandomDest_Parms FindRandomDest_Parms;

		WORD NativeIndex = pfnFindRandomDest->iNative;
		pfnFindRandomDest->iNative = 0;

		pfnFindRandomDest->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindRandomDest, &FindRandomDest_Parms, NULL );
		pfnFindRandomDest->FunctionFlags |= 0x400;

		pfnFindRandomDest->iNative = NativeIndex;

		return FindRandomDest_Parms.ReturnValue;
	};

	class AActor* FindPathTowardNearest ( class UClass* GoalClass, unsigned long bWeightDetours/*CPF_OptionalParm*/, int MaxPathLength/*CPF_OptionalParm*/, unsigned long bReturnPartial/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPathTowardNearest = NULL;

		if ( !pfnFindPathTowardNearest )
			pfnFindPathTowardNearest = UObject::FindObject< UFunction >( "Function Engine.Controller.FindPathTowardNearest" );

		AController_execFindPathTowardNearest_Parms FindPathTowardNearest_Parms;
		FindPathTowardNearest_Parms.GoalClass = GoalClass;
		FindPathTowardNearest_Parms.bWeightDetours = bWeightDetours;
		FindPathTowardNearest_Parms.MaxPathLength = MaxPathLength;
		FindPathTowardNearest_Parms.bReturnPartial = bReturnPartial;

		pfnFindPathTowardNearest->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindPathTowardNearest, &FindPathTowardNearest_Parms, NULL );
		pfnFindPathTowardNearest->FunctionFlags |= 0x400;

		return FindPathTowardNearest_Parms.ReturnValue;
	};

	class AActor* FindPathToward ( class AActor* anActor, unsigned long bWeightDetours/*CPF_OptionalParm*/, int MaxPathLength/*CPF_OptionalParm*/, unsigned long bReturnPartial/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPathToward = NULL;

		if ( !pfnFindPathToward )
			pfnFindPathToward = UObject::FindObject< UFunction >( "Function Engine.Controller.FindPathToward" );

		AController_execFindPathToward_Parms FindPathToward_Parms;
		FindPathToward_Parms.anActor = anActor;
		FindPathToward_Parms.bWeightDetours = bWeightDetours;
		FindPathToward_Parms.MaxPathLength = MaxPathLength;
		FindPathToward_Parms.bReturnPartial = bReturnPartial;

		WORD NativeIndex = pfnFindPathToward->iNative;
		pfnFindPathToward->iNative = 0;

		pfnFindPathToward->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindPathToward, &FindPathToward_Parms, NULL );
		pfnFindPathToward->FunctionFlags |= 0x400;

		pfnFindPathToward->iNative = NativeIndex;

		return FindPathToward_Parms.ReturnValue;
	};

	class AActor* FindPathTo ( struct FVector aPoint, int MaxPathLength/*CPF_OptionalParm*/, unsigned long bReturnPartial/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPathTo = NULL;

		if ( !pfnFindPathTo )
			pfnFindPathTo = UObject::FindObject< UFunction >( "Function Engine.Controller.FindPathTo" );

		AController_execFindPathTo_Parms FindPathTo_Parms;
		memcpy( &FindPathTo_Parms.aPoint, &aPoint, 0xC );
		FindPathTo_Parms.MaxPathLength = MaxPathLength;
		FindPathTo_Parms.bReturnPartial = bReturnPartial;

		WORD NativeIndex = pfnFindPathTo->iNative;
		pfnFindPathTo->iNative = 0;

		pfnFindPathTo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindPathTo, &FindPathTo_Parms, NULL );
		pfnFindPathTo->FunctionFlags |= 0x400;

		pfnFindPathTo->iNative = NativeIndex;

		return FindPathTo_Parms.ReturnValue;
	};

	void FinishRotation ()
	{
		static UFunction* pfnFinishRotation = NULL;

		if ( !pfnFinishRotation )
			pfnFinishRotation = UObject::FindObject< UFunction >( "Function Engine.Controller.FinishRotation" );

		AController_execFinishRotation_Parms FinishRotation_Parms;

		WORD NativeIndex = pfnFinishRotation->iNative;
		pfnFinishRotation->iNative = 0;

		pfnFinishRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFinishRotation, &FinishRotation_Parms, NULL );
		pfnFinishRotation->FunctionFlags |= 0x400;

		pfnFinishRotation->iNative = NativeIndex;
	};

	void eventSetupSpecialPathAbilities ()
	{
		static UFunction* pfnSetupSpecialPathAbilities = NULL;

		if ( !pfnSetupSpecialPathAbilities )
			pfnSetupSpecialPathAbilities = UObject::FindObject< UFunction >( "Function Engine.Controller.SetupSpecialPathAbilities" );

		AController_eventSetupSpecialPathAbilities_Parms SetupSpecialPathAbilities_Parms;

		this->ProcessEvent( pfnSetupSpecialPathAbilities, &SetupSpecialPathAbilities_Parms, NULL );
	};

	void MoveToward ( class AActor* NewTarget, class AActor* ViewFocus/*CPF_OptionalParm*/, float DestinationOffset/*CPF_OptionalParm*/, unsigned long bUseStrafing/*CPF_OptionalParm*/, unsigned long bShouldWalk/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMoveToward = NULL;

		if ( !pfnMoveToward )
			pfnMoveToward = UObject::FindObject< UFunction >( "Function Engine.Controller.MoveToward" );

		AController_execMoveToward_Parms MoveToward_Parms;
		MoveToward_Parms.NewTarget = NewTarget;
		MoveToward_Parms.ViewFocus = ViewFocus;
		MoveToward_Parms.DestinationOffset = DestinationOffset;
		MoveToward_Parms.bUseStrafing = bUseStrafing;
		MoveToward_Parms.bShouldWalk = bShouldWalk;

		WORD NativeIndex = pfnMoveToward->iNative;
		pfnMoveToward->iNative = 0;

		pfnMoveToward->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMoveToward, &MoveToward_Parms, NULL );
		pfnMoveToward->FunctionFlags |= 0x400;

		pfnMoveToward->iNative = NativeIndex;
	};

	void MoveTo ( struct FVector NewDestination, class AActor* ViewFocus/*CPF_OptionalParm*/, unsigned long bShouldWalk/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMoveTo = NULL;

		if ( !pfnMoveTo )
			pfnMoveTo = UObject::FindObject< UFunction >( "Function Engine.Controller.MoveTo" );

		AController_execMoveTo_Parms MoveTo_Parms;
		memcpy( &MoveTo_Parms.NewDestination, &NewDestination, 0xC );
		MoveTo_Parms.ViewFocus = ViewFocus;
		MoveTo_Parms.bShouldWalk = bShouldWalk;

		WORD NativeIndex = pfnMoveTo->iNative;
		pfnMoveTo->iNative = 0;

		pfnMoveTo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMoveTo, &MoveTo_Parms, NULL );
		pfnMoveTo->FunctionFlags |= 0x400;

		pfnMoveTo->iNative = NativeIndex;
	};

	void eventEnemyNotVisible ()
	{
		static UFunction* pfnEnemyNotVisible = NULL;

		if ( !pfnEnemyNotVisible )
			pfnEnemyNotVisible = UObject::FindObject< UFunction >( "Function Engine.Controller.EnemyNotVisible" );

		AController_eventEnemyNotVisible_Parms EnemyNotVisible_Parms;

		this->ProcessEvent( pfnEnemyNotVisible, &EnemyNotVisible_Parms, NULL );
	};

	void eventSeeMonster ( class APawn* Seen )
	{
		static UFunction* pfnSeeMonster = NULL;

		if ( !pfnSeeMonster )
			pfnSeeMonster = UObject::FindObject< UFunction >( "Function Engine.Controller.SeeMonster" );

		AController_eventSeeMonster_Parms SeeMonster_Parms;
		SeeMonster_Parms.Seen = Seen;

		this->ProcessEvent( pfnSeeMonster, &SeeMonster_Parms, NULL );
	};

	void eventSeePlayer ( class APawn* Seen )
	{
		static UFunction* pfnSeePlayer = NULL;

		if ( !pfnSeePlayer )
			pfnSeePlayer = UObject::FindObject< UFunction >( "Function Engine.Controller.SeePlayer" );

		AController_eventSeePlayer_Parms SeePlayer_Parms;
		SeePlayer_Parms.Seen = Seen;

		this->ProcessEvent( pfnSeePlayer, &SeePlayer_Parms, NULL );
	};

	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHearNoise = NULL;

		if ( !pfnHearNoise )
			pfnHearNoise = UObject::FindObject< UFunction >( "Function Engine.Controller.HearNoise" );

		AController_eventHearNoise_Parms HearNoise_Parms;
		HearNoise_Parms.Loudness = Loudness;
		HearNoise_Parms.NoiseMaker = NoiseMaker;
		memcpy( &HearNoise_Parms.NoiseType, &NoiseType, 0x8 );

		this->ProcessEvent( pfnHearNoise, &HearNoise_Parms, NULL );
	};

	class APawn* PickTarget ( class UClass* TargetClass, struct FVector FireDir, struct FVector projStart, float MaxRange, float* bestAim, float* bestDist )
	{
		static UFunction* pfnPickTarget = NULL;

		if ( !pfnPickTarget )
			pfnPickTarget = UObject::FindObject< UFunction >( "Function Engine.Controller.PickTarget" );

		AController_execPickTarget_Parms PickTarget_Parms;
		PickTarget_Parms.TargetClass = TargetClass;
		memcpy( &PickTarget_Parms.FireDir, &FireDir, 0xC );
		memcpy( &PickTarget_Parms.projStart, &projStart, 0xC );
		PickTarget_Parms.MaxRange = MaxRange;

		WORD NativeIndex = pfnPickTarget->iNative;
		pfnPickTarget->iNative = 0;

		pfnPickTarget->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPickTarget, &PickTarget_Parms, NULL );
		pfnPickTarget->FunctionFlags |= 0x400;

		pfnPickTarget->iNative = NativeIndex;

		if ( bestAim )
			*bestAim = PickTarget_Parms.bestAim; // CPF_OutParm
		if ( bestDist )
			*bestDist = PickTarget_Parms.bestDist; // CPF_OutParm

		return PickTarget_Parms.ReturnValue;
	};

	bool CanSeeByPoints ( struct FVector ViewLocation, struct FVector TestLocation, struct FRotator ViewRotation )
	{
		static UFunction* pfnCanSeeByPoints = NULL;

		if ( !pfnCanSeeByPoints )
			pfnCanSeeByPoints = UObject::FindObject< UFunction >( "Function Engine.Controller.CanSeeByPoints" );

		AController_execCanSeeByPoints_Parms CanSeeByPoints_Parms;
		memcpy( &CanSeeByPoints_Parms.ViewLocation, &ViewLocation, 0xC );
		memcpy( &CanSeeByPoints_Parms.TestLocation, &TestLocation, 0xC );
		memcpy( &CanSeeByPoints_Parms.ViewRotation, &ViewRotation, 0xC );

		WORD NativeIndex = pfnCanSeeByPoints->iNative;
		pfnCanSeeByPoints->iNative = 0;

		pfnCanSeeByPoints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanSeeByPoints, &CanSeeByPoints_Parms, NULL );
		pfnCanSeeByPoints->FunctionFlags |= 0x400;

		pfnCanSeeByPoints->iNative = NativeIndex;

		return CanSeeByPoints_Parms.ReturnValue;
	};

	bool CanSee ( class APawn* Other )
	{
		static UFunction* pfnCanSee = NULL;

		if ( !pfnCanSee )
			pfnCanSee = UObject::FindObject< UFunction >( "Function Engine.Controller.CanSee" );

		AController_execCanSee_Parms CanSee_Parms;
		CanSee_Parms.Other = Other;

		WORD NativeIndex = pfnCanSee->iNative;
		pfnCanSee->iNative = 0;

		pfnCanSee->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanSee, &CanSee_Parms, NULL );
		pfnCanSee->FunctionFlags |= 0x400;

		pfnCanSee->iNative = NativeIndex;

		return CanSee_Parms.ReturnValue;
	};

	bool LineOfSightTo ( class AActor* Other, struct FVector chkLocation/*CPF_OptionalParm*/, unsigned long bTryAlternateTargetLoc/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnLineOfSightTo = NULL;

		if ( !pfnLineOfSightTo )
			pfnLineOfSightTo = UObject::FindObject< UFunction >( "Function Engine.Controller.LineOfSightTo" );

		AController_execLineOfSightTo_Parms LineOfSightTo_Parms;
		LineOfSightTo_Parms.Other = Other;
		memcpy( &LineOfSightTo_Parms.chkLocation, &chkLocation, 0xC );
		LineOfSightTo_Parms.bTryAlternateTargetLoc = bTryAlternateTargetLoc;

		WORD NativeIndex = pfnLineOfSightTo->iNative;
		pfnLineOfSightTo->iNative = 0;

		pfnLineOfSightTo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLineOfSightTo, &LineOfSightTo_Parms, NULL );
		pfnLineOfSightTo->FunctionFlags |= 0x400;

		pfnLineOfSightTo->iNative = NativeIndex;

		return LineOfSightTo_Parms.ReturnValue;
	};

	void NotifyChangedWeapon ( class AWeapon* PrevWeapon, class AWeapon* NewWeapon )
	{
		static UFunction* pfnNotifyChangedWeapon = NULL;

		if ( !pfnNotifyChangedWeapon )
			pfnNotifyChangedWeapon = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyChangedWeapon" );

		AController_execNotifyChangedWeapon_Parms NotifyChangedWeapon_Parms;
		NotifyChangedWeapon_Parms.PrevWeapon = PrevWeapon;
		NotifyChangedWeapon_Parms.NewWeapon = NewWeapon;

		this->ProcessEvent( pfnNotifyChangedWeapon, &NotifyChangedWeapon_Parms, NULL );
	};

	void ClientSetWeapon ( class UClass* WeaponClass )
	{
		static UFunction* pfnClientSetWeapon = NULL;

		if ( !pfnClientSetWeapon )
			pfnClientSetWeapon = UObject::FindObject< UFunction >( "Function Engine.Controller.ClientSetWeapon" );

		AController_execClientSetWeapon_Parms ClientSetWeapon_Parms;
		ClientSetWeapon_Parms.WeaponClass = WeaponClass;

		this->ProcessEvent( pfnClientSetWeapon, &ClientSetWeapon_Parms, NULL );
	};

	void ClientSwitchToBestWeapon ( unsigned long bForceNewWeapon/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSwitchToBestWeapon = NULL;

		if ( !pfnClientSwitchToBestWeapon )
			pfnClientSwitchToBestWeapon = UObject::FindObject< UFunction >( "Function Engine.Controller.ClientSwitchToBestWeapon" );

		AController_execClientSwitchToBestWeapon_Parms ClientSwitchToBestWeapon_Parms;
		ClientSwitchToBestWeapon_Parms.bForceNewWeapon = bForceNewWeapon;

		this->ProcessEvent( pfnClientSwitchToBestWeapon, &ClientSwitchToBestWeapon_Parms, NULL );
	};

	void SwitchToBestWeapon ( unsigned long bForceNewWeapon/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSwitchToBestWeapon = NULL;

		if ( !pfnSwitchToBestWeapon )
			pfnSwitchToBestWeapon = UObject::FindObject< UFunction >( "Function Engine.Controller.SwitchToBestWeapon" );

		AController_execSwitchToBestWeapon_Parms SwitchToBestWeapon_Parms;
		SwitchToBestWeapon_Parms.bForceNewWeapon = bForceNewWeapon;

		this->ProcessEvent( pfnSwitchToBestWeapon, &SwitchToBestWeapon_Parms, NULL );
	};

	void ReceiveProjectileWarning ( class AProjectile* Proj )
	{
		static UFunction* pfnReceiveProjectileWarning = NULL;

		if ( !pfnReceiveProjectileWarning )
			pfnReceiveProjectileWarning = UObject::FindObject< UFunction >( "Function Engine.Controller.ReceiveProjectileWarning" );

		AController_execReceiveProjectileWarning_Parms ReceiveProjectileWarning_Parms;
		ReceiveProjectileWarning_Parms.Proj = Proj;

		this->ProcessEvent( pfnReceiveProjectileWarning, &ReceiveProjectileWarning_Parms, NULL );
	};

	void ReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir )
	{
		static UFunction* pfnReceiveWarning = NULL;

		if ( !pfnReceiveWarning )
			pfnReceiveWarning = UObject::FindObject< UFunction >( "Function Engine.Controller.ReceiveWarning" );

		AController_execReceiveWarning_Parms ReceiveWarning_Parms;
		ReceiveWarning_Parms.shooter = shooter;
		ReceiveWarning_Parms.projSpeed = projSpeed;
		memcpy( &ReceiveWarning_Parms.FireDir, &FireDir, 0xC );

		this->ProcessEvent( pfnReceiveWarning, &ReceiveWarning_Parms, NULL );
	};

	void InstantWarnTarget ( class AActor* InTarget, class AWeapon* FiredWeapon, struct FVector FireDir )
	{
		static UFunction* pfnInstantWarnTarget = NULL;

		if ( !pfnInstantWarnTarget )
			pfnInstantWarnTarget = UObject::FindObject< UFunction >( "Function Engine.Controller.InstantWarnTarget" );

		AController_execInstantWarnTarget_Parms InstantWarnTarget_Parms;
		InstantWarnTarget_Parms.InTarget = InTarget;
		InstantWarnTarget_Parms.FiredWeapon = FiredWeapon;
		memcpy( &InstantWarnTarget_Parms.FireDir, &FireDir, 0xC );

		this->ProcessEvent( pfnInstantWarnTarget, &InstantWarnTarget_Parms, NULL );
	};

	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc )
	{
		static UFunction* pfnGetAdjustedAimFor = NULL;

		if ( !pfnGetAdjustedAimFor )
			pfnGetAdjustedAimFor = UObject::FindObject< UFunction >( "Function Engine.Controller.GetAdjustedAimFor" );

		AController_execGetAdjustedAimFor_Parms GetAdjustedAimFor_Parms;
		GetAdjustedAimFor_Parms.W = W;
		memcpy( &GetAdjustedAimFor_Parms.StartFireLoc, &StartFireLoc, 0xC );

		this->ProcessEvent( pfnGetAdjustedAimFor, &GetAdjustedAimFor_Parms, NULL );

		return GetAdjustedAimFor_Parms.ReturnValue;
	};

	void HandlePickup ( class AInventory* Inv )
	{
		static UFunction* pfnHandlePickup = NULL;

		if ( !pfnHandlePickup )
			pfnHandlePickup = UObject::FindObject< UFunction >( "Function Engine.Controller.HandlePickup" );

		AController_execHandlePickup_Parms HandlePickup_Parms;
		HandlePickup_Parms.Inv = Inv;

		this->ProcessEvent( pfnHandlePickup, &HandlePickup_Parms, NULL );
	};

	void RoundHasEnded ( class AActor* EndRoundFocus/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRoundHasEnded = NULL;

		if ( !pfnRoundHasEnded )
			pfnRoundHasEnded = UObject::FindObject< UFunction >( "Function Engine.Controller.RoundHasEnded" );

		AController_execRoundHasEnded_Parms RoundHasEnded_Parms;
		RoundHasEnded_Parms.EndRoundFocus = EndRoundFocus;

		this->ProcessEvent( pfnRoundHasEnded, &RoundHasEnded_Parms, NULL );
	};

	void eventStopFiring ()
	{
		static UFunction* pfnStopFiring = NULL;

		if ( !pfnStopFiring )
			pfnStopFiring = UObject::FindObject< UFunction >( "Function Engine.Controller.StopFiring" );

		AController_eventStopFiring_Parms StopFiring_Parms;

		this->ProcessEvent( pfnStopFiring, &StopFiring_Parms, NULL );
	};

	bool FireWeaponAt ( class AActor* inActor )
	{
		static UFunction* pfnFireWeaponAt = NULL;

		if ( !pfnFireWeaponAt )
			pfnFireWeaponAt = UObject::FindObject< UFunction >( "Function Engine.Controller.FireWeaponAt" );

		AController_execFireWeaponAt_Parms FireWeaponAt_Parms;
		FireWeaponAt_Parms.inActor = inActor;

		this->ProcessEvent( pfnFireWeaponAt, &FireWeaponAt_Parms, NULL );

		return FireWeaponAt_Parms.ReturnValue;
	};

	float eventRatePickup ( class AActor* PickupHolder, class UClass* inPickup )
	{
		static UFunction* pfnRatePickup = NULL;

		if ( !pfnRatePickup )
			pfnRatePickup = UObject::FindObject< UFunction >( "Function Engine.Controller.RatePickup" );

		AController_eventRatePickup_Parms RatePickup_Parms;
		RatePickup_Parms.PickupHolder = PickupHolder;
		RatePickup_Parms.inPickup = inPickup;

		this->ProcessEvent( pfnRatePickup, &RatePickup_Parms, NULL );

		return RatePickup_Parms.ReturnValue;
	};

	void WarnProjExplode ( class AProjectile* Proj )
	{
		static UFunction* pfnWarnProjExplode = NULL;

		if ( !pfnWarnProjExplode )
			pfnWarnProjExplode = UObject::FindObject< UFunction >( "Function Engine.Controller.WarnProjExplode" );

		AController_execWarnProjExplode_Parms WarnProjExplode_Parms;
		WarnProjExplode_Parms.Proj = Proj;

		this->ProcessEvent( pfnWarnProjExplode, &WarnProjExplode_Parms, NULL );
	};

	void NotifyProjLanded ( class AProjectile* Proj )
	{
		static UFunction* pfnNotifyProjLanded = NULL;

		if ( !pfnNotifyProjLanded )
			pfnNotifyProjLanded = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyProjLanded" );

		AController_execNotifyProjLanded_Parms NotifyProjLanded_Parms;
		NotifyProjLanded_Parms.Proj = Proj;

		this->ProcessEvent( pfnNotifyProjLanded, &NotifyProjLanded_Parms, NULL );
	};

	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn )
	{
		static UFunction* pfnNotifyKilled = NULL;

		if ( !pfnNotifyKilled )
			pfnNotifyKilled = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyKilled" );

		AController_execNotifyKilled_Parms NotifyKilled_Parms;
		NotifyKilled_Parms.Killer = Killer;
		NotifyKilled_Parms.Killed = Killed;
		NotifyKilled_Parms.KilledPawn = KilledPawn;

		this->ProcessEvent( pfnNotifyKilled, &NotifyKilled_Parms, NULL );
	};

	void GameHasEnded ( class AActor* EndGameFocus/*CPF_OptionalParm*/, unsigned long bIsWinner/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGameHasEnded = NULL;

		if ( !pfnGameHasEnded )
			pfnGameHasEnded = UObject::FindObject< UFunction >( "Function Engine.Controller.GameHasEnded" );

		AController_execGameHasEnded_Parms GameHasEnded_Parms;
		GameHasEnded_Parms.EndGameFocus = EndGameFocus;
		GameHasEnded_Parms.bIsWinner = bIsWinner;

		this->ProcessEvent( pfnGameHasEnded, &GameHasEnded_Parms, NULL );
	};

	void SetCharacter ( struct FString inCharacter )
	{
		static UFunction* pfnSetCharacter = NULL;

		if ( !pfnSetCharacter )
			pfnSetCharacter = UObject::FindObject< UFunction >( "Function Engine.Controller.SetCharacter" );

		AController_execSetCharacter_Parms SetCharacter_Parms;
		memcpy( &SetCharacter_Parms.inCharacter, &inCharacter, 0xC );

		this->ProcessEvent( pfnSetCharacter, &SetCharacter_Parms, NULL );
	};

	void ServerGivePawn ()
	{
		static UFunction* pfnServerGivePawn = NULL;

		if ( !pfnServerGivePawn )
			pfnServerGivePawn = UObject::FindObject< UFunction >( "Function Engine.Controller.ServerGivePawn" );

		AController_execServerGivePawn_Parms ServerGivePawn_Parms;

		this->ProcessEvent( pfnServerGivePawn, &ServerGivePawn_Parms, NULL );
	};

	void ServerRestartPlayer ()
	{
		static UFunction* pfnServerRestartPlayer = NULL;

		if ( !pfnServerRestartPlayer )
			pfnServerRestartPlayer = UObject::FindObject< UFunction >( "Function Engine.Controller.ServerRestartPlayer" );

		AController_execServerRestartPlayer_Parms ServerRestartPlayer_Parms;

		this->ProcessEvent( pfnServerRestartPlayer, &ServerRestartPlayer_Parms, NULL );
	};

	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.Controller.GetTeamNum" );

		AController_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	void InitPlayerReplicationInfo ()
	{
		static UFunction* pfnInitPlayerReplicationInfo = NULL;

		if ( !pfnInitPlayerReplicationInfo )
			pfnInitPlayerReplicationInfo = UObject::FindObject< UFunction >( "Function Engine.Controller.InitPlayerReplicationInfo" );

		AController_execInitPlayerReplicationInfo_Parms InitPlayerReplicationInfo_Parms;

		this->ProcessEvent( pfnInitPlayerReplicationInfo, &InitPlayerReplicationInfo_Parms, NULL );
	};

	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
	{
		static UFunction* pfnNotifyTakeHit = NULL;

		if ( !pfnNotifyTakeHit )
			pfnNotifyTakeHit = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyTakeHit" );

		AController_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
		NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
		NotifyTakeHit_Parms.Damage = Damage;
		NotifyTakeHit_Parms.DamageType = DamageType;
		memcpy( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

		this->ProcessEvent( pfnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
	};

	void EnemyJustTeleported ()
	{
		static UFunction* pfnEnemyJustTeleported = NULL;

		if ( !pfnEnemyJustTeleported )
			pfnEnemyJustTeleported = UObject::FindObject< UFunction >( "Function Engine.Controller.EnemyJustTeleported" );

		AController_execEnemyJustTeleported_Parms EnemyJustTeleported_Parms;

		this->ProcessEvent( pfnEnemyJustTeleported, &EnemyJustTeleported_Parms, NULL );
	};

	bool BeyondFogDistance ( struct FVector ViewPoint, struct FVector OtherPoint )
	{
		static UFunction* pfnBeyondFogDistance = NULL;

		if ( !pfnBeyondFogDistance )
			pfnBeyondFogDistance = UObject::FindObject< UFunction >( "Function Engine.Controller.BeyondFogDistance" );

		AController_execBeyondFogDistance_Parms BeyondFogDistance_Parms;
		memcpy( &BeyondFogDistance_Parms.ViewPoint, &ViewPoint, 0xC );
		memcpy( &BeyondFogDistance_Parms.OtherPoint, &OtherPoint, 0xC );

		pfnBeyondFogDistance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBeyondFogDistance, &BeyondFogDistance_Parms, NULL );
		pfnBeyondFogDistance->FunctionFlags |= 0x400;

		return BeyondFogDistance_Parms.ReturnValue;
	};

	void Restart ( unsigned long bVehicleTransition )
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function Engine.Controller.Restart" );

		AController_execRestart_Parms Restart_Parms;
		Restart_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	void CleanupPRI ()
	{
		static UFunction* pfnCleanupPRI = NULL;

		if ( !pfnCleanupPRI )
			pfnCleanupPRI = UObject::FindObject< UFunction >( "Function Engine.Controller.CleanupPRI" );

		AController_execCleanupPRI_Parms CleanupPRI_Parms;

		this->ProcessEvent( pfnCleanupPRI, &CleanupPRI_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Controller.Destroyed" );

		AController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventNotifyPostLanded ()
	{
		static UFunction* pfnNotifyPostLanded = NULL;

		if ( !pfnNotifyPostLanded )
			pfnNotifyPostLanded = UObject::FindObject< UFunction >( "Function Engine.Controller.NotifyPostLanded" );

		AController_eventNotifyPostLanded_Parms NotifyPostLanded_Parms;

		this->ProcessEvent( pfnNotifyPostLanded, &NotifyPostLanded_Parms, NULL );
	};

	void GoToDeadState ()
	{
		static UFunction* pfnGoToDeadState = NULL;

		if ( !pfnGoToDeadState )
			pfnGoToDeadState = UObject::FindObject< UFunction >( "Function Engine.Controller.GoToDeadState" );

		AController_execGoToDeadState_Parms GoToDeadState_Parms;

		this->ProcessEvent( pfnGoToDeadState, &GoToDeadState_Parms, NULL );
	};

	bool GamePlayEndedState ()
	{
		static UFunction* pfnGamePlayEndedState = NULL;

		if ( !pfnGamePlayEndedState )
			pfnGamePlayEndedState = UObject::FindObject< UFunction >( "Function Engine.Controller.GamePlayEndedState" );

		AController_execGamePlayEndedState_Parms GamePlayEndedState_Parms;

		this->ProcessEvent( pfnGamePlayEndedState, &GamePlayEndedState_Parms, NULL );

		return GamePlayEndedState_Parms.ReturnValue;
	};

	void PawnDied ( class APawn* inPawn )
	{
		static UFunction* pfnPawnDied = NULL;

		if ( !pfnPawnDied )
			pfnPawnDied = UObject::FindObject< UFunction >( "Function Engine.Controller.PawnDied" );

		AController_execPawnDied_Parms PawnDied_Parms;
		PawnDied_Parms.inPawn = inPawn;

		this->ProcessEvent( pfnPawnDied, &PawnDied_Parms, NULL );
	};

	void eventUnPossess ()
	{
		static UFunction* pfnUnPossess = NULL;

		if ( !pfnUnPossess )
			pfnUnPossess = UObject::FindObject< UFunction >( "Function Engine.Controller.UnPossess" );

		AController_eventUnPossess_Parms UnPossess_Parms;

		this->ProcessEvent( pfnUnPossess, &UnPossess_Parms, NULL );
	};

	void UpdateSex ()
	{
		static UFunction* pfnUpdateSex = NULL;

		if ( !pfnUpdateSex )
			pfnUpdateSex = UObject::FindObject< UFunction >( "Function Engine.Controller.UpdateSex" );

		AController_execUpdateSex_Parms UpdateSex_Parms;

		this->ProcessEvent( pfnUpdateSex, &UpdateSex_Parms, NULL );
	};

	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function Engine.Controller.Possess" );

		AController_eventPossess_Parms Possess_Parms;
		Possess_Parms.inPawn = inPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void OnPossess ( void* inAction )
	{
		static UFunction* pfnOnPossess = NULL;

		if ( !pfnOnPossess )
			pfnOnPossess = UObject::FindObject< UFunction >( "Function Engine.Controller.OnPossess" );

		AController_execOnPossess_Parms OnPossess_Parms;
		OnPossess_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnPossess, &OnPossess_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.Controller.ReplicatedEvent" );

		AController_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void ClientSetRotation ( struct FRotator NewRotation, unsigned long bResetCamera/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSetRotation = NULL;

		if ( !pfnClientSetRotation )
			pfnClientSetRotation = UObject::FindObject< UFunction >( "Function Engine.Controller.ClientSetRotation" );

		AController_execClientSetRotation_Parms ClientSetRotation_Parms;
		memcpy( &ClientSetRotation_Parms.NewRotation, &NewRotation, 0xC );
		ClientSetRotation_Parms.bResetCamera = bResetCamera;

		this->ProcessEvent( pfnClientSetRotation, &ClientSetRotation_Parms, NULL );
	};

	void ClientSetLocation ( struct FVector NewLocation, struct FRotator NewRotation )
	{
		static UFunction* pfnClientSetLocation = NULL;

		if ( !pfnClientSetLocation )
			pfnClientSetLocation = UObject::FindObject< UFunction >( "Function Engine.Controller.ClientSetLocation" );

		AController_execClientSetLocation_Parms ClientSetLocation_Parms;
		memcpy( &ClientSetLocation_Parms.NewLocation, &NewLocation, 0xC );
		memcpy( &ClientSetLocation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnClientSetLocation, &ClientSetLocation_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.Controller.Reset" );

		AController_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Controller.PostBeginPlay" );

		AController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	struct FVector GetAdjustLocation ()
	{
		static UFunction* pfnGetAdjustLocation = NULL;

		if ( !pfnGetAdjustLocation )
			pfnGetAdjustLocation = UObject::FindObject< UFunction >( "Function Engine.Controller.GetAdjustLocation" );

		AController_execGetAdjustLocation_Parms GetAdjustLocation_Parms;

		pfnGetAdjustLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAdjustLocation, &GetAdjustLocation_Parms, NULL );
		pfnGetAdjustLocation->FunctionFlags |= 0x400;

		return GetAdjustLocation_Parms.ReturnValue;
	};

	void SetAdjustLocation ( struct FVector NewLoc, unsigned long bAdjust, unsigned long bOffsetFromBase/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetAdjustLocation = NULL;

		if ( !pfnSetAdjustLocation )
			pfnSetAdjustLocation = UObject::FindObject< UFunction >( "Function Engine.Controller.SetAdjustLocation" );

		AController_execSetAdjustLocation_Parms SetAdjustLocation_Parms;
		memcpy( &SetAdjustLocation_Parms.NewLoc, &NewLoc, 0xC );
		SetAdjustLocation_Parms.bAdjust = bAdjust;
		SetAdjustLocation_Parms.bOffsetFromBase = bOffsetFromBase;

		pfnSetAdjustLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAdjustLocation, &SetAdjustLocation_Parms, NULL );
		pfnSetAdjustLocation->FunctionFlags |= 0x400;
	};

	struct FVector GetDestinationPosition ()
	{
		static UFunction* pfnGetDestinationPosition = NULL;

		if ( !pfnGetDestinationPosition )
			pfnGetDestinationPosition = UObject::FindObject< UFunction >( "Function Engine.Controller.GetDestinationPosition" );

		AController_execGetDestinationPosition_Parms GetDestinationPosition_Parms;

		pfnGetDestinationPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDestinationPosition, &GetDestinationPosition_Parms, NULL );
		pfnGetDestinationPosition->FunctionFlags |= 0x400;

		return GetDestinationPosition_Parms.ReturnValue;
	};

	void SetDestinationPosition ( struct FVector Dest, unsigned long bOffsetFromBase/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetDestinationPosition = NULL;

		if ( !pfnSetDestinationPosition )
			pfnSetDestinationPosition = UObject::FindObject< UFunction >( "Function Engine.Controller.SetDestinationPosition" );

		AController_execSetDestinationPosition_Parms SetDestinationPosition_Parms;
		memcpy( &SetDestinationPosition_Parms.Dest, &Dest, 0xC );
		SetDestinationPosition_Parms.bOffsetFromBase = bOffsetFromBase;

		pfnSetDestinationPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetDestinationPosition, &SetDestinationPosition_Parms, NULL );
		pfnSetDestinationPosition->FunctionFlags |= 0x400;
	};

	struct FVector GetFocalPoint ()
	{
		static UFunction* pfnGetFocalPoint = NULL;

		if ( !pfnGetFocalPoint )
			pfnGetFocalPoint = UObject::FindObject< UFunction >( "Function Engine.Controller.GetFocalPoint" );

		AController_execGetFocalPoint_Parms GetFocalPoint_Parms;

		pfnGetFocalPoint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFocalPoint, &GetFocalPoint_Parms, NULL );
		pfnGetFocalPoint->FunctionFlags |= 0x400;

		return GetFocalPoint_Parms.ReturnValue;
	};

	void SetFocalPoint ( struct FVector FP, unsigned long bOffsetFromBase/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetFocalPoint = NULL;

		if ( !pfnSetFocalPoint )
			pfnSetFocalPoint = UObject::FindObject< UFunction >( "Function Engine.Controller.SetFocalPoint" );

		AController_execSetFocalPoint_Parms SetFocalPoint_Parms;
		memcpy( &SetFocalPoint_Parms.FP, &FP, 0xC );
		SetFocalPoint_Parms.bOffsetFromBase = bOffsetFromBase;

		pfnSetFocalPoint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetFocalPoint, &SetFocalPoint_Parms, NULL );
		pfnSetFocalPoint->FunctionFlags |= 0x400;
	};

	struct FVector GetBasedPosition ( struct FBasedPosition BP )
	{
		static UFunction* pfnGetBasedPosition = NULL;

		if ( !pfnGetBasedPosition )
			pfnGetBasedPosition = UObject::FindObject< UFunction >( "Function Engine.Controller.GetBasedPosition" );

		AController_execGetBasedPosition_Parms GetBasedPosition_Parms;
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
			pfnSetBasedPosition = UObject::FindObject< UFunction >( "Function Engine.Controller.SetBasedPosition" );

		AController_execSetBasedPosition_Parms SetBasedPosition_Parms;
		memcpy( &SetBasedPosition_Parms.pos, &pos, 0xC );
		SetBasedPosition_Parms.ForcedBase = ForcedBase;

		pfnSetBasedPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetBasedPosition, &SetBasedPosition_Parms, NULL );
		pfnSetBasedPosition->FunctionFlags |= 0x400;

		if ( BP )
			memcpy( BP, &SetBasedPosition_Parms.BP, 0x34 ); // CPF_OutParm
	};

	void RouteCache_RemoveIndex ( int InIndex, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRouteCache_RemoveIndex = NULL;

		if ( !pfnRouteCache_RemoveIndex )
			pfnRouteCache_RemoveIndex = UObject::FindObject< UFunction >( "Function Engine.Controller.RouteCache_RemoveIndex" );

		AController_execRouteCache_RemoveIndex_Parms RouteCache_RemoveIndex_Parms;
		RouteCache_RemoveIndex_Parms.InIndex = InIndex;
		RouteCache_RemoveIndex_Parms.Count = Count;

		pfnRouteCache_RemoveIndex->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRouteCache_RemoveIndex, &RouteCache_RemoveIndex_Parms, NULL );
		pfnRouteCache_RemoveIndex->FunctionFlags |= 0x400;
	};

	void RouteCache_RemoveItem ( class ANavigationPoint* Nav )
	{
		static UFunction* pfnRouteCache_RemoveItem = NULL;

		if ( !pfnRouteCache_RemoveItem )
			pfnRouteCache_RemoveItem = UObject::FindObject< UFunction >( "Function Engine.Controller.RouteCache_RemoveItem" );

		AController_execRouteCache_RemoveItem_Parms RouteCache_RemoveItem_Parms;
		RouteCache_RemoveItem_Parms.Nav = Nav;

		pfnRouteCache_RemoveItem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRouteCache_RemoveItem, &RouteCache_RemoveItem_Parms, NULL );
		pfnRouteCache_RemoveItem->FunctionFlags |= 0x400;
	};

	void RouteCache_InsertItem ( class ANavigationPoint* Nav, int Idx/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRouteCache_InsertItem = NULL;

		if ( !pfnRouteCache_InsertItem )
			pfnRouteCache_InsertItem = UObject::FindObject< UFunction >( "Function Engine.Controller.RouteCache_InsertItem" );

		AController_execRouteCache_InsertItem_Parms RouteCache_InsertItem_Parms;
		RouteCache_InsertItem_Parms.Nav = Nav;
		RouteCache_InsertItem_Parms.Idx = Idx;

		pfnRouteCache_InsertItem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRouteCache_InsertItem, &RouteCache_InsertItem_Parms, NULL );
		pfnRouteCache_InsertItem->FunctionFlags |= 0x400;
	};

	void RouteCache_AddItem ( class ANavigationPoint* Nav )
	{
		static UFunction* pfnRouteCache_AddItem = NULL;

		if ( !pfnRouteCache_AddItem )
			pfnRouteCache_AddItem = UObject::FindObject< UFunction >( "Function Engine.Controller.RouteCache_AddItem" );

		AController_execRouteCache_AddItem_Parms RouteCache_AddItem_Parms;
		RouteCache_AddItem_Parms.Nav = Nav;

		pfnRouteCache_AddItem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRouteCache_AddItem, &RouteCache_AddItem_Parms, NULL );
		pfnRouteCache_AddItem->FunctionFlags |= 0x400;
	};

	void RouteCache_Empty ()
	{
		static UFunction* pfnRouteCache_Empty = NULL;

		if ( !pfnRouteCache_Empty )
			pfnRouteCache_Empty = UObject::FindObject< UFunction >( "Function Engine.Controller.RouteCache_Empty" );

		AController_execRouteCache_Empty_Parms RouteCache_Empty_Parms;

		pfnRouteCache_Empty->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRouteCache_Empty, &RouteCache_Empty_Parms, NULL );
		pfnRouteCache_Empty->FunctionFlags |= 0x400;
	};

	bool IsLocalPlayerController ()
	{
		static UFunction* pfnIsLocalPlayerController = NULL;

		if ( !pfnIsLocalPlayerController )
			pfnIsLocalPlayerController = UObject::FindObject< UFunction >( "Function Engine.Controller.IsLocalPlayerController" );

		AController_execIsLocalPlayerController_Parms IsLocalPlayerController_Parms;

		pfnIsLocalPlayerController->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsLocalPlayerController, &IsLocalPlayerController_Parms, NULL );
		pfnIsLocalPlayerController->FunctionFlags |= 0x400;

		return IsLocalPlayerController_Parms.ReturnValue;
	};

};

UClass* AController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif