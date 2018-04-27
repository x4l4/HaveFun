/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AWeapon.h
// Date: 06/16/2011 @ 05:19:39.828
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EWeaponFireType
{
	EWFT_InstantHit = 0,
	EWFT_Projectile = 1,
	EWFT_Custom = 2,
	EWFT_None = 3,
	EWFT_MAX = 4
};

struct AWeapon_execCacheAIController_Parms
{
};

struct AWeapon_execWeaponIsDown_Parms
{
};

struct AWeapon_execStillFiring_Parms
{
	unsigned char FireMode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execShouldRefire_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execNotifyWeaponFinishedFiring_Parms
{
	unsigned char FireMode;
};

struct AWeapon_execNotifyWeaponFired_Parms
{
	unsigned char FireMode;
};

struct AWeapon_execHandleFinishedFiring_Parms
{
};

struct AWeapon_execTryPutDown_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execGetProjectileSpawnLocation_Parms
{
	struct FVector Direction; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct AWeapon_eventGetPhysicalFireStartLoc_Parms
{
	struct FVector AimDir;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event FUNC_Native

struct AWeapon_eventGetMuzzleLoc_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AWeapon_execCustomFire_Parms
{
};

struct AWeapon_execProjectileFire_Parms
{
	class AProjectile* ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execProcessInstantHit_Parms
{
	unsigned char FiringMode;
	struct FImpactInfo Impact;
};

struct AWeapon_execInstantFire_Parms
{
};

struct AWeapon_execPassThroughDamage_Parms
{
	class AActor* HitActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execCalcWeaponFire_Parms
{
	struct FVector StartTrace;
	struct FVector EndTrace;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FVector Extent;
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetTraceOwner_Parms
{
	class AActor* ReturnValue; // CPF_ReturnParm
};

struct AWeapon_eventGetTraceRange_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AWeapon_execAddAdditionalAimRotation_Parms
{
	struct FVector StartFireLoc;
	struct FRotator BaseRotation;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetAdjustedAim_Parms
{
	struct FVector StartFireLoc;
	unsigned long bWithSpread : 1;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execFireAmmunition_Parms
{
	float FireTimeStamp;
};

struct AWeapon_execFireModeUpdated_Parms
{
	unsigned char FiringMode;
	unsigned long bViaReplication : 1;
};

struct AWeapon_execSetCurrentFireMode_Parms
{
	unsigned char FiringModeNum;
};

struct AWeapon_execSendToFiringState_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execForceEndFire_Parms
{
};

struct AWeapon_execEndFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execServerStopFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execStopFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execBeginFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execServerStartFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execStartFire_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execWeaponCalcCamera_Parms
{
	float fDeltaTime;
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
};

struct AWeapon_execClientWeaponSet_Parms
{
	unsigned long bOptionalSet : 1;
	unsigned long bDoNotActivate : 1;
};

struct AWeapon_execClientGivenTo_Parms
{
	class APawn* NewOwner;
	unsigned long bDoNotActivate : 1;
};

struct AWeapon_execAdjustFOVAngle_Parms
{
	float FOVAngle;
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetViewAxes_Parms
{
	struct FVector XAxis; // CPF_OutParm
	struct FVector YAxis; // CPF_OutParm
	struct FVector ZAxis; // CPF_OutParm
};

struct AWeapon_execDetachWeapon_Parms
{
};

struct AWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent* MeshCpnt;
	struct FName SocketName;
};

struct AWeapon_execClearFlashLocation_Parms
{
};

struct AWeapon_execSetFlashLocation_Parms
{
	struct FVector StartTraceLocation;
	struct FVector EndTraceLocation;
	struct FAdditionalHitInfo AddInfo;
};

struct AWeapon_execClearFlashCount_Parms
{
};

struct AWeapon_execIncrementFlashCount_Parms
{
};

struct AWeapon_execWeaponEmpty_Parms
{
};

struct AWeapon_execDenyPickupQuery_Parms
{
	class UClass* ItemClass;
	class AActor* Pickup;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execPutDownWeapon_Parms
{
};

struct AWeapon_execActivate_Parms
{
};

struct AWeapon_execTimeWeaponEquipping_Parms
{
};

struct AWeapon_execTimeWeaponPutDown_Parms
{
};

struct AWeapon_execRefireCheckTimer_Parms
{
};

struct AWeapon_execTimeWeaponFiring_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execGetFireInterval_Parms
{
	unsigned char FireModeNum;
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execPlayFiringSound_Parms
{
};

struct AWeapon_execStopFireEffects_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execPlayFireEffects_Parms
{
	unsigned char FireModeNum;
	struct FVector StartTraceLocation;
	struct FVector EndTraceLocation;
	struct FAdditionalHitInfo AddInfo;
};

struct AWeapon_execStopWeaponAnimation_Parms
{
};

struct AWeapon_execPlayWeaponAnimation_Parms
{
	struct FName Sequence;
	float fDesiredDuration;
	unsigned long bLoop : 1;
	class USkeletalMeshComponent* SkelMesh;
};

struct AWeapon_execWeaponPlaySound_Parms
{
	void* Sound;
	float NoiseLoudness;
};

struct AWeapon_execGetWeaponAnimNodeSeq_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execFireOnRelease_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execSuggestDefenseStyle_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execSuggestAttackStyle_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execCanAttack_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execRangedAttackTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execRecommendLongRangedAttack_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execFocusOnLeader_Parms
{
	unsigned long bLeaderFiring : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execRecommendRangedAttack_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execGetWeaponRating_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execRelativeStrengthVersus_Parms
{
	class APawn* P;
	float Dist;
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetAIRating_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetDamageRadius_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execMaxRange_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execAddSpread_Parms
{
	struct FRotator BaseAim;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execGetProjectileClass_Parms
{
	class UClass* ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execClearPendingFire_Parms
{
	int FireMode;
};

struct AWeapon_execSetPendingFire_Parms
{
	int FireMode;
};

struct AWeapon_execPendingFire_Parms
{
	int FireMode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execHasAnyAmmo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execHasAmmo_Parms
{
	unsigned char FireModeNum;
	int Amount;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execAddAmmo_Parms
{
	int Amount;
	int ReturnValue; // CPF_ReturnParm
};

struct AWeapon_execConsumeAmmo_Parms
{
	unsigned char FireModeNum;
};

struct AWeapon_execDumpWeaponDebugToLog_Parms
{
};

struct AWeapon_execGetWeaponDebug_Parms
{
	TArray< struct FString > DebugInfo; // CPF_OutParm
};

struct AWeapon_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct AWeapon_execDenyClientWeaponSet_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_eventIsFiring_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AWeapon_execClientWeaponThrown_Parms
{
};

struct AWeapon_execCanThrow_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execDropFrom_Parms
{
	struct FVector StartLocation;
	struct FVector StartVelocity;
};

struct AWeapon_execDoOverridePrevWeapon_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execDoOverrideNextWeapon_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execHolderDied_Parms
{
};

struct AWeapon_execIsActiveWeapon_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AWeapon_execItemRemovedFromInvManager_Parms
{
};

struct AWeapon_eventDestroyed_Parms
{
};// FUNC_Event

// (0x208 - 0x2AC)
class AWeapon : public AInventory
{
public:
	unsigned char                                      CurrentFireMode;                             // 0x0208 (0x0001)
	TArray< struct FName >                             FiringStatesArray;                           // 0x020C (0x000C)
	TArray< unsigned char >                            WeaponFireTypes;                             // 0x0218 (0x000C)
	TArray< class UClass* >                            WeaponProjectiles;                           // 0x0224 (0x000C)
	TArray< float >                                    FireInterval;                                // 0x0230 (0x000C)
	TArray< float >                                    Spread;                                      // 0x023C (0x000C)
	TArray< float >                                    InstantHitDamage;                            // 0x0248 (0x000C)
	TArray< float >                                    InstantHitMomentum;                          // 0x0254 (0x000C)
	TArray< class UClass* >                            InstantHitDamageTypes;                       // 0x0260 (0x000C)
	float                                              EquipTime;                                   // 0x026C (0x0004)
	float                                              PutDownTime;                                 // 0x0270 (0x0004)
	struct FVector                                     FireOffset;                                  // 0x0274 (0x000C)
	unsigned long                                      bWeaponPutDown : 1;                          // 0x0280 (0x0004) [0x00000001]
	unsigned long                                      bCanThrow : 1;                               // 0x0280 (0x0004) [0x00000002]
	unsigned long                                      bWasOptionalSet : 1;                         // 0x0280 (0x0004) [0x00000004]
	unsigned long                                      bWasDoNotActivate : 1;                       // 0x0280 (0x0004) [0x00000008]
	unsigned long                                      bInstantHit : 1;                             // 0x0280 (0x0004) [0x00000010]
	unsigned long                                      bMeleeWeapon : 1;                            // 0x0280 (0x0004) [0x00000020]
	float                                              WeaponRange;                                 // 0x0284 (0x0004)
	class UMeshComponent*                              Mesh;                                        // 0x0288 (0x0004)
	float                                              DefaultAnimSpeed;                            // 0x028C (0x0004)
	float                                              Priority;                                    // 0x0290 (0x0004)
	void*                                              AIController;                                // 0x0294 (0x0004)
	TArray< unsigned char >                            ShouldFireOnRelease;                         // 0x0298 (0x000C)
	float                                              AIRating;                                    // 0x02A4 (0x0004)
	float                                              CachedMaxRange;                              // 0x02A8 (0x0004)

	// PendingClientWeaponSet
	// WeaponPuttingDown
	// WeaponEquipping
	// WeaponFiring
	// Active
	// Inactive

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Weapon" );

		return ClassPointer;
	};

public:
	void CacheAIController ()
	{
		static UFunction* pfnCacheAIController = NULL;

		if ( !pfnCacheAIController )
			pfnCacheAIController = UObject::FindObject< UFunction >( "Function Engine.Weapon.CacheAIController" );

		AWeapon_execCacheAIController_Parms CacheAIController_Parms;

		this->ProcessEvent( pfnCacheAIController, &CacheAIController_Parms, NULL );
	};

	void WeaponIsDown ()
	{
		static UFunction* pfnWeaponIsDown = NULL;

		if ( !pfnWeaponIsDown )
			pfnWeaponIsDown = UObject::FindObject< UFunction >( "Function Engine.Weapon.WeaponIsDown" );

		AWeapon_execWeaponIsDown_Parms WeaponIsDown_Parms;

		this->ProcessEvent( pfnWeaponIsDown, &WeaponIsDown_Parms, NULL );
	};

	bool StillFiring ( unsigned char FireMode )
	{
		static UFunction* pfnStillFiring = NULL;

		if ( !pfnStillFiring )
			pfnStillFiring = UObject::FindObject< UFunction >( "Function Engine.Weapon.StillFiring" );

		AWeapon_execStillFiring_Parms StillFiring_Parms;
		StillFiring_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnStillFiring, &StillFiring_Parms, NULL );

		return StillFiring_Parms.ReturnValue;
	};

	bool ShouldRefire ()
	{
		static UFunction* pfnShouldRefire = NULL;

		if ( !pfnShouldRefire )
			pfnShouldRefire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ShouldRefire" );

		AWeapon_execShouldRefire_Parms ShouldRefire_Parms;

		this->ProcessEvent( pfnShouldRefire, &ShouldRefire_Parms, NULL );

		return ShouldRefire_Parms.ReturnValue;
	};

	void NotifyWeaponFinishedFiring ( unsigned char FireMode )
	{
		static UFunction* pfnNotifyWeaponFinishedFiring = NULL;

		if ( !pfnNotifyWeaponFinishedFiring )
			pfnNotifyWeaponFinishedFiring = UObject::FindObject< UFunction >( "Function Engine.Weapon.NotifyWeaponFinishedFiring" );

		AWeapon_execNotifyWeaponFinishedFiring_Parms NotifyWeaponFinishedFiring_Parms;
		NotifyWeaponFinishedFiring_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnNotifyWeaponFinishedFiring, &NotifyWeaponFinishedFiring_Parms, NULL );
	};

	void NotifyWeaponFired ( unsigned char FireMode )
	{
		static UFunction* pfnNotifyWeaponFired = NULL;

		if ( !pfnNotifyWeaponFired )
			pfnNotifyWeaponFired = UObject::FindObject< UFunction >( "Function Engine.Weapon.NotifyWeaponFired" );

		AWeapon_execNotifyWeaponFired_Parms NotifyWeaponFired_Parms;
		NotifyWeaponFired_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnNotifyWeaponFired, &NotifyWeaponFired_Parms, NULL );
	};

	void HandleFinishedFiring ()
	{
		static UFunction* pfnHandleFinishedFiring = NULL;

		if ( !pfnHandleFinishedFiring )
			pfnHandleFinishedFiring = UObject::FindObject< UFunction >( "Function Engine.Weapon.HandleFinishedFiring" );

		AWeapon_execHandleFinishedFiring_Parms HandleFinishedFiring_Parms;

		this->ProcessEvent( pfnHandleFinishedFiring, &HandleFinishedFiring_Parms, NULL );
	};

	bool TryPutDown ()
	{
		static UFunction* pfnTryPutDown = NULL;

		if ( !pfnTryPutDown )
			pfnTryPutDown = UObject::FindObject< UFunction >( "Function Engine.Weapon.TryPutDown" );

		AWeapon_execTryPutDown_Parms TryPutDown_Parms;

		this->ProcessEvent( pfnTryPutDown, &TryPutDown_Parms, NULL );

		return TryPutDown_Parms.ReturnValue;
	};

	struct FVector GetProjectileSpawnLocation ( struct FVector* Direction )
	{
		static UFunction* pfnGetProjectileSpawnLocation = NULL;

		if ( !pfnGetProjectileSpawnLocation )
			pfnGetProjectileSpawnLocation = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetProjectileSpawnLocation" );

		AWeapon_execGetProjectileSpawnLocation_Parms GetProjectileSpawnLocation_Parms;

		this->ProcessEvent( pfnGetProjectileSpawnLocation, &GetProjectileSpawnLocation_Parms, NULL );

		if ( Direction )
			memcpy( Direction, &GetProjectileSpawnLocation_Parms.Direction, 0xC ); // CPF_OutParm

		return GetProjectileSpawnLocation_Parms.ReturnValue;
	};

	struct FVector eventGetPhysicalFireStartLoc ( struct FVector AimDir/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetPhysicalFireStartLoc = NULL;

		if ( !pfnGetPhysicalFireStartLoc )
			pfnGetPhysicalFireStartLoc = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetPhysicalFireStartLoc" );

		AWeapon_eventGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
		memcpy( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

		pfnGetPhysicalFireStartLoc->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );
		pfnGetPhysicalFireStartLoc->FunctionFlags |= 0x400;

		return GetPhysicalFireStartLoc_Parms.ReturnValue;
	};

	struct FVector eventGetMuzzleLoc ()
	{
		static UFunction* pfnGetMuzzleLoc = NULL;

		if ( !pfnGetMuzzleLoc )
			pfnGetMuzzleLoc = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetMuzzleLoc" );

		AWeapon_eventGetMuzzleLoc_Parms GetMuzzleLoc_Parms;

		this->ProcessEvent( pfnGetMuzzleLoc, &GetMuzzleLoc_Parms, NULL );

		return GetMuzzleLoc_Parms.ReturnValue;
	};

	void CustomFire ()
	{
		static UFunction* pfnCustomFire = NULL;

		if ( !pfnCustomFire )
			pfnCustomFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.CustomFire" );

		AWeapon_execCustomFire_Parms CustomFire_Parms;

		this->ProcessEvent( pfnCustomFire, &CustomFire_Parms, NULL );
	};

	class AProjectile* ProjectileFire ()
	{
		static UFunction* pfnProjectileFire = NULL;

		if ( !pfnProjectileFire )
			pfnProjectileFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ProjectileFire" );

		AWeapon_execProjectileFire_Parms ProjectileFire_Parms;

		this->ProcessEvent( pfnProjectileFire, &ProjectileFire_Parms, NULL );

		return ProjectileFire_Parms.ReturnValue;
	};

	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact )
	{
		static UFunction* pfnProcessInstantHit = NULL;

		if ( !pfnProcessInstantHit )
			pfnProcessInstantHit = UObject::FindObject< UFunction >( "Function Engine.Weapon.ProcessInstantHit" );

		AWeapon_execProcessInstantHit_Parms ProcessInstantHit_Parms;
		ProcessInstantHit_Parms.FiringMode = FiringMode;
		memcpy( &ProcessInstantHit_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
	};

	void InstantFire ()
	{
		static UFunction* pfnInstantFire = NULL;

		if ( !pfnInstantFire )
			pfnInstantFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.InstantFire" );

		AWeapon_execInstantFire_Parms InstantFire_Parms;

		this->ProcessEvent( pfnInstantFire, &InstantFire_Parms, NULL );
	};

	bool PassThroughDamage ( class AActor* HitActor )
	{
		static UFunction* pfnPassThroughDamage = NULL;

		if ( !pfnPassThroughDamage )
			pfnPassThroughDamage = UObject::FindObject< UFunction >( "Function Engine.Weapon.PassThroughDamage" );

		AWeapon_execPassThroughDamage_Parms PassThroughDamage_Parms;
		PassThroughDamage_Parms.HitActor = HitActor;

		this->ProcessEvent( pfnPassThroughDamage, &PassThroughDamage_Parms, NULL );

		return PassThroughDamage_Parms.ReturnValue;
	};

	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent/*CPF_OptionalParm*/, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFire = NULL;

		if ( !pfnCalcWeaponFire )
			pfnCalcWeaponFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.CalcWeaponFire" );

		AWeapon_execCalcWeaponFire_Parms CalcWeaponFire_Parms;
		memcpy( &CalcWeaponFire_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &CalcWeaponFire_Parms.EndTrace, &EndTrace, 0xC );
		memcpy( &CalcWeaponFire_Parms.Extent, &Extent, 0xC );

		this->ProcessEvent( pfnCalcWeaponFire, &CalcWeaponFire_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFire_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFire_Parms.ReturnValue;
	};

	class AActor* GetTraceOwner ()
	{
		static UFunction* pfnGetTraceOwner = NULL;

		if ( !pfnGetTraceOwner )
			pfnGetTraceOwner = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetTraceOwner" );

		AWeapon_execGetTraceOwner_Parms GetTraceOwner_Parms;

		this->ProcessEvent( pfnGetTraceOwner, &GetTraceOwner_Parms, NULL );

		return GetTraceOwner_Parms.ReturnValue;
	};

	float eventGetTraceRange ()
	{
		static UFunction* pfnGetTraceRange = NULL;

		if ( !pfnGetTraceRange )
			pfnGetTraceRange = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetTraceRange" );

		AWeapon_eventGetTraceRange_Parms GetTraceRange_Parms;

		this->ProcessEvent( pfnGetTraceRange, &GetTraceRange_Parms, NULL );

		return GetTraceRange_Parms.ReturnValue;
	};

	struct FRotator AddAdditionalAimRotation ( struct FVector StartFireLoc, struct FRotator BaseRotation )
	{
		static UFunction* pfnAddAdditionalAimRotation = NULL;

		if ( !pfnAddAdditionalAimRotation )
			pfnAddAdditionalAimRotation = UObject::FindObject< UFunction >( "Function Engine.Weapon.AddAdditionalAimRotation" );

		AWeapon_execAddAdditionalAimRotation_Parms AddAdditionalAimRotation_Parms;
		memcpy( &AddAdditionalAimRotation_Parms.StartFireLoc, &StartFireLoc, 0xC );
		memcpy( &AddAdditionalAimRotation_Parms.BaseRotation, &BaseRotation, 0xC );

		this->ProcessEvent( pfnAddAdditionalAimRotation, &AddAdditionalAimRotation_Parms, NULL );

		return AddAdditionalAimRotation_Parms.ReturnValue;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc, unsigned long bWithSpread/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetAdjustedAim = NULL;

		if ( !pfnGetAdjustedAim )
			pfnGetAdjustedAim = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetAdjustedAim" );

		AWeapon_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
		memcpy( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );
		GetAdjustedAim_Parms.bWithSpread = bWithSpread;

		this->ProcessEvent( pfnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

		return GetAdjustedAim_Parms.ReturnValue;
	};

	void FireAmmunition ( float FireTimeStamp )
	{
		static UFunction* pfnFireAmmunition = NULL;

		if ( !pfnFireAmmunition )
			pfnFireAmmunition = UObject::FindObject< UFunction >( "Function Engine.Weapon.FireAmmunition" );

		AWeapon_execFireAmmunition_Parms FireAmmunition_Parms;
		FireAmmunition_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnFireAmmunition, &FireAmmunition_Parms, NULL );
	};

	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication )
	{
		static UFunction* pfnFireModeUpdated = NULL;

		if ( !pfnFireModeUpdated )
			pfnFireModeUpdated = UObject::FindObject< UFunction >( "Function Engine.Weapon.FireModeUpdated" );

		AWeapon_execFireModeUpdated_Parms FireModeUpdated_Parms;
		FireModeUpdated_Parms.FiringMode = FiringMode;
		FireModeUpdated_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnFireModeUpdated, &FireModeUpdated_Parms, NULL );
	};

	void SetCurrentFireMode ( unsigned char FiringModeNum )
	{
		static UFunction* pfnSetCurrentFireMode = NULL;

		if ( !pfnSetCurrentFireMode )
			pfnSetCurrentFireMode = UObject::FindObject< UFunction >( "Function Engine.Weapon.SetCurrentFireMode" );

		AWeapon_execSetCurrentFireMode_Parms SetCurrentFireMode_Parms;
		SetCurrentFireMode_Parms.FiringModeNum = FiringModeNum;

		this->ProcessEvent( pfnSetCurrentFireMode, &SetCurrentFireMode_Parms, NULL );
	};

	void SendToFiringState ( unsigned char FireModeNum )
	{
		static UFunction* pfnSendToFiringState = NULL;

		if ( !pfnSendToFiringState )
			pfnSendToFiringState = UObject::FindObject< UFunction >( "Function Engine.Weapon.SendToFiringState" );

		AWeapon_execSendToFiringState_Parms SendToFiringState_Parms;
		SendToFiringState_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnSendToFiringState, &SendToFiringState_Parms, NULL );
	};

	void ForceEndFire ()
	{
		static UFunction* pfnForceEndFire = NULL;

		if ( !pfnForceEndFire )
			pfnForceEndFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ForceEndFire" );

		AWeapon_execForceEndFire_Parms ForceEndFire_Parms;

		this->ProcessEvent( pfnForceEndFire, &ForceEndFire_Parms, NULL );
	};

	void EndFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnEndFire = NULL;

		if ( !pfnEndFire )
			pfnEndFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.EndFire" );

		AWeapon_execEndFire_Parms EndFire_Parms;
		EndFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnEndFire, &EndFire_Parms, NULL );
	};

	void ServerStopFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnServerStopFire = NULL;

		if ( !pfnServerStopFire )
			pfnServerStopFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ServerStopFire" );

		AWeapon_execServerStopFire_Parms ServerStopFire_Parms;
		ServerStopFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnServerStopFire, &ServerStopFire_Parms, NULL );
	};

	void StopFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnStopFire = NULL;

		if ( !pfnStopFire )
			pfnStopFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.StopFire" );

		AWeapon_execStopFire_Parms StopFire_Parms;
		StopFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopFire, &StopFire_Parms, NULL );
	};

	void BeginFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnBeginFire = NULL;

		if ( !pfnBeginFire )
			pfnBeginFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.BeginFire" );

		AWeapon_execBeginFire_Parms BeginFire_Parms;
		BeginFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnBeginFire, &BeginFire_Parms, NULL );
	};

	void ServerStartFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnServerStartFire = NULL;

		if ( !pfnServerStartFire )
			pfnServerStartFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ServerStartFire" );

		AWeapon_execServerStartFire_Parms ServerStartFire_Parms;
		ServerStartFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnServerStartFire, &ServerStartFire_Parms, NULL );
	};

	void StartFire ( unsigned char FireModeNum )
	{
		static UFunction* pfnStartFire = NULL;

		if ( !pfnStartFire )
			pfnStartFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.StartFire" );

		AWeapon_execStartFire_Parms StartFire_Parms;
		StartFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStartFire, &StartFire_Parms, NULL );
	};

	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot )
	{
		static UFunction* pfnWeaponCalcCamera = NULL;

		if ( !pfnWeaponCalcCamera )
			pfnWeaponCalcCamera = UObject::FindObject< UFunction >( "Function Engine.Weapon.WeaponCalcCamera" );

		AWeapon_execWeaponCalcCamera_Parms WeaponCalcCamera_Parms;
		WeaponCalcCamera_Parms.fDeltaTime = fDeltaTime;

		this->ProcessEvent( pfnWeaponCalcCamera, &WeaponCalcCamera_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &WeaponCalcCamera_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &WeaponCalcCamera_Parms.out_CamRot, 0xC ); // CPF_OutParm
	};

	void ClientWeaponSet ( unsigned long bOptionalSet, unsigned long bDoNotActivate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientWeaponSet = NULL;

		if ( !pfnClientWeaponSet )
			pfnClientWeaponSet = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClientWeaponSet" );

		AWeapon_execClientWeaponSet_Parms ClientWeaponSet_Parms;
		ClientWeaponSet_Parms.bOptionalSet = bOptionalSet;
		ClientWeaponSet_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnClientWeaponSet, &ClientWeaponSet_Parms, NULL );
	};

	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
	{
		static UFunction* pfnClientGivenTo = NULL;

		if ( !pfnClientGivenTo )
			pfnClientGivenTo = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClientGivenTo" );

		AWeapon_execClientGivenTo_Parms ClientGivenTo_Parms;
		ClientGivenTo_Parms.NewOwner = NewOwner;
		ClientGivenTo_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnClientGivenTo, &ClientGivenTo_Parms, NULL );
	};

	float AdjustFOVAngle ( float FOVAngle )
	{
		static UFunction* pfnAdjustFOVAngle = NULL;

		if ( !pfnAdjustFOVAngle )
			pfnAdjustFOVAngle = UObject::FindObject< UFunction >( "Function Engine.Weapon.AdjustFOVAngle" );

		AWeapon_execAdjustFOVAngle_Parms AdjustFOVAngle_Parms;
		AdjustFOVAngle_Parms.FOVAngle = FOVAngle;

		this->ProcessEvent( pfnAdjustFOVAngle, &AdjustFOVAngle_Parms, NULL );

		return AdjustFOVAngle_Parms.ReturnValue;
	};

	void GetViewAxes ( struct FVector* XAxis, struct FVector* YAxis, struct FVector* ZAxis )
	{
		static UFunction* pfnGetViewAxes = NULL;

		if ( !pfnGetViewAxes )
			pfnGetViewAxes = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetViewAxes" );

		AWeapon_execGetViewAxes_Parms GetViewAxes_Parms;

		this->ProcessEvent( pfnGetViewAxes, &GetViewAxes_Parms, NULL );

		if ( XAxis )
			memcpy( XAxis, &GetViewAxes_Parms.XAxis, 0xC ); // CPF_OutParm
		if ( YAxis )
			memcpy( YAxis, &GetViewAxes_Parms.YAxis, 0xC ); // CPF_OutParm
		if ( ZAxis )
			memcpy( ZAxis, &GetViewAxes_Parms.ZAxis, 0xC ); // CPF_OutParm
	};

	void DetachWeapon ()
	{
		static UFunction* pfnDetachWeapon = NULL;

		if ( !pfnDetachWeapon )
			pfnDetachWeapon = UObject::FindObject< UFunction >( "Function Engine.Weapon.DetachWeapon" );

		AWeapon_execDetachWeapon_Parms DetachWeapon_Parms;

		this->ProcessEvent( pfnDetachWeapon, &DetachWeapon_Parms, NULL );
	};

	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAttachWeaponTo = NULL;

		if ( !pfnAttachWeaponTo )
			pfnAttachWeaponTo = UObject::FindObject< UFunction >( "Function Engine.Weapon.AttachWeaponTo" );

		AWeapon_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
		AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
		memcpy( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

		this->ProcessEvent( pfnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
	};

	void ClearFlashLocation ()
	{
		static UFunction* pfnClearFlashLocation = NULL;

		if ( !pfnClearFlashLocation )
			pfnClearFlashLocation = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClearFlashLocation" );

		AWeapon_execClearFlashLocation_Parms ClearFlashLocation_Parms;

		this->ProcessEvent( pfnClearFlashLocation, &ClearFlashLocation_Parms, NULL );
	};

	void SetFlashLocation ( struct FVector StartTraceLocation, struct FVector EndTraceLocation, struct FAdditionalHitInfo AddInfo )
	{
		static UFunction* pfnSetFlashLocation = NULL;

		if ( !pfnSetFlashLocation )
			pfnSetFlashLocation = UObject::FindObject< UFunction >( "Function Engine.Weapon.SetFlashLocation" );

		AWeapon_execSetFlashLocation_Parms SetFlashLocation_Parms;
		memcpy( &SetFlashLocation_Parms.StartTraceLocation, &StartTraceLocation, 0xC );
		memcpy( &SetFlashLocation_Parms.EndTraceLocation, &EndTraceLocation, 0xC );
		memcpy( &SetFlashLocation_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnSetFlashLocation, &SetFlashLocation_Parms, NULL );
	};

	void ClearFlashCount ()
	{
		static UFunction* pfnClearFlashCount = NULL;

		if ( !pfnClearFlashCount )
			pfnClearFlashCount = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClearFlashCount" );

		AWeapon_execClearFlashCount_Parms ClearFlashCount_Parms;

		this->ProcessEvent( pfnClearFlashCount, &ClearFlashCount_Parms, NULL );
	};

	void IncrementFlashCount ()
	{
		static UFunction* pfnIncrementFlashCount = NULL;

		if ( !pfnIncrementFlashCount )
			pfnIncrementFlashCount = UObject::FindObject< UFunction >( "Function Engine.Weapon.IncrementFlashCount" );

		AWeapon_execIncrementFlashCount_Parms IncrementFlashCount_Parms;

		this->ProcessEvent( pfnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
	};

	void WeaponEmpty ()
	{
		static UFunction* pfnWeaponEmpty = NULL;

		if ( !pfnWeaponEmpty )
			pfnWeaponEmpty = UObject::FindObject< UFunction >( "Function Engine.Weapon.WeaponEmpty" );

		AWeapon_execWeaponEmpty_Parms WeaponEmpty_Parms;

		this->ProcessEvent( pfnWeaponEmpty, &WeaponEmpty_Parms, NULL );
	};

	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup )
	{
		static UFunction* pfnDenyPickupQuery = NULL;

		if ( !pfnDenyPickupQuery )
			pfnDenyPickupQuery = UObject::FindObject< UFunction >( "Function Engine.Weapon.DenyPickupQuery" );

		AWeapon_execDenyPickupQuery_Parms DenyPickupQuery_Parms;
		DenyPickupQuery_Parms.ItemClass = ItemClass;
		DenyPickupQuery_Parms.Pickup = Pickup;

		this->ProcessEvent( pfnDenyPickupQuery, &DenyPickupQuery_Parms, NULL );

		return DenyPickupQuery_Parms.ReturnValue;
	};

	void PutDownWeapon ()
	{
		static UFunction* pfnPutDownWeapon = NULL;

		if ( !pfnPutDownWeapon )
			pfnPutDownWeapon = UObject::FindObject< UFunction >( "Function Engine.Weapon.PutDownWeapon" );

		AWeapon_execPutDownWeapon_Parms PutDownWeapon_Parms;

		this->ProcessEvent( pfnPutDownWeapon, &PutDownWeapon_Parms, NULL );
	};

	void Activate ()
	{
		static UFunction* pfnActivate = NULL;

		if ( !pfnActivate )
			pfnActivate = UObject::FindObject< UFunction >( "Function Engine.Weapon.Activate" );

		AWeapon_execActivate_Parms Activate_Parms;

		this->ProcessEvent( pfnActivate, &Activate_Parms, NULL );
	};

	void TimeWeaponEquipping ()
	{
		static UFunction* pfnTimeWeaponEquipping = NULL;

		if ( !pfnTimeWeaponEquipping )
			pfnTimeWeaponEquipping = UObject::FindObject< UFunction >( "Function Engine.Weapon.TimeWeaponEquipping" );

		AWeapon_execTimeWeaponEquipping_Parms TimeWeaponEquipping_Parms;

		this->ProcessEvent( pfnTimeWeaponEquipping, &TimeWeaponEquipping_Parms, NULL );
	};

	void TimeWeaponPutDown ()
	{
		static UFunction* pfnTimeWeaponPutDown = NULL;

		if ( !pfnTimeWeaponPutDown )
			pfnTimeWeaponPutDown = UObject::FindObject< UFunction >( "Function Engine.Weapon.TimeWeaponPutDown" );

		AWeapon_execTimeWeaponPutDown_Parms TimeWeaponPutDown_Parms;

		this->ProcessEvent( pfnTimeWeaponPutDown, &TimeWeaponPutDown_Parms, NULL );
	};

	void RefireCheckTimer ()
	{
		static UFunction* pfnRefireCheckTimer = NULL;

		if ( !pfnRefireCheckTimer )
			pfnRefireCheckTimer = UObject::FindObject< UFunction >( "Function Engine.Weapon.RefireCheckTimer" );

		AWeapon_execRefireCheckTimer_Parms RefireCheckTimer_Parms;

		this->ProcessEvent( pfnRefireCheckTimer, &RefireCheckTimer_Parms, NULL );
	};

	void TimeWeaponFiring ( unsigned char FireModeNum )
	{
		static UFunction* pfnTimeWeaponFiring = NULL;

		if ( !pfnTimeWeaponFiring )
			pfnTimeWeaponFiring = UObject::FindObject< UFunction >( "Function Engine.Weapon.TimeWeaponFiring" );

		AWeapon_execTimeWeaponFiring_Parms TimeWeaponFiring_Parms;
		TimeWeaponFiring_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnTimeWeaponFiring, &TimeWeaponFiring_Parms, NULL );
	};

	float GetFireInterval ( unsigned char FireModeNum )
	{
		static UFunction* pfnGetFireInterval = NULL;

		if ( !pfnGetFireInterval )
			pfnGetFireInterval = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetFireInterval" );

		AWeapon_execGetFireInterval_Parms GetFireInterval_Parms;
		GetFireInterval_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnGetFireInterval, &GetFireInterval_Parms, NULL );

		return GetFireInterval_Parms.ReturnValue;
	};

	void PlayFiringSound ()
	{
		static UFunction* pfnPlayFiringSound = NULL;

		if ( !pfnPlayFiringSound )
			pfnPlayFiringSound = UObject::FindObject< UFunction >( "Function Engine.Weapon.PlayFiringSound" );

		AWeapon_execPlayFiringSound_Parms PlayFiringSound_Parms;

		this->ProcessEvent( pfnPlayFiringSound, &PlayFiringSound_Parms, NULL );
	};

	void StopFireEffects ( unsigned char FireModeNum )
	{
		static UFunction* pfnStopFireEffects = NULL;

		if ( !pfnStopFireEffects )
			pfnStopFireEffects = UObject::FindObject< UFunction >( "Function Engine.Weapon.StopFireEffects" );

		AWeapon_execStopFireEffects_Parms StopFireEffects_Parms;
		StopFireEffects_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopFireEffects, &StopFireEffects_Parms, NULL );
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector StartTraceLocation/*CPF_OptionalParm*/, struct FVector EndTraceLocation/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayFireEffects = NULL;

		if ( !pfnPlayFireEffects )
			pfnPlayFireEffects = UObject::FindObject< UFunction >( "Function Engine.Weapon.PlayFireEffects" );

		AWeapon_execPlayFireEffects_Parms PlayFireEffects_Parms;
		PlayFireEffects_Parms.FireModeNum = FireModeNum;
		memcpy( &PlayFireEffects_Parms.StartTraceLocation, &StartTraceLocation, 0xC );
		memcpy( &PlayFireEffects_Parms.EndTraceLocation, &EndTraceLocation, 0xC );
		memcpy( &PlayFireEffects_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnPlayFireEffects, &PlayFireEffects_Parms, NULL );
	};

	void StopWeaponAnimation ()
	{
		static UFunction* pfnStopWeaponAnimation = NULL;

		if ( !pfnStopWeaponAnimation )
			pfnStopWeaponAnimation = UObject::FindObject< UFunction >( "Function Engine.Weapon.StopWeaponAnimation" );

		AWeapon_execStopWeaponAnimation_Parms StopWeaponAnimation_Parms;

		this->ProcessEvent( pfnStopWeaponAnimation, &StopWeaponAnimation_Parms, NULL );
	};

	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop/*CPF_OptionalParm*/, class USkeletalMeshComponent* SkelMesh/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayWeaponAnimation = NULL;

		if ( !pfnPlayWeaponAnimation )
			pfnPlayWeaponAnimation = UObject::FindObject< UFunction >( "Function Engine.Weapon.PlayWeaponAnimation" );

		AWeapon_execPlayWeaponAnimation_Parms PlayWeaponAnimation_Parms;
		memcpy( &PlayWeaponAnimation_Parms.Sequence, &Sequence, 0x8 );
		PlayWeaponAnimation_Parms.fDesiredDuration = fDesiredDuration;
		PlayWeaponAnimation_Parms.bLoop = bLoop;
		PlayWeaponAnimation_Parms.SkelMesh = SkelMesh;

		this->ProcessEvent( pfnPlayWeaponAnimation, &PlayWeaponAnimation_Parms, NULL );
	};

	void WeaponPlaySound ( void* Sound, float NoiseLoudness/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnWeaponPlaySound = NULL;

		if ( !pfnWeaponPlaySound )
			pfnWeaponPlaySound = UObject::FindObject< UFunction >( "Function Engine.Weapon.WeaponPlaySound" );

		AWeapon_execWeaponPlaySound_Parms WeaponPlaySound_Parms;
		WeaponPlaySound_Parms.Sound = Sound;
		WeaponPlaySound_Parms.NoiseLoudness = NoiseLoudness;

		this->ProcessEvent( pfnWeaponPlaySound, &WeaponPlaySound_Parms, NULL );
	};

	void* GetWeaponAnimNodeSeq ()
	{
		static UFunction* pfnGetWeaponAnimNodeSeq = NULL;

		if ( !pfnGetWeaponAnimNodeSeq )
			pfnGetWeaponAnimNodeSeq = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetWeaponAnimNodeSeq" );

		AWeapon_execGetWeaponAnimNodeSeq_Parms GetWeaponAnimNodeSeq_Parms;

		this->ProcessEvent( pfnGetWeaponAnimNodeSeq, &GetWeaponAnimNodeSeq_Parms, NULL );

		return GetWeaponAnimNodeSeq_Parms.ReturnValue;
	};

	bool FireOnRelease ()
	{
		static UFunction* pfnFireOnRelease = NULL;

		if ( !pfnFireOnRelease )
			pfnFireOnRelease = UObject::FindObject< UFunction >( "Function Engine.Weapon.FireOnRelease" );

		AWeapon_execFireOnRelease_Parms FireOnRelease_Parms;

		this->ProcessEvent( pfnFireOnRelease, &FireOnRelease_Parms, NULL );

		return FireOnRelease_Parms.ReturnValue;
	};

	float SuggestDefenseStyle ()
	{
		static UFunction* pfnSuggestDefenseStyle = NULL;

		if ( !pfnSuggestDefenseStyle )
			pfnSuggestDefenseStyle = UObject::FindObject< UFunction >( "Function Engine.Weapon.SuggestDefenseStyle" );

		AWeapon_execSuggestDefenseStyle_Parms SuggestDefenseStyle_Parms;

		this->ProcessEvent( pfnSuggestDefenseStyle, &SuggestDefenseStyle_Parms, NULL );

		return SuggestDefenseStyle_Parms.ReturnValue;
	};

	float SuggestAttackStyle ()
	{
		static UFunction* pfnSuggestAttackStyle = NULL;

		if ( !pfnSuggestAttackStyle )
			pfnSuggestAttackStyle = UObject::FindObject< UFunction >( "Function Engine.Weapon.SuggestAttackStyle" );

		AWeapon_execSuggestAttackStyle_Parms SuggestAttackStyle_Parms;

		this->ProcessEvent( pfnSuggestAttackStyle, &SuggestAttackStyle_Parms, NULL );

		return SuggestAttackStyle_Parms.ReturnValue;
	};

	bool CanAttack ( class AActor* Other )
	{
		static UFunction* pfnCanAttack = NULL;

		if ( !pfnCanAttack )
			pfnCanAttack = UObject::FindObject< UFunction >( "Function Engine.Weapon.CanAttack" );

		AWeapon_execCanAttack_Parms CanAttack_Parms;
		CanAttack_Parms.Other = Other;

		this->ProcessEvent( pfnCanAttack, &CanAttack_Parms, NULL );

		return CanAttack_Parms.ReturnValue;
	};

	float RangedAttackTime ()
	{
		static UFunction* pfnRangedAttackTime = NULL;

		if ( !pfnRangedAttackTime )
			pfnRangedAttackTime = UObject::FindObject< UFunction >( "Function Engine.Weapon.RangedAttackTime" );

		AWeapon_execRangedAttackTime_Parms RangedAttackTime_Parms;

		this->ProcessEvent( pfnRangedAttackTime, &RangedAttackTime_Parms, NULL );

		return RangedAttackTime_Parms.ReturnValue;
	};

	bool RecommendLongRangedAttack ()
	{
		static UFunction* pfnRecommendLongRangedAttack = NULL;

		if ( !pfnRecommendLongRangedAttack )
			pfnRecommendLongRangedAttack = UObject::FindObject< UFunction >( "Function Engine.Weapon.RecommendLongRangedAttack" );

		AWeapon_execRecommendLongRangedAttack_Parms RecommendLongRangedAttack_Parms;

		this->ProcessEvent( pfnRecommendLongRangedAttack, &RecommendLongRangedAttack_Parms, NULL );

		return RecommendLongRangedAttack_Parms.ReturnValue;
	};

	bool FocusOnLeader ( unsigned long bLeaderFiring )
	{
		static UFunction* pfnFocusOnLeader = NULL;

		if ( !pfnFocusOnLeader )
			pfnFocusOnLeader = UObject::FindObject< UFunction >( "Function Engine.Weapon.FocusOnLeader" );

		AWeapon_execFocusOnLeader_Parms FocusOnLeader_Parms;
		FocusOnLeader_Parms.bLeaderFiring = bLeaderFiring;

		this->ProcessEvent( pfnFocusOnLeader, &FocusOnLeader_Parms, NULL );

		return FocusOnLeader_Parms.ReturnValue;
	};

	bool RecommendRangedAttack ()
	{
		static UFunction* pfnRecommendRangedAttack = NULL;

		if ( !pfnRecommendRangedAttack )
			pfnRecommendRangedAttack = UObject::FindObject< UFunction >( "Function Engine.Weapon.RecommendRangedAttack" );

		AWeapon_execRecommendRangedAttack_Parms RecommendRangedAttack_Parms;

		this->ProcessEvent( pfnRecommendRangedAttack, &RecommendRangedAttack_Parms, NULL );

		return RecommendRangedAttack_Parms.ReturnValue;
	};

	float GetWeaponRating ()
	{
		static UFunction* pfnGetWeaponRating = NULL;

		if ( !pfnGetWeaponRating )
			pfnGetWeaponRating = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetWeaponRating" );

		AWeapon_execGetWeaponRating_Parms GetWeaponRating_Parms;

		this->ProcessEvent( pfnGetWeaponRating, &GetWeaponRating_Parms, NULL );

		return GetWeaponRating_Parms.ReturnValue;
	};

	float RelativeStrengthVersus ( class APawn* P, float Dist )
	{
		static UFunction* pfnRelativeStrengthVersus = NULL;

		if ( !pfnRelativeStrengthVersus )
			pfnRelativeStrengthVersus = UObject::FindObject< UFunction >( "Function Engine.Weapon.RelativeStrengthVersus" );

		AWeapon_execRelativeStrengthVersus_Parms RelativeStrengthVersus_Parms;
		RelativeStrengthVersus_Parms.P = P;
		RelativeStrengthVersus_Parms.Dist = Dist;

		this->ProcessEvent( pfnRelativeStrengthVersus, &RelativeStrengthVersus_Parms, NULL );

		return RelativeStrengthVersus_Parms.ReturnValue;
	};

	float GetAIRating ()
	{
		static UFunction* pfnGetAIRating = NULL;

		if ( !pfnGetAIRating )
			pfnGetAIRating = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetAIRating" );

		AWeapon_execGetAIRating_Parms GetAIRating_Parms;

		this->ProcessEvent( pfnGetAIRating, &GetAIRating_Parms, NULL );

		return GetAIRating_Parms.ReturnValue;
	};

	float GetDamageRadius ()
	{
		static UFunction* pfnGetDamageRadius = NULL;

		if ( !pfnGetDamageRadius )
			pfnGetDamageRadius = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetDamageRadius" );

		AWeapon_execGetDamageRadius_Parms GetDamageRadius_Parms;

		this->ProcessEvent( pfnGetDamageRadius, &GetDamageRadius_Parms, NULL );

		return GetDamageRadius_Parms.ReturnValue;
	};

	float MaxRange ()
	{
		static UFunction* pfnMaxRange = NULL;

		if ( !pfnMaxRange )
			pfnMaxRange = UObject::FindObject< UFunction >( "Function Engine.Weapon.MaxRange" );

		AWeapon_execMaxRange_Parms MaxRange_Parms;

		this->ProcessEvent( pfnMaxRange, &MaxRange_Parms, NULL );

		return MaxRange_Parms.ReturnValue;
	};

	struct FRotator AddSpread ( struct FRotator BaseAim )
	{
		static UFunction* pfnAddSpread = NULL;

		if ( !pfnAddSpread )
			pfnAddSpread = UObject::FindObject< UFunction >( "Function Engine.Weapon.AddSpread" );

		AWeapon_execAddSpread_Parms AddSpread_Parms;
		memcpy( &AddSpread_Parms.BaseAim, &BaseAim, 0xC );

		this->ProcessEvent( pfnAddSpread, &AddSpread_Parms, NULL );

		return AddSpread_Parms.ReturnValue;
	};

	class UClass* GetProjectileClass ()
	{
		static UFunction* pfnGetProjectileClass = NULL;

		if ( !pfnGetProjectileClass )
			pfnGetProjectileClass = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetProjectileClass" );

		AWeapon_execGetProjectileClass_Parms GetProjectileClass_Parms;

		this->ProcessEvent( pfnGetProjectileClass, &GetProjectileClass_Parms, NULL );

		return GetProjectileClass_Parms.ReturnValue;
	};

	void ClearPendingFire ( int FireMode )
	{
		static UFunction* pfnClearPendingFire = NULL;

		if ( !pfnClearPendingFire )
			pfnClearPendingFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClearPendingFire" );

		AWeapon_execClearPendingFire_Parms ClearPendingFire_Parms;
		ClearPendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnClearPendingFire, &ClearPendingFire_Parms, NULL );
	};

	void SetPendingFire ( int FireMode )
	{
		static UFunction* pfnSetPendingFire = NULL;

		if ( !pfnSetPendingFire )
			pfnSetPendingFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.SetPendingFire" );

		AWeapon_execSetPendingFire_Parms SetPendingFire_Parms;
		SetPendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnSetPendingFire, &SetPendingFire_Parms, NULL );
	};

	bool PendingFire ( int FireMode )
	{
		static UFunction* pfnPendingFire = NULL;

		if ( !pfnPendingFire )
			pfnPendingFire = UObject::FindObject< UFunction >( "Function Engine.Weapon.PendingFire" );

		AWeapon_execPendingFire_Parms PendingFire_Parms;
		PendingFire_Parms.FireMode = FireMode;

		this->ProcessEvent( pfnPendingFire, &PendingFire_Parms, NULL );

		return PendingFire_Parms.ReturnValue;
	};

	bool HasAnyAmmo ()
	{
		static UFunction* pfnHasAnyAmmo = NULL;

		if ( !pfnHasAnyAmmo )
			pfnHasAnyAmmo = UObject::FindObject< UFunction >( "Function Engine.Weapon.HasAnyAmmo" );

		AWeapon_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

		this->ProcessEvent( pfnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

		return HasAnyAmmo_Parms.ReturnValue;
	};

	bool HasAmmo ( unsigned char FireModeNum, int Amount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHasAmmo = NULL;

		if ( !pfnHasAmmo )
			pfnHasAmmo = UObject::FindObject< UFunction >( "Function Engine.Weapon.HasAmmo" );

		AWeapon_execHasAmmo_Parms HasAmmo_Parms;
		HasAmmo_Parms.FireModeNum = FireModeNum;
		HasAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnHasAmmo, &HasAmmo_Parms, NULL );

		return HasAmmo_Parms.ReturnValue;
	};

	int AddAmmo ( int Amount )
	{
		static UFunction* pfnAddAmmo = NULL;

		if ( !pfnAddAmmo )
			pfnAddAmmo = UObject::FindObject< UFunction >( "Function Engine.Weapon.AddAmmo" );

		AWeapon_execAddAmmo_Parms AddAmmo_Parms;
		AddAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnAddAmmo, &AddAmmo_Parms, NULL );

		return AddAmmo_Parms.ReturnValue;
	};

	void ConsumeAmmo ( unsigned char FireModeNum )
	{
		static UFunction* pfnConsumeAmmo = NULL;

		if ( !pfnConsumeAmmo )
			pfnConsumeAmmo = UObject::FindObject< UFunction >( "Function Engine.Weapon.ConsumeAmmo" );

		AWeapon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
		ConsumeAmmo_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
	};

	void DumpWeaponDebugToLog ()
	{
		static UFunction* pfnDumpWeaponDebugToLog = NULL;

		if ( !pfnDumpWeaponDebugToLog )
			pfnDumpWeaponDebugToLog = UObject::FindObject< UFunction >( "Function Engine.Weapon.DumpWeaponDebugToLog" );

		AWeapon_execDumpWeaponDebugToLog_Parms DumpWeaponDebugToLog_Parms;

		this->ProcessEvent( pfnDumpWeaponDebugToLog, &DumpWeaponDebugToLog_Parms, NULL );
	};

	void GetWeaponDebug ( TArray< struct FString >* DebugInfo )
	{
		static UFunction* pfnGetWeaponDebug = NULL;

		if ( !pfnGetWeaponDebug )
			pfnGetWeaponDebug = UObject::FindObject< UFunction >( "Function Engine.Weapon.GetWeaponDebug" );

		AWeapon_execGetWeaponDebug_Parms GetWeaponDebug_Parms;

		this->ProcessEvent( pfnGetWeaponDebug, &GetWeaponDebug_Parms, NULL );

		if ( DebugInfo )
			memcpy( DebugInfo, &GetWeaponDebug_Parms.DebugInfo, 0xC ); // CPF_OutParm
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Weapon.DisplayDebug" );

		AWeapon_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	bool DenyClientWeaponSet ()
	{
		static UFunction* pfnDenyClientWeaponSet = NULL;

		if ( !pfnDenyClientWeaponSet )
			pfnDenyClientWeaponSet = UObject::FindObject< UFunction >( "Function Engine.Weapon.DenyClientWeaponSet" );

		AWeapon_execDenyClientWeaponSet_Parms DenyClientWeaponSet_Parms;

		this->ProcessEvent( pfnDenyClientWeaponSet, &DenyClientWeaponSet_Parms, NULL );

		return DenyClientWeaponSet_Parms.ReturnValue;
	};

	bool eventIsFiring ()
	{
		static UFunction* pfnIsFiring = NULL;

		if ( !pfnIsFiring )
			pfnIsFiring = UObject::FindObject< UFunction >( "Function Engine.Weapon.IsFiring" );

		AWeapon_eventIsFiring_Parms IsFiring_Parms;

		this->ProcessEvent( pfnIsFiring, &IsFiring_Parms, NULL );

		return IsFiring_Parms.ReturnValue;
	};

	void ClientWeaponThrown ()
	{
		static UFunction* pfnClientWeaponThrown = NULL;

		if ( !pfnClientWeaponThrown )
			pfnClientWeaponThrown = UObject::FindObject< UFunction >( "Function Engine.Weapon.ClientWeaponThrown" );

		AWeapon_execClientWeaponThrown_Parms ClientWeaponThrown_Parms;

		this->ProcessEvent( pfnClientWeaponThrown, &ClientWeaponThrown_Parms, NULL );
	};

	bool CanThrow ()
	{
		static UFunction* pfnCanThrow = NULL;

		if ( !pfnCanThrow )
			pfnCanThrow = UObject::FindObject< UFunction >( "Function Engine.Weapon.CanThrow" );

		AWeapon_execCanThrow_Parms CanThrow_Parms;

		this->ProcessEvent( pfnCanThrow, &CanThrow_Parms, NULL );

		return CanThrow_Parms.ReturnValue;
	};

	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity )
	{
		static UFunction* pfnDropFrom = NULL;

		if ( !pfnDropFrom )
			pfnDropFrom = UObject::FindObject< UFunction >( "Function Engine.Weapon.DropFrom" );

		AWeapon_execDropFrom_Parms DropFrom_Parms;
		memcpy( &DropFrom_Parms.StartLocation, &StartLocation, 0xC );
		memcpy( &DropFrom_Parms.StartVelocity, &StartVelocity, 0xC );

		this->ProcessEvent( pfnDropFrom, &DropFrom_Parms, NULL );
	};

	bool DoOverridePrevWeapon ()
	{
		static UFunction* pfnDoOverridePrevWeapon = NULL;

		if ( !pfnDoOverridePrevWeapon )
			pfnDoOverridePrevWeapon = UObject::FindObject< UFunction >( "Function Engine.Weapon.DoOverridePrevWeapon" );

		AWeapon_execDoOverridePrevWeapon_Parms DoOverridePrevWeapon_Parms;

		this->ProcessEvent( pfnDoOverridePrevWeapon, &DoOverridePrevWeapon_Parms, NULL );

		return DoOverridePrevWeapon_Parms.ReturnValue;
	};

	bool DoOverrideNextWeapon ()
	{
		static UFunction* pfnDoOverrideNextWeapon = NULL;

		if ( !pfnDoOverrideNextWeapon )
			pfnDoOverrideNextWeapon = UObject::FindObject< UFunction >( "Function Engine.Weapon.DoOverrideNextWeapon" );

		AWeapon_execDoOverrideNextWeapon_Parms DoOverrideNextWeapon_Parms;

		this->ProcessEvent( pfnDoOverrideNextWeapon, &DoOverrideNextWeapon_Parms, NULL );

		return DoOverrideNextWeapon_Parms.ReturnValue;
	};

	void HolderDied ()
	{
		static UFunction* pfnHolderDied = NULL;

		if ( !pfnHolderDied )
			pfnHolderDied = UObject::FindObject< UFunction >( "Function Engine.Weapon.HolderDied" );

		AWeapon_execHolderDied_Parms HolderDied_Parms;

		this->ProcessEvent( pfnHolderDied, &HolderDied_Parms, NULL );
	};

	bool IsActiveWeapon ()
	{
		static UFunction* pfnIsActiveWeapon = NULL;

		if ( !pfnIsActiveWeapon )
			pfnIsActiveWeapon = UObject::FindObject< UFunction >( "Function Engine.Weapon.IsActiveWeapon" );

		AWeapon_execIsActiveWeapon_Parms IsActiveWeapon_Parms;

		this->ProcessEvent( pfnIsActiveWeapon, &IsActiveWeapon_Parms, NULL );

		return IsActiveWeapon_Parms.ReturnValue;
	};

	void ItemRemovedFromInvManager ()
	{
		static UFunction* pfnItemRemovedFromInvManager = NULL;

		if ( !pfnItemRemovedFromInvManager )
			pfnItemRemovedFromInvManager = UObject::FindObject< UFunction >( "Function Engine.Weapon.ItemRemovedFromInvManager" );

		AWeapon_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

		this->ProcessEvent( pfnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Weapon.Destroyed" );

		AWeapon_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

};

UClass* AWeapon::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif