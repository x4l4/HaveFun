/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTTCaptureZone.h
// Date: 06/16/2011 @ 05:19:41.359
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ECTTZoneState
{
	ECTTZS_NoMans = 0,
	ECTTZS_Teams = 1,
	ECTTZS_TeamsLoosing = 2,
	ECTTZS_MAX = 3
};

struct ACCCTTCaptureZone_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCTTCaptureZone_execDoSetMaterialVectorParameterValue_Parms
{
	float Val;
};

struct ACCCTTCaptureZone_execUpdateMaterialParameterValue_Parms
{
};

struct ACCCTTCaptureZone_execCreateMaterialInstance_Parms
{
	class UMaterialInterface* ParentMaterial;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execInitVisual_Parms
{
};

struct ACCCTTCaptureZone_eventGetIsAvailableForTeamPublic_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCCTTCaptureZone_execAnyAdjacentZoneOwnedByTeam_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCCTTCaptureZone_execIsAvailableForTeam_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCCTTCaptureZone_execGetTouchingPawns_Parms
{
	TArray< class ACCInstancePawn* > TouchingPawns; // CPF_OutParm
};// FUNC_Native

struct ACCCTTCaptureZone_execIsPlayerAbleToCapture_Parms
{
	class AActor* Player;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCCTTCaptureZone_execGetPlayersInsideMe_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCCTTCaptureZone_execCalcPlayersInZoneDiff_Parms
{
	void* OldPlayersIZ;
	void* NewPlayersIZ;
	void* RemovedPlayersIZ; // CPF_OutParm
	void* AddedPlayersIZ; // CPF_OutParm
	class UObject* InOuter;
};// FUNC_Final

struct ACCCTTCaptureZone_execGetPlayersInZone_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execUpdatePlayersInZone_Parms
{
	void* RemovedPlayersInZone; // CPF_OutParm
	void* AddedPlayersInZone; // CPF_OutParm
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execRemoveAllPlayersInZone_Parms
{
	void* RemovedPlayersInZone; // CPF_OutParm
};

struct ACCCTTCaptureZone_execClearPlayersInZone_Parms
{
};

struct ACCCTTCaptureZone_execUpdateAvailabilityZoneInfo_Parms
{
};

struct ACCCTTCaptureZone_execUpdateAvailabilityInfoForAllZones_Parms
{
};

struct ACCCTTCaptureZone_execReplicatedZoneStateInfoStructChanged_Parms
{
};

struct ACCCTTCaptureZone_execUpdateReplicatedZoneStateInfo_Parms
{
};

struct ACCCTTCaptureZone_execSetInitialZoneState_Parms
{
};

struct ACCCTTCaptureZone_execGetItsStateDebugString_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execGetItsStateTeam_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execGetItsState_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execSetItsState_Parms
{
	unsigned char NewState;
	int NewOwningTeam;
};

struct ACCCTTCaptureZone_execStaticSortZonesByIndex_Parms
{
	TArray< class ACCCTTCaptureZone* > Zones; // CPF_OutParm
};

struct ACCCTTCaptureZone_execStaticResursiveCalcZoneDepth_Parms
{
	class ACCCTTCaptureZone* zone;
	int CurrentDepth;
};// FUNC_Final

struct ACCCTTCaptureZone_execStaticCalcZoneIndices_Parms
{
	TArray< class ACCCTTCaptureZone* > Zones; // CPF_OutParm
};

struct ACCCTTCaptureZone_execDrawAdjacentZonesDebug_Parms
{
};

struct ACCCTTCaptureZone_execFindAdjacentZones_Parms
{
};

struct ACCCTTCaptureZone_execStaticCalcAllZonesOnLevel_Parms
{
	class AActor* Act;
	TArray< class ACCCTTCaptureZone* > Zones; // CPF_OutParm
};

struct ACCCTTCaptureZone_execGetZoneDesc_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execGetZoneIndex_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCTTCaptureZone_execSetZoneIndex_Parms
{
	int NewZoneIndex;
};

struct ACCCTTCaptureZone_execTick_Parms
{
	float DeltaTime;
};

struct ACCCTTCaptureZone_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCCTTCaptureZone_execDestroyed_Parms
{
};

struct ACCCTTCaptureZone_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x2B8 - 0x33C)
class ACCCTTCaptureZone : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_PlacableCTZ;  // 0x02B8 (0x0004)
	struct FName                                       AdjacencyTag;                                // 0x02BC (0x0008)
	TArray< struct FName >                             AdjacentZoneTags;                            // 0x02C4 (0x000C)
	int                                                InitialOwnerTeamIndex;                       // 0x02D0 (0x0004)
	int                                                CapturePlayerScore;                          // 0x02D4 (0x0004)
	int                                                CapturedScoreTick;                           // 0x02D8 (0x0004)
	int                                                CapturedGameScoreIncrement;                  // 0x02DC (0x0004)
	int                                                CapturedPlayersScoreIncrement;               // 0x02E0 (0x0004)
	int                                                CapturedOnPointPlayersScoreIncrement;        // 0x02E4 (0x0004)
	int                                                LoosingPointTime;                            // 0x02E8 (0x0004)
	int                                                ZoneDepth;                                   // 0x02EC (0x0004)
	int                                                ZoneIndex;                                   // 0x02F0 (0x0004)
	TArray< class ACCCTTCaptureZone* >                 AdjacentZones;                               // 0x02F4 (0x000C)
	void*                                              CurrentPlayersInZone;                        // 0x0300 (0x0004)
	struct FZoneStateInfo                              ZoneStateInfoStruct;                         // 0x0304 (0x0008)
	float                                              ScoreTickTimeLeft;                           // 0x030C (0x0004)
	float                                              LoosingPointTimeLeft;                        // 0x0310 (0x0004)
	struct FReplicatedZoneStateInfo                    ReplicatedZoneStateInfoStruct;               // 0x0314 (0x0004)
	struct FAvailabilityZoneInfo                       ReplicatedAvailabilityZoneInfoStruct;        // 0x0318 (0x0004)
	void*                                              StaticMeshComp;                              // 0x031C (0x0004)
	void*                                              LightEnv;                                    // 0x0320 (0x0004)
	class UMaterialInterface*                          RenderMaterial;                              // 0x0324 (0x0004)
	void*                                              RenderMaterialInst;                          // 0x0328 (0x0004)
	class UMaterialInterface*                          OutOfZoneMaterial;                           // 0x032C (0x0004)
	void*                                              OutOfZoneMaterialInst;                       // 0x0330 (0x0004)
	int                                                OutOfZoneMarkerSize;                         // 0x0334 (0x0004)
	class UTexture2D*                                  Face;                                        // 0x0338 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTTCaptureZone" );

		return ClassPointer;
	};

public:
	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdateRadarPresentation" );

		ACCCTTCaptureZone_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

	void DoSetMaterialVectorParameterValue ( float Val )
	{
		static UFunction* pfnDoSetMaterialVectorParameterValue = NULL;

		if ( !pfnDoSetMaterialVectorParameterValue )
			pfnDoSetMaterialVectorParameterValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.DoSetMaterialVectorParameterValue" );

		ACCCTTCaptureZone_execDoSetMaterialVectorParameterValue_Parms DoSetMaterialVectorParameterValue_Parms;
		DoSetMaterialVectorParameterValue_Parms.Val = Val;

		this->ProcessEvent( pfnDoSetMaterialVectorParameterValue, &DoSetMaterialVectorParameterValue_Parms, NULL );
	};

	void UpdateMaterialParameterValue ()
	{
		static UFunction* pfnUpdateMaterialParameterValue = NULL;

		if ( !pfnUpdateMaterialParameterValue )
			pfnUpdateMaterialParameterValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdateMaterialParameterValue" );

		ACCCTTCaptureZone_execUpdateMaterialParameterValue_Parms UpdateMaterialParameterValue_Parms;

		this->ProcessEvent( pfnUpdateMaterialParameterValue, &UpdateMaterialParameterValue_Parms, NULL );
	};

	void* CreateMaterialInstance ( class UMaterialInterface* ParentMaterial )
	{
		static UFunction* pfnCreateMaterialInstance = NULL;

		if ( !pfnCreateMaterialInstance )
			pfnCreateMaterialInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.CreateMaterialInstance" );

		ACCCTTCaptureZone_execCreateMaterialInstance_Parms CreateMaterialInstance_Parms;
		CreateMaterialInstance_Parms.ParentMaterial = ParentMaterial;

		this->ProcessEvent( pfnCreateMaterialInstance, &CreateMaterialInstance_Parms, NULL );

		return CreateMaterialInstance_Parms.ReturnValue;
	};

	void InitVisual ()
	{
		static UFunction* pfnInitVisual = NULL;

		if ( !pfnInitVisual )
			pfnInitVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.InitVisual" );

		ACCCTTCaptureZone_execInitVisual_Parms InitVisual_Parms;

		this->ProcessEvent( pfnInitVisual, &InitVisual_Parms, NULL );
	};

	bool eventGetIsAvailableForTeamPublic ( int TeamIndex )
	{
		static UFunction* pfnGetIsAvailableForTeamPublic = NULL;

		if ( !pfnGetIsAvailableForTeamPublic )
			pfnGetIsAvailableForTeamPublic = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetIsAvailableForTeamPublic" );

		ACCCTTCaptureZone_eventGetIsAvailableForTeamPublic_Parms GetIsAvailableForTeamPublic_Parms;
		GetIsAvailableForTeamPublic_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnGetIsAvailableForTeamPublic, &GetIsAvailableForTeamPublic_Parms, NULL );

		return GetIsAvailableForTeamPublic_Parms.ReturnValue;
	};

	bool AnyAdjacentZoneOwnedByTeam ( int TeamIndex )
	{
		static UFunction* pfnAnyAdjacentZoneOwnedByTeam = NULL;

		if ( !pfnAnyAdjacentZoneOwnedByTeam )
			pfnAnyAdjacentZoneOwnedByTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.AnyAdjacentZoneOwnedByTeam" );

		ACCCTTCaptureZone_execAnyAdjacentZoneOwnedByTeam_Parms AnyAdjacentZoneOwnedByTeam_Parms;
		AnyAdjacentZoneOwnedByTeam_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnAnyAdjacentZoneOwnedByTeam, &AnyAdjacentZoneOwnedByTeam_Parms, NULL );

		return AnyAdjacentZoneOwnedByTeam_Parms.ReturnValue;
	};

	bool IsAvailableForTeam ( int TeamIndex )
	{
		static UFunction* pfnIsAvailableForTeam = NULL;

		if ( !pfnIsAvailableForTeam )
			pfnIsAvailableForTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.IsAvailableForTeam" );

		ACCCTTCaptureZone_execIsAvailableForTeam_Parms IsAvailableForTeam_Parms;
		IsAvailableForTeam_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnIsAvailableForTeam, &IsAvailableForTeam_Parms, NULL );

		return IsAvailableForTeam_Parms.ReturnValue;
	};

	void GetTouchingPawns ( TArray< class ACCInstancePawn* >* TouchingPawns )
	{
		static UFunction* pfnGetTouchingPawns = NULL;

		if ( !pfnGetTouchingPawns )
			pfnGetTouchingPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetTouchingPawns" );

		ACCCTTCaptureZone_execGetTouchingPawns_Parms GetTouchingPawns_Parms;

		pfnGetTouchingPawns->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTouchingPawns, &GetTouchingPawns_Parms, NULL );
		pfnGetTouchingPawns->FunctionFlags |= 0x400;

		if ( TouchingPawns )
			*TouchingPawns = GetTouchingPawns_Parms.TouchingPawns; // CPF_OutParm
	};

	bool IsPlayerAbleToCapture ( class AActor* Player )
	{
		static UFunction* pfnIsPlayerAbleToCapture = NULL;

		if ( !pfnIsPlayerAbleToCapture )
			pfnIsPlayerAbleToCapture = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.IsPlayerAbleToCapture" );

		ACCCTTCaptureZone_execIsPlayerAbleToCapture_Parms IsPlayerAbleToCapture_Parms;
		IsPlayerAbleToCapture_Parms.Player = Player;

		this->ProcessEvent( pfnIsPlayerAbleToCapture, &IsPlayerAbleToCapture_Parms, NULL );

		return IsPlayerAbleToCapture_Parms.ReturnValue;
	};

	void* GetPlayersInsideMe ()
	{
		static UFunction* pfnGetPlayersInsideMe = NULL;

		if ( !pfnGetPlayersInsideMe )
			pfnGetPlayersInsideMe = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetPlayersInsideMe" );

		ACCCTTCaptureZone_execGetPlayersInsideMe_Parms GetPlayersInsideMe_Parms;

		this->ProcessEvent( pfnGetPlayersInsideMe, &GetPlayersInsideMe_Parms, NULL );

		return GetPlayersInsideMe_Parms.ReturnValue;
	};

	void CalcPlayersInZoneDiff ( void* OldPlayersIZ, void* NewPlayersIZ, class UObject* InOuter, void** RemovedPlayersIZ, void** AddedPlayersIZ )
	{
		static UFunction* pfnCalcPlayersInZoneDiff = NULL;

		if ( !pfnCalcPlayersInZoneDiff )
			pfnCalcPlayersInZoneDiff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.CalcPlayersInZoneDiff" );

		ACCCTTCaptureZone_execCalcPlayersInZoneDiff_Parms CalcPlayersInZoneDiff_Parms;
		CalcPlayersInZoneDiff_Parms.OldPlayersIZ = OldPlayersIZ;
		CalcPlayersInZoneDiff_Parms.NewPlayersIZ = NewPlayersIZ;
		CalcPlayersInZoneDiff_Parms.InOuter = InOuter;

		this->ProcessEvent( pfnCalcPlayersInZoneDiff, &CalcPlayersInZoneDiff_Parms, NULL );

		if ( RemovedPlayersIZ )
			*RemovedPlayersIZ = CalcPlayersInZoneDiff_Parms.RemovedPlayersIZ; // CPF_OutParm
		if ( AddedPlayersIZ )
			*AddedPlayersIZ = CalcPlayersInZoneDiff_Parms.AddedPlayersIZ; // CPF_OutParm
	};

	void* GetPlayersInZone ()
	{
		static UFunction* pfnGetPlayersInZone = NULL;

		if ( !pfnGetPlayersInZone )
			pfnGetPlayersInZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetPlayersInZone" );

		ACCCTTCaptureZone_execGetPlayersInZone_Parms GetPlayersInZone_Parms;

		this->ProcessEvent( pfnGetPlayersInZone, &GetPlayersInZone_Parms, NULL );

		return GetPlayersInZone_Parms.ReturnValue;
	};

	void* UpdatePlayersInZone ( void** RemovedPlayersInZone, void** AddedPlayersInZone )
	{
		static UFunction* pfnUpdatePlayersInZone = NULL;

		if ( !pfnUpdatePlayersInZone )
			pfnUpdatePlayersInZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdatePlayersInZone" );

		ACCCTTCaptureZone_execUpdatePlayersInZone_Parms UpdatePlayersInZone_Parms;

		this->ProcessEvent( pfnUpdatePlayersInZone, &UpdatePlayersInZone_Parms, NULL );

		if ( RemovedPlayersInZone )
			*RemovedPlayersInZone = UpdatePlayersInZone_Parms.RemovedPlayersInZone; // CPF_OutParm
		if ( AddedPlayersInZone )
			*AddedPlayersInZone = UpdatePlayersInZone_Parms.AddedPlayersInZone; // CPF_OutParm

		return UpdatePlayersInZone_Parms.ReturnValue;
	};

	void RemoveAllPlayersInZone ( void** RemovedPlayersInZone )
	{
		static UFunction* pfnRemoveAllPlayersInZone = NULL;

		if ( !pfnRemoveAllPlayersInZone )
			pfnRemoveAllPlayersInZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.RemoveAllPlayersInZone" );

		ACCCTTCaptureZone_execRemoveAllPlayersInZone_Parms RemoveAllPlayersInZone_Parms;

		this->ProcessEvent( pfnRemoveAllPlayersInZone, &RemoveAllPlayersInZone_Parms, NULL );

		if ( RemovedPlayersInZone )
			*RemovedPlayersInZone = RemoveAllPlayersInZone_Parms.RemovedPlayersInZone; // CPF_OutParm
	};

	void ClearPlayersInZone ()
	{
		static UFunction* pfnClearPlayersInZone = NULL;

		if ( !pfnClearPlayersInZone )
			pfnClearPlayersInZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.ClearPlayersInZone" );

		ACCCTTCaptureZone_execClearPlayersInZone_Parms ClearPlayersInZone_Parms;

		this->ProcessEvent( pfnClearPlayersInZone, &ClearPlayersInZone_Parms, NULL );
	};

	void UpdateAvailabilityZoneInfo ()
	{
		static UFunction* pfnUpdateAvailabilityZoneInfo = NULL;

		if ( !pfnUpdateAvailabilityZoneInfo )
			pfnUpdateAvailabilityZoneInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdateAvailabilityZoneInfo" );

		ACCCTTCaptureZone_execUpdateAvailabilityZoneInfo_Parms UpdateAvailabilityZoneInfo_Parms;

		this->ProcessEvent( pfnUpdateAvailabilityZoneInfo, &UpdateAvailabilityZoneInfo_Parms, NULL );
	};

	void UpdateAvailabilityInfoForAllZones ()
	{
		static UFunction* pfnUpdateAvailabilityInfoForAllZones = NULL;

		if ( !pfnUpdateAvailabilityInfoForAllZones )
			pfnUpdateAvailabilityInfoForAllZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdateAvailabilityInfoForAllZones" );

		ACCCTTCaptureZone_execUpdateAvailabilityInfoForAllZones_Parms UpdateAvailabilityInfoForAllZones_Parms;

		this->ProcessEvent( pfnUpdateAvailabilityInfoForAllZones, &UpdateAvailabilityInfoForAllZones_Parms, NULL );
	};

	void ReplicatedZoneStateInfoStructChanged ()
	{
		static UFunction* pfnReplicatedZoneStateInfoStructChanged = NULL;

		if ( !pfnReplicatedZoneStateInfoStructChanged )
			pfnReplicatedZoneStateInfoStructChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.ReplicatedZoneStateInfoStructChanged" );

		ACCCTTCaptureZone_execReplicatedZoneStateInfoStructChanged_Parms ReplicatedZoneStateInfoStructChanged_Parms;

		this->ProcessEvent( pfnReplicatedZoneStateInfoStructChanged, &ReplicatedZoneStateInfoStructChanged_Parms, NULL );
	};

	void UpdateReplicatedZoneStateInfo ()
	{
		static UFunction* pfnUpdateReplicatedZoneStateInfo = NULL;

		if ( !pfnUpdateReplicatedZoneStateInfo )
			pfnUpdateReplicatedZoneStateInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.UpdateReplicatedZoneStateInfo" );

		ACCCTTCaptureZone_execUpdateReplicatedZoneStateInfo_Parms UpdateReplicatedZoneStateInfo_Parms;

		this->ProcessEvent( pfnUpdateReplicatedZoneStateInfo, &UpdateReplicatedZoneStateInfo_Parms, NULL );
	};

	void SetInitialZoneState ()
	{
		static UFunction* pfnSetInitialZoneState = NULL;

		if ( !pfnSetInitialZoneState )
			pfnSetInitialZoneState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.SetInitialZoneState" );

		ACCCTTCaptureZone_execSetInitialZoneState_Parms SetInitialZoneState_Parms;

		this->ProcessEvent( pfnSetInitialZoneState, &SetInitialZoneState_Parms, NULL );
	};

	struct FString GetItsStateDebugString ()
	{
		static UFunction* pfnGetItsStateDebugString = NULL;

		if ( !pfnGetItsStateDebugString )
			pfnGetItsStateDebugString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetItsStateDebugString" );

		ACCCTTCaptureZone_execGetItsStateDebugString_Parms GetItsStateDebugString_Parms;

		this->ProcessEvent( pfnGetItsStateDebugString, &GetItsStateDebugString_Parms, NULL );

		return GetItsStateDebugString_Parms.ReturnValue;
	};

	int GetItsStateTeam ()
	{
		static UFunction* pfnGetItsStateTeam = NULL;

		if ( !pfnGetItsStateTeam )
			pfnGetItsStateTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetItsStateTeam" );

		ACCCTTCaptureZone_execGetItsStateTeam_Parms GetItsStateTeam_Parms;

		this->ProcessEvent( pfnGetItsStateTeam, &GetItsStateTeam_Parms, NULL );

		return GetItsStateTeam_Parms.ReturnValue;
	};

	unsigned char GetItsState ()
	{
		static UFunction* pfnGetItsState = NULL;

		if ( !pfnGetItsState )
			pfnGetItsState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetItsState" );

		ACCCTTCaptureZone_execGetItsState_Parms GetItsState_Parms;

		this->ProcessEvent( pfnGetItsState, &GetItsState_Parms, NULL );

		return GetItsState_Parms.ReturnValue;
	};

	void SetItsState ( unsigned char NewState, int NewOwningTeam )
	{
		static UFunction* pfnSetItsState = NULL;

		if ( !pfnSetItsState )
			pfnSetItsState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.SetItsState" );

		ACCCTTCaptureZone_execSetItsState_Parms SetItsState_Parms;
		SetItsState_Parms.NewState = NewState;
		SetItsState_Parms.NewOwningTeam = NewOwningTeam;

		this->ProcessEvent( pfnSetItsState, &SetItsState_Parms, NULL );
	};

	void StaticSortZonesByIndex ( TArray< class ACCCTTCaptureZone* >* Zones )
	{
		static UFunction* pfnStaticSortZonesByIndex = NULL;

		if ( !pfnStaticSortZonesByIndex )
			pfnStaticSortZonesByIndex = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.StaticSortZonesByIndex" );

		ACCCTTCaptureZone_execStaticSortZonesByIndex_Parms StaticSortZonesByIndex_Parms;

		this->ProcessEvent( pfnStaticSortZonesByIndex, &StaticSortZonesByIndex_Parms, NULL );

		if ( Zones )
			*Zones = StaticSortZonesByIndex_Parms.Zones; // CPF_OutParm
	};

	void StaticResursiveCalcZoneDepth ( class ACCCTTCaptureZone* zone, int CurrentDepth )
	{
		static UFunction* pfnStaticResursiveCalcZoneDepth = NULL;

		if ( !pfnStaticResursiveCalcZoneDepth )
			pfnStaticResursiveCalcZoneDepth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.StaticResursiveCalcZoneDepth" );

		ACCCTTCaptureZone_execStaticResursiveCalcZoneDepth_Parms StaticResursiveCalcZoneDepth_Parms;
		StaticResursiveCalcZoneDepth_Parms.zone = zone;
		StaticResursiveCalcZoneDepth_Parms.CurrentDepth = CurrentDepth;

		this->ProcessEvent( pfnStaticResursiveCalcZoneDepth, &StaticResursiveCalcZoneDepth_Parms, NULL );
	};

	void StaticCalcZoneIndices ( TArray< class ACCCTTCaptureZone* >* Zones )
	{
		static UFunction* pfnStaticCalcZoneIndices = NULL;

		if ( !pfnStaticCalcZoneIndices )
			pfnStaticCalcZoneIndices = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.StaticCalcZoneIndices" );

		ACCCTTCaptureZone_execStaticCalcZoneIndices_Parms StaticCalcZoneIndices_Parms;

		this->ProcessEvent( pfnStaticCalcZoneIndices, &StaticCalcZoneIndices_Parms, NULL );

		if ( Zones )
			*Zones = StaticCalcZoneIndices_Parms.Zones; // CPF_OutParm
	};

	void DrawAdjacentZonesDebug ()
	{
		static UFunction* pfnDrawAdjacentZonesDebug = NULL;

		if ( !pfnDrawAdjacentZonesDebug )
			pfnDrawAdjacentZonesDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.DrawAdjacentZonesDebug" );

		ACCCTTCaptureZone_execDrawAdjacentZonesDebug_Parms DrawAdjacentZonesDebug_Parms;

		this->ProcessEvent( pfnDrawAdjacentZonesDebug, &DrawAdjacentZonesDebug_Parms, NULL );
	};

	void FindAdjacentZones ()
	{
		static UFunction* pfnFindAdjacentZones = NULL;

		if ( !pfnFindAdjacentZones )
			pfnFindAdjacentZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.FindAdjacentZones" );

		ACCCTTCaptureZone_execFindAdjacentZones_Parms FindAdjacentZones_Parms;

		this->ProcessEvent( pfnFindAdjacentZones, &FindAdjacentZones_Parms, NULL );
	};

	void StaticCalcAllZonesOnLevel ( class AActor* Act, TArray< class ACCCTTCaptureZone* >* Zones )
	{
		static UFunction* pfnStaticCalcAllZonesOnLevel = NULL;

		if ( !pfnStaticCalcAllZonesOnLevel )
			pfnStaticCalcAllZonesOnLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.StaticCalcAllZonesOnLevel" );

		ACCCTTCaptureZone_execStaticCalcAllZonesOnLevel_Parms StaticCalcAllZonesOnLevel_Parms;
		StaticCalcAllZonesOnLevel_Parms.Act = Act;

		this->ProcessEvent( pfnStaticCalcAllZonesOnLevel, &StaticCalcAllZonesOnLevel_Parms, NULL );

		if ( Zones )
			*Zones = StaticCalcAllZonesOnLevel_Parms.Zones; // CPF_OutParm
	};

	struct FString GetZoneDesc ()
	{
		static UFunction* pfnGetZoneDesc = NULL;

		if ( !pfnGetZoneDesc )
			pfnGetZoneDesc = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetZoneDesc" );

		ACCCTTCaptureZone_execGetZoneDesc_Parms GetZoneDesc_Parms;

		this->ProcessEvent( pfnGetZoneDesc, &GetZoneDesc_Parms, NULL );

		return GetZoneDesc_Parms.ReturnValue;
	};

	int GetZoneIndex ()
	{
		static UFunction* pfnGetZoneIndex = NULL;

		if ( !pfnGetZoneIndex )
			pfnGetZoneIndex = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.GetZoneIndex" );

		ACCCTTCaptureZone_execGetZoneIndex_Parms GetZoneIndex_Parms;

		this->ProcessEvent( pfnGetZoneIndex, &GetZoneIndex_Parms, NULL );

		return GetZoneIndex_Parms.ReturnValue;
	};

	void SetZoneIndex ( int NewZoneIndex )
	{
		static UFunction* pfnSetZoneIndex = NULL;

		if ( !pfnSetZoneIndex )
			pfnSetZoneIndex = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.SetZoneIndex" );

		ACCCTTCaptureZone_execSetZoneIndex_Parms SetZoneIndex_Parms;
		SetZoneIndex_Parms.NewZoneIndex = NewZoneIndex;

		this->ProcessEvent( pfnSetZoneIndex, &SetZoneIndex_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.Tick" );

		ACCCTTCaptureZone_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.ReplicatedEvent" );

		ACCCTTCaptureZone_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.Destroyed" );

		ACCCTTCaptureZone_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTCaptureZone.PostBeginPlay" );

		ACCCTTCaptureZone_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCCTTCaptureZone::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif