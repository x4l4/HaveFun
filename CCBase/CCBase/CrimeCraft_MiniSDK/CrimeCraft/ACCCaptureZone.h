/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCaptureZone.h
// Date: 06/16/2011 @ 05:19:40.504
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCaptureZone_execSetMaterialVectorParameterValue_Parms
{
	float Val;
};

struct ACCCaptureZone_execFreeze_Parms
{
	unsigned long bFreeze : 1;
};

struct ACCCaptureZone_execUpdate_Parms
{
};

struct ACCCaptureZone_execCheckPlayers_Parms
{
};

struct ACCCaptureZone_execRemoveCapturingPlayer_Parms
{
	class AActor* Player;
};

struct ACCCaptureZone_execAddCapturingPlayer_Parms
{
	class AActor* Player;
};

struct ACCCaptureZone_execIsCapturedByBlues_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCaptureZone_execIsCapturedByReds_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCaptureZone_execIsCaptured_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCaptureZone_execIsPlayerAbleToCapture_Parms
{
	class AActor* Player;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCaptureZone_eventUnTouch_Parms
{
	class AActor* Other;
};// FUNC_Event

struct ACCCaptureZone_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCCaptureZone_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCaptureZone_execclient_ResetCaptureState_Parms
{
};

struct ACCCaptureZone_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCCaptureZone_execCreateMaterialInstance_Parms
{
	class UMaterialInterface* ParentMaterial;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCCaptureZone_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x314)
class ACCCaptureZone : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_PlacableCTZ;  // 0x02B8 (0x0004)
	float                                              CaptureTime;                                 // 0x02BC (0x0004)
	float                                              CaptureAssistBonusMul;                       // 0x02C0 (0x0004)
	int                                                ScoreTick;                                   // 0x02C4 (0x0004)
	int                                                ScoreIncrement;                              // 0x02C8 (0x0004)
	TArray< class AActor* >                            RedPlayersCapturing;                         // 0x02CC (0x000C)
	TArray< class AActor* >                            BluePlayersCapturing;                        // 0x02D8 (0x000C)
	float                                              CaptureState;                                // 0x02E4 (0x0004)
	int                                                TimeLeftToNextScoreIncrement;                // 0x02E8 (0x0004)
	int                                                GameInfoIndex;                               // 0x02EC (0x0004)
	unsigned long                                      bWasCapturedByReds : 1;                      // 0x02F0 (0x0004) [0x00000001]
	unsigned long                                      bWasCapturedByBlues : 1;                     // 0x02F0 (0x0004) [0x00000002]
	unsigned long                                      bFreezed : 1;                                // 0x02F0 (0x0004) [0x00000004]
	unsigned long                                      bJustCaptured : 1;                           // 0x02F0 (0x0004) [0x00000008]
	void*                                              StaticMeshComp;                              // 0x02F4 (0x0004)
	void*                                              LightEnv;                                    // 0x02F8 (0x0004)
	class UMaterialInterface*                          RenderMaterial;                              // 0x02FC (0x0004)
	void*                                              RenderMaterialInst;                          // 0x0300 (0x0004)
	class UMaterialInterface*                          OutOfZoneMaterial;                           // 0x0304 (0x0004)
	void*                                              OutOfZoneMaterialInst;                       // 0x0308 (0x0004)
	int                                                OutOfZoneMarkerSize;                         // 0x030C (0x0004)
	class UTexture2D*                                  Face;                                        // 0x0310 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCaptureZone" );

		return ClassPointer;
	};

public:
	void SetMaterialVectorParameterValue ( float Val )
	{
		static UFunction* pfnSetMaterialVectorParameterValue = NULL;

		if ( !pfnSetMaterialVectorParameterValue )
			pfnSetMaterialVectorParameterValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.SetMaterialVectorParameterValue" );

		ACCCaptureZone_execSetMaterialVectorParameterValue_Parms SetMaterialVectorParameterValue_Parms;
		SetMaterialVectorParameterValue_Parms.Val = Val;

		this->ProcessEvent( pfnSetMaterialVectorParameterValue, &SetMaterialVectorParameterValue_Parms, NULL );
	};

	void Freeze ( unsigned long bFreeze )
	{
		static UFunction* pfnFreeze = NULL;

		if ( !pfnFreeze )
			pfnFreeze = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.Freeze" );

		ACCCaptureZone_execFreeze_Parms Freeze_Parms;
		Freeze_Parms.bFreeze = bFreeze;

		this->ProcessEvent( pfnFreeze, &Freeze_Parms, NULL );
	};

	void Update ()
	{
		static UFunction* pfnUpdate = NULL;

		if ( !pfnUpdate )
			pfnUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.Update" );

		ACCCaptureZone_execUpdate_Parms Update_Parms;

		this->ProcessEvent( pfnUpdate, &Update_Parms, NULL );
	};

	void CheckPlayers ()
	{
		static UFunction* pfnCheckPlayers = NULL;

		if ( !pfnCheckPlayers )
			pfnCheckPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.CheckPlayers" );

		ACCCaptureZone_execCheckPlayers_Parms CheckPlayers_Parms;

		this->ProcessEvent( pfnCheckPlayers, &CheckPlayers_Parms, NULL );
	};

	void RemoveCapturingPlayer ( class AActor* Player )
	{
		static UFunction* pfnRemoveCapturingPlayer = NULL;

		if ( !pfnRemoveCapturingPlayer )
			pfnRemoveCapturingPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.RemoveCapturingPlayer" );

		ACCCaptureZone_execRemoveCapturingPlayer_Parms RemoveCapturingPlayer_Parms;
		RemoveCapturingPlayer_Parms.Player = Player;

		this->ProcessEvent( pfnRemoveCapturingPlayer, &RemoveCapturingPlayer_Parms, NULL );
	};

	void AddCapturingPlayer ( class AActor* Player )
	{
		static UFunction* pfnAddCapturingPlayer = NULL;

		if ( !pfnAddCapturingPlayer )
			pfnAddCapturingPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.AddCapturingPlayer" );

		ACCCaptureZone_execAddCapturingPlayer_Parms AddCapturingPlayer_Parms;
		AddCapturingPlayer_Parms.Player = Player;

		this->ProcessEvent( pfnAddCapturingPlayer, &AddCapturingPlayer_Parms, NULL );
	};

	bool IsCapturedByBlues ()
	{
		static UFunction* pfnIsCapturedByBlues = NULL;

		if ( !pfnIsCapturedByBlues )
			pfnIsCapturedByBlues = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.IsCapturedByBlues" );

		ACCCaptureZone_execIsCapturedByBlues_Parms IsCapturedByBlues_Parms;

		this->ProcessEvent( pfnIsCapturedByBlues, &IsCapturedByBlues_Parms, NULL );

		return IsCapturedByBlues_Parms.ReturnValue;
	};

	bool IsCapturedByReds ()
	{
		static UFunction* pfnIsCapturedByReds = NULL;

		if ( !pfnIsCapturedByReds )
			pfnIsCapturedByReds = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.IsCapturedByReds" );

		ACCCaptureZone_execIsCapturedByReds_Parms IsCapturedByReds_Parms;

		this->ProcessEvent( pfnIsCapturedByReds, &IsCapturedByReds_Parms, NULL );

		return IsCapturedByReds_Parms.ReturnValue;
	};

	bool IsCaptured ()
	{
		static UFunction* pfnIsCaptured = NULL;

		if ( !pfnIsCaptured )
			pfnIsCaptured = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.IsCaptured" );

		ACCCaptureZone_execIsCaptured_Parms IsCaptured_Parms;

		this->ProcessEvent( pfnIsCaptured, &IsCaptured_Parms, NULL );

		return IsCaptured_Parms.ReturnValue;
	};

	bool IsPlayerAbleToCapture ( class AActor* Player )
	{
		static UFunction* pfnIsPlayerAbleToCapture = NULL;

		if ( !pfnIsPlayerAbleToCapture )
			pfnIsPlayerAbleToCapture = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.IsPlayerAbleToCapture" );

		ACCCaptureZone_execIsPlayerAbleToCapture_Parms IsPlayerAbleToCapture_Parms;
		IsPlayerAbleToCapture_Parms.Player = Player;

		this->ProcessEvent( pfnIsPlayerAbleToCapture, &IsPlayerAbleToCapture_Parms, NULL );

		return IsPlayerAbleToCapture_Parms.ReturnValue;
	};

	void eventUnTouch ( class AActor* Other )
	{
		static UFunction* pfnUnTouch = NULL;

		if ( !pfnUnTouch )
			pfnUnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.UnTouch" );

		ACCCaptureZone_eventUnTouch_Parms UnTouch_Parms;
		UnTouch_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouch, &UnTouch_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.Touch" );

		ACCCaptureZone_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.PostBeginPlay" );

		ACCCaptureZone_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void client_ResetCaptureState ()
	{
		static UFunction* pfnclient_ResetCaptureState = NULL;

		if ( !pfnclient_ResetCaptureState )
			pfnclient_ResetCaptureState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.client_ResetCaptureState" );

		ACCCaptureZone_execclient_ResetCaptureState_Parms client_ResetCaptureState_Parms;

		this->ProcessEvent( pfnclient_ResetCaptureState, &client_ResetCaptureState_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.ReplicatedEvent" );

		ACCCaptureZone_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void* CreateMaterialInstance ( class UMaterialInterface* ParentMaterial )
	{
		static UFunction* pfnCreateMaterialInstance = NULL;

		if ( !pfnCreateMaterialInstance )
			pfnCreateMaterialInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.CreateMaterialInstance" );

		ACCCaptureZone_execCreateMaterialInstance_Parms CreateMaterialInstance_Parms;
		CreateMaterialInstance_Parms.ParentMaterial = ParentMaterial;

		this->ProcessEvent( pfnCreateMaterialInstance, &CreateMaterialInstance_Parms, NULL );

		return CreateMaterialInstance_Parms.ReturnValue;
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCaptureZone.UpdateRadarPresentation" );

		ACCCaptureZone_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCCaptureZone::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif