/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCGameObjective.h
// Date: 06/16/2011 @ 05:19:40.496
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCGameObjective_execUpdateVisual_Parms
{
};

struct ACCGameObjective_execTriggerFlagEvent_Parms
{
	struct FName EventType;
	class AController* EventInstigator;
};

struct ACCGameObjective_execSetAlarm_Parms
{
	unsigned long bNowOn : 1;
};

struct ACCGameObjective_execGetFlag_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCGameObjective_execSetTeam_Parms
{
	unsigned char TeamIndex;
};

struct ACCGameObjective_execReset_Parms
{
};

struct ACCGameObjective_execPostBeginPlay_Parms
{
};

struct ACCGameObjective_execGetLocalPlayerTeam_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCGameObjective_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x2A8 - 0x2B8)
class ACCGameObjective : public AObjective
{
public:
	unsigned char                                      DefenderTeamIndex;                           // 0x02A8 (0x0001)
	unsigned long                                      bUnderAttack : 1;                            // 0x02AC (0x0004) [0x00000001]
	class AVolume*                                     ObjectiveVolume;                             // 0x02B0 (0x0004)
	float                                              BaseRadius;                                  // 0x02B4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCGameObjective" );

		return ClassPointer;
	};

public:
	void UpdateVisual ()
	{
		static UFunction* pfnUpdateVisual = NULL;

		if ( !pfnUpdateVisual )
			pfnUpdateVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.UpdateVisual" );

		ACCGameObjective_execUpdateVisual_Parms UpdateVisual_Parms;

		this->ProcessEvent( pfnUpdateVisual, &UpdateVisual_Parms, NULL );
	};

	void TriggerFlagEvent ( struct FName EventType, class AController* EventInstigator )
	{
		static UFunction* pfnTriggerFlagEvent = NULL;

		if ( !pfnTriggerFlagEvent )
			pfnTriggerFlagEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.TriggerFlagEvent" );

		ACCGameObjective_execTriggerFlagEvent_Parms TriggerFlagEvent_Parms;
		memcpy( &TriggerFlagEvent_Parms.EventType, &EventType, 0x8 );
		TriggerFlagEvent_Parms.EventInstigator = EventInstigator;

		this->ProcessEvent( pfnTriggerFlagEvent, &TriggerFlagEvent_Parms, NULL );
	};

	void SetAlarm ( unsigned long bNowOn )
	{
		static UFunction* pfnSetAlarm = NULL;

		if ( !pfnSetAlarm )
			pfnSetAlarm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.SetAlarm" );

		ACCGameObjective_execSetAlarm_Parms SetAlarm_Parms;
		SetAlarm_Parms.bNowOn = bNowOn;

		this->ProcessEvent( pfnSetAlarm, &SetAlarm_Parms, NULL );
	};

	void* GetFlag ()
	{
		static UFunction* pfnGetFlag = NULL;

		if ( !pfnGetFlag )
			pfnGetFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.GetFlag" );

		ACCGameObjective_execGetFlag_Parms GetFlag_Parms;

		this->ProcessEvent( pfnGetFlag, &GetFlag_Parms, NULL );

		return GetFlag_Parms.ReturnValue;
	};

	void SetTeam ( unsigned char TeamIndex )
	{
		static UFunction* pfnSetTeam = NULL;

		if ( !pfnSetTeam )
			pfnSetTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.SetTeam" );

		ACCGameObjective_execSetTeam_Parms SetTeam_Parms;
		SetTeam_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSetTeam, &SetTeam_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.Reset" );

		ACCGameObjective_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.PostBeginPlay" );

		ACCGameObjective_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	int GetLocalPlayerTeam ()
	{
		static UFunction* pfnGetLocalPlayerTeam = NULL;

		if ( !pfnGetLocalPlayerTeam )
			pfnGetLocalPlayerTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.GetLocalPlayerTeam" );

		ACCGameObjective_execGetLocalPlayerTeam_Parms GetLocalPlayerTeam_Parms;

		pfnGetLocalPlayerTeam->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetLocalPlayerTeam, &GetLocalPlayerTeam_Parms, NULL );
		pfnGetLocalPlayerTeam->FunctionFlags |= 0x400;

		return GetLocalPlayerTeam_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameObjective.ReplicatedEvent" );

		ACCGameObjective_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ACCGameObjective::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif