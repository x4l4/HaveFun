/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCWeapon.h
// Date: 06/16/2011 @ 05:19:41.392
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum AttachmentIDsFunc
{
	AIF_Silencer = 0,
	AIF_Scope = 10,
	AIF_FireMech_Aiming = 30,
	AIF_FireMech_Explode = 31,
	AIF_FireMech_Power = 32,
	AIF_FireMech = 33,
	AIF_MAX = 40
};

enum AttachmentIDsNum
{
	Slot_Silenser = 0,
	Slot_Scope = 1,
	Slot_Shell = 2,
	Slot_FireMech1 = 3,
	Slot_FireMech2 = 4,
	Slot_MAX = 5
};

enum EMeleeAnimationType
{
	EMAT_BeforeAttack = 0,
	EMAT_AttackModeSelection = 1,
	EMAT_Attack = 2,
	EMAT_Defend = 3,
	EMAT_MAX = 4
};

struct ACCWeapon_execmy_temp_function_Parms
{
};

struct ACCWeapon_execAbortPlayerGrenadeNoMovement_Parms
{
};

struct ACCWeapon_execStartPlayerGrenadeNoMovement_Parms
{
};

struct ACCWeapon_eventGetTraceRange_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCWeapon_eventdebugMsg_Parms
{
	struct FString S;
	unsigned long bAddClassName : 1;
	unsigned long bAddStateName : 1;
};// FUNC_Event

struct ACCWeapon_execGetShouldShowCWFTraces_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetIsHasRemoteClient_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetIsLocallyControlledOrBot_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetIsLocallyControlled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetController_Parms
{
	class ACCInstanceController* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetClientActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetServerActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetMainActionManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execDetachWeapon_Parms
{
};

struct ACCWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent* MeshCpnt;
	struct FName SocketName;
};

struct ACCWeapon_execGivenTo_Parms
{
	class APawn* thisPawn;
	unsigned long bDoNotActivate : 1;
};

struct ACCWeapon_execPutDownWeapon_Parms
{
};

struct ACCWeapon_execTryPutDown_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execActivate_Parms
{
};

struct ACCWeapon_execGetGrenadeAutoAim_Parms
{
	struct FVector StartFireLoc;
	struct FVector DestLoc;
	float Speed;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execModifyGrenadeCheckErrorFor_Parms
{
	class AActor* HitActor;
	float GrenadeCheckError;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetGrenadeAutoAimDest_Parms
{
	struct FVector StartFireLoc;
	float Speed;
	float MaxGrenadeAddAngle;
	float TraceRange;
	float MaxFlyTime;
	float MaxGrenadeCheckError;
	int Penetration;
	void* DrawDebugProxy;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetGrenadeLauncherAutoAim_Parms
{
	struct FVector StartFireLoc;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execServerReplicateGrenadeRelease_Parms
{
	struct FVector StartFireLoc;
	struct FVector DestFireLoc;
};

struct ACCWeapon_execReplicateGrenadeRelease_Parms
{
};

struct ACCWeapon_execThrowGrenade_Parms
{
	void* GrenadePreset;
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execBuildGrenadeInfo_Parms
{
	struct FCustomProjectileFire GrenadeInfo; // CPF_OutParm
	class AController* InstigatorController;
	void* Preset;
	class ACCProjectile* Archetype;
	float Speed;
	unsigned long pedobomba : 1;
};

struct ACCWeapon_execProcessGrenadeRelease_Parms
{
	struct FVector StartFireLoc;
	struct FVector DestFireLoc;
	unsigned long bFallenOut : 1;
};

struct ACCWeapon_execAbortThrowGrenade_Parms
{
};

struct ACCWeapon_execServerAbortPlayerGrenadeNoMovement_Parms
{
};

struct ACCWeapon_execServerAbortPlayerGrenadeNoMovementInternal_Parms
{
};

struct ACCWeapon_execServerStartPlayerGrenadeNoMovement_Parms
{
};

struct ACCWeapon_execServerStartPlayerGrenadeNoMovementInternal_Parms
{
};

struct ACCWeapon_execAbortMeleeDefend_Parms
{
};

struct ACCWeapon_execStartMeleeDefend_Parms
{
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execCalcLocalSpaceTraceLimitsEntry_Parms
{
	struct FMeleeTraceLimits Limits; // CPF_OutParm
	struct FMeleeTraceLimitsEntry Entry; // CPF_OutParm
	struct FMeleeTraceLimitsEntry ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCalcWorldSpaceTraceLimitsEntry_Parms
{
	struct FMeleeTraceLimits Limits; // CPF_OutParm
	struct FMeleeTraceLimitsEntry Entry; // CPF_OutParm
	struct FMeleeTraceLimitsEntry ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execAbortPlayerMeleeMovement_Parms
{
};

struct ACCWeapon_execUpdateMeleeInitialViewRotation_Parms
{
};

struct ACCWeapon_execStartPlayerMeleeMovement_Parms
{
};

struct ACCWeapon_execGetCurrentMeleeBeatTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execServerPeekMeleeParameters_Parms
{
	int Pid;
	int Bmd;
};

struct ACCWeapon_execServerPeekMeleeParametersInternal_Parms
{
	int Pid;
	int Bmd;
};

struct ACCWeapon_execServerProcessMeleeHits_Parms
{
	unsigned long bRealRPCCall : 1;
	struct FVector MeleeStartTrace;
	struct FVector MeleeEndTrace;
};

struct ACCWeapon_execServerProcessMeleeHitsInternal_Parms
{
	unsigned long bRealRPCCall : 1;
	struct FVector MeleeStartTrace;
	struct FVector MeleeEndTrace;
};

struct ACCWeapon_execServerSetUnsuccessBeat_Parms
{
	int PrmsID;
	int Bmd;
	float TimeOut;
};

struct ACCWeapon_execSetUnsuccessBeat_Parms
{
	int PrmsID;
	int Bmd;
	float TimeOut;
};

struct ACCWeapon_execMeleeIsInUnsuccessBeatTimeout_Parms
{
	int PrmsID;
	int Bmd;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execMeleeIsSuccessBeat_Parms
{
	class AActor* LastHitActor;
	class ACCInstancePawn* OwnerPawn;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execComputeMeleeDamage_Parms
{
	class ACCInstancePawn* Sender;
	int BeatMode;
	float BaseDamage;
	class AActor* Victim;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execPeekMeleeParameters_Parms
{
};

struct ACCWeapon_execDetermineMeleeBeatMode_Parms
{
	int ParamsId;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execDetermineMeleeParametersID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execDetermineMeleeParametersIDAndBeatMode_Parms
{
	int ParamsId; // CPF_OutParm
	int Mode; // CPF_OutParm
};

struct ACCWeapon_execDetermineMeleeCanBeStarted_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execMeleeCanBeStartedUpdated_Parms
{
};

struct ACCWeapon_execServerSetMeleeCanBeStarted_Parms
{
	unsigned long bValue : 1;
};

struct ACCWeapon_execUpdateMeleeCanBeStarted_Parms
{
	unsigned long bValue : 1;
};

struct ACCWeapon_execDoAbortMelee_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execDoStartMelee_Parms
{
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execAbortMelee_Parms
{
};

struct ACCWeapon_execServerStartMeleeOnWeaponAttachment_Parms
{
	int BeatMode;
	float StartTime;
	float Time;
	float FullTime;
	float BackBlendTime;
	unsigned char AnimationType;
	int AnimationIndex;
};

struct ACCWeapon_execStartMeleeOnWeaponAttachment_Parms
{
	int BeatMode;
	float StartTime;
	float Time;
	float FullTime;
	float BackBlendTime;
	unsigned char AnimationType;
	int AnimationIndex;
};

struct ACCWeapon_execGetGrenadeAmmo_Parms
{
};

struct ACCWeapon_execGetAmmo_Parms
{
	int Limit;
};

struct ACCWeapon_execGetHowManyBulletsCanArm_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCheckIfCanReload_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetIsReloading_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCWeapon_execAbortReload_Parms
{
};

struct ACCWeapon_execReload_Parms
{
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execServerAbortAdvReloadForFire_Parms
{
};

struct ACCWeapon_execSet_AI_WantsToDoShots_Parms
{
	int New_AI_WantsToDoShots;
};

struct ACCWeapon_execClearPendingFire_Parms
{
	int FireMode;
};

struct ACCWeapon_execPendingFire_Parms
{
	int FireMode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execSetPendingFire_Parms
{
	int FireMode;
};

struct ACCWeapon_execConditionalStartFire_Parms
{
	unsigned char FireModeNum;
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execStopFireEffects_Parms
{
	unsigned char FireModeNum;
};

struct ACCWeapon_execPlayFireEffects_Parms
{
	unsigned char FireModeNum;
	struct FVector StartTraceLocation;
	struct FVector EndTraceLocation;
	struct FAdditionalHitInfo AddInfo;
};

struct ACCWeapon_execPlayFireEffectsLocally_Parms
{
	int ShotFlags;
};

struct ACCWeapon_execGetFireInterval_Parms
{
	unsigned char FireModeNum;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCheckIfNeedsContinueFiringDueToShotsMade_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execServer_PIH_FinishImpactInfo_Parms
{
};

struct ACCWeapon_execServer_PIH_SetImpactInfo_Parms
{
	struct FImpactInfo Impact;
};

struct ACCWeapon_execServer_PIH_ClearImpactInfo_Parms
{
};

struct ACCWeapon_execImpactNeedsToBeReplicated_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execCalcFireingSensitivity_Parms
{
	unsigned long StartFire : 1;
	unsigned long startsprint : 1;
};

struct ACCWeapon_execSetFireingSensitivity_Parms
{
	float basemult;
	float firemult;
	float aimingmult;
	float abilitymult;
	float sprintmult;
};

struct ACCWeapon_execUpdateSensivity_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execConditionalUpdateSensivity_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execsens_ApplyFovModifier_Parms
{
	float BaseSensValue;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execSetStartShootMachinegun_Parms
{
	unsigned long setstart : 1;
};

struct ACCWeapon_execStopFire_MachineGun_Parms
{
};

struct ACCWeapon_execStartFire_MachineGun_Parms
{
};

struct ACCWeapon_execMachinegunStopFireTimer_Parms
{
};

struct ACCWeapon_execMachinegunProcessFire_Parms
{
};

struct ACCWeapon_execAbortFire_Parms
{
};

struct ACCWeapon_execServerFireAmmunitionInternal_Parms
{
	unsigned long bRealRPCCall : 1;
	float FireTimeStamp;
};

struct ACCWeapon_execServerFireAmmunition_Parms
{
	unsigned long bRealRPCCall : 1;
	float FireTimeStamp;
	struct FVector ShootSpotLocation;
	struct FRotator ShootSpotRotation;
};

struct ACCWeapon_execFlashLocationClearTimer_Parms
{
};

struct ACCWeapon_execCalcWeaponToPreviousShotTimeLeft_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execServerPlayPawnFireAnimationEffects_Parms
{
};

struct ACCWeapon_execPlayPawnFireAnimationEffects_Parms
{
};

struct ACCWeapon_execServerStartFiringOnWA_Parms
{
};

struct ACCWeapon_execStartFiringOnWA_Parms
{
};

struct ACCWeapon_execServerHandleFinishedFiring_Parms
{
};

struct ACCWeapon_execHandleFinishedFiring_Parms
{
};

struct ACCWeapon_eventIsFiring_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCWeapon_execIsFiringInternal_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCWeapon_execFireAmmunition_Parms
{
	float FireTimeStamp;
};

struct ACCWeapon_execGetIsChangingWeapon_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCWeapon_execAbortWeaponChange_Parms
{
};

struct ACCWeapon_execClientPostSwitchWeapon_Parms
{
};

struct ACCWeapon_execPostSwitchWeapon_Parms
{
};

struct ACCWeapon_execClientSetFiringParameters_Parms
{
	int FireMode;
	struct FName NewFiringState;
	unsigned char NewWeaponFireType;
	float NewDamage;
	class UClass* NewDamageType;
	float NewInstantHitMomentum;
	class UClass* NewWeaponProjectile;
};

struct ACCWeapon_execGetWeaponFiringState_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetBaseDamage_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execSetInstantHitDamageType_Parms
{
	unsigned char FiringMode;
};

struct ACCWeapon_execSetInstantHitDamageTypes_Parms
{
};

struct ACCWeapon_execSwitchWeapon_Parms
{
};

struct ACCWeapon_execOldWeaponCleared_Parms
{
};

struct ACCWeapon_execStartWeaponSwitching_Parms
{
	unsigned long bSkipHide : 1;
};

struct ACCWeapon_execGetAdditionalAimRotation_Parms
{
	struct FVector StartFireLoc;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execAddAdditionalAimRotation_Parms
{
	struct FVector StartFireLoc;
	struct FRotator BaseRotation;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetAccuracyForceFovFromWeapon_Parms
{
	float out_ForceFovVal; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetActualAccuracyForHUD_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execAddSpread_Parms
{
	struct FRotator BaseAim;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execTickCombinedSpreadLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execTickFRSpreadLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execTickPresetSpreadLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execTickSpreadLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execUpdatePendingSpreadProcessShot_Parms
{
};

struct ACCWeapon_execStaticCalcRealSpreadAbilityModifier_Parms
{
	float BaseAbilityModifier;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCWeapon_execStaticCalcInstanceFromLobbyModifier_Parms
{
	float LobbyVal1;
	float InstanceVal1;
	float LobbyVal2;
	float InstanceVal2;
	float LobbyModifierValue;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCWeapon_execStaticCalcInstanceFromLobbySpreadModifier_Parms
{
	float LobbySpreadModifierValue;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCWeapon_execGetFovValues_Parms
{
	float out_BaseFov; // CPF_OutParm
	float out_CurrentFov; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCWeapon_execUpdateSpreadParams_Parms
{
};

struct ACCWeapon_execConditionalSwitchSpreadProcessor_Parms
{
};

struct ACCWeapon_execSpreadTickPreLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execTickSpread_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execConditionalTickSpread_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execSpreadProcessBullet_Parms
{
	unsigned long bLastOne : 1;
};

struct ACCWeapon_execSpreadProcessShot_Parms
{
};

struct ACCWeapon_execResetSpread_Parms
{
};

struct ACCWeapon_execStillFiring_Parms
{
	unsigned char FireMode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execbReadyToFire_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execHasAnyAmmo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execHasAmmo_Parms
{
	unsigned char FireModeNum;
	int Amount;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execChangeAmmoCount_Parms
{
	int NewAmmoCount;
	unsigned long bCanSync : 1;
};// FUNC_Native

struct ACCWeapon_execAddAmmo_Parms
{
	int Amount;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execConsumeAmmo_Parms
{
	unsigned char FireModeNum;
};

struct ACCWeapon_eventCallClientSyncAmmoCount_Parms
{
	float FireTimeStamp;
};// FUNC_Event

struct ACCWeapon_execSpawnSpiralRockets_Parms
{
};

struct ACCWeapon_execSpawnSpiralRocketRulers_Parms
{
};

struct ACCWeapon_execCalcSpiralRocketLocationFor_Parms
{
	int RocketIndex;
	int MaxRockets;
	struct FVector SpawnDir; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execServerSetLastSpiralRocketUniqIDs_Parms
{
	int InLastSpiralRocketRulerUniqID;
	int InLastSpiralRocketUniqID;
};

struct ACCWeapon_execComputeSpiralRocketUniqIDs_Parms
{
};

struct ACCWeapon_execGenerateSpiralRocketsUniqID_Parms
{
	int Count;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCWeapon_execSpiralRocketsProjectileFire_Parms
{
};

struct ACCWeapon_execSimulateProjectileFire_Parms
{
	struct FCustomProjectileFire SourceInfo;
	class AProjectile* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execProjectileFire_Parms
{
	class AProjectile* ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetPhysicalFireStartLoc_Parms
{
	struct FVector AimDir;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetProjectileSpawnLocation_Parms
{
	struct FVector Direction; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execTimerForGL_Parms
{
};

struct ACCWeapon_execStartMultiPowerForGL_Parms
{
};

struct ACCWeapon_execIsCanSetPowerForGL_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execServerPerformRemoteExplode_Parms
{
};

struct ACCWeapon_execConditionalPerformRemoteExplode_Parms
{
};

struct ACCWeapon_execProcessInstantHitLocally_Parms
{
	unsigned char FiringMode;
	struct FImpactInfo Impact;
};

struct ACCWeapon_execSetDoZeroDamage_Parms
{
	unsigned long Value : 1;
};

struct ACCWeapon_execImpactNeedsToBeProcessed_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execProcessInstantHit_Parms
{
	unsigned char FiringMode;
	struct FImpactInfo Impact;
};

struct ACCWeapon_execPreProcessInstantHit_Parms
{
	unsigned char FiringMode;
	struct FImpactInfo Impact;
};

struct ACCWeapon_execProcessReplicatedFromClientHitList_Parms
{
	unsigned char FiringMode;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
};

struct ACCWeapon_execProcessInstantFireHitList_Parms
{
	unsigned char FiringMode;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
};

struct ACCWeapon_execCalcWeaponFireFromCameraPublic_Parms
{
	struct FVector StartTrace;
	struct FVector EndTrace;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	void* DrawDebugProxy;
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCalcWeaponFirePublic_Parms
{
	struct FVector StartTrace;
	struct FVector EndTrace;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	unsigned long bFirstImpactOnly : 1;
	void* DrawDebugProxy;
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCalcWeaponFire_Parms
{
	struct FVector StartTrace;
	struct FVector EndTrace;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FVector Extent;
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execCalcTraces_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execCalcUpdatedFireBounds_Parms
{
	struct FVector StartTrace; // CPF_OutParm
	struct FVector EndTrace; // CPF_OutParm
};

struct ACCWeapon_execCheckForCriticalDamage_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execInstantFire_Parms
{
};

struct ACCWeapon_execGetGrenadeRecoilRoll_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execClientAddGrenadeRecoil_Parms
{
	float Amplitude;
	float Period;
	float TotalTime;
	float FalloffNumber;
};

struct ACCWeapon_execStopSniperRifleRecoil_Parms
{
};

struct ACCWeapon_execStartSniperRifleRecoil_Parms
{
};

struct ACCWeapon_execUpdateSniperRifleRecoilParams_Parms
{
};

struct ACCWeapon_execClientAddDamageRecoil_Parms
{
	struct FVector PawnSpaceToShooterDir;
	float Amplitude;
	float RestoreTime;
	float DelayTime;
};

struct ACCWeapon_execTickWeaponRecoilLogic2_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execTickWeaponRecoilLogic_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execStaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms
{
	float LobbyRecoilAmplitudeModifierValue;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCWeapon_execUpdateWeaponRecoilParams_Parms
{
};

struct ACCWeapon_execAddWeaponRecoil_Parms
{
};

struct ACCWeapon_execGetSmoothedAdditionalRecoilRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execGetAdditionalRecoilRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execPerformRecoilLimitation_Parms
{
	struct FRotator RotationToRemove;
	unsigned long bUserMouseMove : 1;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execPerformRecoiCompensation_Parms
{
	struct FRotator DeltaRot;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execTickRecoil_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execBuildRecoilProcessorsArray_Parms
{
	TArray< void* > Arr; // CPF_OutParm
};// FUNC_Final

struct ACCWeapon_execInitializeRecoil_Parms
{
};

struct ACCWeapon_execIsInAimingMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execTickShootSpotLocation_Parms
{
	float Delta;
};

struct ACCWeapon_execGetIsReadyToFire_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execGetIsInReadyToFireInternal_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCWeapon_execUpdateIsReadyToFireTime_Parms
{
	float DeltaTime;
};

struct ACCWeapon_execReplicateShootSpotLocation_Parms
{
	struct FVector Loc;
	struct FRotator Rot;
	unsigned long bIsReadyToFire : 1;
};

struct ACCWeapon_execGetShootSpotLocation_Parms
{
	struct FRotator StartFireRot; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCWeapon_execTickForceNoIdleLogic_Parms
{
	float Delta;
};

struct ACCWeapon_execConditionalAutoReload_Parms
{
};

struct ACCWeapon_eventTick_Parms
{
	float Delta;
};// FUNC_Event

struct ACCWeapon_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCWeapon_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x2AC - 0x678)
class ACCWeapon : public AWeapon
{
public:
	int                                                AmmoCount;                                   // 0x02AC (0x0004)
	int                                                MaxAmmoCount;                                // 0x02B0 (0x0004)
	int                                                ClipCount;                                   // 0x02B4 (0x0004)
	int                                                TotalAmmoCount;                              // 0x02B8 (0x0004)
	TArray< int >                                      ShotCost;                                    // 0x02BC (0x000C)
	int                                                BulletsPerShot;                              // 0x02C8 (0x0004)
	unsigned long                                      DoZeroDamage : 1;                            // 0x02CC (0x0004) [0x00000001]
	unsigned long                                      ClientbIsReadyToFire : 1;                    // 0x02CC (0x0004) [0x00000002]
	unsigned long                                      Weapon_SpreadUseAimingMode : 1;              // 0x02CC (0x0004) [0x00000004]
	unsigned long                                      bCanShootMachinegun : 1;                     // 0x02CC (0x0004) [0x00000008]
	unsigned long                                      bStartShootMachinegun : 1;                   // 0x02CC (0x0004) [0x00000010]
	unsigned long                                      bSimpleShoot : 1;                            // 0x02CC (0x0004) [0x00000020]
	unsigned long                                      bCritShoot : 1;                              // 0x02CC (0x0004) [0x00000040]
	unsigned long                                      bProjectileFalling : 1;                      // 0x02CC (0x0004) [0x00000080]
	unsigned long                                      ExplodeOnEnemy : 1;                          // 0x02CC (0x0004) [0x00000100]
	unsigned long                                      Reload_WantsAdvAborting : 1;                 // 0x02CC (0x0004) [0x00000200]
	unsigned long                                      bUseGrenadeLeadTargeting : 1;                // 0x02CC (0x0004) [0x00000400]
	unsigned long                                      bProcessedGrenadeRelease : 1;                // 0x02CC (0x0004) [0x00000800]
	unsigned long                                      bMeleeNeedsToHideWeapon : 1;                 // 0x02CC (0x0004) [0x00001000]
	unsigned long                                      bMeleeBeatCanBeRepeated : 1;                 // 0x02CC (0x0004) [0x00002000]
	unsigned long                                      bMeleeCanBeStarted : 1;                      // 0x02CC (0x0004) [0x00004000]
	unsigned long                                      bMeleeDoingBeat : 1;                         // 0x02CC (0x0004) [0x00008000]
	unsigned long                                      bMeleeHitAnyTarget : 1;                      // 0x02CC (0x0004) [0x00010000]
	unsigned long                                      bMeleeWasNonPawnHit : 1;                     // 0x02CC (0x0004) [0x00020000]
	unsigned long                                      bSavedMeleeTraceLimitsValid : 1;             // 0x02CC (0x0004) [0x00040000]
	unsigned long                                      Weapon_bOneShotWeapon : 1;                   // 0x02CC (0x0004) [0x00080000]
	unsigned long                                      bAltProjFire : 1;                            // 0x02CC (0x0004) [0x00100000]
	unsigned long                                      SetMultiPowerForGL : 1;                      // 0x02CC (0x0004) [0x00200000]
	unsigned long                                      SetMachinegunFire : 1;                       // 0x02CC (0x0004) [0x00400000]
	float                                              Weapon_Speed;                                // 0x02D0 (0x0004)
	int                                                StartShotsCount;                             // 0x02D4 (0x0004)
	float                                              StartShotDelay;                              // 0x02D8 (0x0004)
	float                                              PrepareTime;                                 // 0x02DC (0x0004)
	int                                                ShotsMade;                                   // 0x02E0 (0x0004)
	float                                              ClientLastFireTimeStamp;                     // 0x02E4 (0x0004)
	float                                              LastEmtyGunFireEffectsTime;                  // 0x02E8 (0x0004)
	int                                                AI_WantsToDoShots;                           // 0x02EC (0x0004)
	float                                              RecoilAmplitudeModifier;                     // 0x02F0 (0x0004)
	struct FBaseRecoilParams                           TheRecoilParams;                             // 0x02F4 (0x0038)
	struct FSniperRifleRecoilParams                    TheSniperRifleRecoilParams;                  // 0x032C (0x001C)
	void*                                              WeaponRecoilProcessor;                       // 0x0348 (0x0004)
	struct FAddWeaponRecoilInfo                        PendingAddWeaponRecoilInfoStruct;            // 0x034C (0x0004)
	void*                                              CameraRecoilProcessor;                       // 0x0350 (0x0004)
	void*                                              SniperRifleRecoilProcessor;                  // 0x0354 (0x0004)
	void*                                              GrenadeRecoil;                               // 0x0358 (0x0004)
	struct FTakeHitSpeedModifierInfo                   TheTakeHitSpeedModifierInfo;                 // 0x035C (0x000C)
	struct FVector                                     ClientShootSpotLocation;                     // 0x0368 (0x000C)
	struct FRotator                                    ClientShootSpotRotation;                     // 0x0374 (0x000C)
	int                                                IsReadyToFireTime;                           // 0x0380 (0x0004)
	float                                              WaitForReadyToFireStartTime;                 // 0x0384 (0x0004)
	TArray< struct FImpactInfo >                       ImpactInfoArrayForServer;                    // 0x0388 (0x000C)
	TArray< struct FImpactInfo >                       ImpactInfoArrayFromClient;                   // 0x0394 (0x000C)
	struct FSpreadParams                               Weapon_SpreadParams;                         // 0x03A0 (0x0084)
	float                                              Weapon_SpreadInAimingTime;                   // 0x0424 (0x0004)
	float                                              Weapon_SpreadModifier;                       // 0x0428 (0x0004)
	float                                              Weapon_SpreadAbilityModifier;                // 0x042C (0x0004)
	struct FSpreadProcessShotInfo                      PendingSpreadProcessShotInfoStruct;          // 0x0430 (0x0004)
	void*                                              SpreadProcessor;                             // 0x0434 (0x0004)
	float                                              SimpleShootTimeChanged;                      // 0x0438 (0x0004)
	float                                              CritShootTimeChanged;                        // 0x043C (0x0004)
	float                                              SimpleShootTime;                             // 0x0440 (0x0004)
	float                                              CritShootTime;                               // 0x0444 (0x0004)
	float                                              CanNotSootTime;                              // 0x0448 (0x0004)
	float                                              StartShootTime;                              // 0x044C (0x0004)
	float                                              StopShootTime;                               // 0x0450 (0x0004)
	float                                              StopSimpleShootTime;                         // 0x0454 (0x0004)
	float                                              StopCritShootTime;                           // 0x0458 (0x0004)
	float                                              ProjectileSpeed;                             // 0x045C (0x0004)
	float                                              ProjectileMaxSpeed;                          // 0x0460 (0x0004)
	float                                              ProjectileAccelerationTime;                  // 0x0464 (0x0004)
	float                                              ProjectileLifeTime;                          // 0x0468 (0x0004)
	float                                              ProjectileRotationRate;                      // 0x046C (0x0004)
	float                                              ProjectileReflectionDamage;                  // 0x0470 (0x0004)
	float                                              ProjectileReflectionMomentum;                // 0x0474 (0x0004)
	struct FWeaponSpiralRocketParams                   TheWeaponSpiralRocketParams;                 // 0x0478 (0x0044)
	float                                              ProjectileDamage;                            // 0x04BC (0x0004)
	float                                              ProjectileDamageRadius;                      // 0x04C0 (0x0004)
	float                                              ProjectileDamageRadiusMin;                   // 0x04C4 (0x0004)
	float                                              ProjectileDamageRadiusKoeficient;            // 0x04C8 (0x0004)
	float                                              ProjectileImpulseKoeficient;                 // 0x04CC (0x0004)
	float                                              ProjectileAirFrictionPower;                  // 0x04D0 (0x0004)
	float                                              ProjectileAirFrictionDelay;                  // 0x04D4 (0x0004)
	float                                              ProjectileLifePoints;                        // 0x04D8 (0x0004)
	class ACCProjectile*                               LastFireProjectile;                          // 0x04DC (0x0004)
	struct FCustomProjectileFire                       CustomProjectileInfo;                        // 0x04E0 (0x006C)
	int                                                LastSpiralRocketRulerUniqID;                 // 0x054C (0x0004)
	int                                                LastSpiralRocketUniqID;                      // 0x0550 (0x0004)
	float                                              Weapon_ReloadTime;                           // 0x0554 (0x0004)
	float                                              Weapon_ReloadPreTime;                        // 0x0558 (0x0004)
	float                                              Weapon_ReloadPostTime;                       // 0x055C (0x0004)
	float                                              Weapon_SingleBulletReloadTimePerc;           // 0x0560 (0x0004)
	float                                              Weapon_SingleBulletReloadTimePosPerc;        // 0x0564 (0x0004)
	int                                                Reload_BulletsToArm;                         // 0x0568 (0x0004)
	int                                                Reload_BulletsArmed;                         // 0x056C (0x0004)
	void*                                              GrenadeThrowingPreset;                       // 0x0570 (0x0004)
	struct FString                                     GrenadeThrowingPresetName;                   // 0x0574 (0x000C)
	struct FVector                                     AI_GrenadeTargetPoint;                       // 0x0580 (0x000C)
	float                                              AI_GrenadeThrowAngle;                        // 0x058C (0x0004)
	float                                              MaxGrenadeAdditionalAngle;                   // 0x0590 (0x0004)
	int                                                MaxGetGrenadeAutoAimDestPenetration;         // 0x0594 (0x0004)
	float                                              DeathGrenadeFromOwnerVelocityPerc;           // 0x0598 (0x0004)
	float                                              MeleeBeforeAttackTime;                       // 0x059C (0x0004)
	float                                              MeleeUnsuccessBeatTimeout;                   // 0x05A0 (0x0004)
	float                                              MeleeTime;                                   // 0x05A4 (0x0004)
	float                                              MeleeRepeatTimePerc;                         // 0x05A8 (0x0004)
	float                                              MeleeRepeatTimePosPerc;                      // 0x05AC (0x0004)
	float                                              MeleeBackBlendTime;                          // 0x05B0 (0x0004)
	float                                              MeleeDamage;                                 // 0x05B4 (0x0004)
	float                                              MeleeMomentum;                               // 0x05B8 (0x0004)
	unsigned char                                      MeleeEffectorType;                           // 0x05BC (0x0001)
	unsigned char                                      WeaponTypeName;                              // 0x05BD (0x0001)
	int                                                MeleeDamageType;                             // 0x05C0 (0x0004)
	void*                                              MeleeMotionLawObject;                        // 0x05C4 (0x0004)
	float                                              MeleeAvoidanceRadiusMultiplier;              // 0x05C8 (0x0004)
	float                                              MeleeAvoidanceGlueFactor;                    // 0x05CC (0x0004)
	float                                              MeleeWorldCollisionRadiusMultiplier;         // 0x05D0 (0x0004)
	float                                              MeleeLeftRotationLimit;                      // 0x05D4 (0x0004)
	float                                              MeleeRightRotationLimit;                     // 0x05D8 (0x0004)
	int                                                MeleeAnimationIndex;                         // 0x05DC (0x0004)
	float                                              MeleeStateStartTime;                         // 0x05E0 (0x0004)
	int                                                MeleeParametersID;                           // 0x05E4 (0x0004)
	int                                                MeleeBeatMode;                               // 0x05E8 (0x0004)
	TArray< class ACCInstancePawn* >                   MeleeHurtedPawnList;                         // 0x05EC (0x000C)
	struct FMeleeTraceLimits                           SavedMeleeTraceLimits;                       // 0x05F8 (0x0024)
	TArray< struct FMeleeUnsuccessBeatInfo >           LastMeleeBeatInfos;                          // 0x061C (0x000C)
	float                                              MeleeDefendTime;                             // 0x0628 (0x0004)
	float                                              LastCalculatedSensivity;                     // 0x062C (0x0004)
	float                                              AltProjFireDist;                             // 0x0630 (0x0004)
	float                                              TraceCoeff;                                  // 0x0634 (0x0004)
	float                                              WeaponSpeedModifier;                         // 0x0638 (0x0004)
	float                                              WeaponFireSpeedModifier;                     // 0x063C (0x0004)
	float                                              MaxPowerForGL;                               // 0x0640 (0x0004)
	float                                              MaxTimeForGL;                                // 0x0644 (0x0004)
	float                                              SaveProjSpeedForGL;                          // 0x0648 (0x0004)
	float                                              PowerIncrementForGL;                         // 0x064C (0x0004)
	float                                              WeaponRangeRep;                              // 0x0650 (0x0004)
	float                                              MaxDmgDist;                                  // 0x0654 (0x0004)
	float                                              DmgDist;                                     // 0x0658 (0x0004)
	float                                              WeaponPenetrationModifier;                   // 0x065C (0x0004)
	struct FAttachments                                AttachmentIDs[ 6 ];                          // 0x0660 (0x0018)

	// GrenadeThrowing
	// MeleeDefend
	// Melee
	// Reloading
	// CCWeaponMachineGunFiring
	// CCWeaponFiring
	// CCWeaponFiringBase
	// WeaponPuttingDown
	// WeaponEquipping
	// WeaponVisualHide
	// WeaponVisualGet

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCWeapon" );

		return ClassPointer;
	};

public:
	void my_temp_function ()
	{
		static UFunction* pfnmy_temp_function = NULL;

		if ( !pfnmy_temp_function )
			pfnmy_temp_function = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.my_temp_function" );

		ACCWeapon_execmy_temp_function_Parms my_temp_function_Parms;

		this->ProcessEvent( pfnmy_temp_function, &my_temp_function_Parms, NULL );
	};

	void AbortPlayerGrenadeNoMovement ()
	{
		static UFunction* pfnAbortPlayerGrenadeNoMovement = NULL;

		if ( !pfnAbortPlayerGrenadeNoMovement )
			pfnAbortPlayerGrenadeNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortPlayerGrenadeNoMovement" );

		ACCWeapon_execAbortPlayerGrenadeNoMovement_Parms AbortPlayerGrenadeNoMovement_Parms;

		this->ProcessEvent( pfnAbortPlayerGrenadeNoMovement, &AbortPlayerGrenadeNoMovement_Parms, NULL );
	};

	void StartPlayerGrenadeNoMovement ()
	{
		static UFunction* pfnStartPlayerGrenadeNoMovement = NULL;

		if ( !pfnStartPlayerGrenadeNoMovement )
			pfnStartPlayerGrenadeNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartPlayerGrenadeNoMovement" );

		ACCWeapon_execStartPlayerGrenadeNoMovement_Parms StartPlayerGrenadeNoMovement_Parms;

		this->ProcessEvent( pfnStartPlayerGrenadeNoMovement, &StartPlayerGrenadeNoMovement_Parms, NULL );
	};

	float eventGetTraceRange ()
	{
		static UFunction* pfnGetTraceRange = NULL;

		if ( !pfnGetTraceRange )
			pfnGetTraceRange = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetTraceRange" );

		ACCWeapon_eventGetTraceRange_Parms GetTraceRange_Parms;

		this->ProcessEvent( pfnGetTraceRange, &GetTraceRange_Parms, NULL );

		return GetTraceRange_Parms.ReturnValue;
	};

	void eventdebugMsg ( struct FString S, unsigned long bAddClassName/*CPF_OptionalParm*/, unsigned long bAddStateName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfndebugMsg = NULL;

		if ( !pfndebugMsg )
			pfndebugMsg = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.debugMsg" );

		ACCWeapon_eventdebugMsg_Parms debugMsg_Parms;
		memcpy( &debugMsg_Parms.S, &S, 0xC );
		debugMsg_Parms.bAddClassName = bAddClassName;
		debugMsg_Parms.bAddStateName = bAddStateName;

		this->ProcessEvent( pfndebugMsg, &debugMsg_Parms, NULL );
	};

	bool GetShouldShowCWFTraces ()
	{
		static UFunction* pfnGetShouldShowCWFTraces = NULL;

		if ( !pfnGetShouldShowCWFTraces )
			pfnGetShouldShowCWFTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetShouldShowCWFTraces" );

		ACCWeapon_execGetShouldShowCWFTraces_Parms GetShouldShowCWFTraces_Parms;

		this->ProcessEvent( pfnGetShouldShowCWFTraces, &GetShouldShowCWFTraces_Parms, NULL );

		return GetShouldShowCWFTraces_Parms.ReturnValue;
	};

	bool GetIsHasRemoteClient ()
	{
		static UFunction* pfnGetIsHasRemoteClient = NULL;

		if ( !pfnGetIsHasRemoteClient )
			pfnGetIsHasRemoteClient = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsHasRemoteClient" );

		ACCWeapon_execGetIsHasRemoteClient_Parms GetIsHasRemoteClient_Parms;

		this->ProcessEvent( pfnGetIsHasRemoteClient, &GetIsHasRemoteClient_Parms, NULL );

		return GetIsHasRemoteClient_Parms.ReturnValue;
	};

	bool GetIsLocallyControlledOrBot ()
	{
		static UFunction* pfnGetIsLocallyControlledOrBot = NULL;

		if ( !pfnGetIsLocallyControlledOrBot )
			pfnGetIsLocallyControlledOrBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsLocallyControlledOrBot" );

		ACCWeapon_execGetIsLocallyControlledOrBot_Parms GetIsLocallyControlledOrBot_Parms;

		this->ProcessEvent( pfnGetIsLocallyControlledOrBot, &GetIsLocallyControlledOrBot_Parms, NULL );

		return GetIsLocallyControlledOrBot_Parms.ReturnValue;
	};

	bool GetIsLocallyControlled ()
	{
		static UFunction* pfnGetIsLocallyControlled = NULL;

		if ( !pfnGetIsLocallyControlled )
			pfnGetIsLocallyControlled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsLocallyControlled" );

		ACCWeapon_execGetIsLocallyControlled_Parms GetIsLocallyControlled_Parms;

		this->ProcessEvent( pfnGetIsLocallyControlled, &GetIsLocallyControlled_Parms, NULL );

		return GetIsLocallyControlled_Parms.ReturnValue;
	};

	class ACCInstanceController* GetController ()
	{
		static UFunction* pfnGetController = NULL;

		if ( !pfnGetController )
			pfnGetController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetController" );

		ACCWeapon_execGetController_Parms GetController_Parms;

		this->ProcessEvent( pfnGetController, &GetController_Parms, NULL );

		return GetController_Parms.ReturnValue;
	};

	void* GetClientActionManager ()
	{
		static UFunction* pfnGetClientActionManager = NULL;

		if ( !pfnGetClientActionManager )
			pfnGetClientActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetClientActionManager" );

		ACCWeapon_execGetClientActionManager_Parms GetClientActionManager_Parms;

		this->ProcessEvent( pfnGetClientActionManager, &GetClientActionManager_Parms, NULL );

		return GetClientActionManager_Parms.ReturnValue;
	};

	void* GetServerActionManager ()
	{
		static UFunction* pfnGetServerActionManager = NULL;

		if ( !pfnGetServerActionManager )
			pfnGetServerActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetServerActionManager" );

		ACCWeapon_execGetServerActionManager_Parms GetServerActionManager_Parms;

		this->ProcessEvent( pfnGetServerActionManager, &GetServerActionManager_Parms, NULL );

		return GetServerActionManager_Parms.ReturnValue;
	};

	void* GetMainActionManager ()
	{
		static UFunction* pfnGetMainActionManager = NULL;

		if ( !pfnGetMainActionManager )
			pfnGetMainActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetMainActionManager" );

		ACCWeapon_execGetMainActionManager_Parms GetMainActionManager_Parms;

		this->ProcessEvent( pfnGetMainActionManager, &GetMainActionManager_Parms, NULL );

		return GetMainActionManager_Parms.ReturnValue;
	};

	void DetachWeapon ()
	{
		static UFunction* pfnDetachWeapon = NULL;

		if ( !pfnDetachWeapon )
			pfnDetachWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DetachWeapon" );

		ACCWeapon_execDetachWeapon_Parms DetachWeapon_Parms;

		this->ProcessEvent( pfnDetachWeapon, &DetachWeapon_Parms, NULL );
	};

	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAttachWeaponTo = NULL;

		if ( !pfnAttachWeaponTo )
			pfnAttachWeaponTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AttachWeaponTo" );

		ACCWeapon_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
		AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
		memcpy( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
	};

	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGivenTo = NULL;

		if ( !pfnGivenTo )
			pfnGivenTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GivenTo" );

		ACCWeapon_execGivenTo_Parms GivenTo_Parms;
		GivenTo_Parms.thisPawn = thisPawn;
		GivenTo_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnGivenTo, &GivenTo_Parms, NULL );
	};

	void PutDownWeapon ()
	{
		static UFunction* pfnPutDownWeapon = NULL;

		if ( !pfnPutDownWeapon )
			pfnPutDownWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PutDownWeapon" );

		ACCWeapon_execPutDownWeapon_Parms PutDownWeapon_Parms;

		this->ProcessEvent( pfnPutDownWeapon, &PutDownWeapon_Parms, NULL );
	};

	bool TryPutDown ()
	{
		static UFunction* pfnTryPutDown = NULL;

		if ( !pfnTryPutDown )
			pfnTryPutDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TryPutDown" );

		ACCWeapon_execTryPutDown_Parms TryPutDown_Parms;

		this->ProcessEvent( pfnTryPutDown, &TryPutDown_Parms, NULL );

		return TryPutDown_Parms.ReturnValue;
	};

	void Activate ()
	{
		static UFunction* pfnActivate = NULL;

		if ( !pfnActivate )
			pfnActivate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Activate" );

		ACCWeapon_execActivate_Parms Activate_Parms;

		this->ProcessEvent( pfnActivate, &Activate_Parms, NULL );
	};

	struct FRotator GetGrenadeAutoAim ( struct FVector StartFireLoc, struct FVector DestLoc, float Speed )
	{
		static UFunction* pfnGetGrenadeAutoAim = NULL;

		if ( !pfnGetGrenadeAutoAim )
			pfnGetGrenadeAutoAim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetGrenadeAutoAim" );

		ACCWeapon_execGetGrenadeAutoAim_Parms GetGrenadeAutoAim_Parms;
		memcpy( &GetGrenadeAutoAim_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &GetGrenadeAutoAim_Parms.DestLoc, &DestLoc, 0xC );
		GetGrenadeAutoAim_Parms.Speed = Speed;

		this->ProcessEvent( pfnGetGrenadeAutoAim, &GetGrenadeAutoAim_Parms, NULL );

		return GetGrenadeAutoAim_Parms.ReturnValue;
	};

	float ModifyGrenadeCheckErrorFor ( class AActor* HitActor, float GrenadeCheckError )
	{
		static UFunction* pfnModifyGrenadeCheckErrorFor = NULL;

		if ( !pfnModifyGrenadeCheckErrorFor )
			pfnModifyGrenadeCheckErrorFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ModifyGrenadeCheckErrorFor" );

		ACCWeapon_execModifyGrenadeCheckErrorFor_Parms ModifyGrenadeCheckErrorFor_Parms;
		ModifyGrenadeCheckErrorFor_Parms.HitActor = HitActor;
		ModifyGrenadeCheckErrorFor_Parms.GrenadeCheckError = GrenadeCheckError;

		this->ProcessEvent( pfnModifyGrenadeCheckErrorFor, &ModifyGrenadeCheckErrorFor_Parms, NULL );

		return ModifyGrenadeCheckErrorFor_Parms.ReturnValue;
	};

	struct FVector GetGrenadeAutoAimDest ( struct FVector StartFireLoc, float Speed, float MaxGrenadeAddAngle, float TraceRange, float MaxFlyTime, float MaxGrenadeCheckError, int Penetration, void* DrawDebugProxy/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetGrenadeAutoAimDest = NULL;

		if ( !pfnGetGrenadeAutoAimDest )
			pfnGetGrenadeAutoAimDest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetGrenadeAutoAimDest" );

		ACCWeapon_execGetGrenadeAutoAimDest_Parms GetGrenadeAutoAimDest_Parms;
		memcpy( &GetGrenadeAutoAimDest_Parms.StartFireLoc, &StartFireLoc, 0xC );
		GetGrenadeAutoAimDest_Parms.Speed = Speed;
		GetGrenadeAutoAimDest_Parms.MaxGrenadeAddAngle = MaxGrenadeAddAngle;
		GetGrenadeAutoAimDest_Parms.TraceRange = TraceRange;
		GetGrenadeAutoAimDest_Parms.MaxFlyTime = MaxFlyTime;
		GetGrenadeAutoAimDest_Parms.MaxGrenadeCheckError = MaxGrenadeCheckError;
		GetGrenadeAutoAimDest_Parms.Penetration = Penetration;
		GetGrenadeAutoAimDest_Parms.DrawDebugProxy = DrawDebugProxy;

		this->ProcessEvent( pfnGetGrenadeAutoAimDest, &GetGrenadeAutoAimDest_Parms, NULL );

		return GetGrenadeAutoAimDest_Parms.ReturnValue;
	};

	struct FRotator GetGrenadeLauncherAutoAim ( struct FVector StartFireLoc )
	{
		static UFunction* pfnGetGrenadeLauncherAutoAim = NULL;

		if ( !pfnGetGrenadeLauncherAutoAim )
			pfnGetGrenadeLauncherAutoAim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetGrenadeLauncherAutoAim" );

		ACCWeapon_execGetGrenadeLauncherAutoAim_Parms GetGrenadeLauncherAutoAim_Parms;
		memcpy( &GetGrenadeLauncherAutoAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

		this->ProcessEvent( pfnGetGrenadeLauncherAutoAim, &GetGrenadeLauncherAutoAim_Parms, NULL );

		return GetGrenadeLauncherAutoAim_Parms.ReturnValue;
	};

	void ServerReplicateGrenadeRelease ( struct FVector StartFireLoc, struct FVector DestFireLoc )
	{
		static UFunction* pfnServerReplicateGrenadeRelease = NULL;

		if ( !pfnServerReplicateGrenadeRelease )
			pfnServerReplicateGrenadeRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerReplicateGrenadeRelease" );

		ACCWeapon_execServerReplicateGrenadeRelease_Parms ServerReplicateGrenadeRelease_Parms;
		memcpy( &ServerReplicateGrenadeRelease_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &ServerReplicateGrenadeRelease_Parms.DestFireLoc, &DestFireLoc, 0xC );

		this->ProcessEvent( pfnServerReplicateGrenadeRelease, &ServerReplicateGrenadeRelease_Parms, NULL );
	};

	void ReplicateGrenadeRelease ()
	{
		static UFunction* pfnReplicateGrenadeRelease = NULL;

		if ( !pfnReplicateGrenadeRelease )
			pfnReplicateGrenadeRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ReplicateGrenadeRelease" );

		ACCWeapon_execReplicateGrenadeRelease_Parms ReplicateGrenadeRelease_Parms;

		this->ProcessEvent( pfnReplicateGrenadeRelease, &ReplicateGrenadeRelease_Parms, NULL );
	};

	bool ThrowGrenade ( void* GrenadePreset, unsigned long bTest )
	{
		static UFunction* pfnThrowGrenade = NULL;

		if ( !pfnThrowGrenade )
			pfnThrowGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ThrowGrenade" );

		ACCWeapon_execThrowGrenade_Parms ThrowGrenade_Parms;
		ThrowGrenade_Parms.GrenadePreset = GrenadePreset;
		ThrowGrenade_Parms.bTest = bTest;

		this->ProcessEvent( pfnThrowGrenade, &ThrowGrenade_Parms, NULL );

		return ThrowGrenade_Parms.ReturnValue;
	};

	void BuildGrenadeInfo ( class AController* InstigatorController, void* Preset, class ACCProjectile* Archetype, float Speed, unsigned long pedobomba/*CPF_OptionalParm*/, struct FCustomProjectileFire* GrenadeInfo )
	{
		static UFunction* pfnBuildGrenadeInfo = NULL;

		if ( !pfnBuildGrenadeInfo )
			pfnBuildGrenadeInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.BuildGrenadeInfo" );

		ACCWeapon_execBuildGrenadeInfo_Parms BuildGrenadeInfo_Parms;
		BuildGrenadeInfo_Parms.InstigatorController = InstigatorController;
		BuildGrenadeInfo_Parms.Preset = Preset;
		BuildGrenadeInfo_Parms.Archetype = Archetype;
		BuildGrenadeInfo_Parms.Speed = Speed;
		BuildGrenadeInfo_Parms.pedobomba = pedobomba;

		this->ProcessEvent( pfnBuildGrenadeInfo, &BuildGrenadeInfo_Parms, NULL );

		if ( GrenadeInfo )
			memcpy( GrenadeInfo, &BuildGrenadeInfo_Parms.GrenadeInfo, 0x6C ); // CPF_OutParm
	};

	void ProcessGrenadeRelease ( struct FVector StartFireLoc, struct FVector DestFireLoc, unsigned long bFallenOut )
	{
		static UFunction* pfnProcessGrenadeRelease = NULL;

		if ( !pfnProcessGrenadeRelease )
			pfnProcessGrenadeRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProcessGrenadeRelease" );

		ACCWeapon_execProcessGrenadeRelease_Parms ProcessGrenadeRelease_Parms;
		memcpy( &ProcessGrenadeRelease_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &ProcessGrenadeRelease_Parms.DestFireLoc, &DestFireLoc, 0xC );
		ProcessGrenadeRelease_Parms.bFallenOut = bFallenOut;

		this->ProcessEvent( pfnProcessGrenadeRelease, &ProcessGrenadeRelease_Parms, NULL );
	};

	void AbortThrowGrenade ()
	{
		static UFunction* pfnAbortThrowGrenade = NULL;

		if ( !pfnAbortThrowGrenade )
			pfnAbortThrowGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortThrowGrenade" );

		ACCWeapon_execAbortThrowGrenade_Parms AbortThrowGrenade_Parms;

		this->ProcessEvent( pfnAbortThrowGrenade, &AbortThrowGrenade_Parms, NULL );
	};

	void ServerAbortPlayerGrenadeNoMovement ()
	{
		static UFunction* pfnServerAbortPlayerGrenadeNoMovement = NULL;

		if ( !pfnServerAbortPlayerGrenadeNoMovement )
			pfnServerAbortPlayerGrenadeNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerAbortPlayerGrenadeNoMovement" );

		ACCWeapon_execServerAbortPlayerGrenadeNoMovement_Parms ServerAbortPlayerGrenadeNoMovement_Parms;

		this->ProcessEvent( pfnServerAbortPlayerGrenadeNoMovement, &ServerAbortPlayerGrenadeNoMovement_Parms, NULL );
	};

	void ServerAbortPlayerGrenadeNoMovementInternal ()
	{
		static UFunction* pfnServerAbortPlayerGrenadeNoMovementInternal = NULL;

		if ( !pfnServerAbortPlayerGrenadeNoMovementInternal )
			pfnServerAbortPlayerGrenadeNoMovementInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerAbortPlayerGrenadeNoMovementInternal" );

		ACCWeapon_execServerAbortPlayerGrenadeNoMovementInternal_Parms ServerAbortPlayerGrenadeNoMovementInternal_Parms;

		this->ProcessEvent( pfnServerAbortPlayerGrenadeNoMovementInternal, &ServerAbortPlayerGrenadeNoMovementInternal_Parms, NULL );
	};

	void ServerStartPlayerGrenadeNoMovement ()
	{
		static UFunction* pfnServerStartPlayerGrenadeNoMovement = NULL;

		if ( !pfnServerStartPlayerGrenadeNoMovement )
			pfnServerStartPlayerGrenadeNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerStartPlayerGrenadeNoMovement" );

		ACCWeapon_execServerStartPlayerGrenadeNoMovement_Parms ServerStartPlayerGrenadeNoMovement_Parms;

		this->ProcessEvent( pfnServerStartPlayerGrenadeNoMovement, &ServerStartPlayerGrenadeNoMovement_Parms, NULL );
	};

	void ServerStartPlayerGrenadeNoMovementInternal ()
	{
		static UFunction* pfnServerStartPlayerGrenadeNoMovementInternal = NULL;

		if ( !pfnServerStartPlayerGrenadeNoMovementInternal )
			pfnServerStartPlayerGrenadeNoMovementInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerStartPlayerGrenadeNoMovementInternal" );

		ACCWeapon_execServerStartPlayerGrenadeNoMovementInternal_Parms ServerStartPlayerGrenadeNoMovementInternal_Parms;

		this->ProcessEvent( pfnServerStartPlayerGrenadeNoMovementInternal, &ServerStartPlayerGrenadeNoMovementInternal_Parms, NULL );
	};

	void AbortMeleeDefend ()
	{
		static UFunction* pfnAbortMeleeDefend = NULL;

		if ( !pfnAbortMeleeDefend )
			pfnAbortMeleeDefend = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortMeleeDefend" );

		ACCWeapon_execAbortMeleeDefend_Parms AbortMeleeDefend_Parms;

		this->ProcessEvent( pfnAbortMeleeDefend, &AbortMeleeDefend_Parms, NULL );
	};

	bool StartMeleeDefend ( unsigned long bTest )
	{
		static UFunction* pfnStartMeleeDefend = NULL;

		if ( !pfnStartMeleeDefend )
			pfnStartMeleeDefend = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartMeleeDefend" );

		ACCWeapon_execStartMeleeDefend_Parms StartMeleeDefend_Parms;
		StartMeleeDefend_Parms.bTest = bTest;

		this->ProcessEvent( pfnStartMeleeDefend, &StartMeleeDefend_Parms, NULL );

		return StartMeleeDefend_Parms.ReturnValue;
	};

	struct FMeleeTraceLimitsEntry CalcLocalSpaceTraceLimitsEntry ( struct FMeleeTraceLimits* Limits, struct FMeleeTraceLimitsEntry* Entry )
	{
		static UFunction* pfnCalcLocalSpaceTraceLimitsEntry = NULL;

		if ( !pfnCalcLocalSpaceTraceLimitsEntry )
			pfnCalcLocalSpaceTraceLimitsEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcLocalSpaceTraceLimitsEntry" );

		ACCWeapon_execCalcLocalSpaceTraceLimitsEntry_Parms CalcLocalSpaceTraceLimitsEntry_Parms;

		this->ProcessEvent( pfnCalcLocalSpaceTraceLimitsEntry, &CalcLocalSpaceTraceLimitsEntry_Parms, NULL );

		if ( Limits )
			memcpy( Limits, &CalcLocalSpaceTraceLimitsEntry_Parms.Limits, 0x24 ); // CPF_OutParm
		if ( Entry )
			memcpy( Entry, &CalcLocalSpaceTraceLimitsEntry_Parms.Entry, 0x18 ); // CPF_OutParm

		return CalcLocalSpaceTraceLimitsEntry_Parms.ReturnValue;
	};

	struct FMeleeTraceLimitsEntry CalcWorldSpaceTraceLimitsEntry ( struct FMeleeTraceLimits* Limits, struct FMeleeTraceLimitsEntry* Entry )
	{
		static UFunction* pfnCalcWorldSpaceTraceLimitsEntry = NULL;

		if ( !pfnCalcWorldSpaceTraceLimitsEntry )
			pfnCalcWorldSpaceTraceLimitsEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcWorldSpaceTraceLimitsEntry" );

		ACCWeapon_execCalcWorldSpaceTraceLimitsEntry_Parms CalcWorldSpaceTraceLimitsEntry_Parms;

		this->ProcessEvent( pfnCalcWorldSpaceTraceLimitsEntry, &CalcWorldSpaceTraceLimitsEntry_Parms, NULL );

		if ( Limits )
			memcpy( Limits, &CalcWorldSpaceTraceLimitsEntry_Parms.Limits, 0x24 ); // CPF_OutParm
		if ( Entry )
			memcpy( Entry, &CalcWorldSpaceTraceLimitsEntry_Parms.Entry, 0x18 ); // CPF_OutParm

		return CalcWorldSpaceTraceLimitsEntry_Parms.ReturnValue;
	};

	void AbortPlayerMeleeMovement ()
	{
		static UFunction* pfnAbortPlayerMeleeMovement = NULL;

		if ( !pfnAbortPlayerMeleeMovement )
			pfnAbortPlayerMeleeMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortPlayerMeleeMovement" );

		ACCWeapon_execAbortPlayerMeleeMovement_Parms AbortPlayerMeleeMovement_Parms;

		this->ProcessEvent( pfnAbortPlayerMeleeMovement, &AbortPlayerMeleeMovement_Parms, NULL );
	};

	void UpdateMeleeInitialViewRotation ()
	{
		static UFunction* pfnUpdateMeleeInitialViewRotation = NULL;

		if ( !pfnUpdateMeleeInitialViewRotation )
			pfnUpdateMeleeInitialViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateMeleeInitialViewRotation" );

		ACCWeapon_execUpdateMeleeInitialViewRotation_Parms UpdateMeleeInitialViewRotation_Parms;

		this->ProcessEvent( pfnUpdateMeleeInitialViewRotation, &UpdateMeleeInitialViewRotation_Parms, NULL );
	};

	void StartPlayerMeleeMovement ()
	{
		static UFunction* pfnStartPlayerMeleeMovement = NULL;

		if ( !pfnStartPlayerMeleeMovement )
			pfnStartPlayerMeleeMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartPlayerMeleeMovement" );

		ACCWeapon_execStartPlayerMeleeMovement_Parms StartPlayerMeleeMovement_Parms;

		this->ProcessEvent( pfnStartPlayerMeleeMovement, &StartPlayerMeleeMovement_Parms, NULL );
	};

	float GetCurrentMeleeBeatTime ()
	{
		static UFunction* pfnGetCurrentMeleeBeatTime = NULL;

		if ( !pfnGetCurrentMeleeBeatTime )
			pfnGetCurrentMeleeBeatTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetCurrentMeleeBeatTime" );

		ACCWeapon_execGetCurrentMeleeBeatTime_Parms GetCurrentMeleeBeatTime_Parms;

		this->ProcessEvent( pfnGetCurrentMeleeBeatTime, &GetCurrentMeleeBeatTime_Parms, NULL );

		return GetCurrentMeleeBeatTime_Parms.ReturnValue;
	};

	void ServerPeekMeleeParameters ( int Pid, int Bmd )
	{
		static UFunction* pfnServerPeekMeleeParameters = NULL;

		if ( !pfnServerPeekMeleeParameters )
			pfnServerPeekMeleeParameters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerPeekMeleeParameters" );

		ACCWeapon_execServerPeekMeleeParameters_Parms ServerPeekMeleeParameters_Parms;
		ServerPeekMeleeParameters_Parms.Pid = Pid;
		ServerPeekMeleeParameters_Parms.Bmd = Bmd;

		this->ProcessEvent( pfnServerPeekMeleeParameters, &ServerPeekMeleeParameters_Parms, NULL );
	};

	void ServerPeekMeleeParametersInternal ( int Pid, int Bmd )
	{
		static UFunction* pfnServerPeekMeleeParametersInternal = NULL;

		if ( !pfnServerPeekMeleeParametersInternal )
			pfnServerPeekMeleeParametersInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerPeekMeleeParametersInternal" );

		ACCWeapon_execServerPeekMeleeParametersInternal_Parms ServerPeekMeleeParametersInternal_Parms;
		ServerPeekMeleeParametersInternal_Parms.Pid = Pid;
		ServerPeekMeleeParametersInternal_Parms.Bmd = Bmd;

		this->ProcessEvent( pfnServerPeekMeleeParametersInternal, &ServerPeekMeleeParametersInternal_Parms, NULL );
	};

	void ServerProcessMeleeHits ( unsigned long bRealRPCCall, struct FVector MeleeStartTrace, struct FVector MeleeEndTrace )
	{
		static UFunction* pfnServerProcessMeleeHits = NULL;

		if ( !pfnServerProcessMeleeHits )
			pfnServerProcessMeleeHits = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerProcessMeleeHits" );

		ACCWeapon_execServerProcessMeleeHits_Parms ServerProcessMeleeHits_Parms;
		ServerProcessMeleeHits_Parms.bRealRPCCall = bRealRPCCall;
		memcpy( &ServerProcessMeleeHits_Parms.MeleeStartTrace, &MeleeStartTrace, 0xC );
		memcpy( &ServerProcessMeleeHits_Parms.MeleeEndTrace, &MeleeEndTrace, 0xC );

		this->ProcessEvent( pfnServerProcessMeleeHits, &ServerProcessMeleeHits_Parms, NULL );
	};

	void ServerProcessMeleeHitsInternal ( unsigned long bRealRPCCall, struct FVector MeleeStartTrace, struct FVector MeleeEndTrace )
	{
		static UFunction* pfnServerProcessMeleeHitsInternal = NULL;

		if ( !pfnServerProcessMeleeHitsInternal )
			pfnServerProcessMeleeHitsInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerProcessMeleeHitsInternal" );

		ACCWeapon_execServerProcessMeleeHitsInternal_Parms ServerProcessMeleeHitsInternal_Parms;
		ServerProcessMeleeHitsInternal_Parms.bRealRPCCall = bRealRPCCall;
		memcpy( &ServerProcessMeleeHitsInternal_Parms.MeleeStartTrace, &MeleeStartTrace, 0xC );
		memcpy( &ServerProcessMeleeHitsInternal_Parms.MeleeEndTrace, &MeleeEndTrace, 0xC );

		this->ProcessEvent( pfnServerProcessMeleeHitsInternal, &ServerProcessMeleeHitsInternal_Parms, NULL );
	};

	void ServerSetUnsuccessBeat ( int PrmsID, int Bmd, float TimeOut )
	{
		static UFunction* pfnServerSetUnsuccessBeat = NULL;

		if ( !pfnServerSetUnsuccessBeat )
			pfnServerSetUnsuccessBeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerSetUnsuccessBeat" );

		ACCWeapon_execServerSetUnsuccessBeat_Parms ServerSetUnsuccessBeat_Parms;
		ServerSetUnsuccessBeat_Parms.PrmsID = PrmsID;
		ServerSetUnsuccessBeat_Parms.Bmd = Bmd;
		ServerSetUnsuccessBeat_Parms.TimeOut = TimeOut;

		this->ProcessEvent( pfnServerSetUnsuccessBeat, &ServerSetUnsuccessBeat_Parms, NULL );
	};

	void SetUnsuccessBeat ( int PrmsID, int Bmd, float TimeOut )
	{
		static UFunction* pfnSetUnsuccessBeat = NULL;

		if ( !pfnSetUnsuccessBeat )
			pfnSetUnsuccessBeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetUnsuccessBeat" );

		ACCWeapon_execSetUnsuccessBeat_Parms SetUnsuccessBeat_Parms;
		SetUnsuccessBeat_Parms.PrmsID = PrmsID;
		SetUnsuccessBeat_Parms.Bmd = Bmd;
		SetUnsuccessBeat_Parms.TimeOut = TimeOut;

		this->ProcessEvent( pfnSetUnsuccessBeat, &SetUnsuccessBeat_Parms, NULL );
	};

	bool MeleeIsInUnsuccessBeatTimeout ( int PrmsID, int Bmd )
	{
		static UFunction* pfnMeleeIsInUnsuccessBeatTimeout = NULL;

		if ( !pfnMeleeIsInUnsuccessBeatTimeout )
			pfnMeleeIsInUnsuccessBeatTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.MeleeIsInUnsuccessBeatTimeout" );

		ACCWeapon_execMeleeIsInUnsuccessBeatTimeout_Parms MeleeIsInUnsuccessBeatTimeout_Parms;
		MeleeIsInUnsuccessBeatTimeout_Parms.PrmsID = PrmsID;
		MeleeIsInUnsuccessBeatTimeout_Parms.Bmd = Bmd;

		this->ProcessEvent( pfnMeleeIsInUnsuccessBeatTimeout, &MeleeIsInUnsuccessBeatTimeout_Parms, NULL );

		return MeleeIsInUnsuccessBeatTimeout_Parms.ReturnValue;
	};

	bool MeleeIsSuccessBeat ( class AActor* LastHitActor, class ACCInstancePawn* OwnerPawn )
	{
		static UFunction* pfnMeleeIsSuccessBeat = NULL;

		if ( !pfnMeleeIsSuccessBeat )
			pfnMeleeIsSuccessBeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.MeleeIsSuccessBeat" );

		ACCWeapon_execMeleeIsSuccessBeat_Parms MeleeIsSuccessBeat_Parms;
		MeleeIsSuccessBeat_Parms.LastHitActor = LastHitActor;
		MeleeIsSuccessBeat_Parms.OwnerPawn = OwnerPawn;

		this->ProcessEvent( pfnMeleeIsSuccessBeat, &MeleeIsSuccessBeat_Parms, NULL );

		return MeleeIsSuccessBeat_Parms.ReturnValue;
	};

	float ComputeMeleeDamage ( class ACCInstancePawn* Sender, int BeatMode, float BaseDamage, class AActor* Victim )
	{
		static UFunction* pfnComputeMeleeDamage = NULL;

		if ( !pfnComputeMeleeDamage )
			pfnComputeMeleeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ComputeMeleeDamage" );

		ACCWeapon_execComputeMeleeDamage_Parms ComputeMeleeDamage_Parms;
		ComputeMeleeDamage_Parms.Sender = Sender;
		ComputeMeleeDamage_Parms.BeatMode = BeatMode;
		ComputeMeleeDamage_Parms.BaseDamage = BaseDamage;
		ComputeMeleeDamage_Parms.Victim = Victim;

		this->ProcessEvent( pfnComputeMeleeDamage, &ComputeMeleeDamage_Parms, NULL );

		return ComputeMeleeDamage_Parms.ReturnValue;
	};

	void PeekMeleeParameters ()
	{
		static UFunction* pfnPeekMeleeParameters = NULL;

		if ( !pfnPeekMeleeParameters )
			pfnPeekMeleeParameters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PeekMeleeParameters" );

		ACCWeapon_execPeekMeleeParameters_Parms PeekMeleeParameters_Parms;

		this->ProcessEvent( pfnPeekMeleeParameters, &PeekMeleeParameters_Parms, NULL );
	};

	int DetermineMeleeBeatMode ( int ParamsId )
	{
		static UFunction* pfnDetermineMeleeBeatMode = NULL;

		if ( !pfnDetermineMeleeBeatMode )
			pfnDetermineMeleeBeatMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DetermineMeleeBeatMode" );

		ACCWeapon_execDetermineMeleeBeatMode_Parms DetermineMeleeBeatMode_Parms;
		DetermineMeleeBeatMode_Parms.ParamsId = ParamsId;

		this->ProcessEvent( pfnDetermineMeleeBeatMode, &DetermineMeleeBeatMode_Parms, NULL );

		return DetermineMeleeBeatMode_Parms.ReturnValue;
	};

	int DetermineMeleeParametersID ()
	{
		static UFunction* pfnDetermineMeleeParametersID = NULL;

		if ( !pfnDetermineMeleeParametersID )
			pfnDetermineMeleeParametersID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DetermineMeleeParametersID" );

		ACCWeapon_execDetermineMeleeParametersID_Parms DetermineMeleeParametersID_Parms;

		this->ProcessEvent( pfnDetermineMeleeParametersID, &DetermineMeleeParametersID_Parms, NULL );

		return DetermineMeleeParametersID_Parms.ReturnValue;
	};

	void DetermineMeleeParametersIDAndBeatMode ( int* ParamsId, int* Mode )
	{
		static UFunction* pfnDetermineMeleeParametersIDAndBeatMode = NULL;

		if ( !pfnDetermineMeleeParametersIDAndBeatMode )
			pfnDetermineMeleeParametersIDAndBeatMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DetermineMeleeParametersIDAndBeatMode" );

		ACCWeapon_execDetermineMeleeParametersIDAndBeatMode_Parms DetermineMeleeParametersIDAndBeatMode_Parms;

		this->ProcessEvent( pfnDetermineMeleeParametersIDAndBeatMode, &DetermineMeleeParametersIDAndBeatMode_Parms, NULL );

		if ( ParamsId )
			*ParamsId = DetermineMeleeParametersIDAndBeatMode_Parms.ParamsId; // CPF_OutParm
		if ( Mode )
			*Mode = DetermineMeleeParametersIDAndBeatMode_Parms.Mode; // CPF_OutParm
	};

	bool DetermineMeleeCanBeStarted ()
	{
		static UFunction* pfnDetermineMeleeCanBeStarted = NULL;

		if ( !pfnDetermineMeleeCanBeStarted )
			pfnDetermineMeleeCanBeStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DetermineMeleeCanBeStarted" );

		ACCWeapon_execDetermineMeleeCanBeStarted_Parms DetermineMeleeCanBeStarted_Parms;

		this->ProcessEvent( pfnDetermineMeleeCanBeStarted, &DetermineMeleeCanBeStarted_Parms, NULL );

		return DetermineMeleeCanBeStarted_Parms.ReturnValue;
	};

	void MeleeCanBeStartedUpdated ()
	{
		static UFunction* pfnMeleeCanBeStartedUpdated = NULL;

		if ( !pfnMeleeCanBeStartedUpdated )
			pfnMeleeCanBeStartedUpdated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.MeleeCanBeStartedUpdated" );

		ACCWeapon_execMeleeCanBeStartedUpdated_Parms MeleeCanBeStartedUpdated_Parms;

		this->ProcessEvent( pfnMeleeCanBeStartedUpdated, &MeleeCanBeStartedUpdated_Parms, NULL );
	};

	void ServerSetMeleeCanBeStarted ( unsigned long bValue )
	{
		static UFunction* pfnServerSetMeleeCanBeStarted = NULL;

		if ( !pfnServerSetMeleeCanBeStarted )
			pfnServerSetMeleeCanBeStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerSetMeleeCanBeStarted" );

		ACCWeapon_execServerSetMeleeCanBeStarted_Parms ServerSetMeleeCanBeStarted_Parms;
		ServerSetMeleeCanBeStarted_Parms.bValue = bValue;

		this->ProcessEvent( pfnServerSetMeleeCanBeStarted, &ServerSetMeleeCanBeStarted_Parms, NULL );
	};

	void UpdateMeleeCanBeStarted ( unsigned long bValue )
	{
		static UFunction* pfnUpdateMeleeCanBeStarted = NULL;

		if ( !pfnUpdateMeleeCanBeStarted )
			pfnUpdateMeleeCanBeStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateMeleeCanBeStarted" );

		ACCWeapon_execUpdateMeleeCanBeStarted_Parms UpdateMeleeCanBeStarted_Parms;
		UpdateMeleeCanBeStarted_Parms.bValue = bValue;

		this->ProcessEvent( pfnUpdateMeleeCanBeStarted, &UpdateMeleeCanBeStarted_Parms, NULL );
	};

	bool DoAbortMelee ()
	{
		static UFunction* pfnDoAbortMelee = NULL;

		if ( !pfnDoAbortMelee )
			pfnDoAbortMelee = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DoAbortMelee" );

		ACCWeapon_execDoAbortMelee_Parms DoAbortMelee_Parms;

		this->ProcessEvent( pfnDoAbortMelee, &DoAbortMelee_Parms, NULL );

		return DoAbortMelee_Parms.ReturnValue;
	};

	bool DoStartMelee ( unsigned long bTest )
	{
		static UFunction* pfnDoStartMelee = NULL;

		if ( !pfnDoStartMelee )
			pfnDoStartMelee = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.DoStartMelee" );

		ACCWeapon_execDoStartMelee_Parms DoStartMelee_Parms;
		DoStartMelee_Parms.bTest = bTest;

		this->ProcessEvent( pfnDoStartMelee, &DoStartMelee_Parms, NULL );

		return DoStartMelee_Parms.ReturnValue;
	};

	void AbortMelee ()
	{
		static UFunction* pfnAbortMelee = NULL;

		if ( !pfnAbortMelee )
			pfnAbortMelee = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortMelee" );

		ACCWeapon_execAbortMelee_Parms AbortMelee_Parms;

		this->ProcessEvent( pfnAbortMelee, &AbortMelee_Parms, NULL );
	};

	void ServerStartMeleeOnWeaponAttachment ( int BeatMode, float StartTime, float Time, float FullTime, float BackBlendTime, unsigned char AnimationType, int AnimationIndex )
	{
		static UFunction* pfnServerStartMeleeOnWeaponAttachment = NULL;

		if ( !pfnServerStartMeleeOnWeaponAttachment )
			pfnServerStartMeleeOnWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerStartMeleeOnWeaponAttachment" );

		ACCWeapon_execServerStartMeleeOnWeaponAttachment_Parms ServerStartMeleeOnWeaponAttachment_Parms;
		ServerStartMeleeOnWeaponAttachment_Parms.BeatMode = BeatMode;
		ServerStartMeleeOnWeaponAttachment_Parms.StartTime = StartTime;
		ServerStartMeleeOnWeaponAttachment_Parms.Time = Time;
		ServerStartMeleeOnWeaponAttachment_Parms.FullTime = FullTime;
		ServerStartMeleeOnWeaponAttachment_Parms.BackBlendTime = BackBlendTime;
		ServerStartMeleeOnWeaponAttachment_Parms.AnimationType = AnimationType;
		ServerStartMeleeOnWeaponAttachment_Parms.AnimationIndex = AnimationIndex;

		this->ProcessEvent( pfnServerStartMeleeOnWeaponAttachment, &ServerStartMeleeOnWeaponAttachment_Parms, NULL );
	};

	void StartMeleeOnWeaponAttachment ( int BeatMode, float StartTime, float Time, float FullTime, float BackBlendTime, unsigned char AnimationType, int AnimationIndex )
	{
		static UFunction* pfnStartMeleeOnWeaponAttachment = NULL;

		if ( !pfnStartMeleeOnWeaponAttachment )
			pfnStartMeleeOnWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartMeleeOnWeaponAttachment" );

		ACCWeapon_execStartMeleeOnWeaponAttachment_Parms StartMeleeOnWeaponAttachment_Parms;
		StartMeleeOnWeaponAttachment_Parms.BeatMode = BeatMode;
		StartMeleeOnWeaponAttachment_Parms.StartTime = StartTime;
		StartMeleeOnWeaponAttachment_Parms.Time = Time;
		StartMeleeOnWeaponAttachment_Parms.FullTime = FullTime;
		StartMeleeOnWeaponAttachment_Parms.BackBlendTime = BackBlendTime;
		StartMeleeOnWeaponAttachment_Parms.AnimationType = AnimationType;
		StartMeleeOnWeaponAttachment_Parms.AnimationIndex = AnimationIndex;

		this->ProcessEvent( pfnStartMeleeOnWeaponAttachment, &StartMeleeOnWeaponAttachment_Parms, NULL );
	};

	void GetGrenadeAmmo ()
	{
		static UFunction* pfnGetGrenadeAmmo = NULL;

		if ( !pfnGetGrenadeAmmo )
			pfnGetGrenadeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetGrenadeAmmo" );

		ACCWeapon_execGetGrenadeAmmo_Parms GetGrenadeAmmo_Parms;

		this->ProcessEvent( pfnGetGrenadeAmmo, &GetGrenadeAmmo_Parms, NULL );
	};

	void GetAmmo ( int Limit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetAmmo = NULL;

		if ( !pfnGetAmmo )
			pfnGetAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetAmmo" );

		ACCWeapon_execGetAmmo_Parms GetAmmo_Parms;
		GetAmmo_Parms.Limit = Limit;

		this->ProcessEvent( pfnGetAmmo, &GetAmmo_Parms, NULL );
	};

	int GetHowManyBulletsCanArm ()
	{
		static UFunction* pfnGetHowManyBulletsCanArm = NULL;

		if ( !pfnGetHowManyBulletsCanArm )
			pfnGetHowManyBulletsCanArm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetHowManyBulletsCanArm" );

		ACCWeapon_execGetHowManyBulletsCanArm_Parms GetHowManyBulletsCanArm_Parms;

		this->ProcessEvent( pfnGetHowManyBulletsCanArm, &GetHowManyBulletsCanArm_Parms, NULL );

		return GetHowManyBulletsCanArm_Parms.ReturnValue;
	};

	bool CheckIfCanReload ()
	{
		static UFunction* pfnCheckIfCanReload = NULL;

		if ( !pfnCheckIfCanReload )
			pfnCheckIfCanReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CheckIfCanReload" );

		ACCWeapon_execCheckIfCanReload_Parms CheckIfCanReload_Parms;

		this->ProcessEvent( pfnCheckIfCanReload, &CheckIfCanReload_Parms, NULL );

		return CheckIfCanReload_Parms.ReturnValue;
	};

	bool GetIsReloading ()
	{
		static UFunction* pfnGetIsReloading = NULL;

		if ( !pfnGetIsReloading )
			pfnGetIsReloading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsReloading" );

		ACCWeapon_execGetIsReloading_Parms GetIsReloading_Parms;

		pfnGetIsReloading->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetIsReloading, &GetIsReloading_Parms, NULL );
		pfnGetIsReloading->FunctionFlags |= 0x400;

		return GetIsReloading_Parms.ReturnValue;
	};

	void AbortReload ()
	{
		static UFunction* pfnAbortReload = NULL;

		if ( !pfnAbortReload )
			pfnAbortReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortReload" );

		ACCWeapon_execAbortReload_Parms AbortReload_Parms;

		this->ProcessEvent( pfnAbortReload, &AbortReload_Parms, NULL );
	};

	bool Reload ( unsigned long bTest )
	{
		static UFunction* pfnReload = NULL;

		if ( !pfnReload )
			pfnReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Reload" );

		ACCWeapon_execReload_Parms Reload_Parms;
		Reload_Parms.bTest = bTest;

		this->ProcessEvent( pfnReload, &Reload_Parms, NULL );

		return Reload_Parms.ReturnValue;
	};

	void ServerAbortAdvReloadForFire ()
	{
		static UFunction* pfnServerAbortAdvReloadForFire = NULL;

		if ( !pfnServerAbortAdvReloadForFire )
			pfnServerAbortAdvReloadForFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerAbortAdvReloadForFire" );

		ACCWeapon_execServerAbortAdvReloadForFire_Parms ServerAbortAdvReloadForFire_Parms;

		this->ProcessEvent( pfnServerAbortAdvReloadForFire, &ServerAbortAdvReloadForFire_Parms, NULL );
	};

	void Set_AI_WantsToDoShots ( int New_AI_WantsToDoShots )
	{
		static UFunction* pfnSet_AI_WantsToDoShots = NULL;

		if ( !pfnSet_AI_WantsToDoShots )
			pfnSet_AI_WantsToDoShots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Set_AI_WantsToDoShots" );

		ACCWeapon_execSet_AI_WantsToDoShots_Parms Set_AI_WantsToDoShots_Parms;
		Set_AI_WantsToDoShots_Parms.New_AI_WantsToDoShots = New_AI_WantsToDoShots;

		this->ProcessEvent( pfnSet_AI_WantsToDoShots, &Set_AI_WantsToDoShots_Parms, NULL );
	};

	void ClearPendingFire ( int FireMode )
	{
		static UFunction* pfnClearPendingFire = NULL;

		if ( !pfnClearPendingFire )
			pfnClearPendingFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ClearPendingFire" );

		ACCWeapon_execClearPendingFire_Parms ClearPendingFire_Parms;
		ClearPendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnClearPendingFire, &ClearPendingFire_Parms, NULL );
	};

	bool PendingFire ( int FireMode )
	{
		static UFunction* pfnPendingFire = NULL;

		if ( !pfnPendingFire )
			pfnPendingFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PendingFire" );

		ACCWeapon_execPendingFire_Parms PendingFire_Parms;
		PendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnPendingFire, &PendingFire_Parms, NULL );

		return PendingFire_Parms.ReturnValue;
	};

	void SetPendingFire ( int FireMode )
	{
		static UFunction* pfnSetPendingFire = NULL;

		if ( !pfnSetPendingFire )
			pfnSetPendingFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetPendingFire" );

		ACCWeapon_execSetPendingFire_Parms SetPendingFire_Parms;
		SetPendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnSetPendingFire, &SetPendingFire_Parms, NULL );
	};

	bool ConditionalStartFire ( unsigned char FireModeNum, unsigned long bTest )
	{
		static UFunction* pfnConditionalStartFire = NULL;

		if ( !pfnConditionalStartFire )
			pfnConditionalStartFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalStartFire" );

		ACCWeapon_execConditionalStartFire_Parms ConditionalStartFire_Parms;
		ConditionalStartFire_Parms.FireModeNum = FireModeNum;
		ConditionalStartFire_Parms.bTest = bTest;

		this->ProcessEvent( pfnConditionalStartFire, &ConditionalStartFire_Parms, NULL );

		return ConditionalStartFire_Parms.ReturnValue;
	};

	void StopFireEffects ( unsigned char FireModeNum )
	{
		static UFunction* pfnStopFireEffects = NULL;

		if ( !pfnStopFireEffects )
			pfnStopFireEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StopFireEffects" );

		ACCWeapon_execStopFireEffects_Parms StopFireEffects_Parms;
		StopFireEffects_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopFireEffects, &StopFireEffects_Parms, NULL );
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector StartTraceLocation/*CPF_OptionalParm*/, struct FVector EndTraceLocation/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayFireEffects = NULL;

		if ( !pfnPlayFireEffects )
			pfnPlayFireEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PlayFireEffects" );

		ACCWeapon_execPlayFireEffects_Parms PlayFireEffects_Parms;
		PlayFireEffects_Parms.FireModeNum = FireModeNum;
		memcpy( &PlayFireEffects_Parms.StartTraceLocation, &StartTraceLocation, 0xC );
		memcpy( &PlayFireEffects_Parms.EndTraceLocation, &EndTraceLocation, 0xC );
		memcpy( &PlayFireEffects_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnPlayFireEffects, &PlayFireEffects_Parms, NULL );
	};

	void PlayFireEffectsLocally ( int ShotFlags )
	{
		static UFunction* pfnPlayFireEffectsLocally = NULL;

		if ( !pfnPlayFireEffectsLocally )
			pfnPlayFireEffectsLocally = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PlayFireEffectsLocally" );

		ACCWeapon_execPlayFireEffectsLocally_Parms PlayFireEffectsLocally_Parms;
		PlayFireEffectsLocally_Parms.ShotFlags = ShotFlags;

		this->ProcessEvent( pfnPlayFireEffectsLocally, &PlayFireEffectsLocally_Parms, NULL );
	};

	float GetFireInterval ( unsigned char FireModeNum )
	{
		static UFunction* pfnGetFireInterval = NULL;

		if ( !pfnGetFireInterval )
			pfnGetFireInterval = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetFireInterval" );

		ACCWeapon_execGetFireInterval_Parms GetFireInterval_Parms;
		GetFireInterval_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnGetFireInterval, &GetFireInterval_Parms, NULL );

		return GetFireInterval_Parms.ReturnValue;
	};

	bool CheckIfNeedsContinueFiringDueToShotsMade ()
	{
		static UFunction* pfnCheckIfNeedsContinueFiringDueToShotsMade = NULL;

		if ( !pfnCheckIfNeedsContinueFiringDueToShotsMade )
			pfnCheckIfNeedsContinueFiringDueToShotsMade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CheckIfNeedsContinueFiringDueToShotsMade" );

		ACCWeapon_execCheckIfNeedsContinueFiringDueToShotsMade_Parms CheckIfNeedsContinueFiringDueToShotsMade_Parms;

		this->ProcessEvent( pfnCheckIfNeedsContinueFiringDueToShotsMade, &CheckIfNeedsContinueFiringDueToShotsMade_Parms, NULL );

		return CheckIfNeedsContinueFiringDueToShotsMade_Parms.ReturnValue;
	};

	void Server_PIH_FinishImpactInfo ()
	{
		static UFunction* pfnServer_PIH_FinishImpactInfo = NULL;

		if ( !pfnServer_PIH_FinishImpactInfo )
			pfnServer_PIH_FinishImpactInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Server_PIH_FinishImpactInfo" );

		ACCWeapon_execServer_PIH_FinishImpactInfo_Parms Server_PIH_FinishImpactInfo_Parms;

		this->ProcessEvent( pfnServer_PIH_FinishImpactInfo, &Server_PIH_FinishImpactInfo_Parms, NULL );
	};

	void Server_PIH_SetImpactInfo ( struct FImpactInfo Impact )
	{
		static UFunction* pfnServer_PIH_SetImpactInfo = NULL;

		if ( !pfnServer_PIH_SetImpactInfo )
			pfnServer_PIH_SetImpactInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Server_PIH_SetImpactInfo" );

		ACCWeapon_execServer_PIH_SetImpactInfo_Parms Server_PIH_SetImpactInfo_Parms;
		memcpy( &Server_PIH_SetImpactInfo_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnServer_PIH_SetImpactInfo, &Server_PIH_SetImpactInfo_Parms, NULL );
	};

	void Server_PIH_ClearImpactInfo ()
	{
		static UFunction* pfnServer_PIH_ClearImpactInfo = NULL;

		if ( !pfnServer_PIH_ClearImpactInfo )
			pfnServer_PIH_ClearImpactInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Server_PIH_ClearImpactInfo" );

		ACCWeapon_execServer_PIH_ClearImpactInfo_Parms Server_PIH_ClearImpactInfo_Parms;

		this->ProcessEvent( pfnServer_PIH_ClearImpactInfo, &Server_PIH_ClearImpactInfo_Parms, NULL );
	};

	bool ImpactNeedsToBeReplicated ( struct FImpactInfo Impact )
	{
		static UFunction* pfnImpactNeedsToBeReplicated = NULL;

		if ( !pfnImpactNeedsToBeReplicated )
			pfnImpactNeedsToBeReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ImpactNeedsToBeReplicated" );

		ACCWeapon_execImpactNeedsToBeReplicated_Parms ImpactNeedsToBeReplicated_Parms;
		memcpy( &ImpactNeedsToBeReplicated_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnImpactNeedsToBeReplicated, &ImpactNeedsToBeReplicated_Parms, NULL );

		return ImpactNeedsToBeReplicated_Parms.ReturnValue;
	};

	void CalcFireingSensitivity ( unsigned long StartFire/*CPF_OptionalParm*/, unsigned long startsprint/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCalcFireingSensitivity = NULL;

		if ( !pfnCalcFireingSensitivity )
			pfnCalcFireingSensitivity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcFireingSensitivity" );

		ACCWeapon_execCalcFireingSensitivity_Parms CalcFireingSensitivity_Parms;
		CalcFireingSensitivity_Parms.StartFire = StartFire;
		CalcFireingSensitivity_Parms.startsprint = startsprint;

		this->ProcessEvent( pfnCalcFireingSensitivity, &CalcFireingSensitivity_Parms, NULL );
	};

	void SetFireingSensitivity ( float basemult/*CPF_OptionalParm*/, float firemult/*CPF_OptionalParm*/, float aimingmult/*CPF_OptionalParm*/, float abilitymult/*CPF_OptionalParm*/, float sprintmult/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetFireingSensitivity = NULL;

		if ( !pfnSetFireingSensitivity )
			pfnSetFireingSensitivity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetFireingSensitivity" );

		ACCWeapon_execSetFireingSensitivity_Parms SetFireingSensitivity_Parms;
		SetFireingSensitivity_Parms.basemult = basemult;
		SetFireingSensitivity_Parms.firemult = firemult;
		SetFireingSensitivity_Parms.aimingmult = aimingmult;
		SetFireingSensitivity_Parms.abilitymult = abilitymult;
		SetFireingSensitivity_Parms.sprintmult = sprintmult;

		this->ProcessEvent( pfnSetFireingSensitivity, &SetFireingSensitivity_Parms, NULL );
	};

	void UpdateSensivity ( float DeltaTime )
	{
		static UFunction* pfnUpdateSensivity = NULL;

		if ( !pfnUpdateSensivity )
			pfnUpdateSensivity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateSensivity" );

		ACCWeapon_execUpdateSensivity_Parms UpdateSensivity_Parms;
		UpdateSensivity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateSensivity, &UpdateSensivity_Parms, NULL );
	};

	void ConditionalUpdateSensivity ( float DeltaTime )
	{
		static UFunction* pfnConditionalUpdateSensivity = NULL;

		if ( !pfnConditionalUpdateSensivity )
			pfnConditionalUpdateSensivity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalUpdateSensivity" );

		ACCWeapon_execConditionalUpdateSensivity_Parms ConditionalUpdateSensivity_Parms;
		ConditionalUpdateSensivity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnConditionalUpdateSensivity, &ConditionalUpdateSensivity_Parms, NULL );
	};

	float sens_ApplyFovModifier ( float BaseSensValue )
	{
		static UFunction* pfnsens_ApplyFovModifier = NULL;

		if ( !pfnsens_ApplyFovModifier )
			pfnsens_ApplyFovModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.sens_ApplyFovModifier" );

		ACCWeapon_execsens_ApplyFovModifier_Parms sens_ApplyFovModifier_Parms;
		sens_ApplyFovModifier_Parms.BaseSensValue = BaseSensValue;

		this->ProcessEvent( pfnsens_ApplyFovModifier, &sens_ApplyFovModifier_Parms, NULL );

		return sens_ApplyFovModifier_Parms.ReturnValue;
	};

	void SetStartShootMachinegun ( unsigned long setstart )
	{
		static UFunction* pfnSetStartShootMachinegun = NULL;

		if ( !pfnSetStartShootMachinegun )
			pfnSetStartShootMachinegun = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetStartShootMachinegun" );

		ACCWeapon_execSetStartShootMachinegun_Parms SetStartShootMachinegun_Parms;
		SetStartShootMachinegun_Parms.setstart = setstart;

		this->ProcessEvent( pfnSetStartShootMachinegun, &SetStartShootMachinegun_Parms, NULL );
	};

	void StopFire_MachineGun ()
	{
		static UFunction* pfnStopFire_MachineGun = NULL;

		if ( !pfnStopFire_MachineGun )
			pfnStopFire_MachineGun = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StopFire_MachineGun" );

		ACCWeapon_execStopFire_MachineGun_Parms StopFire_MachineGun_Parms;

		this->ProcessEvent( pfnStopFire_MachineGun, &StopFire_MachineGun_Parms, NULL );
	};

	void StartFire_MachineGun ()
	{
		static UFunction* pfnStartFire_MachineGun = NULL;

		if ( !pfnStartFire_MachineGun )
			pfnStartFire_MachineGun = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartFire_MachineGun" );

		ACCWeapon_execStartFire_MachineGun_Parms StartFire_MachineGun_Parms;

		this->ProcessEvent( pfnStartFire_MachineGun, &StartFire_MachineGun_Parms, NULL );
	};

	void MachinegunStopFireTimer ()
	{
		static UFunction* pfnMachinegunStopFireTimer = NULL;

		if ( !pfnMachinegunStopFireTimer )
			pfnMachinegunStopFireTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.MachinegunStopFireTimer" );

		ACCWeapon_execMachinegunStopFireTimer_Parms MachinegunStopFireTimer_Parms;

		this->ProcessEvent( pfnMachinegunStopFireTimer, &MachinegunStopFireTimer_Parms, NULL );
	};

	void MachinegunProcessFire ()
	{
		static UFunction* pfnMachinegunProcessFire = NULL;

		if ( !pfnMachinegunProcessFire )
			pfnMachinegunProcessFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.MachinegunProcessFire" );

		ACCWeapon_execMachinegunProcessFire_Parms MachinegunProcessFire_Parms;

		this->ProcessEvent( pfnMachinegunProcessFire, &MachinegunProcessFire_Parms, NULL );
	};

	void AbortFire ()
	{
		static UFunction* pfnAbortFire = NULL;

		if ( !pfnAbortFire )
			pfnAbortFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortFire" );

		ACCWeapon_execAbortFire_Parms AbortFire_Parms;

		this->ProcessEvent( pfnAbortFire, &AbortFire_Parms, NULL );
	};

	void ServerFireAmmunitionInternal ( unsigned long bRealRPCCall, float FireTimeStamp )
	{
		static UFunction* pfnServerFireAmmunitionInternal = NULL;

		if ( !pfnServerFireAmmunitionInternal )
			pfnServerFireAmmunitionInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerFireAmmunitionInternal" );

		ACCWeapon_execServerFireAmmunitionInternal_Parms ServerFireAmmunitionInternal_Parms;
		ServerFireAmmunitionInternal_Parms.bRealRPCCall = bRealRPCCall;
		ServerFireAmmunitionInternal_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnServerFireAmmunitionInternal, &ServerFireAmmunitionInternal_Parms, NULL );
	};

	void ServerFireAmmunition ( unsigned long bRealRPCCall, float FireTimeStamp, struct FVector ShootSpotLocation, struct FRotator ShootSpotRotation )
	{
		static UFunction* pfnServerFireAmmunition = NULL;

		if ( !pfnServerFireAmmunition )
			pfnServerFireAmmunition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerFireAmmunition" );

		ACCWeapon_execServerFireAmmunition_Parms ServerFireAmmunition_Parms;
		ServerFireAmmunition_Parms.bRealRPCCall = bRealRPCCall;
		ServerFireAmmunition_Parms.FireTimeStamp = FireTimeStamp;
		memcpy( &ServerFireAmmunition_Parms.ShootSpotLocation, &ShootSpotLocation, 0xC );
		memcpy( &ServerFireAmmunition_Parms.ShootSpotRotation, &ShootSpotRotation, 0xC );

		this->ProcessEvent( pfnServerFireAmmunition, &ServerFireAmmunition_Parms, NULL );
	};

	void FlashLocationClearTimer ()
	{
		static UFunction* pfnFlashLocationClearTimer = NULL;

		if ( !pfnFlashLocationClearTimer )
			pfnFlashLocationClearTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.FlashLocationClearTimer" );

		ACCWeapon_execFlashLocationClearTimer_Parms FlashLocationClearTimer_Parms;

		this->ProcessEvent( pfnFlashLocationClearTimer, &FlashLocationClearTimer_Parms, NULL );
	};

	float CalcWeaponToPreviousShotTimeLeft ()
	{
		static UFunction* pfnCalcWeaponToPreviousShotTimeLeft = NULL;

		if ( !pfnCalcWeaponToPreviousShotTimeLeft )
			pfnCalcWeaponToPreviousShotTimeLeft = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcWeaponToPreviousShotTimeLeft" );

		ACCWeapon_execCalcWeaponToPreviousShotTimeLeft_Parms CalcWeaponToPreviousShotTimeLeft_Parms;

		this->ProcessEvent( pfnCalcWeaponToPreviousShotTimeLeft, &CalcWeaponToPreviousShotTimeLeft_Parms, NULL );

		return CalcWeaponToPreviousShotTimeLeft_Parms.ReturnValue;
	};

	void ServerPlayPawnFireAnimationEffects ()
	{
		static UFunction* pfnServerPlayPawnFireAnimationEffects = NULL;

		if ( !pfnServerPlayPawnFireAnimationEffects )
			pfnServerPlayPawnFireAnimationEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerPlayPawnFireAnimationEffects" );

		ACCWeapon_execServerPlayPawnFireAnimationEffects_Parms ServerPlayPawnFireAnimationEffects_Parms;

		this->ProcessEvent( pfnServerPlayPawnFireAnimationEffects, &ServerPlayPawnFireAnimationEffects_Parms, NULL );
	};

	void PlayPawnFireAnimationEffects ()
	{
		static UFunction* pfnPlayPawnFireAnimationEffects = NULL;

		if ( !pfnPlayPawnFireAnimationEffects )
			pfnPlayPawnFireAnimationEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PlayPawnFireAnimationEffects" );

		ACCWeapon_execPlayPawnFireAnimationEffects_Parms PlayPawnFireAnimationEffects_Parms;

		this->ProcessEvent( pfnPlayPawnFireAnimationEffects, &PlayPawnFireAnimationEffects_Parms, NULL );
	};

	void ServerStartFiringOnWA ()
	{
		static UFunction* pfnServerStartFiringOnWA = NULL;

		if ( !pfnServerStartFiringOnWA )
			pfnServerStartFiringOnWA = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerStartFiringOnWA" );

		ACCWeapon_execServerStartFiringOnWA_Parms ServerStartFiringOnWA_Parms;

		this->ProcessEvent( pfnServerStartFiringOnWA, &ServerStartFiringOnWA_Parms, NULL );
	};

	void StartFiringOnWA ()
	{
		static UFunction* pfnStartFiringOnWA = NULL;

		if ( !pfnStartFiringOnWA )
			pfnStartFiringOnWA = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartFiringOnWA" );

		ACCWeapon_execStartFiringOnWA_Parms StartFiringOnWA_Parms;

		this->ProcessEvent( pfnStartFiringOnWA, &StartFiringOnWA_Parms, NULL );
	};

	void ServerHandleFinishedFiring ()
	{
		static UFunction* pfnServerHandleFinishedFiring = NULL;

		if ( !pfnServerHandleFinishedFiring )
			pfnServerHandleFinishedFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerHandleFinishedFiring" );

		ACCWeapon_execServerHandleFinishedFiring_Parms ServerHandleFinishedFiring_Parms;

		this->ProcessEvent( pfnServerHandleFinishedFiring, &ServerHandleFinishedFiring_Parms, NULL );
	};

	void HandleFinishedFiring ()
	{
		static UFunction* pfnHandleFinishedFiring = NULL;

		if ( !pfnHandleFinishedFiring )
			pfnHandleFinishedFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.HandleFinishedFiring" );

		ACCWeapon_execHandleFinishedFiring_Parms HandleFinishedFiring_Parms;

		this->ProcessEvent( pfnHandleFinishedFiring, &HandleFinishedFiring_Parms, NULL );
	};

	bool eventIsFiring ()
	{
		static UFunction* pfnIsFiring = NULL;

		if ( !pfnIsFiring )
			pfnIsFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.IsFiring" );

		ACCWeapon_eventIsFiring_Parms IsFiring_Parms;

		this->ProcessEvent( pfnIsFiring, &IsFiring_Parms, NULL );

		return IsFiring_Parms.ReturnValue;
	};

	bool IsFiringInternal ()
	{
		static UFunction* pfnIsFiringInternal = NULL;

		if ( !pfnIsFiringInternal )
			pfnIsFiringInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.IsFiringInternal" );

		ACCWeapon_execIsFiringInternal_Parms IsFiringInternal_Parms;

		pfnIsFiringInternal->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsFiringInternal, &IsFiringInternal_Parms, NULL );
		pfnIsFiringInternal->FunctionFlags |= 0x400;

		return IsFiringInternal_Parms.ReturnValue;
	};

	void FireAmmunition ( float FireTimeStamp )
	{
		static UFunction* pfnFireAmmunition = NULL;

		if ( !pfnFireAmmunition )
			pfnFireAmmunition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.FireAmmunition" );

		ACCWeapon_execFireAmmunition_Parms FireAmmunition_Parms;
		FireAmmunition_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnFireAmmunition, &FireAmmunition_Parms, NULL );
	};

	bool GetIsChangingWeapon ()
	{
		static UFunction* pfnGetIsChangingWeapon = NULL;

		if ( !pfnGetIsChangingWeapon )
			pfnGetIsChangingWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsChangingWeapon" );

		ACCWeapon_execGetIsChangingWeapon_Parms GetIsChangingWeapon_Parms;

		pfnGetIsChangingWeapon->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetIsChangingWeapon, &GetIsChangingWeapon_Parms, NULL );
		pfnGetIsChangingWeapon->FunctionFlags |= 0x400;

		return GetIsChangingWeapon_Parms.ReturnValue;
	};

	void AbortWeaponChange ()
	{
		static UFunction* pfnAbortWeaponChange = NULL;

		if ( !pfnAbortWeaponChange )
			pfnAbortWeaponChange = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AbortWeaponChange" );

		ACCWeapon_execAbortWeaponChange_Parms AbortWeaponChange_Parms;

		this->ProcessEvent( pfnAbortWeaponChange, &AbortWeaponChange_Parms, NULL );
	};

	void ClientPostSwitchWeapon ()
	{
		static UFunction* pfnClientPostSwitchWeapon = NULL;

		if ( !pfnClientPostSwitchWeapon )
			pfnClientPostSwitchWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ClientPostSwitchWeapon" );

		ACCWeapon_execClientPostSwitchWeapon_Parms ClientPostSwitchWeapon_Parms;

		this->ProcessEvent( pfnClientPostSwitchWeapon, &ClientPostSwitchWeapon_Parms, NULL );
	};

	void PostSwitchWeapon ()
	{
		static UFunction* pfnPostSwitchWeapon = NULL;

		if ( !pfnPostSwitchWeapon )
			pfnPostSwitchWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PostSwitchWeapon" );

		ACCWeapon_execPostSwitchWeapon_Parms PostSwitchWeapon_Parms;

		this->ProcessEvent( pfnPostSwitchWeapon, &PostSwitchWeapon_Parms, NULL );
	};

	void ClientSetFiringParameters ( int FireMode, struct FName NewFiringState, unsigned char NewWeaponFireType, float NewDamage, class UClass* NewDamageType, float NewInstantHitMomentum, class UClass* NewWeaponProjectile )
	{
		static UFunction* pfnClientSetFiringParameters = NULL;

		if ( !pfnClientSetFiringParameters )
			pfnClientSetFiringParameters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ClientSetFiringParameters" );

		ACCWeapon_execClientSetFiringParameters_Parms ClientSetFiringParameters_Parms;
		ClientSetFiringParameters_Parms.FireMode = FireMode;
		memcpy( &ClientSetFiringParameters_Parms.NewFiringState, &NewFiringState, 0x8 );
		ClientSetFiringParameters_Parms.NewWeaponFireType = NewWeaponFireType;
		ClientSetFiringParameters_Parms.NewDamage = NewDamage;
		ClientSetFiringParameters_Parms.NewDamageType = NewDamageType;
		ClientSetFiringParameters_Parms.NewInstantHitMomentum = NewInstantHitMomentum;
		ClientSetFiringParameters_Parms.NewWeaponProjectile = NewWeaponProjectile;

		this->ProcessEvent( pfnClientSetFiringParameters, &ClientSetFiringParameters_Parms, NULL );
	};

	struct FName GetWeaponFiringState ()
	{
		static UFunction* pfnGetWeaponFiringState = NULL;

		if ( !pfnGetWeaponFiringState )
			pfnGetWeaponFiringState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetWeaponFiringState" );

		ACCWeapon_execGetWeaponFiringState_Parms GetWeaponFiringState_Parms;

		this->ProcessEvent( pfnGetWeaponFiringState, &GetWeaponFiringState_Parms, NULL );

		return GetWeaponFiringState_Parms.ReturnValue;
	};

	float GetBaseDamage ()
	{
		static UFunction* pfnGetBaseDamage = NULL;

		if ( !pfnGetBaseDamage )
			pfnGetBaseDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetBaseDamage" );

		ACCWeapon_execGetBaseDamage_Parms GetBaseDamage_Parms;

		this->ProcessEvent( pfnGetBaseDamage, &GetBaseDamage_Parms, NULL );

		return GetBaseDamage_Parms.ReturnValue;
	};

	void SetInstantHitDamageType ( unsigned char FiringMode )
	{
		static UFunction* pfnSetInstantHitDamageType = NULL;

		if ( !pfnSetInstantHitDamageType )
			pfnSetInstantHitDamageType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetInstantHitDamageType" );

		ACCWeapon_execSetInstantHitDamageType_Parms SetInstantHitDamageType_Parms;
		SetInstantHitDamageType_Parms.FiringMode = FiringMode;

		this->ProcessEvent( pfnSetInstantHitDamageType, &SetInstantHitDamageType_Parms, NULL );
	};

	void SetInstantHitDamageTypes ()
	{
		static UFunction* pfnSetInstantHitDamageTypes = NULL;

		if ( !pfnSetInstantHitDamageTypes )
			pfnSetInstantHitDamageTypes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetInstantHitDamageTypes" );

		ACCWeapon_execSetInstantHitDamageTypes_Parms SetInstantHitDamageTypes_Parms;

		this->ProcessEvent( pfnSetInstantHitDamageTypes, &SetInstantHitDamageTypes_Parms, NULL );
	};

	void SwitchWeapon ()
	{
		static UFunction* pfnSwitchWeapon = NULL;

		if ( !pfnSwitchWeapon )
			pfnSwitchWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SwitchWeapon" );

		ACCWeapon_execSwitchWeapon_Parms SwitchWeapon_Parms;

		this->ProcessEvent( pfnSwitchWeapon, &SwitchWeapon_Parms, NULL );
	};

	void OldWeaponCleared ()
	{
		static UFunction* pfnOldWeaponCleared = NULL;

		if ( !pfnOldWeaponCleared )
			pfnOldWeaponCleared = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.OldWeaponCleared" );

		ACCWeapon_execOldWeaponCleared_Parms OldWeaponCleared_Parms;

		this->ProcessEvent( pfnOldWeaponCleared, &OldWeaponCleared_Parms, NULL );
	};

	void StartWeaponSwitching ( unsigned long bSkipHide )
	{
		static UFunction* pfnStartWeaponSwitching = NULL;

		if ( !pfnStartWeaponSwitching )
			pfnStartWeaponSwitching = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartWeaponSwitching" );

		ACCWeapon_execStartWeaponSwitching_Parms StartWeaponSwitching_Parms;
		StartWeaponSwitching_Parms.bSkipHide = bSkipHide;

		this->ProcessEvent( pfnStartWeaponSwitching, &StartWeaponSwitching_Parms, NULL );
	};

	struct FRotator GetAdditionalAimRotation ( struct FVector StartFireLoc )
	{
		static UFunction* pfnGetAdditionalAimRotation = NULL;

		if ( !pfnGetAdditionalAimRotation )
			pfnGetAdditionalAimRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetAdditionalAimRotation" );

		ACCWeapon_execGetAdditionalAimRotation_Parms GetAdditionalAimRotation_Parms;
		memcpy( &GetAdditionalAimRotation_Parms.StartFireLoc, &StartFireLoc, 0xC );

		this->ProcessEvent( pfnGetAdditionalAimRotation, &GetAdditionalAimRotation_Parms, NULL );

		return GetAdditionalAimRotation_Parms.ReturnValue;
	};

	struct FRotator AddAdditionalAimRotation ( struct FVector StartFireLoc, struct FRotator BaseRotation )
	{
		static UFunction* pfnAddAdditionalAimRotation = NULL;

		if ( !pfnAddAdditionalAimRotation )
			pfnAddAdditionalAimRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AddAdditionalAimRotation" );

		ACCWeapon_execAddAdditionalAimRotation_Parms AddAdditionalAimRotation_Parms;
		memcpy( &AddAdditionalAimRotation_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &AddAdditionalAimRotation_Parms.BaseRotation, &BaseRotation, 0xC );

		this->ProcessEvent( pfnAddAdditionalAimRotation, &AddAdditionalAimRotation_Parms, NULL );

		return AddAdditionalAimRotation_Parms.ReturnValue;
	};

	bool GetAccuracyForceFovFromWeapon ( float* out_ForceFovVal )
	{
		static UFunction* pfnGetAccuracyForceFovFromWeapon = NULL;

		if ( !pfnGetAccuracyForceFovFromWeapon )
			pfnGetAccuracyForceFovFromWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetAccuracyForceFovFromWeapon" );

		ACCWeapon_execGetAccuracyForceFovFromWeapon_Parms GetAccuracyForceFovFromWeapon_Parms;

		this->ProcessEvent( pfnGetAccuracyForceFovFromWeapon, &GetAccuracyForceFovFromWeapon_Parms, NULL );

		if ( out_ForceFovVal )
			*out_ForceFovVal = GetAccuracyForceFovFromWeapon_Parms.out_ForceFovVal; // CPF_OutParm

		return GetAccuracyForceFovFromWeapon_Parms.ReturnValue;
	};

	float GetActualAccuracyForHUD ()
	{
		static UFunction* pfnGetActualAccuracyForHUD = NULL;

		if ( !pfnGetActualAccuracyForHUD )
			pfnGetActualAccuracyForHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetActualAccuracyForHUD" );

		ACCWeapon_execGetActualAccuracyForHUD_Parms GetActualAccuracyForHUD_Parms;

		this->ProcessEvent( pfnGetActualAccuracyForHUD, &GetActualAccuracyForHUD_Parms, NULL );

		return GetActualAccuracyForHUD_Parms.ReturnValue;
	};

	struct FRotator AddSpread ( struct FRotator BaseAim )
	{
		static UFunction* pfnAddSpread = NULL;

		if ( !pfnAddSpread )
			pfnAddSpread = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AddSpread" );

		ACCWeapon_execAddSpread_Parms AddSpread_Parms;
		memcpy( &AddSpread_Parms.BaseAim, &BaseAim, 0xC );

		this->ProcessEvent( pfnAddSpread, &AddSpread_Parms, NULL );

		return AddSpread_Parms.ReturnValue;
	};

	void TickCombinedSpreadLogic ( float DeltaTime )
	{
		static UFunction* pfnTickCombinedSpreadLogic = NULL;

		if ( !pfnTickCombinedSpreadLogic )
			pfnTickCombinedSpreadLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickCombinedSpreadLogic" );

		ACCWeapon_execTickCombinedSpreadLogic_Parms TickCombinedSpreadLogic_Parms;
		TickCombinedSpreadLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickCombinedSpreadLogic, &TickCombinedSpreadLogic_Parms, NULL );
	};

	void TickFRSpreadLogic ( float DeltaTime )
	{
		static UFunction* pfnTickFRSpreadLogic = NULL;

		if ( !pfnTickFRSpreadLogic )
			pfnTickFRSpreadLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickFRSpreadLogic" );

		ACCWeapon_execTickFRSpreadLogic_Parms TickFRSpreadLogic_Parms;
		TickFRSpreadLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickFRSpreadLogic, &TickFRSpreadLogic_Parms, NULL );
	};

	void TickPresetSpreadLogic ( float DeltaTime )
	{
		static UFunction* pfnTickPresetSpreadLogic = NULL;

		if ( !pfnTickPresetSpreadLogic )
			pfnTickPresetSpreadLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickPresetSpreadLogic" );

		ACCWeapon_execTickPresetSpreadLogic_Parms TickPresetSpreadLogic_Parms;
		TickPresetSpreadLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickPresetSpreadLogic, &TickPresetSpreadLogic_Parms, NULL );
	};

	void TickSpreadLogic ( float DeltaTime )
	{
		static UFunction* pfnTickSpreadLogic = NULL;

		if ( !pfnTickSpreadLogic )
			pfnTickSpreadLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickSpreadLogic" );

		ACCWeapon_execTickSpreadLogic_Parms TickSpreadLogic_Parms;
		TickSpreadLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickSpreadLogic, &TickSpreadLogic_Parms, NULL );
	};

	void UpdatePendingSpreadProcessShot ()
	{
		static UFunction* pfnUpdatePendingSpreadProcessShot = NULL;

		if ( !pfnUpdatePendingSpreadProcessShot )
			pfnUpdatePendingSpreadProcessShot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdatePendingSpreadProcessShot" );

		ACCWeapon_execUpdatePendingSpreadProcessShot_Parms UpdatePendingSpreadProcessShot_Parms;

		this->ProcessEvent( pfnUpdatePendingSpreadProcessShot, &UpdatePendingSpreadProcessShot_Parms, NULL );
	};

	float StaticCalcRealSpreadAbilityModifier ( float BaseAbilityModifier )
	{
		static UFunction* pfnStaticCalcRealSpreadAbilityModifier = NULL;

		if ( !pfnStaticCalcRealSpreadAbilityModifier )
			pfnStaticCalcRealSpreadAbilityModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StaticCalcRealSpreadAbilityModifier" );

		ACCWeapon_execStaticCalcRealSpreadAbilityModifier_Parms StaticCalcRealSpreadAbilityModifier_Parms;
		StaticCalcRealSpreadAbilityModifier_Parms.BaseAbilityModifier = BaseAbilityModifier;

		this->ProcessEvent( pfnStaticCalcRealSpreadAbilityModifier, &StaticCalcRealSpreadAbilityModifier_Parms, NULL );

		return StaticCalcRealSpreadAbilityModifier_Parms.ReturnValue;
	};

	float StaticCalcInstanceFromLobbyModifier ( float LobbyVal1, float InstanceVal1, float LobbyVal2, float InstanceVal2, float LobbyModifierValue )
	{
		static UFunction* pfnStaticCalcInstanceFromLobbyModifier = NULL;

		if ( !pfnStaticCalcInstanceFromLobbyModifier )
			pfnStaticCalcInstanceFromLobbyModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StaticCalcInstanceFromLobbyModifier" );

		ACCWeapon_execStaticCalcInstanceFromLobbyModifier_Parms StaticCalcInstanceFromLobbyModifier_Parms;
		StaticCalcInstanceFromLobbyModifier_Parms.LobbyVal1 = LobbyVal1;
		StaticCalcInstanceFromLobbyModifier_Parms.InstanceVal1 = InstanceVal1;
		StaticCalcInstanceFromLobbyModifier_Parms.LobbyVal2 = LobbyVal2;
		StaticCalcInstanceFromLobbyModifier_Parms.InstanceVal2 = InstanceVal2;
		StaticCalcInstanceFromLobbyModifier_Parms.LobbyModifierValue = LobbyModifierValue;

		this->ProcessEvent( pfnStaticCalcInstanceFromLobbyModifier, &StaticCalcInstanceFromLobbyModifier_Parms, NULL );

		return StaticCalcInstanceFromLobbyModifier_Parms.ReturnValue;
	};

	float StaticCalcInstanceFromLobbySpreadModifier ( float LobbySpreadModifierValue )
	{
		static UFunction* pfnStaticCalcInstanceFromLobbySpreadModifier = NULL;

		if ( !pfnStaticCalcInstanceFromLobbySpreadModifier )
			pfnStaticCalcInstanceFromLobbySpreadModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StaticCalcInstanceFromLobbySpreadModifier" );

		ACCWeapon_execStaticCalcInstanceFromLobbySpreadModifier_Parms StaticCalcInstanceFromLobbySpreadModifier_Parms;
		StaticCalcInstanceFromLobbySpreadModifier_Parms.LobbySpreadModifierValue = LobbySpreadModifierValue;

		this->ProcessEvent( pfnStaticCalcInstanceFromLobbySpreadModifier, &StaticCalcInstanceFromLobbySpreadModifier_Parms, NULL );

		return StaticCalcInstanceFromLobbySpreadModifier_Parms.ReturnValue;
	};

	bool GetFovValues ( float* out_BaseFov, float* out_CurrentFov )
	{
		static UFunction* pfnGetFovValues = NULL;

		if ( !pfnGetFovValues )
			pfnGetFovValues = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetFovValues" );

		ACCWeapon_execGetFovValues_Parms GetFovValues_Parms;

		this->ProcessEvent( pfnGetFovValues, &GetFovValues_Parms, NULL );

		if ( out_BaseFov )
			*out_BaseFov = GetFovValues_Parms.out_BaseFov; // CPF_OutParm
		if ( out_CurrentFov )
			*out_CurrentFov = GetFovValues_Parms.out_CurrentFov; // CPF_OutParm

		return GetFovValues_Parms.ReturnValue;
	};

	void UpdateSpreadParams ()
	{
		static UFunction* pfnUpdateSpreadParams = NULL;

		if ( !pfnUpdateSpreadParams )
			pfnUpdateSpreadParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateSpreadParams" );

		ACCWeapon_execUpdateSpreadParams_Parms UpdateSpreadParams_Parms;

		this->ProcessEvent( pfnUpdateSpreadParams, &UpdateSpreadParams_Parms, NULL );
	};

	void ConditionalSwitchSpreadProcessor ()
	{
		static UFunction* pfnConditionalSwitchSpreadProcessor = NULL;

		if ( !pfnConditionalSwitchSpreadProcessor )
			pfnConditionalSwitchSpreadProcessor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalSwitchSpreadProcessor" );

		ACCWeapon_execConditionalSwitchSpreadProcessor_Parms ConditionalSwitchSpreadProcessor_Parms;

		this->ProcessEvent( pfnConditionalSwitchSpreadProcessor, &ConditionalSwitchSpreadProcessor_Parms, NULL );
	};

	void SpreadTickPreLogic ( float DeltaTime )
	{
		static UFunction* pfnSpreadTickPreLogic = NULL;

		if ( !pfnSpreadTickPreLogic )
			pfnSpreadTickPreLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpreadTickPreLogic" );

		ACCWeapon_execSpreadTickPreLogic_Parms SpreadTickPreLogic_Parms;
		SpreadTickPreLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSpreadTickPreLogic, &SpreadTickPreLogic_Parms, NULL );
	};

	void TickSpread ( float DeltaTime )
	{
		static UFunction* pfnTickSpread = NULL;

		if ( !pfnTickSpread )
			pfnTickSpread = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickSpread" );

		ACCWeapon_execTickSpread_Parms TickSpread_Parms;
		TickSpread_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickSpread, &TickSpread_Parms, NULL );
	};

	void ConditionalTickSpread ( float DeltaTime )
	{
		static UFunction* pfnConditionalTickSpread = NULL;

		if ( !pfnConditionalTickSpread )
			pfnConditionalTickSpread = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalTickSpread" );

		ACCWeapon_execConditionalTickSpread_Parms ConditionalTickSpread_Parms;
		ConditionalTickSpread_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnConditionalTickSpread, &ConditionalTickSpread_Parms, NULL );
	};

	void SpreadProcessBullet ( unsigned long bLastOne )
	{
		static UFunction* pfnSpreadProcessBullet = NULL;

		if ( !pfnSpreadProcessBullet )
			pfnSpreadProcessBullet = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpreadProcessBullet" );

		ACCWeapon_execSpreadProcessBullet_Parms SpreadProcessBullet_Parms;
		SpreadProcessBullet_Parms.bLastOne = bLastOne;

		this->ProcessEvent( pfnSpreadProcessBullet, &SpreadProcessBullet_Parms, NULL );
	};

	void SpreadProcessShot ()
	{
		static UFunction* pfnSpreadProcessShot = NULL;

		if ( !pfnSpreadProcessShot )
			pfnSpreadProcessShot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpreadProcessShot" );

		ACCWeapon_execSpreadProcessShot_Parms SpreadProcessShot_Parms;

		this->ProcessEvent( pfnSpreadProcessShot, &SpreadProcessShot_Parms, NULL );
	};

	void ResetSpread ()
	{
		static UFunction* pfnResetSpread = NULL;

		if ( !pfnResetSpread )
			pfnResetSpread = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ResetSpread" );

		ACCWeapon_execResetSpread_Parms ResetSpread_Parms;

		this->ProcessEvent( pfnResetSpread, &ResetSpread_Parms, NULL );
	};

	bool StillFiring ( unsigned char FireMode )
	{
		static UFunction* pfnStillFiring = NULL;

		if ( !pfnStillFiring )
			pfnStillFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StillFiring" );

		ACCWeapon_execStillFiring_Parms StillFiring_Parms;
		StillFiring_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnStillFiring, &StillFiring_Parms, NULL );

		return StillFiring_Parms.ReturnValue;
	};

	bool bReadyToFire ()
	{
		static UFunction* pfnbReadyToFire = NULL;

		if ( !pfnbReadyToFire )
			pfnbReadyToFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.bReadyToFire" );

		ACCWeapon_execbReadyToFire_Parms bReadyToFire_Parms;

		this->ProcessEvent( pfnbReadyToFire, &bReadyToFire_Parms, NULL );

		return bReadyToFire_Parms.ReturnValue;
	};

	bool HasAnyAmmo ()
	{
		static UFunction* pfnHasAnyAmmo = NULL;

		if ( !pfnHasAnyAmmo )
			pfnHasAnyAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.HasAnyAmmo" );

		ACCWeapon_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

		this->ProcessEvent( pfnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

		return HasAnyAmmo_Parms.ReturnValue;
	};

	bool HasAmmo ( unsigned char FireModeNum, int Amount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHasAmmo = NULL;

		if ( !pfnHasAmmo )
			pfnHasAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.HasAmmo" );

		ACCWeapon_execHasAmmo_Parms HasAmmo_Parms;
		HasAmmo_Parms.FireModeNum = FireModeNum;
		HasAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnHasAmmo, &HasAmmo_Parms, NULL );

		return HasAmmo_Parms.ReturnValue;
	};

	void ChangeAmmoCount ( int NewAmmoCount, unsigned long bCanSync )
	{
		static UFunction* pfnChangeAmmoCount = NULL;

		if ( !pfnChangeAmmoCount )
			pfnChangeAmmoCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ChangeAmmoCount" );

		ACCWeapon_execChangeAmmoCount_Parms ChangeAmmoCount_Parms;
		ChangeAmmoCount_Parms.NewAmmoCount = NewAmmoCount;
		ChangeAmmoCount_Parms.bCanSync = bCanSync;

		pfnChangeAmmoCount->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnChangeAmmoCount, &ChangeAmmoCount_Parms, NULL );
		pfnChangeAmmoCount->FunctionFlags |= 0x400;
	};

	int AddAmmo ( int Amount )
	{
		static UFunction* pfnAddAmmo = NULL;

		if ( !pfnAddAmmo )
			pfnAddAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AddAmmo" );

		ACCWeapon_execAddAmmo_Parms AddAmmo_Parms;
		AddAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnAddAmmo, &AddAmmo_Parms, NULL );

		return AddAmmo_Parms.ReturnValue;
	};

	void ConsumeAmmo ( unsigned char FireModeNum )
	{
		static UFunction* pfnConsumeAmmo = NULL;

		if ( !pfnConsumeAmmo )
			pfnConsumeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConsumeAmmo" );

		ACCWeapon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
		ConsumeAmmo_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
	};

	void eventCallClientSyncAmmoCount ( float FireTimeStamp )
	{
		static UFunction* pfnCallClientSyncAmmoCount = NULL;

		if ( !pfnCallClientSyncAmmoCount )
			pfnCallClientSyncAmmoCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CallClientSyncAmmoCount" );

		ACCWeapon_eventCallClientSyncAmmoCount_Parms CallClientSyncAmmoCount_Parms;
		CallClientSyncAmmoCount_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnCallClientSyncAmmoCount, &CallClientSyncAmmoCount_Parms, NULL );
	};

	void SpawnSpiralRockets ()
	{
		static UFunction* pfnSpawnSpiralRockets = NULL;

		if ( !pfnSpawnSpiralRockets )
			pfnSpawnSpiralRockets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpawnSpiralRockets" );

		ACCWeapon_execSpawnSpiralRockets_Parms SpawnSpiralRockets_Parms;

		this->ProcessEvent( pfnSpawnSpiralRockets, &SpawnSpiralRockets_Parms, NULL );
	};

	void SpawnSpiralRocketRulers ()
	{
		static UFunction* pfnSpawnSpiralRocketRulers = NULL;

		if ( !pfnSpawnSpiralRocketRulers )
			pfnSpawnSpiralRocketRulers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpawnSpiralRocketRulers" );

		ACCWeapon_execSpawnSpiralRocketRulers_Parms SpawnSpiralRocketRulers_Parms;

		this->ProcessEvent( pfnSpawnSpiralRocketRulers, &SpawnSpiralRocketRulers_Parms, NULL );
	};

	struct FVector CalcSpiralRocketLocationFor ( int RocketIndex, int MaxRockets, struct FVector* SpawnDir )
	{
		static UFunction* pfnCalcSpiralRocketLocationFor = NULL;

		if ( !pfnCalcSpiralRocketLocationFor )
			pfnCalcSpiralRocketLocationFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcSpiralRocketLocationFor" );

		ACCWeapon_execCalcSpiralRocketLocationFor_Parms CalcSpiralRocketLocationFor_Parms;
		CalcSpiralRocketLocationFor_Parms.RocketIndex = RocketIndex;
		CalcSpiralRocketLocationFor_Parms.MaxRockets = MaxRockets;

		this->ProcessEvent( pfnCalcSpiralRocketLocationFor, &CalcSpiralRocketLocationFor_Parms, NULL );

		if ( SpawnDir )
			memcpy( SpawnDir, &CalcSpiralRocketLocationFor_Parms.SpawnDir, 0xC ); // CPF_OutParm

		return CalcSpiralRocketLocationFor_Parms.ReturnValue;
	};

	void ServerSetLastSpiralRocketUniqIDs ( int InLastSpiralRocketRulerUniqID, int InLastSpiralRocketUniqID )
	{
		static UFunction* pfnServerSetLastSpiralRocketUniqIDs = NULL;

		if ( !pfnServerSetLastSpiralRocketUniqIDs )
			pfnServerSetLastSpiralRocketUniqIDs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerSetLastSpiralRocketUniqIDs" );

		ACCWeapon_execServerSetLastSpiralRocketUniqIDs_Parms ServerSetLastSpiralRocketUniqIDs_Parms;
		ServerSetLastSpiralRocketUniqIDs_Parms.InLastSpiralRocketRulerUniqID = InLastSpiralRocketRulerUniqID;
		ServerSetLastSpiralRocketUniqIDs_Parms.InLastSpiralRocketUniqID = InLastSpiralRocketUniqID;

		this->ProcessEvent( pfnServerSetLastSpiralRocketUniqIDs, &ServerSetLastSpiralRocketUniqIDs_Parms, NULL );
	};

	void ComputeSpiralRocketUniqIDs ()
	{
		static UFunction* pfnComputeSpiralRocketUniqIDs = NULL;

		if ( !pfnComputeSpiralRocketUniqIDs )
			pfnComputeSpiralRocketUniqIDs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ComputeSpiralRocketUniqIDs" );

		ACCWeapon_execComputeSpiralRocketUniqIDs_Parms ComputeSpiralRocketUniqIDs_Parms;

		this->ProcessEvent( pfnComputeSpiralRocketUniqIDs, &ComputeSpiralRocketUniqIDs_Parms, NULL );
	};

	int GenerateSpiralRocketsUniqID ( int Count )
	{
		static UFunction* pfnGenerateSpiralRocketsUniqID = NULL;

		if ( !pfnGenerateSpiralRocketsUniqID )
			pfnGenerateSpiralRocketsUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GenerateSpiralRocketsUniqID" );

		ACCWeapon_execGenerateSpiralRocketsUniqID_Parms GenerateSpiralRocketsUniqID_Parms;
		GenerateSpiralRocketsUniqID_Parms.Count = Count;

		pfnGenerateSpiralRocketsUniqID->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGenerateSpiralRocketsUniqID, &GenerateSpiralRocketsUniqID_Parms, NULL );
		pfnGenerateSpiralRocketsUniqID->FunctionFlags |= 0x400;

		return GenerateSpiralRocketsUniqID_Parms.ReturnValue;
	};

	void SpiralRocketsProjectileFire ()
	{
		static UFunction* pfnSpiralRocketsProjectileFire = NULL;

		if ( !pfnSpiralRocketsProjectileFire )
			pfnSpiralRocketsProjectileFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SpiralRocketsProjectileFire" );

		ACCWeapon_execSpiralRocketsProjectileFire_Parms SpiralRocketsProjectileFire_Parms;

		this->ProcessEvent( pfnSpiralRocketsProjectileFire, &SpiralRocketsProjectileFire_Parms, NULL );
	};

	class AProjectile* SimulateProjectileFire ( struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnSimulateProjectileFire = NULL;

		if ( !pfnSimulateProjectileFire )
			pfnSimulateProjectileFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SimulateProjectileFire" );

		ACCWeapon_execSimulateProjectileFire_Parms SimulateProjectileFire_Parms;
		memcpy( &SimulateProjectileFire_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnSimulateProjectileFire, &SimulateProjectileFire_Parms, NULL );

		return SimulateProjectileFire_Parms.ReturnValue;
	};

	class AProjectile* ProjectileFire ()
	{
		static UFunction* pfnProjectileFire = NULL;

		if ( !pfnProjectileFire )
			pfnProjectileFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProjectileFire" );

		ACCWeapon_execProjectileFire_Parms ProjectileFire_Parms;

		this->ProcessEvent( pfnProjectileFire, &ProjectileFire_Parms, NULL );

		return ProjectileFire_Parms.ReturnValue;
	};

	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetPhysicalFireStartLoc = NULL;

		if ( !pfnGetPhysicalFireStartLoc )
			pfnGetPhysicalFireStartLoc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetPhysicalFireStartLoc" );

		ACCWeapon_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
		memcpy( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

		this->ProcessEvent( pfnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

		return GetPhysicalFireStartLoc_Parms.ReturnValue;
	};

	struct FVector GetProjectileSpawnLocation ( struct FVector* Direction )
	{
		static UFunction* pfnGetProjectileSpawnLocation = NULL;

		if ( !pfnGetProjectileSpawnLocation )
			pfnGetProjectileSpawnLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetProjectileSpawnLocation" );

		ACCWeapon_execGetProjectileSpawnLocation_Parms GetProjectileSpawnLocation_Parms;

		this->ProcessEvent( pfnGetProjectileSpawnLocation, &GetProjectileSpawnLocation_Parms, NULL );

		if ( Direction )
			memcpy( Direction, &GetProjectileSpawnLocation_Parms.Direction, 0xC ); // CPF_OutParm

		return GetProjectileSpawnLocation_Parms.ReturnValue;
	};

	void TimerForGL ()
	{
		static UFunction* pfnTimerForGL = NULL;

		if ( !pfnTimerForGL )
			pfnTimerForGL = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TimerForGL" );

		ACCWeapon_execTimerForGL_Parms TimerForGL_Parms;

		this->ProcessEvent( pfnTimerForGL, &TimerForGL_Parms, NULL );
	};

	void StartMultiPowerForGL ()
	{
		static UFunction* pfnStartMultiPowerForGL = NULL;

		if ( !pfnStartMultiPowerForGL )
			pfnStartMultiPowerForGL = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartMultiPowerForGL" );

		ACCWeapon_execStartMultiPowerForGL_Parms StartMultiPowerForGL_Parms;

		this->ProcessEvent( pfnStartMultiPowerForGL, &StartMultiPowerForGL_Parms, NULL );
	};

	bool IsCanSetPowerForGL ()
	{
		static UFunction* pfnIsCanSetPowerForGL = NULL;

		if ( !pfnIsCanSetPowerForGL )
			pfnIsCanSetPowerForGL = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.IsCanSetPowerForGL" );

		ACCWeapon_execIsCanSetPowerForGL_Parms IsCanSetPowerForGL_Parms;

		this->ProcessEvent( pfnIsCanSetPowerForGL, &IsCanSetPowerForGL_Parms, NULL );

		return IsCanSetPowerForGL_Parms.ReturnValue;
	};

	void ServerPerformRemoteExplode ()
	{
		static UFunction* pfnServerPerformRemoteExplode = NULL;

		if ( !pfnServerPerformRemoteExplode )
			pfnServerPerformRemoteExplode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ServerPerformRemoteExplode" );

		ACCWeapon_execServerPerformRemoteExplode_Parms ServerPerformRemoteExplode_Parms;

		this->ProcessEvent( pfnServerPerformRemoteExplode, &ServerPerformRemoteExplode_Parms, NULL );
	};

	void ConditionalPerformRemoteExplode ()
	{
		static UFunction* pfnConditionalPerformRemoteExplode = NULL;

		if ( !pfnConditionalPerformRemoteExplode )
			pfnConditionalPerformRemoteExplode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalPerformRemoteExplode" );

		ACCWeapon_execConditionalPerformRemoteExplode_Parms ConditionalPerformRemoteExplode_Parms;

		this->ProcessEvent( pfnConditionalPerformRemoteExplode, &ConditionalPerformRemoteExplode_Parms, NULL );
	};

	void ProcessInstantHitLocally ( unsigned char FiringMode, struct FImpactInfo Impact )
	{
		static UFunction* pfnProcessInstantHitLocally = NULL;

		if ( !pfnProcessInstantHitLocally )
			pfnProcessInstantHitLocally = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProcessInstantHitLocally" );

		ACCWeapon_execProcessInstantHitLocally_Parms ProcessInstantHitLocally_Parms;
		ProcessInstantHitLocally_Parms.FiringMode = FiringMode;
		memcpy( &ProcessInstantHitLocally_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnProcessInstantHitLocally, &ProcessInstantHitLocally_Parms, NULL );
	};

	void SetDoZeroDamage ( unsigned long Value )
	{
		static UFunction* pfnSetDoZeroDamage = NULL;

		if ( !pfnSetDoZeroDamage )
			pfnSetDoZeroDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.SetDoZeroDamage" );

		ACCWeapon_execSetDoZeroDamage_Parms SetDoZeroDamage_Parms;
		SetDoZeroDamage_Parms.Value = Value;

		this->ProcessEvent( pfnSetDoZeroDamage, &SetDoZeroDamage_Parms, NULL );
	};

	bool ImpactNeedsToBeProcessed ( struct FImpactInfo Impact )
	{
		static UFunction* pfnImpactNeedsToBeProcessed = NULL;

		if ( !pfnImpactNeedsToBeProcessed )
			pfnImpactNeedsToBeProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ImpactNeedsToBeProcessed" );

		ACCWeapon_execImpactNeedsToBeProcessed_Parms ImpactNeedsToBeProcessed_Parms;
		memcpy( &ImpactNeedsToBeProcessed_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnImpactNeedsToBeProcessed, &ImpactNeedsToBeProcessed_Parms, NULL );

		return ImpactNeedsToBeProcessed_Parms.ReturnValue;
	};

	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact )
	{
		static UFunction* pfnProcessInstantHit = NULL;

		if ( !pfnProcessInstantHit )
			pfnProcessInstantHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProcessInstantHit" );

		ACCWeapon_execProcessInstantHit_Parms ProcessInstantHit_Parms;
		ProcessInstantHit_Parms.FiringMode = FiringMode;
		memcpy( &ProcessInstantHit_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
	};

	void PreProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact )
	{
		static UFunction* pfnPreProcessInstantHit = NULL;

		if ( !pfnPreProcessInstantHit )
			pfnPreProcessInstantHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PreProcessInstantHit" );

		ACCWeapon_execPreProcessInstantHit_Parms PreProcessInstantHit_Parms;
		PreProcessInstantHit_Parms.FiringMode = FiringMode;
		memcpy( &PreProcessInstantHit_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnPreProcessInstantHit, &PreProcessInstantHit_Parms, NULL );
	};

	void ProcessReplicatedFromClientHitList ( unsigned char FiringMode, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnProcessReplicatedFromClientHitList = NULL;

		if ( !pfnProcessReplicatedFromClientHitList )
			pfnProcessReplicatedFromClientHitList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProcessReplicatedFromClientHitList" );

		ACCWeapon_execProcessReplicatedFromClientHitList_Parms ProcessReplicatedFromClientHitList_Parms;
		ProcessReplicatedFromClientHitList_Parms.FiringMode = FiringMode;

		this->ProcessEvent( pfnProcessReplicatedFromClientHitList, &ProcessReplicatedFromClientHitList_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &ProcessReplicatedFromClientHitList_Parms.ImpactList, 0xC ); // CPF_OutParm
	};

	void ProcessInstantFireHitList ( unsigned char FiringMode, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnProcessInstantFireHitList = NULL;

		if ( !pfnProcessInstantFireHitList )
			pfnProcessInstantFireHitList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ProcessInstantFireHitList" );

		ACCWeapon_execProcessInstantFireHitList_Parms ProcessInstantFireHitList_Parms;
		ProcessInstantFireHitList_Parms.FiringMode = FiringMode;

		this->ProcessEvent( pfnProcessInstantFireHitList, &ProcessInstantFireHitList_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &ProcessInstantFireHitList_Parms.ImpactList, 0xC ); // CPF_OutParm
	};

	struct FImpactInfo CalcWeaponFireFromCameraPublic ( struct FVector StartTrace, struct FVector EndTrace, void* DrawDebugProxy/*CPF_OptionalParm*/, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFireFromCameraPublic = NULL;

		if ( !pfnCalcWeaponFireFromCameraPublic )
			pfnCalcWeaponFireFromCameraPublic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcWeaponFireFromCameraPublic" );

		ACCWeapon_execCalcWeaponFireFromCameraPublic_Parms CalcWeaponFireFromCameraPublic_Parms;
		memcpy( &CalcWeaponFireFromCameraPublic_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &CalcWeaponFireFromCameraPublic_Parms.EndTrace, &EndTrace, 0xC );
		CalcWeaponFireFromCameraPublic_Parms.DrawDebugProxy = DrawDebugProxy;

		this->ProcessEvent( pfnCalcWeaponFireFromCameraPublic, &CalcWeaponFireFromCameraPublic_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFireFromCameraPublic_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFireFromCameraPublic_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFirePublic ( struct FVector StartTrace, struct FVector EndTrace, unsigned long bFirstImpactOnly/*CPF_OptionalParm*/, void* DrawDebugProxy/*CPF_OptionalParm*/, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFirePublic = NULL;

		if ( !pfnCalcWeaponFirePublic )
			pfnCalcWeaponFirePublic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcWeaponFirePublic" );

		ACCWeapon_execCalcWeaponFirePublic_Parms CalcWeaponFirePublic_Parms;
		memcpy( &CalcWeaponFirePublic_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &CalcWeaponFirePublic_Parms.EndTrace, &EndTrace, 0xC );
		CalcWeaponFirePublic_Parms.bFirstImpactOnly = bFirstImpactOnly;
		CalcWeaponFirePublic_Parms.DrawDebugProxy = DrawDebugProxy;

		this->ProcessEvent( pfnCalcWeaponFirePublic, &CalcWeaponFirePublic_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFirePublic_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFirePublic_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent/*CPF_OptionalParm*/, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFire = NULL;

		if ( !pfnCalcWeaponFire )
			pfnCalcWeaponFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcWeaponFire" );

		ACCWeapon_execCalcWeaponFire_Parms CalcWeaponFire_Parms;
		memcpy( &CalcWeaponFire_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &CalcWeaponFire_Parms.EndTrace, &EndTrace, 0xC );
		memcpy( &CalcWeaponFire_Parms.Extent, &Extent, 0xC );

		this->ProcessEvent( pfnCalcWeaponFire, &CalcWeaponFire_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFire_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFire_Parms.ReturnValue;
	};

	bool CalcTraces ( struct FImpactInfo Impact )
	{
		static UFunction* pfnCalcTraces = NULL;

		if ( !pfnCalcTraces )
			pfnCalcTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcTraces" );

		ACCWeapon_execCalcTraces_Parms CalcTraces_Parms;
		memcpy( &CalcTraces_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnCalcTraces, &CalcTraces_Parms, NULL );

		return CalcTraces_Parms.ReturnValue;
	};

	void CalcUpdatedFireBounds ( struct FVector* StartTrace, struct FVector* EndTrace )
	{
		static UFunction* pfnCalcUpdatedFireBounds = NULL;

		if ( !pfnCalcUpdatedFireBounds )
			pfnCalcUpdatedFireBounds = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CalcUpdatedFireBounds" );

		ACCWeapon_execCalcUpdatedFireBounds_Parms CalcUpdatedFireBounds_Parms;

		this->ProcessEvent( pfnCalcUpdatedFireBounds, &CalcUpdatedFireBounds_Parms, NULL );

		if ( StartTrace )
			memcpy( StartTrace, &CalcUpdatedFireBounds_Parms.StartTrace, 0xC ); // CPF_OutParm
		if ( EndTrace )
			memcpy( EndTrace, &CalcUpdatedFireBounds_Parms.EndTrace, 0xC ); // CPF_OutParm
	};

	bool CheckForCriticalDamage ( struct FImpactInfo Impact )
	{
		static UFunction* pfnCheckForCriticalDamage = NULL;

		if ( !pfnCheckForCriticalDamage )
			pfnCheckForCriticalDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.CheckForCriticalDamage" );

		ACCWeapon_execCheckForCriticalDamage_Parms CheckForCriticalDamage_Parms;
		memcpy( &CheckForCriticalDamage_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnCheckForCriticalDamage, &CheckForCriticalDamage_Parms, NULL );

		return CheckForCriticalDamage_Parms.ReturnValue;
	};

	void InstantFire ()
	{
		static UFunction* pfnInstantFire = NULL;

		if ( !pfnInstantFire )
			pfnInstantFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.InstantFire" );

		ACCWeapon_execInstantFire_Parms InstantFire_Parms;

		this->ProcessEvent( pfnInstantFire, &InstantFire_Parms, NULL );
	};

	float GetGrenadeRecoilRoll ()
	{
		static UFunction* pfnGetGrenadeRecoilRoll = NULL;

		if ( !pfnGetGrenadeRecoilRoll )
			pfnGetGrenadeRecoilRoll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetGrenadeRecoilRoll" );

		ACCWeapon_execGetGrenadeRecoilRoll_Parms GetGrenadeRecoilRoll_Parms;

		this->ProcessEvent( pfnGetGrenadeRecoilRoll, &GetGrenadeRecoilRoll_Parms, NULL );

		return GetGrenadeRecoilRoll_Parms.ReturnValue;
	};

	void ClientAddGrenadeRecoil ( float Amplitude, float Period, float TotalTime, float FalloffNumber )
	{
		static UFunction* pfnClientAddGrenadeRecoil = NULL;

		if ( !pfnClientAddGrenadeRecoil )
			pfnClientAddGrenadeRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ClientAddGrenadeRecoil" );

		ACCWeapon_execClientAddGrenadeRecoil_Parms ClientAddGrenadeRecoil_Parms;
		ClientAddGrenadeRecoil_Parms.Amplitude = Amplitude;
		ClientAddGrenadeRecoil_Parms.Period = Period;
		ClientAddGrenadeRecoil_Parms.TotalTime = TotalTime;
		ClientAddGrenadeRecoil_Parms.FalloffNumber = FalloffNumber;

		this->ProcessEvent( pfnClientAddGrenadeRecoil, &ClientAddGrenadeRecoil_Parms, NULL );
	};

	void StopSniperRifleRecoil ()
	{
		static UFunction* pfnStopSniperRifleRecoil = NULL;

		if ( !pfnStopSniperRifleRecoil )
			pfnStopSniperRifleRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StopSniperRifleRecoil" );

		ACCWeapon_execStopSniperRifleRecoil_Parms StopSniperRifleRecoil_Parms;

		this->ProcessEvent( pfnStopSniperRifleRecoil, &StopSniperRifleRecoil_Parms, NULL );
	};

	void StartSniperRifleRecoil ()
	{
		static UFunction* pfnStartSniperRifleRecoil = NULL;

		if ( !pfnStartSniperRifleRecoil )
			pfnStartSniperRifleRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StartSniperRifleRecoil" );

		ACCWeapon_execStartSniperRifleRecoil_Parms StartSniperRifleRecoil_Parms;

		this->ProcessEvent( pfnStartSniperRifleRecoil, &StartSniperRifleRecoil_Parms, NULL );
	};

	void UpdateSniperRifleRecoilParams ()
	{
		static UFunction* pfnUpdateSniperRifleRecoilParams = NULL;

		if ( !pfnUpdateSniperRifleRecoilParams )
			pfnUpdateSniperRifleRecoilParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateSniperRifleRecoilParams" );

		ACCWeapon_execUpdateSniperRifleRecoilParams_Parms UpdateSniperRifleRecoilParams_Parms;

		this->ProcessEvent( pfnUpdateSniperRifleRecoilParams, &UpdateSniperRifleRecoilParams_Parms, NULL );
	};

	void ClientAddDamageRecoil ( struct FVector PawnSpaceToShooterDir, float Amplitude, float RestoreTime, float DelayTime )
	{
		static UFunction* pfnClientAddDamageRecoil = NULL;

		if ( !pfnClientAddDamageRecoil )
			pfnClientAddDamageRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ClientAddDamageRecoil" );

		ACCWeapon_execClientAddDamageRecoil_Parms ClientAddDamageRecoil_Parms;
		memcpy( &ClientAddDamageRecoil_Parms.PawnSpaceToShooterDir, &PawnSpaceToShooterDir, 0xC );
		ClientAddDamageRecoil_Parms.Amplitude = Amplitude;
		ClientAddDamageRecoil_Parms.RestoreTime = RestoreTime;
		ClientAddDamageRecoil_Parms.DelayTime = DelayTime;

		this->ProcessEvent( pfnClientAddDamageRecoil, &ClientAddDamageRecoil_Parms, NULL );
	};

	void TickWeaponRecoilLogic2 ( float DeltaTime )
	{
		static UFunction* pfnTickWeaponRecoilLogic2 = NULL;

		if ( !pfnTickWeaponRecoilLogic2 )
			pfnTickWeaponRecoilLogic2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickWeaponRecoilLogic2" );

		ACCWeapon_execTickWeaponRecoilLogic2_Parms TickWeaponRecoilLogic2_Parms;
		TickWeaponRecoilLogic2_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickWeaponRecoilLogic2, &TickWeaponRecoilLogic2_Parms, NULL );
	};

	void TickWeaponRecoilLogic ( float DeltaTime )
	{
		static UFunction* pfnTickWeaponRecoilLogic = NULL;

		if ( !pfnTickWeaponRecoilLogic )
			pfnTickWeaponRecoilLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickWeaponRecoilLogic" );

		ACCWeapon_execTickWeaponRecoilLogic_Parms TickWeaponRecoilLogic_Parms;
		TickWeaponRecoilLogic_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickWeaponRecoilLogic, &TickWeaponRecoilLogic_Parms, NULL );
	};

	float StaticCalcInstanceFromLobbyRecoilAmplitudeModifier ( float LobbyRecoilAmplitudeModifierValue )
	{
		static UFunction* pfnStaticCalcInstanceFromLobbyRecoilAmplitudeModifier = NULL;

		if ( !pfnStaticCalcInstanceFromLobbyRecoilAmplitudeModifier )
			pfnStaticCalcInstanceFromLobbyRecoilAmplitudeModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.StaticCalcInstanceFromLobbyRecoilAmplitudeModifier" );

		ACCWeapon_execStaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms StaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms;
		StaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms.LobbyRecoilAmplitudeModifierValue = LobbyRecoilAmplitudeModifierValue;

		this->ProcessEvent( pfnStaticCalcInstanceFromLobbyRecoilAmplitudeModifier, &StaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms, NULL );

		return StaticCalcInstanceFromLobbyRecoilAmplitudeModifier_Parms.ReturnValue;
	};

	void UpdateWeaponRecoilParams ()
	{
		static UFunction* pfnUpdateWeaponRecoilParams = NULL;

		if ( !pfnUpdateWeaponRecoilParams )
			pfnUpdateWeaponRecoilParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateWeaponRecoilParams" );

		ACCWeapon_execUpdateWeaponRecoilParams_Parms UpdateWeaponRecoilParams_Parms;

		this->ProcessEvent( pfnUpdateWeaponRecoilParams, &UpdateWeaponRecoilParams_Parms, NULL );
	};

	void AddWeaponRecoil ()
	{
		static UFunction* pfnAddWeaponRecoil = NULL;

		if ( !pfnAddWeaponRecoil )
			pfnAddWeaponRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.AddWeaponRecoil" );

		ACCWeapon_execAddWeaponRecoil_Parms AddWeaponRecoil_Parms;

		this->ProcessEvent( pfnAddWeaponRecoil, &AddWeaponRecoil_Parms, NULL );
	};

	struct FRotator GetSmoothedAdditionalRecoilRotation ()
	{
		static UFunction* pfnGetSmoothedAdditionalRecoilRotation = NULL;

		if ( !pfnGetSmoothedAdditionalRecoilRotation )
			pfnGetSmoothedAdditionalRecoilRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetSmoothedAdditionalRecoilRotation" );

		ACCWeapon_execGetSmoothedAdditionalRecoilRotation_Parms GetSmoothedAdditionalRecoilRotation_Parms;

		this->ProcessEvent( pfnGetSmoothedAdditionalRecoilRotation, &GetSmoothedAdditionalRecoilRotation_Parms, NULL );

		return GetSmoothedAdditionalRecoilRotation_Parms.ReturnValue;
	};

	struct FRotator GetAdditionalRecoilRotation ()
	{
		static UFunction* pfnGetAdditionalRecoilRotation = NULL;

		if ( !pfnGetAdditionalRecoilRotation )
			pfnGetAdditionalRecoilRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetAdditionalRecoilRotation" );

		ACCWeapon_execGetAdditionalRecoilRotation_Parms GetAdditionalRecoilRotation_Parms;

		this->ProcessEvent( pfnGetAdditionalRecoilRotation, &GetAdditionalRecoilRotation_Parms, NULL );

		return GetAdditionalRecoilRotation_Parms.ReturnValue;
	};

	struct FRotator PerformRecoilLimitation ( struct FRotator RotationToRemove, unsigned long bUserMouseMove )
	{
		static UFunction* pfnPerformRecoilLimitation = NULL;

		if ( !pfnPerformRecoilLimitation )
			pfnPerformRecoilLimitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PerformRecoilLimitation" );

		ACCWeapon_execPerformRecoilLimitation_Parms PerformRecoilLimitation_Parms;
		memcpy( &PerformRecoilLimitation_Parms.RotationToRemove, &RotationToRemove, 0xC );
		PerformRecoilLimitation_Parms.bUserMouseMove = bUserMouseMove;

		this->ProcessEvent( pfnPerformRecoilLimitation, &PerformRecoilLimitation_Parms, NULL );

		return PerformRecoilLimitation_Parms.ReturnValue;
	};

	struct FRotator PerformRecoiCompensation ( struct FRotator DeltaRot )
	{
		static UFunction* pfnPerformRecoiCompensation = NULL;

		if ( !pfnPerformRecoiCompensation )
			pfnPerformRecoiCompensation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PerformRecoiCompensation" );

		ACCWeapon_execPerformRecoiCompensation_Parms PerformRecoiCompensation_Parms;
		memcpy( &PerformRecoiCompensation_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnPerformRecoiCompensation, &PerformRecoiCompensation_Parms, NULL );

		return PerformRecoiCompensation_Parms.ReturnValue;
	};

	void TickRecoil ( float DeltaTime )
	{
		static UFunction* pfnTickRecoil = NULL;

		if ( !pfnTickRecoil )
			pfnTickRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickRecoil" );

		ACCWeapon_execTickRecoil_Parms TickRecoil_Parms;
		TickRecoil_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickRecoil, &TickRecoil_Parms, NULL );
	};

	void BuildRecoilProcessorsArray ( TArray< void* >* Arr )
	{
		static UFunction* pfnBuildRecoilProcessorsArray = NULL;

		if ( !pfnBuildRecoilProcessorsArray )
			pfnBuildRecoilProcessorsArray = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.BuildRecoilProcessorsArray" );

		ACCWeapon_execBuildRecoilProcessorsArray_Parms BuildRecoilProcessorsArray_Parms;

		this->ProcessEvent( pfnBuildRecoilProcessorsArray, &BuildRecoilProcessorsArray_Parms, NULL );

		if ( Arr )
			*Arr = BuildRecoilProcessorsArray_Parms.Arr; // CPF_OutParm
	};

	void InitializeRecoil ()
	{
		static UFunction* pfnInitializeRecoil = NULL;

		if ( !pfnInitializeRecoil )
			pfnInitializeRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.InitializeRecoil" );

		ACCWeapon_execInitializeRecoil_Parms InitializeRecoil_Parms;

		this->ProcessEvent( pfnInitializeRecoil, &InitializeRecoil_Parms, NULL );
	};

	bool IsInAimingMode ()
	{
		static UFunction* pfnIsInAimingMode = NULL;

		if ( !pfnIsInAimingMode )
			pfnIsInAimingMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.IsInAimingMode" );

		ACCWeapon_execIsInAimingMode_Parms IsInAimingMode_Parms;

		this->ProcessEvent( pfnIsInAimingMode, &IsInAimingMode_Parms, NULL );

		return IsInAimingMode_Parms.ReturnValue;
	};

	void TickShootSpotLocation ( float Delta )
	{
		static UFunction* pfnTickShootSpotLocation = NULL;

		if ( !pfnTickShootSpotLocation )
			pfnTickShootSpotLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickShootSpotLocation" );

		ACCWeapon_execTickShootSpotLocation_Parms TickShootSpotLocation_Parms;
		TickShootSpotLocation_Parms.Delta = Delta;

		this->ProcessEvent( pfnTickShootSpotLocation, &TickShootSpotLocation_Parms, NULL );
	};

	bool GetIsReadyToFire ()
	{
		static UFunction* pfnGetIsReadyToFire = NULL;

		if ( !pfnGetIsReadyToFire )
			pfnGetIsReadyToFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsReadyToFire" );

		ACCWeapon_execGetIsReadyToFire_Parms GetIsReadyToFire_Parms;

		this->ProcessEvent( pfnGetIsReadyToFire, &GetIsReadyToFire_Parms, NULL );

		return GetIsReadyToFire_Parms.ReturnValue;
	};

	bool GetIsInReadyToFireInternal ()
	{
		static UFunction* pfnGetIsInReadyToFireInternal = NULL;

		if ( !pfnGetIsInReadyToFireInternal )
			pfnGetIsInReadyToFireInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetIsInReadyToFireInternal" );

		ACCWeapon_execGetIsInReadyToFireInternal_Parms GetIsInReadyToFireInternal_Parms;

		this->ProcessEvent( pfnGetIsInReadyToFireInternal, &GetIsInReadyToFireInternal_Parms, NULL );

		return GetIsInReadyToFireInternal_Parms.ReturnValue;
	};

	void UpdateIsReadyToFireTime ( float DeltaTime )
	{
		static UFunction* pfnUpdateIsReadyToFireTime = NULL;

		if ( !pfnUpdateIsReadyToFireTime )
			pfnUpdateIsReadyToFireTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.UpdateIsReadyToFireTime" );

		ACCWeapon_execUpdateIsReadyToFireTime_Parms UpdateIsReadyToFireTime_Parms;
		UpdateIsReadyToFireTime_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateIsReadyToFireTime, &UpdateIsReadyToFireTime_Parms, NULL );
	};

	void ReplicateShootSpotLocation ( struct FVector Loc, struct FRotator Rot, unsigned long bIsReadyToFire )
	{
		static UFunction* pfnReplicateShootSpotLocation = NULL;

		if ( !pfnReplicateShootSpotLocation )
			pfnReplicateShootSpotLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ReplicateShootSpotLocation" );

		ACCWeapon_execReplicateShootSpotLocation_Parms ReplicateShootSpotLocation_Parms;
		memcpy( &ReplicateShootSpotLocation_Parms.Loc, &Loc, 0xC );
		memcpy( &ReplicateShootSpotLocation_Parms.Rot, &Rot, 0xC );
		ReplicateShootSpotLocation_Parms.bIsReadyToFire = bIsReadyToFire;

		this->ProcessEvent( pfnReplicateShootSpotLocation, &ReplicateShootSpotLocation_Parms, NULL );
	};

	struct FVector GetShootSpotLocation ( struct FRotator* StartFireRot )
	{
		static UFunction* pfnGetShootSpotLocation = NULL;

		if ( !pfnGetShootSpotLocation )
			pfnGetShootSpotLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.GetShootSpotLocation" );

		ACCWeapon_execGetShootSpotLocation_Parms GetShootSpotLocation_Parms;

		this->ProcessEvent( pfnGetShootSpotLocation, &GetShootSpotLocation_Parms, NULL );

		if ( StartFireRot )
			memcpy( StartFireRot, &GetShootSpotLocation_Parms.StartFireRot, 0xC ); // CPF_OutParm

		return GetShootSpotLocation_Parms.ReturnValue;
	};

	void TickForceNoIdleLogic ( float Delta )
	{
		static UFunction* pfnTickForceNoIdleLogic = NULL;

		if ( !pfnTickForceNoIdleLogic )
			pfnTickForceNoIdleLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.TickForceNoIdleLogic" );

		ACCWeapon_execTickForceNoIdleLogic_Parms TickForceNoIdleLogic_Parms;
		TickForceNoIdleLogic_Parms.Delta = Delta;

		this->ProcessEvent( pfnTickForceNoIdleLogic, &TickForceNoIdleLogic_Parms, NULL );
	};

	void ConditionalAutoReload ()
	{
		static UFunction* pfnConditionalAutoReload = NULL;

		if ( !pfnConditionalAutoReload )
			pfnConditionalAutoReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ConditionalAutoReload" );

		ACCWeapon_execConditionalAutoReload_Parms ConditionalAutoReload_Parms;

		this->ProcessEvent( pfnConditionalAutoReload, &ConditionalAutoReload_Parms, NULL );
	};

	void eventTick ( float Delta )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.Tick" );

		ACCWeapon_eventTick_Parms Tick_Parms;
		Tick_Parms.Delta = Delta;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.ReplicatedEvent" );

		ACCWeapon_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCWeapon.PostBeginPlay" );

		ACCWeapon_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCWeapon::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif