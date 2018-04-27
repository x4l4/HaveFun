/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_MyPhysicsGrenade.h
// Date: 06/16/2011 @ 05:19:41.812
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EMyPhysics
{
	EMP_Falling = 0,
	EMP_Sliding = 1,
	EMP_MAX = 2
};

struct ACCProj_MyPhysicsGrenade_execHitWall_PostProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_MyPhysicsGrenade_execHitWall_PreProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_MyPhysicsGrenade_execHitWall_Falling_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_MyPhysicsGrenade_execHitWall_Sliding_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};

struct ACCProj_MyPhysicsGrenade_eventHitWall_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
};// FUNC_Event

struct ACCProj_MyPhysicsGrenade_eventphysMsg_Parms
{
	struct FString S;
};// FUNC_Event

struct ACCProj_MyPhysicsGrenade_execPostInit_Parms
{
};

struct ACCProj_MyPhysicsGrenade_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCProj_MyPhysicsGrenade_execdo_my_PhysMove_Parms
{
	struct FVector DestLoc;
};// FUNC_Native

struct ACCProj_MyPhysicsGrenade_execdo_my_PhysMoveSmooth_Parms
{
	struct FVector DestLoc;
};// FUNC_Native

struct ACCProj_MyPhysicsGrenade_execdo_my_physSlidingUpdateRotation_Parms
{
	float DistanceDelta;
	float DeltaTime;
	unsigned long bForceUpdate : 1;
};// FUNC_Native

struct ACCProj_MyPhysicsGrenade_execInitializePhysicsMatrix_Parms
{
};// FUNC_Native

struct ACCProj_MyPhysicsGrenade_eventTick_Parms
{
	float Delta;
};// FUNC_Event

struct ACCProj_MyPhysicsGrenade_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCProj_MyPhysicsGrenade_execInitByWeapon_Parms
{
	class ACCWeapon* Wpn;
};

// (0x358 - 0x430)
class ACCProj_MyPhysicsGrenade : public ACCProjectile
{
public:
	unsigned long                                      my_PhysStopPhysicsAtFirstHit : 1;            // 0x0358 (0x0004) [0x00000001]
	unsigned long                                      ReplicatedLocationValid : 1;                 // 0x0358 (0x0004) [0x00000002]
	unsigned long                                      ReplicatedVelocityValid : 1;                 // 0x0358 (0x0004) [0x00000004]
	float                                              my_physCheckWantsSliding_DP;                 // 0x035C (0x0004)
	float                                              my_physCheckWantsSliding_Velocity;           // 0x0360 (0x0004)
	float                                              my_physSlidingConstRadius;                   // 0x0364 (0x0004)
	float                                              my_physSlidingFrictionKoeff;                 // 0x0368 (0x0004)
	float                                              my_physSlidingFrictionVelocityFactorMin;     // 0x036C (0x0004)
	float                                              my_physSlidingFrictionVelocityFactorVelocityMin; // 0x0370 (0x0004)
	float                                              my_physSlidingFrictionVelocityFactorMax;     // 0x0374 (0x0004)
	float                                              my_physSlidingFrictionSideKoeff;             // 0x0378 (0x0004)
	float                                              my_physSlidingFrictionSideKoeffVelocity;     // 0x037C (0x0004)
	float                                              my_physSlidingHitControl_DP;                 // 0x0380 (0x0004)
	struct FVector                                     my_physSlidingNormal;                        // 0x0384 (0x000C)
	float                                              my_physSlidingCurrAngle;                     // 0x0390 (0x0004)
	float                                              my_physFallingAnglePerDist;                  // 0x0394 (0x0004)
	float                                              my_physFallingAirFrictionMin;                // 0x0398 (0x0004)
	float                                              my_physFallingAirFrictionMax;                // 0x039C (0x0004)
	float                                              my_physFallingAirFrictionVelocityMin;        // 0x03A0 (0x0004)
	struct FVector                                     my_physFallingRotationDir;                   // 0x03A4 (0x000C)
	float                                              my_physUpdateRotation_VelocityMin;           // 0x03B0 (0x0004)
	float                                              my_physUpdateRotation_RISpeed;               // 0x03B4 (0x0004)
	float                                              my_physUpdateRotation_RI_VelocityMax;        // 0x03B8 (0x0004)
	unsigned char                                      CurrMyPhysics;                               // 0x03BC (0x0001)
	unsigned char                                      InitialPhysics;                              // 0x03BD (0x0001)
	struct FMatrix                                     my_physCurrRotTM;                            // 0x03C0 (0x0040)
	struct FVector                                     InitialLocation;                             // 0x0400 (0x000C)
	struct FVector                                     InitialVelocity;                             // 0x040C (0x000C)
	struct FVector                                     ReplicatedLocation;                          // 0x0418 (0x000C)
	struct FVector                                     ReplicatedVelocity;                          // 0x0424 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_MyPhysicsGrenade" );

		return ClassPointer;
	};

public:
	void HitWall_PostProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PostProcessed = NULL;

		if ( !pfnHitWall_PostProcessed )
			pfnHitWall_PostProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.HitWall_PostProcessed" );

		ACCProj_MyPhysicsGrenade_execHitWall_PostProcessed_Parms HitWall_PostProcessed_Parms;
		memcpy( &HitWall_PostProcessed_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_PostProcessed_Parms.Wall = Wall;
		HitWall_PostProcessed_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_PostProcessed, &HitWall_PostProcessed_Parms, NULL );
	};

	bool HitWall_PreProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PreProcessed = NULL;

		if ( !pfnHitWall_PreProcessed )
			pfnHitWall_PreProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.HitWall_PreProcessed" );

		ACCProj_MyPhysicsGrenade_execHitWall_PreProcessed_Parms HitWall_PreProcessed_Parms;
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
			pfnHitWall_Falling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.HitWall_Falling" );

		ACCProj_MyPhysicsGrenade_execHitWall_Falling_Parms HitWall_Falling_Parms;
		memcpy( &HitWall_Falling_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Falling_Parms.Wall = Wall;
		HitWall_Falling_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_Falling, &HitWall_Falling_Parms, NULL );
	};

	void HitWall_Sliding ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_Sliding = NULL;

		if ( !pfnHitWall_Sliding )
			pfnHitWall_Sliding = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.HitWall_Sliding" );

		ACCProj_MyPhysicsGrenade_execHitWall_Sliding_Parms HitWall_Sliding_Parms;
		memcpy( &HitWall_Sliding_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Sliding_Parms.Wall = Wall;
		HitWall_Sliding_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_Sliding, &HitWall_Sliding_Parms, NULL );
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall = NULL;

		if ( !pfnHitWall )
			pfnHitWall = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.HitWall" );

		ACCProj_MyPhysicsGrenade_eventHitWall_Parms HitWall_Parms;
		memcpy( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_Parms.Wall = Wall;
		HitWall_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall, &HitWall_Parms, NULL );
	};

	void eventphysMsg ( struct FString S )
	{
		static UFunction* pfnphysMsg = NULL;

		if ( !pfnphysMsg )
			pfnphysMsg = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.physMsg" );

		ACCProj_MyPhysicsGrenade_eventphysMsg_Parms physMsg_Parms;
		memcpy( &physMsg_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnphysMsg, &physMsg_Parms, NULL );
	};

	void PostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.PostInit" );

		ACCProj_MyPhysicsGrenade_execPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.PostBeginPlay" );

		ACCProj_MyPhysicsGrenade_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void do_my_PhysMove ( struct FVector DestLoc )
	{
		static UFunction* pfndo_my_PhysMove = NULL;

		if ( !pfndo_my_PhysMove )
			pfndo_my_PhysMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.do_my_PhysMove" );

		ACCProj_MyPhysicsGrenade_execdo_my_PhysMove_Parms do_my_PhysMove_Parms;
		memcpy( &do_my_PhysMove_Parms.DestLoc, &DestLoc, 0xC );

		pfndo_my_PhysMove->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfndo_my_PhysMove, &do_my_PhysMove_Parms, NULL );
		pfndo_my_PhysMove->FunctionFlags |= 0x400;
	};

	void do_my_PhysMoveSmooth ( struct FVector DestLoc )
	{
		static UFunction* pfndo_my_PhysMoveSmooth = NULL;

		if ( !pfndo_my_PhysMoveSmooth )
			pfndo_my_PhysMoveSmooth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.do_my_PhysMoveSmooth" );

		ACCProj_MyPhysicsGrenade_execdo_my_PhysMoveSmooth_Parms do_my_PhysMoveSmooth_Parms;
		memcpy( &do_my_PhysMoveSmooth_Parms.DestLoc, &DestLoc, 0xC );

		pfndo_my_PhysMoveSmooth->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfndo_my_PhysMoveSmooth, &do_my_PhysMoveSmooth_Parms, NULL );
		pfndo_my_PhysMoveSmooth->FunctionFlags |= 0x400;
	};

	void do_my_physSlidingUpdateRotation ( float DistanceDelta, float DeltaTime, unsigned long bForceUpdate )
	{
		static UFunction* pfndo_my_physSlidingUpdateRotation = NULL;

		if ( !pfndo_my_physSlidingUpdateRotation )
			pfndo_my_physSlidingUpdateRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.do_my_physSlidingUpdateRotation" );

		ACCProj_MyPhysicsGrenade_execdo_my_physSlidingUpdateRotation_Parms do_my_physSlidingUpdateRotation_Parms;
		do_my_physSlidingUpdateRotation_Parms.DistanceDelta = DistanceDelta;
		do_my_physSlidingUpdateRotation_Parms.DeltaTime = DeltaTime;
		do_my_physSlidingUpdateRotation_Parms.bForceUpdate = bForceUpdate;

		pfndo_my_physSlidingUpdateRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfndo_my_physSlidingUpdateRotation, &do_my_physSlidingUpdateRotation_Parms, NULL );
		pfndo_my_physSlidingUpdateRotation->FunctionFlags |= 0x400;
	};

	void InitializePhysicsMatrix ()
	{
		static UFunction* pfnInitializePhysicsMatrix = NULL;

		if ( !pfnInitializePhysicsMatrix )
			pfnInitializePhysicsMatrix = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.InitializePhysicsMatrix" );

		ACCProj_MyPhysicsGrenade_execInitializePhysicsMatrix_Parms InitializePhysicsMatrix_Parms;

		pfnInitializePhysicsMatrix->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitializePhysicsMatrix, &InitializePhysicsMatrix_Parms, NULL );
		pfnInitializePhysicsMatrix->FunctionFlags |= 0x400;
	};

	void eventTick ( float Delta )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.Tick" );

		ACCProj_MyPhysicsGrenade_eventTick_Parms Tick_Parms;
		Tick_Parms.Delta = Delta;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.ReplicatedEvent" );

		ACCProj_MyPhysicsGrenade_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void InitByWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnInitByWeapon = NULL;

		if ( !pfnInitByWeapon )
			pfnInitByWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_MyPhysicsGrenade.InitByWeapon" );

		ACCProj_MyPhysicsGrenade_execInitByWeapon_Parms InitByWeapon_Parms;
		InitByWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnInitByWeapon, &InitByWeapon_Parms, NULL );
	};

};

UClass* ACCProj_MyPhysicsGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif