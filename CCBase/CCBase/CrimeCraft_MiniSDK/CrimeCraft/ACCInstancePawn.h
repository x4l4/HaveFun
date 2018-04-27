/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCInstancePawn.h
// Date: 06/16/2011 @ 05:19:40.109
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_PawnBurning_MaxBones                 100
#define Const_MaxCoverGuessDist                    256.f
#define Const_MAX_PAWNLASTHITINFO_RELEVANCY_TIME   2.0f
#define Const_MAX_DEBUG_BONES                      128

enum PlacingItemInfo_State
{
	PlacingItemInfo_State_BeginSearching = 0,
	PlacingItemInfo_State_EndSearching = 1,
	PlacingItemInfo_State_BeginPlacing = 2,
	PlacingItemInfo_State_EndPlacing = 3,
	PlacingItemInfo_State_MAX = 4
};

enum EBodyStance
{
	BS_FullBody = 0,
	BS_Head = 1,
	BS_Std_Up = 2,
	BS_Std_Upper_Harsh = 3,
	BS_Std_Upper_NoAim = 4,
	BS_Std_Idle_Lower = 5,
	BS_Std_Idle_Upper = 6,
	BS_Std_Trans_Upper = 7,
	BS_Std_Walk_Upper = 8,
	BS_Std_Run_Upper = 9,
	BS_CovStdIdle_Up = 10,
	BS_CovStdBlind_Up = 11,
	BS_CovStdLean_Up = 12,
	BS_CovStd_360_Upper = 13,
	BS_CovMidIdle_Up = 14,
	BS_CovMidBlindSd_Up = 15,
	BS_CovMidBlindUp_Up = 16,
	BS_CovMidLean_Up = 17,
	BS_CovMid_360_Upper = 18,
	BS_MAX = 19
};

enum EDeathState
{
	EDS_Alive = 0,
	EDS_FeigningDeath = 1,
	EDS_FakeDeath = 2,
	EDS_Dying = 3,
	EDS_MAX = 4
};

enum ETakeHitLocation
{
	THL_TorsoForward = 0,
	THL_TorsoBackward = 1,
	THL_HeadForward = 2,
	THL_HeadBackward = 3,
	THL_Leagth = 4,
	THL_MAX = 5
};

struct ACCInstancePawn_eventGetDemoPlayCameraLocationAndRotationAndUpdate_Parms
{
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execPlayerChangedTeam_Parms
{
};

struct ACCInstancePawn_execSetInvulnerabilityTime_Parms
{
	float NewInvulnerability;
};

struct ACCInstancePawn_execchange_physics_weight_Parms
{
	float W;
};// FUNC_Exec

struct ACCInstancePawn_execTestGibs_Parms
{
	struct FString GibPresetName;
	float Momentum;
};// FUNC_Exec

struct ACCInstancePawn_execCustomTestGibs_Parms
{
	float Momentum;
};// FUNC_Exec

struct ACCInstancePawn_execSpawnGibsForEntireBody_Parms
{
	void* GibPreset;
	struct FVector ExplosionMomentum;
	float GibsTearOffMomentum;
	float GibsTearOffMinPitch;
};

struct ACCInstancePawn_execSpawnShotOffGib_Parms
{
	void* GibPreset;
	struct FVector ExplosionMomentum;
};

struct ACCInstancePawn_execFindBestShotOffGibPreset_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindOptimalExtremityShotOffGibPreset_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetExtremityShotOffBaseBones_Parms
{
	TArray< struct FName > BoneNames; // CPF_OutParm
};

struct ACCInstancePawn_execGetExtremityShotOffBaseGibClasses_Parms
{
	TArray< class UClass* > GibClasses; // CPF_OutParm
};

struct ACCInstancePawn_execGetGibPresetForGibClass_Parms
{
	class UClass* GibClass;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindBestExplosionGibPreset_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execServerPerformGibsSpawningLogic_Parms
{
	unsigned long bForceShotOffGibs : 1;
	int Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCInstancePawn_execInitializeGibManager_Parms
{
};

struct ACCInstancePawn_eventOnAnimEnd_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};// FUNC_Event

struct ACCInstancePawn_execSetLocationInterpolationSpeed_Parms
{
	float V;
};// FUNC_Exec

struct ACCInstancePawn_execPlaySound_AbilityReady_Parms
{
};

struct ACCInstancePawn_execWeaponStoppedFiring_Parms
{
	unsigned long bViaReplication : 1;
};

struct ACCInstancePawn_execWeaponFired_Parms
{
	unsigned long bViaReplication : 1;
	struct FVector StartTraceLocation;
	struct FVector EndTraceLocation;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCInstancePawn_execSniperVision_Parms
{
};

struct ACCInstancePawn_execSetSniperVision_Parms
{
	unsigned long S : 1;
};

struct ACCInstancePawn_eventLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
};// FUNC_Event

struct ACCInstancePawn_execTestGetStartAndFinishDelay_Parms
{
	float StartDelay; // CPF_OutParm
	float FinishDelay; // CPF_OutParm
};

struct ACCInstancePawn_execAdditionalAnimationFinished_Parms
{
};

struct ACCInstancePawn_execAdditionalAnimationStarted_Parms
{
};

struct ACCInstancePawn_execPlayWeaponVisualGetting_Parms
{
};

struct ACCInstancePawn_execPlayWeaponVisualHiding_Parms
{
};

struct ACCInstancePawn_execSetMuzzleFlashAbilityName_Parms
{
	struct FName AbilityName;
};

struct ACCInstancePawn_execGetMuzzleFlashAbilityName_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execChatMessage_Parms
{
	struct FString MsgText;
};// FUNC_Native

struct ACCInstancePawn_execGetClientActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetServerActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetMainActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execAddDamageCauser_Parms
{
	class ACCPlayerReplicationInfo* DamagerPRI;
	int Damage;
};

struct ACCInstancePawn_execFindOldestDamageCauser_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindDamageCauserByPRI_Parms
{
	class ACCPlayerReplicationInfo* DamagerPRI;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execClearDamageCausersList_Parms
{
};

struct ACCInstancePawn_execUpdateLastStartFireCounter_Parms
{
};

struct ACCInstancePawn_execUpdateLastFireTime_Parms
{
};

struct ACCInstancePawn_execServerSetShowServerSkeleton_Parms
{
	unsigned long bShow : 1;
};

struct ACCInstancePawn_execShowServerSkeleton_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execGetIsValidTHAnimBone_Parms
{
	struct FName BoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execDrawDebugServerSkeletonData_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execUpdateDebugServerSkeletonData_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execGetIsFiringToCrosshair_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_eventGetWeaponTargetPawn_Parms
{
	class ACCInstancePawn* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execdebugForceUpdateCarrySlots_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execServerSpawnTurret_Parms
{
};

struct ACCInstancePawn_execSpawnTurret_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execHighlightCrosshair_Parms
{
	class ACCPawn* Pawn;
};

struct ACCInstancePawn_execSetHudWeapon_Parms
{
	unsigned char Slot;
};

struct ACCInstancePawn_execFillHudWeapons_Parms
{
	unsigned char slot0;
	unsigned char Slot1;
	unsigned char Slot2;
};

struct ACCInstancePawn_execDied_Parms
{
	class AController* Killer;
	class UClass* DamageType;
	struct FVector HitLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execBroadcastCombatMessage_Parms
{
	class ACCPlayerReplicationInfo* PRIKilled;
	class ACCPlayerReplicationInfo* PRIKiller;
	unsigned char DamageType;
	unsigned char WeaponSlot;
	unsigned long bHeadShot : 1;
	unsigned long bMine : 1;
	struct FAdditionalParam OptionalInitParam; // CPF_OutParm
};

struct ACCInstancePawn_execPlayDeathSound_Parms
{
	struct FVector HitLocation;
	struct FAdditionalHitInfo AddInfo;
	struct FTakeHitInfo DeathImpulseInfo;
	struct FAdditionalParam OptionalInitParam;
};

struct ACCInstancePawn_eventHealthBelowZero_Parms
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

struct ACCInstancePawn_execNotifyDeathHUD_Parms
{
	class AActor* LastDamageCauser;
};

struct ACCInstancePawn_execGetControllerFromDamageCauser_Parms
{
	class AActor* LastDamageCauser;
	class ACCInstanceController* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execFillKillerInfoFrom_Parms
{
	class ACCInstanceController* C;
	struct FKillerInfo Info; // CPF_OutParm
	float DamageDone;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execdual_deathbug_print_debug_controller_info_Parms
{
	class AController* C;
	struct FString Prefix;
};

struct ACCInstancePawn_execAddAssistScore_Parms
{
	class ACCPlayerReplicationInfo* KillerPRI;
};

struct ACCInstancePawn_execGetShouldPlayDeathAnimation_Parms
{
	int Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindWeaponByDamageType_Parms
{
	class UClass* DamageType;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalcWeaponSlot_Parms
{
	class UClass* DamageType;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execdebugUpdateWeaponAttaches_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execSetAvatarMaterial_Parms
{
	class UMaterialInterface* Material;
};

struct ACCInstancePawn_execinvisibility_Parms
{
};

struct ACCInstancePawn_execVisibility_Parms
{
};

struct ACCInstancePawn_execUpdateVisibility_Parms
{
};

struct ACCInstancePawn_execSetVisibilityDetected_Parms
{
	unsigned long Value : 1;
};

struct ACCInstancePawn_execDestroyed_Parms
{
};

struct ACCInstancePawn_execClearAnimNodes_Parms
{
};

struct ACCInstancePawn_execCacheAnimNodes_Parms
{
};

struct ACCInstancePawn_execBodyStanceAnimEndNotification_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};

struct ACCInstancePawn_execSetBodyStanceAnimEndNotification_Parms
{
	struct FBodyStance Stance;
	unsigned long bNewStatus : 1;
};// FUNC_Final

struct ACCInstancePawn_execBS_AddToSynchGroup_Parms
{
	struct FBodyStance Stance;
	struct FName GroupName;
};// FUNC_Final

struct ACCInstancePawn_execBS_SetMirrorOptions_Parms
{
	struct FBodyStance Stance;
	unsigned long bTransitionToMirrored : 1;
	unsigned long bBeginTransition : 1;
	unsigned long bMirrorAnimation : 1;
};// FUNC_Final

struct ACCInstancePawn_execSetBodyStanceRootBoneAxisOption_Parms
{
	struct FBodyStance Stance;
	unsigned char AxisX;
	unsigned char AxisY;
	unsigned char AxisZ;
};// FUNC_Final

struct ACCInstancePawn_execScaleBodyStancePlayRate_Parms
{
	struct FBodyStance Stance;
	float RateScale;
};// FUNC_Final

struct ACCInstancePawn_execBS_AccelerateBlend_Parms
{
	struct FBodyStance Stance;
	float BlendAmount;
};// FUNC_Final

struct ACCInstancePawn_execBS_SetPlayRate_Parms
{
	struct FBodyStance Stance;
	float NewRate;
};// FUNC_Final

struct ACCInstancePawn_execBS_GetPlayRate_Parms
{
	struct FBodyStance Stance;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execBS_GetTimeLeft_Parms
{
	struct FBodyStance Stance;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execBS_SetPosition_Parms
{
	struct FBodyStance Stance;
	float Position;
};// FUNC_Final

struct ACCInstancePawn_execSetBodyStance_Parms
{
	struct FBodyStance Stance;
};// FUNC_Final

struct ACCInstancePawn_execStopAllBodyStances_Parms
{
	float BlendOutTime;
};// FUNC_Final

struct ACCInstancePawn_execStopBodyStance_Parms
{
	struct FBodyStance Stance;
	float BlendOutTime;
};// FUNC_Final

struct ACCInstancePawn_execIsPlayingBodyStance_Parms
{
	struct FBodyStance Stance;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execPlayBodyStanceByDuration_Parms
{
	struct FBodyStance Stance;
	float Duration;
	float BlendInTime;
	float BlendOutTime;
	unsigned long bLooping : 1;
	unsigned long bOverride : 1;
};// FUNC_Final

struct ACCInstancePawn_execPlayBodyStance_Parms
{
	struct FBodyStance Stance;
	float Rate;
	float BlendInTime;
	float BlendOutTime;
	unsigned long bLooping : 1;
	unsigned long bOverride : 1;
	unsigned long bKeepRBASettings : 1;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execSetFireSound_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execPlayActualHitEffect_Parms
{
	unsigned char EffectType;
	struct FTakeHitInfo HitInfo;
	unsigned char HitLocationType;
};

struct ACCInstancePawn_execCheckIsHit_Parms
{
	struct FVector HitLocation;
	struct FVector StartPoint;
	struct FVector EndPoint;
	unsigned long DrawDebugHit : 1;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execSpawnDecals_Parms
{
	struct FDecalParams DParams;
	class AActor* HitActor;
	struct FVector HitLocation;
	struct FVector HitNormal;
	struct FTraceHitInfo HitInfo;
	unsigned long bProjectOnTerrain : 1;
	unsigned long bProjectOnSkeletalMeshes : 1;
};

struct ACCInstancePawn_execRagdollDueAnimationEnterTimer_Parms
{
};

struct ACCInstancePawn_execCheckDeathAnimationCollision_Parms
{
};

struct ACCInstancePawn_execCalculateRagdollEnterTimerFromEndPerc_Parms
{
	struct FTakeHitInfo HitInfo;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalculateRagdollEnterTimerTime_Parms
{
	float DeathAnimationLength;
	float Perc;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalculateDeathAnimationToRagdollBlendTime_Parms
{
	float DeathAnimationLength;
	float RagdollEnterTimerTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execClearDeathAnimation_Parms
{
};

struct ACCInstancePawn_execDeathAnimationPlayed_Parms
{
};

struct ACCInstancePawn_execPlayDeathAnimation_Parms
{
	struct FTakeHitInfo THInfo;
};

struct ACCInstancePawn_execProcessDeathAnimationInfoStructReplicated_Parms
{
};

struct ACCInstancePawn_execServerPlayDeathAnimation_Parms
{
	struct FTakeHitInfo ImpulseInfo;
};

struct ACCInstancePawn_execServerPlayDeathAnimationViaRpc_Parms
{
	struct FTakeHitInfo ImpulseInfo;
};

struct ACCInstancePawn_execTestPlayTakeHitAnimation_Parms
{
	struct FName BoneName;
	float DirX;
	float DirY;
	float DirZ;
	unsigned long bFromGrenade : 1;
};// FUNC_Exec

struct ACCInstancePawn_execLeaveRDTimeOut_Parms
{
};

struct ACCInstancePawn_execTestPlayDeathAnimation_Parms
{
	struct FName BoneName;
	float DirX;
	float DirY;
	float DirZ;
};// FUNC_Exec

struct ACCInstancePawn_execClearHitAnimation_Parms
{
};

struct ACCInstancePawn_execHitAnimationPlayed_Parms
{
};

struct ACCInstancePawn_execPlayTakeHitAnimation_Parms
{
	struct FTakeHitInfo HitInfo;
};

struct ACCInstancePawn_execGetAllTakeHitNodes_Parms
{
	TArray< void* > Nodes; // CPF_OutParm
};

struct ACCInstancePawn_execSelectActualTakeHitNode_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execPlayReplicatedOnlyTakeHitEffects_Parms
{
	struct FTakeHitInfo HitInfo;
};

struct ACCInstancePawn_execPlayTakeHitEffects_Parms
{
	struct FTakeHitInfo HitInfo;
};

struct ACCInstancePawn_execPlayHitEffectsLocally_Parms
{
	float Damage;
	class ACCInstancePawn* shooter;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FVector Momentum;
	struct FTraceHitInfo HitInfo;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCInstancePawn_execGetReplicatedHitEffectsShouldBePlayed_Parms
{
	struct FTakeHitInfo HitInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_eventIsLastTakeHitInfoRelevant_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execLastTakeHitInfoStructReplicated_Parms
{
};

struct ACCInstancePawn_execSetLastHitInfo_Parms
{
	int Damage;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FName HitBone;
	class AController* shooter;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCInstancePawn_execPlayHit_Parms
{
	float Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FVector Momentum;
	struct FTraceHitInfo HitInfo;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCInstancePawn_execFindCharacterAttachmentBone_Parms
{
	class UActorComponent* Comp;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execDetermineHitLocationType_Parms
{
	struct FTakeHitInfo HitInfo;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execIsBlindFiring_Parms
{
	unsigned char PawnCA;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execSetCoverAction_Parms
{
	unsigned char NewCoverAction;
};// FUNC_Final

struct ACCInstancePawn_execFakeEquipItems_Parms
{
};

struct ACCInstancePawn_execFakeEquipItemsClient_Parms
{
	class ACCInstancePawn* Pawn;
};

struct ACCInstancePawn_execDoFakeEquipItems_Parms
{
};

struct ACCInstancePawn_execPlayExitCover_Parms
{
};// FUNC_Final

struct ACCInstancePawn_execPlayEnterCover_Parms
{
};

struct ACCInstancePawn_execSetCoverType_Parms
{
	unsigned char NewCoverType;
};// FUNC_Final

struct ACCInstancePawn_eventOnMirrorBlendOutNotify_Parms
{
};// FUNC_Event

struct ACCInstancePawn_eventOnMirroredNotify_Parms
{
};// FUNC_Event

struct ACCInstancePawn_eventSetMirroredSide_Parms
{
	unsigned long bDesiredMirrored : 1;
};// FUNC_Final FUNC_Event

struct ACCInstancePawn_execNotifyPlayerReplicationInfoReplicated_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execPlayDying_Parms
{
	class UClass* DamageType;
	struct FVector HitLoc;
};

struct ACCInstancePawn_execGetMaxHealth_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetHealth_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execForceDyingDestroy_Parms
{
};

struct ACCInstancePawn_execTimeForceDyingDestroy_Parms
{
	float Time;
};

struct ACCInstancePawn_execEnableBulletTwists_Parms
{
	unsigned long Value : 1;
	float DamageScale;
};

struct ACCInstancePawn_execProcessRigidBodyCollision_Parms
{
	class UPrimitiveComponent* HitComponent;
	class UPrimitiveComponent* OtherComponent;
	struct FCollisionImpactData RigidCollisionData; // CPF_OutParm
	int ContactIndex;
};

struct ACCInstancePawn_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent* HitComponent;
	class UPrimitiveComponent* OtherComponent;
	struct FCollisionImpactData RigidCollisionData; // CPF_OutParm
	int ContactIndex;
};// FUNC_Event

struct ACCInstancePawn_execDoFatality_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execCompleteRessurection_Parms
{
};

struct ACCInstancePawn_execGetRessurectionParameters_Parms
{
	struct FVector RessurectionLocation; // CPF_OutParm
};

struct ACCInstancePawn_execDoRessurect_Parms
{
	struct FVector RessurectionLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execProcessCurrDeathStateReplicated_Parms
{
};

struct ACCInstancePawn_execCallSuperHealthBelowZero_Parms
{
};

struct ACCInstancePawn_execPrintOutsideWorldBoundsDisabledInfo_Parms
{
};

struct ACCInstancePawn_execPawnServerNotifyTargetDamaged_Parms
{
};

struct ACCInstancePawn_execNotifyTakeDamage_Parms
{
	int Damage;
	class ACCPawn* Attacker;
	class UClass* DamageType;
	class AActor* DamageCauser;
};

struct ACCInstancePawn_execHealDamage_Parms
{
	int Amount;
	class AController* Healer;
	class UClass* DamageType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execAddVelocity_Parms
{
	struct FVector NewVelocity;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
};

struct ACCInstancePawn_execClientTakeFlashDamage_Parms
{
	float BlindPower;
	float BlindTime;
};

struct ACCInstancePawn_execTakeFlashDamage_Parms
{
	float BlindPower;
	float BlindTime;
};

struct ACCInstancePawn_execTest_TH_SMS_Parms
{
	float X;
	float Y;
	float Z;
};// FUNC_Exec

struct ACCInstancePawn_execDoAddHitSpeedModifierEntry_Parms
{
	struct FTakeHitSpeedModifierInfo Info;
	struct FVector ToCauser;
};

struct ACCInstancePawn_execClientAddHitSpeedModifierEntry_Parms
{
	struct FTakeHitSpeedModifierInfo Info;
	struct FVector ToCauser;
};

struct ACCInstancePawn_execAddHitSpeedModifierEntry_Parms
{
	struct FTakeHitSpeedModifierInfo Info;
	struct FVector ToCauser;
};

struct ACCInstancePawn_eventTakeDamage_Parms
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

struct ACCInstancePawn_execCalculateDamagePercent_Parms
{
	float Damage;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execNotifyWeaponStats_Parms
{
	class APlayerReplicationInfo* PRI;
	int WeaponID;
	int Damage;
};

struct ACCInstancePawn_execPrintTakenDamage_Parms
{
	class ACCPlayerReplicationInfo* pInstigator;
	int Damage;
};

struct ACCInstancePawn_execPrintGivenDamage_Parms
{
	class ACCPlayerReplicationInfo* Target;
	int Damage;
};

struct ACCInstancePawn_execUpdateLastBlockedAimingTime_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execServerSetSolvedAimProblems_Parms
{
	unsigned long NewReplicatedBlockedWeapon : 1;
	unsigned long NewReplicatedBlockedAiming : 1;
};

struct ACCInstancePawn_execSimpleSolveAimProblems_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execPerformTraceNoPawn_Parms
{
	struct FVector HitLocation; // CPF_OutParm
	struct FVector HitNormal; // CPF_OutParm
	struct FVector TraceEnd;
	struct FVector TraceStart;
	unsigned long bTraceActors : 1;
	struct FVector Extent;
	struct FTraceHitInfo HitInfo; // CPF_OutParm
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execDrawMeshDebug_Parms
{
	class USkeletalMeshComponent* TheMesh;
};

struct ACCInstancePawn_execDrawDebugMeshData_Parms
{
};

struct ACCInstancePawn_execdo_break_Parms
{
};

struct ACCInstancePawn_execInterpolatePawnLocation_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execCalcLocationDebugPointLoc_Parms
{
	struct FVector Loc;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execTickLocationDebug2_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execDrawDiagramDebugLocation_Parms
{
	struct FVector WorldLocationDelta;
	struct FVector Origin;
	struct FVector AxisDir;
};

struct ACCInstancePawn_eventTickLocationDebug_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCInstancePawn_execCheckForRolling_Parms
{
};

struct ACCInstancePawn_execGrenadeDetecting_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCInstancePawn_execServerUpdateDemoLoc_Parms
{
	struct FVector _Demo_CachedCamLoc;
	struct FRotator _Demo_CachedCamRot;
};

struct ACCInstancePawn_execResetPriFire_Parms
{
};

struct ACCInstancePawn_execUpdateStartedBlockedFire_Parms
{
};

struct ACCInstancePawn_execPreprocessAttack_Parms
{
	float Value;
	int Type;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckWeaponChangeNodeForRecharge_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindRelevantWeaponChangeNode_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execFindRelevantTargetingNode_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckWeaponChangeNodesForReadyToFire_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execIsInFireOrAimingAnimation_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckAnimNodesForReadyToFire_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_eventGetShootSpotLocation_Parms
{
	struct FRotator StartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execGetAimPoseShootSpotLocationCached_Parms
{
	struct FRotator StartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetFirePoseShootSpotLocationCached_Parms
{
	struct FRotator StartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetIdlePoseShootSpotLocationCached_Parms
{
	struct FRotator StartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalcWeaponFireFromCustomSpot_Parms
{
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FVector ShootSpotLocation;
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalcWeaponFireFromIdlePose_Parms
{
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FVector ShootSpotLocationFromIdlePose; // CPF_OutParm
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalcWeaponFireFromAimPose_Parms
{
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FVector ShootSpotLocationFromAimPose; // CPF_OutParm
	int bWeaponInWall; // CPF_OutParm
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetHeadLocationForCWF_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalcWeaponFireCached_Parms
{
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetDebugAngleString_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execDrawWeaponDebugLines_Parms
{
};

struct ACCInstancePawn_execCheckIsSmallWall1_Parms
{
	struct FVector StartFireLoc;
	struct FVector HitLoc;
	float CheckAngle;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckIsSmallWall_Parms
{
	struct FVector StartFireLoc;
	struct FVector HitLoc;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckWeaponInWallAuto_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execCheckWeaponInWall_Parms
{
	struct FVector StrartFireLoc;
	struct FRotator StartFireRot;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetResultViewRotation_Parms
{
	struct FRotator BaseAimRotation;
	struct FVector RealAimRay;
	class AActor* RealAimTarget;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCalculateAimOffsetTarget_Parms
{
	class AWeapon* Weap;
	struct FVector WeaponLocation;
	struct FRotator BaseAimRotation;
	class AActor* TargetActor; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetAimOffsetRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execServerSetCalculatedAimOffset_Parms
{
	int NewAimOffset;
};

struct ACCInstancePawn_execForceUpdateAimOffsetData_Parms
{
};

struct ACCInstancePawn_execGetShouldCalculateAimOffset_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execUpdateAimOffsetData_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execUpdateMeshBoneControllers_Parms
{
	float DeltaTime;
};

struct ACCInstancePawn_execGetWeaponPPControllerForSocket_Parms
{
	struct FName SocketName;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetCCSPPControllerForSocket_Parms
{
	struct FName SocketName;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execUpdateWeapon2CarrySlotIK_Parms
{
	unsigned long bForceUpdate : 1;
};

struct ACCInstancePawn_execDisableWeapon2CarrySlotIKController_Parms
{
	void* SkelController;
};

struct ACCInstancePawn_execUpdateWeapon2CarrySlotIKController_Parms
{
	void* SkelController;
	struct FName WeaponSocketName;
	struct FName CarrySlotSocketName;
};

struct ACCInstancePawn_execUpdateWeapon2CarrySlotIKControllerTransform_Parms
{
	void* SkelController;
	struct FName WeaponSocketName;
	struct FName CarrySlotSocketName;
	float Alpha;
};

struct ACCInstancePawn_execUpdateCrosshair_Parms
{
	class AActor* HitActor;
};

struct ACCInstancePawn_execPostRenderFor_Parms
{
	class APlayerController* PC;
	class UCanvas* Canvas;
	struct FVector CameraPosition;
	struct FVector CameraDir;
};

struct ACCInstancePawn_execGetPlayerName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execBeginStopAiming_Parms
{
};

struct ACCInstancePawn_execStopAiming_Parms
{
};

struct ACCInstancePawn_execBeginAiming_Parms
{
};

struct ACCInstancePawn_execStartAiming_Parms
{
};

struct ACCInstancePawn_execExecConsoleCommand_Parms
{
	struct FString Command;
};// FUNC_Native

struct ACCInstancePawn_execEndAiming_Default_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execBeginAiming_Default_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execEndAiming_Grenade_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execBeginAiming_Grenade_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execEndAiming_GrenadeLauncher_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execBeginAiming_GrenadeLauncher_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execEndAiming_None_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execBeginAiming_None_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execSetDepthPriorityGroup_Parms
{
	unsigned char NewDepthPriorityGroup;
};

struct ACCInstancePawn_execCleanDroppedWeapons_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execRestoreDroppedWeapons_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execDropWeaponsByPhysics_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execGetIsInRagdollState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execRecoveringFromRagdollFinished_Parms
{
};

struct ACCInstancePawn_eventPlayingRecoveryFromRagdollFinished_Parms
{
};// FUNC_Event

struct ACCInstancePawn_execLeaveRagdollState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execServerLeaveRagdollState_Parms
{
};

struct ACCInstancePawn_execServerReplicateAllowRecoveryFromRagdoll_Parms
{
};

struct ACCInstancePawn_execRagdollDelayTimer_Parms
{
};

struct ACCInstancePawn_execForceFinishEnteringRagdollState_Parms
{
};

struct ACCInstancePawn_execEnteringRagdollStateFinished_Parms
{
};

struct ACCInstancePawn_execEnterRagdollState_Parms
{
	float BlendInTime;
	struct FTakeHitInfo ImpulseInfo;
	int Id;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execProcessRagdollStateInfoStructReplicated_Parms
{
};

struct ACCInstancePawn_execServerSpawnShotOffGibViaRpc_Parms
{
	void* GibPreset;
	struct FVector ShotOffMomentum;
};

struct ACCInstancePawn_execServerSpawnGibsForEntireBodyViaRpc_Parms
{
	void* GibPreset;
	struct FVector ExplosionMomentum;
	float GibsTearOffMomentum;
	float GibsTearOffMinPitch;
};

struct ACCInstancePawn_execServerEnterRagdollState_Parms
{
	float BlendInTime;
	struct FTakeHitInfo ImpulseInfo;
};

struct ACCInstancePawn_execServerEnterRagdollStateViaRpc_Parms
{
	float BlendInTime;
	struct FTakeHitInfo ImpulseInfo;
};

struct ACCInstancePawn_execSetRagdollBlendTargetWeight_Parms
{
	float DestWeight;
	float BlendSpeed;
};// FUNC_Exec

struct ACCInstancePawn_execSpawnDeadBlood_Parms
{
};

struct ACCInstancePawn_execInitializeAnimationNodes_Parms
{
};

struct ACCInstancePawn_execAddDefaultInventory_Parms
{
};

struct ACCInstancePawn_execZeroVelocity_Parms
{
};

struct ACCInstancePawn_execMovementModeChanged_Parms
{
	unsigned char OldMovementMode;
};

struct ACCInstancePawn_eventGetManualVelocityModeSPDModifier_Parms
{
	struct FVector ManualVelocityValue;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execUpdateMove_Parms
{
};

struct ACCInstancePawn_eventBump_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCInstancePawn_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCInstancePawn_execBreakFromCover_Parms
{
};// FUNC_Final

struct ACCInstancePawn_eventMove2IdleTransitionFinished_Parms
{
};// FUNC_Event

struct ACCInstancePawn_eventConditionalMove2IdleTransition_Parms
{
};// FUNC_Event

struct ACCInstancePawn_execIsDoingMove2IdleTransition_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execIsAtRightEdgeSlot_Parms
{
	float InLimit;
	unsigned long bMustLean : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execIsAtLeftEdgeSlot_Parms
{
	float InLimit;
	unsigned long bMustLean : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execCanPrepareRun2Cover_Parms
{
	float CheckDist;
	struct FCovPosInfo OutFoundCovInfo; // CPF_OutParm
	struct FVector CheckDir;
	float AcquireCoverFOV;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_eventEvadeAnimationFinished_Parms
{
};// FUNC_Event

struct ACCInstancePawn_execPlayEvadeParticleEffect_Parms
{
	struct FRotator SpawnRotation;
};

struct ACCInstancePawn_execPlayEvadeAnimLandedNotify_Parms
{
};

struct ACCInstancePawn_execCanEvade_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execIsEvading_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGetCoverNormal_Parms
{
	unsigned long bSmoothed : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execFaceRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct ACCInstancePawn_execCanPerformMantleDown_Parms
{
	float MinMantleHeight;
	float MaxMantleHeight;
	struct FRotator TestRotation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execFitCollision_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGetSlotIdxByPct_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_eventReplicatedEventEx_Parms
{
	struct FName VarName;
	int ArrayIndex;
};// FUNC_Event

struct ACCInstancePawn_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCInstancePawn_execLeaveCover_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execPlayCoverExitTransition_Parms
{
};

struct ACCInstancePawn_execPlayCoverEnterTransition_Parms
{
};

struct ACCInstancePawn_execSetCoverInfoFromSlotInfo_Parms
{
	struct FCovPosInfo OutCovInfo; // CPF_OutParm
	struct FCoverInfo SlotInfo;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execSetCoverInfo_Parms
{
	void* Link;
	int SlotIdx;
	int LeftIdx;
	int RightIdx;
	float SlotPct;
	unsigned long bReplicate : 1;
};

struct ACCInstancePawn_execSetCovPosInfo_Parms
{
	struct FCovPosInfo CovInfo;
	unsigned long bReplicate : 1;
};

struct ACCInstancePawn_execSetIsCoverMirrored_Parms
{
	unsigned long bValue : 1;
};

struct ACCInstancePawn_execPlayCoverActionSound_Parms
{
};

struct ACCInstancePawn_execGetCoverActionSound_Parms
{
	void* PMaterial;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execCoverAcquired_Parms
{
	struct FCovPosInfo CovInfo;
};

struct ACCInstancePawn_execCoverInfoToCovPosInfo_Parms
{
	struct FCoverInfo CovInfo;
	struct FCovPosInfo ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execDumpCoverInfo_Parms
{
	struct FCovPosInfo CovInfo;
};

struct ACCInstancePawn_execIsOnACoverSlot_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_eventReachedCoverSlot_Parms
{
	int SlotIdx;
};// FUNC_Event

struct ACCInstancePawn_execFindBestCoverSideFor_Parms
{
	struct FCovPosInfo CovInfo;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execGetCoverTypeFor_Parms
{
	struct FCovPosInfo Cover;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execFindCoverType_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execSetCurrentCoverType_Parms
{
	unsigned long bClear : 1;
};// FUNC_Final

struct ACCInstancePawn_execCanPawnGetInToCover_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execMovePawnIntoCover_Parms
{
};// FUNC_Exec

struct ACCInstancePawn_execNotifyPlaceableItems_Parms
{
};

struct ACCInstancePawn_execResetAllStuff_Parms
{
};

struct ACCInstancePawn_execRestart_Parms
{
};

struct ACCInstancePawn_execUpdateWeaponAttachmentIds_Parms
{
};

struct ACCInstancePawn_execClientSpawnSpeedModifierSystem_Parms
{
};

struct ACCInstancePawn_execSpawnSpeedModifierSystem_Parms
{
};

struct ACCInstancePawn_execPossessedBy_Parms
{
	class AController* C;
	unsigned long bVehicleTransition : 1;
};

struct ACCInstancePawn_execClientReInitEM_Parms
{
	class AController* C;
};

struct ACCInstancePawn_execClientUpdateHUD_Parms
{
};

struct ACCInstancePawn_execWeaponTypeToID_Parms
{
	unsigned char WeaponType;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execSetDuplicatedWeaponAttachmentState_Parms
{
	unsigned char NewState;
};

struct ACCInstancePawn_eventGetWeaponAttachmentHideTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_eventGetWeaponAttachmentEquipTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_eventGetWeaponAttachmentState_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execUpdateAttachedWeapons_Parms
{
};

struct ACCInstancePawn_execReceiveReplicatedReplicatedVisualCarrySlotInfoStruct_Parms
{
	unsigned long bForceApply : 1;
};

struct ACCInstancePawn_execSetActiveVisualCarrySlot_Parms
{
	unsigned char Slot;
};

struct ACCInstancePawn_execUpdateReplicatedVisualCarrySlotInfoStruct_Parms
{
};

struct ACCInstancePawn_execGetActiveVisualCarrySlot_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execShowAllWeaponCarrySlots_Parms
{
};

struct ACCInstancePawn_execHideAllWeaponCarrySlots_Parms
{
};

struct ACCInstancePawn_execGetWeaponCarrySlotRBDescIndexFor_Parms
{
	int CarrySlotIndex;
	int WeaponIdx;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execUpdateWeaponCarrySlotsRB_Parms
{
	int CarrySlotIndex;
	int WeaponIdx;
	unsigned long bSlotEmpty : 1;
};

struct ACCInstancePawn_execInitializeWeaponCarrySlotsRB_Parms
{
	int CarrySlotIndex;
	int WeaponIdx;
};

struct ACCInstancePawn_execAttachWeaponToCarrySlotSocket_Parms
{
	class USkeletalMeshComponent* WpnMesh;
	struct FName SocketName;
};

struct ACCInstancePawn_execUpdateWeaponCarrySlots_Parms
{
};

struct ACCInstancePawn_execInitializeWeaponCarrySlots_Parms
{
};

struct ACCInstancePawn_execCleanUpWeaponCarrySlots_Parms
{
};

struct ACCInstancePawn_execGetWAAttachesFor_Parms
{
	int CarrySlotIndex;
	struct FWeaponAttachesArray ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetWAPresetFor_Parms
{
	int CarrySlotIndex;
	int WeaponIndex;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetWAIDFor_Parms
{
	int CarrySlotIndex;
	int WeaponIndex;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execPlayItemPacksSound_Parms
{
	void* Sound;
};

struct ACCInstancePawn_execPlaceItem_ToggleDrawSphere_Parms
{
};

struct ACCInstancePawn_execPlaceItem_EndPlacing_Parms
{
	void* Ability;
};

struct ACCInstancePawn_execPlaceItem_BeginPlacing_Parms
{
};

struct ACCInstancePawn_execClient_PlaceItem_EndSearch_Parms
{
};

struct ACCInstancePawn_execPlaceItem_EndSearch_Parms
{
};

struct ACCInstancePawn_execPlaceItem_Searching_EndDrawing_Parms
{
};

struct ACCInstancePawn_execPlaceItem_Searching_Draw_Parms
{
};

struct ACCInstancePawn_execPlaceItem_Searching_BeginDrawing_Parms
{
};

struct ACCInstancePawn_execClient_PlaceItem_BeginSearch_Parms
{
};

struct ACCInstancePawn_execPlaceItem_BeginSearch_Parms
{
	struct FPlacingItemInfo Info;
};

struct ACCInstancePawn_execCanPlaceItem_Parms
{
	class ACCPlaceableItem* ItemArchetype;
	struct FVector PlaceLoc; // CPF_OutParm
	struct FRotator PlaceRot; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_eventOnCreateCharacterComponent_Parms
{
};// FUNC_Event

struct ACCInstancePawn_execUpdateServerHeadPos_Parms
{
};

struct ACCInstancePawn_execServerUpdateServerHeadPos_Parms
{
	struct FVector HeadPos;
};

struct ACCInstancePawn_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCInstancePawn_execDestroyWeaponAttachment_Parms
{
};

struct ACCInstancePawn_execCreateWeaponAttachment_Parms
{
};

struct ACCInstancePawn_execDisableReplication_Parms
{
};

struct ACCInstancePawn_execUpdateCollisionModeAuto_Parms
{
};

struct ACCInstancePawn_execPlayRollingSound_Parms
{
};

struct ACCInstancePawn_eventCalculateRollingTime_Parms
{
	int DirectionIndex;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstancePawn_execCalcTBBOFinishAngleDifference_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execGetShouldFinishTBBO_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execTurnBasedBlendOutFinishTimer_Parms
{
};

struct ACCInstancePawn_execTurnBasedBlendOutTimer_Parms
{
};

struct ACCInstancePawn_execPerformTurnBasedBlendOut_Parms
{
	struct FRotator TheOldPawnRotation;
	struct FRotator NewControllerRotation;
	float NormalSmoothBlendTime;
	float TurnSmoothBlendTime;
};

struct ACCInstancePawn_execFinishMeleeAnim_Parms
{
	struct FRotator ControllerPostMeleeRotation;
};

struct ACCInstancePawn_execStartMeleeAnim_Parms
{
};

struct ACCInstancePawn_execFinishEmoteAnim_Parms
{
	struct FRotator PawnEmoteRotation;
	struct FRotator ControllerPostEmoteRotation;
};

struct ACCInstancePawn_execFinishRollingAnim_Parms
{
	struct FRotator PawnRollingRotation;
	struct FRotator ControllerPostRollingRotation;
};

struct ACCInstancePawn_execPlayRollingAnim_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execResetTurnNodes_Parms
{
	struct FRotator ResetRot;
};

struct ACCInstancePawn_execInitializeOtherAnimationNodes_Parms
{
};

struct ACCInstancePawn_execGetStreamingInfo_Parms
{
	struct FString levelStatus;
};// FUNC_Exec FUNC_Native

struct ACCInstancePawn_execGetCoverInfo_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCInstancePawn_execFillCoverPosInfo_Parms
{
	void* Link;
	int SlotIdx;
	struct FVector FromLoc;
	struct FVector Direction;
	float MaxDistance;
	struct FCovPosInfo out_CovPosInfo; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execValidatePotentialCover_Parms
{
	struct FVector FromLoc;
	struct FVector Direction;
	float OutMinDotFOV; // CPF_OutParm
	float OutMaxDistanceSquared; // CPF_OutParm
	struct FCovPosInfo OutCovPosInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execFindCoverFromLocAndDir_Parms
{
	struct FVector FromLoc;
	struct FVector Direction;
	float FOV;
	float MaxDistance;
	struct FCovPosInfo OutCovPosInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGuessAtCover_Parms
{
	struct FCoverInfo out_Cover; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execIsInCover_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGetCurrentSlotPct_Parms
{
	void* Link;
	int InLeftSlotIdx;
	int InRightSlotIdx;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGetRBVelocity_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ACCInstancePawn_execGetVirtualShootSpotLocation_Parms
{
	struct FRotator VirtualStartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execCheckSkeletonEnroachment_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstancePawn_execFillArrayOfSequenceByWeaponNameNodes_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execFillArrayOfWeaponChangeNodes_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execFillArrayOfTargetingNodes_Parms
{
};// FUNC_Native

struct ACCInstancePawn_execGetWeaponParameters_Parms
{
	struct FPawnWeaponParams ReturnValue; // CPF_ReturnParm
};

struct ACCInstancePawn_execPawnBurning_FindAbilityInfo_Parms
{
	struct FString AbilityName;
	struct FPawnBurning_AbilityInfo AbilityInfo; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstancePawn_execIsBoneAvailableToBurn_Parms
{
	struct FName BoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execIsAlreadyBurn_Parms
{
	struct FName BoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstancePawn_execBurnPawnBones_Parms
{
};

struct ACCInstancePawn_execPawnBurning_Burn_Parms
{
	struct FVector Origin;
	float Radius;
	struct FName AbilityName;
};

struct ACCInstancePawn_execPawnBurning_BoneInfoReplicatedEvent_Parms
{
	int BoneIndex;
};

struct ACCInstancePawn_execGetClientClockValue_Parms
{
	float ServerClockValue;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

// (0x6BC - 0x1AC0)
class ACCInstancePawn : public ACCPawn
{
public:
	class UClass*                                      CCDamageType;                                // 0x06BC (0x0004)
	unsigned long                                      bReplicatedPlayerReplicationInfo : 1;        // 0x06C0 (0x0004) [0x00000001]
	unsigned long                                      bIsInNoMovementMode : 1;                     // 0x06C0 (0x0004) [0x00000002]
	unsigned long                                      bRealAimingEnabled : 1;                      // 0x06C0 (0x0004) [0x00000004]
	unsigned long                                      bForceAimOnTargetingNode : 1;                // 0x06C0 (0x0004) [0x00000008]
	unsigned long                                      bForceFireOnTargetingNode : 1;               // 0x06C0 (0x0004) [0x00000010]
	unsigned long                                      bForceIdleOnTargetingNode : 1;               // 0x06C0 (0x0004) [0x00000020]
	unsigned long                                      bWeaponIdleTrace : 1;                        // 0x06C0 (0x0004) [0x00000040]
	unsigned long                                      bWeaponAimTrace : 1;                         // 0x06C0 (0x0004) [0x00000080]
	unsigned long                                      bChangedTeamDied : 1;                        // 0x06C0 (0x0004) [0x00000100]
	unsigned long                                      NeedToDetectProjectiles : 1;                 // 0x06C0 (0x0004) [0x00000200]
	unsigned long                                      bShowDebugServerSkeleton : 1;                // 0x06C0 (0x0004) [0x00000400]
	unsigned long                                      bSpyMode : 1;                                // 0x06C0 (0x0004) [0x00000800]
	unsigned long                                      bEnableLocationInterpolation : 1;            // 0x06C0 (0x0004) [0x00001000]
	unsigned long                                      bUseJustTeleportedInLocationInterpolation : 1; // 0x06C0 (0x0004) [0x00002000]
	unsigned long                                      LI_bInitialized : 1;                         // 0x06C0 (0x0004) [0x00004000]
	unsigned long                                      bEnableRotationInterpolation : 1;            // 0x06C0 (0x0004) [0x00008000]
	unsigned long                                      bUseJustTeleportedInRotationInterpolation : 1; // 0x06C0 (0x0004) [0x00010000]
	unsigned long                                      RI_bInitialized : 1;                         // 0x06C0 (0x0004) [0x00020000]
	unsigned long                                      ReplicatedAiming : 1;                        // 0x06C0 (0x0004) [0x00040000]
	unsigned long                                      ReplicatedBlockedAiming : 1;                 // 0x06C0 (0x0004) [0x00080000]
	unsigned long                                      ReplicatedBlockedWeapon : 1;                 // 0x06C0 (0x0004) [0x00100000]
	unsigned long                                      StartedBlockedFire : 1;                      // 0x06C0 (0x0004) [0x00200000]
	unsigned long                                      bUseSpecialFireMode : 1;                     // 0x06C0 (0x0004) [0x00400000]
	unsigned long                                      bDoingFire : 1;                              // 0x06C0 (0x0004) [0x00800000]
	unsigned long                                      bDoingAltFire : 1;                           // 0x06C0 (0x0004) [0x01000000]
	unsigned long                                      bCanDo360AimingInCover : 1;                  // 0x06C0 (0x0004) [0x02000000]
	unsigned long                                      bNoWeaponIdleAnim : 1;                       // 0x06C0 (0x0004) [0x04000000]
	unsigned long                                      bReplicatedWeaponDown : 1;                   // 0x06C0 (0x0004) [0x08000000]
	unsigned long                                      bSniperVision : 1;                           // 0x06C0 (0x0004) [0x10000000]
	unsigned long                                      ShowSensitivity : 1;                         // 0x06C0 (0x0004) [0x20000000]
	unsigned long                                      ShowFov : 1;                                 // 0x06C0 (0x0004) [0x40000000]
	unsigned long                                      InVisible : 1;                               // 0x06C0 (0x0004) [0x80000000]
	unsigned long                                      bDoingTurnBasedBlendOut : 1;                 // 0x06C4 (0x0004) [0x00000001]
	unsigned long                                      bInRagdollState : 1;                         // 0x06C4 (0x0004) [0x00000002]
	unsigned long                                      bBlockRigidBodyPhysics : 1;                  // 0x06C4 (0x0004) [0x00000004]
	unsigned long                                      bPlayingRagdollBlend : 1;                    // 0x06C4 (0x0004) [0x00000008]
	unsigned long                                      bDrawRagdollDebug : 1;                       // 0x06C4 (0x0004) [0x00000010]
	unsigned long                                      bPlayingRecoveryFromRagdoll : 1;             // 0x06C4 (0x0004) [0x00000020]
	unsigned long                                      bAllowPlayRecoveryFromRagdoll : 1;           // 0x06C4 (0x0004) [0x00000040]
	unsigned long                                      bPlayingDeathAnimation : 1;                  // 0x06C4 (0x0004) [0x00000080]
	unsigned long                                      bForceDisableDeathAnimation : 1;             // 0x06C4 (0x0004) [0x00000100]
	unsigned long                                      bReplicatedWeaponAttachment : 1;             // 0x06C4 (0x0004) [0x00000200]
	unsigned long                                      bInitedWeaponCarrySlots : 1;                 // 0x06C4 (0x0004) [0x00000400]
	unsigned long                                      bFirstWeaponInited : 1;                      // 0x06C4 (0x0004) [0x00000800]
	unsigned long                                      bDoingCoverActionAnimTransition : 1;         // 0x06C4 (0x0004) [0x00001000]
	unsigned long                                      bUsesBodyStances : 1;                        // 0x06C4 (0x0004) [0x00002000]
	unsigned long                                      bCannotRoadieRun : 1;                        // 0x06C4 (0x0004) [0x00004000]
	unsigned long                                      bIsMirrored : 1;                             // 0x06C4 (0x0004) [0x00008000]
	unsigned long                                      bWantsToBeMirrored : 1;                      // 0x06C4 (0x0004) [0x00010000]
	unsigned long                                      bDoingMirrorTransition : 1;                  // 0x06C4 (0x0004) [0x00020000]
	unsigned long                                      bCanDoRun2Cover : 1;                         // 0x06C4 (0x0004) [0x00040000]
	unsigned long                                      bCoverDebug_PlayerFOV : 1;                   // 0x06C4 (0x0004) [0x00080000]
	unsigned long                                      bCoverDebug_CoverFOV : 1;                    // 0x06C4 (0x0004) [0x00100000]
	unsigned long                                      bCoverDebug_CoverVolume : 1;                 // 0x06C4 (0x0004) [0x00200000]
	unsigned long                                      bCoverDebug_ConsideredLinks : 1;             // 0x06C4 (0x0004) [0x00400000]
	unsigned long                                      bCoverDebug_FoundCover : 1;                  // 0x06C4 (0x0004) [0x00800000]
	unsigned long                                      bCoverDebug_ValidatedCover : 1;              // 0x06C4 (0x0004) [0x01000000]
	unsigned long                                      bWasInCover : 1;                             // 0x06C4 (0x0004) [0x02000000]
	unsigned long                                      bIsCoverMirrored : 1;                        // 0x06C4 (0x0004) [0x04000000]
	unsigned long                                      bIsInStationaryCover : 1;                    // 0x06C4 (0x0004) [0x08000000]
	unsigned long                                      bDoing360Aiming : 1;                         // 0x06C4 (0x0004) [0x10000000]
	unsigned long                                      bDoWalk2IdleTransitions : 1;                 // 0x06C4 (0x0004) [0x20000000]
	unsigned long                                      bReplicatedVisualCarrySlotInfoStructChanged : 1; // 0x06C4 (0x0004) [0x40000000]
	unsigned long                                      PlacingItem_DrawSphere : 1;                  // 0x06C4 (0x0004) [0x80000000]
	unsigned long                                      bCanVacuumRocket : 1;                        // 0x06C8 (0x0004) [0x00000001]
	void*                                              WpnTracer;                                   // 0x06CC (0x0004)
	float                                              WpnTracerActivationTime;                     // 0x06D0 (0x0004)
	float                                              MaxUnBlockedWeaponDist;                      // 0x06D4 (0x0004)
	float                                              MinUnBlockedWeaponDist;                      // 0x06D8 (0x0004)
	float                                              MinRealAimDistance;                          // 0x06DC (0x0004)
	float                                              MaxRealAimRotDiff;                           // 0x06E0 (0x0004)
	float                                              SmallWallCheckAngle;                         // 0x06E4 (0x0004)
	float                                              WeaponAimTraceTrueTime;                      // 0x06E8 (0x0004)
	float                                              WeaponAimTraceFalseTime;                     // 0x06EC (0x0004)
	float                                              LastReplicatedBlockedWeaponTRUETime;         // 0x06F0 (0x0004)
	struct FImpactInfo                                 LastCWFRealImpact;                           // 0x06F4 (0x0060)
	TArray< struct FImpactInfo >                       LastCWFImpactList;                           // 0x0754 (0x000C)
	float                                              LastCalcWeaponFireTime;                      // 0x0760 (0x0004)
	struct FCachedFirePosition                         CachedIdlePoseShootSpot;                     // 0x0764 (0x001C)
	struct FCachedFirePosition                         CachedFirePoseShootSpot;                     // 0x0780 (0x001C)
	struct FCachedFirePosition                         CachedAimPoseShootSpot;                      // 0x079C (0x001C)
	TArray< struct FProjectileDetectingInfo >          DetectedProjectiles;                         // 0x07B8 (0x000C)
	int                                                NumOfDetectedProjectiles;                    // 0x07C4 (0x0004)
	int                                                DebugBonesDepth;                             // 0x07C8 (0x0004)
	struct FVector                                     DebugBones[ 128 ];                           // 0x07CC (0x0600)
	struct FVector                                     DebugLastLocation;                           // 0x0DCC (0x000C)
	int                                                LastStartFireCounter;                        // 0x0DD8 (0x0004)
	float                                              PickupProgress;                              // 0x0DDC (0x0004)
	int                                                PickupText;                                  // 0x0DE0 (0x0004)
	float                                              LocationInterpolationSpeed;                  // 0x0DE4 (0x0004)
	struct FVector                                     LI_TargetLocation;                           // 0x0DE8 (0x000C)
	float                                              RotationInterpolationSpeed;                  // 0x0DF4 (0x0004)
	struct FRotator                                    RI_TargetRotation;                           // 0x0DF8 (0x000C)
	float                                              Last_ServerSetCalculatedAimOffset_CallTime;  // 0x0E04 (0x0004)
	float                                              ServerSetCalculatedAimOffset_CallInterval;   // 0x0E08 (0x0004)
	int                                                ReplicatedAimOffsetRotation;                 // 0x0E0C (0x0004)
	struct FName                                       AnimNodeWeaponChangeName;                    // 0x0E10 (0x0008)
	float                                              LastFireTime;                                // 0x0E18 (0x0004)
	float                                              LastAimTime;                                 // 0x0E1C (0x0004)
	float                                              LastAimTime4ReplicatedBlockedAiming;         // 0x0E20 (0x0004)
	struct FVector                                     SaveVelocity;                                // 0x0E24 (0x000C)
	struct FVector                                     SaveAccel;                                   // 0x0E30 (0x000C)
	float                                              ForwardRunTime;                              // 0x0E3C (0x0004)
	struct FVector                                     Demo_CachedCamLoc;                           // 0x0E40 (0x000C)
	struct FRotator                                    Demo_CachedCamRot;                           // 0x0E4C (0x000C)
	int                                                IsVisibilityDetected;                        // 0x0E58 (0x0004)
	float                                              InvulnerabilityTime;                         // 0x0E5C (0x0004)
	struct FBulletTwists_AbilityInfo                   BulletTwistsParams;                          // 0x0E60 (0x0008)
	struct FLastTakeHitInfo                            LastTakeHitInfoStruct;                       // 0x0E68 (0x0044)
	void*                                              TH_SpeedModifierSystem;                      // 0x0EAC (0x0004)
	float                                              FallingTime;                                 // 0x0EB0 (0x0004)
	void*                                              ZeroAnimBlendNode;                           // 0x0EB4 (0x0004)
	void*                                              DeathNode;                                   // 0x0EB8 (0x0004)
	void*                                              TakeHitNodeByWeaponTypeSelector;             // 0x0EBC (0x0004)
	TArray< void* >                                    TargetingNodes;                              // 0x0EC0 (0x000C)
	void*                                              MainWeaponNode;                              // 0x0ECC (0x0004)
	TArray< void* >                                    WeaponChangeNodes;                           // 0x0ED0 (0x000C)
	TArray< void* >                                    SequenceByWeaponNameNodes;                   // 0x0EDC (0x000C)
	void*                                              TurnBasedBlendOutSmoothBlendNode;            // 0x0EE8 (0x0004)
	void*                                              TurnBasedBlendOutListNode;                   // 0x0EEC (0x0004)
	void*                                              TurnBasedBlendOutTurnNode;                   // 0x0EF0 (0x0004)
	void*                                              MeleeBodyNode;                               // 0x0EF4 (0x0004)
	void*                                              WeaponL2CarrySlotIK;                         // 0x0EF8 (0x0004)
	void*                                              WeaponR2CarrySlotIK;                         // 0x0EFC (0x0004)
	void*                                              WeaponLCustomIK;                             // 0x0F00 (0x0004)
	void*                                              WeaponRCustomIK;                             // 0x0F04 (0x0004)
	struct FHBZInfo                                    LastHBZINfo;                                 // 0x0F08 (0x0050)
	TArray< struct FPhysStateParams >                  PhysStates;                                  // 0x0F58 (0x000C)
	unsigned char                                      CurrDeathState;                              // 0x0F64 (0x0001)
	unsigned char                                      CoverType;                                   // 0x0F65 (0x0001)
	unsigned char                                      LastCoverActionAnim;                         // 0x0F66 (0x0001)
	unsigned char                                      CoverAction;                                 // 0x0F67 (0x0001)
	unsigned char                                      CurrentSlotDirection;                        // 0x0F68 (0x0001)
	unsigned char                                      CoverDirection;                              // 0x0F69 (0x0001)
	unsigned char                                      ReplicatedCoverDirection;                    // 0x0F6A (0x0001)
	struct FRagdollStateInfo                           ReplicatedRagdollStateInfoStruct;            // 0x0F6C (0x0044)
	int                                                curPhysStateId;                              // 0x0FB0 (0x0004)
	float                                              RagdollStateStartTime;                       // 0x0FB4 (0x0004)
	float                                              RagdollBlendTargetWeight;                    // 0x0FB8 (0x0004)
	float                                              RagdollBlendSpeed;                           // 0x0FBC (0x0004)
	float                                              RagdollBodyLockTime;                         // 0x0FC0 (0x0004)
	float                                              FallBodyAtRestSpeed;                         // 0x0FC4 (0x0004)
	float                                              RecoveryStartTime;                           // 0x0FC8 (0x0004)
	float                                              DeathAnimationToRagdollMaxBlendInTime;       // 0x0FCC (0x0004)
	struct FDeathAnimationInfo                         ReplicatedDeathAnimationInfoStruct;          // 0x0FD0 (0x0040)
	float                                              DeathAnimationToRagdollBlendTime;            // 0x1010 (0x0004)
	TArray< void* >                                    DroppedWeapons;                              // 0x1014 (0x000C)
	void*                                              WeaponAttachment;                            // 0x1020 (0x0004)
	struct FWeaponAttachmentIDS                        WeaponAttachmentIDSStruct;                   // 0x1024 (0x01E4)
	void*                                              WeaponAmbientSound;                          // 0x1208 (0x0004)
	TArray< struct FWeaponCarrySlot >                  WeaponCarrySlots;                            // 0x120C (0x000C)
	TArray< void* >                                    WeaponCarrySlotRBBodyInstances;              // 0x1218 (0x000C)
	TArray< struct FName >                             WeaponCarrySlotRBBodyInstanceNames;          // 0x1224 (0x000C)
	TArray< class ACCInstancePawn* >                   TraceIgnoredPawnList;                        // 0x1230 (0x000C)
	struct FName                                       HeadBone;                                    // 0x123C (0x0008)
	struct FString                                     StrName;                                     // 0x1244 (0x000C)
	float                                              LastCoverActionAnimUpdateTime;               // 0x1250 (0x0004)
	TArray< void* >                                    BodyStanceNodes;                             // 0x1254 (0x000C)
	void*                                              MirrorNode;                                  // 0x1260 (0x0004)
	void*                                              SynchNode;                                   // 0x1264 (0x0004)
	float                                              LastCoverTime;                               // 0x1268 (0x0004)
	float                                              LastCoverAcquireDistanceSq;                  // 0x126C (0x0004)
	float                                              LastCoverActionTime;                         // 0x1270 (0x0004)
	float                                              NextCoverActionTime;                         // 0x1274 (0x0004)
	float                                              LastEvadeTime;                               // 0x1278 (0x0004)
	float                                              LastEvadeIntoWallTime;                       // 0x127C (0x0004)
	float                                              MinTimeBetweenEvades;                        // 0x1280 (0x0004)
	float                                              LastBumpTime;                                // 0x1284 (0x0004)
	struct FCovPosInfo                                 AcquiredCoverInfo;                           // 0x1288 (0x0034)
	float                                              Run2CoverMaxDist;                            // 0x12BC (0x0004)
	float                                              Run2CoverPerpendicularMaxDist;               // 0x12C0 (0x0004)
	float                                              EndEvadeRun2CoverMaxDist;                    // 0x12C4 (0x0004)
	float                                              RoadieRun2CoverSlideDist;                    // 0x12C8 (0x0004)
	float                                              PawnAcquireCoverFOV;                         // 0x12CC (0x0004)
	float                                              PawnAcquireCoverFOVRoadieRun;                // 0x12D0 (0x0004)
	float                                              CoverAcquireFOV;                             // 0x12D4 (0x0004)
	float                                              RoadieRunCoverAcquireFOV;                    // 0x12D8 (0x0004)
	float                                              CoverSnapScale;                              // 0x12DC (0x0004)
	void*                                              CurrentLink;                                 // 0x12E0 (0x0004)
	struct FCoverInfo                                  CachedCoverGuess;                            // 0x12E4 (0x0008)
	float                                              LastCoverGuessTime;                          // 0x12EC (0x0004)
	struct FRotator                                    OldPawnRotation;                             // 0x12F0 (0x000C)
	int                                                CurrentSlotIdx;                              // 0x12FC (0x0004)
	int                                                TargetSlotIdx;                               // 0x1300 (0x0004)
	int                                                PreviousSlotIdx;                             // 0x1304 (0x0004)
	int                                                LeftSlotIdx;                                 // 0x1308 (0x0004)
	int                                                RightSlotIdx;                                // 0x130C (0x0004)
	float                                              CurrentSlotPct;                              // 0x1310 (0x0004)
	float                                              FreshCoverDirectionTime;                     // 0x1314 (0x0004)
	struct FVector                                     CoverExitVelocity;                           // 0x1318 (0x000C)
	void*                                              AbilitySystem;                               // 0x1324 (0x0004)
	TArray< struct FString >                           AimingMetod;                                 // 0x1328 (0x000C)
	void*                                              RollingNode;                                 // 0x1334 (0x0004)
	void*                                              RollingAnimations;                           // 0x1338 (0x0004)
	void*                                              RollingAnimationSequences[ 8 ];              // 0x133C (0x0020)
	float                                              RollingAnimationsBlendTime;                  // 0x135C (0x0004)
	float                                              RollingAnimationsScale[ 8 ];                 // 0x1360 (0x0020)
	float                                              RollingAnimationsMoveLength[ 8 ];            // 0x1380 (0x0020)
	float                                              CurrentAbilityConditionCheckProcces;         // 0x13A0 (0x0004)
	float                                              LastDuplicatedWeaponAttachmentStateChangeTime; // 0x13A4 (0x0004)
	struct FVisualCarrySlotInfo                        VisualCarrySlotInfoStruct;                   // 0x13A8 (0x000C)
	struct FVisualCarrySlotInfo                        ReplicatedVisualCarrySlotInfoStruct;         // 0x13B4 (0x000C)
	void*                                              GibManager;                                  // 0x13C0 (0x0004)
	struct FCCPawnAnimationsData                       InstanceAnimationsData[ 6 ];                 // 0x13C4 (0x00D8)
	struct FFakeEquipItemsDesc                         FakeEquipItemsDescs[ 6 ];                    // 0x149C (0x00D8)
	struct FPlacingItemInfo                            PlacingItem;                                 // 0x1574 (0x0020)
	struct FPlacingItemInfo                            Client_PlacingItem;                          // 0x1594 (0x0020)
	class UMeshComponent*                              PlacingItemMC;                               // 0x15B4 (0x0004)
	class UMeshComponent*                              PlacingItemAdditionalMC;                     // 0x15B8 (0x0004)
	struct FName                                       MuzzleFlashAbilityName;                      // 0x15BC (0x0008)
	TArray< struct FDamagerStruct >                    DamageCausers;                               // 0x15C4 (0x000C)
	struct FString                                     PawnBurning_ParticleSystemName;              // 0x15D0 (0x000C)
	TArray< struct FPawnBurning_AbilityInfo >          PawnBurning_AbilitiesInfo;                   // 0x15DC (0x000C)
	struct FPawnBurning_BoneInfo                       PawnBurning_Bones[ 100 ];                    // 0x15E8 (0x04B0)
	TArray< struct FName >                             PawnBurning_BonesAvailableToBurn;            // 0x1A98 (0x000C)
	TArray< struct FPawnBurning_BoneInfo >             PawnBurning_BonesToBurn;                     // 0x1AA4 (0x000C)
	TArray< void* >                                    PawnBurning_PSC;                             // 0x1AB0 (0x000C)
	class ACCInstanceController*                       GetClientClockValue_Controller;              // 0x1ABC (0x0004)

	// CCDying
	// Dying
	// FeigningDeath
	// DeadStateBase
	// BulletTwists

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCInstancePawn" );

		return ClassPointer;
	};

public:
	bool eventGetDemoPlayCameraLocationAndRotationAndUpdate ( struct FVector* out_CamLoc, struct FRotator* out_CamRot )
	{
		static UFunction* pfnGetDemoPlayCameraLocationAndRotationAndUpdate = NULL;

		if ( !pfnGetDemoPlayCameraLocationAndRotationAndUpdate )
			pfnGetDemoPlayCameraLocationAndRotationAndUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetDemoPlayCameraLocationAndRotationAndUpdate" );

		ACCInstancePawn_eventGetDemoPlayCameraLocationAndRotationAndUpdate_Parms GetDemoPlayCameraLocationAndRotationAndUpdate_Parms;

		this->ProcessEvent( pfnGetDemoPlayCameraLocationAndRotationAndUpdate, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.out_CamRot, 0xC ); // CPF_OutParm

		return GetDemoPlayCameraLocationAndRotationAndUpdate_Parms.ReturnValue;
	};

	void PlayerChangedTeam ()
	{
		static UFunction* pfnPlayerChangedTeam = NULL;

		if ( !pfnPlayerChangedTeam )
			pfnPlayerChangedTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayerChangedTeam" );

		ACCInstancePawn_execPlayerChangedTeam_Parms PlayerChangedTeam_Parms;

		this->ProcessEvent( pfnPlayerChangedTeam, &PlayerChangedTeam_Parms, NULL );
	};

	void SetInvulnerabilityTime ( float NewInvulnerability )
	{
		static UFunction* pfnSetInvulnerabilityTime = NULL;

		if ( !pfnSetInvulnerabilityTime )
			pfnSetInvulnerabilityTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetInvulnerabilityTime" );

		ACCInstancePawn_execSetInvulnerabilityTime_Parms SetInvulnerabilityTime_Parms;
		SetInvulnerabilityTime_Parms.NewInvulnerability = NewInvulnerability;

		this->ProcessEvent( pfnSetInvulnerabilityTime, &SetInvulnerabilityTime_Parms, NULL );
	};

	void change_physics_weight ( float W )
	{
		static UFunction* pfnchange_physics_weight = NULL;

		if ( !pfnchange_physics_weight )
			pfnchange_physics_weight = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.change_physics_weight" );

		ACCInstancePawn_execchange_physics_weight_Parms change_physics_weight_Parms;
		change_physics_weight_Parms.W = W;

		this->ProcessEvent( pfnchange_physics_weight, &change_physics_weight_Parms, NULL );
	};

	void TestGibs ( struct FString GibPresetName, float Momentum )
	{
		static UFunction* pfnTestGibs = NULL;

		if ( !pfnTestGibs )
			pfnTestGibs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TestGibs" );

		ACCInstancePawn_execTestGibs_Parms TestGibs_Parms;
		memcpy( &TestGibs_Parms.GibPresetName, &GibPresetName, 0xC );
		TestGibs_Parms.Momentum = Momentum;

		this->ProcessEvent( pfnTestGibs, &TestGibs_Parms, NULL );
	};

	void CustomTestGibs ( float Momentum )
	{
		static UFunction* pfnCustomTestGibs = NULL;

		if ( !pfnCustomTestGibs )
			pfnCustomTestGibs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CustomTestGibs" );

		ACCInstancePawn_execCustomTestGibs_Parms CustomTestGibs_Parms;
		CustomTestGibs_Parms.Momentum = Momentum;

		this->ProcessEvent( pfnCustomTestGibs, &CustomTestGibs_Parms, NULL );
	};

	void SpawnGibsForEntireBody ( void* GibPreset, struct FVector ExplosionMomentum, float GibsTearOffMomentum, float GibsTearOffMinPitch )
	{
		static UFunction* pfnSpawnGibsForEntireBody = NULL;

		if ( !pfnSpawnGibsForEntireBody )
			pfnSpawnGibsForEntireBody = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnGibsForEntireBody" );

		ACCInstancePawn_execSpawnGibsForEntireBody_Parms SpawnGibsForEntireBody_Parms;
		SpawnGibsForEntireBody_Parms.GibPreset = GibPreset;
		memcpy( &SpawnGibsForEntireBody_Parms.ExplosionMomentum, &ExplosionMomentum, 0xC );
		SpawnGibsForEntireBody_Parms.GibsTearOffMomentum = GibsTearOffMomentum;
		SpawnGibsForEntireBody_Parms.GibsTearOffMinPitch = GibsTearOffMinPitch;

		this->ProcessEvent( pfnSpawnGibsForEntireBody, &SpawnGibsForEntireBody_Parms, NULL );
	};

	void SpawnShotOffGib ( void* GibPreset, struct FVector ExplosionMomentum )
	{
		static UFunction* pfnSpawnShotOffGib = NULL;

		if ( !pfnSpawnShotOffGib )
			pfnSpawnShotOffGib = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnShotOffGib" );

		ACCInstancePawn_execSpawnShotOffGib_Parms SpawnShotOffGib_Parms;
		SpawnShotOffGib_Parms.GibPreset = GibPreset;
		memcpy( &SpawnShotOffGib_Parms.ExplosionMomentum, &ExplosionMomentum, 0xC );

		this->ProcessEvent( pfnSpawnShotOffGib, &SpawnShotOffGib_Parms, NULL );
	};

	void* FindBestShotOffGibPreset ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
	{
		static UFunction* pfnFindBestShotOffGibPreset = NULL;

		if ( !pfnFindBestShotOffGibPreset )
			pfnFindBestShotOffGibPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindBestShotOffGibPreset" );

		ACCInstancePawn_execFindBestShotOffGibPreset_Parms FindBestShotOffGibPreset_Parms;
		FindBestShotOffGibPreset_Parms.InstigatedBy = InstigatedBy;
		memcpy( &FindBestShotOffGibPreset_Parms.HitLocation, &HitLocation, 0xC );
		FindBestShotOffGibPreset_Parms.DamageType = DamageType;
		memcpy( &FindBestShotOffGibPreset_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnFindBestShotOffGibPreset, &FindBestShotOffGibPreset_Parms, NULL );

		return FindBestShotOffGibPreset_Parms.ReturnValue;
	};

	void* FindOptimalExtremityShotOffGibPreset ( class AController* InstigatedBy, struct FVector HitLocation )
	{
		static UFunction* pfnFindOptimalExtremityShotOffGibPreset = NULL;

		if ( !pfnFindOptimalExtremityShotOffGibPreset )
			pfnFindOptimalExtremityShotOffGibPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindOptimalExtremityShotOffGibPreset" );

		ACCInstancePawn_execFindOptimalExtremityShotOffGibPreset_Parms FindOptimalExtremityShotOffGibPreset_Parms;
		FindOptimalExtremityShotOffGibPreset_Parms.InstigatedBy = InstigatedBy;
		memcpy( &FindOptimalExtremityShotOffGibPreset_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnFindOptimalExtremityShotOffGibPreset, &FindOptimalExtremityShotOffGibPreset_Parms, NULL );

		return FindOptimalExtremityShotOffGibPreset_Parms.ReturnValue;
	};

	void GetExtremityShotOffBaseBones ( TArray< struct FName >* BoneNames )
	{
		static UFunction* pfnGetExtremityShotOffBaseBones = NULL;

		if ( !pfnGetExtremityShotOffBaseBones )
			pfnGetExtremityShotOffBaseBones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetExtremityShotOffBaseBones" );

		ACCInstancePawn_execGetExtremityShotOffBaseBones_Parms GetExtremityShotOffBaseBones_Parms;

		this->ProcessEvent( pfnGetExtremityShotOffBaseBones, &GetExtremityShotOffBaseBones_Parms, NULL );

		if ( BoneNames )
			memcpy( BoneNames, &GetExtremityShotOffBaseBones_Parms.BoneNames, 0xC ); // CPF_OutParm
	};

	void GetExtremityShotOffBaseGibClasses ( TArray< class UClass* >* GibClasses )
	{
		static UFunction* pfnGetExtremityShotOffBaseGibClasses = NULL;

		if ( !pfnGetExtremityShotOffBaseGibClasses )
			pfnGetExtremityShotOffBaseGibClasses = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetExtremityShotOffBaseGibClasses" );

		ACCInstancePawn_execGetExtremityShotOffBaseGibClasses_Parms GetExtremityShotOffBaseGibClasses_Parms;

		this->ProcessEvent( pfnGetExtremityShotOffBaseGibClasses, &GetExtremityShotOffBaseGibClasses_Parms, NULL );

		if ( GibClasses )
			*GibClasses = GetExtremityShotOffBaseGibClasses_Parms.GibClasses; // CPF_OutParm
	};

	void* GetGibPresetForGibClass ( class UClass* GibClass )
	{
		static UFunction* pfnGetGibPresetForGibClass = NULL;

		if ( !pfnGetGibPresetForGibClass )
			pfnGetGibPresetForGibClass = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetGibPresetForGibClass" );

		ACCInstancePawn_execGetGibPresetForGibClass_Parms GetGibPresetForGibClass_Parms;
		GetGibPresetForGibClass_Parms.GibClass = GibClass;

		this->ProcessEvent( pfnGetGibPresetForGibClass, &GetGibPresetForGibClass_Parms, NULL );

		return GetGibPresetForGibClass_Parms.ReturnValue;
	};

	void* FindBestExplosionGibPreset ()
	{
		static UFunction* pfnFindBestExplosionGibPreset = NULL;

		if ( !pfnFindBestExplosionGibPreset )
			pfnFindBestExplosionGibPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindBestExplosionGibPreset" );

		ACCInstancePawn_execFindBestExplosionGibPreset_Parms FindBestExplosionGibPreset_Parms;

		this->ProcessEvent( pfnFindBestExplosionGibPreset, &FindBestExplosionGibPreset_Parms, NULL );

		return FindBestExplosionGibPreset_Parms.ReturnValue;
	};

	void ServerPerformGibsSpawningLogic ( unsigned long bForceShotOffGibs, int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnServerPerformGibsSpawningLogic = NULL;

		if ( !pfnServerPerformGibsSpawningLogic )
			pfnServerPerformGibsSpawningLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerPerformGibsSpawningLogic" );

		ACCInstancePawn_execServerPerformGibsSpawningLogic_Parms ServerPerformGibsSpawningLogic_Parms;
		ServerPerformGibsSpawningLogic_Parms.bForceShotOffGibs = bForceShotOffGibs;
		ServerPerformGibsSpawningLogic_Parms.Damage = Damage;
		ServerPerformGibsSpawningLogic_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ServerPerformGibsSpawningLogic_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ServerPerformGibsSpawningLogic_Parms.Momentum, &Momentum, 0xC );
		ServerPerformGibsSpawningLogic_Parms.DamageType = DamageType;
		memcpy( &ServerPerformGibsSpawningLogic_Parms.HitInfo, &HitInfo, 0x1C );
		ServerPerformGibsSpawningLogic_Parms.DamageCauser = DamageCauser;
		memcpy( &ServerPerformGibsSpawningLogic_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnServerPerformGibsSpawningLogic, &ServerPerformGibsSpawningLogic_Parms, NULL );
	};

	void InitializeGibManager ()
	{
		static UFunction* pfnInitializeGibManager = NULL;

		if ( !pfnInitializeGibManager )
			pfnInitializeGibManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InitializeGibManager" );

		ACCInstancePawn_execInitializeGibManager_Parms InitializeGibManager_Parms;

		this->ProcessEvent( pfnInitializeGibManager, &InitializeGibManager_Parms, NULL );
	};

	void eventOnAnimEnd ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnOnAnimEnd = NULL;

		if ( !pfnOnAnimEnd )
			pfnOnAnimEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.OnAnimEnd" );

		ACCInstancePawn_eventOnAnimEnd_Parms OnAnimEnd_Parms;
		OnAnimEnd_Parms.SeqNode = SeqNode;
		OnAnimEnd_Parms.PlayedTime = PlayedTime;
		OnAnimEnd_Parms.ExcessTime = ExcessTime;

		this->ProcessEvent( pfnOnAnimEnd, &OnAnimEnd_Parms, NULL );
	};

	void SetLocationInterpolationSpeed ( float V )
	{
		static UFunction* pfnSetLocationInterpolationSpeed = NULL;

		if ( !pfnSetLocationInterpolationSpeed )
			pfnSetLocationInterpolationSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetLocationInterpolationSpeed" );

		ACCInstancePawn_execSetLocationInterpolationSpeed_Parms SetLocationInterpolationSpeed_Parms;
		SetLocationInterpolationSpeed_Parms.V = V;

		this->ProcessEvent( pfnSetLocationInterpolationSpeed, &SetLocationInterpolationSpeed_Parms, NULL );
	};

	void PlaySound_AbilityReady ()
	{
		static UFunction* pfnPlaySound_AbilityReady = NULL;

		if ( !pfnPlaySound_AbilityReady )
			pfnPlaySound_AbilityReady = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaySound_AbilityReady" );

		ACCInstancePawn_execPlaySound_AbilityReady_Parms PlaySound_AbilityReady_Parms;

		this->ProcessEvent( pfnPlaySound_AbilityReady, &PlaySound_AbilityReady_Parms, NULL );
	};

	void WeaponStoppedFiring ( unsigned long bViaReplication )
	{
		static UFunction* pfnWeaponStoppedFiring = NULL;

		if ( !pfnWeaponStoppedFiring )
			pfnWeaponStoppedFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.WeaponStoppedFiring" );

		ACCInstancePawn_execWeaponStoppedFiring_Parms WeaponStoppedFiring_Parms;
		WeaponStoppedFiring_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnWeaponStoppedFiring, &WeaponStoppedFiring_Parms, NULL );
	};

	void WeaponFired ( unsigned long bViaReplication, struct FVector StartTraceLocation/*CPF_OptionalParm*/, struct FVector EndTraceLocation/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnWeaponFired = NULL;

		if ( !pfnWeaponFired )
			pfnWeaponFired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.WeaponFired" );

		ACCInstancePawn_execWeaponFired_Parms WeaponFired_Parms;
		WeaponFired_Parms.bViaReplication = bViaReplication;
		memcpy( &WeaponFired_Parms.StartTraceLocation, &StartTraceLocation, 0xC );
		memcpy( &WeaponFired_Parms.EndTraceLocation, &EndTraceLocation, 0xC );
		memcpy( &WeaponFired_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnWeaponFired, &WeaponFired_Parms, NULL );
	};

	void SniperVision ()
	{
		static UFunction* pfnSniperVision = NULL;

		if ( !pfnSniperVision )
			pfnSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SniperVision" );

		ACCInstancePawn_execSniperVision_Parms SniperVision_Parms;

		this->ProcessEvent( pfnSniperVision, &SniperVision_Parms, NULL );
	};

	void SetSniperVision ( unsigned long S )
	{
		static UFunction* pfnSetSniperVision = NULL;

		if ( !pfnSetSniperVision )
			pfnSetSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetSniperVision" );

		ACCInstancePawn_execSetSniperVision_Parms SetSniperVision_Parms;
		SetSniperVision_Parms.S = S;

		this->ProcessEvent( pfnSetSniperVision, &SetSniperVision_Parms, NULL );
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnLanded = NULL;

		if ( !pfnLanded )
			pfnLanded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Landed" );

		ACCInstancePawn_eventLanded_Parms Landed_Parms;
		memcpy( &Landed_Parms.HitNormal, &HitNormal, 0xC );
		Landed_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnLanded, &Landed_Parms, NULL );
	};

	void TestGetStartAndFinishDelay ( float* StartDelay, float* FinishDelay )
	{
		static UFunction* pfnTestGetStartAndFinishDelay = NULL;

		if ( !pfnTestGetStartAndFinishDelay )
			pfnTestGetStartAndFinishDelay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TestGetStartAndFinishDelay" );

		ACCInstancePawn_execTestGetStartAndFinishDelay_Parms TestGetStartAndFinishDelay_Parms;

		this->ProcessEvent( pfnTestGetStartAndFinishDelay, &TestGetStartAndFinishDelay_Parms, NULL );

		if ( StartDelay )
			*StartDelay = TestGetStartAndFinishDelay_Parms.StartDelay; // CPF_OutParm
		if ( FinishDelay )
			*FinishDelay = TestGetStartAndFinishDelay_Parms.FinishDelay; // CPF_OutParm
	};

	void AdditionalAnimationFinished ()
	{
		static UFunction* pfnAdditionalAnimationFinished = NULL;

		if ( !pfnAdditionalAnimationFinished )
			pfnAdditionalAnimationFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AdditionalAnimationFinished" );

		ACCInstancePawn_execAdditionalAnimationFinished_Parms AdditionalAnimationFinished_Parms;

		this->ProcessEvent( pfnAdditionalAnimationFinished, &AdditionalAnimationFinished_Parms, NULL );
	};

	void AdditionalAnimationStarted ()
	{
		static UFunction* pfnAdditionalAnimationStarted = NULL;

		if ( !pfnAdditionalAnimationStarted )
			pfnAdditionalAnimationStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AdditionalAnimationStarted" );

		ACCInstancePawn_execAdditionalAnimationStarted_Parms AdditionalAnimationStarted_Parms;

		this->ProcessEvent( pfnAdditionalAnimationStarted, &AdditionalAnimationStarted_Parms, NULL );
	};

	void PlayWeaponVisualGetting ()
	{
		static UFunction* pfnPlayWeaponVisualGetting = NULL;

		if ( !pfnPlayWeaponVisualGetting )
			pfnPlayWeaponVisualGetting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayWeaponVisualGetting" );

		ACCInstancePawn_execPlayWeaponVisualGetting_Parms PlayWeaponVisualGetting_Parms;

		this->ProcessEvent( pfnPlayWeaponVisualGetting, &PlayWeaponVisualGetting_Parms, NULL );
	};

	void PlayWeaponVisualHiding ()
	{
		static UFunction* pfnPlayWeaponVisualHiding = NULL;

		if ( !pfnPlayWeaponVisualHiding )
			pfnPlayWeaponVisualHiding = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayWeaponVisualHiding" );

		ACCInstancePawn_execPlayWeaponVisualHiding_Parms PlayWeaponVisualHiding_Parms;

		this->ProcessEvent( pfnPlayWeaponVisualHiding, &PlayWeaponVisualHiding_Parms, NULL );
	};

	void SetMuzzleFlashAbilityName ( struct FName AbilityName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetMuzzleFlashAbilityName = NULL;

		if ( !pfnSetMuzzleFlashAbilityName )
			pfnSetMuzzleFlashAbilityName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetMuzzleFlashAbilityName" );

		ACCInstancePawn_execSetMuzzleFlashAbilityName_Parms SetMuzzleFlashAbilityName_Parms;
		memcpy( &SetMuzzleFlashAbilityName_Parms.AbilityName, &AbilityName, 0x8 );

		this->ProcessEvent( pfnSetMuzzleFlashAbilityName, &SetMuzzleFlashAbilityName_Parms, NULL );
	};

	struct FName GetMuzzleFlashAbilityName ()
	{
		static UFunction* pfnGetMuzzleFlashAbilityName = NULL;

		if ( !pfnGetMuzzleFlashAbilityName )
			pfnGetMuzzleFlashAbilityName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetMuzzleFlashAbilityName" );

		ACCInstancePawn_execGetMuzzleFlashAbilityName_Parms GetMuzzleFlashAbilityName_Parms;

		this->ProcessEvent( pfnGetMuzzleFlashAbilityName, &GetMuzzleFlashAbilityName_Parms, NULL );

		return GetMuzzleFlashAbilityName_Parms.ReturnValue;
	};

	void ChatMessage ( struct FString MsgText )
	{
		static UFunction* pfnChatMessage = NULL;

		if ( !pfnChatMessage )
			pfnChatMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ChatMessage" );

		ACCInstancePawn_execChatMessage_Parms ChatMessage_Parms;
		memcpy( &ChatMessage_Parms.MsgText, &MsgText, 0xC );

		pfnChatMessage->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnChatMessage, &ChatMessage_Parms, NULL );
		pfnChatMessage->FunctionFlags |= 0x400;
	};

	void* GetClientActionManager ()
	{
		static UFunction* pfnGetClientActionManager = NULL;

		if ( !pfnGetClientActionManager )
			pfnGetClientActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetClientActionManager" );

		ACCInstancePawn_execGetClientActionManager_Parms GetClientActionManager_Parms;

		this->ProcessEvent( pfnGetClientActionManager, &GetClientActionManager_Parms, NULL );

		return GetClientActionManager_Parms.ReturnValue;
	};

	void* GetServerActionManager ()
	{
		static UFunction* pfnGetServerActionManager = NULL;

		if ( !pfnGetServerActionManager )
			pfnGetServerActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetServerActionManager" );

		ACCInstancePawn_execGetServerActionManager_Parms GetServerActionManager_Parms;

		this->ProcessEvent( pfnGetServerActionManager, &GetServerActionManager_Parms, NULL );

		return GetServerActionManager_Parms.ReturnValue;
	};

	void* GetMainActionManager ()
	{
		static UFunction* pfnGetMainActionManager = NULL;

		if ( !pfnGetMainActionManager )
			pfnGetMainActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetMainActionManager" );

		ACCInstancePawn_execGetMainActionManager_Parms GetMainActionManager_Parms;

		this->ProcessEvent( pfnGetMainActionManager, &GetMainActionManager_Parms, NULL );

		return GetMainActionManager_Parms.ReturnValue;
	};

	void AddDamageCauser ( class ACCPlayerReplicationInfo* DamagerPRI, int Damage )
	{
		static UFunction* pfnAddDamageCauser = NULL;

		if ( !pfnAddDamageCauser )
			pfnAddDamageCauser = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AddDamageCauser" );

		ACCInstancePawn_execAddDamageCauser_Parms AddDamageCauser_Parms;
		AddDamageCauser_Parms.DamagerPRI = DamagerPRI;
		AddDamageCauser_Parms.Damage = Damage;

		this->ProcessEvent( pfnAddDamageCauser, &AddDamageCauser_Parms, NULL );
	};

	int FindOldestDamageCauser ()
	{
		static UFunction* pfnFindOldestDamageCauser = NULL;

		if ( !pfnFindOldestDamageCauser )
			pfnFindOldestDamageCauser = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindOldestDamageCauser" );

		ACCInstancePawn_execFindOldestDamageCauser_Parms FindOldestDamageCauser_Parms;

		this->ProcessEvent( pfnFindOldestDamageCauser, &FindOldestDamageCauser_Parms, NULL );

		return FindOldestDamageCauser_Parms.ReturnValue;
	};

	int FindDamageCauserByPRI ( class ACCPlayerReplicationInfo* DamagerPRI )
	{
		static UFunction* pfnFindDamageCauserByPRI = NULL;

		if ( !pfnFindDamageCauserByPRI )
			pfnFindDamageCauserByPRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindDamageCauserByPRI" );

		ACCInstancePawn_execFindDamageCauserByPRI_Parms FindDamageCauserByPRI_Parms;
		FindDamageCauserByPRI_Parms.DamagerPRI = DamagerPRI;

		this->ProcessEvent( pfnFindDamageCauserByPRI, &FindDamageCauserByPRI_Parms, NULL );

		return FindDamageCauserByPRI_Parms.ReturnValue;
	};

	void ClearDamageCausersList ()
	{
		static UFunction* pfnClearDamageCausersList = NULL;

		if ( !pfnClearDamageCausersList )
			pfnClearDamageCausersList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClearDamageCausersList" );

		ACCInstancePawn_execClearDamageCausersList_Parms ClearDamageCausersList_Parms;

		this->ProcessEvent( pfnClearDamageCausersList, &ClearDamageCausersList_Parms, NULL );
	};

	void UpdateLastStartFireCounter ()
	{
		static UFunction* pfnUpdateLastStartFireCounter = NULL;

		if ( !pfnUpdateLastStartFireCounter )
			pfnUpdateLastStartFireCounter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateLastStartFireCounter" );

		ACCInstancePawn_execUpdateLastStartFireCounter_Parms UpdateLastStartFireCounter_Parms;

		this->ProcessEvent( pfnUpdateLastStartFireCounter, &UpdateLastStartFireCounter_Parms, NULL );
	};

	void UpdateLastFireTime ()
	{
		static UFunction* pfnUpdateLastFireTime = NULL;

		if ( !pfnUpdateLastFireTime )
			pfnUpdateLastFireTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateLastFireTime" );

		ACCInstancePawn_execUpdateLastFireTime_Parms UpdateLastFireTime_Parms;

		this->ProcessEvent( pfnUpdateLastFireTime, &UpdateLastFireTime_Parms, NULL );
	};

	void ServerSetShowServerSkeleton ( unsigned long bShow )
	{
		static UFunction* pfnServerSetShowServerSkeleton = NULL;

		if ( !pfnServerSetShowServerSkeleton )
			pfnServerSetShowServerSkeleton = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSetShowServerSkeleton" );

		ACCInstancePawn_execServerSetShowServerSkeleton_Parms ServerSetShowServerSkeleton_Parms;
		ServerSetShowServerSkeleton_Parms.bShow = bShow;

		this->ProcessEvent( pfnServerSetShowServerSkeleton, &ServerSetShowServerSkeleton_Parms, NULL );
	};

	void ShowServerSkeleton ()
	{
		static UFunction* pfnShowServerSkeleton = NULL;

		if ( !pfnShowServerSkeleton )
			pfnShowServerSkeleton = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ShowServerSkeleton" );

		ACCInstancePawn_execShowServerSkeleton_Parms ShowServerSkeleton_Parms;

		this->ProcessEvent( pfnShowServerSkeleton, &ShowServerSkeleton_Parms, NULL );
	};

	bool GetIsValidTHAnimBone ( struct FName BoneName )
	{
		static UFunction* pfnGetIsValidTHAnimBone = NULL;

		if ( !pfnGetIsValidTHAnimBone )
			pfnGetIsValidTHAnimBone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetIsValidTHAnimBone" );

		ACCInstancePawn_execGetIsValidTHAnimBone_Parms GetIsValidTHAnimBone_Parms;
		memcpy( &GetIsValidTHAnimBone_Parms.BoneName, &BoneName, 0x8 );

		pfnGetIsValidTHAnimBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetIsValidTHAnimBone, &GetIsValidTHAnimBone_Parms, NULL );
		pfnGetIsValidTHAnimBone->FunctionFlags |= 0x400;

		return GetIsValidTHAnimBone_Parms.ReturnValue;
	};

	void DrawDebugServerSkeletonData ()
	{
		static UFunction* pfnDrawDebugServerSkeletonData = NULL;

		if ( !pfnDrawDebugServerSkeletonData )
			pfnDrawDebugServerSkeletonData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DrawDebugServerSkeletonData" );

		ACCInstancePawn_execDrawDebugServerSkeletonData_Parms DrawDebugServerSkeletonData_Parms;

		pfnDrawDebugServerSkeletonData->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDrawDebugServerSkeletonData, &DrawDebugServerSkeletonData_Parms, NULL );
		pfnDrawDebugServerSkeletonData->FunctionFlags |= 0x400;
	};

	void UpdateDebugServerSkeletonData ()
	{
		static UFunction* pfnUpdateDebugServerSkeletonData = NULL;

		if ( !pfnUpdateDebugServerSkeletonData )
			pfnUpdateDebugServerSkeletonData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateDebugServerSkeletonData" );

		ACCInstancePawn_execUpdateDebugServerSkeletonData_Parms UpdateDebugServerSkeletonData_Parms;

		pfnUpdateDebugServerSkeletonData->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateDebugServerSkeletonData, &UpdateDebugServerSkeletonData_Parms, NULL );
		pfnUpdateDebugServerSkeletonData->FunctionFlags |= 0x400;
	};

	bool GetIsFiringToCrosshair ()
	{
		static UFunction* pfnGetIsFiringToCrosshair = NULL;

		if ( !pfnGetIsFiringToCrosshair )
			pfnGetIsFiringToCrosshair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetIsFiringToCrosshair" );

		ACCInstancePawn_execGetIsFiringToCrosshair_Parms GetIsFiringToCrosshair_Parms;

		this->ProcessEvent( pfnGetIsFiringToCrosshair, &GetIsFiringToCrosshair_Parms, NULL );

		return GetIsFiringToCrosshair_Parms.ReturnValue;
	};

	class ACCInstancePawn* eventGetWeaponTargetPawn ()
	{
		static UFunction* pfnGetWeaponTargetPawn = NULL;

		if ( !pfnGetWeaponTargetPawn )
			pfnGetWeaponTargetPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponTargetPawn" );

		ACCInstancePawn_eventGetWeaponTargetPawn_Parms GetWeaponTargetPawn_Parms;

		this->ProcessEvent( pfnGetWeaponTargetPawn, &GetWeaponTargetPawn_Parms, NULL );

		return GetWeaponTargetPawn_Parms.ReturnValue;
	};

	void debugForceUpdateCarrySlots ()
	{
		static UFunction* pfndebugForceUpdateCarrySlots = NULL;

		if ( !pfndebugForceUpdateCarrySlots )
			pfndebugForceUpdateCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.debugForceUpdateCarrySlots" );

		ACCInstancePawn_execdebugForceUpdateCarrySlots_Parms debugForceUpdateCarrySlots_Parms;

		this->ProcessEvent( pfndebugForceUpdateCarrySlots, &debugForceUpdateCarrySlots_Parms, NULL );
	};

	void ServerSpawnTurret ()
	{
		static UFunction* pfnServerSpawnTurret = NULL;

		if ( !pfnServerSpawnTurret )
			pfnServerSpawnTurret = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSpawnTurret" );

		ACCInstancePawn_execServerSpawnTurret_Parms ServerSpawnTurret_Parms;

		this->ProcessEvent( pfnServerSpawnTurret, &ServerSpawnTurret_Parms, NULL );
	};

	void SpawnTurret ()
	{
		static UFunction* pfnSpawnTurret = NULL;

		if ( !pfnSpawnTurret )
			pfnSpawnTurret = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnTurret" );

		ACCInstancePawn_execSpawnTurret_Parms SpawnTurret_Parms;

		this->ProcessEvent( pfnSpawnTurret, &SpawnTurret_Parms, NULL );
	};

	void HighlightCrosshair ( class ACCPawn* Pawn )
	{
		static UFunction* pfnHighlightCrosshair = NULL;

		if ( !pfnHighlightCrosshair )
			pfnHighlightCrosshair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.HighlightCrosshair" );

		ACCInstancePawn_execHighlightCrosshair_Parms HighlightCrosshair_Parms;
		HighlightCrosshair_Parms.Pawn = Pawn;

		this->ProcessEvent( pfnHighlightCrosshair, &HighlightCrosshair_Parms, NULL );
	};

	void SetHudWeapon ( unsigned char Slot )
	{
		static UFunction* pfnSetHudWeapon = NULL;

		if ( !pfnSetHudWeapon )
			pfnSetHudWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetHudWeapon" );

		ACCInstancePawn_execSetHudWeapon_Parms SetHudWeapon_Parms;
		SetHudWeapon_Parms.Slot = Slot;

		this->ProcessEvent( pfnSetHudWeapon, &SetHudWeapon_Parms, NULL );
	};

	void FillHudWeapons ( unsigned char slot0, unsigned char Slot1, unsigned char Slot2 )
	{
		static UFunction* pfnFillHudWeapons = NULL;

		if ( !pfnFillHudWeapons )
			pfnFillHudWeapons = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillHudWeapons" );

		ACCInstancePawn_execFillHudWeapons_Parms FillHudWeapons_Parms;
		FillHudWeapons_Parms.slot0 = slot0;
		FillHudWeapons_Parms.Slot1 = Slot1;
		FillHudWeapons_Parms.Slot2 = Slot2;

		this->ProcessEvent( pfnFillHudWeapons, &FillHudWeapons_Parms, NULL );
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
	{
		static UFunction* pfnDied = NULL;

		if ( !pfnDied )
			pfnDied = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Died" );

		ACCInstancePawn_execDied_Parms Died_Parms;
		Died_Parms.Killer = Killer;
		Died_Parms.DamageType = DamageType;
		memcpy( &Died_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnDied, &Died_Parms, NULL );

		return Died_Parms.ReturnValue;
	};

	void BroadcastCombatMessage ( class ACCPlayerReplicationInfo* PRIKilled, class ACCPlayerReplicationInfo* PRIKiller, unsigned char DamageType/*CPF_OptionalParm*/, unsigned char WeaponSlot/*CPF_OptionalParm*/, unsigned long bHeadShot/*CPF_OptionalParm*/, unsigned long bMine/*CPF_OptionalParm*/, struct FAdditionalParam* OptionalInitParam )
	{
		static UFunction* pfnBroadcastCombatMessage = NULL;

		if ( !pfnBroadcastCombatMessage )
			pfnBroadcastCombatMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BroadcastCombatMessage" );

		ACCInstancePawn_execBroadcastCombatMessage_Parms BroadcastCombatMessage_Parms;
		BroadcastCombatMessage_Parms.PRIKilled = PRIKilled;
		BroadcastCombatMessage_Parms.PRIKiller = PRIKiller;
		BroadcastCombatMessage_Parms.DamageType = DamageType;
		BroadcastCombatMessage_Parms.WeaponSlot = WeaponSlot;
		BroadcastCombatMessage_Parms.bHeadShot = bHeadShot;
		BroadcastCombatMessage_Parms.bMine = bMine;

		this->ProcessEvent( pfnBroadcastCombatMessage, &BroadcastCombatMessage_Parms, NULL );

		if ( OptionalInitParam )
			memcpy( OptionalInitParam, &BroadcastCombatMessage_Parms.OptionalInitParam, 0x50 ); // CPF_OutParm
	};

	void PlayDeathSound ( struct FVector HitLocation, struct FAdditionalHitInfo AddInfo, struct FTakeHitInfo DeathImpulseInfo, struct FAdditionalParam OptionalInitParam )
	{
		static UFunction* pfnPlayDeathSound = NULL;

		if ( !pfnPlayDeathSound )
			pfnPlayDeathSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayDeathSound" );

		ACCInstancePawn_execPlayDeathSound_Parms PlayDeathSound_Parms;
		memcpy( &PlayDeathSound_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PlayDeathSound_Parms.AddInfo, &AddInfo, 0xC );
		memcpy( &PlayDeathSound_Parms.DeathImpulseInfo, &DeathImpulseInfo, 0x3C );
		memcpy( &PlayDeathSound_Parms.OptionalInitParam, &OptionalInitParam, 0x50 );

		this->ProcessEvent( pfnPlayDeathSound, &PlayDeathSound_Parms, NULL );
	};

	void eventHealthBelowZero ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHealthBelowZero = NULL;

		if ( !pfnHealthBelowZero )
			pfnHealthBelowZero = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.HealthBelowZero" );

		ACCInstancePawn_eventHealthBelowZero_Parms HealthBelowZero_Parms;
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

	void NotifyDeathHUD ( class AActor* LastDamageCauser )
	{
		static UFunction* pfnNotifyDeathHUD = NULL;

		if ( !pfnNotifyDeathHUD )
			pfnNotifyDeathHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.NotifyDeathHUD" );

		ACCInstancePawn_execNotifyDeathHUD_Parms NotifyDeathHUD_Parms;
		NotifyDeathHUD_Parms.LastDamageCauser = LastDamageCauser;

		this->ProcessEvent( pfnNotifyDeathHUD, &NotifyDeathHUD_Parms, NULL );
	};

	class ACCInstanceController* GetControllerFromDamageCauser ( class AActor* LastDamageCauser )
	{
		static UFunction* pfnGetControllerFromDamageCauser = NULL;

		if ( !pfnGetControllerFromDamageCauser )
			pfnGetControllerFromDamageCauser = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetControllerFromDamageCauser" );

		ACCInstancePawn_execGetControllerFromDamageCauser_Parms GetControllerFromDamageCauser_Parms;
		GetControllerFromDamageCauser_Parms.LastDamageCauser = LastDamageCauser;

		this->ProcessEvent( pfnGetControllerFromDamageCauser, &GetControllerFromDamageCauser_Parms, NULL );

		return GetControllerFromDamageCauser_Parms.ReturnValue;
	};

	bool FillKillerInfoFrom ( class ACCInstanceController* C, float DamageDone, struct FKillerInfo* Info )
	{
		static UFunction* pfnFillKillerInfoFrom = NULL;

		if ( !pfnFillKillerInfoFrom )
			pfnFillKillerInfoFrom = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillKillerInfoFrom" );

		ACCInstancePawn_execFillKillerInfoFrom_Parms FillKillerInfoFrom_Parms;
		FillKillerInfoFrom_Parms.C = C;
		FillKillerInfoFrom_Parms.DamageDone = DamageDone;

		this->ProcessEvent( pfnFillKillerInfoFrom, &FillKillerInfoFrom_Parms, NULL );

		if ( Info )
			memcpy( Info, &FillKillerInfoFrom_Parms.Info, 0xA8 ); // CPF_OutParm

		return FillKillerInfoFrom_Parms.ReturnValue;
	};

	void dual_deathbug_print_debug_controller_info ( class AController* C, struct FString Prefix )
	{
		static UFunction* pfndual_deathbug_print_debug_controller_info = NULL;

		if ( !pfndual_deathbug_print_debug_controller_info )
			pfndual_deathbug_print_debug_controller_info = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.dual_deathbug_print_debug_controller_info" );

		ACCInstancePawn_execdual_deathbug_print_debug_controller_info_Parms dual_deathbug_print_debug_controller_info_Parms;
		dual_deathbug_print_debug_controller_info_Parms.C = C;
		memcpy( &dual_deathbug_print_debug_controller_info_Parms.Prefix, &Prefix, 0xC );

		this->ProcessEvent( pfndual_deathbug_print_debug_controller_info, &dual_deathbug_print_debug_controller_info_Parms, NULL );
	};

	void AddAssistScore ( class ACCPlayerReplicationInfo* KillerPRI )
	{
		static UFunction* pfnAddAssistScore = NULL;

		if ( !pfnAddAssistScore )
			pfnAddAssistScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AddAssistScore" );

		ACCInstancePawn_execAddAssistScore_Parms AddAssistScore_Parms;
		AddAssistScore_Parms.KillerPRI = KillerPRI;

		this->ProcessEvent( pfnAddAssistScore, &AddAssistScore_Parms, NULL );
	};

	bool GetShouldPlayDeathAnimation ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetShouldPlayDeathAnimation = NULL;

		if ( !pfnGetShouldPlayDeathAnimation )
			pfnGetShouldPlayDeathAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetShouldPlayDeathAnimation" );

		ACCInstancePawn_execGetShouldPlayDeathAnimation_Parms GetShouldPlayDeathAnimation_Parms;
		GetShouldPlayDeathAnimation_Parms.Damage = Damage;
		GetShouldPlayDeathAnimation_Parms.InstigatedBy = InstigatedBy;
		memcpy( &GetShouldPlayDeathAnimation_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &GetShouldPlayDeathAnimation_Parms.Momentum, &Momentum, 0xC );
		GetShouldPlayDeathAnimation_Parms.DamageType = DamageType;
		memcpy( &GetShouldPlayDeathAnimation_Parms.HitInfo, &HitInfo, 0x1C );
		GetShouldPlayDeathAnimation_Parms.DamageCauser = DamageCauser;
		memcpy( &GetShouldPlayDeathAnimation_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnGetShouldPlayDeathAnimation, &GetShouldPlayDeathAnimation_Parms, NULL );

		return GetShouldPlayDeathAnimation_Parms.ReturnValue;
	};

	unsigned char FindWeaponByDamageType ( class UClass* DamageType )
	{
		static UFunction* pfnFindWeaponByDamageType = NULL;

		if ( !pfnFindWeaponByDamageType )
			pfnFindWeaponByDamageType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindWeaponByDamageType" );

		ACCInstancePawn_execFindWeaponByDamageType_Parms FindWeaponByDamageType_Parms;
		FindWeaponByDamageType_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnFindWeaponByDamageType, &FindWeaponByDamageType_Parms, NULL );

		return FindWeaponByDamageType_Parms.ReturnValue;
	};

	unsigned char CalcWeaponSlot ( class UClass* DamageType )
	{
		static UFunction* pfnCalcWeaponSlot = NULL;

		if ( !pfnCalcWeaponSlot )
			pfnCalcWeaponSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcWeaponSlot" );

		ACCInstancePawn_execCalcWeaponSlot_Parms CalcWeaponSlot_Parms;
		CalcWeaponSlot_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnCalcWeaponSlot, &CalcWeaponSlot_Parms, NULL );

		return CalcWeaponSlot_Parms.ReturnValue;
	};

	void debugUpdateWeaponAttaches ()
	{
		static UFunction* pfndebugUpdateWeaponAttaches = NULL;

		if ( !pfndebugUpdateWeaponAttaches )
			pfndebugUpdateWeaponAttaches = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.debugUpdateWeaponAttaches" );

		ACCInstancePawn_execdebugUpdateWeaponAttaches_Parms debugUpdateWeaponAttaches_Parms;

		this->ProcessEvent( pfndebugUpdateWeaponAttaches, &debugUpdateWeaponAttaches_Parms, NULL );
	};

	void SetAvatarMaterial ( class UMaterialInterface* Material/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetAvatarMaterial = NULL;

		if ( !pfnSetAvatarMaterial )
			pfnSetAvatarMaterial = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetAvatarMaterial" );

		ACCInstancePawn_execSetAvatarMaterial_Parms SetAvatarMaterial_Parms;
		SetAvatarMaterial_Parms.Material = Material;

		this->ProcessEvent( pfnSetAvatarMaterial, &SetAvatarMaterial_Parms, NULL );
	};

	void invisibility ()
	{
		static UFunction* pfninvisibility = NULL;

		if ( !pfninvisibility )
			pfninvisibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.invisibility" );

		ACCInstancePawn_execinvisibility_Parms invisibility_Parms;

		this->ProcessEvent( pfninvisibility, &invisibility_Parms, NULL );
	};

	void Visibility ()
	{
		static UFunction* pfnVisibility = NULL;

		if ( !pfnVisibility )
			pfnVisibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Visibility" );

		ACCInstancePawn_execVisibility_Parms Visibility_Parms;

		this->ProcessEvent( pfnVisibility, &Visibility_Parms, NULL );
	};

	void UpdateVisibility ()
	{
		static UFunction* pfnUpdateVisibility = NULL;

		if ( !pfnUpdateVisibility )
			pfnUpdateVisibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateVisibility" );

		ACCInstancePawn_execUpdateVisibility_Parms UpdateVisibility_Parms;

		this->ProcessEvent( pfnUpdateVisibility, &UpdateVisibility_Parms, NULL );
	};

	void SetVisibilityDetected ( unsigned long Value )
	{
		static UFunction* pfnSetVisibilityDetected = NULL;

		if ( !pfnSetVisibilityDetected )
			pfnSetVisibilityDetected = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetVisibilityDetected" );

		ACCInstancePawn_execSetVisibilityDetected_Parms SetVisibilityDetected_Parms;
		SetVisibilityDetected_Parms.Value = Value;

		this->ProcessEvent( pfnSetVisibilityDetected, &SetVisibilityDetected_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Destroyed" );

		ACCInstancePawn_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void ClearAnimNodes ()
	{
		static UFunction* pfnClearAnimNodes = NULL;

		if ( !pfnClearAnimNodes )
			pfnClearAnimNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClearAnimNodes" );

		ACCInstancePawn_execClearAnimNodes_Parms ClearAnimNodes_Parms;

		this->ProcessEvent( pfnClearAnimNodes, &ClearAnimNodes_Parms, NULL );
	};

	void CacheAnimNodes ()
	{
		static UFunction* pfnCacheAnimNodes = NULL;

		if ( !pfnCacheAnimNodes )
			pfnCacheAnimNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CacheAnimNodes" );

		ACCInstancePawn_execCacheAnimNodes_Parms CacheAnimNodes_Parms;

		this->ProcessEvent( pfnCacheAnimNodes, &CacheAnimNodes_Parms, NULL );
	};

	void BodyStanceAnimEndNotification ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnBodyStanceAnimEndNotification = NULL;

		if ( !pfnBodyStanceAnimEndNotification )
			pfnBodyStanceAnimEndNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BodyStanceAnimEndNotification" );

		ACCInstancePawn_execBodyStanceAnimEndNotification_Parms BodyStanceAnimEndNotification_Parms;
		BodyStanceAnimEndNotification_Parms.SeqNode = SeqNode;
		BodyStanceAnimEndNotification_Parms.PlayedTime = PlayedTime;
		BodyStanceAnimEndNotification_Parms.ExcessTime = ExcessTime;

		this->ProcessEvent( pfnBodyStanceAnimEndNotification, &BodyStanceAnimEndNotification_Parms, NULL );
	};

	void SetBodyStanceAnimEndNotification ( struct FBodyStance Stance, unsigned long bNewStatus )
	{
		static UFunction* pfnSetBodyStanceAnimEndNotification = NULL;

		if ( !pfnSetBodyStanceAnimEndNotification )
			pfnSetBodyStanceAnimEndNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetBodyStanceAnimEndNotification" );

		ACCInstancePawn_execSetBodyStanceAnimEndNotification_Parms SetBodyStanceAnimEndNotification_Parms;
		memcpy( &SetBodyStanceAnimEndNotification_Parms.Stance, &Stance, 0xC );
		SetBodyStanceAnimEndNotification_Parms.bNewStatus = bNewStatus;

		this->ProcessEvent( pfnSetBodyStanceAnimEndNotification, &SetBodyStanceAnimEndNotification_Parms, NULL );
	};

	void BS_AddToSynchGroup ( struct FBodyStance Stance, struct FName GroupName )
	{
		static UFunction* pfnBS_AddToSynchGroup = NULL;

		if ( !pfnBS_AddToSynchGroup )
			pfnBS_AddToSynchGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_AddToSynchGroup" );

		ACCInstancePawn_execBS_AddToSynchGroup_Parms BS_AddToSynchGroup_Parms;
		memcpy( &BS_AddToSynchGroup_Parms.Stance, &Stance, 0xC );
		memcpy( &BS_AddToSynchGroup_Parms.GroupName, &GroupName, 0x8 );

		this->ProcessEvent( pfnBS_AddToSynchGroup, &BS_AddToSynchGroup_Parms, NULL );
	};

	void BS_SetMirrorOptions ( struct FBodyStance Stance, unsigned long bTransitionToMirrored, unsigned long bBeginTransition, unsigned long bMirrorAnimation )
	{
		static UFunction* pfnBS_SetMirrorOptions = NULL;

		if ( !pfnBS_SetMirrorOptions )
			pfnBS_SetMirrorOptions = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_SetMirrorOptions" );

		ACCInstancePawn_execBS_SetMirrorOptions_Parms BS_SetMirrorOptions_Parms;
		memcpy( &BS_SetMirrorOptions_Parms.Stance, &Stance, 0xC );
		BS_SetMirrorOptions_Parms.bTransitionToMirrored = bTransitionToMirrored;
		BS_SetMirrorOptions_Parms.bBeginTransition = bBeginTransition;
		BS_SetMirrorOptions_Parms.bMirrorAnimation = bMirrorAnimation;

		this->ProcessEvent( pfnBS_SetMirrorOptions, &BS_SetMirrorOptions_Parms, NULL );
	};

	void SetBodyStanceRootBoneAxisOption ( struct FBodyStance Stance, unsigned char AxisX/*CPF_OptionalParm*/, unsigned char AxisY/*CPF_OptionalParm*/, unsigned char AxisZ/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetBodyStanceRootBoneAxisOption = NULL;

		if ( !pfnSetBodyStanceRootBoneAxisOption )
			pfnSetBodyStanceRootBoneAxisOption = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetBodyStanceRootBoneAxisOption" );

		ACCInstancePawn_execSetBodyStanceRootBoneAxisOption_Parms SetBodyStanceRootBoneAxisOption_Parms;
		memcpy( &SetBodyStanceRootBoneAxisOption_Parms.Stance, &Stance, 0xC );
		SetBodyStanceRootBoneAxisOption_Parms.AxisX = AxisX;
		SetBodyStanceRootBoneAxisOption_Parms.AxisY = AxisY;
		SetBodyStanceRootBoneAxisOption_Parms.AxisZ = AxisZ;

		this->ProcessEvent( pfnSetBodyStanceRootBoneAxisOption, &SetBodyStanceRootBoneAxisOption_Parms, NULL );
	};

	void ScaleBodyStancePlayRate ( struct FBodyStance Stance, float RateScale )
	{
		static UFunction* pfnScaleBodyStancePlayRate = NULL;

		if ( !pfnScaleBodyStancePlayRate )
			pfnScaleBodyStancePlayRate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ScaleBodyStancePlayRate" );

		ACCInstancePawn_execScaleBodyStancePlayRate_Parms ScaleBodyStancePlayRate_Parms;
		memcpy( &ScaleBodyStancePlayRate_Parms.Stance, &Stance, 0xC );
		ScaleBodyStancePlayRate_Parms.RateScale = RateScale;

		this->ProcessEvent( pfnScaleBodyStancePlayRate, &ScaleBodyStancePlayRate_Parms, NULL );
	};

	void BS_AccelerateBlend ( struct FBodyStance Stance, float BlendAmount )
	{
		static UFunction* pfnBS_AccelerateBlend = NULL;

		if ( !pfnBS_AccelerateBlend )
			pfnBS_AccelerateBlend = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_AccelerateBlend" );

		ACCInstancePawn_execBS_AccelerateBlend_Parms BS_AccelerateBlend_Parms;
		memcpy( &BS_AccelerateBlend_Parms.Stance, &Stance, 0xC );
		BS_AccelerateBlend_Parms.BlendAmount = BlendAmount;

		this->ProcessEvent( pfnBS_AccelerateBlend, &BS_AccelerateBlend_Parms, NULL );
	};

	void BS_SetPlayRate ( struct FBodyStance Stance, float NewRate )
	{
		static UFunction* pfnBS_SetPlayRate = NULL;

		if ( !pfnBS_SetPlayRate )
			pfnBS_SetPlayRate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_SetPlayRate" );

		ACCInstancePawn_execBS_SetPlayRate_Parms BS_SetPlayRate_Parms;
		memcpy( &BS_SetPlayRate_Parms.Stance, &Stance, 0xC );
		BS_SetPlayRate_Parms.NewRate = NewRate;

		this->ProcessEvent( pfnBS_SetPlayRate, &BS_SetPlayRate_Parms, NULL );
	};

	float BS_GetPlayRate ( struct FBodyStance Stance )
	{
		static UFunction* pfnBS_GetPlayRate = NULL;

		if ( !pfnBS_GetPlayRate )
			pfnBS_GetPlayRate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_GetPlayRate" );

		ACCInstancePawn_execBS_GetPlayRate_Parms BS_GetPlayRate_Parms;
		memcpy( &BS_GetPlayRate_Parms.Stance, &Stance, 0xC );

		this->ProcessEvent( pfnBS_GetPlayRate, &BS_GetPlayRate_Parms, NULL );

		return BS_GetPlayRate_Parms.ReturnValue;
	};

	float BS_GetTimeLeft ( struct FBodyStance Stance )
	{
		static UFunction* pfnBS_GetTimeLeft = NULL;

		if ( !pfnBS_GetTimeLeft )
			pfnBS_GetTimeLeft = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_GetTimeLeft" );

		ACCInstancePawn_execBS_GetTimeLeft_Parms BS_GetTimeLeft_Parms;
		memcpy( &BS_GetTimeLeft_Parms.Stance, &Stance, 0xC );

		this->ProcessEvent( pfnBS_GetTimeLeft, &BS_GetTimeLeft_Parms, NULL );

		return BS_GetTimeLeft_Parms.ReturnValue;
	};

	void BS_SetPosition ( struct FBodyStance Stance, float Position )
	{
		static UFunction* pfnBS_SetPosition = NULL;

		if ( !pfnBS_SetPosition )
			pfnBS_SetPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BS_SetPosition" );

		ACCInstancePawn_execBS_SetPosition_Parms BS_SetPosition_Parms;
		memcpy( &BS_SetPosition_Parms.Stance, &Stance, 0xC );
		BS_SetPosition_Parms.Position = Position;

		this->ProcessEvent( pfnBS_SetPosition, &BS_SetPosition_Parms, NULL );
	};

	void SetBodyStance ( struct FBodyStance Stance )
	{
		static UFunction* pfnSetBodyStance = NULL;

		if ( !pfnSetBodyStance )
			pfnSetBodyStance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetBodyStance" );

		ACCInstancePawn_execSetBodyStance_Parms SetBodyStance_Parms;
		memcpy( &SetBodyStance_Parms.Stance, &Stance, 0xC );

		this->ProcessEvent( pfnSetBodyStance, &SetBodyStance_Parms, NULL );
	};

	void StopAllBodyStances ( float BlendOutTime )
	{
		static UFunction* pfnStopAllBodyStances = NULL;

		if ( !pfnStopAllBodyStances )
			pfnStopAllBodyStances = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.StopAllBodyStances" );

		ACCInstancePawn_execStopAllBodyStances_Parms StopAllBodyStances_Parms;
		StopAllBodyStances_Parms.BlendOutTime = BlendOutTime;

		this->ProcessEvent( pfnStopAllBodyStances, &StopAllBodyStances_Parms, NULL );
	};

	void StopBodyStance ( struct FBodyStance Stance, float BlendOutTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStopBodyStance = NULL;

		if ( !pfnStopBodyStance )
			pfnStopBodyStance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.StopBodyStance" );

		ACCInstancePawn_execStopBodyStance_Parms StopBodyStance_Parms;
		memcpy( &StopBodyStance_Parms.Stance, &Stance, 0xC );
		StopBodyStance_Parms.BlendOutTime = BlendOutTime;

		this->ProcessEvent( pfnStopBodyStance, &StopBodyStance_Parms, NULL );
	};

	bool IsPlayingBodyStance ( struct FBodyStance Stance )
	{
		static UFunction* pfnIsPlayingBodyStance = NULL;

		if ( !pfnIsPlayingBodyStance )
			pfnIsPlayingBodyStance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsPlayingBodyStance" );

		ACCInstancePawn_execIsPlayingBodyStance_Parms IsPlayingBodyStance_Parms;
		memcpy( &IsPlayingBodyStance_Parms.Stance, &Stance, 0xC );

		this->ProcessEvent( pfnIsPlayingBodyStance, &IsPlayingBodyStance_Parms, NULL );

		return IsPlayingBodyStance_Parms.ReturnValue;
	};

	void PlayBodyStanceByDuration ( struct FBodyStance Stance, float Duration, float BlendInTime/*CPF_OptionalParm*/, float BlendOutTime/*CPF_OptionalParm*/, unsigned long bLooping/*CPF_OptionalParm*/, unsigned long bOverride/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayBodyStanceByDuration = NULL;

		if ( !pfnPlayBodyStanceByDuration )
			pfnPlayBodyStanceByDuration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayBodyStanceByDuration" );

		ACCInstancePawn_execPlayBodyStanceByDuration_Parms PlayBodyStanceByDuration_Parms;
		memcpy( &PlayBodyStanceByDuration_Parms.Stance, &Stance, 0xC );
		PlayBodyStanceByDuration_Parms.Duration = Duration;
		PlayBodyStanceByDuration_Parms.BlendInTime = BlendInTime;
		PlayBodyStanceByDuration_Parms.BlendOutTime = BlendOutTime;
		PlayBodyStanceByDuration_Parms.bLooping = bLooping;
		PlayBodyStanceByDuration_Parms.bOverride = bOverride;

		this->ProcessEvent( pfnPlayBodyStanceByDuration, &PlayBodyStanceByDuration_Parms, NULL );
	};

	float PlayBodyStance ( struct FBodyStance Stance, float Rate, float BlendInTime/*CPF_OptionalParm*/, float BlendOutTime/*CPF_OptionalParm*/, unsigned long bLooping/*CPF_OptionalParm*/, unsigned long bOverride/*CPF_OptionalParm*/, unsigned long bKeepRBASettings/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayBodyStance = NULL;

		if ( !pfnPlayBodyStance )
			pfnPlayBodyStance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayBodyStance" );

		ACCInstancePawn_execPlayBodyStance_Parms PlayBodyStance_Parms;
		memcpy( &PlayBodyStance_Parms.Stance, &Stance, 0xC );
		PlayBodyStance_Parms.Rate = Rate;
		PlayBodyStance_Parms.BlendInTime = BlendInTime;
		PlayBodyStance_Parms.BlendOutTime = BlendOutTime;
		PlayBodyStance_Parms.bLooping = bLooping;
		PlayBodyStance_Parms.bOverride = bOverride;
		PlayBodyStance_Parms.bKeepRBASettings = bKeepRBASettings;

		this->ProcessEvent( pfnPlayBodyStance, &PlayBodyStance_Parms, NULL );

		return PlayBodyStance_Parms.ReturnValue;
	};

	bool SetFireSound ()
	{
		static UFunction* pfnSetFireSound = NULL;

		if ( !pfnSetFireSound )
			pfnSetFireSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetFireSound" );

		ACCInstancePawn_execSetFireSound_Parms SetFireSound_Parms;

		this->ProcessEvent( pfnSetFireSound, &SetFireSound_Parms, NULL );

		return SetFireSound_Parms.ReturnValue;
	};

	void PlayActualHitEffect ( unsigned char EffectType, struct FTakeHitInfo HitInfo, unsigned char HitLocationType )
	{
		static UFunction* pfnPlayActualHitEffect = NULL;

		if ( !pfnPlayActualHitEffect )
			pfnPlayActualHitEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayActualHitEffect" );

		ACCInstancePawn_execPlayActualHitEffect_Parms PlayActualHitEffect_Parms;
		PlayActualHitEffect_Parms.EffectType = EffectType;
		memcpy( &PlayActualHitEffect_Parms.HitInfo, &HitInfo, 0x3C );
		PlayActualHitEffect_Parms.HitLocationType = HitLocationType;

		this->ProcessEvent( pfnPlayActualHitEffect, &PlayActualHitEffect_Parms, NULL );
	};

	struct FName CheckIsHit ( struct FVector HitLocation, struct FVector StartPoint, struct FVector EndPoint, unsigned long DrawDebugHit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCheckIsHit = NULL;

		if ( !pfnCheckIsHit )
			pfnCheckIsHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckIsHit" );

		ACCInstancePawn_execCheckIsHit_Parms CheckIsHit_Parms;
		memcpy( &CheckIsHit_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &CheckIsHit_Parms.StartPoint, &StartPoint, 0xC );
		memcpy( &CheckIsHit_Parms.EndPoint, &EndPoint, 0xC );
		CheckIsHit_Parms.DrawDebugHit = DrawDebugHit;

		this->ProcessEvent( pfnCheckIsHit, &CheckIsHit_Parms, NULL );

		return CheckIsHit_Parms.ReturnValue;
	};

	void SpawnDecals ( struct FDecalParams DParams, class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo, unsigned long bProjectOnTerrain/*CPF_OptionalParm*/, unsigned long bProjectOnSkeletalMeshes/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnDecals = NULL;

		if ( !pfnSpawnDecals )
			pfnSpawnDecals = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnDecals" );

		ACCInstancePawn_execSpawnDecals_Parms SpawnDecals_Parms;
		memcpy( &SpawnDecals_Parms.DParams, &DParams, 0x30 );
		SpawnDecals_Parms.HitActor = HitActor;
		memcpy( &SpawnDecals_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SpawnDecals_Parms.HitNormal, &HitNormal, 0xC );
		memcpy( &SpawnDecals_Parms.HitInfo, &HitInfo, 0x1C );
		SpawnDecals_Parms.bProjectOnTerrain = bProjectOnTerrain;
		SpawnDecals_Parms.bProjectOnSkeletalMeshes = bProjectOnSkeletalMeshes;

		this->ProcessEvent( pfnSpawnDecals, &SpawnDecals_Parms, NULL );
	};

	void RagdollDueAnimationEnterTimer ()
	{
		static UFunction* pfnRagdollDueAnimationEnterTimer = NULL;

		if ( !pfnRagdollDueAnimationEnterTimer )
			pfnRagdollDueAnimationEnterTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.RagdollDueAnimationEnterTimer" );

		ACCInstancePawn_execRagdollDueAnimationEnterTimer_Parms RagdollDueAnimationEnterTimer_Parms;

		this->ProcessEvent( pfnRagdollDueAnimationEnterTimer, &RagdollDueAnimationEnterTimer_Parms, NULL );
	};

	void CheckDeathAnimationCollision ()
	{
		static UFunction* pfnCheckDeathAnimationCollision = NULL;

		if ( !pfnCheckDeathAnimationCollision )
			pfnCheckDeathAnimationCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckDeathAnimationCollision" );

		ACCInstancePawn_execCheckDeathAnimationCollision_Parms CheckDeathAnimationCollision_Parms;

		this->ProcessEvent( pfnCheckDeathAnimationCollision, &CheckDeathAnimationCollision_Parms, NULL );
	};

	float CalculateRagdollEnterTimerFromEndPerc ( struct FTakeHitInfo HitInfo )
	{
		static UFunction* pfnCalculateRagdollEnterTimerFromEndPerc = NULL;

		if ( !pfnCalculateRagdollEnterTimerFromEndPerc )
			pfnCalculateRagdollEnterTimerFromEndPerc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateRagdollEnterTimerFromEndPerc" );

		ACCInstancePawn_execCalculateRagdollEnterTimerFromEndPerc_Parms CalculateRagdollEnterTimerFromEndPerc_Parms;
		memcpy( &CalculateRagdollEnterTimerFromEndPerc_Parms.HitInfo, &HitInfo, 0x3C );

		this->ProcessEvent( pfnCalculateRagdollEnterTimerFromEndPerc, &CalculateRagdollEnterTimerFromEndPerc_Parms, NULL );

		return CalculateRagdollEnterTimerFromEndPerc_Parms.ReturnValue;
	};

	float CalculateRagdollEnterTimerTime ( float DeathAnimationLength, float Perc )
	{
		static UFunction* pfnCalculateRagdollEnterTimerTime = NULL;

		if ( !pfnCalculateRagdollEnterTimerTime )
			pfnCalculateRagdollEnterTimerTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateRagdollEnterTimerTime" );

		ACCInstancePawn_execCalculateRagdollEnterTimerTime_Parms CalculateRagdollEnterTimerTime_Parms;
		CalculateRagdollEnterTimerTime_Parms.DeathAnimationLength = DeathAnimationLength;
		CalculateRagdollEnterTimerTime_Parms.Perc = Perc;

		this->ProcessEvent( pfnCalculateRagdollEnterTimerTime, &CalculateRagdollEnterTimerTime_Parms, NULL );

		return CalculateRagdollEnterTimerTime_Parms.ReturnValue;
	};

	float CalculateDeathAnimationToRagdollBlendTime ( float DeathAnimationLength, float RagdollEnterTimerTime )
	{
		static UFunction* pfnCalculateDeathAnimationToRagdollBlendTime = NULL;

		if ( !pfnCalculateDeathAnimationToRagdollBlendTime )
			pfnCalculateDeathAnimationToRagdollBlendTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateDeathAnimationToRagdollBlendTime" );

		ACCInstancePawn_execCalculateDeathAnimationToRagdollBlendTime_Parms CalculateDeathAnimationToRagdollBlendTime_Parms;
		CalculateDeathAnimationToRagdollBlendTime_Parms.DeathAnimationLength = DeathAnimationLength;
		CalculateDeathAnimationToRagdollBlendTime_Parms.RagdollEnterTimerTime = RagdollEnterTimerTime;

		this->ProcessEvent( pfnCalculateDeathAnimationToRagdollBlendTime, &CalculateDeathAnimationToRagdollBlendTime_Parms, NULL );

		return CalculateDeathAnimationToRagdollBlendTime_Parms.ReturnValue;
	};

	void ClearDeathAnimation ()
	{
		static UFunction* pfnClearDeathAnimation = NULL;

		if ( !pfnClearDeathAnimation )
			pfnClearDeathAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClearDeathAnimation" );

		ACCInstancePawn_execClearDeathAnimation_Parms ClearDeathAnimation_Parms;

		this->ProcessEvent( pfnClearDeathAnimation, &ClearDeathAnimation_Parms, NULL );
	};

	void DeathAnimationPlayed ()
	{
		static UFunction* pfnDeathAnimationPlayed = NULL;

		if ( !pfnDeathAnimationPlayed )
			pfnDeathAnimationPlayed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DeathAnimationPlayed" );

		ACCInstancePawn_execDeathAnimationPlayed_Parms DeathAnimationPlayed_Parms;

		this->ProcessEvent( pfnDeathAnimationPlayed, &DeathAnimationPlayed_Parms, NULL );
	};

	void PlayDeathAnimation ( struct FTakeHitInfo THInfo )
	{
		static UFunction* pfnPlayDeathAnimation = NULL;

		if ( !pfnPlayDeathAnimation )
			pfnPlayDeathAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayDeathAnimation" );

		ACCInstancePawn_execPlayDeathAnimation_Parms PlayDeathAnimation_Parms;
		memcpy( &PlayDeathAnimation_Parms.THInfo, &THInfo, 0x3C );

		this->ProcessEvent( pfnPlayDeathAnimation, &PlayDeathAnimation_Parms, NULL );
	};

	void ProcessDeathAnimationInfoStructReplicated ()
	{
		static UFunction* pfnProcessDeathAnimationInfoStructReplicated = NULL;

		if ( !pfnProcessDeathAnimationInfoStructReplicated )
			pfnProcessDeathAnimationInfoStructReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ProcessDeathAnimationInfoStructReplicated" );

		ACCInstancePawn_execProcessDeathAnimationInfoStructReplicated_Parms ProcessDeathAnimationInfoStructReplicated_Parms;

		this->ProcessEvent( pfnProcessDeathAnimationInfoStructReplicated, &ProcessDeathAnimationInfoStructReplicated_Parms, NULL );
	};

	void ServerPlayDeathAnimation ( struct FTakeHitInfo ImpulseInfo )
	{
		static UFunction* pfnServerPlayDeathAnimation = NULL;

		if ( !pfnServerPlayDeathAnimation )
			pfnServerPlayDeathAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerPlayDeathAnimation" );

		ACCInstancePawn_execServerPlayDeathAnimation_Parms ServerPlayDeathAnimation_Parms;
		memcpy( &ServerPlayDeathAnimation_Parms.ImpulseInfo, &ImpulseInfo, 0x3C );

		this->ProcessEvent( pfnServerPlayDeathAnimation, &ServerPlayDeathAnimation_Parms, NULL );
	};

	void ServerPlayDeathAnimationViaRpc ( struct FTakeHitInfo ImpulseInfo )
	{
		static UFunction* pfnServerPlayDeathAnimationViaRpc = NULL;

		if ( !pfnServerPlayDeathAnimationViaRpc )
			pfnServerPlayDeathAnimationViaRpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerPlayDeathAnimationViaRpc" );

		ACCInstancePawn_execServerPlayDeathAnimationViaRpc_Parms ServerPlayDeathAnimationViaRpc_Parms;
		memcpy( &ServerPlayDeathAnimationViaRpc_Parms.ImpulseInfo, &ImpulseInfo, 0x3C );

		this->ProcessEvent( pfnServerPlayDeathAnimationViaRpc, &ServerPlayDeathAnimationViaRpc_Parms, NULL );
	};

	void TestPlayTakeHitAnimation ( struct FName BoneName, float DirX, float DirY, float DirZ, unsigned long bFromGrenade )
	{
		static UFunction* pfnTestPlayTakeHitAnimation = NULL;

		if ( !pfnTestPlayTakeHitAnimation )
			pfnTestPlayTakeHitAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TestPlayTakeHitAnimation" );

		ACCInstancePawn_execTestPlayTakeHitAnimation_Parms TestPlayTakeHitAnimation_Parms;
		memcpy( &TestPlayTakeHitAnimation_Parms.BoneName, &BoneName, 0x8 );
		TestPlayTakeHitAnimation_Parms.DirX = DirX;
		TestPlayTakeHitAnimation_Parms.DirY = DirY;
		TestPlayTakeHitAnimation_Parms.DirZ = DirZ;
		TestPlayTakeHitAnimation_Parms.bFromGrenade = bFromGrenade;

		this->ProcessEvent( pfnTestPlayTakeHitAnimation, &TestPlayTakeHitAnimation_Parms, NULL );
	};

	void LeaveRDTimeOut ()
	{
		static UFunction* pfnLeaveRDTimeOut = NULL;

		if ( !pfnLeaveRDTimeOut )
			pfnLeaveRDTimeOut = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.LeaveRDTimeOut" );

		ACCInstancePawn_execLeaveRDTimeOut_Parms LeaveRDTimeOut_Parms;

		this->ProcessEvent( pfnLeaveRDTimeOut, &LeaveRDTimeOut_Parms, NULL );
	};

	void TestPlayDeathAnimation ( struct FName BoneName, float DirX, float DirY, float DirZ )
	{
		static UFunction* pfnTestPlayDeathAnimation = NULL;

		if ( !pfnTestPlayDeathAnimation )
			pfnTestPlayDeathAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TestPlayDeathAnimation" );

		ACCInstancePawn_execTestPlayDeathAnimation_Parms TestPlayDeathAnimation_Parms;
		memcpy( &TestPlayDeathAnimation_Parms.BoneName, &BoneName, 0x8 );
		TestPlayDeathAnimation_Parms.DirX = DirX;
		TestPlayDeathAnimation_Parms.DirY = DirY;
		TestPlayDeathAnimation_Parms.DirZ = DirZ;

		this->ProcessEvent( pfnTestPlayDeathAnimation, &TestPlayDeathAnimation_Parms, NULL );
	};

	void ClearHitAnimation ()
	{
		static UFunction* pfnClearHitAnimation = NULL;

		if ( !pfnClearHitAnimation )
			pfnClearHitAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClearHitAnimation" );

		ACCInstancePawn_execClearHitAnimation_Parms ClearHitAnimation_Parms;

		this->ProcessEvent( pfnClearHitAnimation, &ClearHitAnimation_Parms, NULL );
	};

	void HitAnimationPlayed ()
	{
		static UFunction* pfnHitAnimationPlayed = NULL;

		if ( !pfnHitAnimationPlayed )
			pfnHitAnimationPlayed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.HitAnimationPlayed" );

		ACCInstancePawn_execHitAnimationPlayed_Parms HitAnimationPlayed_Parms;

		this->ProcessEvent( pfnHitAnimationPlayed, &HitAnimationPlayed_Parms, NULL );
	};

	void PlayTakeHitAnimation ( struct FTakeHitInfo HitInfo )
	{
		static UFunction* pfnPlayTakeHitAnimation = NULL;

		if ( !pfnPlayTakeHitAnimation )
			pfnPlayTakeHitAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayTakeHitAnimation" );

		ACCInstancePawn_execPlayTakeHitAnimation_Parms PlayTakeHitAnimation_Parms;
		memcpy( &PlayTakeHitAnimation_Parms.HitInfo, &HitInfo, 0x3C );

		this->ProcessEvent( pfnPlayTakeHitAnimation, &PlayTakeHitAnimation_Parms, NULL );
	};

	void GetAllTakeHitNodes ( TArray< void* >* Nodes )
	{
		static UFunction* pfnGetAllTakeHitNodes = NULL;

		if ( !pfnGetAllTakeHitNodes )
			pfnGetAllTakeHitNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetAllTakeHitNodes" );

		ACCInstancePawn_execGetAllTakeHitNodes_Parms GetAllTakeHitNodes_Parms;

		this->ProcessEvent( pfnGetAllTakeHitNodes, &GetAllTakeHitNodes_Parms, NULL );

		if ( Nodes )
			*Nodes = GetAllTakeHitNodes_Parms.Nodes; // CPF_OutParm
	};

	void* SelectActualTakeHitNode ()
	{
		static UFunction* pfnSelectActualTakeHitNode = NULL;

		if ( !pfnSelectActualTakeHitNode )
			pfnSelectActualTakeHitNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SelectActualTakeHitNode" );

		ACCInstancePawn_execSelectActualTakeHitNode_Parms SelectActualTakeHitNode_Parms;

		this->ProcessEvent( pfnSelectActualTakeHitNode, &SelectActualTakeHitNode_Parms, NULL );

		return SelectActualTakeHitNode_Parms.ReturnValue;
	};

	void PlayReplicatedOnlyTakeHitEffects ( struct FTakeHitInfo HitInfo )
	{
		static UFunction* pfnPlayReplicatedOnlyTakeHitEffects = NULL;

		if ( !pfnPlayReplicatedOnlyTakeHitEffects )
			pfnPlayReplicatedOnlyTakeHitEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayReplicatedOnlyTakeHitEffects" );

		ACCInstancePawn_execPlayReplicatedOnlyTakeHitEffects_Parms PlayReplicatedOnlyTakeHitEffects_Parms;
		memcpy( &PlayReplicatedOnlyTakeHitEffects_Parms.HitInfo, &HitInfo, 0x3C );

		this->ProcessEvent( pfnPlayReplicatedOnlyTakeHitEffects, &PlayReplicatedOnlyTakeHitEffects_Parms, NULL );
	};

	void PlayTakeHitEffects ( struct FTakeHitInfo HitInfo )
	{
		static UFunction* pfnPlayTakeHitEffects = NULL;

		if ( !pfnPlayTakeHitEffects )
			pfnPlayTakeHitEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayTakeHitEffects" );

		ACCInstancePawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;
		memcpy( &PlayTakeHitEffects_Parms.HitInfo, &HitInfo, 0x3C );

		this->ProcessEvent( pfnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
	};

	void PlayHitEffectsLocally ( float Damage, class ACCInstancePawn* shooter, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnPlayHitEffectsLocally = NULL;

		if ( !pfnPlayHitEffectsLocally )
			pfnPlayHitEffectsLocally = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayHitEffectsLocally" );

		ACCInstancePawn_execPlayHitEffectsLocally_Parms PlayHitEffectsLocally_Parms;
		PlayHitEffectsLocally_Parms.Damage = Damage;
		PlayHitEffectsLocally_Parms.shooter = shooter;
		memcpy( &PlayHitEffectsLocally_Parms.HitLocation, &HitLocation, 0xC );
		PlayHitEffectsLocally_Parms.DamageType = DamageType;
		memcpy( &PlayHitEffectsLocally_Parms.Momentum, &Momentum, 0xC );
		memcpy( &PlayHitEffectsLocally_Parms.HitInfo, &HitInfo, 0x1C );
		memcpy( &PlayHitEffectsLocally_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnPlayHitEffectsLocally, &PlayHitEffectsLocally_Parms, NULL );
	};

	bool GetReplicatedHitEffectsShouldBePlayed ( struct FTakeHitInfo* HitInfo )
	{
		static UFunction* pfnGetReplicatedHitEffectsShouldBePlayed = NULL;

		if ( !pfnGetReplicatedHitEffectsShouldBePlayed )
			pfnGetReplicatedHitEffectsShouldBePlayed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetReplicatedHitEffectsShouldBePlayed" );

		ACCInstancePawn_execGetReplicatedHitEffectsShouldBePlayed_Parms GetReplicatedHitEffectsShouldBePlayed_Parms;

		this->ProcessEvent( pfnGetReplicatedHitEffectsShouldBePlayed, &GetReplicatedHitEffectsShouldBePlayed_Parms, NULL );

		if ( HitInfo )
			memcpy( HitInfo, &GetReplicatedHitEffectsShouldBePlayed_Parms.HitInfo, 0x3C ); // CPF_OutParm

		return GetReplicatedHitEffectsShouldBePlayed_Parms.ReturnValue;
	};

	bool eventIsLastTakeHitInfoRelevant ()
	{
		static UFunction* pfnIsLastTakeHitInfoRelevant = NULL;

		if ( !pfnIsLastTakeHitInfoRelevant )
			pfnIsLastTakeHitInfoRelevant = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsLastTakeHitInfoRelevant" );

		ACCInstancePawn_eventIsLastTakeHitInfoRelevant_Parms IsLastTakeHitInfoRelevant_Parms;

		this->ProcessEvent( pfnIsLastTakeHitInfoRelevant, &IsLastTakeHitInfoRelevant_Parms, NULL );

		return IsLastTakeHitInfoRelevant_Parms.ReturnValue;
	};

	void LastTakeHitInfoStructReplicated ()
	{
		static UFunction* pfnLastTakeHitInfoStructReplicated = NULL;

		if ( !pfnLastTakeHitInfoStructReplicated )
			pfnLastTakeHitInfoStructReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.LastTakeHitInfoStructReplicated" );

		ACCInstancePawn_execLastTakeHitInfoStructReplicated_Parms LastTakeHitInfoStructReplicated_Parms;

		this->ProcessEvent( pfnLastTakeHitInfoStructReplicated, &LastTakeHitInfoStructReplicated_Parms, NULL );
	};

	void SetLastHitInfo ( int Damage, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FName HitBone, class AController* shooter, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnSetLastHitInfo = NULL;

		if ( !pfnSetLastHitInfo )
			pfnSetLastHitInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetLastHitInfo" );

		ACCInstancePawn_execSetLastHitInfo_Parms SetLastHitInfo_Parms;
		SetLastHitInfo_Parms.Damage = Damage;
		memcpy( &SetLastHitInfo_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SetLastHitInfo_Parms.Momentum, &Momentum, 0xC );
		SetLastHitInfo_Parms.DamageType = DamageType;
		memcpy( &SetLastHitInfo_Parms.HitBone, &HitBone, 0x8 );
		SetLastHitInfo_Parms.shooter = shooter;
		memcpy( &SetLastHitInfo_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnSetLastHitInfo, &SetLastHitInfo_Parms, NULL );
	};

	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnPlayHit = NULL;

		if ( !pfnPlayHit )
			pfnPlayHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayHit" );

		ACCInstancePawn_execPlayHit_Parms PlayHit_Parms;
		PlayHit_Parms.Damage = Damage;
		PlayHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
		PlayHit_Parms.DamageType = DamageType;
		memcpy( &PlayHit_Parms.Momentum, &Momentum, 0xC );
		memcpy( &PlayHit_Parms.HitInfo, &HitInfo, 0x1C );
		memcpy( &PlayHit_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnPlayHit, &PlayHit_Parms, NULL );
	};

	struct FName FindCharacterAttachmentBone ( class UActorComponent* Comp )
	{
		static UFunction* pfnFindCharacterAttachmentBone = NULL;

		if ( !pfnFindCharacterAttachmentBone )
			pfnFindCharacterAttachmentBone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindCharacterAttachmentBone" );

		ACCInstancePawn_execFindCharacterAttachmentBone_Parms FindCharacterAttachmentBone_Parms;
		FindCharacterAttachmentBone_Parms.Comp = Comp;

		this->ProcessEvent( pfnFindCharacterAttachmentBone, &FindCharacterAttachmentBone_Parms, NULL );

		return FindCharacterAttachmentBone_Parms.ReturnValue;
	};

	unsigned char DetermineHitLocationType ( struct FTakeHitInfo HitInfo )
	{
		static UFunction* pfnDetermineHitLocationType = NULL;

		if ( !pfnDetermineHitLocationType )
			pfnDetermineHitLocationType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DetermineHitLocationType" );

		ACCInstancePawn_execDetermineHitLocationType_Parms DetermineHitLocationType_Parms;
		memcpy( &DetermineHitLocationType_Parms.HitInfo, &HitInfo, 0x3C );

		this->ProcessEvent( pfnDetermineHitLocationType, &DetermineHitLocationType_Parms, NULL );

		return DetermineHitLocationType_Parms.ReturnValue;
	};

	bool IsBlindFiring ( unsigned char PawnCA )
	{
		static UFunction* pfnIsBlindFiring = NULL;

		if ( !pfnIsBlindFiring )
			pfnIsBlindFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsBlindFiring" );

		ACCInstancePawn_execIsBlindFiring_Parms IsBlindFiring_Parms;
		IsBlindFiring_Parms.PawnCA = PawnCA;

		this->ProcessEvent( pfnIsBlindFiring, &IsBlindFiring_Parms, NULL );

		return IsBlindFiring_Parms.ReturnValue;
	};

	void SetCoverAction ( unsigned char NewCoverAction )
	{
		static UFunction* pfnSetCoverAction = NULL;

		if ( !pfnSetCoverAction )
			pfnSetCoverAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCoverAction" );

		ACCInstancePawn_execSetCoverAction_Parms SetCoverAction_Parms;
		SetCoverAction_Parms.NewCoverAction = NewCoverAction;

		this->ProcessEvent( pfnSetCoverAction, &SetCoverAction_Parms, NULL );
	};

	void FakeEquipItems ()
	{
		static UFunction* pfnFakeEquipItems = NULL;

		if ( !pfnFakeEquipItems )
			pfnFakeEquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FakeEquipItems" );

		ACCInstancePawn_execFakeEquipItems_Parms FakeEquipItems_Parms;

		this->ProcessEvent( pfnFakeEquipItems, &FakeEquipItems_Parms, NULL );
	};

	void FakeEquipItemsClient ( class ACCInstancePawn* Pawn )
	{
		static UFunction* pfnFakeEquipItemsClient = NULL;

		if ( !pfnFakeEquipItemsClient )
			pfnFakeEquipItemsClient = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FakeEquipItemsClient" );

		ACCInstancePawn_execFakeEquipItemsClient_Parms FakeEquipItemsClient_Parms;
		FakeEquipItemsClient_Parms.Pawn = Pawn;

		this->ProcessEvent( pfnFakeEquipItemsClient, &FakeEquipItemsClient_Parms, NULL );
	};

	void DoFakeEquipItems ()
	{
		static UFunction* pfnDoFakeEquipItems = NULL;

		if ( !pfnDoFakeEquipItems )
			pfnDoFakeEquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DoFakeEquipItems" );

		ACCInstancePawn_execDoFakeEquipItems_Parms DoFakeEquipItems_Parms;

		this->ProcessEvent( pfnDoFakeEquipItems, &DoFakeEquipItems_Parms, NULL );
	};

	void PlayExitCover ()
	{
		static UFunction* pfnPlayExitCover = NULL;

		if ( !pfnPlayExitCover )
			pfnPlayExitCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayExitCover" );

		ACCInstancePawn_execPlayExitCover_Parms PlayExitCover_Parms;

		this->ProcessEvent( pfnPlayExitCover, &PlayExitCover_Parms, NULL );
	};

	void PlayEnterCover ()
	{
		static UFunction* pfnPlayEnterCover = NULL;

		if ( !pfnPlayEnterCover )
			pfnPlayEnterCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayEnterCover" );

		ACCInstancePawn_execPlayEnterCover_Parms PlayEnterCover_Parms;

		this->ProcessEvent( pfnPlayEnterCover, &PlayEnterCover_Parms, NULL );
	};

	void SetCoverType ( unsigned char NewCoverType )
	{
		static UFunction* pfnSetCoverType = NULL;

		if ( !pfnSetCoverType )
			pfnSetCoverType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCoverType" );

		ACCInstancePawn_execSetCoverType_Parms SetCoverType_Parms;
		SetCoverType_Parms.NewCoverType = NewCoverType;

		this->ProcessEvent( pfnSetCoverType, &SetCoverType_Parms, NULL );
	};

	void eventOnMirrorBlendOutNotify ()
	{
		static UFunction* pfnOnMirrorBlendOutNotify = NULL;

		if ( !pfnOnMirrorBlendOutNotify )
			pfnOnMirrorBlendOutNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.OnMirrorBlendOutNotify" );

		ACCInstancePawn_eventOnMirrorBlendOutNotify_Parms OnMirrorBlendOutNotify_Parms;

		this->ProcessEvent( pfnOnMirrorBlendOutNotify, &OnMirrorBlendOutNotify_Parms, NULL );
	};

	void eventOnMirroredNotify ()
	{
		static UFunction* pfnOnMirroredNotify = NULL;

		if ( !pfnOnMirroredNotify )
			pfnOnMirroredNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.OnMirroredNotify" );

		ACCInstancePawn_eventOnMirroredNotify_Parms OnMirroredNotify_Parms;

		this->ProcessEvent( pfnOnMirroredNotify, &OnMirroredNotify_Parms, NULL );
	};

	void eventSetMirroredSide ( unsigned long bDesiredMirrored )
	{
		static UFunction* pfnSetMirroredSide = NULL;

		if ( !pfnSetMirroredSide )
			pfnSetMirroredSide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetMirroredSide" );

		ACCInstancePawn_eventSetMirroredSide_Parms SetMirroredSide_Parms;
		SetMirroredSide_Parms.bDesiredMirrored = bDesiredMirrored;

		this->ProcessEvent( pfnSetMirroredSide, &SetMirroredSide_Parms, NULL );
	};

	void NotifyPlayerReplicationInfoReplicated ()
	{
		static UFunction* pfnNotifyPlayerReplicationInfoReplicated = NULL;

		if ( !pfnNotifyPlayerReplicationInfoReplicated )
			pfnNotifyPlayerReplicationInfoReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.NotifyPlayerReplicationInfoReplicated" );

		ACCInstancePawn_execNotifyPlayerReplicationInfoReplicated_Parms NotifyPlayerReplicationInfoReplicated_Parms;

		this->ProcessEvent( pfnNotifyPlayerReplicationInfoReplicated, &NotifyPlayerReplicationInfoReplicated_Parms, NULL );
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc )
	{
		static UFunction* pfnPlayDying = NULL;

		if ( !pfnPlayDying )
			pfnPlayDying = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayDying" );

		ACCInstancePawn_execPlayDying_Parms PlayDying_Parms;
		PlayDying_Parms.DamageType = DamageType;
		memcpy( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

		this->ProcessEvent( pfnPlayDying, &PlayDying_Parms, NULL );
	};

	float GetMaxHealth ()
	{
		static UFunction* pfnGetMaxHealth = NULL;

		if ( !pfnGetMaxHealth )
			pfnGetMaxHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetMaxHealth" );

		ACCInstancePawn_execGetMaxHealth_Parms GetMaxHealth_Parms;

		this->ProcessEvent( pfnGetMaxHealth, &GetMaxHealth_Parms, NULL );

		return GetMaxHealth_Parms.ReturnValue;
	};

	float GetHealth ()
	{
		static UFunction* pfnGetHealth = NULL;

		if ( !pfnGetHealth )
			pfnGetHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetHealth" );

		ACCInstancePawn_execGetHealth_Parms GetHealth_Parms;

		this->ProcessEvent( pfnGetHealth, &GetHealth_Parms, NULL );

		return GetHealth_Parms.ReturnValue;
	};

	void ForceDyingDestroy ()
	{
		static UFunction* pfnForceDyingDestroy = NULL;

		if ( !pfnForceDyingDestroy )
			pfnForceDyingDestroy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ForceDyingDestroy" );

		ACCInstancePawn_execForceDyingDestroy_Parms ForceDyingDestroy_Parms;

		this->ProcessEvent( pfnForceDyingDestroy, &ForceDyingDestroy_Parms, NULL );
	};

	void TimeForceDyingDestroy ( float Time )
	{
		static UFunction* pfnTimeForceDyingDestroy = NULL;

		if ( !pfnTimeForceDyingDestroy )
			pfnTimeForceDyingDestroy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TimeForceDyingDestroy" );

		ACCInstancePawn_execTimeForceDyingDestroy_Parms TimeForceDyingDestroy_Parms;
		TimeForceDyingDestroy_Parms.Time = Time;

		this->ProcessEvent( pfnTimeForceDyingDestroy, &TimeForceDyingDestroy_Parms, NULL );
	};

	void EnableBulletTwists ( unsigned long Value, float DamageScale/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnEnableBulletTwists = NULL;

		if ( !pfnEnableBulletTwists )
			pfnEnableBulletTwists = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EnableBulletTwists" );

		ACCInstancePawn_execEnableBulletTwists_Parms EnableBulletTwists_Parms;
		EnableBulletTwists_Parms.Value = Value;
		EnableBulletTwists_Parms.DamageScale = DamageScale;

		this->ProcessEvent( pfnEnableBulletTwists, &EnableBulletTwists_Parms, NULL );
	};

	void ProcessRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
	{
		static UFunction* pfnProcessRigidBodyCollision = NULL;

		if ( !pfnProcessRigidBodyCollision )
			pfnProcessRigidBodyCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ProcessRigidBodyCollision" );

		ACCInstancePawn_execProcessRigidBodyCollision_Parms ProcessRigidBodyCollision_Parms;
		ProcessRigidBodyCollision_Parms.HitComponent = HitComponent;
		ProcessRigidBodyCollision_Parms.OtherComponent = OtherComponent;
		ProcessRigidBodyCollision_Parms.ContactIndex = ContactIndex;

		this->ProcessEvent( pfnProcessRigidBodyCollision, &ProcessRigidBodyCollision_Parms, NULL );

		if ( RigidCollisionData )
			memcpy( RigidCollisionData, &ProcessRigidBodyCollision_Parms.RigidCollisionData, 0x24 ); // CPF_OutParm
	};

	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
	{
		static UFunction* pfnRigidBodyCollision = NULL;

		if ( !pfnRigidBodyCollision )
			pfnRigidBodyCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.RigidBodyCollision" );

		ACCInstancePawn_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
		RigidBodyCollision_Parms.HitComponent = HitComponent;
		RigidBodyCollision_Parms.OtherComponent = OtherComponent;
		RigidBodyCollision_Parms.ContactIndex = ContactIndex;

		this->ProcessEvent( pfnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

		if ( RigidCollisionData )
			memcpy( RigidCollisionData, &RigidBodyCollision_Parms.RigidCollisionData, 0x24 ); // CPF_OutParm
	};

	bool DoFatality ()
	{
		static UFunction* pfnDoFatality = NULL;

		if ( !pfnDoFatality )
			pfnDoFatality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DoFatality" );

		ACCInstancePawn_execDoFatality_Parms DoFatality_Parms;

		this->ProcessEvent( pfnDoFatality, &DoFatality_Parms, NULL );

		return DoFatality_Parms.ReturnValue;
	};

	void CompleteRessurection ()
	{
		static UFunction* pfnCompleteRessurection = NULL;

		if ( !pfnCompleteRessurection )
			pfnCompleteRessurection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CompleteRessurection" );

		ACCInstancePawn_execCompleteRessurection_Parms CompleteRessurection_Parms;

		this->ProcessEvent( pfnCompleteRessurection, &CompleteRessurection_Parms, NULL );
	};

	void GetRessurectionParameters ( struct FVector* RessurectionLocation )
	{
		static UFunction* pfnGetRessurectionParameters = NULL;

		if ( !pfnGetRessurectionParameters )
			pfnGetRessurectionParameters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetRessurectionParameters" );

		ACCInstancePawn_execGetRessurectionParameters_Parms GetRessurectionParameters_Parms;

		this->ProcessEvent( pfnGetRessurectionParameters, &GetRessurectionParameters_Parms, NULL );

		if ( RessurectionLocation )
			memcpy( RessurectionLocation, &GetRessurectionParameters_Parms.RessurectionLocation, 0xC ); // CPF_OutParm
	};

	bool DoRessurect ( struct FVector RessurectionLocation )
	{
		static UFunction* pfnDoRessurect = NULL;

		if ( !pfnDoRessurect )
			pfnDoRessurect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DoRessurect" );

		ACCInstancePawn_execDoRessurect_Parms DoRessurect_Parms;
		memcpy( &DoRessurect_Parms.RessurectionLocation, &RessurectionLocation, 0xC );

		this->ProcessEvent( pfnDoRessurect, &DoRessurect_Parms, NULL );

		return DoRessurect_Parms.ReturnValue;
	};

	void ProcessCurrDeathStateReplicated ()
	{
		static UFunction* pfnProcessCurrDeathStateReplicated = NULL;

		if ( !pfnProcessCurrDeathStateReplicated )
			pfnProcessCurrDeathStateReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ProcessCurrDeathStateReplicated" );

		ACCInstancePawn_execProcessCurrDeathStateReplicated_Parms ProcessCurrDeathStateReplicated_Parms;

		this->ProcessEvent( pfnProcessCurrDeathStateReplicated, &ProcessCurrDeathStateReplicated_Parms, NULL );
	};

	void CallSuperHealthBelowZero ()
	{
		static UFunction* pfnCallSuperHealthBelowZero = NULL;

		if ( !pfnCallSuperHealthBelowZero )
			pfnCallSuperHealthBelowZero = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CallSuperHealthBelowZero" );

		ACCInstancePawn_execCallSuperHealthBelowZero_Parms CallSuperHealthBelowZero_Parms;

		this->ProcessEvent( pfnCallSuperHealthBelowZero, &CallSuperHealthBelowZero_Parms, NULL );
	};

	void PrintOutsideWorldBoundsDisabledInfo ()
	{
		static UFunction* pfnPrintOutsideWorldBoundsDisabledInfo = NULL;

		if ( !pfnPrintOutsideWorldBoundsDisabledInfo )
			pfnPrintOutsideWorldBoundsDisabledInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PrintOutsideWorldBoundsDisabledInfo" );

		ACCInstancePawn_execPrintOutsideWorldBoundsDisabledInfo_Parms PrintOutsideWorldBoundsDisabledInfo_Parms;

		this->ProcessEvent( pfnPrintOutsideWorldBoundsDisabledInfo, &PrintOutsideWorldBoundsDisabledInfo_Parms, NULL );
	};

	void PawnServerNotifyTargetDamaged ()
	{
		static UFunction* pfnPawnServerNotifyTargetDamaged = NULL;

		if ( !pfnPawnServerNotifyTargetDamaged )
			pfnPawnServerNotifyTargetDamaged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PawnServerNotifyTargetDamaged" );

		ACCInstancePawn_execPawnServerNotifyTargetDamaged_Parms PawnServerNotifyTargetDamaged_Parms;

		this->ProcessEvent( pfnPawnServerNotifyTargetDamaged, &PawnServerNotifyTargetDamaged_Parms, NULL );
	};

	void NotifyTakeDamage ( int Damage, class ACCPawn* Attacker, class UClass* DamageType, class AActor* DamageCauser )
	{
		static UFunction* pfnNotifyTakeDamage = NULL;

		if ( !pfnNotifyTakeDamage )
			pfnNotifyTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.NotifyTakeDamage" );

		ACCInstancePawn_execNotifyTakeDamage_Parms NotifyTakeDamage_Parms;
		NotifyTakeDamage_Parms.Damage = Damage;
		NotifyTakeDamage_Parms.Attacker = Attacker;
		NotifyTakeDamage_Parms.DamageType = DamageType;
		NotifyTakeDamage_Parms.DamageCauser = DamageCauser;

		this->ProcessEvent( pfnNotifyTakeDamage, &NotifyTakeDamage_Parms, NULL );
	};

	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
	{
		static UFunction* pfnHealDamage = NULL;

		if ( !pfnHealDamage )
			pfnHealDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.HealDamage" );

		ACCInstancePawn_execHealDamage_Parms HealDamage_Parms;
		HealDamage_Parms.Amount = Amount;
		HealDamage_Parms.Healer = Healer;
		HealDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnHealDamage, &HealDamage_Parms, NULL );

		return HealDamage_Parms.ReturnValue;
	};

	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddVelocity = NULL;

		if ( !pfnAddVelocity )
			pfnAddVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AddVelocity" );

		ACCInstancePawn_execAddVelocity_Parms AddVelocity_Parms;
		memcpy( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
		memcpy( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
		AddVelocity_Parms.DamageType = DamageType;
		memcpy( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnAddVelocity, &AddVelocity_Parms, NULL );
	};

	void ClientTakeFlashDamage ( float BlindPower, float BlindTime )
	{
		static UFunction* pfnClientTakeFlashDamage = NULL;

		if ( !pfnClientTakeFlashDamage )
			pfnClientTakeFlashDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClientTakeFlashDamage" );

		ACCInstancePawn_execClientTakeFlashDamage_Parms ClientTakeFlashDamage_Parms;
		ClientTakeFlashDamage_Parms.BlindPower = BlindPower;
		ClientTakeFlashDamage_Parms.BlindTime = BlindTime;

		this->ProcessEvent( pfnClientTakeFlashDamage, &ClientTakeFlashDamage_Parms, NULL );
	};

	void TakeFlashDamage ( float BlindPower, float BlindTime )
	{
		static UFunction* pfnTakeFlashDamage = NULL;

		if ( !pfnTakeFlashDamage )
			pfnTakeFlashDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TakeFlashDamage" );

		ACCInstancePawn_execTakeFlashDamage_Parms TakeFlashDamage_Parms;
		TakeFlashDamage_Parms.BlindPower = BlindPower;
		TakeFlashDamage_Parms.BlindTime = BlindTime;

		this->ProcessEvent( pfnTakeFlashDamage, &TakeFlashDamage_Parms, NULL );
	};

	void Test_TH_SMS ( float X, float Y, float Z )
	{
		static UFunction* pfnTest_TH_SMS = NULL;

		if ( !pfnTest_TH_SMS )
			pfnTest_TH_SMS = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Test_TH_SMS" );

		ACCInstancePawn_execTest_TH_SMS_Parms Test_TH_SMS_Parms;
		Test_TH_SMS_Parms.X = X;
		Test_TH_SMS_Parms.Y = Y;
		Test_TH_SMS_Parms.Z = Z;

		this->ProcessEvent( pfnTest_TH_SMS, &Test_TH_SMS_Parms, NULL );
	};

	void DoAddHitSpeedModifierEntry ( struct FTakeHitSpeedModifierInfo Info, struct FVector ToCauser )
	{
		static UFunction* pfnDoAddHitSpeedModifierEntry = NULL;

		if ( !pfnDoAddHitSpeedModifierEntry )
			pfnDoAddHitSpeedModifierEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DoAddHitSpeedModifierEntry" );

		ACCInstancePawn_execDoAddHitSpeedModifierEntry_Parms DoAddHitSpeedModifierEntry_Parms;
		memcpy( &DoAddHitSpeedModifierEntry_Parms.Info, &Info, 0xC );
		memcpy( &DoAddHitSpeedModifierEntry_Parms.ToCauser, &ToCauser, 0xC );

		this->ProcessEvent( pfnDoAddHitSpeedModifierEntry, &DoAddHitSpeedModifierEntry_Parms, NULL );
	};

	void ClientAddHitSpeedModifierEntry ( struct FTakeHitSpeedModifierInfo Info, struct FVector ToCauser )
	{
		static UFunction* pfnClientAddHitSpeedModifierEntry = NULL;

		if ( !pfnClientAddHitSpeedModifierEntry )
			pfnClientAddHitSpeedModifierEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClientAddHitSpeedModifierEntry" );

		ACCInstancePawn_execClientAddHitSpeedModifierEntry_Parms ClientAddHitSpeedModifierEntry_Parms;
		memcpy( &ClientAddHitSpeedModifierEntry_Parms.Info, &Info, 0xC );
		memcpy( &ClientAddHitSpeedModifierEntry_Parms.ToCauser, &ToCauser, 0xC );

		this->ProcessEvent( pfnClientAddHitSpeedModifierEntry, &ClientAddHitSpeedModifierEntry_Parms, NULL );
	};

	void AddHitSpeedModifierEntry ( struct FTakeHitSpeedModifierInfo Info, struct FVector ToCauser )
	{
		static UFunction* pfnAddHitSpeedModifierEntry = NULL;

		if ( !pfnAddHitSpeedModifierEntry )
			pfnAddHitSpeedModifierEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AddHitSpeedModifierEntry" );

		ACCInstancePawn_execAddHitSpeedModifierEntry_Parms AddHitSpeedModifierEntry_Parms;
		memcpy( &AddHitSpeedModifierEntry_Parms.Info, &Info, 0xC );
		memcpy( &AddHitSpeedModifierEntry_Parms.ToCauser, &ToCauser, 0xC );

		this->ProcessEvent( pfnAddHitSpeedModifierEntry, &AddHitSpeedModifierEntry_Parms, NULL );
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TakeDamage" );

		ACCInstancePawn_eventTakeDamage_Parms TakeDamage_Parms;
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

	float CalculateDamagePercent ( float Damage )
	{
		static UFunction* pfnCalculateDamagePercent = NULL;

		if ( !pfnCalculateDamagePercent )
			pfnCalculateDamagePercent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateDamagePercent" );

		ACCInstancePawn_execCalculateDamagePercent_Parms CalculateDamagePercent_Parms;
		CalculateDamagePercent_Parms.Damage = Damage;

		this->ProcessEvent( pfnCalculateDamagePercent, &CalculateDamagePercent_Parms, NULL );

		return CalculateDamagePercent_Parms.ReturnValue;
	};

	void NotifyWeaponStats ( class APlayerReplicationInfo* PRI, int WeaponID, int Damage )
	{
		static UFunction* pfnNotifyWeaponStats = NULL;

		if ( !pfnNotifyWeaponStats )
			pfnNotifyWeaponStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.NotifyWeaponStats" );

		ACCInstancePawn_execNotifyWeaponStats_Parms NotifyWeaponStats_Parms;
		NotifyWeaponStats_Parms.PRI = PRI;
		NotifyWeaponStats_Parms.WeaponID = WeaponID;
		NotifyWeaponStats_Parms.Damage = Damage;

		this->ProcessEvent( pfnNotifyWeaponStats, &NotifyWeaponStats_Parms, NULL );
	};

	void PrintTakenDamage ( class ACCPlayerReplicationInfo* pInstigator, int Damage )
	{
		static UFunction* pfnPrintTakenDamage = NULL;

		if ( !pfnPrintTakenDamage )
			pfnPrintTakenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PrintTakenDamage" );

		ACCInstancePawn_execPrintTakenDamage_Parms PrintTakenDamage_Parms;
		PrintTakenDamage_Parms.pInstigator = pInstigator;
		PrintTakenDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPrintTakenDamage, &PrintTakenDamage_Parms, NULL );
	};

	void PrintGivenDamage ( class ACCPlayerReplicationInfo* Target, int Damage )
	{
		static UFunction* pfnPrintGivenDamage = NULL;

		if ( !pfnPrintGivenDamage )
			pfnPrintGivenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PrintGivenDamage" );

		ACCInstancePawn_execPrintGivenDamage_Parms PrintGivenDamage_Parms;
		PrintGivenDamage_Parms.Target = Target;
		PrintGivenDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPrintGivenDamage, &PrintGivenDamage_Parms, NULL );
	};

	void UpdateLastBlockedAimingTime ( float DeltaTime )
	{
		static UFunction* pfnUpdateLastBlockedAimingTime = NULL;

		if ( !pfnUpdateLastBlockedAimingTime )
			pfnUpdateLastBlockedAimingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateLastBlockedAimingTime" );

		ACCInstancePawn_execUpdateLastBlockedAimingTime_Parms UpdateLastBlockedAimingTime_Parms;
		UpdateLastBlockedAimingTime_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateLastBlockedAimingTime, &UpdateLastBlockedAimingTime_Parms, NULL );
	};

	void ServerSetSolvedAimProblems ( unsigned long NewReplicatedBlockedWeapon, unsigned long NewReplicatedBlockedAiming )
	{
		static UFunction* pfnServerSetSolvedAimProblems = NULL;

		if ( !pfnServerSetSolvedAimProblems )
			pfnServerSetSolvedAimProblems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSetSolvedAimProblems" );

		ACCInstancePawn_execServerSetSolvedAimProblems_Parms ServerSetSolvedAimProblems_Parms;
		ServerSetSolvedAimProblems_Parms.NewReplicatedBlockedWeapon = NewReplicatedBlockedWeapon;
		ServerSetSolvedAimProblems_Parms.NewReplicatedBlockedAiming = NewReplicatedBlockedAiming;

		this->ProcessEvent( pfnServerSetSolvedAimProblems, &ServerSetSolvedAimProblems_Parms, NULL );
	};

	void SimpleSolveAimProblems ( float DeltaTime )
	{
		static UFunction* pfnSimpleSolveAimProblems = NULL;

		if ( !pfnSimpleSolveAimProblems )
			pfnSimpleSolveAimProblems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SimpleSolveAimProblems" );

		ACCInstancePawn_execSimpleSolveAimProblems_Parms SimpleSolveAimProblems_Parms;
		SimpleSolveAimProblems_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSimpleSolveAimProblems, &SimpleSolveAimProblems_Parms, NULL );
	};

	class AActor* PerformTraceNoPawn ( struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, unsigned long bTraceActors/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
	{
		static UFunction* pfnPerformTraceNoPawn = NULL;

		if ( !pfnPerformTraceNoPawn )
			pfnPerformTraceNoPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PerformTraceNoPawn" );

		ACCInstancePawn_execPerformTraceNoPawn_Parms PerformTraceNoPawn_Parms;
		memcpy( &PerformTraceNoPawn_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &PerformTraceNoPawn_Parms.TraceStart, &TraceStart, 0xC );
		PerformTraceNoPawn_Parms.bTraceActors = bTraceActors;
		memcpy( &PerformTraceNoPawn_Parms.Extent, &Extent, 0xC );

		pfnPerformTraceNoPawn->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPerformTraceNoPawn, &PerformTraceNoPawn_Parms, NULL );
		pfnPerformTraceNoPawn->FunctionFlags |= 0x400;

		if ( HitLocation )
			memcpy( HitLocation, &PerformTraceNoPawn_Parms.HitLocation, 0xC ); // CPF_OutParm
		if ( HitNormal )
			memcpy( HitNormal, &PerformTraceNoPawn_Parms.HitNormal, 0xC ); // CPF_OutParm
		if ( HitInfo )
			memcpy( HitInfo, &PerformTraceNoPawn_Parms.HitInfo, 0x1C ); // CPF_OutParm

		return PerformTraceNoPawn_Parms.ReturnValue;
	};

	void DrawMeshDebug ( class USkeletalMeshComponent* TheMesh )
	{
		static UFunction* pfnDrawMeshDebug = NULL;

		if ( !pfnDrawMeshDebug )
			pfnDrawMeshDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DrawMeshDebug" );

		ACCInstancePawn_execDrawMeshDebug_Parms DrawMeshDebug_Parms;
		DrawMeshDebug_Parms.TheMesh = TheMesh;

		this->ProcessEvent( pfnDrawMeshDebug, &DrawMeshDebug_Parms, NULL );
	};

	void DrawDebugMeshData ()
	{
		static UFunction* pfnDrawDebugMeshData = NULL;

		if ( !pfnDrawDebugMeshData )
			pfnDrawDebugMeshData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DrawDebugMeshData" );

		ACCInstancePawn_execDrawDebugMeshData_Parms DrawDebugMeshData_Parms;

		this->ProcessEvent( pfnDrawDebugMeshData, &DrawDebugMeshData_Parms, NULL );
	};

	void do_break ()
	{
		static UFunction* pfndo_break = NULL;

		if ( !pfndo_break )
			pfndo_break = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.do_break" );

		ACCInstancePawn_execdo_break_Parms do_break_Parms;

		this->ProcessEvent( pfndo_break, &do_break_Parms, NULL );
	};

	void InterpolatePawnLocation ( float DeltaTime )
	{
		static UFunction* pfnInterpolatePawnLocation = NULL;

		if ( !pfnInterpolatePawnLocation )
			pfnInterpolatePawnLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InterpolatePawnLocation" );

		ACCInstancePawn_execInterpolatePawnLocation_Parms InterpolatePawnLocation_Parms;
		InterpolatePawnLocation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnInterpolatePawnLocation, &InterpolatePawnLocation_Parms, NULL );
	};

	struct FVector CalcLocationDebugPointLoc ( struct FVector Loc )
	{
		static UFunction* pfnCalcLocationDebugPointLoc = NULL;

		if ( !pfnCalcLocationDebugPointLoc )
			pfnCalcLocationDebugPointLoc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcLocationDebugPointLoc" );

		ACCInstancePawn_execCalcLocationDebugPointLoc_Parms CalcLocationDebugPointLoc_Parms;
		memcpy( &CalcLocationDebugPointLoc_Parms.Loc, &Loc, 0xC );

		this->ProcessEvent( pfnCalcLocationDebugPointLoc, &CalcLocationDebugPointLoc_Parms, NULL );

		return CalcLocationDebugPointLoc_Parms.ReturnValue;
	};

	void TickLocationDebug2 ( float DeltaTime )
	{
		static UFunction* pfnTickLocationDebug2 = NULL;

		if ( !pfnTickLocationDebug2 )
			pfnTickLocationDebug2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TickLocationDebug2" );

		ACCInstancePawn_execTickLocationDebug2_Parms TickLocationDebug2_Parms;
		TickLocationDebug2_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickLocationDebug2, &TickLocationDebug2_Parms, NULL );
	};

	void DrawDiagramDebugLocation ( struct FVector WorldLocationDelta, struct FVector Origin, struct FVector AxisDir )
	{
		static UFunction* pfnDrawDiagramDebugLocation = NULL;

		if ( !pfnDrawDiagramDebugLocation )
			pfnDrawDiagramDebugLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DrawDiagramDebugLocation" );

		ACCInstancePawn_execDrawDiagramDebugLocation_Parms DrawDiagramDebugLocation_Parms;
		memcpy( &DrawDiagramDebugLocation_Parms.WorldLocationDelta, &WorldLocationDelta, 0xC );
		memcpy( &DrawDiagramDebugLocation_Parms.Origin, &Origin, 0xC );
		memcpy( &DrawDiagramDebugLocation_Parms.AxisDir, &AxisDir, 0xC );

		this->ProcessEvent( pfnDrawDiagramDebugLocation, &DrawDiagramDebugLocation_Parms, NULL );
	};

	void eventTickLocationDebug ( float DeltaTime )
	{
		static UFunction* pfnTickLocationDebug = NULL;

		if ( !pfnTickLocationDebug )
			pfnTickLocationDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TickLocationDebug" );

		ACCInstancePawn_eventTickLocationDebug_Parms TickLocationDebug_Parms;
		TickLocationDebug_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickLocationDebug, &TickLocationDebug_Parms, NULL );
	};

	void CheckForRolling ()
	{
		static UFunction* pfnCheckForRolling = NULL;

		if ( !pfnCheckForRolling )
			pfnCheckForRolling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckForRolling" );

		ACCInstancePawn_execCheckForRolling_Parms CheckForRolling_Parms;

		this->ProcessEvent( pfnCheckForRolling, &CheckForRolling_Parms, NULL );
	};

	void GrenadeDetecting ( float DeltaTime )
	{
		static UFunction* pfnGrenadeDetecting = NULL;

		if ( !pfnGrenadeDetecting )
			pfnGrenadeDetecting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GrenadeDetecting" );

		ACCInstancePawn_execGrenadeDetecting_Parms GrenadeDetecting_Parms;
		GrenadeDetecting_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnGrenadeDetecting, &GrenadeDetecting_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Tick" );

		ACCInstancePawn_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void ServerUpdateDemoLoc ( struct FVector _Demo_CachedCamLoc, struct FRotator _Demo_CachedCamRot )
	{
		static UFunction* pfnServerUpdateDemoLoc = NULL;

		if ( !pfnServerUpdateDemoLoc )
			pfnServerUpdateDemoLoc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerUpdateDemoLoc" );

		ACCInstancePawn_execServerUpdateDemoLoc_Parms ServerUpdateDemoLoc_Parms;
		memcpy( &ServerUpdateDemoLoc_Parms._Demo_CachedCamLoc, &_Demo_CachedCamLoc, 0xC );
		memcpy( &ServerUpdateDemoLoc_Parms._Demo_CachedCamRot, &_Demo_CachedCamRot, 0xC );

		this->ProcessEvent( pfnServerUpdateDemoLoc, &ServerUpdateDemoLoc_Parms, NULL );
	};

	void ResetPriFire ()
	{
		static UFunction* pfnResetPriFire = NULL;

		if ( !pfnResetPriFire )
			pfnResetPriFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ResetPriFire" );

		ACCInstancePawn_execResetPriFire_Parms ResetPriFire_Parms;

		this->ProcessEvent( pfnResetPriFire, &ResetPriFire_Parms, NULL );
	};

	void UpdateStartedBlockedFire ()
	{
		static UFunction* pfnUpdateStartedBlockedFire = NULL;

		if ( !pfnUpdateStartedBlockedFire )
			pfnUpdateStartedBlockedFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateStartedBlockedFire" );

		ACCInstancePawn_execUpdateStartedBlockedFire_Parms UpdateStartedBlockedFire_Parms;

		this->ProcessEvent( pfnUpdateStartedBlockedFire, &UpdateStartedBlockedFire_Parms, NULL );
	};

	float PreprocessAttack ( float Value, int Type )
	{
		static UFunction* pfnPreprocessAttack = NULL;

		if ( !pfnPreprocessAttack )
			pfnPreprocessAttack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PreprocessAttack" );

		ACCInstancePawn_execPreprocessAttack_Parms PreprocessAttack_Parms;
		PreprocessAttack_Parms.Value = Value;
		PreprocessAttack_Parms.Type = Type;

		this->ProcessEvent( pfnPreprocessAttack, &PreprocessAttack_Parms, NULL );

		return PreprocessAttack_Parms.ReturnValue;
	};

	bool CheckWeaponChangeNodeForRecharge ()
	{
		static UFunction* pfnCheckWeaponChangeNodeForRecharge = NULL;

		if ( !pfnCheckWeaponChangeNodeForRecharge )
			pfnCheckWeaponChangeNodeForRecharge = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckWeaponChangeNodeForRecharge" );

		ACCInstancePawn_execCheckWeaponChangeNodeForRecharge_Parms CheckWeaponChangeNodeForRecharge_Parms;

		this->ProcessEvent( pfnCheckWeaponChangeNodeForRecharge, &CheckWeaponChangeNodeForRecharge_Parms, NULL );

		return CheckWeaponChangeNodeForRecharge_Parms.ReturnValue;
	};

	void* FindRelevantWeaponChangeNode ()
	{
		static UFunction* pfnFindRelevantWeaponChangeNode = NULL;

		if ( !pfnFindRelevantWeaponChangeNode )
			pfnFindRelevantWeaponChangeNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindRelevantWeaponChangeNode" );

		ACCInstancePawn_execFindRelevantWeaponChangeNode_Parms FindRelevantWeaponChangeNode_Parms;

		this->ProcessEvent( pfnFindRelevantWeaponChangeNode, &FindRelevantWeaponChangeNode_Parms, NULL );

		return FindRelevantWeaponChangeNode_Parms.ReturnValue;
	};

	void* FindRelevantTargetingNode ()
	{
		static UFunction* pfnFindRelevantTargetingNode = NULL;

		if ( !pfnFindRelevantTargetingNode )
			pfnFindRelevantTargetingNode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindRelevantTargetingNode" );

		ACCInstancePawn_execFindRelevantTargetingNode_Parms FindRelevantTargetingNode_Parms;

		this->ProcessEvent( pfnFindRelevantTargetingNode, &FindRelevantTargetingNode_Parms, NULL );

		return FindRelevantTargetingNode_Parms.ReturnValue;
	};

	bool CheckWeaponChangeNodesForReadyToFire ()
	{
		static UFunction* pfnCheckWeaponChangeNodesForReadyToFire = NULL;

		if ( !pfnCheckWeaponChangeNodesForReadyToFire )
			pfnCheckWeaponChangeNodesForReadyToFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckWeaponChangeNodesForReadyToFire" );

		ACCInstancePawn_execCheckWeaponChangeNodesForReadyToFire_Parms CheckWeaponChangeNodesForReadyToFire_Parms;

		this->ProcessEvent( pfnCheckWeaponChangeNodesForReadyToFire, &CheckWeaponChangeNodesForReadyToFire_Parms, NULL );

		return CheckWeaponChangeNodesForReadyToFire_Parms.ReturnValue;
	};

	bool IsInFireOrAimingAnimation ()
	{
		static UFunction* pfnIsInFireOrAimingAnimation = NULL;

		if ( !pfnIsInFireOrAimingAnimation )
			pfnIsInFireOrAimingAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsInFireOrAimingAnimation" );

		ACCInstancePawn_execIsInFireOrAimingAnimation_Parms IsInFireOrAimingAnimation_Parms;

		this->ProcessEvent( pfnIsInFireOrAimingAnimation, &IsInFireOrAimingAnimation_Parms, NULL );

		return IsInFireOrAimingAnimation_Parms.ReturnValue;
	};

	bool CheckAnimNodesForReadyToFire ()
	{
		static UFunction* pfnCheckAnimNodesForReadyToFire = NULL;

		if ( !pfnCheckAnimNodesForReadyToFire )
			pfnCheckAnimNodesForReadyToFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckAnimNodesForReadyToFire" );

		ACCInstancePawn_execCheckAnimNodesForReadyToFire_Parms CheckAnimNodesForReadyToFire_Parms;

		this->ProcessEvent( pfnCheckAnimNodesForReadyToFire, &CheckAnimNodesForReadyToFire_Parms, NULL );

		return CheckAnimNodesForReadyToFire_Parms.ReturnValue;
	};

	struct FVector eventGetShootSpotLocation ( struct FRotator* StartFireRot )
	{
		static UFunction* pfnGetShootSpotLocation = NULL;

		if ( !pfnGetShootSpotLocation )
			pfnGetShootSpotLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetShootSpotLocation" );

		ACCInstancePawn_eventGetShootSpotLocation_Parms GetShootSpotLocation_Parms;

		this->ProcessEvent( pfnGetShootSpotLocation, &GetShootSpotLocation_Parms, NULL );

		if ( StartFireRot )
			memcpy( StartFireRot, &GetShootSpotLocation_Parms.StartFireRot, 0xC ); // CPF_OutParm

		return GetShootSpotLocation_Parms.ReturnValue;
	};

	struct FVector GetAimPoseShootSpotLocationCached ( struct FRotator* StartFireRot )
	{
		static UFunction* pfnGetAimPoseShootSpotLocationCached = NULL;

		if ( !pfnGetAimPoseShootSpotLocationCached )
			pfnGetAimPoseShootSpotLocationCached = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetAimPoseShootSpotLocationCached" );

		ACCInstancePawn_execGetAimPoseShootSpotLocationCached_Parms GetAimPoseShootSpotLocationCached_Parms;

		this->ProcessEvent( pfnGetAimPoseShootSpotLocationCached, &GetAimPoseShootSpotLocationCached_Parms, NULL );

		if ( StartFireRot )
			memcpy( StartFireRot, &GetAimPoseShootSpotLocationCached_Parms.StartFireRot, 0xC ); // CPF_OutParm

		return GetAimPoseShootSpotLocationCached_Parms.ReturnValue;
	};

	struct FVector GetFirePoseShootSpotLocationCached ( struct FRotator* StartFireRot )
	{
		static UFunction* pfnGetFirePoseShootSpotLocationCached = NULL;

		if ( !pfnGetFirePoseShootSpotLocationCached )
			pfnGetFirePoseShootSpotLocationCached = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetFirePoseShootSpotLocationCached" );

		ACCInstancePawn_execGetFirePoseShootSpotLocationCached_Parms GetFirePoseShootSpotLocationCached_Parms;

		this->ProcessEvent( pfnGetFirePoseShootSpotLocationCached, &GetFirePoseShootSpotLocationCached_Parms, NULL );

		if ( StartFireRot )
			memcpy( StartFireRot, &GetFirePoseShootSpotLocationCached_Parms.StartFireRot, 0xC ); // CPF_OutParm

		return GetFirePoseShootSpotLocationCached_Parms.ReturnValue;
	};

	struct FVector GetIdlePoseShootSpotLocationCached ( struct FRotator* StartFireRot )
	{
		static UFunction* pfnGetIdlePoseShootSpotLocationCached = NULL;

		if ( !pfnGetIdlePoseShootSpotLocationCached )
			pfnGetIdlePoseShootSpotLocationCached = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetIdlePoseShootSpotLocationCached" );

		ACCInstancePawn_execGetIdlePoseShootSpotLocationCached_Parms GetIdlePoseShootSpotLocationCached_Parms;

		this->ProcessEvent( pfnGetIdlePoseShootSpotLocationCached, &GetIdlePoseShootSpotLocationCached_Parms, NULL );

		if ( StartFireRot )
			memcpy( StartFireRot, &GetIdlePoseShootSpotLocationCached_Parms.StartFireRot, 0xC ); // CPF_OutParm

		return GetIdlePoseShootSpotLocationCached_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFireFromCustomSpot ( struct FVector ShootSpotLocation, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFireFromCustomSpot = NULL;

		if ( !pfnCalcWeaponFireFromCustomSpot )
			pfnCalcWeaponFireFromCustomSpot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcWeaponFireFromCustomSpot" );

		ACCInstancePawn_execCalcWeaponFireFromCustomSpot_Parms CalcWeaponFireFromCustomSpot_Parms;
		memcpy( &CalcWeaponFireFromCustomSpot_Parms.ShootSpotLocation, &ShootSpotLocation, 0xC );

		this->ProcessEvent( pfnCalcWeaponFireFromCustomSpot, &CalcWeaponFireFromCustomSpot_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFireFromCustomSpot_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFireFromCustomSpot_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFireFromIdlePose ( TArray< struct FImpactInfo >* ImpactList, struct FVector* ShootSpotLocationFromIdlePose )
	{
		static UFunction* pfnCalcWeaponFireFromIdlePose = NULL;

		if ( !pfnCalcWeaponFireFromIdlePose )
			pfnCalcWeaponFireFromIdlePose = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcWeaponFireFromIdlePose" );

		ACCInstancePawn_execCalcWeaponFireFromIdlePose_Parms CalcWeaponFireFromIdlePose_Parms;

		this->ProcessEvent( pfnCalcWeaponFireFromIdlePose, &CalcWeaponFireFromIdlePose_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFireFromIdlePose_Parms.ImpactList, 0xC ); // CPF_OutParm
		if ( ShootSpotLocationFromIdlePose )
			memcpy( ShootSpotLocationFromIdlePose, &CalcWeaponFireFromIdlePose_Parms.ShootSpotLocationFromIdlePose, 0xC ); // CPF_OutParm

		return CalcWeaponFireFromIdlePose_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFireFromAimPose ( TArray< struct FImpactInfo >* ImpactList, struct FVector* ShootSpotLocationFromAimPose, int* bWeaponInWall )
	{
		static UFunction* pfnCalcWeaponFireFromAimPose = NULL;

		if ( !pfnCalcWeaponFireFromAimPose )
			pfnCalcWeaponFireFromAimPose = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcWeaponFireFromAimPose" );

		ACCInstancePawn_execCalcWeaponFireFromAimPose_Parms CalcWeaponFireFromAimPose_Parms;

		this->ProcessEvent( pfnCalcWeaponFireFromAimPose, &CalcWeaponFireFromAimPose_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFireFromAimPose_Parms.ImpactList, 0xC ); // CPF_OutParm
		if ( ShootSpotLocationFromAimPose )
			memcpy( ShootSpotLocationFromAimPose, &CalcWeaponFireFromAimPose_Parms.ShootSpotLocationFromAimPose, 0xC ); // CPF_OutParm
		if ( bWeaponInWall )
			*bWeaponInWall = CalcWeaponFireFromAimPose_Parms.bWeaponInWall; // CPF_OutParm

		return CalcWeaponFireFromAimPose_Parms.ReturnValue;
	};

	struct FVector GetHeadLocationForCWF ()
	{
		static UFunction* pfnGetHeadLocationForCWF = NULL;

		if ( !pfnGetHeadLocationForCWF )
			pfnGetHeadLocationForCWF = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetHeadLocationForCWF" );

		ACCInstancePawn_execGetHeadLocationForCWF_Parms GetHeadLocationForCWF_Parms;

		this->ProcessEvent( pfnGetHeadLocationForCWF, &GetHeadLocationForCWF_Parms, NULL );

		return GetHeadLocationForCWF_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFireCached ( TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFireCached = NULL;

		if ( !pfnCalcWeaponFireCached )
			pfnCalcWeaponFireCached = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcWeaponFireCached" );

		ACCInstancePawn_execCalcWeaponFireCached_Parms CalcWeaponFireCached_Parms;

		this->ProcessEvent( pfnCalcWeaponFireCached, &CalcWeaponFireCached_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFireCached_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFireCached_Parms.ReturnValue;
	};

	struct FString GetDebugAngleString ()
	{
		static UFunction* pfnGetDebugAngleString = NULL;

		if ( !pfnGetDebugAngleString )
			pfnGetDebugAngleString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetDebugAngleString" );

		ACCInstancePawn_execGetDebugAngleString_Parms GetDebugAngleString_Parms;

		this->ProcessEvent( pfnGetDebugAngleString, &GetDebugAngleString_Parms, NULL );

		return GetDebugAngleString_Parms.ReturnValue;
	};

	void DrawWeaponDebugLines ()
	{
		static UFunction* pfnDrawWeaponDebugLines = NULL;

		if ( !pfnDrawWeaponDebugLines )
			pfnDrawWeaponDebugLines = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DrawWeaponDebugLines" );

		ACCInstancePawn_execDrawWeaponDebugLines_Parms DrawWeaponDebugLines_Parms;

		this->ProcessEvent( pfnDrawWeaponDebugLines, &DrawWeaponDebugLines_Parms, NULL );
	};

	bool CheckIsSmallWall1 ( struct FVector StartFireLoc, struct FVector HitLoc, float CheckAngle )
	{
		static UFunction* pfnCheckIsSmallWall1 = NULL;

		if ( !pfnCheckIsSmallWall1 )
			pfnCheckIsSmallWall1 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckIsSmallWall1" );

		ACCInstancePawn_execCheckIsSmallWall1_Parms CheckIsSmallWall1_Parms;
		memcpy( &CheckIsSmallWall1_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &CheckIsSmallWall1_Parms.HitLoc, &HitLoc, 0xC );
		CheckIsSmallWall1_Parms.CheckAngle = CheckAngle;

		this->ProcessEvent( pfnCheckIsSmallWall1, &CheckIsSmallWall1_Parms, NULL );

		return CheckIsSmallWall1_Parms.ReturnValue;
	};

	bool CheckIsSmallWall ( struct FVector StartFireLoc, struct FVector HitLoc )
	{
		static UFunction* pfnCheckIsSmallWall = NULL;

		if ( !pfnCheckIsSmallWall )
			pfnCheckIsSmallWall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckIsSmallWall" );

		ACCInstancePawn_execCheckIsSmallWall_Parms CheckIsSmallWall_Parms;
		memcpy( &CheckIsSmallWall_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &CheckIsSmallWall_Parms.HitLoc, &HitLoc, 0xC );

		this->ProcessEvent( pfnCheckIsSmallWall, &CheckIsSmallWall_Parms, NULL );

		return CheckIsSmallWall_Parms.ReturnValue;
	};

	bool CheckWeaponInWallAuto ()
	{
		static UFunction* pfnCheckWeaponInWallAuto = NULL;

		if ( !pfnCheckWeaponInWallAuto )
			pfnCheckWeaponInWallAuto = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckWeaponInWallAuto" );

		ACCInstancePawn_execCheckWeaponInWallAuto_Parms CheckWeaponInWallAuto_Parms;

		this->ProcessEvent( pfnCheckWeaponInWallAuto, &CheckWeaponInWallAuto_Parms, NULL );

		return CheckWeaponInWallAuto_Parms.ReturnValue;
	};

	bool CheckWeaponInWall ( struct FVector StrartFireLoc, struct FRotator StartFireRot )
	{
		static UFunction* pfnCheckWeaponInWall = NULL;

		if ( !pfnCheckWeaponInWall )
			pfnCheckWeaponInWall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckWeaponInWall" );

		ACCInstancePawn_execCheckWeaponInWall_Parms CheckWeaponInWall_Parms;
		memcpy( &CheckWeaponInWall_Parms.StrartFireLoc, &StrartFireLoc, 0xC );
		memcpy( &CheckWeaponInWall_Parms.StartFireRot, &StartFireRot, 0xC );

		this->ProcessEvent( pfnCheckWeaponInWall, &CheckWeaponInWall_Parms, NULL );

		return CheckWeaponInWall_Parms.ReturnValue;
	};

	struct FRotator GetResultViewRotation ( struct FRotator BaseAimRotation, struct FVector RealAimRay, class AActor* RealAimTarget )
	{
		static UFunction* pfnGetResultViewRotation = NULL;

		if ( !pfnGetResultViewRotation )
			pfnGetResultViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetResultViewRotation" );

		ACCInstancePawn_execGetResultViewRotation_Parms GetResultViewRotation_Parms;
		memcpy( &GetResultViewRotation_Parms.BaseAimRotation, &BaseAimRotation, 0xC );
		memcpy( &GetResultViewRotation_Parms.RealAimRay, &RealAimRay, 0xC );
		GetResultViewRotation_Parms.RealAimTarget = RealAimTarget;

		this->ProcessEvent( pfnGetResultViewRotation, &GetResultViewRotation_Parms, NULL );

		return GetResultViewRotation_Parms.ReturnValue;
	};

	struct FVector CalculateAimOffsetTarget ( class AWeapon* Weap, struct FVector WeaponLocation, struct FRotator BaseAimRotation, class AActor** TargetActor )
	{
		static UFunction* pfnCalculateAimOffsetTarget = NULL;

		if ( !pfnCalculateAimOffsetTarget )
			pfnCalculateAimOffsetTarget = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateAimOffsetTarget" );

		ACCInstancePawn_execCalculateAimOffsetTarget_Parms CalculateAimOffsetTarget_Parms;
		CalculateAimOffsetTarget_Parms.Weap = Weap;
		memcpy( &CalculateAimOffsetTarget_Parms.WeaponLocation, &WeaponLocation, 0xC );
		memcpy( &CalculateAimOffsetTarget_Parms.BaseAimRotation, &BaseAimRotation, 0xC );

		this->ProcessEvent( pfnCalculateAimOffsetTarget, &CalculateAimOffsetTarget_Parms, NULL );

		if ( TargetActor )
			*TargetActor = CalculateAimOffsetTarget_Parms.TargetActor; // CPF_OutParm

		return CalculateAimOffsetTarget_Parms.ReturnValue;
	};

	struct FRotator GetAimOffsetRotation ()
	{
		static UFunction* pfnGetAimOffsetRotation = NULL;

		if ( !pfnGetAimOffsetRotation )
			pfnGetAimOffsetRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetAimOffsetRotation" );

		ACCInstancePawn_execGetAimOffsetRotation_Parms GetAimOffsetRotation_Parms;

		this->ProcessEvent( pfnGetAimOffsetRotation, &GetAimOffsetRotation_Parms, NULL );

		return GetAimOffsetRotation_Parms.ReturnValue;
	};

	void ServerSetCalculatedAimOffset ( int NewAimOffset )
	{
		static UFunction* pfnServerSetCalculatedAimOffset = NULL;

		if ( !pfnServerSetCalculatedAimOffset )
			pfnServerSetCalculatedAimOffset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSetCalculatedAimOffset" );

		ACCInstancePawn_execServerSetCalculatedAimOffset_Parms ServerSetCalculatedAimOffset_Parms;
		ServerSetCalculatedAimOffset_Parms.NewAimOffset = NewAimOffset;

		this->ProcessEvent( pfnServerSetCalculatedAimOffset, &ServerSetCalculatedAimOffset_Parms, NULL );
	};

	void ForceUpdateAimOffsetData ()
	{
		static UFunction* pfnForceUpdateAimOffsetData = NULL;

		if ( !pfnForceUpdateAimOffsetData )
			pfnForceUpdateAimOffsetData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ForceUpdateAimOffsetData" );

		ACCInstancePawn_execForceUpdateAimOffsetData_Parms ForceUpdateAimOffsetData_Parms;

		this->ProcessEvent( pfnForceUpdateAimOffsetData, &ForceUpdateAimOffsetData_Parms, NULL );
	};

	bool GetShouldCalculateAimOffset ()
	{
		static UFunction* pfnGetShouldCalculateAimOffset = NULL;

		if ( !pfnGetShouldCalculateAimOffset )
			pfnGetShouldCalculateAimOffset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetShouldCalculateAimOffset" );

		ACCInstancePawn_execGetShouldCalculateAimOffset_Parms GetShouldCalculateAimOffset_Parms;

		this->ProcessEvent( pfnGetShouldCalculateAimOffset, &GetShouldCalculateAimOffset_Parms, NULL );

		return GetShouldCalculateAimOffset_Parms.ReturnValue;
	};

	void UpdateAimOffsetData ( float DeltaTime )
	{
		static UFunction* pfnUpdateAimOffsetData = NULL;

		if ( !pfnUpdateAimOffsetData )
			pfnUpdateAimOffsetData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateAimOffsetData" );

		ACCInstancePawn_execUpdateAimOffsetData_Parms UpdateAimOffsetData_Parms;
		UpdateAimOffsetData_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateAimOffsetData, &UpdateAimOffsetData_Parms, NULL );
	};

	void UpdateMeshBoneControllers ( float DeltaTime )
	{
		static UFunction* pfnUpdateMeshBoneControllers = NULL;

		if ( !pfnUpdateMeshBoneControllers )
			pfnUpdateMeshBoneControllers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateMeshBoneControllers" );

		ACCInstancePawn_execUpdateMeshBoneControllers_Parms UpdateMeshBoneControllers_Parms;
		UpdateMeshBoneControllers_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateMeshBoneControllers, &UpdateMeshBoneControllers_Parms, NULL );
	};

	void* GetWeaponPPControllerForSocket ( struct FName SocketName )
	{
		static UFunction* pfnGetWeaponPPControllerForSocket = NULL;

		if ( !pfnGetWeaponPPControllerForSocket )
			pfnGetWeaponPPControllerForSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponPPControllerForSocket" );

		ACCInstancePawn_execGetWeaponPPControllerForSocket_Parms GetWeaponPPControllerForSocket_Parms;
		memcpy( &GetWeaponPPControllerForSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnGetWeaponPPControllerForSocket, &GetWeaponPPControllerForSocket_Parms, NULL );

		return GetWeaponPPControllerForSocket_Parms.ReturnValue;
	};

	void* GetCCSPPControllerForSocket ( struct FName SocketName )
	{
		static UFunction* pfnGetCCSPPControllerForSocket = NULL;

		if ( !pfnGetCCSPPControllerForSocket )
			pfnGetCCSPPControllerForSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCCSPPControllerForSocket" );

		ACCInstancePawn_execGetCCSPPControllerForSocket_Parms GetCCSPPControllerForSocket_Parms;
		memcpy( &GetCCSPPControllerForSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnGetCCSPPControllerForSocket, &GetCCSPPControllerForSocket_Parms, NULL );

		return GetCCSPPControllerForSocket_Parms.ReturnValue;
	};

	void UpdateWeapon2CarrySlotIK ( unsigned long bForceUpdate )
	{
		static UFunction* pfnUpdateWeapon2CarrySlotIK = NULL;

		if ( !pfnUpdateWeapon2CarrySlotIK )
			pfnUpdateWeapon2CarrySlotIK = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeapon2CarrySlotIK" );

		ACCInstancePawn_execUpdateWeapon2CarrySlotIK_Parms UpdateWeapon2CarrySlotIK_Parms;
		UpdateWeapon2CarrySlotIK_Parms.bForceUpdate = bForceUpdate;

		this->ProcessEvent( pfnUpdateWeapon2CarrySlotIK, &UpdateWeapon2CarrySlotIK_Parms, NULL );
	};

	void DisableWeapon2CarrySlotIKController ( void* SkelController )
	{
		static UFunction* pfnDisableWeapon2CarrySlotIKController = NULL;

		if ( !pfnDisableWeapon2CarrySlotIKController )
			pfnDisableWeapon2CarrySlotIKController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DisableWeapon2CarrySlotIKController" );

		ACCInstancePawn_execDisableWeapon2CarrySlotIKController_Parms DisableWeapon2CarrySlotIKController_Parms;
		DisableWeapon2CarrySlotIKController_Parms.SkelController = SkelController;

		this->ProcessEvent( pfnDisableWeapon2CarrySlotIKController, &DisableWeapon2CarrySlotIKController_Parms, NULL );
	};

	void UpdateWeapon2CarrySlotIKController ( void* SkelController, struct FName WeaponSocketName, struct FName CarrySlotSocketName )
	{
		static UFunction* pfnUpdateWeapon2CarrySlotIKController = NULL;

		if ( !pfnUpdateWeapon2CarrySlotIKController )
			pfnUpdateWeapon2CarrySlotIKController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeapon2CarrySlotIKController" );

		ACCInstancePawn_execUpdateWeapon2CarrySlotIKController_Parms UpdateWeapon2CarrySlotIKController_Parms;
		UpdateWeapon2CarrySlotIKController_Parms.SkelController = SkelController;
		memcpy( &UpdateWeapon2CarrySlotIKController_Parms.WeaponSocketName, &WeaponSocketName, 0x8 );
		memcpy( &UpdateWeapon2CarrySlotIKController_Parms.CarrySlotSocketName, &CarrySlotSocketName, 0x8 );

		this->ProcessEvent( pfnUpdateWeapon2CarrySlotIKController, &UpdateWeapon2CarrySlotIKController_Parms, NULL );
	};

	void UpdateWeapon2CarrySlotIKControllerTransform ( void* SkelController, struct FName WeaponSocketName, struct FName CarrySlotSocketName, float Alpha )
	{
		static UFunction* pfnUpdateWeapon2CarrySlotIKControllerTransform = NULL;

		if ( !pfnUpdateWeapon2CarrySlotIKControllerTransform )
			pfnUpdateWeapon2CarrySlotIKControllerTransform = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeapon2CarrySlotIKControllerTransform" );

		ACCInstancePawn_execUpdateWeapon2CarrySlotIKControllerTransform_Parms UpdateWeapon2CarrySlotIKControllerTransform_Parms;
		UpdateWeapon2CarrySlotIKControllerTransform_Parms.SkelController = SkelController;
		memcpy( &UpdateWeapon2CarrySlotIKControllerTransform_Parms.WeaponSocketName, &WeaponSocketName, 0x8 );
		memcpy( &UpdateWeapon2CarrySlotIKControllerTransform_Parms.CarrySlotSocketName, &CarrySlotSocketName, 0x8 );
		UpdateWeapon2CarrySlotIKControllerTransform_Parms.Alpha = Alpha;

		this->ProcessEvent( pfnUpdateWeapon2CarrySlotIKControllerTransform, &UpdateWeapon2CarrySlotIKControllerTransform_Parms, NULL );
	};

	void UpdateCrosshair ( class AActor* HitActor )
	{
		static UFunction* pfnUpdateCrosshair = NULL;

		if ( !pfnUpdateCrosshair )
			pfnUpdateCrosshair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateCrosshair" );

		ACCInstancePawn_execUpdateCrosshair_Parms UpdateCrosshair_Parms;
		UpdateCrosshair_Parms.HitActor = HitActor;

		this->ProcessEvent( pfnUpdateCrosshair, &UpdateCrosshair_Parms, NULL );
	};

	void PostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
	{
		static UFunction* pfnPostRenderFor = NULL;

		if ( !pfnPostRenderFor )
			pfnPostRenderFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PostRenderFor" );

		ACCInstancePawn_execPostRenderFor_Parms PostRenderFor_Parms;
		PostRenderFor_Parms.PC = PC;
		PostRenderFor_Parms.Canvas = Canvas;
		memcpy( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
		memcpy( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

		this->ProcessEvent( pfnPostRenderFor, &PostRenderFor_Parms, NULL );
	};

	struct FString GetPlayerName ()
	{
		static UFunction* pfnGetPlayerName = NULL;

		if ( !pfnGetPlayerName )
			pfnGetPlayerName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetPlayerName" );

		ACCInstancePawn_execGetPlayerName_Parms GetPlayerName_Parms;

		this->ProcessEvent( pfnGetPlayerName, &GetPlayerName_Parms, NULL );

		return GetPlayerName_Parms.ReturnValue;
	};

	void BeginStopAiming ()
	{
		static UFunction* pfnBeginStopAiming = NULL;

		if ( !pfnBeginStopAiming )
			pfnBeginStopAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginStopAiming" );

		ACCInstancePawn_execBeginStopAiming_Parms BeginStopAiming_Parms;

		this->ProcessEvent( pfnBeginStopAiming, &BeginStopAiming_Parms, NULL );
	};

	void StopAiming ()
	{
		static UFunction* pfnStopAiming = NULL;

		if ( !pfnStopAiming )
			pfnStopAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.StopAiming" );

		ACCInstancePawn_execStopAiming_Parms StopAiming_Parms;

		this->ProcessEvent( pfnStopAiming, &StopAiming_Parms, NULL );
	};

	void BeginAiming ()
	{
		static UFunction* pfnBeginAiming = NULL;

		if ( !pfnBeginAiming )
			pfnBeginAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginAiming" );

		ACCInstancePawn_execBeginAiming_Parms BeginAiming_Parms;

		this->ProcessEvent( pfnBeginAiming, &BeginAiming_Parms, NULL );
	};

	void StartAiming ()
	{
		static UFunction* pfnStartAiming = NULL;

		if ( !pfnStartAiming )
			pfnStartAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.StartAiming" );

		ACCInstancePawn_execStartAiming_Parms StartAiming_Parms;

		this->ProcessEvent( pfnStartAiming, &StartAiming_Parms, NULL );
	};

	void ExecConsoleCommand ( struct FString Command )
	{
		static UFunction* pfnExecConsoleCommand = NULL;

		if ( !pfnExecConsoleCommand )
			pfnExecConsoleCommand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ExecConsoleCommand" );

		ACCInstancePawn_execExecConsoleCommand_Parms ExecConsoleCommand_Parms;
		memcpy( &ExecConsoleCommand_Parms.Command, &Command, 0xC );

		pfnExecConsoleCommand->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnExecConsoleCommand, &ExecConsoleCommand_Parms, NULL );
		pfnExecConsoleCommand->FunctionFlags |= 0x400;
	};

	void EndAiming_Default ()
	{
		static UFunction* pfnEndAiming_Default = NULL;

		if ( !pfnEndAiming_Default )
			pfnEndAiming_Default = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EndAiming_Default" );

		ACCInstancePawn_execEndAiming_Default_Parms EndAiming_Default_Parms;

		this->ProcessEvent( pfnEndAiming_Default, &EndAiming_Default_Parms, NULL );
	};

	void BeginAiming_Default ()
	{
		static UFunction* pfnBeginAiming_Default = NULL;

		if ( !pfnBeginAiming_Default )
			pfnBeginAiming_Default = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginAiming_Default" );

		ACCInstancePawn_execBeginAiming_Default_Parms BeginAiming_Default_Parms;

		this->ProcessEvent( pfnBeginAiming_Default, &BeginAiming_Default_Parms, NULL );
	};

	void EndAiming_Grenade ()
	{
		static UFunction* pfnEndAiming_Grenade = NULL;

		if ( !pfnEndAiming_Grenade )
			pfnEndAiming_Grenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EndAiming_Grenade" );

		ACCInstancePawn_execEndAiming_Grenade_Parms EndAiming_Grenade_Parms;

		this->ProcessEvent( pfnEndAiming_Grenade, &EndAiming_Grenade_Parms, NULL );
	};

	void BeginAiming_Grenade ()
	{
		static UFunction* pfnBeginAiming_Grenade = NULL;

		if ( !pfnBeginAiming_Grenade )
			pfnBeginAiming_Grenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginAiming_Grenade" );

		ACCInstancePawn_execBeginAiming_Grenade_Parms BeginAiming_Grenade_Parms;

		this->ProcessEvent( pfnBeginAiming_Grenade, &BeginAiming_Grenade_Parms, NULL );
	};

	void EndAiming_GrenadeLauncher ()
	{
		static UFunction* pfnEndAiming_GrenadeLauncher = NULL;

		if ( !pfnEndAiming_GrenadeLauncher )
			pfnEndAiming_GrenadeLauncher = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EndAiming_GrenadeLauncher" );

		ACCInstancePawn_execEndAiming_GrenadeLauncher_Parms EndAiming_GrenadeLauncher_Parms;

		this->ProcessEvent( pfnEndAiming_GrenadeLauncher, &EndAiming_GrenadeLauncher_Parms, NULL );
	};

	void BeginAiming_GrenadeLauncher ()
	{
		static UFunction* pfnBeginAiming_GrenadeLauncher = NULL;

		if ( !pfnBeginAiming_GrenadeLauncher )
			pfnBeginAiming_GrenadeLauncher = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginAiming_GrenadeLauncher" );

		ACCInstancePawn_execBeginAiming_GrenadeLauncher_Parms BeginAiming_GrenadeLauncher_Parms;

		this->ProcessEvent( pfnBeginAiming_GrenadeLauncher, &BeginAiming_GrenadeLauncher_Parms, NULL );
	};

	void EndAiming_None ()
	{
		static UFunction* pfnEndAiming_None = NULL;

		if ( !pfnEndAiming_None )
			pfnEndAiming_None = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EndAiming_None" );

		ACCInstancePawn_execEndAiming_None_Parms EndAiming_None_Parms;

		this->ProcessEvent( pfnEndAiming_None, &EndAiming_None_Parms, NULL );
	};

	void BeginAiming_None ()
	{
		static UFunction* pfnBeginAiming_None = NULL;

		if ( !pfnBeginAiming_None )
			pfnBeginAiming_None = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BeginAiming_None" );

		ACCInstancePawn_execBeginAiming_None_Parms BeginAiming_None_Parms;

		this->ProcessEvent( pfnBeginAiming_None, &BeginAiming_None_Parms, NULL );
	};

	void SetDepthPriorityGroup ( unsigned char NewDepthPriorityGroup )
	{
		static UFunction* pfnSetDepthPriorityGroup = NULL;

		if ( !pfnSetDepthPriorityGroup )
			pfnSetDepthPriorityGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetDepthPriorityGroup" );

		ACCInstancePawn_execSetDepthPriorityGroup_Parms SetDepthPriorityGroup_Parms;
		SetDepthPriorityGroup_Parms.NewDepthPriorityGroup = NewDepthPriorityGroup;

		this->ProcessEvent( pfnSetDepthPriorityGroup, &SetDepthPriorityGroup_Parms, NULL );
	};

	void CleanDroppedWeapons ()
	{
		static UFunction* pfnCleanDroppedWeapons = NULL;

		if ( !pfnCleanDroppedWeapons )
			pfnCleanDroppedWeapons = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CleanDroppedWeapons" );

		ACCInstancePawn_execCleanDroppedWeapons_Parms CleanDroppedWeapons_Parms;

		this->ProcessEvent( pfnCleanDroppedWeapons, &CleanDroppedWeapons_Parms, NULL );
	};

	void RestoreDroppedWeapons ()
	{
		static UFunction* pfnRestoreDroppedWeapons = NULL;

		if ( !pfnRestoreDroppedWeapons )
			pfnRestoreDroppedWeapons = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.RestoreDroppedWeapons" );

		ACCInstancePawn_execRestoreDroppedWeapons_Parms RestoreDroppedWeapons_Parms;

		this->ProcessEvent( pfnRestoreDroppedWeapons, &RestoreDroppedWeapons_Parms, NULL );
	};

	void DropWeaponsByPhysics ()
	{
		static UFunction* pfnDropWeaponsByPhysics = NULL;

		if ( !pfnDropWeaponsByPhysics )
			pfnDropWeaponsByPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DropWeaponsByPhysics" );

		ACCInstancePawn_execDropWeaponsByPhysics_Parms DropWeaponsByPhysics_Parms;

		this->ProcessEvent( pfnDropWeaponsByPhysics, &DropWeaponsByPhysics_Parms, NULL );
	};

	bool GetIsInRagdollState ()
	{
		static UFunction* pfnGetIsInRagdollState = NULL;

		if ( !pfnGetIsInRagdollState )
			pfnGetIsInRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetIsInRagdollState" );

		ACCInstancePawn_execGetIsInRagdollState_Parms GetIsInRagdollState_Parms;

		this->ProcessEvent( pfnGetIsInRagdollState, &GetIsInRagdollState_Parms, NULL );

		return GetIsInRagdollState_Parms.ReturnValue;
	};

	void RecoveringFromRagdollFinished ()
	{
		static UFunction* pfnRecoveringFromRagdollFinished = NULL;

		if ( !pfnRecoveringFromRagdollFinished )
			pfnRecoveringFromRagdollFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.RecoveringFromRagdollFinished" );

		ACCInstancePawn_execRecoveringFromRagdollFinished_Parms RecoveringFromRagdollFinished_Parms;

		this->ProcessEvent( pfnRecoveringFromRagdollFinished, &RecoveringFromRagdollFinished_Parms, NULL );
	};

	void eventPlayingRecoveryFromRagdollFinished ()
	{
		static UFunction* pfnPlayingRecoveryFromRagdollFinished = NULL;

		if ( !pfnPlayingRecoveryFromRagdollFinished )
			pfnPlayingRecoveryFromRagdollFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayingRecoveryFromRagdollFinished" );

		ACCInstancePawn_eventPlayingRecoveryFromRagdollFinished_Parms PlayingRecoveryFromRagdollFinished_Parms;

		this->ProcessEvent( pfnPlayingRecoveryFromRagdollFinished, &PlayingRecoveryFromRagdollFinished_Parms, NULL );
	};

	bool LeaveRagdollState ()
	{
		static UFunction* pfnLeaveRagdollState = NULL;

		if ( !pfnLeaveRagdollState )
			pfnLeaveRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.LeaveRagdollState" );

		ACCInstancePawn_execLeaveRagdollState_Parms LeaveRagdollState_Parms;

		this->ProcessEvent( pfnLeaveRagdollState, &LeaveRagdollState_Parms, NULL );

		return LeaveRagdollState_Parms.ReturnValue;
	};

	void ServerLeaveRagdollState ()
	{
		static UFunction* pfnServerLeaveRagdollState = NULL;

		if ( !pfnServerLeaveRagdollState )
			pfnServerLeaveRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerLeaveRagdollState" );

		ACCInstancePawn_execServerLeaveRagdollState_Parms ServerLeaveRagdollState_Parms;

		this->ProcessEvent( pfnServerLeaveRagdollState, &ServerLeaveRagdollState_Parms, NULL );
	};

	void ServerReplicateAllowRecoveryFromRagdoll ()
	{
		static UFunction* pfnServerReplicateAllowRecoveryFromRagdoll = NULL;

		if ( !pfnServerReplicateAllowRecoveryFromRagdoll )
			pfnServerReplicateAllowRecoveryFromRagdoll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerReplicateAllowRecoveryFromRagdoll" );

		ACCInstancePawn_execServerReplicateAllowRecoveryFromRagdoll_Parms ServerReplicateAllowRecoveryFromRagdoll_Parms;

		this->ProcessEvent( pfnServerReplicateAllowRecoveryFromRagdoll, &ServerReplicateAllowRecoveryFromRagdoll_Parms, NULL );
	};

	void RagdollDelayTimer ()
	{
		static UFunction* pfnRagdollDelayTimer = NULL;

		if ( !pfnRagdollDelayTimer )
			pfnRagdollDelayTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.RagdollDelayTimer" );

		ACCInstancePawn_execRagdollDelayTimer_Parms RagdollDelayTimer_Parms;

		this->ProcessEvent( pfnRagdollDelayTimer, &RagdollDelayTimer_Parms, NULL );
	};

	void ForceFinishEnteringRagdollState ()
	{
		static UFunction* pfnForceFinishEnteringRagdollState = NULL;

		if ( !pfnForceFinishEnteringRagdollState )
			pfnForceFinishEnteringRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ForceFinishEnteringRagdollState" );

		ACCInstancePawn_execForceFinishEnteringRagdollState_Parms ForceFinishEnteringRagdollState_Parms;

		this->ProcessEvent( pfnForceFinishEnteringRagdollState, &ForceFinishEnteringRagdollState_Parms, NULL );
	};

	void EnteringRagdollStateFinished ()
	{
		static UFunction* pfnEnteringRagdollStateFinished = NULL;

		if ( !pfnEnteringRagdollStateFinished )
			pfnEnteringRagdollStateFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EnteringRagdollStateFinished" );

		ACCInstancePawn_execEnteringRagdollStateFinished_Parms EnteringRagdollStateFinished_Parms;

		this->ProcessEvent( pfnEnteringRagdollStateFinished, &EnteringRagdollStateFinished_Parms, NULL );
	};

	bool EnterRagdollState ( float BlendInTime, struct FTakeHitInfo ImpulseInfo, int Id/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnEnterRagdollState = NULL;

		if ( !pfnEnterRagdollState )
			pfnEnterRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EnterRagdollState" );

		ACCInstancePawn_execEnterRagdollState_Parms EnterRagdollState_Parms;
		EnterRagdollState_Parms.BlendInTime = BlendInTime;
		memcpy( &EnterRagdollState_Parms.ImpulseInfo, &ImpulseInfo, 0x3C );
		EnterRagdollState_Parms.Id = Id;

		this->ProcessEvent( pfnEnterRagdollState, &EnterRagdollState_Parms, NULL );

		return EnterRagdollState_Parms.ReturnValue;
	};

	void ProcessRagdollStateInfoStructReplicated ()
	{
		static UFunction* pfnProcessRagdollStateInfoStructReplicated = NULL;

		if ( !pfnProcessRagdollStateInfoStructReplicated )
			pfnProcessRagdollStateInfoStructReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ProcessRagdollStateInfoStructReplicated" );

		ACCInstancePawn_execProcessRagdollStateInfoStructReplicated_Parms ProcessRagdollStateInfoStructReplicated_Parms;

		this->ProcessEvent( pfnProcessRagdollStateInfoStructReplicated, &ProcessRagdollStateInfoStructReplicated_Parms, NULL );
	};

	void ServerSpawnShotOffGibViaRpc ( void* GibPreset, struct FVector ShotOffMomentum )
	{
		static UFunction* pfnServerSpawnShotOffGibViaRpc = NULL;

		if ( !pfnServerSpawnShotOffGibViaRpc )
			pfnServerSpawnShotOffGibViaRpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSpawnShotOffGibViaRpc" );

		ACCInstancePawn_execServerSpawnShotOffGibViaRpc_Parms ServerSpawnShotOffGibViaRpc_Parms;
		ServerSpawnShotOffGibViaRpc_Parms.GibPreset = GibPreset;
		memcpy( &ServerSpawnShotOffGibViaRpc_Parms.ShotOffMomentum, &ShotOffMomentum, 0xC );

		this->ProcessEvent( pfnServerSpawnShotOffGibViaRpc, &ServerSpawnShotOffGibViaRpc_Parms, NULL );
	};

	void ServerSpawnGibsForEntireBodyViaRpc ( void* GibPreset, struct FVector ExplosionMomentum, float GibsTearOffMomentum, float GibsTearOffMinPitch )
	{
		static UFunction* pfnServerSpawnGibsForEntireBodyViaRpc = NULL;

		if ( !pfnServerSpawnGibsForEntireBodyViaRpc )
			pfnServerSpawnGibsForEntireBodyViaRpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerSpawnGibsForEntireBodyViaRpc" );

		ACCInstancePawn_execServerSpawnGibsForEntireBodyViaRpc_Parms ServerSpawnGibsForEntireBodyViaRpc_Parms;
		ServerSpawnGibsForEntireBodyViaRpc_Parms.GibPreset = GibPreset;
		memcpy( &ServerSpawnGibsForEntireBodyViaRpc_Parms.ExplosionMomentum, &ExplosionMomentum, 0xC );
		ServerSpawnGibsForEntireBodyViaRpc_Parms.GibsTearOffMomentum = GibsTearOffMomentum;
		ServerSpawnGibsForEntireBodyViaRpc_Parms.GibsTearOffMinPitch = GibsTearOffMinPitch;

		this->ProcessEvent( pfnServerSpawnGibsForEntireBodyViaRpc, &ServerSpawnGibsForEntireBodyViaRpc_Parms, NULL );
	};

	void ServerEnterRagdollState ( float BlendInTime, struct FTakeHitInfo ImpulseInfo )
	{
		static UFunction* pfnServerEnterRagdollState = NULL;

		if ( !pfnServerEnterRagdollState )
			pfnServerEnterRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerEnterRagdollState" );

		ACCInstancePawn_execServerEnterRagdollState_Parms ServerEnterRagdollState_Parms;
		ServerEnterRagdollState_Parms.BlendInTime = BlendInTime;
		memcpy( &ServerEnterRagdollState_Parms.ImpulseInfo, &ImpulseInfo, 0x3C );

		this->ProcessEvent( pfnServerEnterRagdollState, &ServerEnterRagdollState_Parms, NULL );
	};

	void ServerEnterRagdollStateViaRpc ( float BlendInTime, struct FTakeHitInfo ImpulseInfo )
	{
		static UFunction* pfnServerEnterRagdollStateViaRpc = NULL;

		if ( !pfnServerEnterRagdollStateViaRpc )
			pfnServerEnterRagdollStateViaRpc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerEnterRagdollStateViaRpc" );

		ACCInstancePawn_execServerEnterRagdollStateViaRpc_Parms ServerEnterRagdollStateViaRpc_Parms;
		ServerEnterRagdollStateViaRpc_Parms.BlendInTime = BlendInTime;
		memcpy( &ServerEnterRagdollStateViaRpc_Parms.ImpulseInfo, &ImpulseInfo, 0x3C );

		this->ProcessEvent( pfnServerEnterRagdollStateViaRpc, &ServerEnterRagdollStateViaRpc_Parms, NULL );
	};

	void SetRagdollBlendTargetWeight ( float DestWeight, float BlendSpeed/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetRagdollBlendTargetWeight = NULL;

		if ( !pfnSetRagdollBlendTargetWeight )
			pfnSetRagdollBlendTargetWeight = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetRagdollBlendTargetWeight" );

		ACCInstancePawn_execSetRagdollBlendTargetWeight_Parms SetRagdollBlendTargetWeight_Parms;
		SetRagdollBlendTargetWeight_Parms.DestWeight = DestWeight;
		SetRagdollBlendTargetWeight_Parms.BlendSpeed = BlendSpeed;

		this->ProcessEvent( pfnSetRagdollBlendTargetWeight, &SetRagdollBlendTargetWeight_Parms, NULL );
	};

	void SpawnDeadBlood ()
	{
		static UFunction* pfnSpawnDeadBlood = NULL;

		if ( !pfnSpawnDeadBlood )
			pfnSpawnDeadBlood = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnDeadBlood" );

		ACCInstancePawn_execSpawnDeadBlood_Parms SpawnDeadBlood_Parms;

		this->ProcessEvent( pfnSpawnDeadBlood, &SpawnDeadBlood_Parms, NULL );
	};

	void InitializeAnimationNodes ()
	{
		static UFunction* pfnInitializeAnimationNodes = NULL;

		if ( !pfnInitializeAnimationNodes )
			pfnInitializeAnimationNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InitializeAnimationNodes" );

		ACCInstancePawn_execInitializeAnimationNodes_Parms InitializeAnimationNodes_Parms;

		this->ProcessEvent( pfnInitializeAnimationNodes, &InitializeAnimationNodes_Parms, NULL );
	};

	void AddDefaultInventory ()
	{
		static UFunction* pfnAddDefaultInventory = NULL;

		if ( !pfnAddDefaultInventory )
			pfnAddDefaultInventory = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AddDefaultInventory" );

		ACCInstancePawn_execAddDefaultInventory_Parms AddDefaultInventory_Parms;

		this->ProcessEvent( pfnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
	};

	void ZeroVelocity ()
	{
		static UFunction* pfnZeroVelocity = NULL;

		if ( !pfnZeroVelocity )
			pfnZeroVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ZeroVelocity" );

		ACCInstancePawn_execZeroVelocity_Parms ZeroVelocity_Parms;

		this->ProcessEvent( pfnZeroVelocity, &ZeroVelocity_Parms, NULL );
	};

	void MovementModeChanged ( unsigned char OldMovementMode )
	{
		static UFunction* pfnMovementModeChanged = NULL;

		if ( !pfnMovementModeChanged )
			pfnMovementModeChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.MovementModeChanged" );

		ACCInstancePawn_execMovementModeChanged_Parms MovementModeChanged_Parms;
		MovementModeChanged_Parms.OldMovementMode = OldMovementMode;

		this->ProcessEvent( pfnMovementModeChanged, &MovementModeChanged_Parms, NULL );
	};

	float eventGetManualVelocityModeSPDModifier ( struct FVector ManualVelocityValue )
	{
		static UFunction* pfnGetManualVelocityModeSPDModifier = NULL;

		if ( !pfnGetManualVelocityModeSPDModifier )
			pfnGetManualVelocityModeSPDModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetManualVelocityModeSPDModifier" );

		ACCInstancePawn_eventGetManualVelocityModeSPDModifier_Parms GetManualVelocityModeSPDModifier_Parms;
		memcpy( &GetManualVelocityModeSPDModifier_Parms.ManualVelocityValue, &ManualVelocityValue, 0xC );

		this->ProcessEvent( pfnGetManualVelocityModeSPDModifier, &GetManualVelocityModeSPDModifier_Parms, NULL );

		return GetManualVelocityModeSPDModifier_Parms.ReturnValue;
	};

	void UpdateMove ()
	{
		static UFunction* pfnUpdateMove = NULL;

		if ( !pfnUpdateMove )
			pfnUpdateMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateMove" );

		ACCInstancePawn_execUpdateMove_Parms UpdateMove_Parms;

		this->ProcessEvent( pfnUpdateMove, &UpdateMove_Parms, NULL );
	};

	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal )
	{
		static UFunction* pfnBump = NULL;

		if ( !pfnBump )
			pfnBump = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Bump" );

		ACCInstancePawn_eventBump_Parms Bump_Parms;
		Bump_Parms.Other = Other;
		Bump_Parms.OtherComp = OtherComp;
		memcpy( &Bump_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnBump, &Bump_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Touch" );

		ACCInstancePawn_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void BreakFromCover ()
	{
		static UFunction* pfnBreakFromCover = NULL;

		if ( !pfnBreakFromCover )
			pfnBreakFromCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BreakFromCover" );

		ACCInstancePawn_execBreakFromCover_Parms BreakFromCover_Parms;

		this->ProcessEvent( pfnBreakFromCover, &BreakFromCover_Parms, NULL );
	};

	void eventMove2IdleTransitionFinished ()
	{
		static UFunction* pfnMove2IdleTransitionFinished = NULL;

		if ( !pfnMove2IdleTransitionFinished )
			pfnMove2IdleTransitionFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Move2IdleTransitionFinished" );

		ACCInstancePawn_eventMove2IdleTransitionFinished_Parms Move2IdleTransitionFinished_Parms;

		this->ProcessEvent( pfnMove2IdleTransitionFinished, &Move2IdleTransitionFinished_Parms, NULL );
	};

	void eventConditionalMove2IdleTransition ()
	{
		static UFunction* pfnConditionalMove2IdleTransition = NULL;

		if ( !pfnConditionalMove2IdleTransition )
			pfnConditionalMove2IdleTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ConditionalMove2IdleTransition" );

		ACCInstancePawn_eventConditionalMove2IdleTransition_Parms ConditionalMove2IdleTransition_Parms;

		this->ProcessEvent( pfnConditionalMove2IdleTransition, &ConditionalMove2IdleTransition_Parms, NULL );
	};

	bool IsDoingMove2IdleTransition ()
	{
		static UFunction* pfnIsDoingMove2IdleTransition = NULL;

		if ( !pfnIsDoingMove2IdleTransition )
			pfnIsDoingMove2IdleTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsDoingMove2IdleTransition" );

		ACCInstancePawn_execIsDoingMove2IdleTransition_Parms IsDoingMove2IdleTransition_Parms;

		pfnIsDoingMove2IdleTransition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsDoingMove2IdleTransition, &IsDoingMove2IdleTransition_Parms, NULL );
		pfnIsDoingMove2IdleTransition->FunctionFlags |= 0x400;

		return IsDoingMove2IdleTransition_Parms.ReturnValue;
	};

	bool IsAtRightEdgeSlot ( float InLimit/*CPF_OptionalParm*/, unsigned long bMustLean/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsAtRightEdgeSlot = NULL;

		if ( !pfnIsAtRightEdgeSlot )
			pfnIsAtRightEdgeSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsAtRightEdgeSlot" );

		ACCInstancePawn_execIsAtRightEdgeSlot_Parms IsAtRightEdgeSlot_Parms;
		IsAtRightEdgeSlot_Parms.InLimit = InLimit;
		IsAtRightEdgeSlot_Parms.bMustLean = bMustLean;

		this->ProcessEvent( pfnIsAtRightEdgeSlot, &IsAtRightEdgeSlot_Parms, NULL );

		return IsAtRightEdgeSlot_Parms.ReturnValue;
	};

	bool IsAtLeftEdgeSlot ( float InLimit/*CPF_OptionalParm*/, unsigned long bMustLean/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsAtLeftEdgeSlot = NULL;

		if ( !pfnIsAtLeftEdgeSlot )
			pfnIsAtLeftEdgeSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsAtLeftEdgeSlot" );

		ACCInstancePawn_execIsAtLeftEdgeSlot_Parms IsAtLeftEdgeSlot_Parms;
		IsAtLeftEdgeSlot_Parms.InLimit = InLimit;
		IsAtLeftEdgeSlot_Parms.bMustLean = bMustLean;

		this->ProcessEvent( pfnIsAtLeftEdgeSlot, &IsAtLeftEdgeSlot_Parms, NULL );

		return IsAtLeftEdgeSlot_Parms.ReturnValue;
	};

	bool CanPrepareRun2Cover ( float CheckDist, struct FVector CheckDir/*CPF_OptionalParm*/, float AcquireCoverFOV/*CPF_OptionalParm*/, struct FCovPosInfo* OutFoundCovInfo )
	{
		static UFunction* pfnCanPrepareRun2Cover = NULL;

		if ( !pfnCanPrepareRun2Cover )
			pfnCanPrepareRun2Cover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CanPrepareRun2Cover" );

		ACCInstancePawn_execCanPrepareRun2Cover_Parms CanPrepareRun2Cover_Parms;
		CanPrepareRun2Cover_Parms.CheckDist = CheckDist;
		memcpy( &CanPrepareRun2Cover_Parms.CheckDir, &CheckDir, 0xC );
		CanPrepareRun2Cover_Parms.AcquireCoverFOV = AcquireCoverFOV;

		this->ProcessEvent( pfnCanPrepareRun2Cover, &CanPrepareRun2Cover_Parms, NULL );

		if ( OutFoundCovInfo )
			memcpy( OutFoundCovInfo, &CanPrepareRun2Cover_Parms.OutFoundCovInfo, 0x34 ); // CPF_OutParm

		return CanPrepareRun2Cover_Parms.ReturnValue;
	};

	void eventEvadeAnimationFinished ()
	{
		static UFunction* pfnEvadeAnimationFinished = NULL;

		if ( !pfnEvadeAnimationFinished )
			pfnEvadeAnimationFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.EvadeAnimationFinished" );

		ACCInstancePawn_eventEvadeAnimationFinished_Parms EvadeAnimationFinished_Parms;

		this->ProcessEvent( pfnEvadeAnimationFinished, &EvadeAnimationFinished_Parms, NULL );
	};

	void PlayEvadeParticleEffect ( struct FRotator SpawnRotation )
	{
		static UFunction* pfnPlayEvadeParticleEffect = NULL;

		if ( !pfnPlayEvadeParticleEffect )
			pfnPlayEvadeParticleEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayEvadeParticleEffect" );

		ACCInstancePawn_execPlayEvadeParticleEffect_Parms PlayEvadeParticleEffect_Parms;
		memcpy( &PlayEvadeParticleEffect_Parms.SpawnRotation, &SpawnRotation, 0xC );

		this->ProcessEvent( pfnPlayEvadeParticleEffect, &PlayEvadeParticleEffect_Parms, NULL );
	};

	void PlayEvadeAnimLandedNotify ()
	{
		static UFunction* pfnPlayEvadeAnimLandedNotify = NULL;

		if ( !pfnPlayEvadeAnimLandedNotify )
			pfnPlayEvadeAnimLandedNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayEvadeAnimLandedNotify" );

		ACCInstancePawn_execPlayEvadeAnimLandedNotify_Parms PlayEvadeAnimLandedNotify_Parms;

		this->ProcessEvent( pfnPlayEvadeAnimLandedNotify, &PlayEvadeAnimLandedNotify_Parms, NULL );
	};

	bool CanEvade ()
	{
		static UFunction* pfnCanEvade = NULL;

		if ( !pfnCanEvade )
			pfnCanEvade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CanEvade" );

		ACCInstancePawn_execCanEvade_Parms CanEvade_Parms;

		this->ProcessEvent( pfnCanEvade, &CanEvade_Parms, NULL );

		return CanEvade_Parms.ReturnValue;
	};

	bool IsEvading ()
	{
		static UFunction* pfnIsEvading = NULL;

		if ( !pfnIsEvading )
			pfnIsEvading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsEvading" );

		ACCInstancePawn_execIsEvading_Parms IsEvading_Parms;

		pfnIsEvading->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsEvading, &IsEvading_Parms, NULL );
		pfnIsEvading->FunctionFlags |= 0x400;

		return IsEvading_Parms.ReturnValue;
	};

	struct FVector GetCoverNormal ( unsigned long bSmoothed/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetCoverNormal = NULL;

		if ( !pfnGetCoverNormal )
			pfnGetCoverNormal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCoverNormal" );

		ACCInstancePawn_execGetCoverNormal_Parms GetCoverNormal_Parms;
		GetCoverNormal_Parms.bSmoothed = bSmoothed;

		this->ProcessEvent( pfnGetCoverNormal, &GetCoverNormal_Parms, NULL );

		return GetCoverNormal_Parms.ReturnValue;
	};

	void FaceRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFaceRotation = NULL;

		if ( !pfnFaceRotation )
			pfnFaceRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FaceRotation" );

		ACCInstancePawn_execFaceRotation_Parms FaceRotation_Parms;
		memcpy( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
		FaceRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFaceRotation, &FaceRotation_Parms, NULL );
	};

	bool CanPerformMantleDown ( float MinMantleHeight, float MaxMantleHeight, struct FRotator TestRotation )
	{
		static UFunction* pfnCanPerformMantleDown = NULL;

		if ( !pfnCanPerformMantleDown )
			pfnCanPerformMantleDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CanPerformMantleDown" );

		ACCInstancePawn_execCanPerformMantleDown_Parms CanPerformMantleDown_Parms;
		CanPerformMantleDown_Parms.MinMantleHeight = MinMantleHeight;
		CanPerformMantleDown_Parms.MaxMantleHeight = MaxMantleHeight;
		memcpy( &CanPerformMantleDown_Parms.TestRotation, &TestRotation, 0xC );

		pfnCanPerformMantleDown->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanPerformMantleDown, &CanPerformMantleDown_Parms, NULL );
		pfnCanPerformMantleDown->FunctionFlags |= 0x400;

		return CanPerformMantleDown_Parms.ReturnValue;
	};

	bool FitCollision ()
	{
		static UFunction* pfnFitCollision = NULL;

		if ( !pfnFitCollision )
			pfnFitCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FitCollision" );

		ACCInstancePawn_execFitCollision_Parms FitCollision_Parms;

		pfnFitCollision->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFitCollision, &FitCollision_Parms, NULL );
		pfnFitCollision->FunctionFlags |= 0x400;

		return FitCollision_Parms.ReturnValue;
	};

	int GetSlotIdxByPct ()
	{
		static UFunction* pfnGetSlotIdxByPct = NULL;

		if ( !pfnGetSlotIdxByPct )
			pfnGetSlotIdxByPct = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetSlotIdxByPct" );

		ACCInstancePawn_execGetSlotIdxByPct_Parms GetSlotIdxByPct_Parms;

		this->ProcessEvent( pfnGetSlotIdxByPct, &GetSlotIdxByPct_Parms, NULL );

		return GetSlotIdxByPct_Parms.ReturnValue;
	};

	void eventReplicatedEventEx ( struct FName VarName, int ArrayIndex )
	{
		static UFunction* pfnReplicatedEventEx = NULL;

		if ( !pfnReplicatedEventEx )
			pfnReplicatedEventEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ReplicatedEventEx" );

		ACCInstancePawn_eventReplicatedEventEx_Parms ReplicatedEventEx_Parms;
		memcpy( &ReplicatedEventEx_Parms.VarName, &VarName, 0x8 );
		ReplicatedEventEx_Parms.ArrayIndex = ArrayIndex;

		this->ProcessEvent( pfnReplicatedEventEx, &ReplicatedEventEx_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ReplicatedEvent" );

		ACCInstancePawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void LeaveCover ()
	{
		static UFunction* pfnLeaveCover = NULL;

		if ( !pfnLeaveCover )
			pfnLeaveCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.LeaveCover" );

		ACCInstancePawn_execLeaveCover_Parms LeaveCover_Parms;

		this->ProcessEvent( pfnLeaveCover, &LeaveCover_Parms, NULL );
	};

	void PlayCoverExitTransition ()
	{
		static UFunction* pfnPlayCoverExitTransition = NULL;

		if ( !pfnPlayCoverExitTransition )
			pfnPlayCoverExitTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayCoverExitTransition" );

		ACCInstancePawn_execPlayCoverExitTransition_Parms PlayCoverExitTransition_Parms;

		this->ProcessEvent( pfnPlayCoverExitTransition, &PlayCoverExitTransition_Parms, NULL );
	};

	void PlayCoverEnterTransition ()
	{
		static UFunction* pfnPlayCoverEnterTransition = NULL;

		if ( !pfnPlayCoverEnterTransition )
			pfnPlayCoverEnterTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayCoverEnterTransition" );

		ACCInstancePawn_execPlayCoverEnterTransition_Parms PlayCoverEnterTransition_Parms;

		this->ProcessEvent( pfnPlayCoverEnterTransition, &PlayCoverEnterTransition_Parms, NULL );
	};

	bool SetCoverInfoFromSlotInfo ( struct FCoverInfo SlotInfo, struct FCovPosInfo* OutCovInfo )
	{
		static UFunction* pfnSetCoverInfoFromSlotInfo = NULL;

		if ( !pfnSetCoverInfoFromSlotInfo )
			pfnSetCoverInfoFromSlotInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCoverInfoFromSlotInfo" );

		ACCInstancePawn_execSetCoverInfoFromSlotInfo_Parms SetCoverInfoFromSlotInfo_Parms;
		memcpy( &SetCoverInfoFromSlotInfo_Parms.SlotInfo, &SlotInfo, 0x8 );

		pfnSetCoverInfoFromSlotInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetCoverInfoFromSlotInfo, &SetCoverInfoFromSlotInfo_Parms, NULL );
		pfnSetCoverInfoFromSlotInfo->FunctionFlags |= 0x400;

		if ( OutCovInfo )
			memcpy( OutCovInfo, &SetCoverInfoFromSlotInfo_Parms.OutCovInfo, 0x34 ); // CPF_OutParm

		return SetCoverInfoFromSlotInfo_Parms.ReturnValue;
	};

	void SetCoverInfo ( void* Link, int SlotIdx, int LeftIdx, int RightIdx, float SlotPct, unsigned long bReplicate )
	{
		static UFunction* pfnSetCoverInfo = NULL;

		if ( !pfnSetCoverInfo )
			pfnSetCoverInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCoverInfo" );

		ACCInstancePawn_execSetCoverInfo_Parms SetCoverInfo_Parms;
		SetCoverInfo_Parms.Link = Link;
		SetCoverInfo_Parms.SlotIdx = SlotIdx;
		SetCoverInfo_Parms.LeftIdx = LeftIdx;
		SetCoverInfo_Parms.RightIdx = RightIdx;
		SetCoverInfo_Parms.SlotPct = SlotPct;
		SetCoverInfo_Parms.bReplicate = bReplicate;

		this->ProcessEvent( pfnSetCoverInfo, &SetCoverInfo_Parms, NULL );
	};

	void SetCovPosInfo ( struct FCovPosInfo CovInfo, unsigned long bReplicate )
	{
		static UFunction* pfnSetCovPosInfo = NULL;

		if ( !pfnSetCovPosInfo )
			pfnSetCovPosInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCovPosInfo" );

		ACCInstancePawn_execSetCovPosInfo_Parms SetCovPosInfo_Parms;
		memcpy( &SetCovPosInfo_Parms.CovInfo, &CovInfo, 0x34 );
		SetCovPosInfo_Parms.bReplicate = bReplicate;

		this->ProcessEvent( pfnSetCovPosInfo, &SetCovPosInfo_Parms, NULL );
	};

	void SetIsCoverMirrored ( unsigned long bValue )
	{
		static UFunction* pfnSetIsCoverMirrored = NULL;

		if ( !pfnSetIsCoverMirrored )
			pfnSetIsCoverMirrored = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetIsCoverMirrored" );

		ACCInstancePawn_execSetIsCoverMirrored_Parms SetIsCoverMirrored_Parms;
		SetIsCoverMirrored_Parms.bValue = bValue;

		this->ProcessEvent( pfnSetIsCoverMirrored, &SetIsCoverMirrored_Parms, NULL );
	};

	void PlayCoverActionSound ()
	{
		static UFunction* pfnPlayCoverActionSound = NULL;

		if ( !pfnPlayCoverActionSound )
			pfnPlayCoverActionSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayCoverActionSound" );

		ACCInstancePawn_execPlayCoverActionSound_Parms PlayCoverActionSound_Parms;

		this->ProcessEvent( pfnPlayCoverActionSound, &PlayCoverActionSound_Parms, NULL );
	};

	void* GetCoverActionSound ( void* PMaterial )
	{
		static UFunction* pfnGetCoverActionSound = NULL;

		if ( !pfnGetCoverActionSound )
			pfnGetCoverActionSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCoverActionSound" );

		ACCInstancePawn_execGetCoverActionSound_Parms GetCoverActionSound_Parms;
		GetCoverActionSound_Parms.PMaterial = PMaterial;

		this->ProcessEvent( pfnGetCoverActionSound, &GetCoverActionSound_Parms, NULL );

		return GetCoverActionSound_Parms.ReturnValue;
	};

	void CoverAcquired ( struct FCovPosInfo CovInfo )
	{
		static UFunction* pfnCoverAcquired = NULL;

		if ( !pfnCoverAcquired )
			pfnCoverAcquired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CoverAcquired" );

		ACCInstancePawn_execCoverAcquired_Parms CoverAcquired_Parms;
		memcpy( &CoverAcquired_Parms.CovInfo, &CovInfo, 0x34 );

		this->ProcessEvent( pfnCoverAcquired, &CoverAcquired_Parms, NULL );
	};

	struct FCovPosInfo CoverInfoToCovPosInfo ( struct FCoverInfo CovInfo )
	{
		static UFunction* pfnCoverInfoToCovPosInfo = NULL;

		if ( !pfnCoverInfoToCovPosInfo )
			pfnCoverInfoToCovPosInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CoverInfoToCovPosInfo" );

		ACCInstancePawn_execCoverInfoToCovPosInfo_Parms CoverInfoToCovPosInfo_Parms;
		memcpy( &CoverInfoToCovPosInfo_Parms.CovInfo, &CovInfo, 0x8 );

		this->ProcessEvent( pfnCoverInfoToCovPosInfo, &CoverInfoToCovPosInfo_Parms, NULL );

		return CoverInfoToCovPosInfo_Parms.ReturnValue;
	};

	void DumpCoverInfo ( struct FCovPosInfo CovInfo )
	{
		static UFunction* pfnDumpCoverInfo = NULL;

		if ( !pfnDumpCoverInfo )
			pfnDumpCoverInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DumpCoverInfo" );

		ACCInstancePawn_execDumpCoverInfo_Parms DumpCoverInfo_Parms;
		memcpy( &DumpCoverInfo_Parms.CovInfo, &CovInfo, 0x34 );

		this->ProcessEvent( pfnDumpCoverInfo, &DumpCoverInfo_Parms, NULL );
	};

	bool IsOnACoverSlot ()
	{
		static UFunction* pfnIsOnACoverSlot = NULL;

		if ( !pfnIsOnACoverSlot )
			pfnIsOnACoverSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsOnACoverSlot" );

		ACCInstancePawn_execIsOnACoverSlot_Parms IsOnACoverSlot_Parms;

		this->ProcessEvent( pfnIsOnACoverSlot, &IsOnACoverSlot_Parms, NULL );

		return IsOnACoverSlot_Parms.ReturnValue;
	};

	void eventReachedCoverSlot ( int SlotIdx )
	{
		static UFunction* pfnReachedCoverSlot = NULL;

		if ( !pfnReachedCoverSlot )
			pfnReachedCoverSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ReachedCoverSlot" );

		ACCInstancePawn_eventReachedCoverSlot_Parms ReachedCoverSlot_Parms;
		ReachedCoverSlot_Parms.SlotIdx = SlotIdx;

		this->ProcessEvent( pfnReachedCoverSlot, &ReachedCoverSlot_Parms, NULL );
	};

	unsigned char FindBestCoverSideFor ( struct FCovPosInfo CovInfo )
	{
		static UFunction* pfnFindBestCoverSideFor = NULL;

		if ( !pfnFindBestCoverSideFor )
			pfnFindBestCoverSideFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindBestCoverSideFor" );

		ACCInstancePawn_execFindBestCoverSideFor_Parms FindBestCoverSideFor_Parms;
		memcpy( &FindBestCoverSideFor_Parms.CovInfo, &CovInfo, 0x34 );

		this->ProcessEvent( pfnFindBestCoverSideFor, &FindBestCoverSideFor_Parms, NULL );

		return FindBestCoverSideFor_Parms.ReturnValue;
	};

	unsigned char GetCoverTypeFor ( struct FCovPosInfo Cover )
	{
		static UFunction* pfnGetCoverTypeFor = NULL;

		if ( !pfnGetCoverTypeFor )
			pfnGetCoverTypeFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCoverTypeFor" );

		ACCInstancePawn_execGetCoverTypeFor_Parms GetCoverTypeFor_Parms;
		memcpy( &GetCoverTypeFor_Parms.Cover, &Cover, 0x34 );

		this->ProcessEvent( pfnGetCoverTypeFor, &GetCoverTypeFor_Parms, NULL );

		return GetCoverTypeFor_Parms.ReturnValue;
	};

	unsigned char FindCoverType ()
	{
		static UFunction* pfnFindCoverType = NULL;

		if ( !pfnFindCoverType )
			pfnFindCoverType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindCoverType" );

		ACCInstancePawn_execFindCoverType_Parms FindCoverType_Parms;

		this->ProcessEvent( pfnFindCoverType, &FindCoverType_Parms, NULL );

		return FindCoverType_Parms.ReturnValue;
	};

	void SetCurrentCoverType ( unsigned long bClear/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetCurrentCoverType = NULL;

		if ( !pfnSetCurrentCoverType )
			pfnSetCurrentCoverType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetCurrentCoverType" );

		ACCInstancePawn_execSetCurrentCoverType_Parms SetCurrentCoverType_Parms;
		SetCurrentCoverType_Parms.bClear = bClear;

		this->ProcessEvent( pfnSetCurrentCoverType, &SetCurrentCoverType_Parms, NULL );
	};

	void CanPawnGetInToCover ()
	{
		static UFunction* pfnCanPawnGetInToCover = NULL;

		if ( !pfnCanPawnGetInToCover )
			pfnCanPawnGetInToCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CanPawnGetInToCover" );

		ACCInstancePawn_execCanPawnGetInToCover_Parms CanPawnGetInToCover_Parms;

		this->ProcessEvent( pfnCanPawnGetInToCover, &CanPawnGetInToCover_Parms, NULL );
	};

	void MovePawnIntoCover ()
	{
		static UFunction* pfnMovePawnIntoCover = NULL;

		if ( !pfnMovePawnIntoCover )
			pfnMovePawnIntoCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.MovePawnIntoCover" );

		ACCInstancePawn_execMovePawnIntoCover_Parms MovePawnIntoCover_Parms;

		this->ProcessEvent( pfnMovePawnIntoCover, &MovePawnIntoCover_Parms, NULL );
	};

	void NotifyPlaceableItems ()
	{
		static UFunction* pfnNotifyPlaceableItems = NULL;

		if ( !pfnNotifyPlaceableItems )
			pfnNotifyPlaceableItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.NotifyPlaceableItems" );

		ACCInstancePawn_execNotifyPlaceableItems_Parms NotifyPlaceableItems_Parms;

		this->ProcessEvent( pfnNotifyPlaceableItems, &NotifyPlaceableItems_Parms, NULL );
	};

	void ResetAllStuff ()
	{
		static UFunction* pfnResetAllStuff = NULL;

		if ( !pfnResetAllStuff )
			pfnResetAllStuff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ResetAllStuff" );

		ACCInstancePawn_execResetAllStuff_Parms ResetAllStuff_Parms;

		this->ProcessEvent( pfnResetAllStuff, &ResetAllStuff_Parms, NULL );
	};

	void Restart ()
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Restart" );

		ACCInstancePawn_execRestart_Parms Restart_Parms;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	void UpdateWeaponAttachmentIds ()
	{
		static UFunction* pfnUpdateWeaponAttachmentIds = NULL;

		if ( !pfnUpdateWeaponAttachmentIds )
			pfnUpdateWeaponAttachmentIds = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeaponAttachmentIds" );

		ACCInstancePawn_execUpdateWeaponAttachmentIds_Parms UpdateWeaponAttachmentIds_Parms;

		this->ProcessEvent( pfnUpdateWeaponAttachmentIds, &UpdateWeaponAttachmentIds_Parms, NULL );
	};

	void ClientSpawnSpeedModifierSystem ()
	{
		static UFunction* pfnClientSpawnSpeedModifierSystem = NULL;

		if ( !pfnClientSpawnSpeedModifierSystem )
			pfnClientSpawnSpeedModifierSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClientSpawnSpeedModifierSystem" );

		ACCInstancePawn_execClientSpawnSpeedModifierSystem_Parms ClientSpawnSpeedModifierSystem_Parms;

		this->ProcessEvent( pfnClientSpawnSpeedModifierSystem, &ClientSpawnSpeedModifierSystem_Parms, NULL );
	};

	void SpawnSpeedModifierSystem ()
	{
		static UFunction* pfnSpawnSpeedModifierSystem = NULL;

		if ( !pfnSpawnSpeedModifierSystem )
			pfnSpawnSpeedModifierSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SpawnSpeedModifierSystem" );

		ACCInstancePawn_execSpawnSpeedModifierSystem_Parms SpawnSpeedModifierSystem_Parms;

		this->ProcessEvent( pfnSpawnSpeedModifierSystem, &SpawnSpeedModifierSystem_Parms, NULL );
	};

	void PossessedBy ( class AController* C, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossessedBy = NULL;

		if ( !pfnPossessedBy )
			pfnPossessedBy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PossessedBy" );

		ACCInstancePawn_execPossessedBy_Parms PossessedBy_Parms;
		PossessedBy_Parms.C = C;
		PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossessedBy, &PossessedBy_Parms, NULL );
	};

	void ClientReInitEM ( class AController* C )
	{
		static UFunction* pfnClientReInitEM = NULL;

		if ( !pfnClientReInitEM )
			pfnClientReInitEM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClientReInitEM" );

		ACCInstancePawn_execClientReInitEM_Parms ClientReInitEM_Parms;
		ClientReInitEM_Parms.C = C;

		this->ProcessEvent( pfnClientReInitEM, &ClientReInitEM_Parms, NULL );
	};

	void ClientUpdateHUD ()
	{
		static UFunction* pfnClientUpdateHUD = NULL;

		if ( !pfnClientUpdateHUD )
			pfnClientUpdateHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ClientUpdateHUD" );

		ACCInstancePawn_execClientUpdateHUD_Parms ClientUpdateHUD_Parms;

		this->ProcessEvent( pfnClientUpdateHUD, &ClientUpdateHUD_Parms, NULL );
	};

	int WeaponTypeToID ( unsigned char WeaponType )
	{
		static UFunction* pfnWeaponTypeToID = NULL;

		if ( !pfnWeaponTypeToID )
			pfnWeaponTypeToID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.WeaponTypeToID" );

		ACCInstancePawn_execWeaponTypeToID_Parms WeaponTypeToID_Parms;
		WeaponTypeToID_Parms.WeaponType = WeaponType;

		this->ProcessEvent( pfnWeaponTypeToID, &WeaponTypeToID_Parms, NULL );

		return WeaponTypeToID_Parms.ReturnValue;
	};

	void SetDuplicatedWeaponAttachmentState ( unsigned char NewState )
	{
		static UFunction* pfnSetDuplicatedWeaponAttachmentState = NULL;

		if ( !pfnSetDuplicatedWeaponAttachmentState )
			pfnSetDuplicatedWeaponAttachmentState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetDuplicatedWeaponAttachmentState" );

		ACCInstancePawn_execSetDuplicatedWeaponAttachmentState_Parms SetDuplicatedWeaponAttachmentState_Parms;
		SetDuplicatedWeaponAttachmentState_Parms.NewState = NewState;

		this->ProcessEvent( pfnSetDuplicatedWeaponAttachmentState, &SetDuplicatedWeaponAttachmentState_Parms, NULL );
	};

	float eventGetWeaponAttachmentHideTime ()
	{
		static UFunction* pfnGetWeaponAttachmentHideTime = NULL;

		if ( !pfnGetWeaponAttachmentHideTime )
			pfnGetWeaponAttachmentHideTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponAttachmentHideTime" );

		ACCInstancePawn_eventGetWeaponAttachmentHideTime_Parms GetWeaponAttachmentHideTime_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentHideTime, &GetWeaponAttachmentHideTime_Parms, NULL );

		return GetWeaponAttachmentHideTime_Parms.ReturnValue;
	};

	float eventGetWeaponAttachmentEquipTime ()
	{
		static UFunction* pfnGetWeaponAttachmentEquipTime = NULL;

		if ( !pfnGetWeaponAttachmentEquipTime )
			pfnGetWeaponAttachmentEquipTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponAttachmentEquipTime" );

		ACCInstancePawn_eventGetWeaponAttachmentEquipTime_Parms GetWeaponAttachmentEquipTime_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentEquipTime, &GetWeaponAttachmentEquipTime_Parms, NULL );

		return GetWeaponAttachmentEquipTime_Parms.ReturnValue;
	};

	unsigned char eventGetWeaponAttachmentState ()
	{
		static UFunction* pfnGetWeaponAttachmentState = NULL;

		if ( !pfnGetWeaponAttachmentState )
			pfnGetWeaponAttachmentState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponAttachmentState" );

		ACCInstancePawn_eventGetWeaponAttachmentState_Parms GetWeaponAttachmentState_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentState, &GetWeaponAttachmentState_Parms, NULL );

		return GetWeaponAttachmentState_Parms.ReturnValue;
	};

	void UpdateAttachedWeapons ()
	{
		static UFunction* pfnUpdateAttachedWeapons = NULL;

		if ( !pfnUpdateAttachedWeapons )
			pfnUpdateAttachedWeapons = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateAttachedWeapons" );

		ACCInstancePawn_execUpdateAttachedWeapons_Parms UpdateAttachedWeapons_Parms;

		this->ProcessEvent( pfnUpdateAttachedWeapons, &UpdateAttachedWeapons_Parms, NULL );
	};

	void ReceiveReplicatedReplicatedVisualCarrySlotInfoStruct ( unsigned long bForceApply )
	{
		static UFunction* pfnReceiveReplicatedReplicatedVisualCarrySlotInfoStruct = NULL;

		if ( !pfnReceiveReplicatedReplicatedVisualCarrySlotInfoStruct )
			pfnReceiveReplicatedReplicatedVisualCarrySlotInfoStruct = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ReceiveReplicatedReplicatedVisualCarrySlotInfoStruct" );

		ACCInstancePawn_execReceiveReplicatedReplicatedVisualCarrySlotInfoStruct_Parms ReceiveReplicatedReplicatedVisualCarrySlotInfoStruct_Parms;
		ReceiveReplicatedReplicatedVisualCarrySlotInfoStruct_Parms.bForceApply = bForceApply;

		this->ProcessEvent( pfnReceiveReplicatedReplicatedVisualCarrySlotInfoStruct, &ReceiveReplicatedReplicatedVisualCarrySlotInfoStruct_Parms, NULL );
	};

	void SetActiveVisualCarrySlot ( unsigned char Slot )
	{
		static UFunction* pfnSetActiveVisualCarrySlot = NULL;

		if ( !pfnSetActiveVisualCarrySlot )
			pfnSetActiveVisualCarrySlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.SetActiveVisualCarrySlot" );

		ACCInstancePawn_execSetActiveVisualCarrySlot_Parms SetActiveVisualCarrySlot_Parms;
		SetActiveVisualCarrySlot_Parms.Slot = Slot;

		this->ProcessEvent( pfnSetActiveVisualCarrySlot, &SetActiveVisualCarrySlot_Parms, NULL );
	};

	void UpdateReplicatedVisualCarrySlotInfoStruct ()
	{
		static UFunction* pfnUpdateReplicatedVisualCarrySlotInfoStruct = NULL;

		if ( !pfnUpdateReplicatedVisualCarrySlotInfoStruct )
			pfnUpdateReplicatedVisualCarrySlotInfoStruct = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateReplicatedVisualCarrySlotInfoStruct" );

		ACCInstancePawn_execUpdateReplicatedVisualCarrySlotInfoStruct_Parms UpdateReplicatedVisualCarrySlotInfoStruct_Parms;

		this->ProcessEvent( pfnUpdateReplicatedVisualCarrySlotInfoStruct, &UpdateReplicatedVisualCarrySlotInfoStruct_Parms, NULL );
	};

	unsigned char GetActiveVisualCarrySlot ()
	{
		static UFunction* pfnGetActiveVisualCarrySlot = NULL;

		if ( !pfnGetActiveVisualCarrySlot )
			pfnGetActiveVisualCarrySlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetActiveVisualCarrySlot" );

		ACCInstancePawn_execGetActiveVisualCarrySlot_Parms GetActiveVisualCarrySlot_Parms;

		pfnGetActiveVisualCarrySlot->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetActiveVisualCarrySlot, &GetActiveVisualCarrySlot_Parms, NULL );
		pfnGetActiveVisualCarrySlot->FunctionFlags |= 0x400;

		return GetActiveVisualCarrySlot_Parms.ReturnValue;
	};

	void ShowAllWeaponCarrySlots ()
	{
		static UFunction* pfnShowAllWeaponCarrySlots = NULL;

		if ( !pfnShowAllWeaponCarrySlots )
			pfnShowAllWeaponCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ShowAllWeaponCarrySlots" );

		ACCInstancePawn_execShowAllWeaponCarrySlots_Parms ShowAllWeaponCarrySlots_Parms;

		this->ProcessEvent( pfnShowAllWeaponCarrySlots, &ShowAllWeaponCarrySlots_Parms, NULL );
	};

	void HideAllWeaponCarrySlots ()
	{
		static UFunction* pfnHideAllWeaponCarrySlots = NULL;

		if ( !pfnHideAllWeaponCarrySlots )
			pfnHideAllWeaponCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.HideAllWeaponCarrySlots" );

		ACCInstancePawn_execHideAllWeaponCarrySlots_Parms HideAllWeaponCarrySlots_Parms;

		this->ProcessEvent( pfnHideAllWeaponCarrySlots, &HideAllWeaponCarrySlots_Parms, NULL );
	};

	int GetWeaponCarrySlotRBDescIndexFor ( int CarrySlotIndex, int WeaponIdx )
	{
		static UFunction* pfnGetWeaponCarrySlotRBDescIndexFor = NULL;

		if ( !pfnGetWeaponCarrySlotRBDescIndexFor )
			pfnGetWeaponCarrySlotRBDescIndexFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponCarrySlotRBDescIndexFor" );

		ACCInstancePawn_execGetWeaponCarrySlotRBDescIndexFor_Parms GetWeaponCarrySlotRBDescIndexFor_Parms;
		GetWeaponCarrySlotRBDescIndexFor_Parms.CarrySlotIndex = CarrySlotIndex;
		GetWeaponCarrySlotRBDescIndexFor_Parms.WeaponIdx = WeaponIdx;

		this->ProcessEvent( pfnGetWeaponCarrySlotRBDescIndexFor, &GetWeaponCarrySlotRBDescIndexFor_Parms, NULL );

		return GetWeaponCarrySlotRBDescIndexFor_Parms.ReturnValue;
	};

	void UpdateWeaponCarrySlotsRB ( int CarrySlotIndex, int WeaponIdx, unsigned long bSlotEmpty )
	{
		static UFunction* pfnUpdateWeaponCarrySlotsRB = NULL;

		if ( !pfnUpdateWeaponCarrySlotsRB )
			pfnUpdateWeaponCarrySlotsRB = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeaponCarrySlotsRB" );

		ACCInstancePawn_execUpdateWeaponCarrySlotsRB_Parms UpdateWeaponCarrySlotsRB_Parms;
		UpdateWeaponCarrySlotsRB_Parms.CarrySlotIndex = CarrySlotIndex;
		UpdateWeaponCarrySlotsRB_Parms.WeaponIdx = WeaponIdx;
		UpdateWeaponCarrySlotsRB_Parms.bSlotEmpty = bSlotEmpty;

		this->ProcessEvent( pfnUpdateWeaponCarrySlotsRB, &UpdateWeaponCarrySlotsRB_Parms, NULL );
	};

	void InitializeWeaponCarrySlotsRB ( int CarrySlotIndex, int WeaponIdx )
	{
		static UFunction* pfnInitializeWeaponCarrySlotsRB = NULL;

		if ( !pfnInitializeWeaponCarrySlotsRB )
			pfnInitializeWeaponCarrySlotsRB = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InitializeWeaponCarrySlotsRB" );

		ACCInstancePawn_execInitializeWeaponCarrySlotsRB_Parms InitializeWeaponCarrySlotsRB_Parms;
		InitializeWeaponCarrySlotsRB_Parms.CarrySlotIndex = CarrySlotIndex;
		InitializeWeaponCarrySlotsRB_Parms.WeaponIdx = WeaponIdx;

		this->ProcessEvent( pfnInitializeWeaponCarrySlotsRB, &InitializeWeaponCarrySlotsRB_Parms, NULL );
	};

	void AttachWeaponToCarrySlotSocket ( class USkeletalMeshComponent* WpnMesh, struct FName SocketName )
	{
		static UFunction* pfnAttachWeaponToCarrySlotSocket = NULL;

		if ( !pfnAttachWeaponToCarrySlotSocket )
			pfnAttachWeaponToCarrySlotSocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.AttachWeaponToCarrySlotSocket" );

		ACCInstancePawn_execAttachWeaponToCarrySlotSocket_Parms AttachWeaponToCarrySlotSocket_Parms;
		AttachWeaponToCarrySlotSocket_Parms.WpnMesh = WpnMesh;
		memcpy( &AttachWeaponToCarrySlotSocket_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnAttachWeaponToCarrySlotSocket, &AttachWeaponToCarrySlotSocket_Parms, NULL );
	};

	void UpdateWeaponCarrySlots ()
	{
		static UFunction* pfnUpdateWeaponCarrySlots = NULL;

		if ( !pfnUpdateWeaponCarrySlots )
			pfnUpdateWeaponCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateWeaponCarrySlots" );

		ACCInstancePawn_execUpdateWeaponCarrySlots_Parms UpdateWeaponCarrySlots_Parms;

		this->ProcessEvent( pfnUpdateWeaponCarrySlots, &UpdateWeaponCarrySlots_Parms, NULL );
	};

	void InitializeWeaponCarrySlots ()
	{
		static UFunction* pfnInitializeWeaponCarrySlots = NULL;

		if ( !pfnInitializeWeaponCarrySlots )
			pfnInitializeWeaponCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InitializeWeaponCarrySlots" );

		ACCInstancePawn_execInitializeWeaponCarrySlots_Parms InitializeWeaponCarrySlots_Parms;

		this->ProcessEvent( pfnInitializeWeaponCarrySlots, &InitializeWeaponCarrySlots_Parms, NULL );
	};

	void CleanUpWeaponCarrySlots ()
	{
		static UFunction* pfnCleanUpWeaponCarrySlots = NULL;

		if ( !pfnCleanUpWeaponCarrySlots )
			pfnCleanUpWeaponCarrySlots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CleanUpWeaponCarrySlots" );

		ACCInstancePawn_execCleanUpWeaponCarrySlots_Parms CleanUpWeaponCarrySlots_Parms;

		this->ProcessEvent( pfnCleanUpWeaponCarrySlots, &CleanUpWeaponCarrySlots_Parms, NULL );
	};

	struct FWeaponAttachesArray GetWAAttachesFor ( int CarrySlotIndex )
	{
		static UFunction* pfnGetWAAttachesFor = NULL;

		if ( !pfnGetWAAttachesFor )
			pfnGetWAAttachesFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWAAttachesFor" );

		ACCInstancePawn_execGetWAAttachesFor_Parms GetWAAttachesFor_Parms;
		GetWAAttachesFor_Parms.CarrySlotIndex = CarrySlotIndex;

		this->ProcessEvent( pfnGetWAAttachesFor, &GetWAAttachesFor_Parms, NULL );

		return GetWAAttachesFor_Parms.ReturnValue;
	};

	void* GetWAPresetFor ( int CarrySlotIndex, int WeaponIndex )
	{
		static UFunction* pfnGetWAPresetFor = NULL;

		if ( !pfnGetWAPresetFor )
			pfnGetWAPresetFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWAPresetFor" );

		ACCInstancePawn_execGetWAPresetFor_Parms GetWAPresetFor_Parms;
		GetWAPresetFor_Parms.CarrySlotIndex = CarrySlotIndex;
		GetWAPresetFor_Parms.WeaponIndex = WeaponIndex;

		this->ProcessEvent( pfnGetWAPresetFor, &GetWAPresetFor_Parms, NULL );

		return GetWAPresetFor_Parms.ReturnValue;
	};

	struct FString GetWAIDFor ( int CarrySlotIndex, int WeaponIndex )
	{
		static UFunction* pfnGetWAIDFor = NULL;

		if ( !pfnGetWAIDFor )
			pfnGetWAIDFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWAIDFor" );

		ACCInstancePawn_execGetWAIDFor_Parms GetWAIDFor_Parms;
		GetWAIDFor_Parms.CarrySlotIndex = CarrySlotIndex;
		GetWAIDFor_Parms.WeaponIndex = WeaponIndex;

		this->ProcessEvent( pfnGetWAIDFor, &GetWAIDFor_Parms, NULL );

		return GetWAIDFor_Parms.ReturnValue;
	};

	void PlayItemPacksSound ( void* Sound )
	{
		static UFunction* pfnPlayItemPacksSound = NULL;

		if ( !pfnPlayItemPacksSound )
			pfnPlayItemPacksSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayItemPacksSound" );

		ACCInstancePawn_execPlayItemPacksSound_Parms PlayItemPacksSound_Parms;
		PlayItemPacksSound_Parms.Sound = Sound;

		this->ProcessEvent( pfnPlayItemPacksSound, &PlayItemPacksSound_Parms, NULL );
	};

	void PlaceItem_ToggleDrawSphere ()
	{
		static UFunction* pfnPlaceItem_ToggleDrawSphere = NULL;

		if ( !pfnPlaceItem_ToggleDrawSphere )
			pfnPlaceItem_ToggleDrawSphere = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_ToggleDrawSphere" );

		ACCInstancePawn_execPlaceItem_ToggleDrawSphere_Parms PlaceItem_ToggleDrawSphere_Parms;

		this->ProcessEvent( pfnPlaceItem_ToggleDrawSphere, &PlaceItem_ToggleDrawSphere_Parms, NULL );
	};

	void PlaceItem_EndPlacing ( void* Ability )
	{
		static UFunction* pfnPlaceItem_EndPlacing = NULL;

		if ( !pfnPlaceItem_EndPlacing )
			pfnPlaceItem_EndPlacing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_EndPlacing" );

		ACCInstancePawn_execPlaceItem_EndPlacing_Parms PlaceItem_EndPlacing_Parms;
		PlaceItem_EndPlacing_Parms.Ability = Ability;

		this->ProcessEvent( pfnPlaceItem_EndPlacing, &PlaceItem_EndPlacing_Parms, NULL );
	};

	void PlaceItem_BeginPlacing ()
	{
		static UFunction* pfnPlaceItem_BeginPlacing = NULL;

		if ( !pfnPlaceItem_BeginPlacing )
			pfnPlaceItem_BeginPlacing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_BeginPlacing" );

		ACCInstancePawn_execPlaceItem_BeginPlacing_Parms PlaceItem_BeginPlacing_Parms;

		this->ProcessEvent( pfnPlaceItem_BeginPlacing, &PlaceItem_BeginPlacing_Parms, NULL );
	};

	void Client_PlaceItem_EndSearch ()
	{
		static UFunction* pfnClient_PlaceItem_EndSearch = NULL;

		if ( !pfnClient_PlaceItem_EndSearch )
			pfnClient_PlaceItem_EndSearch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Client_PlaceItem_EndSearch" );

		ACCInstancePawn_execClient_PlaceItem_EndSearch_Parms Client_PlaceItem_EndSearch_Parms;

		this->ProcessEvent( pfnClient_PlaceItem_EndSearch, &Client_PlaceItem_EndSearch_Parms, NULL );
	};

	void PlaceItem_EndSearch ()
	{
		static UFunction* pfnPlaceItem_EndSearch = NULL;

		if ( !pfnPlaceItem_EndSearch )
			pfnPlaceItem_EndSearch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_EndSearch" );

		ACCInstancePawn_execPlaceItem_EndSearch_Parms PlaceItem_EndSearch_Parms;

		this->ProcessEvent( pfnPlaceItem_EndSearch, &PlaceItem_EndSearch_Parms, NULL );
	};

	void PlaceItem_Searching_EndDrawing ()
	{
		static UFunction* pfnPlaceItem_Searching_EndDrawing = NULL;

		if ( !pfnPlaceItem_Searching_EndDrawing )
			pfnPlaceItem_Searching_EndDrawing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_Searching_EndDrawing" );

		ACCInstancePawn_execPlaceItem_Searching_EndDrawing_Parms PlaceItem_Searching_EndDrawing_Parms;

		this->ProcessEvent( pfnPlaceItem_Searching_EndDrawing, &PlaceItem_Searching_EndDrawing_Parms, NULL );
	};

	void PlaceItem_Searching_Draw ()
	{
		static UFunction* pfnPlaceItem_Searching_Draw = NULL;

		if ( !pfnPlaceItem_Searching_Draw )
			pfnPlaceItem_Searching_Draw = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_Searching_Draw" );

		ACCInstancePawn_execPlaceItem_Searching_Draw_Parms PlaceItem_Searching_Draw_Parms;

		this->ProcessEvent( pfnPlaceItem_Searching_Draw, &PlaceItem_Searching_Draw_Parms, NULL );
	};

	void PlaceItem_Searching_BeginDrawing ()
	{
		static UFunction* pfnPlaceItem_Searching_BeginDrawing = NULL;

		if ( !pfnPlaceItem_Searching_BeginDrawing )
			pfnPlaceItem_Searching_BeginDrawing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_Searching_BeginDrawing" );

		ACCInstancePawn_execPlaceItem_Searching_BeginDrawing_Parms PlaceItem_Searching_BeginDrawing_Parms;

		this->ProcessEvent( pfnPlaceItem_Searching_BeginDrawing, &PlaceItem_Searching_BeginDrawing_Parms, NULL );
	};

	void Client_PlaceItem_BeginSearch ()
	{
		static UFunction* pfnClient_PlaceItem_BeginSearch = NULL;

		if ( !pfnClient_PlaceItem_BeginSearch )
			pfnClient_PlaceItem_BeginSearch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.Client_PlaceItem_BeginSearch" );

		ACCInstancePawn_execClient_PlaceItem_BeginSearch_Parms Client_PlaceItem_BeginSearch_Parms;

		this->ProcessEvent( pfnClient_PlaceItem_BeginSearch, &Client_PlaceItem_BeginSearch_Parms, NULL );
	};

	void PlaceItem_BeginSearch ( struct FPlacingItemInfo Info )
	{
		static UFunction* pfnPlaceItem_BeginSearch = NULL;

		if ( !pfnPlaceItem_BeginSearch )
			pfnPlaceItem_BeginSearch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlaceItem_BeginSearch" );

		ACCInstancePawn_execPlaceItem_BeginSearch_Parms PlaceItem_BeginSearch_Parms;
		memcpy( &PlaceItem_BeginSearch_Parms.Info, &Info, 0x20 );

		this->ProcessEvent( pfnPlaceItem_BeginSearch, &PlaceItem_BeginSearch_Parms, NULL );
	};

	bool CanPlaceItem ( class ACCPlaceableItem* ItemArchetype, struct FVector* PlaceLoc, struct FRotator* PlaceRot )
	{
		static UFunction* pfnCanPlaceItem = NULL;

		if ( !pfnCanPlaceItem )
			pfnCanPlaceItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CanPlaceItem" );

		ACCInstancePawn_execCanPlaceItem_Parms CanPlaceItem_Parms;
		CanPlaceItem_Parms.ItemArchetype = ItemArchetype;

		pfnCanPlaceItem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanPlaceItem, &CanPlaceItem_Parms, NULL );
		pfnCanPlaceItem->FunctionFlags |= 0x400;

		if ( PlaceLoc )
			memcpy( PlaceLoc, &CanPlaceItem_Parms.PlaceLoc, 0xC ); // CPF_OutParm
		if ( PlaceRot )
			memcpy( PlaceRot, &CanPlaceItem_Parms.PlaceRot, 0xC ); // CPF_OutParm

		return CanPlaceItem_Parms.ReturnValue;
	};

	void eventOnCreateCharacterComponent ()
	{
		static UFunction* pfnOnCreateCharacterComponent = NULL;

		if ( !pfnOnCreateCharacterComponent )
			pfnOnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.OnCreateCharacterComponent" );

		ACCInstancePawn_eventOnCreateCharacterComponent_Parms OnCreateCharacterComponent_Parms;

		this->ProcessEvent( pfnOnCreateCharacterComponent, &OnCreateCharacterComponent_Parms, NULL );
	};

	void UpdateServerHeadPos ()
	{
		static UFunction* pfnUpdateServerHeadPos = NULL;

		if ( !pfnUpdateServerHeadPos )
			pfnUpdateServerHeadPos = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateServerHeadPos" );

		ACCInstancePawn_execUpdateServerHeadPos_Parms UpdateServerHeadPos_Parms;

		this->ProcessEvent( pfnUpdateServerHeadPos, &UpdateServerHeadPos_Parms, NULL );
	};

	void ServerUpdateServerHeadPos ( struct FVector HeadPos )
	{
		static UFunction* pfnServerUpdateServerHeadPos = NULL;

		if ( !pfnServerUpdateServerHeadPos )
			pfnServerUpdateServerHeadPos = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ServerUpdateServerHeadPos" );

		ACCInstancePawn_execServerUpdateServerHeadPos_Parms ServerUpdateServerHeadPos_Parms;
		memcpy( &ServerUpdateServerHeadPos_Parms.HeadPos, &HeadPos, 0xC );

		this->ProcessEvent( pfnServerUpdateServerHeadPos, &ServerUpdateServerHeadPos_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PostBeginPlay" );

		ACCInstancePawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void DestroyWeaponAttachment ()
	{
		static UFunction* pfnDestroyWeaponAttachment = NULL;

		if ( !pfnDestroyWeaponAttachment )
			pfnDestroyWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DestroyWeaponAttachment" );

		ACCInstancePawn_execDestroyWeaponAttachment_Parms DestroyWeaponAttachment_Parms;

		this->ProcessEvent( pfnDestroyWeaponAttachment, &DestroyWeaponAttachment_Parms, NULL );
	};

	void CreateWeaponAttachment ()
	{
		static UFunction* pfnCreateWeaponAttachment = NULL;

		if ( !pfnCreateWeaponAttachment )
			pfnCreateWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CreateWeaponAttachment" );

		ACCInstancePawn_execCreateWeaponAttachment_Parms CreateWeaponAttachment_Parms;

		this->ProcessEvent( pfnCreateWeaponAttachment, &CreateWeaponAttachment_Parms, NULL );
	};

	void DisableReplication ()
	{
		static UFunction* pfnDisableReplication = NULL;

		if ( !pfnDisableReplication )
			pfnDisableReplication = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.DisableReplication" );

		ACCInstancePawn_execDisableReplication_Parms DisableReplication_Parms;

		this->ProcessEvent( pfnDisableReplication, &DisableReplication_Parms, NULL );
	};

	void UpdateCollisionModeAuto ()
	{
		static UFunction* pfnUpdateCollisionModeAuto = NULL;

		if ( !pfnUpdateCollisionModeAuto )
			pfnUpdateCollisionModeAuto = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.UpdateCollisionModeAuto" );

		ACCInstancePawn_execUpdateCollisionModeAuto_Parms UpdateCollisionModeAuto_Parms;

		this->ProcessEvent( pfnUpdateCollisionModeAuto, &UpdateCollisionModeAuto_Parms, NULL );
	};

	void PlayRollingSound ()
	{
		static UFunction* pfnPlayRollingSound = NULL;

		if ( !pfnPlayRollingSound )
			pfnPlayRollingSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayRollingSound" );

		ACCInstancePawn_execPlayRollingSound_Parms PlayRollingSound_Parms;

		this->ProcessEvent( pfnPlayRollingSound, &PlayRollingSound_Parms, NULL );
	};

	float eventCalculateRollingTime ( int DirectionIndex )
	{
		static UFunction* pfnCalculateRollingTime = NULL;

		if ( !pfnCalculateRollingTime )
			pfnCalculateRollingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalculateRollingTime" );

		ACCInstancePawn_eventCalculateRollingTime_Parms CalculateRollingTime_Parms;
		CalculateRollingTime_Parms.DirectionIndex = DirectionIndex;

		this->ProcessEvent( pfnCalculateRollingTime, &CalculateRollingTime_Parms, NULL );

		return CalculateRollingTime_Parms.ReturnValue;
	};

	float CalcTBBOFinishAngleDifference ()
	{
		static UFunction* pfnCalcTBBOFinishAngleDifference = NULL;

		if ( !pfnCalcTBBOFinishAngleDifference )
			pfnCalcTBBOFinishAngleDifference = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CalcTBBOFinishAngleDifference" );

		ACCInstancePawn_execCalcTBBOFinishAngleDifference_Parms CalcTBBOFinishAngleDifference_Parms;

		this->ProcessEvent( pfnCalcTBBOFinishAngleDifference, &CalcTBBOFinishAngleDifference_Parms, NULL );

		return CalcTBBOFinishAngleDifference_Parms.ReturnValue;
	};

	bool GetShouldFinishTBBO ()
	{
		static UFunction* pfnGetShouldFinishTBBO = NULL;

		if ( !pfnGetShouldFinishTBBO )
			pfnGetShouldFinishTBBO = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetShouldFinishTBBO" );

		ACCInstancePawn_execGetShouldFinishTBBO_Parms GetShouldFinishTBBO_Parms;

		this->ProcessEvent( pfnGetShouldFinishTBBO, &GetShouldFinishTBBO_Parms, NULL );

		return GetShouldFinishTBBO_Parms.ReturnValue;
	};

	void TurnBasedBlendOutFinishTimer ()
	{
		static UFunction* pfnTurnBasedBlendOutFinishTimer = NULL;

		if ( !pfnTurnBasedBlendOutFinishTimer )
			pfnTurnBasedBlendOutFinishTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TurnBasedBlendOutFinishTimer" );

		ACCInstancePawn_execTurnBasedBlendOutFinishTimer_Parms TurnBasedBlendOutFinishTimer_Parms;

		this->ProcessEvent( pfnTurnBasedBlendOutFinishTimer, &TurnBasedBlendOutFinishTimer_Parms, NULL );
	};

	void TurnBasedBlendOutTimer ()
	{
		static UFunction* pfnTurnBasedBlendOutTimer = NULL;

		if ( !pfnTurnBasedBlendOutTimer )
			pfnTurnBasedBlendOutTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.TurnBasedBlendOutTimer" );

		ACCInstancePawn_execTurnBasedBlendOutTimer_Parms TurnBasedBlendOutTimer_Parms;

		this->ProcessEvent( pfnTurnBasedBlendOutTimer, &TurnBasedBlendOutTimer_Parms, NULL );
	};

	void PerformTurnBasedBlendOut ( struct FRotator TheOldPawnRotation, struct FRotator NewControllerRotation, float NormalSmoothBlendTime, float TurnSmoothBlendTime )
	{
		static UFunction* pfnPerformTurnBasedBlendOut = NULL;

		if ( !pfnPerformTurnBasedBlendOut )
			pfnPerformTurnBasedBlendOut = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PerformTurnBasedBlendOut" );

		ACCInstancePawn_execPerformTurnBasedBlendOut_Parms PerformTurnBasedBlendOut_Parms;
		memcpy( &PerformTurnBasedBlendOut_Parms.TheOldPawnRotation, &TheOldPawnRotation, 0xC );
		memcpy( &PerformTurnBasedBlendOut_Parms.NewControllerRotation, &NewControllerRotation, 0xC );
		PerformTurnBasedBlendOut_Parms.NormalSmoothBlendTime = NormalSmoothBlendTime;
		PerformTurnBasedBlendOut_Parms.TurnSmoothBlendTime = TurnSmoothBlendTime;

		this->ProcessEvent( pfnPerformTurnBasedBlendOut, &PerformTurnBasedBlendOut_Parms, NULL );
	};

	void FinishMeleeAnim ( struct FRotator ControllerPostMeleeRotation )
	{
		static UFunction* pfnFinishMeleeAnim = NULL;

		if ( !pfnFinishMeleeAnim )
			pfnFinishMeleeAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FinishMeleeAnim" );

		ACCInstancePawn_execFinishMeleeAnim_Parms FinishMeleeAnim_Parms;
		memcpy( &FinishMeleeAnim_Parms.ControllerPostMeleeRotation, &ControllerPostMeleeRotation, 0xC );

		this->ProcessEvent( pfnFinishMeleeAnim, &FinishMeleeAnim_Parms, NULL );
	};

	void StartMeleeAnim ()
	{
		static UFunction* pfnStartMeleeAnim = NULL;

		if ( !pfnStartMeleeAnim )
			pfnStartMeleeAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.StartMeleeAnim" );

		ACCInstancePawn_execStartMeleeAnim_Parms StartMeleeAnim_Parms;

		this->ProcessEvent( pfnStartMeleeAnim, &StartMeleeAnim_Parms, NULL );
	};

	void FinishEmoteAnim ( struct FRotator PawnEmoteRotation, struct FRotator ControllerPostEmoteRotation )
	{
		static UFunction* pfnFinishEmoteAnim = NULL;

		if ( !pfnFinishEmoteAnim )
			pfnFinishEmoteAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FinishEmoteAnim" );

		ACCInstancePawn_execFinishEmoteAnim_Parms FinishEmoteAnim_Parms;
		memcpy( &FinishEmoteAnim_Parms.PawnEmoteRotation, &PawnEmoteRotation, 0xC );
		memcpy( &FinishEmoteAnim_Parms.ControllerPostEmoteRotation, &ControllerPostEmoteRotation, 0xC );

		this->ProcessEvent( pfnFinishEmoteAnim, &FinishEmoteAnim_Parms, NULL );
	};

	void FinishRollingAnim ( struct FRotator PawnRollingRotation, struct FRotator ControllerPostRollingRotation )
	{
		static UFunction* pfnFinishRollingAnim = NULL;

		if ( !pfnFinishRollingAnim )
			pfnFinishRollingAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FinishRollingAnim" );

		ACCInstancePawn_execFinishRollingAnim_Parms FinishRollingAnim_Parms;
		memcpy( &FinishRollingAnim_Parms.PawnRollingRotation, &PawnRollingRotation, 0xC );
		memcpy( &FinishRollingAnim_Parms.ControllerPostRollingRotation, &ControllerPostRollingRotation, 0xC );

		this->ProcessEvent( pfnFinishRollingAnim, &FinishRollingAnim_Parms, NULL );
	};

	void PlayRollingAnim ()
	{
		static UFunction* pfnPlayRollingAnim = NULL;

		if ( !pfnPlayRollingAnim )
			pfnPlayRollingAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PlayRollingAnim" );

		ACCInstancePawn_execPlayRollingAnim_Parms PlayRollingAnim_Parms;

		pfnPlayRollingAnim->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlayRollingAnim, &PlayRollingAnim_Parms, NULL );
		pfnPlayRollingAnim->FunctionFlags |= 0x400;
	};

	void ResetTurnNodes ( struct FRotator ResetRot )
	{
		static UFunction* pfnResetTurnNodes = NULL;

		if ( !pfnResetTurnNodes )
			pfnResetTurnNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ResetTurnNodes" );

		ACCInstancePawn_execResetTurnNodes_Parms ResetTurnNodes_Parms;
		memcpy( &ResetTurnNodes_Parms.ResetRot, &ResetRot, 0xC );

		this->ProcessEvent( pfnResetTurnNodes, &ResetTurnNodes_Parms, NULL );
	};

	void InitializeOtherAnimationNodes ()
	{
		static UFunction* pfnInitializeOtherAnimationNodes = NULL;

		if ( !pfnInitializeOtherAnimationNodes )
			pfnInitializeOtherAnimationNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.InitializeOtherAnimationNodes" );

		ACCInstancePawn_execInitializeOtherAnimationNodes_Parms InitializeOtherAnimationNodes_Parms;

		this->ProcessEvent( pfnInitializeOtherAnimationNodes, &InitializeOtherAnimationNodes_Parms, NULL );
	};

	void GetStreamingInfo ( struct FString levelStatus )
	{
		static UFunction* pfnGetStreamingInfo = NULL;

		if ( !pfnGetStreamingInfo )
			pfnGetStreamingInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetStreamingInfo" );

		ACCInstancePawn_execGetStreamingInfo_Parms GetStreamingInfo_Parms;
		memcpy( &GetStreamingInfo_Parms.levelStatus, &levelStatus, 0xC );

		pfnGetStreamingInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetStreamingInfo, &GetStreamingInfo_Parms, NULL );
		pfnGetStreamingInfo->FunctionFlags |= 0x400;
	};

	void GetCoverInfo ()
	{
		static UFunction* pfnGetCoverInfo = NULL;

		if ( !pfnGetCoverInfo )
			pfnGetCoverInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCoverInfo" );

		ACCInstancePawn_execGetCoverInfo_Parms GetCoverInfo_Parms;

		pfnGetCoverInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetCoverInfo, &GetCoverInfo_Parms, NULL );
		pfnGetCoverInfo->FunctionFlags |= 0x400;
	};

	void FillCoverPosInfo ( void* Link, int SlotIdx, struct FVector FromLoc, struct FVector Direction, float MaxDistance, struct FCovPosInfo* out_CovPosInfo )
	{
		static UFunction* pfnFillCoverPosInfo = NULL;

		if ( !pfnFillCoverPosInfo )
			pfnFillCoverPosInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillCoverPosInfo" );

		ACCInstancePawn_execFillCoverPosInfo_Parms FillCoverPosInfo_Parms;
		FillCoverPosInfo_Parms.Link = Link;
		FillCoverPosInfo_Parms.SlotIdx = SlotIdx;
		memcpy( &FillCoverPosInfo_Parms.FromLoc, &FromLoc, 0xC );
		memcpy( &FillCoverPosInfo_Parms.Direction, &Direction, 0xC );
		FillCoverPosInfo_Parms.MaxDistance = MaxDistance;

		pfnFillCoverPosInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFillCoverPosInfo, &FillCoverPosInfo_Parms, NULL );
		pfnFillCoverPosInfo->FunctionFlags |= 0x400;

		if ( out_CovPosInfo )
			memcpy( out_CovPosInfo, &FillCoverPosInfo_Parms.out_CovPosInfo, 0x34 ); // CPF_OutParm
	};

	bool ValidatePotentialCover ( struct FVector FromLoc, struct FVector Direction, float* OutMinDotFOV, float* OutMaxDistanceSquared, struct FCovPosInfo* OutCovPosInfo )
	{
		static UFunction* pfnValidatePotentialCover = NULL;

		if ( !pfnValidatePotentialCover )
			pfnValidatePotentialCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.ValidatePotentialCover" );

		ACCInstancePawn_execValidatePotentialCover_Parms ValidatePotentialCover_Parms;
		memcpy( &ValidatePotentialCover_Parms.FromLoc, &FromLoc, 0xC );
		memcpy( &ValidatePotentialCover_Parms.Direction, &Direction, 0xC );

		pfnValidatePotentialCover->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnValidatePotentialCover, &ValidatePotentialCover_Parms, NULL );
		pfnValidatePotentialCover->FunctionFlags |= 0x400;

		if ( OutMinDotFOV )
			*OutMinDotFOV = ValidatePotentialCover_Parms.OutMinDotFOV; // CPF_OutParm
		if ( OutMaxDistanceSquared )
			*OutMaxDistanceSquared = ValidatePotentialCover_Parms.OutMaxDistanceSquared; // CPF_OutParm
		if ( OutCovPosInfo )
			memcpy( OutCovPosInfo, &ValidatePotentialCover_Parms.OutCovPosInfo, 0x34 ); // CPF_OutParm

		return ValidatePotentialCover_Parms.ReturnValue;
	};

	bool FindCoverFromLocAndDir ( struct FVector FromLoc, struct FVector Direction, float FOV, float MaxDistance, struct FCovPosInfo* OutCovPosInfo )
	{
		static UFunction* pfnFindCoverFromLocAndDir = NULL;

		if ( !pfnFindCoverFromLocAndDir )
			pfnFindCoverFromLocAndDir = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FindCoverFromLocAndDir" );

		ACCInstancePawn_execFindCoverFromLocAndDir_Parms FindCoverFromLocAndDir_Parms;
		memcpy( &FindCoverFromLocAndDir_Parms.FromLoc, &FromLoc, 0xC );
		memcpy( &FindCoverFromLocAndDir_Parms.Direction, &Direction, 0xC );
		FindCoverFromLocAndDir_Parms.FOV = FOV;
		FindCoverFromLocAndDir_Parms.MaxDistance = MaxDistance;

		pfnFindCoverFromLocAndDir->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindCoverFromLocAndDir, &FindCoverFromLocAndDir_Parms, NULL );
		pfnFindCoverFromLocAndDir->FunctionFlags |= 0x400;

		if ( OutCovPosInfo )
			memcpy( OutCovPosInfo, &FindCoverFromLocAndDir_Parms.OutCovPosInfo, 0x34 ); // CPF_OutParm

		return FindCoverFromLocAndDir_Parms.ReturnValue;
	};

	bool GuessAtCover ( struct FCoverInfo* out_Cover )
	{
		static UFunction* pfnGuessAtCover = NULL;

		if ( !pfnGuessAtCover )
			pfnGuessAtCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GuessAtCover" );

		ACCInstancePawn_execGuessAtCover_Parms GuessAtCover_Parms;

		pfnGuessAtCover->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGuessAtCover, &GuessAtCover_Parms, NULL );
		pfnGuessAtCover->FunctionFlags |= 0x400;

		if ( out_Cover )
			memcpy( out_Cover, &GuessAtCover_Parms.out_Cover, 0x8 ); // CPF_OutParm

		return GuessAtCover_Parms.ReturnValue;
	};

	bool IsInCover ()
	{
		static UFunction* pfnIsInCover = NULL;

		if ( !pfnIsInCover )
			pfnIsInCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsInCover" );

		ACCInstancePawn_execIsInCover_Parms IsInCover_Parms;

		pfnIsInCover->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsInCover, &IsInCover_Parms, NULL );
		pfnIsInCover->FunctionFlags |= 0x400;

		return IsInCover_Parms.ReturnValue;
	};

	float GetCurrentSlotPct ( void* Link, int InLeftSlotIdx/*CPF_OptionalParm*/, int InRightSlotIdx/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetCurrentSlotPct = NULL;

		if ( !pfnGetCurrentSlotPct )
			pfnGetCurrentSlotPct = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetCurrentSlotPct" );

		ACCInstancePawn_execGetCurrentSlotPct_Parms GetCurrentSlotPct_Parms;
		GetCurrentSlotPct_Parms.Link = Link;
		GetCurrentSlotPct_Parms.InLeftSlotIdx = InLeftSlotIdx;
		GetCurrentSlotPct_Parms.InRightSlotIdx = InRightSlotIdx;

		pfnGetCurrentSlotPct->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetCurrentSlotPct, &GetCurrentSlotPct_Parms, NULL );
		pfnGetCurrentSlotPct->FunctionFlags |= 0x400;

		return GetCurrentSlotPct_Parms.ReturnValue;
	};

	float GetRBVelocity ()
	{
		static UFunction* pfnGetRBVelocity = NULL;

		if ( !pfnGetRBVelocity )
			pfnGetRBVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetRBVelocity" );

		ACCInstancePawn_execGetRBVelocity_Parms GetRBVelocity_Parms;

		pfnGetRBVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRBVelocity, &GetRBVelocity_Parms, NULL );
		pfnGetRBVelocity->FunctionFlags |= 0x400;

		return GetRBVelocity_Parms.ReturnValue;
	};

	struct FVector GetVirtualShootSpotLocation ( struct FRotator* VirtualStartFireRot )
	{
		static UFunction* pfnGetVirtualShootSpotLocation = NULL;

		if ( !pfnGetVirtualShootSpotLocation )
			pfnGetVirtualShootSpotLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetVirtualShootSpotLocation" );

		ACCInstancePawn_execGetVirtualShootSpotLocation_Parms GetVirtualShootSpotLocation_Parms;

		pfnGetVirtualShootSpotLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetVirtualShootSpotLocation, &GetVirtualShootSpotLocation_Parms, NULL );
		pfnGetVirtualShootSpotLocation->FunctionFlags |= 0x400;

		if ( VirtualStartFireRot )
			memcpy( VirtualStartFireRot, &GetVirtualShootSpotLocation_Parms.VirtualStartFireRot, 0xC ); // CPF_OutParm

		return GetVirtualShootSpotLocation_Parms.ReturnValue;
	};

	bool CheckSkeletonEnroachment ()
	{
		static UFunction* pfnCheckSkeletonEnroachment = NULL;

		if ( !pfnCheckSkeletonEnroachment )
			pfnCheckSkeletonEnroachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.CheckSkeletonEnroachment" );

		ACCInstancePawn_execCheckSkeletonEnroachment_Parms CheckSkeletonEnroachment_Parms;

		pfnCheckSkeletonEnroachment->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCheckSkeletonEnroachment, &CheckSkeletonEnroachment_Parms, NULL );
		pfnCheckSkeletonEnroachment->FunctionFlags |= 0x400;

		return CheckSkeletonEnroachment_Parms.ReturnValue;
	};

	void FillArrayOfSequenceByWeaponNameNodes ()
	{
		static UFunction* pfnFillArrayOfSequenceByWeaponNameNodes = NULL;

		if ( !pfnFillArrayOfSequenceByWeaponNameNodes )
			pfnFillArrayOfSequenceByWeaponNameNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillArrayOfSequenceByWeaponNameNodes" );

		ACCInstancePawn_execFillArrayOfSequenceByWeaponNameNodes_Parms FillArrayOfSequenceByWeaponNameNodes_Parms;

		pfnFillArrayOfSequenceByWeaponNameNodes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFillArrayOfSequenceByWeaponNameNodes, &FillArrayOfSequenceByWeaponNameNodes_Parms, NULL );
		pfnFillArrayOfSequenceByWeaponNameNodes->FunctionFlags |= 0x400;
	};

	void FillArrayOfWeaponChangeNodes ()
	{
		static UFunction* pfnFillArrayOfWeaponChangeNodes = NULL;

		if ( !pfnFillArrayOfWeaponChangeNodes )
			pfnFillArrayOfWeaponChangeNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillArrayOfWeaponChangeNodes" );

		ACCInstancePawn_execFillArrayOfWeaponChangeNodes_Parms FillArrayOfWeaponChangeNodes_Parms;

		pfnFillArrayOfWeaponChangeNodes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFillArrayOfWeaponChangeNodes, &FillArrayOfWeaponChangeNodes_Parms, NULL );
		pfnFillArrayOfWeaponChangeNodes->FunctionFlags |= 0x400;
	};

	void FillArrayOfTargetingNodes ()
	{
		static UFunction* pfnFillArrayOfTargetingNodes = NULL;

		if ( !pfnFillArrayOfTargetingNodes )
			pfnFillArrayOfTargetingNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.FillArrayOfTargetingNodes" );

		ACCInstancePawn_execFillArrayOfTargetingNodes_Parms FillArrayOfTargetingNodes_Parms;

		pfnFillArrayOfTargetingNodes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFillArrayOfTargetingNodes, &FillArrayOfTargetingNodes_Parms, NULL );
		pfnFillArrayOfTargetingNodes->FunctionFlags |= 0x400;
	};

	struct FPawnWeaponParams GetWeaponParameters ()
	{
		static UFunction* pfnGetWeaponParameters = NULL;

		if ( !pfnGetWeaponParameters )
			pfnGetWeaponParameters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetWeaponParameters" );

		ACCInstancePawn_execGetWeaponParameters_Parms GetWeaponParameters_Parms;

		this->ProcessEvent( pfnGetWeaponParameters, &GetWeaponParameters_Parms, NULL );

		return GetWeaponParameters_Parms.ReturnValue;
	};

	bool PawnBurning_FindAbilityInfo ( struct FString AbilityName, struct FPawnBurning_AbilityInfo* AbilityInfo )
	{
		static UFunction* pfnPawnBurning_FindAbilityInfo = NULL;

		if ( !pfnPawnBurning_FindAbilityInfo )
			pfnPawnBurning_FindAbilityInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PawnBurning_FindAbilityInfo" );

		ACCInstancePawn_execPawnBurning_FindAbilityInfo_Parms PawnBurning_FindAbilityInfo_Parms;
		memcpy( &PawnBurning_FindAbilityInfo_Parms.AbilityName, &AbilityName, 0xC );

		this->ProcessEvent( pfnPawnBurning_FindAbilityInfo, &PawnBurning_FindAbilityInfo_Parms, NULL );

		if ( AbilityInfo )
			memcpy( AbilityInfo, &PawnBurning_FindAbilityInfo_Parms.AbilityInfo, 0x14 ); // CPF_OutParm

		return PawnBurning_FindAbilityInfo_Parms.ReturnValue;
	};

	bool IsBoneAvailableToBurn ( struct FName BoneName )
	{
		static UFunction* pfnIsBoneAvailableToBurn = NULL;

		if ( !pfnIsBoneAvailableToBurn )
			pfnIsBoneAvailableToBurn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsBoneAvailableToBurn" );

		ACCInstancePawn_execIsBoneAvailableToBurn_Parms IsBoneAvailableToBurn_Parms;
		memcpy( &IsBoneAvailableToBurn_Parms.BoneName, &BoneName, 0x8 );

		this->ProcessEvent( pfnIsBoneAvailableToBurn, &IsBoneAvailableToBurn_Parms, NULL );

		return IsBoneAvailableToBurn_Parms.ReturnValue;
	};

	bool IsAlreadyBurn ( struct FName BoneName )
	{
		static UFunction* pfnIsAlreadyBurn = NULL;

		if ( !pfnIsAlreadyBurn )
			pfnIsAlreadyBurn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.IsAlreadyBurn" );

		ACCInstancePawn_execIsAlreadyBurn_Parms IsAlreadyBurn_Parms;
		memcpy( &IsAlreadyBurn_Parms.BoneName, &BoneName, 0x8 );

		this->ProcessEvent( pfnIsAlreadyBurn, &IsAlreadyBurn_Parms, NULL );

		return IsAlreadyBurn_Parms.ReturnValue;
	};

	void BurnPawnBones ()
	{
		static UFunction* pfnBurnPawnBones = NULL;

		if ( !pfnBurnPawnBones )
			pfnBurnPawnBones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.BurnPawnBones" );

		ACCInstancePawn_execBurnPawnBones_Parms BurnPawnBones_Parms;

		this->ProcessEvent( pfnBurnPawnBones, &BurnPawnBones_Parms, NULL );
	};

	void PawnBurning_Burn ( struct FVector Origin, float Radius, struct FName AbilityName )
	{
		static UFunction* pfnPawnBurning_Burn = NULL;

		if ( !pfnPawnBurning_Burn )
			pfnPawnBurning_Burn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PawnBurning_Burn" );

		ACCInstancePawn_execPawnBurning_Burn_Parms PawnBurning_Burn_Parms;
		memcpy( &PawnBurning_Burn_Parms.Origin, &Origin, 0xC );
		PawnBurning_Burn_Parms.Radius = Radius;
		memcpy( &PawnBurning_Burn_Parms.AbilityName, &AbilityName, 0x8 );

		this->ProcessEvent( pfnPawnBurning_Burn, &PawnBurning_Burn_Parms, NULL );
	};

	void PawnBurning_BoneInfoReplicatedEvent ( int BoneIndex )
	{
		static UFunction* pfnPawnBurning_BoneInfoReplicatedEvent = NULL;

		if ( !pfnPawnBurning_BoneInfoReplicatedEvent )
			pfnPawnBurning_BoneInfoReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.PawnBurning_BoneInfoReplicatedEvent" );

		ACCInstancePawn_execPawnBurning_BoneInfoReplicatedEvent_Parms PawnBurning_BoneInfoReplicatedEvent_Parms;
		PawnBurning_BoneInfoReplicatedEvent_Parms.BoneIndex = BoneIndex;

		this->ProcessEvent( pfnPawnBurning_BoneInfoReplicatedEvent, &PawnBurning_BoneInfoReplicatedEvent_Parms, NULL );
	};

	float GetClientClockValue ( float ServerClockValue )
	{
		static UFunction* pfnGetClientClockValue = NULL;

		if ( !pfnGetClientClockValue )
			pfnGetClientClockValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstancePawn.GetClientClockValue" );

		ACCInstancePawn_execGetClientClockValue_Parms GetClientClockValue_Parms;
		GetClientClockValue_Parms.ServerClockValue = ServerClockValue;

		this->ProcessEvent( pfnGetClientClockValue, &GetClientClockValue_Parms, NULL );

		return GetClientClockValue_Parms.ReturnValue;
	};

};

UClass* ACCInstancePawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif