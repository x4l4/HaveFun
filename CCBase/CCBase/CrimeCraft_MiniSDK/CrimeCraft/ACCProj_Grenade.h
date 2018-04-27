/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_Grenade.h
// Date: 06/16/2011 @ 05:19:41.819
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_Grenade_execGetGrenadeTestTraceExtent_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Grenade_execProjectileExplosionTimer_Parms
{
};

struct ACCProj_Grenade_execTouchesActor_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Grenade_execProcessReflectionDamage_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_Grenade_execPlayActualReflectionEffect_Parms
{
	class AActor* HitActor;
	struct FVector HitLocation;
	struct FVector HitNormal;
	struct FTraceHitInfo HitInfo;
};

struct ACCProj_Grenade_execPlayReflectionEffects_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_Grenade_execDestroyed_Parms
{
};

struct ACCProj_Grenade_execSpawnAvoidMarker_Parms
{
};

struct ACCProj_Grenade_execHitWall_PostProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_Grenade_execHitWall_PreProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Grenade_execHitWall_Falling_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_Grenade_execHitWall_Sliding_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_Grenade_execIsDistanceFromLastReflection_Parms
{
	float Distance;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Grenade_execOnHudPostRender_Parms
{
	class UCanvas* Canvas;
};

struct ACCProj_Grenade_execSetAirFrictionTimer_Parms
{
};

struct ACCProj_Grenade_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x430 - 0x44C)
class ACCProj_Grenade : public ACCProj_MyPhysicsGrenade
{
public:
	void*                                              AvoidMarker;                                 // 0x0430 (0x0004)
	struct FVector                                     LastReflectionLocation;                      // 0x0434 (0x000C)
	unsigned long                                      bLastReflectionLocationValid : 1;            // 0x0440 (0x0004) [0x00000001]
	int                                                NumReflections;                              // 0x0444 (0x0004)
	void*                                              GrenadeMarker;                               // 0x0448 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_Grenade" );

		return ClassPointer;
	};

public:
	struct FVector GetGrenadeTestTraceExtent ()
	{
		static UFunction* pfnGetGrenadeTestTraceExtent = NULL;

		if ( !pfnGetGrenadeTestTraceExtent )
			pfnGetGrenadeTestTraceExtent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.GetGrenadeTestTraceExtent" );

		ACCProj_Grenade_execGetGrenadeTestTraceExtent_Parms GetGrenadeTestTraceExtent_Parms;

		this->ProcessEvent( pfnGetGrenadeTestTraceExtent, &GetGrenadeTestTraceExtent_Parms, NULL );

		return GetGrenadeTestTraceExtent_Parms.ReturnValue;
	};

	void ProjectileExplosionTimer ()
	{
		static UFunction* pfnProjectileExplosionTimer = NULL;

		if ( !pfnProjectileExplosionTimer )
			pfnProjectileExplosionTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.ProjectileExplosionTimer" );

		ACCProj_Grenade_execProjectileExplosionTimer_Parms ProjectileExplosionTimer_Parms;

		this->ProcessEvent( pfnProjectileExplosionTimer, &ProjectileExplosionTimer_Parms, NULL );
	};

	bool TouchesActor ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouchesActor = NULL;

		if ( !pfnTouchesActor )
			pfnTouchesActor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.TouchesActor" );

		ACCProj_Grenade_execTouchesActor_Parms TouchesActor_Parms;
		TouchesActor_Parms.Other = Other;
		TouchesActor_Parms.OtherComp = OtherComp;
		memcpy( &TouchesActor_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TouchesActor_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouchesActor, &TouchesActor_Parms, NULL );

		return TouchesActor_Parms.ReturnValue;
	};

	void ProcessReflectionDamage ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnProcessReflectionDamage = NULL;

		if ( !pfnProcessReflectionDamage )
			pfnProcessReflectionDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.ProcessReflectionDamage" );

		ACCProj_Grenade_execProcessReflectionDamage_Parms ProcessReflectionDamage_Parms;
		memcpy( &ProcessReflectionDamage_Parms.HitNormal, &HitNormal, 0xC );
		ProcessReflectionDamage_Parms.Wall = Wall;
		ProcessReflectionDamage_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnProcessReflectionDamage, &ProcessReflectionDamage_Parms, NULL );
	};

	void PlayActualReflectionEffect ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo )
	{
		static UFunction* pfnPlayActualReflectionEffect = NULL;

		if ( !pfnPlayActualReflectionEffect )
			pfnPlayActualReflectionEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.PlayActualReflectionEffect" );

		ACCProj_Grenade_execPlayActualReflectionEffect_Parms PlayActualReflectionEffect_Parms;
		PlayActualReflectionEffect_Parms.HitActor = HitActor;
		memcpy( &PlayActualReflectionEffect_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PlayActualReflectionEffect_Parms.HitNormal, &HitNormal, 0xC );
		memcpy( &PlayActualReflectionEffect_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnPlayActualReflectionEffect, &PlayActualReflectionEffect_Parms, NULL );
	};

	void PlayReflectionEffects ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnPlayReflectionEffects = NULL;

		if ( !pfnPlayReflectionEffects )
			pfnPlayReflectionEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.PlayReflectionEffects" );

		ACCProj_Grenade_execPlayReflectionEffects_Parms PlayReflectionEffects_Parms;
		memcpy( &PlayReflectionEffects_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PlayReflectionEffects_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPlayReflectionEffects, &PlayReflectionEffects_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.Destroyed" );

		ACCProj_Grenade_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void SpawnAvoidMarker ()
	{
		static UFunction* pfnSpawnAvoidMarker = NULL;

		if ( !pfnSpawnAvoidMarker )
			pfnSpawnAvoidMarker = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.SpawnAvoidMarker" );

		ACCProj_Grenade_execSpawnAvoidMarker_Parms SpawnAvoidMarker_Parms;

		this->ProcessEvent( pfnSpawnAvoidMarker, &SpawnAvoidMarker_Parms, NULL );
	};

	void HitWall_PostProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PostProcessed = NULL;

		if ( !pfnHitWall_PostProcessed )
			pfnHitWall_PostProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.HitWall_PostProcessed" );

		ACCProj_Grenade_execHitWall_PostProcessed_Parms HitWall_PostProcessed_Parms;
		memcpy( &HitWall_PostProcessed_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_PostProcessed_Parms.Wall = Wall;
		HitWall_PostProcessed_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_PostProcessed, &HitWall_PostProcessed_Parms, NULL );
	};

	bool HitWall_PreProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PreProcessed = NULL;

		if ( !pfnHitWall_PreProcessed )
			pfnHitWall_PreProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.HitWall_PreProcessed" );

		ACCProj_Grenade_execHitWall_PreProcessed_Parms HitWall_PreProcessed_Parms;
		memcpy( &HitWall_PreProcessed_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_PreProcessed_Parms.Wall = Wall;
		HitWall_PreProcessed_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_PreProcessed, &HitWall_PreProcessed_Parms, NULL );

		return HitWall_PreProcessed_Parms.ReturnValue;
	};

	void HitWall_Falling ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_Falling = NULL;

		if ( !pfnHitWall_Falling )
			pfnHitWall_Falling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.HitWall_Falling" );

		ACCProj_Grenade_execHitWall_Falling_Parms HitWall_Falling_Parms;
		memcpy( &HitWall_Falling_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Falling_Parms.Wall = Wall;
		HitWall_Falling_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_Falling, &HitWall_Falling_Parms, NULL );
	};

	void HitWall_Sliding ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_Sliding = NULL;

		if ( !pfnHitWall_Sliding )
			pfnHitWall_Sliding = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.HitWall_Sliding" );

		ACCProj_Grenade_execHitWall_Sliding_Parms HitWall_Sliding_Parms;
		memcpy( &HitWall_Sliding_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Sliding_Parms.Wall = Wall;
		HitWall_Sliding_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_Sliding, &HitWall_Sliding_Parms, NULL );
	};

	bool IsDistanceFromLastReflection ( float Distance )
	{
		static UFunction* pfnIsDistanceFromLastReflection = NULL;

		if ( !pfnIsDistanceFromLastReflection )
			pfnIsDistanceFromLastReflection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.IsDistanceFromLastReflection" );

		ACCProj_Grenade_execIsDistanceFromLastReflection_Parms IsDistanceFromLastReflection_Parms;
		IsDistanceFromLastReflection_Parms.Distance = Distance;

		this->ProcessEvent( pfnIsDistanceFromLastReflection, &IsDistanceFromLastReflection_Parms, NULL );

		return IsDistanceFromLastReflection_Parms.ReturnValue;
	};

	void OnHudPostRender ( class UCanvas* Canvas )
	{
		static UFunction* pfnOnHudPostRender = NULL;

		if ( !pfnOnHudPostRender )
			pfnOnHudPostRender = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.OnHudPostRender" );

		ACCProj_Grenade_execOnHudPostRender_Parms OnHudPostRender_Parms;
		OnHudPostRender_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnOnHudPostRender, &OnHudPostRender_Parms, NULL );
	};

	void SetAirFrictionTimer ()
	{
		static UFunction* pfnSetAirFrictionTimer = NULL;

		if ( !pfnSetAirFrictionTimer )
			pfnSetAirFrictionTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.SetAirFrictionTimer" );

		ACCProj_Grenade_execSetAirFrictionTimer_Parms SetAirFrictionTimer_Parms;

		this->ProcessEvent( pfnSetAirFrictionTimer, &SetAirFrictionTimer_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Grenade.PostBeginPlay" );

		ACCProj_Grenade_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProj_Grenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif