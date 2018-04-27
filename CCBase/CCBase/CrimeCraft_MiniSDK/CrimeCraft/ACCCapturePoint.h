/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCapturePoint.h
// Date: 06/16/2011 @ 05:19:40.497
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCapturePoint_execUpdateHUDEx_Parms
{
	int TeamIndex;
};

struct ACCCapturePoint_execIsLocked_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCapturePoint_execUpdateHUD_Parms
{
};

struct ACCCapturePoint_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct ACCCapturePoint_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCCapturePoint_eventTakeDamage_Parms
{
	int Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCCapturePoint_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCapturePoint_execUpdateVisual_Parms
{
};

struct ACCCapturePoint_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCCapturePoint_execUpdateRotation_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execGetLocalPlayer_Parms
{
	class ACCInstanceController* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execResetVisual_Parms
{
};

struct ACCCapturePoint_execUpdateAppearance_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execUpdateStatus_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execUpdateBlueStatus_Parms
{
	TArray< class ACCCapturePoint* > CPList;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execUpdateRedStatus_Parms
{
	TArray< class ACCCapturePoint* > CPList;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execIsPointLocked_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCapturePoint_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x348)
class ACCCapturePoint : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x02B8 (0x0004)
	float                                              CaptureTime;                                 // 0x02BC (0x0004)
	float                                              CaptureDist;                                 // 0x02C0 (0x0004)
	float                                              CaptureTimeSuddenDeath;                      // 0x02C4 (0x0004)
	float                                              CaptureAssist;                               // 0x02C8 (0x0004)
	TArray< struct FCapturePointParent >               BlueTeamParents;                             // 0x02CC (0x000C)
	TArray< struct FCapturePointParent >               RedTeamParents;                              // 0x02D8 (0x000C)
	float                                              TeamState;                                   // 0x02E4 (0x0004)
	float                                              TeamStateChangeSpeed;                        // 0x02E8 (0x0004)
	unsigned long                                      CanBeCapturedBlue : 1;                       // 0x02EC (0x0004) [0x00000001]
	unsigned long                                      CanBeCapturedRed : 1;                        // 0x02EC (0x0004) [0x00000002]
	unsigned long                                      CapturedBlue : 1;                            // 0x02EC (0x0004) [0x00000004]
	unsigned long                                      CapturedRed : 1;                             // 0x02EC (0x0004) [0x00000008]
	unsigned long                                      BasePoint : 1;                               // 0x02EC (0x0004) [0x00000010]
	unsigned long                                      DefaultCapturedBlue : 1;                     // 0x02EC (0x0004) [0x00000020]
	unsigned long                                      DefaultCapturedRed : 1;                      // 0x02EC (0x0004) [0x00000040]
	int                                                PointNameID;                                 // 0x02F0 (0x0004)
	struct FLinearColor                                TeamColor;                                   // 0x02F4 (0x0010)
	struct FLinearColor                                EnemyColor;                                  // 0x0304 (0x0010)
	TArray< void* >                                    RedStarts;                                   // 0x0314 (0x000C)
	TArray< void* >                                    BlueStarts;                                  // 0x0320 (0x000C)
	float                                              DefaultTeamState;                            // 0x032C (0x0004)
	void*                                              CapturePointMesh;                            // 0x0330 (0x0004)
	void*                                              AttachedVisualMaterialInst_Sign;             // 0x0334 (0x0004)
	void*                                              AttachedVisualMaterialInst_Light;            // 0x0338 (0x0004)
	int                                                NumRed;                                      // 0x033C (0x0004)
	int                                                NumBlue;                                     // 0x0340 (0x0004)
	void*                                              PaintCaptureSound;                           // 0x0344 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCapturePoint" );

		return ClassPointer;
	};

public:
	void UpdateHUDEx ( int TeamIndex )
	{
		static UFunction* pfnUpdateHUDEx = NULL;

		if ( !pfnUpdateHUDEx )
			pfnUpdateHUDEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateHUDEx" );

		ACCCapturePoint_execUpdateHUDEx_Parms UpdateHUDEx_Parms;
		UpdateHUDEx_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnUpdateHUDEx, &UpdateHUDEx_Parms, NULL );
	};

	bool IsLocked ( int TeamIndex )
	{
		static UFunction* pfnIsLocked = NULL;

		if ( !pfnIsLocked )
			pfnIsLocked = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.IsLocked" );

		ACCCapturePoint_execIsLocked_Parms IsLocked_Parms;
		IsLocked_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnIsLocked, &IsLocked_Parms, NULL );

		return IsLocked_Parms.ReturnValue;
	};

	void UpdateHUD ()
	{
		static UFunction* pfnUpdateHUD = NULL;

		if ( !pfnUpdateHUD )
			pfnUpdateHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateHUD" );

		ACCCapturePoint_execUpdateHUD_Parms UpdateHUD_Parms;

		this->ProcessEvent( pfnUpdateHUD, &UpdateHUD_Parms, NULL );
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.NotifyLocalPlayerTeamReceived" );

		ACCCapturePoint_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.ReplicatedEvent" );

		ACCCapturePoint_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.TakeDamage" );

		ACCCapturePoint_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.Damage = Damage;
		TakeDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.PostBeginPlay" );

		ACCCapturePoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void UpdateVisual ()
	{
		static UFunction* pfnUpdateVisual = NULL;

		if ( !pfnUpdateVisual )
			pfnUpdateVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateVisual" );

		ACCCapturePoint_execUpdateVisual_Parms UpdateVisual_Parms;

		this->ProcessEvent( pfnUpdateVisual, &UpdateVisual_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.Tick" );

		ACCCapturePoint_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	bool UpdateRotation ( float DeltaTime )
	{
		static UFunction* pfnUpdateRotation = NULL;

		if ( !pfnUpdateRotation )
			pfnUpdateRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateRotation" );

		ACCCapturePoint_execUpdateRotation_Parms UpdateRotation_Parms;
		UpdateRotation_Parms.DeltaTime = DeltaTime;

		pfnUpdateRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRotation, &UpdateRotation_Parms, NULL );
		pfnUpdateRotation->FunctionFlags |= 0x400;

		return UpdateRotation_Parms.ReturnValue;
	};

	class ACCInstanceController* GetLocalPlayer ()
	{
		static UFunction* pfnGetLocalPlayer = NULL;

		if ( !pfnGetLocalPlayer )
			pfnGetLocalPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.GetLocalPlayer" );

		ACCCapturePoint_execGetLocalPlayer_Parms GetLocalPlayer_Parms;

		pfnGetLocalPlayer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetLocalPlayer, &GetLocalPlayer_Parms, NULL );
		pfnGetLocalPlayer->FunctionFlags |= 0x400;

		return GetLocalPlayer_Parms.ReturnValue;
	};

	void ResetVisual ()
	{
		static UFunction* pfnResetVisual = NULL;

		if ( !pfnResetVisual )
			pfnResetVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.ResetVisual" );

		ACCCapturePoint_execResetVisual_Parms ResetVisual_Parms;

		this->ProcessEvent( pfnResetVisual, &ResetVisual_Parms, NULL );
	};

	bool UpdateAppearance ()
	{
		static UFunction* pfnUpdateAppearance = NULL;

		if ( !pfnUpdateAppearance )
			pfnUpdateAppearance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateAppearance" );

		ACCCapturePoint_execUpdateAppearance_Parms UpdateAppearance_Parms;

		pfnUpdateAppearance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateAppearance, &UpdateAppearance_Parms, NULL );
		pfnUpdateAppearance->FunctionFlags |= 0x400;

		return UpdateAppearance_Parms.ReturnValue;
	};

	bool UpdateStatus ( float DeltaTime )
	{
		static UFunction* pfnUpdateStatus = NULL;

		if ( !pfnUpdateStatus )
			pfnUpdateStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateStatus" );

		ACCCapturePoint_execUpdateStatus_Parms UpdateStatus_Parms;
		UpdateStatus_Parms.DeltaTime = DeltaTime;

		pfnUpdateStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateStatus, &UpdateStatus_Parms, NULL );
		pfnUpdateStatus->FunctionFlags |= 0x400;

		return UpdateStatus_Parms.ReturnValue;
	};

	bool UpdateBlueStatus ( TArray< class ACCCapturePoint* > CPList )
	{
		static UFunction* pfnUpdateBlueStatus = NULL;

		if ( !pfnUpdateBlueStatus )
			pfnUpdateBlueStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateBlueStatus" );

		ACCCapturePoint_execUpdateBlueStatus_Parms UpdateBlueStatus_Parms;
		UpdateBlueStatus_Parms.CPList = CPList;

		pfnUpdateBlueStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateBlueStatus, &UpdateBlueStatus_Parms, NULL );
		pfnUpdateBlueStatus->FunctionFlags |= 0x400;

		return UpdateBlueStatus_Parms.ReturnValue;
	};

	bool UpdateRedStatus ( TArray< class ACCCapturePoint* > CPList )
	{
		static UFunction* pfnUpdateRedStatus = NULL;

		if ( !pfnUpdateRedStatus )
			pfnUpdateRedStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateRedStatus" );

		ACCCapturePoint_execUpdateRedStatus_Parms UpdateRedStatus_Parms;
		UpdateRedStatus_Parms.CPList = CPList;

		pfnUpdateRedStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRedStatus, &UpdateRedStatus_Parms, NULL );
		pfnUpdateRedStatus->FunctionFlags |= 0x400;

		return UpdateRedStatus_Parms.ReturnValue;
	};

	bool IsPointLocked ( int TeamIndex )
	{
		static UFunction* pfnIsPointLocked = NULL;

		if ( !pfnIsPointLocked )
			pfnIsPointLocked = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.IsPointLocked" );

		ACCCapturePoint_execIsPointLocked_Parms IsPointLocked_Parms;
		IsPointLocked_Parms.TeamIndex = TeamIndex;

		pfnIsPointLocked->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPointLocked, &IsPointLocked_Parms, NULL );
		pfnIsPointLocked->FunctionFlags |= 0x400;

		return IsPointLocked_Parms.ReturnValue;
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCapturePoint.UpdateRadarPresentation" );

		ACCCapturePoint_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCCapturePoint::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif