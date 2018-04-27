/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AProjectile.h
// Date: 06/16/2011 @ 05:19:39.573
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AProjectile_execApplyFluidSurfaceImpact_Parms
{
	void* Fluid;
	struct FVector HitLocation;
};

struct AProjectile_execGetRange_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct AProjectile_execStaticGetTimeToLocation_Parms
{
	struct FVector TargetLoc;
	struct FVector StartLoc;
	class AController* RequestedBy;
	float ReturnValue; // CPF_ReturnParm
};

struct AProjectile_execGetTimeToLocation_Parms
{
	struct FVector TargetLoc;
	float ReturnValue; // CPF_ReturnParm
};

struct AProjectile_eventFellOutOfWorld_Parms
{
	class UClass* dmgType;
};// FUNC_Event

struct AProjectile_execIsStationary_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AProjectile_execRandSpin_Parms
{
	float spinRate;
};// FUNC_Final

struct AProjectile_execExplode_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
	unsigned long bViaReplication : 1;
};

struct AProjectile_eventEncroachedBy_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AProjectile_eventHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};// FUNC_Event

struct AProjectile_execProcessTouch_Parms
{
	class AActor* Other;
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct AProjectile_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct AProjectile_execHurtRadius_Parms
{
	float DamageAmount;
	float InDamageRadius;
	class UClass* DamageType;
	float Momentum;
	struct FVector HurtOrigin;
	class AActor* IgnoredActor;
	class AController* InstigatedByController;
	unsigned long bDoFullDamage : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AProjectile_execReset_Parms
{
};

struct AProjectile_execCanSplash_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AProjectile_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AProjectile_execStaticInitProjectile_Parms
{
	class AProjectile* NewProjectile;
	struct FVector Direction;
	class AWeapon* SourceWeapon;
};

struct AProjectile_execPostInit_Parms
{
};

struct AProjectile_execInit_Parms
{
	struct FVector Direction;
	class AWeapon* SourceWeapon;
};

struct AProjectile_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AProjectile_eventPreBeginPlay_Parms
{
};// FUNC_Event

struct AProjectile_eventEncroachingOn_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

// (0x1BC - 0x1F8)
class AProjectile : public AActor
{
public:
	float                                              Speed;                                       // 0x01BC (0x0004)
	float                                              MaxSpeed;                                    // 0x01C0 (0x0004)
	unsigned long                                      bSwitchToZeroCollision : 1;                  // 0x01C4 (0x0004) [0x00000001]
	unsigned long                                      bBlockedByInstigator : 1;                    // 0x01C4 (0x0004) [0x00000002]
	unsigned long                                      bBegunPlay : 1;                              // 0x01C4 (0x0004) [0x00000004]
	unsigned long                                      bRotationFollowsVelocity : 1;                // 0x01C4 (0x0004) [0x00000008]
	unsigned long                                      bNotBlockedByShield : 1;                     // 0x01C4 (0x0004) [0x00000010]
	class AActor*                                      ZeroCollider;                                // 0x01C8 (0x0004)
	class UPrimitiveComponent*                         ZeroColliderComponent;                       // 0x01CC (0x0004)
	float                                              Damage;                                      // 0x01D0 (0x0004)
	float                                              DamageRadius;                                // 0x01D4 (0x0004)
	float                                              MomentumTransfer;                            // 0x01D8 (0x0004)
	class UClass*                                      MyDamageType;                                // 0x01DC (0x0004)
	void*                                              SpawnSound;                                  // 0x01E0 (0x0004)
	void*                                              ImpactSound;                                 // 0x01E4 (0x0004)
	class AController*                                 InstigatorController;                        // 0x01E8 (0x0004)
	class AActor*                                      ImpactedActor;                               // 0x01EC (0x0004)
	float                                              NetCullDistanceSquared;                      // 0x01F0 (0x0004)
	void*                                              CylinderComponent;                           // 0x01F4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Projectile" );

		return ClassPointer;
	};

public:
	void ApplyFluidSurfaceImpact ( void* Fluid, struct FVector HitLocation )
	{
		static UFunction* pfnApplyFluidSurfaceImpact = NULL;

		if ( !pfnApplyFluidSurfaceImpact )
			pfnApplyFluidSurfaceImpact = UObject::FindObject< UFunction >( "Function Engine.Projectile.ApplyFluidSurfaceImpact" );

		AProjectile_execApplyFluidSurfaceImpact_Parms ApplyFluidSurfaceImpact_Parms;
		ApplyFluidSurfaceImpact_Parms.Fluid = Fluid;
		memcpy( &ApplyFluidSurfaceImpact_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnApplyFluidSurfaceImpact, &ApplyFluidSurfaceImpact_Parms, NULL );
	};

	float GetRange ()
	{
		static UFunction* pfnGetRange = NULL;

		if ( !pfnGetRange )
			pfnGetRange = UObject::FindObject< UFunction >( "Function Engine.Projectile.GetRange" );

		AProjectile_execGetRange_Parms GetRange_Parms;

		this->ProcessEvent( pfnGetRange, &GetRange_Parms, NULL );

		return GetRange_Parms.ReturnValue;
	};

	float StaticGetTimeToLocation ( struct FVector TargetLoc, struct FVector StartLoc, class AController* RequestedBy )
	{
		static UFunction* pfnStaticGetTimeToLocation = NULL;

		if ( !pfnStaticGetTimeToLocation )
			pfnStaticGetTimeToLocation = UObject::FindObject< UFunction >( "Function Engine.Projectile.StaticGetTimeToLocation" );

		AProjectile_execStaticGetTimeToLocation_Parms StaticGetTimeToLocation_Parms;
		memcpy( &StaticGetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );
		memcpy( &StaticGetTimeToLocation_Parms.StartLoc, &StartLoc, 0xC );
		StaticGetTimeToLocation_Parms.RequestedBy = RequestedBy;

		this->ProcessEvent( pfnStaticGetTimeToLocation, &StaticGetTimeToLocation_Parms, NULL );

		return StaticGetTimeToLocation_Parms.ReturnValue;
	};

	float GetTimeToLocation ( struct FVector TargetLoc )
	{
		static UFunction* pfnGetTimeToLocation = NULL;

		if ( !pfnGetTimeToLocation )
			pfnGetTimeToLocation = UObject::FindObject< UFunction >( "Function Engine.Projectile.GetTimeToLocation" );

		AProjectile_execGetTimeToLocation_Parms GetTimeToLocation_Parms;
		memcpy( &GetTimeToLocation_Parms.TargetLoc, &TargetLoc, 0xC );

		this->ProcessEvent( pfnGetTimeToLocation, &GetTimeToLocation_Parms, NULL );

		return GetTimeToLocation_Parms.ReturnValue;
	};

	void eventFellOutOfWorld ( class UClass* dmgType )
	{
		static UFunction* pfnFellOutOfWorld = NULL;

		if ( !pfnFellOutOfWorld )
			pfnFellOutOfWorld = UObject::FindObject< UFunction >( "Function Engine.Projectile.FellOutOfWorld" );

		AProjectile_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
		FellOutOfWorld_Parms.dmgType = dmgType;

		this->ProcessEvent( pfnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
	};

	bool IsStationary ()
	{
		static UFunction* pfnIsStationary = NULL;

		if ( !pfnIsStationary )
			pfnIsStationary = UObject::FindObject< UFunction >( "Function Engine.Projectile.IsStationary" );

		AProjectile_execIsStationary_Parms IsStationary_Parms;

		this->ProcessEvent( pfnIsStationary, &IsStationary_Parms, NULL );

		return IsStationary_Parms.ReturnValue;
	};

	void RandSpin ( float spinRate )
	{
		static UFunction* pfnRandSpin = NULL;

		if ( !pfnRandSpin )
			pfnRandSpin = UObject::FindObject< UFunction >( "Function Engine.Projectile.RandSpin" );

		AProjectile_execRandSpin_Parms RandSpin_Parms;
		RandSpin_Parms.spinRate = spinRate;

		this->ProcessEvent( pfnRandSpin, &RandSpin_Parms, NULL );
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal, unsigned long bViaReplication/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnExplode = NULL;

		if ( !pfnExplode )
			pfnExplode = UObject::FindObject< UFunction >( "Function Engine.Projectile.Explode" );

		AProjectile_execExplode_Parms Explode_Parms;
		memcpy( &Explode_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Explode_Parms.HitNormal, &HitNormal, 0xC );
		Explode_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnExplode, &Explode_Parms, NULL );
	};

	void eventEncroachedBy ( class AActor* Other )
	{
		static UFunction* pfnEncroachedBy = NULL;

		if ( !pfnEncroachedBy )
			pfnEncroachedBy = UObject::FindObject< UFunction >( "Function Engine.Projectile.EncroachedBy" );

		AProjectile_eventEncroachedBy_Parms EncroachedBy_Parms;
		EncroachedBy_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachedBy, &EncroachedBy_Parms, NULL );
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall = NULL;

		if ( !pfnHitWall )
			pfnHitWall = UObject::FindObject< UFunction >( "Function Engine.Projectile.HitWall" );

		AProjectile_eventHitWall_Parms HitWall_Parms;
		memcpy( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Parms.Wall = Wall;
		HitWall_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall, &HitWall_Parms, NULL );
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnProcessTouch = NULL;

		if ( !pfnProcessTouch )
			pfnProcessTouch = UObject::FindObject< UFunction >( "Function Engine.Projectile.ProcessTouch" );

		AProjectile_execProcessTouch_Parms ProcessTouch_Parms;
		ProcessTouch_Parms.Other = Other;
		memcpy( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnProcessTouch, &ProcessTouch_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function Engine.Projectile.Touch" );

		AProjectile_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	bool HurtRadius ( float DamageAmount, float InDamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor/*CPF_OptionalParm*/, class AController* InstigatedByController/*CPF_OptionalParm*/, unsigned long bDoFullDamage/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHurtRadius = NULL;

		if ( !pfnHurtRadius )
			pfnHurtRadius = UObject::FindObject< UFunction >( "Function Engine.Projectile.HurtRadius" );

		AProjectile_execHurtRadius_Parms HurtRadius_Parms;
		HurtRadius_Parms.DamageAmount = DamageAmount;
		HurtRadius_Parms.InDamageRadius = InDamageRadius;
		HurtRadius_Parms.DamageType = DamageType;
		HurtRadius_Parms.Momentum = Momentum;
		memcpy( &HurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
		HurtRadius_Parms.IgnoredActor = IgnoredActor;
		HurtRadius_Parms.InstigatedByController = InstigatedByController;
		HurtRadius_Parms.bDoFullDamage = bDoFullDamage;

		this->ProcessEvent( pfnHurtRadius, &HurtRadius_Parms, NULL );

		return HurtRadius_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.Projectile.Reset" );

		AProjectile_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	bool CanSplash ()
	{
		static UFunction* pfnCanSplash = NULL;

		if ( !pfnCanSplash )
			pfnCanSplash = UObject::FindObject< UFunction >( "Function Engine.Projectile.CanSplash" );

		AProjectile_execCanSplash_Parms CanSplash_Parms;

		this->ProcessEvent( pfnCanSplash, &CanSplash_Parms, NULL );

		return CanSplash_Parms.ReturnValue;
	};

	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.Projectile.GetTeamNum" );

		AProjectile_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	void StaticInitProjectile ( class AProjectile* NewProjectile, struct FVector Direction, class AWeapon* SourceWeapon )
	{
		static UFunction* pfnStaticInitProjectile = NULL;

		if ( !pfnStaticInitProjectile )
			pfnStaticInitProjectile = UObject::FindObject< UFunction >( "Function Engine.Projectile.StaticInitProjectile" );

		AProjectile_execStaticInitProjectile_Parms StaticInitProjectile_Parms;
		StaticInitProjectile_Parms.NewProjectile = NewProjectile;
		memcpy( &StaticInitProjectile_Parms.Direction, &Direction, 0xC );
		StaticInitProjectile_Parms.SourceWeapon = SourceWeapon;

		this->ProcessEvent( pfnStaticInitProjectile, &StaticInitProjectile_Parms, NULL );
	};

	void PostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function Engine.Projectile.PostInit" );

		AProjectile_execPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );
	};

	void Init ( struct FVector Direction, class AWeapon* SourceWeapon )
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function Engine.Projectile.Init" );

		AProjectile_execInit_Parms Init_Parms;
		memcpy( &Init_Parms.Direction, &Direction, 0xC );
		Init_Parms.SourceWeapon = SourceWeapon;

		this->ProcessEvent( pfnInit, &Init_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Projectile.PostBeginPlay" );

		AProjectile_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Projectile.PreBeginPlay" );

		AProjectile_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	bool eventEncroachingOn ( class AActor* Other )
	{
		static UFunction* pfnEncroachingOn = NULL;

		if ( !pfnEncroachingOn )
			pfnEncroachingOn = UObject::FindObject< UFunction >( "Function Engine.Projectile.EncroachingOn" );

		AProjectile_eventEncroachingOn_Parms EncroachingOn_Parms;
		EncroachingOn_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachingOn, &EncroachingOn_Parms, NULL );

		return EncroachingOn_Parms.ReturnValue;
	};

};

UClass* AProjectile::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif