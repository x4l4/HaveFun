/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ATrigger.h
// Date: 06/16/2011 @ 05:19:39.801
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ATrigger_execApplyCheckpointRecord_Parms
{
	unsigned char                                      Record[ 4 ]; // CPF_OutParm
};

struct ATrigger_execCreateCheckpointRecord_Parms
{
	unsigned char                                      Record[ 4 ]; // CPF_OutParm
};

struct ATrigger_execShouldSaveForCheckpoint_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ATrigger_execStopsProjectile_Parms
{
	class AProjectile* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ATrigger_execUnTrigger_Parms
{
};

struct ATrigger_execNotifyTriggered_Parms
{
};

struct ATrigger_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

// (0x1BC - 0x1C8)
class ATrigger : public AActor
{
public:
	void*                                              CylinderComponent;                           // 0x01BC (0x0004)
	unsigned long                                      bRecentlyTriggered : 1;                      // 0x01C0 (0x0004) [0x00000001]
	float                                              AITriggerDelay;                              // 0x01C4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Trigger" );

		return ClassPointer;
	};

public:
	void ApplyCheckpointRecord ( struct FCheckpointRecord* Record )
	{
		static UFunction* pfnApplyCheckpointRecord = NULL;

		if ( !pfnApplyCheckpointRecord )
			pfnApplyCheckpointRecord = UObject::FindObject< UFunction >( "Function Engine.Trigger.ApplyCheckpointRecord" );

		ATrigger_execApplyCheckpointRecord_Parms ApplyCheckpointRecord_Parms;

		this->ProcessEvent( pfnApplyCheckpointRecord, &ApplyCheckpointRecord_Parms, NULL );

		if ( Record )
			memcpy( Record, &ApplyCheckpointRecord_Parms.Record, 0x4 ); // CPF_OutParm
	};

	void CreateCheckpointRecord ( struct FCheckpointRecord* Record )
	{
		static UFunction* pfnCreateCheckpointRecord = NULL;

		if ( !pfnCreateCheckpointRecord )
			pfnCreateCheckpointRecord = UObject::FindObject< UFunction >( "Function Engine.Trigger.CreateCheckpointRecord" );

		ATrigger_execCreateCheckpointRecord_Parms CreateCheckpointRecord_Parms;

		this->ProcessEvent( pfnCreateCheckpointRecord, &CreateCheckpointRecord_Parms, NULL );

		if ( Record )
			memcpy( Record, &CreateCheckpointRecord_Parms.Record, 0x4 ); // CPF_OutParm
	};

	bool ShouldSaveForCheckpoint ()
	{
		static UFunction* pfnShouldSaveForCheckpoint = NULL;

		if ( !pfnShouldSaveForCheckpoint )
			pfnShouldSaveForCheckpoint = UObject::FindObject< UFunction >( "Function Engine.Trigger.ShouldSaveForCheckpoint" );

		ATrigger_execShouldSaveForCheckpoint_Parms ShouldSaveForCheckpoint_Parms;

		this->ProcessEvent( pfnShouldSaveForCheckpoint, &ShouldSaveForCheckpoint_Parms, NULL );

		return ShouldSaveForCheckpoint_Parms.ReturnValue;
	};

	bool StopsProjectile ( class AProjectile* P )
	{
		static UFunction* pfnStopsProjectile = NULL;

		if ( !pfnStopsProjectile )
			pfnStopsProjectile = UObject::FindObject< UFunction >( "Function Engine.Trigger.StopsProjectile" );

		ATrigger_execStopsProjectile_Parms StopsProjectile_Parms;
		StopsProjectile_Parms.P = P;

		this->ProcessEvent( pfnStopsProjectile, &StopsProjectile_Parms, NULL );

		return StopsProjectile_Parms.ReturnValue;
	};

	void UnTrigger ()
	{
		static UFunction* pfnUnTrigger = NULL;

		if ( !pfnUnTrigger )
			pfnUnTrigger = UObject::FindObject< UFunction >( "Function Engine.Trigger.UnTrigger" );

		ATrigger_execUnTrigger_Parms UnTrigger_Parms;

		this->ProcessEvent( pfnUnTrigger, &UnTrigger_Parms, NULL );
	};

	void NotifyTriggered ()
	{
		static UFunction* pfnNotifyTriggered = NULL;

		if ( !pfnNotifyTriggered )
			pfnNotifyTriggered = UObject::FindObject< UFunction >( "Function Engine.Trigger.NotifyTriggered" );

		ATrigger_execNotifyTriggered_Parms NotifyTriggered_Parms;

		this->ProcessEvent( pfnNotifyTriggered, &NotifyTriggered_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function Engine.Trigger.Touch" );

		ATrigger_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

};

UClass* ATrigger::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif