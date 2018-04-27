/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTFBase.h
// Date: 06/16/2011 @ 05:19:41.288
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTFBase_execUpdateVisual_Parms
{
};

struct ACCCTFBase_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct ACCCTFBase_execSetAlarm_Parms
{
	unsigned long bNowOn : 1;
};

struct ACCCTFBase_execGetFlag_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCCTFBase_execPostBeginPlay_Parms
{
};

struct ACCCTFBase_eventDifferentTeamTouch_Parms
{
	class AController* Other;
};// FUNC_Event

struct ACCCTFBase_eventSameTeamTouch_Parms
{
	class AController* Other;
};// FUNC_Event

struct ACCCTFBase_eventUpdateSensorState_Parms
{
	void* Sensor;
	void* PlayerOwner;
};// FUNC_Event

struct ACCCTFBase_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCTFBase_execUpdate_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCTFBase_execIsActorInVolume_Parms
{
	class AActor* TestActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x2D8)
class ACCCTFBase : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x02B8 (0x0004)
	void*                                              FlagBaseMesh;                                // 0x02BC (0x0004)
	void*                                              AttachedVisualMaterialInst;                  // 0x02C0 (0x0004)
	void*                                              TakenSound;                                  // 0x02C4 (0x0004)
	void*                                              myFlag;                                      // 0x02C8 (0x0004)
	class UClass*                                      FlagType;                                    // 0x02CC (0x0004)
	class UClass*                                      CTFAnnouncerMessagesClass;                   // 0x02D0 (0x0004)
	float                                              TouchDist;                                   // 0x02D4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTFBase" );

		return ClassPointer;
	};

public:
	void UpdateVisual ()
	{
		static UFunction* pfnUpdateVisual = NULL;

		if ( !pfnUpdateVisual )
			pfnUpdateVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.UpdateVisual" );

		ACCCTFBase_execUpdateVisual_Parms UpdateVisual_Parms;

		this->ProcessEvent( pfnUpdateVisual, &UpdateVisual_Parms, NULL );
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.NotifyLocalPlayerTeamReceived" );

		ACCCTFBase_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	void SetAlarm ( unsigned long bNowOn )
	{
		static UFunction* pfnSetAlarm = NULL;

		if ( !pfnSetAlarm )
			pfnSetAlarm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.SetAlarm" );

		ACCCTFBase_execSetAlarm_Parms SetAlarm_Parms;
		SetAlarm_Parms.bNowOn = bNowOn;

		this->ProcessEvent( pfnSetAlarm, &SetAlarm_Parms, NULL );
	};

	void* GetFlag ()
	{
		static UFunction* pfnGetFlag = NULL;

		if ( !pfnGetFlag )
			pfnGetFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.GetFlag" );

		ACCCTFBase_execGetFlag_Parms GetFlag_Parms;

		this->ProcessEvent( pfnGetFlag, &GetFlag_Parms, NULL );

		return GetFlag_Parms.ReturnValue;
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.PostBeginPlay" );

		ACCCTFBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventDifferentTeamTouch ( class AController* Other )
	{
		static UFunction* pfnDifferentTeamTouch = NULL;

		if ( !pfnDifferentTeamTouch )
			pfnDifferentTeamTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.DifferentTeamTouch" );

		ACCCTFBase_eventDifferentTeamTouch_Parms DifferentTeamTouch_Parms;
		DifferentTeamTouch_Parms.Other = Other;

		this->ProcessEvent( pfnDifferentTeamTouch, &DifferentTeamTouch_Parms, NULL );
	};

	void eventSameTeamTouch ( class AController* Other )
	{
		static UFunction* pfnSameTeamTouch = NULL;

		if ( !pfnSameTeamTouch )
			pfnSameTeamTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.SameTeamTouch" );

		ACCCTFBase_eventSameTeamTouch_Parms SameTeamTouch_Parms;
		SameTeamTouch_Parms.Other = Other;

		this->ProcessEvent( pfnSameTeamTouch, &SameTeamTouch_Parms, NULL );
	};

	void eventUpdateSensorState ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateSensorState = NULL;

		if ( !pfnUpdateSensorState )
			pfnUpdateSensorState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.UpdateSensorState" );

		ACCCTFBase_eventUpdateSensorState_Parms UpdateSensorState_Parms;
		UpdateSensorState_Parms.Sensor = Sensor;
		UpdateSensorState_Parms.PlayerOwner = PlayerOwner;

		this->ProcessEvent( pfnUpdateSensorState, &UpdateSensorState_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.UpdateRadarPresentation" );

		ACCCTFBase_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

	bool Update ()
	{
		static UFunction* pfnUpdate = NULL;

		if ( !pfnUpdate )
			pfnUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.Update" );

		ACCCTFBase_execUpdate_Parms Update_Parms;

		pfnUpdate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdate, &Update_Parms, NULL );
		pfnUpdate->FunctionFlags |= 0x400;

		return Update_Parms.ReturnValue;
	};

	bool IsActorInVolume ( class AActor* TestActor )
	{
		static UFunction* pfnIsActorInVolume = NULL;

		if ( !pfnIsActorInVolume )
			pfnIsActorInVolume = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFBase.IsActorInVolume" );

		ACCCTFBase_execIsActorInVolume_Parms IsActorInVolume_Parms;
		IsActorInVolume_Parms.TestActor = TestActor;

		pfnIsActorInVolume->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsActorInVolume, &IsActorInVolume_Parms, NULL );
		pfnIsActorInVolume->FunctionFlags |= 0x400;

		return IsActorInVolume_Parms.ReturnValue;
	};

};

UClass* ACCCTFBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif