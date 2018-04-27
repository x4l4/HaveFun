/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProjectile.h
// Date: 06/16/2011 @ 05:19:41.579
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProjectile_eventGetShouldTracePawn_Parms
{
	class ACCInstancePawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCProjectile_execSplash_Parms
{
	struct FVector HurtOrigin;
	float Radius;
	float BlindeTime;
	struct FName EffectName;
};

struct ACCProjectile_eventCreateProjectileLight_Parms
{
	void* AttachmentPreset;
};// FUNC_Event

struct ACCProjectile_execDestroyFlightEffects_Parms
{
};

struct ACCProjectile_execSpawnFlightEffects_Parms
{
	void* AttachmentPreset;
};

struct ACCProjectile_execInitVisualPart_Parms
{
	void* AttachmentPreset;
};

struct ACCProjectile_execMergeEffectsInfo_Parms
{
	struct FWeaponTypeEffect efCur;
	struct FWeaponTypeEffect efParent;
	struct FWeaponTypeEffect ReturnValue; // CPF_ReturnParm
};

struct ACCProjectile_execIsConsistent_Parms
{
	struct FWeaponTypeEffect wef;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProjectile_execGetSpecificHitEffect_Parms
{
	void* WeaponEffInfo;
	unsigned char EffectType;
	struct FWeaponTypeEffect ReturnValue; // CPF_ReturnParm
};

struct ACCProjectile_execGetHitEffect_Parms
{
	void* PMaterial;
	struct FWeaponTypeEffect prevVal;
	unsigned char EffectType;
	struct FWeaponTypeEffect ReturnValue; // CPF_ReturnParm
};

struct ACCProjectile_execCalcRotationForEffectEmitter_Parms
{
	struct FVector EffectHitNormal;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCProjectile_execSpawnHitEffectEmitter_Parms
{
	class AActor* CalledFrom;
	struct FVector EffectHitLocation;
	struct FVector EffectHitNormal;
	void* NewPS;
	float NewPSLifeTime;
};

struct ACCProjectile_execPlayActualHitEffect_Parms
{
	class AActor* CalledFrom;
	class AActor* HitActor;
	struct FVector HitLocation;
	struct FVector EffectHitLocation;
	struct FVector EffectHitNormal;
	struct FTraceHitInfo HitInfo;
	unsigned char EffectType;
	void* TheDefaultExplosionPS;
	float TheDefaultExplosionPSLifeTime;
	void* TheDefaultExplosionSound;
	unsigned long bTheForceDefaultHitEffects : 1;
	void* EffectPS2;
	float EffectPS2LifeTime;
};

struct ACCProjectile_execSpawnMissExplosionEffects_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execSpawnExplosionEffects_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execComputeDamageScaleFor_Parms
{
	float HurtDistance;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProjectile_execProcessRadiusDamage_Parms
{
	class AActor* Victim;
	class AController* InstigatedBy;
	struct FVector HurtOrigin;
	unsigned long bHit : 1;
};

struct ACCProjectile_execProjectileHurtRadius_Parms
{
	struct FVector HurtOrigin;
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProjectile_execDoShutDown_Parms
{
};

struct ACCProjectile_execDestroyed_Parms
{
};

struct ACCProjectile_execPerformExplosion_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execProjectileExplosionTimer_Parms
{
};

struct ACCProjectile_eventLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
};// FUNC_Event

struct ACCProjectile_eventHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};// FUNC_Event

struct ACCProjectile_execDoProcessTouch_Parms
{
	class AActor* Other;
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execConditionalProcessPendingTouch_Parms
{
};

struct ACCProjectile_execSetPendingTouch_Parms
{
	class AActor* Other;
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectile_execTouchesActor_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProjectile_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCProjectile_execInitReplicatedVars_Parms
{
};

struct ACCProjectile_execPostInit_Parms
{
};

struct ACCProjectile_execFallProj_Parms
{
};

struct ACCProjectile_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

struct ACCProjectile_execInitByWeapon_Parms
{
	class ACCWeapon* Wpn;
};

struct ACCProjectile_execInit_Parms
{
	struct FVector Direction;
	class AWeapon* SourceWeapon;
};

struct ACCProjectile_execStaticCustomInitProjectile_Parms
{
	class ACCProjectile* NewProjectile;
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

struct ACCProjectile_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCProjectile_execTickLocationDebugInternal_Parms
{
	float Delta;
};

struct ACCProjectile_execTickLocationDebug_Parms
{
	float Delta;
};

struct ACCProjectile_eventTick_Parms
{
	float Delta;
};// FUNC_Event

struct ACCProjectile_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x254 - 0x358)
class ACCProjectile : public ACCProjectileBase
{
public:
	float                                              MaxEffectDistance;                           // 0x0254 (0x0004)
	void*                                              ProjectileStaticMesh;                        // 0x0258 (0x0004)
	class USkeletalMeshComponent*                      ProjectileSkeletalMesh;                      // 0x025C (0x0004)
	void*                                              FlightPSC;                                   // 0x0260 (0x0004)
	class UClass*                                      ProjectileLightClass;                        // 0x0264 (0x0004)
	void*                                              ProjectileLight;                             // 0x0268 (0x0004)
	float                                              SplashRadius;                                // 0x026C (0x0004)
	float                                              SplashPSLifeTime;                            // 0x0270 (0x0004)
	struct FString                                     SplashPSName;                                // 0x0274 (0x000C)
	void*                                              SplashPS;                                    // 0x0280 (0x0004)
	unsigned long                                      bSplashDirection : 1;                        // 0x0284 (0x0004) [0x00000001]
	unsigned long                                      bForceDefaultHitEffects : 1;                 // 0x0284 (0x0004) [0x00000002]
	unsigned long                                      bDoZeroDamage : 1;                           // 0x0284 (0x0004) [0x00000004]
	unsigned long                                      bDoSelfDamage : 1;                           // 0x0284 (0x0004) [0x00000008]
	unsigned long                                      bReplicateDebugLocation : 1;                 // 0x0284 (0x0004) [0x00000010]
	unsigned long                                      bExplodeOnFirstTouch : 1;                    // 0x0284 (0x0004) [0x00000020]
	unsigned long                                      ExplodeOnEnemy : 1;                          // 0x0284 (0x0004) [0x00000040]
	unsigned long                                      bInConditonalProcessPendingTouch : 1;        // 0x0284 (0x0004) [0x00000080]
	struct FName                                       SplashPostProcess;                           // 0x0288 (0x0008)
	float                                              SplashCoef;                                  // 0x0290 (0x0004)
	unsigned char                                      WeaponEffectType;                            // 0x0294 (0x0001)
	unsigned char                                      PrevLocationDebugR;                          // 0x0295 (0x0001)
	unsigned char                                      PrevLocationDebugG;                          // 0x0296 (0x0001)
	unsigned char                                      PrevLocationDebugB;                          // 0x0297 (0x0001)
	unsigned char                                      ReflectionDamageEffectorType;                // 0x0298 (0x0001)
	void*                                              DefaultExplosionPS;                          // 0x029C (0x0004)
	float                                              DefaultExplosionPSLifeTime;                  // 0x02A0 (0x0004)
	void*                                              DefaultExplosionSound;                       // 0x02A4 (0x0004)
	struct FString                                     DefaultExplosionSoundString;                 // 0x02A8 (0x000C)
	void*                                              MissExplosionPS;                             // 0x02B4 (0x0004)
	void*                                              MissExplosionSound;                          // 0x02B8 (0x0004)
	struct FString                                     MissExplosionSoundString;                    // 0x02BC (0x000C)
	float                                              MissExplosionPSLifeTime;                     // 0x02C8 (0x0004)
	float                                              ImpulseKoef;                                 // 0x02CC (0x0004)
	float                                              AirFrictionPower;                            // 0x02D0 (0x0004)
	float                                              AirFrictionDelay;                            // 0x02D4 (0x0004)
	float                                              DamageRadiusKoef;                            // 0x02D8 (0x0004)
	float                                              ReplicatedDamageRadius;                      // 0x02DC (0x0004)
	float                                              ReplicatedDamageRadiusMin;                   // 0x02E0 (0x0004)
	struct FVector                                     PrevLocation;                                // 0x02E4 (0x000C)
	float                                              AltProjFireDist;                             // 0x02F0 (0x0004)
	float                                              ReflectionMomentum;                          // 0x02F4 (0x0004)
	float                                              ReflectionDamage;                            // 0x02F8 (0x0004)
	struct FVector                                     DebugLocation;                               // 0x02FC (0x000C)
	void*                                              FlightEmitter;                               // 0x0308 (0x0004)
	float                                              LifePoints;                                  // 0x030C (0x0004)
	float                                              DamageRadiusMin;                             // 0x0310 (0x0004)
	float                                              WeaponPenetrationModifier_FROM_PROJECTILE;   // 0x0314 (0x0004)
	struct FVector                                     ProjDirection;                               // 0x0318 (0x000C)
	float                                              AccelerationTime;                            // 0x0324 (0x0004)
	float                                              ProjMaxSpeed;                                // 0x0328 (0x0004)
	struct FTakeHitSpeedModifierInfo                   TheTakeHitSpeedModifierInfo;                 // 0x032C (0x000C)
	struct FPendingTouchInfo                           PendingTouchInfoStruct;                      // 0x0338 (0x0020)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProjectile" );

		return ClassPointer;
	};

public:
	bool eventGetShouldTracePawn ( class ACCInstancePawn* P )
	{
		static UFunction* pfnGetShouldTracePawn = NULL;

		if ( !pfnGetShouldTracePawn )
			pfnGetShouldTracePawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.GetShouldTracePawn" );

		ACCProjectile_eventGetShouldTracePawn_Parms GetShouldTracePawn_Parms;
		GetShouldTracePawn_Parms.P = P;

		this->ProcessEvent( pfnGetShouldTracePawn, &GetShouldTracePawn_Parms, NULL );

		return GetShouldTracePawn_Parms.ReturnValue;
	};

	void Splash ( struct FVector HurtOrigin, float Radius, float BlindeTime, struct FName EffectName )
	{
		static UFunction* pfnSplash = NULL;

		if ( !pfnSplash )
			pfnSplash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Splash" );

		ACCProjectile_execSplash_Parms Splash_Parms;
		memcpy( &Splash_Parms.HurtOrigin, &HurtOrigin, 0xC );
		Splash_Parms.Radius = Radius;
		Splash_Parms.BlindeTime = BlindeTime;
		memcpy( &Splash_Parms.EffectName, &EffectName, 0x8 );

		this->ProcessEvent( pfnSplash, &Splash_Parms, NULL );
	};

	void eventCreateProjectileLight ( void* AttachmentPreset )
	{
		static UFunction* pfnCreateProjectileLight = NULL;

		if ( !pfnCreateProjectileLight )
			pfnCreateProjectileLight = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.CreateProjectileLight" );

		ACCProjectile_eventCreateProjectileLight_Parms CreateProjectileLight_Parms;
		CreateProjectileLight_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnCreateProjectileLight, &CreateProjectileLight_Parms, NULL );
	};

	void DestroyFlightEffects ()
	{
		static UFunction* pfnDestroyFlightEffects = NULL;

		if ( !pfnDestroyFlightEffects )
			pfnDestroyFlightEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.DestroyFlightEffects" );

		ACCProjectile_execDestroyFlightEffects_Parms DestroyFlightEffects_Parms;

		this->ProcessEvent( pfnDestroyFlightEffects, &DestroyFlightEffects_Parms, NULL );
	};

	void SpawnFlightEffects ( void* AttachmentPreset )
	{
		static UFunction* pfnSpawnFlightEffects = NULL;

		if ( !pfnSpawnFlightEffects )
			pfnSpawnFlightEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.SpawnFlightEffects" );

		ACCProjectile_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;
		SpawnFlightEffects_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
	};

	void InitVisualPart ( void* AttachmentPreset )
	{
		static UFunction* pfnInitVisualPart = NULL;

		if ( !pfnInitVisualPart )
			pfnInitVisualPart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.InitVisualPart" );

		ACCProjectile_execInitVisualPart_Parms InitVisualPart_Parms;
		InitVisualPart_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnInitVisualPart, &InitVisualPart_Parms, NULL );
	};

	struct FWeaponTypeEffect MergeEffectsInfo ( struct FWeaponTypeEffect efCur, struct FWeaponTypeEffect efParent )
	{
		static UFunction* pfnMergeEffectsInfo = NULL;

		if ( !pfnMergeEffectsInfo )
			pfnMergeEffectsInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.MergeEffectsInfo" );

		ACCProjectile_execMergeEffectsInfo_Parms MergeEffectsInfo_Parms;
		memcpy( &MergeEffectsInfo_Parms.efCur, &efCur, 0x34 );
		memcpy( &MergeEffectsInfo_Parms.efParent, &efParent, 0x34 );

		this->ProcessEvent( pfnMergeEffectsInfo, &MergeEffectsInfo_Parms, NULL );

		return MergeEffectsInfo_Parms.ReturnValue;
	};

	bool IsConsistent ( struct FWeaponTypeEffect wef )
	{
		static UFunction* pfnIsConsistent = NULL;

		if ( !pfnIsConsistent )
			pfnIsConsistent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.IsConsistent" );

		ACCProjectile_execIsConsistent_Parms IsConsistent_Parms;
		memcpy( &IsConsistent_Parms.wef, &wef, 0x34 );

		this->ProcessEvent( pfnIsConsistent, &IsConsistent_Parms, NULL );

		return IsConsistent_Parms.ReturnValue;
	};

	struct FWeaponTypeEffect GetSpecificHitEffect ( void* WeaponEffInfo, unsigned char EffectType )
	{
		static UFunction* pfnGetSpecificHitEffect = NULL;

		if ( !pfnGetSpecificHitEffect )
			pfnGetSpecificHitEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.GetSpecificHitEffect" );

		ACCProjectile_execGetSpecificHitEffect_Parms GetSpecificHitEffect_Parms;
		GetSpecificHitEffect_Parms.WeaponEffInfo = WeaponEffInfo;
		GetSpecificHitEffect_Parms.EffectType = EffectType;

		this->ProcessEvent( pfnGetSpecificHitEffect, &GetSpecificHitEffect_Parms, NULL );

		return GetSpecificHitEffect_Parms.ReturnValue;
	};

	struct FWeaponTypeEffect GetHitEffect ( void* PMaterial, struct FWeaponTypeEffect prevVal, unsigned char EffectType )
	{
		static UFunction* pfnGetHitEffect = NULL;

		if ( !pfnGetHitEffect )
			pfnGetHitEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.GetHitEffect" );

		ACCProjectile_execGetHitEffect_Parms GetHitEffect_Parms;
		GetHitEffect_Parms.PMaterial = PMaterial;
		memcpy( &GetHitEffect_Parms.prevVal, &prevVal, 0x34 );
		GetHitEffect_Parms.EffectType = EffectType;

		this->ProcessEvent( pfnGetHitEffect, &GetHitEffect_Parms, NULL );

		return GetHitEffect_Parms.ReturnValue;
	};

	struct FRotator CalcRotationForEffectEmitter ( struct FVector EffectHitNormal )
	{
		static UFunction* pfnCalcRotationForEffectEmitter = NULL;

		if ( !pfnCalcRotationForEffectEmitter )
			pfnCalcRotationForEffectEmitter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.CalcRotationForEffectEmitter" );

		ACCProjectile_execCalcRotationForEffectEmitter_Parms CalcRotationForEffectEmitter_Parms;
		memcpy( &CalcRotationForEffectEmitter_Parms.EffectHitNormal, &EffectHitNormal, 0xC );

		this->ProcessEvent( pfnCalcRotationForEffectEmitter, &CalcRotationForEffectEmitter_Parms, NULL );

		return CalcRotationForEffectEmitter_Parms.ReturnValue;
	};

	void SpawnHitEffectEmitter ( class AActor* CalledFrom, struct FVector EffectHitLocation, struct FVector EffectHitNormal, void* NewPS, float NewPSLifeTime )
	{
		static UFunction* pfnSpawnHitEffectEmitter = NULL;

		if ( !pfnSpawnHitEffectEmitter )
			pfnSpawnHitEffectEmitter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.SpawnHitEffectEmitter" );

		ACCProjectile_execSpawnHitEffectEmitter_Parms SpawnHitEffectEmitter_Parms;
		SpawnHitEffectEmitter_Parms.CalledFrom = CalledFrom;
		memcpy( &SpawnHitEffectEmitter_Parms.EffectHitLocation, &EffectHitLocation, 0xC );
		memcpy( &SpawnHitEffectEmitter_Parms.EffectHitNormal, &EffectHitNormal, 0xC );
		SpawnHitEffectEmitter_Parms.NewPS = NewPS;
		SpawnHitEffectEmitter_Parms.NewPSLifeTime = NewPSLifeTime;

		this->ProcessEvent( pfnSpawnHitEffectEmitter, &SpawnHitEffectEmitter_Parms, NULL );
	};

	void PlayActualHitEffect ( class AActor* CalledFrom, class AActor* HitActor, struct FVector HitLocation, struct FVector EffectHitLocation, struct FVector EffectHitNormal, struct FTraceHitInfo HitInfo, unsigned char EffectType, void* TheDefaultExplosionPS, float TheDefaultExplosionPSLifeTime, void* TheDefaultExplosionSound, unsigned long bTheForceDefaultHitEffects, void* EffectPS2, float EffectPS2LifeTime )
	{
		static UFunction* pfnPlayActualHitEffect = NULL;

		if ( !pfnPlayActualHitEffect )
			pfnPlayActualHitEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.PlayActualHitEffect" );

		ACCProjectile_execPlayActualHitEffect_Parms PlayActualHitEffect_Parms;
		PlayActualHitEffect_Parms.CalledFrom = CalledFrom;
		PlayActualHitEffect_Parms.HitActor = HitActor;
		memcpy( &PlayActualHitEffect_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PlayActualHitEffect_Parms.EffectHitLocation, &EffectHitLocation, 0xC );
		memcpy( &PlayActualHitEffect_Parms.EffectHitNormal, &EffectHitNormal, 0xC );
		memcpy( &PlayActualHitEffect_Parms.HitInfo, &HitInfo, 0x1C );
		PlayActualHitEffect_Parms.EffectType = EffectType;
		PlayActualHitEffect_Parms.TheDefaultExplosionPS = TheDefaultExplosionPS;
		PlayActualHitEffect_Parms.TheDefaultExplosionPSLifeTime = TheDefaultExplosionPSLifeTime;
		PlayActualHitEffect_Parms.TheDefaultExplosionSound = TheDefaultExplosionSound;
		PlayActualHitEffect_Parms.bTheForceDefaultHitEffects = bTheForceDefaultHitEffects;
		PlayActualHitEffect_Parms.EffectPS2 = EffectPS2;
		PlayActualHitEffect_Parms.EffectPS2LifeTime = EffectPS2LifeTime;

		this->ProcessEvent( pfnPlayActualHitEffect, &PlayActualHitEffect_Parms, NULL );
	};

	void SpawnMissExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnSpawnMissExplosionEffects = NULL;

		if ( !pfnSpawnMissExplosionEffects )
			pfnSpawnMissExplosionEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.SpawnMissExplosionEffects" );

		ACCProjectile_execSpawnMissExplosionEffects_Parms SpawnMissExplosionEffects_Parms;
		memcpy( &SpawnMissExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SpawnMissExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnSpawnMissExplosionEffects, &SpawnMissExplosionEffects_Parms, NULL );
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnSpawnExplosionEffects = NULL;

		if ( !pfnSpawnExplosionEffects )
			pfnSpawnExplosionEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.SpawnExplosionEffects" );

		ACCProjectile_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
		memcpy( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
	};

	float ComputeDamageScaleFor ( float HurtDistance )
	{
		static UFunction* pfnComputeDamageScaleFor = NULL;

		if ( !pfnComputeDamageScaleFor )
			pfnComputeDamageScaleFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ComputeDamageScaleFor" );

		ACCProjectile_execComputeDamageScaleFor_Parms ComputeDamageScaleFor_Parms;
		ComputeDamageScaleFor_Parms.HurtDistance = HurtDistance;

		this->ProcessEvent( pfnComputeDamageScaleFor, &ComputeDamageScaleFor_Parms, NULL );

		return ComputeDamageScaleFor_Parms.ReturnValue;
	};

	void ProcessRadiusDamage ( class AActor* Victim, class AController* InstigatedBy, struct FVector HurtOrigin, unsigned long bHit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessRadiusDamage = NULL;

		if ( !pfnProcessRadiusDamage )
			pfnProcessRadiusDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ProcessRadiusDamage" );

		ACCProjectile_execProcessRadiusDamage_Parms ProcessRadiusDamage_Parms;
		ProcessRadiusDamage_Parms.Victim = Victim;
		ProcessRadiusDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ProcessRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
		ProcessRadiusDamage_Parms.bHit = bHit;

		this->ProcessEvent( pfnProcessRadiusDamage, &ProcessRadiusDamage_Parms, NULL );
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
	{
		static UFunction* pfnProjectileHurtRadius = NULL;

		if ( !pfnProjectileHurtRadius )
			pfnProjectileHurtRadius = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ProjectileHurtRadius" );

		ACCProjectile_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
		memcpy( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
		memcpy( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

		return ProjectileHurtRadius_Parms.ReturnValue;
	};

	void DoShutDown ()
	{
		static UFunction* pfnDoShutDown = NULL;

		if ( !pfnDoShutDown )
			pfnDoShutDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.DoShutDown" );

		ACCProjectile_execDoShutDown_Parms DoShutDown_Parms;

		this->ProcessEvent( pfnDoShutDown, &DoShutDown_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Destroyed" );

		ACCProjectile_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void PerformExplosion ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnPerformExplosion = NULL;

		if ( !pfnPerformExplosion )
			pfnPerformExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.PerformExplosion" );

		ACCProjectile_execPerformExplosion_Parms PerformExplosion_Parms;
		memcpy( &PerformExplosion_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PerformExplosion_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPerformExplosion, &PerformExplosion_Parms, NULL );
	};

	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ExplodeInternal" );

		ACCProjectile_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

	void ProjectileExplosionTimer ()
	{
		static UFunction* pfnProjectileExplosionTimer = NULL;

		if ( !pfnProjectileExplosionTimer )
			pfnProjectileExplosionTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ProjectileExplosionTimer" );

		ACCProjectile_execProjectileExplosionTimer_Parms ProjectileExplosionTimer_Parms;

		this->ProcessEvent( pfnProjectileExplosionTimer, &ProjectileExplosionTimer_Parms, NULL );
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnLanded = NULL;

		if ( !pfnLanded )
			pfnLanded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Landed" );

		ACCProjectile_eventLanded_Parms Landed_Parms;
		memcpy( &Landed_Parms.HitNormal, &HitNormal, 0xC );
		Landed_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnLanded, &Landed_Parms, NULL );
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall = NULL;

		if ( !pfnHitWall )
			pfnHitWall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.HitWall" );

		ACCProjectile_eventHitWall_Parms HitWall_Parms;
		memcpy( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Parms.Wall = Wall;
		HitWall_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall, &HitWall_Parms, NULL );
	};

	void DoProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnDoProcessTouch = NULL;

		if ( !pfnDoProcessTouch )
			pfnDoProcessTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.DoProcessTouch" );

		ACCProjectile_execDoProcessTouch_Parms DoProcessTouch_Parms;
		DoProcessTouch_Parms.Other = Other;
		memcpy( &DoProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &DoProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnDoProcessTouch, &DoProcessTouch_Parms, NULL );
	};

	void ConditionalProcessPendingTouch ()
	{
		static UFunction* pfnConditionalProcessPendingTouch = NULL;

		if ( !pfnConditionalProcessPendingTouch )
			pfnConditionalProcessPendingTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ConditionalProcessPendingTouch" );

		ACCProjectile_execConditionalProcessPendingTouch_Parms ConditionalProcessPendingTouch_Parms;

		this->ProcessEvent( pfnConditionalProcessPendingTouch, &ConditionalProcessPendingTouch_Parms, NULL );
	};

	void SetPendingTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnSetPendingTouch = NULL;

		if ( !pfnSetPendingTouch )
			pfnSetPendingTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.SetPendingTouch" );

		ACCProjectile_execSetPendingTouch_Parms SetPendingTouch_Parms;
		SetPendingTouch_Parms.Other = Other;
		memcpy( &SetPendingTouch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SetPendingTouch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnSetPendingTouch, &SetPendingTouch_Parms, NULL );
	};

	bool TouchesActor ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouchesActor = NULL;

		if ( !pfnTouchesActor )
			pfnTouchesActor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.TouchesActor" );

		ACCProjectile_execTouchesActor_Parms TouchesActor_Parms;
		TouchesActor_Parms.Other = Other;
		TouchesActor_Parms.OtherComp = OtherComp;
		memcpy( &TouchesActor_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TouchesActor_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouchesActor, &TouchesActor_Parms, NULL );

		return TouchesActor_Parms.ReturnValue;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Touch" );

		ACCProjectile_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void InitReplicatedVars ()
	{
		static UFunction* pfnInitReplicatedVars = NULL;

		if ( !pfnInitReplicatedVars )
			pfnInitReplicatedVars = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.InitReplicatedVars" );

		ACCProjectile_execInitReplicatedVars_Parms InitReplicatedVars_Parms;

		this->ProcessEvent( pfnInitReplicatedVars, &InitReplicatedVars_Parms, NULL );
	};

	void PostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.PostInit" );

		ACCProjectile_execPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );
	};

	void FallProj ()
	{
		static UFunction* pfnFallProj = NULL;

		if ( !pfnFallProj )
			pfnFallProj = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.FallProj" );

		ACCProjectile_execFallProj_Parms FallProj_Parms;

		this->ProcessEvent( pfnFallProj, &FallProj_Parms, NULL );
	};

	void CustomInit ( struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnCustomInit = NULL;

		if ( !pfnCustomInit )
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.CustomInit" );

		ACCProjectile_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

	void InitByWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnInitByWeapon = NULL;

		if ( !pfnInitByWeapon )
			pfnInitByWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.InitByWeapon" );

		ACCProjectile_execInitByWeapon_Parms InitByWeapon_Parms;
		InitByWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnInitByWeapon, &InitByWeapon_Parms, NULL );
	};

	void Init ( struct FVector Direction, class AWeapon* SourceWeapon )
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Init" );

		ACCProjectile_execInit_Parms Init_Parms;
		memcpy( &Init_Parms.Direction, &Direction, 0xC );
		Init_Parms.SourceWeapon = SourceWeapon;

		this->ProcessEvent( pfnInit, &Init_Parms, NULL );
	};

	void StaticCustomInitProjectile ( class ACCProjectile* NewProjectile, struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnStaticCustomInitProjectile = NULL;

		if ( !pfnStaticCustomInitProjectile )
			pfnStaticCustomInitProjectile = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.StaticCustomInitProjectile" );

		ACCProjectile_execStaticCustomInitProjectile_Parms StaticCustomInitProjectile_Parms;
		StaticCustomInitProjectile_Parms.NewProjectile = NewProjectile;
		memcpy( &StaticCustomInitProjectile_Parms.Direction, &Direction, 0xC );
		memcpy( &StaticCustomInitProjectile_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnStaticCustomInitProjectile, &StaticCustomInitProjectile_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.ReplicatedEvent" );

		ACCProjectile_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void TickLocationDebugInternal ( float Delta )
	{
		static UFunction* pfnTickLocationDebugInternal = NULL;

		if ( !pfnTickLocationDebugInternal )
			pfnTickLocationDebugInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.TickLocationDebugInternal" );

		ACCProjectile_execTickLocationDebugInternal_Parms TickLocationDebugInternal_Parms;
		TickLocationDebugInternal_Parms.Delta = Delta;

		this->ProcessEvent( pfnTickLocationDebugInternal, &TickLocationDebugInternal_Parms, NULL );
	};

	void TickLocationDebug ( float Delta )
	{
		static UFunction* pfnTickLocationDebug = NULL;

		if ( !pfnTickLocationDebug )
			pfnTickLocationDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.TickLocationDebug" );

		ACCProjectile_execTickLocationDebug_Parms TickLocationDebug_Parms;
		TickLocationDebug_Parms.Delta = Delta;

		this->ProcessEvent( pfnTickLocationDebug, &TickLocationDebug_Parms, NULL );
	};

	void eventTick ( float Delta )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.Tick" );

		ACCProjectile_eventTick_Parms Tick_Parms;
		Tick_Parms.Delta = Delta;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectile.PostBeginPlay" );

		ACCProjectile_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProjectile::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif