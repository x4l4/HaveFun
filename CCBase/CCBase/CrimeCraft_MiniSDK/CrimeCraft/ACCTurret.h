/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTurret.h
// Date: 06/16/2011 @ 05:19:41.899
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTurret_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCTurret_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCTurret_execPassThroughDamage_Parms
{
	class AActor* HitActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTurret_execClientDebugFire_Parms
{
	struct FVector Start;
	struct FVector End;
};

struct ACCTurret_execProcessInstantHit_Parms
{
	struct FImpactInfo Impact;
};

struct ACCTurret_execCalcWeaponFire_Parms
{
	struct FVector StartTrace;
	struct FVector EndTrace;
	TArray< struct FImpactInfo > ImpactList; // CPF_OutParm
	struct FImpactInfo ReturnValue; // CPF_ReturnParm
};

struct ACCTurret_execInstantFire_Parms
{
};

struct ACCTurret_execProcessFiring_Parms
{
	float DeltaTime;
};

struct ACCTurret_execProcessAiming_Parms
{
	float DeltaTime;
};

struct ACCTurret_execTest_Parms
{
};

struct ACCTurret_execGetRotDiff_Parms
{
	int SelfRot;
	int OtherRot;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCTurret_execProcessTest_Parms
{
	float DeltaTime;
};

struct ACCTurret_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCTurret_execTurretEquipped_Parms
{
};

struct ACCTurret_execDestroyed_Parms
{
};

struct ACCTurret_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCTurret_execDestroyWeaponAttachment_Parms
{
};

struct ACCTurret_execCreateWeaponAttachment_Parms
{
};

// (0x3B8 - 0x414)
class ACCTurret : public ACCPlaceableItem
{
public:
	float                                              TestRate;                                    // 0x03B8 (0x0004)
	float                                              TestRadius;                                  // 0x03BC (0x0004)
	float                                              MinDelay;                                    // 0x03C0 (0x0004)
	float                                              MaxDelay;                                    // 0x03C4 (0x0004)
	float                                              WPN_Damage;                                  // 0x03C8 (0x0004)
	float                                              WPN_Delay;                                   // 0x03CC (0x0004)
	class ACCInstancePawn*                             Target;                                      // 0x03D0 (0x0004)
	float                                              delay;                                       // 0x03D4 (0x0004)
	float                                              CurrDelayProgress;                           // 0x03D8 (0x0004)
	unsigned long                                      bFiring : 1;                                 // 0x03DC (0x0004) [0x00000001]
	unsigned long                                      bTurretActive : 1;                           // 0x03DC (0x0004) [0x00000002]
	float                                              CurrTestRateProgress;                        // 0x03E0 (0x0004)
	float                                              CurrWPNDelayProgress;                        // 0x03E4 (0x0004)
	void*                                              WeaponAttachment;                            // 0x03E8 (0x0004)
	struct FRotator                                    TurretRotation;                              // 0x03EC (0x000C)
	struct FTurretFireInfo                             FireInfo;                                    // 0x03F8 (0x001C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTurret" );

		return ClassPointer;
	};

public:
	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ReplicatedEvent" );

		ACCTurret_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.Touch" );

		ACCTurret_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	bool PassThroughDamage ( class AActor* HitActor )
	{
		static UFunction* pfnPassThroughDamage = NULL;

		if ( !pfnPassThroughDamage )
			pfnPassThroughDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.PassThroughDamage" );

		ACCTurret_execPassThroughDamage_Parms PassThroughDamage_Parms;
		PassThroughDamage_Parms.HitActor = HitActor;

		this->ProcessEvent( pfnPassThroughDamage, &PassThroughDamage_Parms, NULL );

		return PassThroughDamage_Parms.ReturnValue;
	};

	void ClientDebugFire ( struct FVector Start, struct FVector End )
	{
		static UFunction* pfnClientDebugFire = NULL;

		if ( !pfnClientDebugFire )
			pfnClientDebugFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ClientDebugFire" );

		ACCTurret_execClientDebugFire_Parms ClientDebugFire_Parms;
		memcpy( &ClientDebugFire_Parms.Start, &Start, 0xC );
		memcpy( &ClientDebugFire_Parms.End, &End, 0xC );

		this->ProcessEvent( pfnClientDebugFire, &ClientDebugFire_Parms, NULL );
	};

	void ProcessInstantHit ( struct FImpactInfo Impact )
	{
		static UFunction* pfnProcessInstantHit = NULL;

		if ( !pfnProcessInstantHit )
			pfnProcessInstantHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ProcessInstantHit" );

		ACCTurret_execProcessInstantHit_Parms ProcessInstantHit_Parms;
		memcpy( &ProcessInstantHit_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
	};

	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, TArray< struct FImpactInfo >* ImpactList )
	{
		static UFunction* pfnCalcWeaponFire = NULL;

		if ( !pfnCalcWeaponFire )
			pfnCalcWeaponFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.CalcWeaponFire" );

		ACCTurret_execCalcWeaponFire_Parms CalcWeaponFire_Parms;
		memcpy( &CalcWeaponFire_Parms.StartTrace, &StartTrace, 0xC );
		memcpy( &CalcWeaponFire_Parms.EndTrace, &EndTrace, 0xC );

		this->ProcessEvent( pfnCalcWeaponFire, &CalcWeaponFire_Parms, NULL );

		if ( ImpactList )
			memcpy( ImpactList, &CalcWeaponFire_Parms.ImpactList, 0xC ); // CPF_OutParm

		return CalcWeaponFire_Parms.ReturnValue;
	};

	void InstantFire ()
	{
		static UFunction* pfnInstantFire = NULL;

		if ( !pfnInstantFire )
			pfnInstantFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.InstantFire" );

		ACCTurret_execInstantFire_Parms InstantFire_Parms;

		this->ProcessEvent( pfnInstantFire, &InstantFire_Parms, NULL );
	};

	void ProcessFiring ( float DeltaTime )
	{
		static UFunction* pfnProcessFiring = NULL;

		if ( !pfnProcessFiring )
			pfnProcessFiring = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ProcessFiring" );

		ACCTurret_execProcessFiring_Parms ProcessFiring_Parms;
		ProcessFiring_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessFiring, &ProcessFiring_Parms, NULL );
	};

	void ProcessAiming ( float DeltaTime )
	{
		static UFunction* pfnProcessAiming = NULL;

		if ( !pfnProcessAiming )
			pfnProcessAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ProcessAiming" );

		ACCTurret_execProcessAiming_Parms ProcessAiming_Parms;
		ProcessAiming_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessAiming, &ProcessAiming_Parms, NULL );
	};

	void Test ()
	{
		static UFunction* pfnTest = NULL;

		if ( !pfnTest )
			pfnTest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.Test" );

		ACCTurret_execTest_Parms Test_Parms;

		this->ProcessEvent( pfnTest, &Test_Parms, NULL );
	};

	int GetRotDiff ( int SelfRot, int OtherRot )
	{
		static UFunction* pfnGetRotDiff = NULL;

		if ( !pfnGetRotDiff )
			pfnGetRotDiff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.GetRotDiff" );

		ACCTurret_execGetRotDiff_Parms GetRotDiff_Parms;
		GetRotDiff_Parms.SelfRot = SelfRot;
		GetRotDiff_Parms.OtherRot = OtherRot;

		pfnGetRotDiff->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRotDiff, &GetRotDiff_Parms, NULL );
		pfnGetRotDiff->FunctionFlags |= 0x400;

		return GetRotDiff_Parms.ReturnValue;
	};

	void ProcessTest ( float DeltaTime )
	{
		static UFunction* pfnProcessTest = NULL;

		if ( !pfnProcessTest )
			pfnProcessTest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.ProcessTest" );

		ACCTurret_execProcessTest_Parms ProcessTest_Parms;
		ProcessTest_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessTest, &ProcessTest_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.Tick" );

		ACCTurret_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void TurretEquipped ()
	{
		static UFunction* pfnTurretEquipped = NULL;

		if ( !pfnTurretEquipped )
			pfnTurretEquipped = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.TurretEquipped" );

		ACCTurret_execTurretEquipped_Parms TurretEquipped_Parms;

		this->ProcessEvent( pfnTurretEquipped, &TurretEquipped_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.Destroyed" );

		ACCTurret_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.PostBeginPlay" );

		ACCTurret_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void DestroyWeaponAttachment ()
	{
		static UFunction* pfnDestroyWeaponAttachment = NULL;

		if ( !pfnDestroyWeaponAttachment )
			pfnDestroyWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.DestroyWeaponAttachment" );

		ACCTurret_execDestroyWeaponAttachment_Parms DestroyWeaponAttachment_Parms;

		this->ProcessEvent( pfnDestroyWeaponAttachment, &DestroyWeaponAttachment_Parms, NULL );
	};

	void CreateWeaponAttachment ()
	{
		static UFunction* pfnCreateWeaponAttachment = NULL;

		if ( !pfnCreateWeaponAttachment )
			pfnCreateWeaponAttachment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTurret.CreateWeaponAttachment" );

		ACCTurret_execCreateWeaponAttachment_Parms CreateWeaponAttachment_Parms;

		this->ProcessEvent( pfnCreateWeaponAttachment, &CreateWeaponAttachment_Parms, NULL );
	};

};

UClass* ACCTurret::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif