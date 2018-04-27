/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCInstanceController.h
// Date: 06/16/2011 @ 05:19:41.653
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_ACTIONBAR_ABILITIES              class'Yakalayer'.const.ContainerSize_ActionBarSize
#define Const_MAX_ACTIONBAR_DRUGS                  class'Yakalayer'.const.ContainerSize_DrugsActionBarSize
#define Const_MAX_ACTIONBAR_REGULAR_ABILITIES      class'Yakalayer'.const.ContainerSize_AbilitiesActionBarSize

enum ActionBarSlotState_Phase
{
	ASSP_Active = 0,
	ASSP_Inactive = 1,
	ASSP_Cooldown = 2,
	ASSP_Preparing = 3,
	ASSP_Prepared = 4,
	ASSP_Affecting = 5,
	ASSP_MAX = 6
};

enum ESniperVisionState
{
	SVS_Idle = 0,
	SVS_Preparing = 1,
	SVS_Affecting = 2,
	SVS_MAX = 3
};

struct ACCInstanceController_execToggleTriangleBlendDebug_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetTriangleBlendParams_Parms
{
	float InTriangleMovingCurve;
	float InTriangleMovingStartSpeed;
	float InTriangleMovingMiddleSpeed;
	float InTriangleMovingFinishSpeed;
};// FUNC_Exec

struct ACCInstanceController_execGetTriangleBlendDDDActor_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execEndLevelsStream_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStartLevelsStream_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGetFNameTotalCount_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGetFNameTotalCountNative_Parms
{
	int NumAnsiNames; // CPF_OutParm
	int NumUnicodeNames; // CPF_OutParm
	int NamesLength; // CPF_OutParm
};// FUNC_Native

struct ACCInstanceController_execttForceBotsToAttack_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execttServerForceBotsToAttack_Parms
{
};

struct ACCInstanceController_execStripGirlRemoveUpperClothes_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStripGirlFinishVipEx_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStripGirlStartVIPEx_Parms
{
	int VisualId;
	int ProgramId;
};// FUNC_Exec

struct ACCInstanceController_execStripGirlStartVIP_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStripGirlSetVisual_Parms
{
	int GirlIndex;
	int VisualId;
};// FUNC_Exec

struct ACCInstanceController_execStripGirlSetProgram_Parms
{
	int GirlIndex;
	int Dance1;
	int Dance2;
	int Dance3;
};// FUNC_Exec

struct ACCInstanceController_execRequestDemoRecordStop_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerRequestDemoRecordStop_Parms
{
};

struct ACCInstanceController_execRequestDemoRecord_Parms
{
	struct FString demoname;
};// FUNC_Exec

struct ACCInstanceController_execServerRequestDemoRecord_Parms
{
	struct FString demoname;
};

struct ACCInstanceController_execdbgPrintWeaponPresetsGRTP_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execReSaveWeaponPresets_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerJump_Parms
{
	struct FVector VelocityDelta;
};// FUNC_Final

struct ACCInstanceController_execClientJump_Parms
{
	struct FVector VelocityDelta;
};// FUNC_Final

struct ACCInstanceController_execDoJump_Parms
{
	struct FVector VelocityDelta;
};

struct ACCInstanceController_execfwd_jmp_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execjmp_Parms
{
	float X;
	float Y;
	float Z;
};// FUNC_Exec

struct ACCInstanceController_execServerReloadWeaponPresets_Parms
{
};

struct ACCInstanceController_execReloadWeaponPresets_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execReloadSpreadPresets_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDoStartGrenadeRecoil_Parms
{
	float DamageScale;
};

struct ACCInstanceController_execTestGrenadeRecoil_Parms
{
	float DamageScale;
};// FUNC_Exec

struct ACCInstanceController_execTestDamageRecoilExEnd_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execTestDamageRecoilEx_Parms
{
	float Interval;
};// FUNC_Exec

struct ACCInstanceController_execDoAddDamageRecoil_Parms
{
	float DamageScale;
	struct FVector PawnSpaceToShooterDir;
};

struct ACCInstanceController_execTestDamageRecoil_Parms
{
	float DamageScale;
	float DirX;
	float DirY;
	float DirZ;
};// FUNC_Exec

struct ACCInstanceController_execReloadRecoilPresets_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execResetGIPVisualParams_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetGIPVisualParam_Parms
{
	struct FString ParamName;
	struct FString ParamValue;
};// FUNC_Exec

struct ACCInstanceController_execServerRetreiveGIPDamageParams_Parms
{
};

struct ACCInstanceController_execSendGIPDamageParamsToAll_Parms
{
};

struct ACCInstanceController_execServerResetGIPDamageParams_Parms
{
};

struct ACCInstanceController_execServerSetGIPDamageParam_Parms
{
	struct FString ParamName;
	struct FString ParamValue;
};

struct ACCInstanceController_eventGetGIP_HPModifier_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstanceController_execClientSetGIPDamageParams_Parms
{
	struct FGIPDamageParams GIPDamageParams;
};

struct ACCInstanceController_execResetGIPDamageParams_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetGIPDamageParam_Parms
{
	struct FString ParamName;
	struct FString ParamValue;
};// FUNC_Exec

struct ACCInstanceController_execGetLocalPC_Parms
{
	class ACCInstanceController* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_eventGetTheControllerID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstanceController_execClientForceSetTheControllerID_Parms
{
	int NewTheControllerID;
};

struct ACCInstanceController_execGenerateTheControllerID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execClientDeliverRPCStackStringLine_Parms
{
	int NetRecursionLevel;
	int SessionId;
	int LineID;
	struct FSSOCallerInfo Dest;
	struct FString StackStringLine;
	unsigned long bFinish : 1;
};

struct ACCInstanceController_execServerDeliverRPCStackStringLine_Parms
{
	int NetRecursionLevel;
	int SessionId;
	int LineID;
	struct FSSOCallerInfo Dest;
	struct FString StackStringLine;
	unsigned long bFinish : 1;
};

struct ACCInstanceController_execClientGetRPCScriptStack_Parms
{
	int NetRecursionLevel;
	int SessionId;
	int LineID;
	struct FSSOCallerInfo FinalDest;
	int OutcomingRPCId;
};

struct ACCInstanceController_execServerGetRPCScriptStack_Parms
{
	int NetRecursionLevel;
	int SessionId;
	int LineID;
	struct FSSOCallerInfo FinalDest;
	int OutcomingRPCId;
};

struct ACCInstanceController_execclient_EnablePlayerForQuestZone_Parms
{
	void* zone;
};// FUNC_Final

struct ACCInstanceController_execserver_EnablePlayerForQuestZone_Parms
{
	void* zone;
};

struct ACCInstanceController_execclient_DisablePlayerForQuestZone_Parms
{
	void* zone;
	unsigned long bVisited : 1;
};

struct ACCInstanceController_execserver_DisablePlayerForQuestZone_Parms
{
	void* zone;
};

struct ACCInstanceController_execttSetDrugInjectorLevel_Parms
{
	int Level;
};// FUNC_Exec

struct ACCInstanceController_execServerttSetDrugInjectorLevel_Parms
{
	int Level;
};

struct ACCInstanceController_execSetShowingAllPawns_Parms
{
	float VisibleStageTime;
	float InvisibleStageTime;
};

struct ACCInstanceController_execttGetServerMsAndFps_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerttGetServerMsAndFps_Parms
{
};

struct ACCInstanceController_execGetAllObjectsInternal_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
	TArray< struct FString > StringList; // CPF_OutParm
};// FUNC_Native

struct ACCInstanceController_execGetAllActorsListInternal_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
	TArray< struct FString > StringList; // CPF_OutParm
};// FUNC_Native

struct ACCInstanceController_execServerPrintAllObjects_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};

struct ACCInstanceController_execServerPrintAllActors_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};

struct ACCInstanceController_execPrintAllObjects_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};

struct ACCInstanceController_execPrintAllActors_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};

struct ACCInstanceController_execccdebug_ServerPrintAllObjects_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};// FUNC_Exec

struct ACCInstanceController_execccdebug_ServerPrintAllActors_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};// FUNC_Exec

struct ACCInstanceController_execccdebug_PrintAllObjects_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};// FUNC_Exec

struct ACCInstanceController_execccdebug_PrintAllActors_Parms
{
	struct FString Filter;
	int SortBy;
	int SortOrder;
};// FUNC_Exec

struct ACCInstanceController_execNotifyHUD_AssistKillerInfo_Parms
{
	struct FKillerInfo Info;
};

struct ACCInstanceController_execNotifyHUD_KillerKillerInfo_Parms
{
	struct FKillerInfo Info;
};

struct ACCInstanceController_execNotifyHUD_SelfKillerInfo_Parms
{
	struct FKillerInfo Info;
};

struct ACCInstanceController_execRocketDebug_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGetRocketQuickStatsObject_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execServerSpiralRocketsQuickStatsDebug_Parms
{
};

struct ACCInstanceController_execSpiralRocketsQuickStatsDebug_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execEnableFireActionInputTimer_Parms
{
};

struct ACCInstanceController_execTimedEnableActionManagerInput_Parms
{
};

struct ACCInstanceController_execDisableActionManagerInput_Parms
{
};

struct ACCInstanceController_execGetPawnBoneInfo_Location_Parms
{
	class ACCInstancePawn* P;
	struct FName BoneName;
	struct FVector Loc; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execServerSetPawnBoneInfo_Parms
{
	class ACCInstancePawn* P;
	struct FName BoneNames[ 5 ];
	struct FVector BoneLocations[ 5 ];
};

struct ACCInstanceController_execReplicatePawnBoneInfo_Parms
{
	class ACCInstancePawn* P;
	TArray< struct FName > BoneNames; // CPF_OutParm
};

struct ACCInstanceController_execSetSpectatorSpeed_Parms
{
	float NewSpeed;
};// FUNC_Exec

struct ACCInstanceController_execaStrafeInstance_Parms
{
	float Speed;
	unsigned long isDown : 1;
};// FUNC_Exec

struct ACCInstanceController_execaBaseYInstance_Parms
{
	float Speed;
	unsigned long isDown : 1;
};// FUNC_Exec

struct ACCInstanceController_execShowFov_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execShowSens_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGetAreGibsEnabled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execToggleGibs_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnClientFinishedLoading_Parms
{
};

struct ACCInstanceController_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct ACCInstanceController_execClientRequestNewLocation_Parms
{
};

struct ACCInstanceController_execClientForcePositionFromServer_Parms
{
	struct FVector Loc;
};

struct ACCInstanceController_execServerRetrieveClientLocation_Parms
{
	struct FVector Loc;
	float ClientPawnGroundSpeed;
	struct FName ClientStateName;
};

struct ACCInstanceController_eventSendClientAdjustment_Parms
{
};// FUNC_Event

struct ACCInstanceController_execTestGibsVideo_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execChangeTeam_Parms
{
	struct FString TeamName;
};// FUNC_Exec

struct ACCInstanceController_execSwitchTeam_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execReceiveCombatLogMessage_Parms
{
	class UClass* Message;
	int Switch;
	struct FAdditionalParam Param;
};

struct ACCInstanceController_execPrevWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execNextWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execAddPlaceableItemCount_Parms
{
	int AddCount;
	void* Ability;
};

struct ACCInstanceController_execOnPlaceableItemExplode_Parms
{
	class ACCPlaceableItem* PlaceableItem;
};

struct ACCInstanceController_execOnPlaceableItemSpawn_Parms
{
	class ACCPlaceableItem* PlaceableItem;
};

struct ACCInstanceController_execReplicateRemainingTime_Parms
{
	int RemainingTime;
};

struct ACCInstanceController_execToggleScoreNotify_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execEventReceivedQuestItem_Parms
{
	int ItemType;
	int ItemLevel;
	int ItemCount;
};

struct ACCInstanceController_eventSetFeat_Parms
{
	unsigned char PFT;
	int Amount;
};// FUNC_Event

struct ACCInstanceController_execGetDefaultConnectionTimeout_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execGetConnectionTimeout_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execSetConnectionTimeoutInternal_Parms
{
	float NewTimeout;
};// FUNC_Final FUNC_Native

struct ACCInstanceController_execIsRemoteControlShown_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execSetConnectionTimeout_Parms
{
	float NewTimeout;
};

struct ACCInstanceController_execServerSetConnectionTimeout_Parms
{
	float NewTimeout;
};

struct ACCInstanceController_execDoSetConnectionTimeout_Parms
{
	float NewTimeout;
};

struct ACCInstanceController_execSpawnSuicideGrenade_Parms
{
};

struct ACCInstanceController_execSetSuicideGrenade_Parms
{
	unsigned long bspawn : 1;
	void* Preset;
};

struct ACCInstanceController_execsgspawn_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execRequestSaveAbilityPackage_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerRequestSaveAbilityPackage_Parms
{
};

struct ACCInstanceController_execClientSaveAbilityPackage_Parms
{
	struct FString pkgName;
};

struct ACCInstanceController_execCopyAbility_Parms
{
	struct FString pkgName;
	struct FString AbilityName;
};// FUNC_Exec

struct ACCInstanceController_execMergePackages_Parms
{
	struct FString pkgName;
};// FUNC_Exec

struct ACCInstanceController_execPlayDust_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCameraEffect_PlayEffect_Parms
{
	struct FString EffectName;
	float BlendInTime;
	float StayAliveTime;
	float BlendOutTime;
};

struct ACCInstanceController_execCameraEffect_PlayEffectSelf_Parms
{
	struct FString EffectName;
	float StayAliveTime;
};

struct ACCInstanceController_execServerActivateControlledMine_Parms
{
};

struct ACCInstanceController_execServerTestPlayWeaponVisualGetting_Parms
{
};

struct ACCInstanceController_execServerTestPlayWeaponVisualHiding_Parms
{
};

struct ACCInstanceController_exectestPlayWeaponVisualGetting_Parms
{
};// FUNC_Exec

struct ACCInstanceController_exectestPlayWeaponVisualHiding_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerReceiveEnemyHuntSimulationInfo_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FEnemyHuntSimulationInfo EnemyInfo;
};

struct ACCInstanceController_execClientReceiveEnemyHuntSimulationInfo_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FEnemyHuntSimulationInfo EnemyInfo;
};

struct ACCInstanceController_execServerReceiveSplineSimulationInfo_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
};

struct ACCInstanceController_execClientReceiveSplineSimulationInfo_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
};

struct ACCInstanceController_execServerReceiveSplineSimulationInfoPair_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
	struct FSplineSimulationInfo NextSplineInfo;
};

struct ACCInstanceController_execClientReceiveSplineSimulationInfoPair_Parms
{
	int SimulationID;
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
	struct FSplineSimulationInfo NextSplineInfo;
};

struct ACCInstanceController_execClientReceivePawnLastTakeHitInfo_Parms
{
	class ACCInstancePawn* P;
	struct FLastTakeHitInfo LastTakeHitInfoStruct;
};

struct ACCInstanceController_execReplicatePawnLastTakeHitInfoToAll_Parms
{
	class ACCInstancePawn* P;
	struct FLastTakeHitInfo LastTakeHitInfoStruct;
};

struct ACCInstanceController_execClientReceiveSpawnShotOffGib_Parms
{
	class ACCInstancePawn* P;
	void* GibPreset;
	struct FVector ShotOffMomentum;
};

struct ACCInstanceController_execReplicateSpawnShotOffGibToAll_Parms
{
	class ACCInstancePawn* P;
	void* GibPreset;
	struct FVector ShotOffMomentum;
};

struct ACCInstanceController_execClientReceiveSpawnGibsForEntireBody_Parms
{
	class ACCInstancePawn* P;
	void* GibPreset;
	struct FVector ExplosionMomentum;
	float GibsTearOffMomentum;
	float GibsTearOffMinPitch;
};

struct ACCInstanceController_execReplicateSpawnGibsForEntireBodyToAll_Parms
{
	class ACCInstancePawn* P;
	void* GibPreset;
	struct FVector ExplosionMomentum;
	float GibsTearOffMomentum;
	float GibsTearOffMinPitch;
};

struct ACCInstanceController_execClientReceivePawnDeathAnimationInfo_Parms
{
	class ACCInstancePawn* P;
	struct FDeathAnimationInfo DeathAnimationInfoStruct;
};

struct ACCInstanceController_execReplicatePawnDeathAnimationInfoToAll_Parms
{
	class ACCInstancePawn* P;
	struct FDeathAnimationInfo DeathAnimationInfoStruct;
};

struct ACCInstanceController_execClientReceivePawnRagdollState_Parms
{
	class ACCInstancePawn* P;
	struct FRagdollStateInfo RagdollStateInfoStruct;
};

struct ACCInstanceController_execReplicatePawnRagdollStateToAll_Parms
{
	class ACCInstancePawn* P;
	struct FRagdollStateInfo RagdollStateInfoStruct;
};

struct ACCInstanceController_execClientReceivePawnDeathState_Parms
{
	class ACCInstancePawn* P;
	unsigned char NewDeathState;
};

struct ACCInstanceController_execReplicatePawnDeathStateToAll_Parms
{
	class ACCInstancePawn* P;
};

struct ACCInstanceController_execSpawnItemPack_Parms
{
	struct FVector SpawnLoc;
};

struct ACCInstanceController_execClientScoreUpdated_Parms
{
	unsigned char ScoreType;
	int ScoreValue;
};

struct ACCInstanceController_execServerChangeMap_Parms
{
	struct FString MapURL;
};// FUNC_Exec

struct ACCInstanceController_execServerServerChangeMap_Parms
{
	struct FString MapURL;
};

struct ACCInstanceController_execClient_AM_SetActionInputEnabled_Parms
{
	unsigned char ActionID;
	unsigned long bEnabled : 1;
};

struct ACCInstanceController_execClient_AM_SetInputEnabled_Parms
{
	unsigned long bEnabled : 1;
};

struct ACCInstanceController_execClient_AM_SetClientClockAdjustment_Parms
{
	float ClientClockAdjustment;
};

struct ACCInstanceController_execClient_AM_SetActionStates_Parms
{
	int RequestID;
	int RequestFlags;
	unsigned char InstigatingAction;
	int StateMask;
	int WTDMask;
	struct FString ParametersString;
	unsigned long bNeedsIncomeUnblockingReply : 1;
};

struct ACCInstanceController_execServer_AM_SetWantsToDo_Parms
{
	float ClientTime;
	int RequestID;
	int RequestFlags;
	unsigned char ActionID;
	int Mask;
	int WTDMask;
	int SimpleWTDMask;
};

struct ACCInstanceController_execServer_AM_SetIncomeUnblocking_Parms
{
	int ReplyRequestID;
};

struct ACCInstanceController_execServer_AM_SetPingTime_Parms
{
	float PingTime;
};

struct ACCInstanceController_execServer_AM_SetLastSessionID_Parms
{
	unsigned char Id;
	int NewLastSessionID;
};

struct ACCInstanceController_execServer_AM_SetActionInputType_Parms
{
	unsigned char ActionID;
	unsigned char NewInputType;
};

struct ACCInstanceController_execServer_AM_SetActionParameter_Parms
{
	unsigned char ActionID;
	struct FString ParamValue;
};

struct ACCInstanceController_execSA_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetUDSAbilities_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCheatServerSetAbilities_Parms
{
	struct FName AbName;
	int Idx;
};

struct ACCInstanceController_execCheckIsHitDebug_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerCheckIsHitDebug_Parms
{
};

struct ACCInstanceController_execClientDrawDebugCylinder_Parms
{
	struct FVector Start;
	struct FVector End;
	float Radius;
	int Segments;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};

struct ACCInstanceController_execClientDrawDebugSphere_Parms
{
	struct FVector Center;
	float Radius;
	int Segments;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};

struct ACCInstanceController_execClientDrawDebugLine_Parms
{
	struct FVector LineStart;
	struct FVector LineEnd;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistentLines : 1;
};

struct ACCInstanceController_execIsThisControllerFirstFromList_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execIsThisControllerOnly_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execClient_ccrepstats_StringToConsoleAndLog_Parms
{
	struct FString S;
};

struct ACCInstanceController_execccrepstats_ReplicateStrigsToClient_Parms
{
	TArray< struct FString > Strings; // CPF_OutParm
};

struct ACCInstanceController_execccrepstats_StringsToLog_Parms
{
	TArray< struct FString > Strings; // CPF_OutParm
};

struct ACCInstanceController_execccrepstats_StringsToConsole_Parms
{
	TArray< struct FString > Strings; // CPF_OutParm
};

struct ACCInstanceController_execDo_ccrepstats_stopprofandprint_Parms
{
};

struct ACCInstanceController_execDo_ccrepstats_getprofstrings_filter_Parms
{
	struct FString ClassName;
	struct FString NetworkRole;
	unsigned long ft1 : 1;
	unsigned long ft2 : 1;
	unsigned long ft3 : 1;
	unsigned long ft4 : 1;
	struct FString FieldName;
	unsigned long bReplicateToClient : 1;
};

struct ACCInstanceController_execDo_ccrepstats_stopprof_Parms
{
};

struct ACCInstanceController_execDo_ccrepstats_startprof_Parms
{
};

struct ACCInstanceController_execDo_ccrepstats_ProfileTimer_Parms
{
};

struct ACCInstanceController_execDo_ccrepstats_initialize_Parms
{
};

struct ACCInstanceController_execServer_ccrepstats_getprofstrings_filter_Parms
{
	struct FString ClassName;
	struct FString NetworkRole;
	unsigned long ft1 : 1;
	unsigned long ft2 : 1;
	unsigned long ft3 : 1;
	unsigned long ft4 : 1;
	struct FString FieldName;
};

struct ACCInstanceController_execServer_ccrepstats_stopprof_Parms
{
};

struct ACCInstanceController_execServer_ccrepstats_startprof_Parms
{
};

struct ACCInstanceController_execccrepstats_servergetprofstrings_filter_Parms
{
	struct FString ClassName;
	struct FString NetworkRole;
	unsigned long ft1 : 1;
	unsigned long ft2 : 1;
	unsigned long ft3 : 1;
	unsigned long ft4 : 1;
	struct FString FieldName;
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_servergetprofstrings_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_serverstopprof_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_serverstartprof_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_getprofstrings_filter_Parms
{
	struct FString ClassName;
	struct FString NetworkRole;
	unsigned long ft1 : 1;
	unsigned long ft2 : 1;
	unsigned long ft3 : 1;
	unsigned long ft4 : 1;
	struct FString FieldName;
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_getprofstrings_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_stopprof_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execccrepstats_startprof_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGetReplicationStatsInstance_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execsniper_Parms
{
	unsigned long S : 1;
};// FUNC_Exec

struct ACCInstanceController_execGetStatesDebugStringArray2_Parms
{
	TArray< struct FString > Strings; // CPF_OutParm
};

struct ACCInstanceController_execGetStatesDebugStringArray_Parms
{
	TArray< struct FString > Strings; // CPF_OutParm
};

struct ACCInstanceController_execSetQuickStatsDebugStrings_Parms
{
};

struct ACCInstanceController_execSetActionManagerDebugStrings_Parms
{
};

struct ACCInstanceController_execSetObjectStatesDebugStrings_Parms
{
};

struct ACCInstanceController_execClientGameEnded_Parms
{
	class AActor* EndGameFocus;
	unsigned long bIsWinner : 1;
};

struct ACCInstanceController_execGameHasEnded_Parms
{
	class AActor* EndGameFocus;
	unsigned long bIsWinner : 1;
};

struct ACCInstanceController_execServerSetVacuumRocket_Parms
{
	unsigned long bCan : 1;
};

struct ACCInstanceController_execSetVaccumRocket_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnToggleCinematicMode_Parms
{
	void* Action;
};

struct ACCInstanceController_execClientNoSniperVision_Parms
{
};

struct ACCInstanceController_execDoNoSniperVision_Parms
{
};

struct ACCInstanceController_execNoSniperVision_Parms
{
};

struct ACCInstanceController_execGetActionBarSlotState_Parms
{
	int I;
	struct FActionBarSlotState ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execIsFrozen_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execForceLeaveFrozenState_Parms
{
};

struct ACCInstanceController_eventLeaveFrozenState_Parms
{
};// FUNC_Event

struct ACCInstanceController_eventEnterFrozenState_Parms
{
};// FUNC_Event

struct ACCInstanceController_execGetClientClockValue_Parms
{
	float ServerClockValue;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execEndLoadingProcess_Parms
{
};

struct ACCInstanceController_eventSetYakaSpectator_Parms
{
};// FUNC_Event

struct ACCInstanceController_eventYakaAcceptSpectator_Parms
{
	int UDSId;
};// FUNC_Event

struct ACCInstanceController_eventYakaAccept_Parms
{
	int UDSId;
	unsigned long Value : 1;
};// FUNC_Event

struct ACCInstanceController_execStartLoadingProcess_Parms
{
	unsigned long bStart : 1;
};

struct ACCInstanceController_execOnTabReleased_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnTabPressed_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execTickFromPawn_Parms
{
	float DeltaTime;
};

struct ACCInstanceController_execClientSetAMCooperation_Parms
{
	int Action1ID;
	int Action2ID;
	unsigned char CooperationType;
};

struct ACCInstanceController_execServerSetAMCooperation_Parms
{
	int Action1ID;
	int Action2ID;
	unsigned char CooperationType;
};

struct ACCInstanceController_execReplicateAMDescriptions_Parms
{
	TArray< struct FActionDescription > ActionDescriptions;
};

struct ACCInstanceController_execActionManagerTimer_Parms
{
};

struct ACCInstanceController_execClientCreateActionManager_Parms
{
};

struct ACCInstanceController_execCreateActionManager_Parms
{
};

struct ACCInstanceController_execOnReloadReleased_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnReloadPressed_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetAvatarProperies_Parms
{
	unsigned char InClassId;
	int InClanLogoId;
	int InClanLogoColorId;
	struct FCharacterAppearance InAppearance;
	struct FPaperdoll InPaperdoll;
	unsigned char InTeam;
	TArray< struct FAvatarAttribute > InBaseAttributes;
	TArray< struct FWeaponProfile > InWeaponProfiles;
	TArray< struct FAbilityInfo > InActionBarAbilities;
	TArray< struct FDrugInfo > InExtraDrugAbilities;
};// FUNC_Native

struct ACCInstanceController_execSetAvatarAbility_Parms
{
	int AbilitySlot;
	int ServerAbilityId;
	int AbilityLevel;
};// FUNC_Native

struct ACCInstanceController_execServerTestSimulateProjectileFire_Parms
{
};

struct ACCInstanceController_execTestSimulateProjectileFire_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleAnimationDebugCamera2_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleAnimationDebugCamera_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execClientSetAmmoPacks_Parms
{
	int Idx;
	int I;
	int J;
	int K;
};

struct ACCInstanceController_execServerSetAmmoPacks_Parms
{
	int Idx;
	int I;
	int J;
	int K;
};

struct ACCInstanceController_execServerGetGrenadePacks_Parms
{
};

struct ACCInstanceController_execGetGrenadePacks_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerExplodeAllMines_Parms
{
};

struct ACCInstanceController_execExplodeAllMines_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerGiveStamina_Parms
{
};

struct ACCInstanceController_execServerSetHealth_Parms
{
	int Amount;
};

struct ACCInstanceController_execServerGiveHealth_Parms
{
};

struct ACCInstanceController_execUpdateActionBarAbilitiesDrugPacks_Parms
{
};

struct ACCInstanceController_execCCServerAllAmmo_Parms
{
};

struct ACCInstanceController_execttGiveAll_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execFly_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerFly_Parms
{
};

struct ACCInstanceController_execDoFly_Parms
{
};

struct ACCInstanceController_execGhost_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerGhost_Parms
{
};

struct ACCInstanceController_execDoGhost_Parms
{
};

struct ACCInstanceController_execServerRestoreCooldown_Parms
{
};

struct ACCInstanceController_execRestoreCooldown_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetHealth_Parms
{
	int Amount;
};// FUNC_Exec

struct ACCInstanceController_execGiveHealth_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execGiveStamina_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCCAllammo_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPrintPawns_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execClientPrintPawns_Parms
{
};

struct ACCInstanceController_execServerPrintPawns_Parms
{
};

struct ACCInstanceController_execDoPrintPawns_Parms
{
};

struct ACCInstanceController_execserver_test_Parms
{
};

struct ACCInstanceController_execTest_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDoCrash_Parms
{
};// FUNC_Native

struct ACCInstanceController_execClientCrash_Parms
{
};

struct ACCInstanceController_execServerCrashAll_Parms
{
};

struct ACCInstanceController_execCrashAll_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCrash_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDrawPreviousSpaceBasesDebug_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execserver_explode_all_mines_Parms
{
};

struct ACCInstanceController_execexplode_all_mines_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDoPerformTraceTesting_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPerformTraceTesting_Parms
{
	class AActor* TraceActor;
	struct FVector StartPoint;
	struct FVector EndPoint;
	unsigned long bStopAtAnyHit : 1;
	int Iterations;
};// FUNC_Native

struct ACCInstanceController_execDoNativeDiv_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execDoDiv_Parms
{
	float A;
	float B;
};// FUNC_Exec

struct ACCInstanceController_execPrintAllSkelControls_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPrintAllAnimObjectProfiles_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPrintAllCharacters_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPerformSelectAnimTreeProfiles_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSetGameSpeed_Parms
{
	float T;
};

struct ACCInstanceController_execCCClientSloMo_Parms
{
	float T;
};

struct ACCInstanceController_execCCServerSloMo_Parms
{
	float T;
};

struct ACCInstanceController_execttCCSlomo_Parms
{
	float T;
};// FUNC_Exec

struct ACCInstanceController_execCCServerSlomoDecrease_Parms
{
};

struct ACCInstanceController_execttCCSlomoDecrease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCCServerSlomoIncrease_Parms
{
};

struct ACCInstanceController_execttCCSlomoIncrease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execdebugMakeViewTargetInfoMessage_Parms
{
	struct FString Message; // CPF_OutParm
};

struct ACCInstanceController_execdebugServerGetViewTargetInfo_Parms
{
};

struct ACCInstanceController_execdebugGetViewTargetInfo_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execChangeDeadCameraPosition_Parms
{
	int SwitchDirection;
};

struct ACCInstanceController_execReceiveExtraMessageString_Parms
{
	struct FString ExtraString;
};

struct ACCInstanceController_execClientGiveActionActor_Parms
{
	class APawn* NewActionActor;
};

struct ACCInstanceController_execClientGiveKillInfo_Parms
{
	class APawn* DeadPawn;
	class APawn* KillerPawn;
};

struct ACCInstanceController_execNotifyTakenControlDamage_Parms
{
	float Damage;
	class APawn* injured;
	class AController* InstigatedBy;
};

struct ACCInstanceController_execNotifyHealthBelowZero_Parms
{
	class AController* Killer;
	class APawn* KilledPawn;
};

struct ACCInstanceController_eventReceivedPlayer_Parms
{
};// FUNC_Event

struct ACCInstanceController_execFillDefaultAppearance_Parms
{
	struct FCharacterVisualDescription Appearance; // CPF_OutParm
	unsigned char CharClass;
};// FUNC_Native

struct ACCInstanceController_execClientFinishEmoteAnim_Parms
{
	class ACCInstancePawn* P;
	struct FRotator PawnEmoteRotation;
	struct FRotator ControllerPostEmoteRotation;
};

struct ACCInstanceController_execServerAbortPlayingEmoteDueTo_Parms
{
};

struct ACCInstanceController_execServerAbortPlayingEmoteDueToInternal_Parms
{
};

struct ACCInstanceController_execAbortPlayingEmote_Parms
{
};

struct ACCInstanceController_execPeekNextInstanceEmoteName_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execGetEmoteLength_Parms
{
	struct FName EmoteName;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execEmoteExists_Parms
{
	struct FName EmoteName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execCheckCanPlayEmote_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execPlayEmoteRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execPlayEmote_Parms
{
	struct FName InEmoteName;
};// FUNC_Exec

struct ACCInstanceController_execClientSetIsInNoMovementMode_Parms
{
	class ACCInstancePawn* P;
	unsigned long bNewIsInNoMovementMode : 1;
};

struct ACCInstanceController_execAbortNoMovement_Parms
{
};

struct ACCInstanceController_execStartNoMovement_Parms
{
};

struct ACCInstanceController_execStartGrenadeThrowingNoMovement_Parms
{
};

struct ACCInstanceController_execAbortGrenadeThrowingNoMovement_Parms
{
};

struct ACCInstanceController_execNeedsNoMovementMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execClientThrowAbilityGrenade_Parms
{
	struct FString GrenadePresetName;
};

struct ACCInstanceController_execThrowGrenadeRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execThrowGrenade_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execMeleeDefendRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execMeleeDefend_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execIsWantsFirstMeleeBeatMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execStopManualMeleeMovement_Parms
{
};

struct ACCInstanceController_execStartMeleeMovement_Parms
{
};

struct ACCInstanceController_execAbortMeleeMovement_Parms
{
};

struct ACCInstanceController_execClientFinishMeleeAnim_Parms
{
	class ACCInstancePawn* P;
	struct FRotator ControllerPostMeleeRotation;
};

struct ACCInstanceController_execClientStartMeleeAnim_Parms
{
	class ACCInstancePawn* P;
};

struct ACCInstanceController_execMeleeTuning_SetGF_Parms
{
	float MeleeAvoidanceGlueFactor;
};// FUNC_Exec

struct ACCInstanceController_execMeleeTuning_SetARM_Parms
{
	float MeleeAvoidanceRadiusMultiplier;
};// FUNC_Exec

struct ACCInstanceController_execSetMeleeInitialViewRotation_Parms
{
};

struct ACCInstanceController_execSetMeleeCameraDescription_Parms
{
	struct FName DescName;
};

struct ACCInstanceController_execMeleeRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execMelee_Parms
{
	int Mode;
};// FUNC_Exec

struct ACCInstanceController_execRestoreAmmo_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerRestoreAmmo_Parms
{
};

struct ACCInstanceController_execSetPreset_Parms
{
	struct FName PresetName;
	int Lvl;
};// FUNC_Exec

struct ACCInstanceController_eventUDSAvatarSetPreset_Parms
{
	struct FString PresetName;
};// FUNC_Event

struct ACCInstanceController_execClientSetPreset_Parms
{
	struct FName PresetName;
};

struct ACCInstanceController_execServerSetPreset_Parms
{
	struct FName PresetName;
	int Lvl;
};

struct ACCInstanceController_execReplicateActiveWeaponPreset_Parms
{
	struct FString Data;
};

struct ACCInstanceController_execReplicateActiveWeaponPresetAsString_Parms
{
	void* Preset;
};

struct ACCInstanceController_execReplicateWeaponPreset_Parms
{
	unsigned char Slot;
	struct FString Data;
};

struct ACCInstanceController_execReplicateWeaponPresetNoEditor_Parms
{
	unsigned char Slot;
	struct FName PresetName;
};

struct ACCInstanceController_execReplicateWeaponPresetAsString_Parms
{
	unsigned char Slot;
	void* Preset;
};

struct ACCInstanceController_execReplicateActiveAvatarPreset_Parms
{
};

struct ACCInstanceController_execReplicateActiveAvatarPresetAsString_Parms
{
	void* Preset;
	struct FName PresetName;
};

struct ACCInstanceController_execControllerServerNotifyTargetDamaged_Parms
{
};

struct ACCInstanceController_execServerSetRotation_Parms
{
	struct FRotator NewRotation;
};

struct ACCInstanceController_execDoAddRotation_Parms
{
	struct FRotator Delta;
};

struct ACCInstanceController_execSetVisibility_Parms
{
	unsigned long bVis : 1;
	struct FName AbilName;
};

struct ACCInstanceController_execServer_Kaboom_Parms
{
};

struct ACCInstanceController_execcl_kaboom_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServer_DefCoreInvul_Parms
{
};

struct ACCInstanceController_execcl_defcoreinvul_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServer_ViewBot_Parms
{
};

struct ACCInstanceController_execClient_ViewBot_Parms
{
	class AActor* A;
};

struct ACCInstanceController_execcl_viewbot_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServer_ViewSelf_Parms
{
};

struct ACCInstanceController_execClient_ViewSelf_Parms
{
};

struct ACCInstanceController_execcl_viewself_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServer_AddBot_Location_Parms
{
	int TeamNum;
	struct FVector BotLocation;
};

struct ACCInstanceController_execcl_addbot_hack_Parms
{
	int TeamNum;
};// FUNC_Exec

struct ACCInstanceController_execServer_AddBot_Parms
{
	int TeamNum;
};

struct ACCInstanceController_execcl_addbot_num_Parms
{
	int TeamNum;
	int Num;
};// FUNC_Exec

struct ACCInstanceController_execcl_addbot_Parms
{
	int TeamNum;
};// FUNC_Exec

struct ACCInstanceController_execServer_AddActionId_Parms
{
	int ActionID;
};

struct ACCInstanceController_execcl_addactionid_Parms
{
	int ActionID;
};// FUNC_Exec

struct ACCInstanceController_execServerSetInstantTraces_Parms
{
	unsigned long bValue : 1;
};

struct ACCInstanceController_execServerSetProjectileTraces_Parms
{
	unsigned long bValue : 1;
};

struct ACCInstanceController_execToggleWeaponDebugLine_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleProjectileTraces_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleGrenadeTestTraces_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerSetInstantTraces2_Parms
{
	unsigned long bValue : 1;
};

struct ACCInstanceController_execToggleInstantTraces2_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleInstantTraces_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleCoverInfo_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execTogglePause_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerTogglePause_Parms
{
};

struct ACCInstanceController_execServerEnableCheats_Parms
{
};

struct ACCInstanceController_execEnableCheats_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCreateCheats_Parms
{
};

struct ACCInstanceController_execCoverServerMove_Parms
{
	float TimeStamp;
	struct FVector InAccel;
	struct FVector ClientLoc;
	int MoveFlags;
	unsigned char ClientRoll;
	int View;
	unsigned char InCoverType;
	unsigned char InCoverAction;
	unsigned char InCoverDirection;
	unsigned long InbWantsToBeMirrored : 1;
	unsigned char InCurrentSlotDirection;
};

struct ACCInstanceController_execSendServerMove_Parms
{
	void* NewMove;
	struct FVector ClientLoc;
	unsigned char ClientRoll;
	int View;
	void* OldMove;
};// FUNC_Final

struct ACCInstanceController_execCallServerMove_Parms
{
	void* NewMove;
	struct FVector ClientLoc;
	unsigned char ClientRoll;
	int View;
	void* OldMove;
};

struct ACCInstanceController_eventInitInputSystem_Parms
{
};// FUNC_Event

struct ACCInstanceController_execCCServerSuicide_Parms
{
};

struct ACCInstanceController_execCCSuicide_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execClientRecieveWeapon_Parms
{
	class AWeapon* W;
};

struct ACCInstanceController_execServerRequestWeapon_Parms
{
};

struct ACCInstanceController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCInstanceController_execShowWeaponStats_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerShowWeaponStats_Parms
{
};

struct ACCInstanceController_execShowPlayerStats_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerShowPlayerStats_Parms
{
};

struct ACCInstanceController_execShowAFKTime_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerShowAFKTime_Parms
{
};

struct ACCInstanceController_execSetAFK_Parms
{
	unsigned long bNewAFK : 1;
};

struct ACCInstanceController_execServerSetAFK_Parms
{
	unsigned long bNewAFK : 1;
};

struct ACCInstanceController_execSetDOFEffect_Parms
{
	void* DOFEffect;
	float DeltaTime;
};

struct ACCInstanceController_execGetPawnCoverType_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execSetPawnCoverType_Parms
{
	unsigned char NewCT;
};

struct ACCInstanceController_execGetPawnCoverAction_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_eventSetPawnCoverAction_Parms
{
	unsigned char NewCA;
};// FUNC_Event

struct ACCInstanceController_execGetCoverDirection_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execSetCoverDirection_Parms
{
	unsigned char NewCD;
};

struct ACCInstanceController_execIsInCoverState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_eventNotifyCoverAdjusted_Parms
{
};// FUNC_Event

struct ACCInstanceController_execNotifyCoverDisabled_Parms
{
	void* Link;
	int SlotIdx;
	unsigned long bAdjacentIdx : 1;
};

struct ACCInstanceController_execClientBreakFromCover_Parms
{
};

struct ACCInstanceController_execCanTryToRunToCover_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execClientRequestCoverTransition_Parms
{
};

struct ACCInstanceController_execClientInvalidCoverClaim_Parms
{
};

struct ACCInstanceController_execServerCoverTransition_Parms
{
	void* Link;
	unsigned char SlotIdx;
	unsigned char LeftIdx;
	unsigned char RightIdx;
	float SlotPct;
	unsigned char ClientCoverDirection;
};

struct ACCInstanceController_execClientUpdatePosition_Parms
{
};

struct ACCInstanceController_execGetPawnSide_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execServerSetPawnSide_Parms
{
	unsigned long bNewMirrored : 1;
};

struct ACCInstanceController_execClientSetPawnSide_Parms
{
	unsigned long bNewMirrored : 1;
};

struct ACCInstanceController_execSetPawnSide_Parms
{
	unsigned long bNewMirrored : 1;
};

struct ACCInstanceController_execNotifyReachedCoverSlot_Parms
{
	int SlotIdx;
	int OldSlotIdx;
};

struct ACCInstanceController_execSetIsInStationaryCover_Parms
{
	unsigned long NewbIsInStationaryCover : 1;
};// FUNC_Final

struct ACCInstanceController_execLeftCover_Parms
{
};

struct ACCInstanceController_execServerLeaveCover_Parms
{
};

struct ACCInstanceController_execBeginLeaveCover_Parms
{
};

struct ACCInstanceController_execLeaveCover_Parms
{
};

struct ACCInstanceController_execShouldAutoAlignCameraWithCover_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execCoverAcquired_Parms
{
	class ACCInstancePawn* P;
	struct FCovPosInfo CovInfo;
	unsigned long bNoCameraAutoAlign : 1;
};

struct ACCInstanceController_execDumpCoverInfo_Parms
{
	struct FCovPosInfo CovInfo;
};

struct ACCInstanceController_execAcquireCover_Parms
{
	struct FCovPosInfo CovInfo;
	unsigned long bNoCameraAutoAlign : 1;
};

struct ACCInstanceController_execClientAcquireCover_Parms
{
	struct FCovPosInfo CovInfo;
};

struct ACCInstanceController_execCoverLog_Parms
{
	struct FString msg;
	struct FString Function;
};

struct ACCInstanceController_eventAllowEvadeOffLedge_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Event

struct ACCInstanceController_execServerDropCarriedObject_Parms
{
};

struct ACCInstanceController_eventYakaChangeTeam_Parms
{
	int GroupId;
};// FUNC_Event

struct ACCInstanceController_execSetYakaTeam_Parms
{
	int TeamID;
};

struct ACCInstanceController_execChangedTeamMessage_Parms
{
};

struct ACCInstanceController_execServerSetCharacterData_Parms
{
	struct FCharacterVisualDescription CharData;
	int GroupId;
};

struct ACCInstanceController_execServerSetNetworkID_Parms
{
	int NewNetworkID;
};

struct ACCInstanceController_eventSetNetworkID_Parms
{
	int NewNetworkID;
};// FUNC_Event

struct ACCInstanceController_execToggleInstanceResults_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleScoreboard_Parms
{
	unsigned long bOpen : 1;
	unsigned long InstanceFinished : 1;
};// FUNC_Exec

struct ACCInstanceController_execClientForceGC_Parms
{
};

struct ACCInstanceController_execRessurectionMade_Parms
{
};

struct ACCInstanceController_execFatalityMade_Parms
{
};

struct ACCInstanceController_execDoFatality_Parms
{
};

struct ACCInstanceController_execDoRessurect_Parms
{
	struct FVector RessurectionLocation;
};

struct ACCInstanceController_execServerFatality_Parms
{
};

struct ACCInstanceController_execServerRessurect_Parms
{
	struct FVector RessurectionLocation;
};

struct ACCInstanceController_execCalcRespawnTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_eventForceClientMessage_Parms
{
	struct FString S;
	struct FName Type;
	float MsgLifeTime;
};// FUNC_Event

struct ACCInstanceController_execServerViewSelf_Parms
{
	struct FViewTargetTransitionParams TransitionParams;
};

struct ACCInstanceController_execServerSetNextViewTarget_Parms
{
};

struct ACCInstanceController_execServerFollow_Parms
{
	struct FString pname;
};

struct ACCInstanceController_execServerFind_Parms
{
	struct FString pname;
};

struct ACCInstanceController_execServerListPlayers_Parms
{
};

struct ACCInstanceController_execSetTestTournament_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execListPlayers_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execToggleNames_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execFollow_Parms
{
	struct FString pname;
};// FUNC_Exec

struct ACCInstanceController_execFind_Parms
{
	struct FString pname;
};// FUNC_Exec

struct ACCInstanceController_eventDoCommand_Parms
{
	struct FString Command;
};// FUNC_Event

struct ACCInstanceController_execIsGM_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execAbortSprint_Parms
{
};

struct ACCInstanceController_execSprintInstance_Parms
{
	unsigned long SprintOn : 1;
};// FUNC_Exec

struct ACCInstanceController_execOnLeftShiftRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnLeftShiftPress_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnLeftControlRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnLeftControlPress_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStopCrouch_Parms
{
};

struct ACCInstanceController_execStartCrouch_Parms
{
};

struct ACCInstanceController_execConditionalStopCrouch_Parms
{
};

struct ACCInstanceController_execConditionalStartCrouch_Parms
{
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execForceCrouchAction_Parms
{
};

struct ACCInstanceController_execDoEnterIfStreamingEnded_Parms
{
};

struct ACCInstanceController_execDoForceEnter_Parms
{
};

struct ACCInstanceController_execGetGrenadeRecoilRoll_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execPerformRecoilLimitation_Parms
{
	struct FRotator ViewRotWithRecoil;
	struct FRotator out_ViewRotation; // CPF_OutParm
	unsigned long bUserMouseMove : 1;
};

struct ACCInstanceController_execPerformRecoilCompensation_Parms
{
	struct FRotator DeltaRot;
	struct FRotator out_ViewRotation; // CPF_OutParm
};

struct ACCInstanceController_execPerformTickRecoil_Parms
{
	float DeltaTime;
};

struct ACCInstanceController_execGetSmoothedAdditionalRecoilRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execGetAdditionalRecoilRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator DeltaRot;
};

struct ACCInstanceController_execProcessAvoidanceMovement_Parms
{
	float DeltaTime;
	struct FVector newAccel;
	unsigned char DoubleClickMove;
	struct FRotator DeltaRot;
	float PenetrationMultiplier;
	float AvoidanceRadiusMultiplier;
	float GlueFactor;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execReplicateMoveDirection_Parms
{
	unsigned char MoveDirection;
};

struct ACCInstanceController_execPlayCameraAnim_Parms
{
	void* AnimToPlay;
	float BlendWeight;
};

struct ACCInstanceController_execServerShowScore_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCInstanceController_execScore_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execStopFireMessage_Parms
{
};

struct ACCInstanceController_execPressFireMessage_Parms
{
};

struct ACCInstanceController_execPlayStartupMessage_Parms
{
	unsigned char StartUpStage;
};

struct ACCInstanceController_execRelease_WeaponChangeAction_Parms
{
};

struct ACCInstanceController_execStart_WeaponChangeAction_Parms
{
	struct FString Param;
};

struct ACCInstanceController_execSwitchToThrowingWeapon2_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToThrowingWeapon2_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToThrowingWeapon1_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToThrowingWeapon1_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToMeleeWeapon_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToMeleeWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToSecondaryWeapon_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToSecondaryWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToPrimaryWeapon2_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToPrimaryWeapon2_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToPrimaryWeapon1_Release_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToPrimaryWeapon1_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execSwitchToWeaponSlot_Parms
{
	unsigned char WeaponSlot;
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execDropCarriedObject_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDoChangeEffectsManagerState_Parms
{
	struct FName NewEffectsManagerState;
	int NewHidePawnAndWeapon;
};

struct ACCInstanceController_execGetIsInDelayedChangeEffectsManagerState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execDelayedChangeEffectsManagerState_Parms
{
};

struct ACCInstanceController_execUpdateCurrentEffectsManagerState_Parms
{
};

struct ACCInstanceController_execGetCurrentEffectsManagerState_Parms
{
	float EnteringDelay; // CPF_OutParm
	int bHidePawnAndWeapon; // CPF_OutParm
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execGetEffectsManagerState_Parms
{
	float EnteringDelay; // CPF_OutParm
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execSniperAimingPostFireTimer_Parms
{
};

struct ACCInstanceController_execNotifyFireAmmunition_Parms
{
	float FireTimeStamp;
};

struct ACCInstanceController_execSetId_Parms
{
	int A1;
	int A2;
	int A3;
	int A4;
	int A5;
	int A6;
};// FUNC_Exec

struct ACCInstanceController_execGetAimingEnabled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execGetIsSniperAiming_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execGetInAimingEnteringDelay_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execGetEffectsManagerStateForAiming_Parms
{
	float EnteringDelay; // CPF_OutParm
	int bHidePawnAndWeapon; // CPF_OutParm
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCInstanceController_execRemoveAllAimingEffects_Parms
{
};

struct ACCInstanceController_execUpdateAimingEffects_Parms
{
};

struct ACCInstanceController_execStartAimingEffects_Parms
{
};

struct ACCInstanceController_execStopAiming_Parms
{
};

struct ACCInstanceController_execStartAiming_Parms
{
};

struct ACCInstanceController_execConditionalStopAiming_Parms
{
};

struct ACCInstanceController_execConditionalStartAiming_Parms
{
	unsigned long bTest : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execClientFinishRollingAnim_Parms
{
	class ACCInstancePawn* P;
	struct FRotator PawnRollingRotation;
	struct FRotator ControllerPostRollingRotation;
};

struct ACCInstanceController_execClientPlayRollingAnim_Parms
{
	class ACCInstancePawn* P;
	unsigned char MoveDir;
	float RollingTime;
};

struct ACCInstanceController_execExitRolling_Parms
{
};

struct ACCInstanceController_execOnRollingRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnRollingPress_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execCheckIfCanRolling_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_eventDetermineAccelerationEx_Parms
{
	struct FRotator PawnRotation;
	unsigned char MoveDir;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstanceController_execCanRolling_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execDetermineAcceleration_Parms
{
	struct FRotator Yaw;
	unsigned char MoveDir;
	unsigned long PrimaryFwd : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execCanBeInManualVelocityMode_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execCheckIfCanSprint_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceController_execOnSpecialMoveRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnSpecialMove_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execShowPawnAndWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execHidePawnAndWeapon_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnRBMouseRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execOnRBMousePress_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execUpdateActionBarState_Parms
{
	int I;
	unsigned char Phase;
	float PrepareStartTime;
	float PrepareEndTime;
	float CooldownStartTime;
	float CooldownEndTime;
};

struct ACCInstanceController_execDrugPackItemUsed_Parms
{
	int AbilitySlot;
};// FUNC_Final

struct ACCInstanceController_execHUDRadar_Enable_Parms
{
	unsigned long Value : 1;
};

struct ACCInstanceController_execActionBar_PawnHit_Parms
{
	int DamagePercent;
};

struct ACCInstanceController_execActionBar_AbilityUseDenied_Parms
{
};

struct ACCInstanceController_execActionBar_UseAbility_Parms
{
	int AbilitySlot;
};

struct ACCInstanceController_execServerSetAndPrepareAbility_Parms
{
	int AbilitySlot;
};// FUNC_Final

struct ACCInstanceController_execClientPlayInjectorSound_Parms
{
};

struct ACCInstanceController_execNotifyAbilityUsed_Parms
{
	int AbilitySlot;
};

struct ACCInstanceController_execSetAndPrepareAbility_Parms
{
	int AbilitySlot;
};// FUNC_Exec

struct ACCInstanceController_execClientUpdateWeaponHUD_Parms
{
	int id0;
	int id1;
	int id2;
};

struct ACCInstanceController_execPlayParticleSystemLocation_Parms
{
	void* PS;
	float Lifetime;
	struct FVector Loc;
	struct FRotator Rot;
};

struct ACCInstanceController_execPrepareAbility_Parms
{
	struct FName AbilityName;
};// FUNC_Exec

struct ACCInstanceController_execAddSimpleBuff_Parms
{
	int Num;
};// FUNC_Exec

struct ACCInstanceController_execServerAddBuff_Parms
{
	int Num;
};

struct ACCInstanceController_execOnLBMouseRelease_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerStopAbility_Parms
{
	struct FName AbilName;
};

struct ACCInstanceController_execConditionalStopInvisAbibility_Parms
{
};

struct ACCInstanceController_execOnLBMousePress_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerRestartPlayer_Parms
{
};

struct ACCInstanceController_execFakeEquipItems_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execFatality_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execRessurect_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execAddAbilityTo_Parms
{
	struct FName AbilityName;
	int to;
};// FUNC_Exec

struct ACCInstanceController_execDumpAbilities_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerDumpAbilities_Parms
{
};

struct ACCInstanceController_execUpdateActionBarAbilities_Parms
{
};

struct ACCInstanceController_execServerAddAbilityTo_Parms
{
	struct FName AbilityName;
	int to;
	struct FAbilitSlotDesc SlotDesc;
};

struct ACCInstanceController_execNotifyHUDAboutActionBarAbility_Parms
{
	int SlotIdx;
};// FUNC_Final

struct ACCInstanceController_execClientAbilityAdded_Parms
{
	struct FName AbilityName;
	int to;
	int ServerAbilityId;
};// FUNC_Final

struct ACCInstanceController_execActivateAbility_Parms
{
	int AbilitySlot;
};// FUNC_Exec

struct ACCInstanceController_execAltActivateAbility_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execInstanceEntered_Parms
{
};// FUNC_Native

struct ACCInstanceController_eventPreBeginPlay_Parms
{
};// FUNC_Event

struct ACCInstanceController_execGetActionBarAbilityName_Parms
{
	int I;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceController_execServerRecreateAbilities_Parms
{
};

struct ACCInstanceController_execRecreateAbilities_Parms
{
};

struct ACCInstanceController_execFinishInstance_Parms
{
	int WinnerTeam;
	int AdditionalSeconds;
};// FUNC_Exec

struct ACCInstanceController_execClientSetHUD_Parms
{
	class UClass* newHUDType;
	class UClass* newScoringType;
};

struct ACCInstanceController_execStopScriptProf_Parms
{
	int Client;
};// FUNC_Exec

struct ACCInstanceController_execStartScriptProf_Parms
{
	int Client;
};// FUNC_Exec

struct ACCInstanceController_execServerCaptureStat_Stop_Parms
{
};

struct ACCInstanceController_execServerCaptureStat_Start_Parms
{
};

struct ACCInstanceController_execServerFinishInstance_Parms
{
	int WinnerTeam;
	int AdditionalSeconds;
};

struct ACCInstanceController_execYakaRequestInit_Parms
{
};

struct ACCInstanceController_execMakeYakaRequest_Parms
{
};// FUNC_Native

struct ACCInstanceController_eventApplyYakaCharData_Parms
{
	struct FCharacterVisualDescription CharData;
	int GroupId;
};// FUNC_Event

struct ACCInstanceController_execGoToPlayerWaiting_Parms
{
};

struct ACCInstanceController_eventPossess_Parms
{
	class APawn* aPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct ACCInstanceController_execServerRetrieveQuest_Parms
{
	int I;
	int Id;
};

struct ACCInstanceController_execClientPosses_Parms
{
};

struct ACCInstanceController_execServerSetMyHat_Parms
{
	int Id;
};

struct ACCInstanceController_execSetMyHat_Parms
{
	int Id;
};// FUNC_Exec

struct ACCInstanceController_exectemp_SetHairID_Parms
{
	int HairId;
};// FUNC_Exec

struct ACCInstanceController_execEnableSniperVision_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDisableSniperVision_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerDisableSniperVision_Parms
{
};

struct ACCInstanceController_execAffectBySniperVision_Parms
{
};

struct ACCInstanceController_execServerEnableSniperVision_Parms
{
};

struct ACCInstanceController_execServerRestoreProperties_Parms
{
};

struct ACCInstanceController_execInitializeDeadCameraSwitchers_Parms
{
};

struct ACCInstanceController_execInitializeLevelCameras_Parms
{
};

struct ACCInstanceController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCInstanceController_execDestroyAvatar_Parms
{
};

struct ACCInstanceController_execCreateAvatar_Parms
{
};

struct ACCInstanceController_execUpdateTakenDamage_Parms
{
};

struct ACCInstanceController_execAvatarEditorActive_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceController_execSetPlayerPositionByAnimation_Parms
{
};// FUNC_Native

struct ACCInstanceController_execActionBarReplicatedEvent_Parms
{
	int I;
};// FUNC_Final

struct ACCInstanceController_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCInstanceController_execNotifySniperVisionStateChanged_Parms
{
};

struct ACCInstanceController_eventReplicatedEventEx_Parms
{
	struct FName VarName;
	int ArrayIndex;
};// FUNC_Event

struct ACCInstanceController_eventGetName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstanceController_execServerSetAbilitySensModif_Parms
{
	float Modif;
};

struct ACCInstanceController_execResetSensModif_Parms
{
};

struct ACCInstanceController_execApplySensModif_Parms
{
	float Modif;
};

struct ACCInstanceController_execClientPreparePawnForDisconnect_Parms
{
};

struct ACCInstanceController_execFixWeaponBasedDrugs_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execServerFixDrugsToActionManagerConnection_Parms
{
};// FUNC_Final

struct ACCInstanceController_execClientRemovePRI_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCInstanceController_execRemovePRI_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCInstanceController_execLeaveInstance_Parms
{
};// FUNC_Exec FUNC_Event

struct ACCInstanceController_execResetCamera_Parms
{
};

struct ACCInstanceController_execResetHUDItems_Parms
{
};

struct ACCInstanceController_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCInstanceController_execNotifyExiting_Parms
{
};

struct ACCInstanceController_execCheckForStopActiveReplicationStats_Parms
{
};

struct ACCInstanceController_execDebugPlayerFeats_Parms
{
};// FUNC_Exec

struct ACCInstanceController_execDebugPlayerStats_Parms
{
};// FUNC_Exec

// (0x774 - 0xF50)
class ACCInstanceController : public ACCController
{
public:
	void*                                              Avatar;                                      // 0x0774 (0x0004)
	void*                                              ActiveAvatarPreset;                          // 0x0778 (0x0004)
	void*                                              PresetsStore;                                // 0x077C (0x0004)
	TArray< void* >                                    WeaponPresets;                               // 0x0780 (0x000C)
	struct FWeaponProfile                              Avatar_WeaponModifiers[ 8 ];                 // 0x078C (0x0160)
	int                                                WaitRespawnTime;                             // 0x08EC (0x0004)
	int                                                TotalForceRespawnTime;                       // 0x08F0 (0x0004)
	int                                                TotalRespawnTimes;                           // 0x08F4 (0x0004)
	float                                              InSprintTime;                                // 0x08F8 (0x0004)
	float                                              SprintTopSpeed;                              // 0x08FC (0x0004)
	unsigned long                                      UseAdaptiveDOF : 1;                          // 0x0900 (0x0004) [0x00000001]
	unsigned long                                      ShowScoreNotify : 1;                         // 0x0900 (0x0004) [0x00000002]
	unsigned long                                      bNeedGC : 1;                                 // 0x0900 (0x0004) [0x00000004]
	unsigned long                                      GMShowNames : 1;                             // 0x0900 (0x0004) [0x00000008]
	unsigned long                                      bChangedTeamDied : 1;                        // 0x0900 (0x0004) [0x00000010]
	unsigned long                                      bAllowRespawn : 1;                           // 0x0900 (0x0004) [0x00000020]
	unsigned long                                      bYakaAllowPlay : 1;                          // 0x0900 (0x0004) [0x00000040]
	unsigned long                                      bHoldingButton_A : 1;                        // 0x0900 (0x0004) [0x00000080]
	unsigned long                                      bHoldingAFromRoadieRun : 1;                  // 0x0900 (0x0004) [0x00000100]
	unsigned long                                      bRun2CoverAnyDirection : 1;                  // 0x0900 (0x0004) [0x00000200]
	unsigned long                                      bBreakFromCover : 1;                         // 0x0900 (0x0004) [0x00000400]
	unsigned long                                      bDebugCover : 1;                             // 0x0900 (0x0004) [0x00000800]
	unsigned long                                      bServerMoveCoverActive : 1;                  // 0x0900 (0x0004) [0x00001000]
	unsigned long                                      bForceClubCollisionMode : 1;                 // 0x0900 (0x0004) [0x00002000]
	unsigned long                                      bUseEmitterPool : 1;                         // 0x0900 (0x0004) [0x00004000]
	unsigned long                                      bShowProjectileTraces : 1;                   // 0x0900 (0x0004) [0x00008000]
	unsigned long                                      bShowInstantTraces : 1;                      // 0x0900 (0x0004) [0x00010000]
	unsigned long                                      bShowInstantTraces2 : 1;                     // 0x0900 (0x0004) [0x00020000]
	unsigned long                                      bShowGrenadeTestTraces : 1;                  // 0x0900 (0x0004) [0x00040000]
	unsigned long                                      bForceUseDebugAnimCamera : 1;                // 0x0900 (0x0004) [0x00080000]
	unsigned long                                      bForceUseDebugAnimCamera2 : 1;               // 0x0900 (0x0004) [0x00100000]
	unsigned long                                      bIsAiming : 1;                               // 0x0900 (0x0004) [0x00200000]
	unsigned long                                      bIsCrouching : 1;                            // 0x0900 (0x0004) [0x00400000]
	unsigned long                                      bDoingRessurect : 1;                         // 0x0900 (0x0004) [0x00800000]
	unsigned long                                      bDoingFatality : 1;                          // 0x0900 (0x0004) [0x01000000]
	unsigned long                                      bFatalityDone : 1;                           // 0x0900 (0x0004) [0x02000000]
	unsigned long                                      NeedToSpawnGrenade : 1;                      // 0x0900 (0x0004) [0x04000000]
	unsigned long                                      bShowStateDebugInfo : 1;                     // 0x0900 (0x0004) [0x08000000]
	unsigned long                                      bShowQuickStatsInfo : 1;                     // 0x0900 (0x0004) [0x10000000]
	unsigned long                                      bShowAvatarFieldsDebugInfo : 1;              // 0x0900 (0x0004) [0x20000000]
	unsigned long                                      bPlayerMoveStartTimeValid : 1;               // 0x0900 (0x0004) [0x40000000]
	unsigned long                                      FakeDeathScored : 1;                         // 0x0900 (0x0004) [0x80000000]
	unsigned long                                      ActivePlayingEmoteHideWeapon : 1;            // 0x0904 (0x0004) [0x00000001]
	unsigned long                                      ActivePlayingEmoteLockMovement : 1;          // 0x0904 (0x0004) [0x00000002]
	unsigned long                                      bPlayingEmoteMovementInputReleased : 1;      // 0x0904 (0x0004) [0x00000004]
	unsigned long                                      bPlayingEmoteFireInputReleased : 1;          // 0x0904 (0x0004) [0x00000008]
	unsigned long                                      bManualVelocityMode : 1;                     // 0x0904 (0x0004) [0x00000010]
	unsigned long                                      bWantsManualMeleeVelocityMode : 1;           // 0x0904 (0x0004) [0x00000020]
	unsigned long                                      ccrepstats_InitializeOnStartup : 1;          // 0x0904 (0x0004) [0x00000040]
	unsigned long                                      ccrepstats_WriteReplicationLog : 1;          // 0x0904 (0x0004) [0x00000080]
	unsigned long                                      ccrepstats_UsePeriodProfiling : 1;           // 0x0904 (0x0004) [0x00000100]
	unsigned long                                      bEnableGibs : 1;                             // 0x0904 (0x0004) [0x00000200]
	unsigned long                                      QuestsReplicated : 1;                        // 0x0904 (0x0004) [0x00000400]
	float                                              AFKToggleTime;                               // 0x0908 (0x0004)
	float                                              AFKKickTime;                                 // 0x090C (0x0004)
	int                                                SavedTeam;                                   // 0x0910 (0x0004)
	TArray< int >                                      ExtraActions;                                // 0x0914 (0x000C)
	class APlayerController*                           GMFollow;                                    // 0x0920 (0x0004)
	int                                                ViewTargetId;                                // 0x0924 (0x0004)
	float                                              SpectatorSprintModifier;                     // 0x0928 (0x0004)
	float                                              SpectatorRadiusModifier;                     // 0x092C (0x0004)
	struct FString                                     FollowName;                                  // 0x0930 (0x000C)
	class APawn*                                       FollowPawn;                                  // 0x093C (0x0004)
	struct FVector                                     FollowLocSmooth;                             // 0x0940 (0x000C)
	struct FRotator                                    FollowRotSmooth;                             // 0x094C (0x000C)
	int                                                LevelsStreamStarted;                         // 0x0958 (0x0004)
	unsigned char                                      SniperVisionState;                           // 0x095C (0x0001)
	unsigned char                                      NoMovementBase_EnteringPhysics;              // 0x095D (0x0001)
	unsigned char                                      PlayEmote_EnteringPhysics;                   // 0x095E (0x0001)
	float                                              LastStartTime;                               // 0x0960 (0x0004)
	float                                              TotalRespawnTimesResetTime;                  // 0x0964 (0x0004)
	struct FViewShakeInfo                              CurrentViewShake;                            // 0x0968 (0x0038)
	void*                                              CameraAnimPlayer;                            // 0x09A0 (0x0004)
	void*                                              DamageCameraAnim;                            // 0x09A4 (0x0004)
	int                                                DeadSecondsPassed;                           // 0x09A8 (0x0004)
	int                                                SpawnWorldTime;                              // 0x09AC (0x0004)
	float                                              RoadieRunTimer;                              // 0x09B0 (0x0004)
	float                                              CoverEnterHoldTime;                          // 0x09B4 (0x0004)
	float                                              MinCoverBreakThreshold;                      // 0x09B8 (0x0004)
	float                                              MaxCoverBreakThreshold;                      // 0x09BC (0x0004)
	float                                              RemappedJoyRight;                            // 0x09C0 (0x0004)
	float                                              RemappedJoyUp;                               // 0x09C4 (0x0004)
	struct FRotator                                    ControlsRemapRotation;                       // 0x09C8 (0x000C)
	float                                              CannotEvadeIntoCoverDelay;                   // 0x09D4 (0x0004)
	float                                              EvadeRetriggerDelay;                         // 0x09D8 (0x0004)
	float                                              CoverTransitionTime;                         // 0x09DC (0x0004)
	float                                              CoverTransitionCountHold;                    // 0x09E0 (0x0004)
	float                                              CoverTransitionCountDown;                    // 0x09E4 (0x0004)
	float                                              CoverEnterTransitionTime;                    // 0x09E8 (0x0004)
	float                                              DeadZoneThreshold;                           // 0x09EC (0x0004)
	float                                              LeftLimit;                                   // 0x09F0 (0x0004)
	float                                              RightLimit;                                  // 0x09F4 (0x0004)
	struct FVector                                     SprintAccel;                                 // 0x09F8 (0x000C)
	float                                              CurrSprintRotInterpTime;                     // 0x0A04 (0x0004)
	float                                              CurrRotInterpTime;                           // 0x0A08 (0x0004)
	float                                              SprintStrafeModifier;                        // 0x0A0C (0x0004)
	float                                              SprintRotInterpTime;                         // 0x0A10 (0x0004)
	float                                              RotInterpTime;                               // 0x0A14 (0x0004)
	struct FRotator                                    PawnSaveRotation;                            // 0x0A18 (0x000C)
	class APawn*                                       SavedDeadPawn;                               // 0x0A24 (0x0004)
	class APawn*                                       SavedKillerPawn;                             // 0x0A28 (0x0004)
	class APawn*                                       DamageActionPawn;                            // 0x0A2C (0x0004)
	TArray< void* >                                    LevelCameras;                                // 0x0A30 (0x000C)
	TArray< class UClass* >                            DeadCameraSwitchersClasses;                  // 0x0A3C (0x000C)
	TArray< void* >                                    DeadCameraSwitchers;                         // 0x0A48 (0x000C)
	int                                                DeadCameraSwitcherIndex;                     // 0x0A54 (0x0004)
	float                                              MinDeadCameraOffset;                         // 0x0A58 (0x0004)
	float                                              MaxDeadCameraOffset;                         // 0x0A5C (0x0004)
	float                                              DeadCameraOffsetSpeed;                       // 0x0A60 (0x0004)
	float                                              DeadCameraFirstRotationSpeed;                // 0x0A64 (0x0004)
	float                                              DeadStateStartTime;                          // 0x0A68 (0x0004)
	float                                              DeadCameraKillerYaw;                         // 0x0A6C (0x0004)
	float                                              DeadCameraKilledYaw;                         // 0x0A70 (0x0004)
	float                                              DeadCameraFirstRotationTime;                 // 0x0A74 (0x0004)
	int                                                TotalDamageGet;                              // 0x0A78 (0x0004)
	void*                                              SuicideGrenadePreset;                        // 0x0A7C (0x0004)
	struct FActionBar_Ability                          ActionBar_Abilities[ 5 ];                    // 0x0A80 (0x0118)
	void*                                              ActionBar_Abilities_Ability[ 5 ];            // 0x0B98 (0x0014)
	TArray< class ACCPlaceableItem* >                  PlacedItems;                                 // 0x0BAC (0x000C)
	class ACCShield*                                   Shield;                                      // 0x0BB8 (0x0004)
	class ACCTurret*                                   Turret;                                      // 0x0BBC (0x0004)
	struct FString                                     ObjectStatesDebugStrings[ 16 ];              // 0x0BC0 (0x00C0)
	struct FString                                     ActionManagerDebugStrings[ 16 ];             // 0x0C80 (0x00C0)
	TArray< void* >                                    QuickStatsObjects;                           // 0x0D40 (0x000C)
	struct FString                                     QuickStatsDebugStrings[ 16 ];                // 0x0D4C (0x00C0)
	TArray< struct FName >                             DebugingAvatarFields;                        // 0x0E0C (0x000C)
	struct FString                                     AvatarFieldsDebugInfo;                       // 0x0E18 (0x000C)
	void*                                              ServerActionManager;                         // 0x0E24 (0x0004)
	void*                                              ClientActionManager;                         // 0x0E28 (0x0004)
	void*                                              MainActionManager;                           // 0x0E2C (0x0004)
	void*                                              ActionSystemPropertyViewer;                  // 0x0E30 (0x0004)
	float                                              PlayerMoveStartTime;                         // 0x0E34 (0x0004)
	struct FVector                                     PlayerMoveSavedAcceleration;                 // 0x0E38 (0x000C)
	float                                              PlayerMoveSavingAccTime;                     // 0x0E44 (0x0004)
	float                                              PlayerMoveSavingAccTimeStrafe;               // 0x0E48 (0x0004)
	float                                              ZeroAccelerationTime;                        // 0x0E4C (0x0004)
	float                                              PlayerMoveZeroAccRestoreTime;                // 0x0E50 (0x0004)
	TArray< struct FName >                             InstanceEmotes;                              // 0x0E54 (0x000C)
	int                                                InstanceEmotesIndex;                         // 0x0E60 (0x0004)
	struct FName                                       ActivePlayingEmoteName;                      // 0x0E64 (0x0008)
	float                                              ActivePlayingEmoteLength;                    // 0x0E6C (0x0004)
	float                                              LastEmoteTime;                               // 0x0E70 (0x0004)
	struct FVector                                     ManualVelocityValue;                         // 0x0E74 (0x000C)
	struct FName                                       MeleeDirectionMove_ForceCameraDesc;          // 0x0E80 (0x0008)
	struct FRotator                                    MeleeDirectionMove_InitialViewRotation;      // 0x0E88 (0x000C)
	float                                              RollingCooldown;                             // 0x0E94 (0x0004)
	float                                              RollingCooldownModifier;                     // 0x0E98 (0x0004)
	float                                              RollingSpeedModifier;                        // 0x0E9C (0x0004)
	float                                              LastRollingFinishTime;                       // 0x0EA0 (0x0004)
	int                                                NumOfRolls;                                  // 0x0EA4 (0x0004)
	float                                              RollingStateStartTime;                       // 0x0EA8 (0x0004)
	struct FRotator                                    RollingStateStartControllerRotation;         // 0x0EAC (0x000C)
	struct FRotator                                    RollingStateStartPawnRotation;               // 0x0EB8 (0x000C)
	int                                                FrozenAndInputLocked_Counter;                // 0x0EC4 (0x0004)
	float                                              ccrepstats_ProfilePeriod;                    // 0x0EC8 (0x0004)
	void*                                              ItemPack;                                    // 0x0ECC (0x0004)
	void*                                              FlightEmitter;                               // 0x0ED0 (0x0004)
	struct FName                                       InvisAbilityName;                            // 0x0ED4 (0x0008)
	struct FVector                                     LastServerPositionBeforeFixup;               // 0x0EDC (0x000C)
	float                                              LastPositionUpdateRecievedTime;              // 0x0EE8 (0x0004)
	struct FPawnBoneInfo                               PawnBoneInfoStruct;                          // 0x0EEC (0x001C)
	void*                                              SpiralRocketReplicationProxy;                // 0x0F08 (0x0004)
	int                                                TheControllerID;                             // 0x0F0C (0x0004)
	void*                                              RPCStackSessionManager;                      // 0x0F10 (0x0004)
	void*                                              GlobalInstanceParamsInstance;                // 0x0F14 (0x0004)
	TArray< void* >                                    StoreInstances;                              // 0x0F18 (0x000C)
	struct FName                                       PendingDelayedEffectsManagerState;           // 0x0F24 (0x0008)
	int                                                PendingDelayedEffectsManagerStateDoHide;     // 0x0F2C (0x0004)
	float                                              Client_Avatar_BNS_HealingEffectModifier;     // 0x0F30 (0x0004)
	float                                              Client_Avatar_BNS_DrugsNegativeEffectModifier; // 0x0F34 (0x0004)
	TArray< struct FActiveQuest >                      Quests;                                      // 0x0F38 (0x000C)
	TArray< void* >                                    KismetLocalVariables;                        // 0x0F44 (0x000C)

	// VIPSittingLogic
	// SittingLogic
	// MatchOver
	// FrozenAndInputLocked
	// PlayingEmote
	// LMGCharge
	// GrenadeThrowingNoMovement
	// NoMovementBase
	// MeleeDirectionMove
	// CCAIDebugSpectating
	// PlayerTakingCover
	// RoundEnded
	// WaitingForPlayerStart
	// Dead
	// WaitingForPawn
	// Spectating
	// Sprint
	// PlayerWaiting
	// PlayerWalking
	// Rolling
	// FixedDirectionMove
	// ManualVelocityMove
	// CustomDirectionMove
	// WaitingYaka

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCInstanceController" );

		return ClassPointer;
	};

public:
	void ToggleTriangleBlendDebug ()
	{
		static UFunction* pfnToggleTriangleBlendDebug = NULL;

		if ( !pfnToggleTriangleBlendDebug )
			pfnToggleTriangleBlendDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleTriangleBlendDebug" );

		ACCInstanceController_execToggleTriangleBlendDebug_Parms ToggleTriangleBlendDebug_Parms;

		this->ProcessEvent( pfnToggleTriangleBlendDebug, &ToggleTriangleBlendDebug_Parms, NULL );
	};

	void SetTriangleBlendParams ( float InTriangleMovingCurve, float InTriangleMovingStartSpeed, float InTriangleMovingMiddleSpeed, float InTriangleMovingFinishSpeed )
	{
		static UFunction* pfnSetTriangleBlendParams = NULL;

		if ( !pfnSetTriangleBlendParams )
			pfnSetTriangleBlendParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetTriangleBlendParams" );

		ACCInstanceController_execSetTriangleBlendParams_Parms SetTriangleBlendParams_Parms;
		SetTriangleBlendParams_Parms.InTriangleMovingCurve = InTriangleMovingCurve;
		SetTriangleBlendParams_Parms.InTriangleMovingStartSpeed = InTriangleMovingStartSpeed;
		SetTriangleBlendParams_Parms.InTriangleMovingMiddleSpeed = InTriangleMovingMiddleSpeed;
		SetTriangleBlendParams_Parms.InTriangleMovingFinishSpeed = InTriangleMovingFinishSpeed;

		this->ProcessEvent( pfnSetTriangleBlendParams, &SetTriangleBlendParams_Parms, NULL );
	};

	void* GetTriangleBlendDDDActor ()
	{
		static UFunction* pfnGetTriangleBlendDDDActor = NULL;

		if ( !pfnGetTriangleBlendDDDActor )
			pfnGetTriangleBlendDDDActor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetTriangleBlendDDDActor" );

		ACCInstanceController_execGetTriangleBlendDDDActor_Parms GetTriangleBlendDDDActor_Parms;

		this->ProcessEvent( pfnGetTriangleBlendDDDActor, &GetTriangleBlendDDDActor_Parms, NULL );

		return GetTriangleBlendDDDActor_Parms.ReturnValue;
	};

	void EndLevelsStream ()
	{
		static UFunction* pfnEndLevelsStream = NULL;

		if ( !pfnEndLevelsStream )
			pfnEndLevelsStream = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EndLevelsStream" );

		ACCInstanceController_execEndLevelsStream_Parms EndLevelsStream_Parms;

		this->ProcessEvent( pfnEndLevelsStream, &EndLevelsStream_Parms, NULL );
	};

	void StartLevelsStream ()
	{
		static UFunction* pfnStartLevelsStream = NULL;

		if ( !pfnStartLevelsStream )
			pfnStartLevelsStream = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartLevelsStream" );

		ACCInstanceController_execStartLevelsStream_Parms StartLevelsStream_Parms;

		this->ProcessEvent( pfnStartLevelsStream, &StartLevelsStream_Parms, NULL );
	};

	void GetFNameTotalCount ()
	{
		static UFunction* pfnGetFNameTotalCount = NULL;

		if ( !pfnGetFNameTotalCount )
			pfnGetFNameTotalCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetFNameTotalCount" );

		ACCInstanceController_execGetFNameTotalCount_Parms GetFNameTotalCount_Parms;

		this->ProcessEvent( pfnGetFNameTotalCount, &GetFNameTotalCount_Parms, NULL );
	};

	void GetFNameTotalCountNative ( int* NumAnsiNames, int* NumUnicodeNames, int* NamesLength )
	{
		static UFunction* pfnGetFNameTotalCountNative = NULL;

		if ( !pfnGetFNameTotalCountNative )
			pfnGetFNameTotalCountNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetFNameTotalCountNative" );

		ACCInstanceController_execGetFNameTotalCountNative_Parms GetFNameTotalCountNative_Parms;

		pfnGetFNameTotalCountNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFNameTotalCountNative, &GetFNameTotalCountNative_Parms, NULL );
		pfnGetFNameTotalCountNative->FunctionFlags |= 0x400;

		if ( NumAnsiNames )
			*NumAnsiNames = GetFNameTotalCountNative_Parms.NumAnsiNames; // CPF_OutParm
		if ( NumUnicodeNames )
			*NumUnicodeNames = GetFNameTotalCountNative_Parms.NumUnicodeNames; // CPF_OutParm
		if ( NamesLength )
			*NamesLength = GetFNameTotalCountNative_Parms.NamesLength; // CPF_OutParm
	};

	void ttForceBotsToAttack ()
	{
		static UFunction* pfnttForceBotsToAttack = NULL;

		if ( !pfnttForceBotsToAttack )
			pfnttForceBotsToAttack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttForceBotsToAttack" );

		ACCInstanceController_execttForceBotsToAttack_Parms ttForceBotsToAttack_Parms;

		this->ProcessEvent( pfnttForceBotsToAttack, &ttForceBotsToAttack_Parms, NULL );
	};

	void ttServerForceBotsToAttack ()
	{
		static UFunction* pfnttServerForceBotsToAttack = NULL;

		if ( !pfnttServerForceBotsToAttack )
			pfnttServerForceBotsToAttack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttServerForceBotsToAttack" );

		ACCInstanceController_execttServerForceBotsToAttack_Parms ttServerForceBotsToAttack_Parms;

		this->ProcessEvent( pfnttServerForceBotsToAttack, &ttServerForceBotsToAttack_Parms, NULL );
	};

	void StripGirlRemoveUpperClothes ()
	{
		static UFunction* pfnStripGirlRemoveUpperClothes = NULL;

		if ( !pfnStripGirlRemoveUpperClothes )
			pfnStripGirlRemoveUpperClothes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlRemoveUpperClothes" );

		ACCInstanceController_execStripGirlRemoveUpperClothes_Parms StripGirlRemoveUpperClothes_Parms;

		this->ProcessEvent( pfnStripGirlRemoveUpperClothes, &StripGirlRemoveUpperClothes_Parms, NULL );
	};

	void StripGirlFinishVipEx ()
	{
		static UFunction* pfnStripGirlFinishVipEx = NULL;

		if ( !pfnStripGirlFinishVipEx )
			pfnStripGirlFinishVipEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlFinishVipEx" );

		ACCInstanceController_execStripGirlFinishVipEx_Parms StripGirlFinishVipEx_Parms;

		this->ProcessEvent( pfnStripGirlFinishVipEx, &StripGirlFinishVipEx_Parms, NULL );
	};

	void StripGirlStartVIPEx ( int VisualId, int ProgramId )
	{
		static UFunction* pfnStripGirlStartVIPEx = NULL;

		if ( !pfnStripGirlStartVIPEx )
			pfnStripGirlStartVIPEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlStartVIPEx" );

		ACCInstanceController_execStripGirlStartVIPEx_Parms StripGirlStartVIPEx_Parms;
		StripGirlStartVIPEx_Parms.VisualId = VisualId;
		StripGirlStartVIPEx_Parms.ProgramId = ProgramId;

		this->ProcessEvent( pfnStripGirlStartVIPEx, &StripGirlStartVIPEx_Parms, NULL );
	};

	void StripGirlStartVIP ()
	{
		static UFunction* pfnStripGirlStartVIP = NULL;

		if ( !pfnStripGirlStartVIP )
			pfnStripGirlStartVIP = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlStartVIP" );

		ACCInstanceController_execStripGirlStartVIP_Parms StripGirlStartVIP_Parms;

		this->ProcessEvent( pfnStripGirlStartVIP, &StripGirlStartVIP_Parms, NULL );
	};

	void StripGirlSetVisual ( int GirlIndex, int VisualId )
	{
		static UFunction* pfnStripGirlSetVisual = NULL;

		if ( !pfnStripGirlSetVisual )
			pfnStripGirlSetVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlSetVisual" );

		ACCInstanceController_execStripGirlSetVisual_Parms StripGirlSetVisual_Parms;
		StripGirlSetVisual_Parms.GirlIndex = GirlIndex;
		StripGirlSetVisual_Parms.VisualId = VisualId;

		this->ProcessEvent( pfnStripGirlSetVisual, &StripGirlSetVisual_Parms, NULL );
	};

	void StripGirlSetProgram ( int GirlIndex, int Dance1, int Dance2, int Dance3 )
	{
		static UFunction* pfnStripGirlSetProgram = NULL;

		if ( !pfnStripGirlSetProgram )
			pfnStripGirlSetProgram = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StripGirlSetProgram" );

		ACCInstanceController_execStripGirlSetProgram_Parms StripGirlSetProgram_Parms;
		StripGirlSetProgram_Parms.GirlIndex = GirlIndex;
		StripGirlSetProgram_Parms.Dance1 = Dance1;
		StripGirlSetProgram_Parms.Dance2 = Dance2;
		StripGirlSetProgram_Parms.Dance3 = Dance3;

		this->ProcessEvent( pfnStripGirlSetProgram, &StripGirlSetProgram_Parms, NULL );
	};

	void RequestDemoRecordStop ()
	{
		static UFunction* pfnRequestDemoRecordStop = NULL;

		if ( !pfnRequestDemoRecordStop )
			pfnRequestDemoRecordStop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RequestDemoRecordStop" );

		ACCInstanceController_execRequestDemoRecordStop_Parms RequestDemoRecordStop_Parms;

		this->ProcessEvent( pfnRequestDemoRecordStop, &RequestDemoRecordStop_Parms, NULL );
	};

	void ServerRequestDemoRecordStop ()
	{
		static UFunction* pfnServerRequestDemoRecordStop = NULL;

		if ( !pfnServerRequestDemoRecordStop )
			pfnServerRequestDemoRecordStop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRequestDemoRecordStop" );

		ACCInstanceController_execServerRequestDemoRecordStop_Parms ServerRequestDemoRecordStop_Parms;

		this->ProcessEvent( pfnServerRequestDemoRecordStop, &ServerRequestDemoRecordStop_Parms, NULL );
	};

	void RequestDemoRecord ( struct FString demoname )
	{
		static UFunction* pfnRequestDemoRecord = NULL;

		if ( !pfnRequestDemoRecord )
			pfnRequestDemoRecord = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RequestDemoRecord" );

		ACCInstanceController_execRequestDemoRecord_Parms RequestDemoRecord_Parms;
		memcpy( &RequestDemoRecord_Parms.demoname, &demoname, 0xC );

		this->ProcessEvent( pfnRequestDemoRecord, &RequestDemoRecord_Parms, NULL );
	};

	void ServerRequestDemoRecord ( struct FString demoname )
	{
		static UFunction* pfnServerRequestDemoRecord = NULL;

		if ( !pfnServerRequestDemoRecord )
			pfnServerRequestDemoRecord = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRequestDemoRecord" );

		ACCInstanceController_execServerRequestDemoRecord_Parms ServerRequestDemoRecord_Parms;
		memcpy( &ServerRequestDemoRecord_Parms.demoname, &demoname, 0xC );

		this->ProcessEvent( pfnServerRequestDemoRecord, &ServerRequestDemoRecord_Parms, NULL );
	};

	void dbgPrintWeaponPresetsGRTP ()
	{
		static UFunction* pfndbgPrintWeaponPresetsGRTP = NULL;

		if ( !pfndbgPrintWeaponPresetsGRTP )
			pfndbgPrintWeaponPresetsGRTP = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.dbgPrintWeaponPresetsGRTP" );

		ACCInstanceController_execdbgPrintWeaponPresetsGRTP_Parms dbgPrintWeaponPresetsGRTP_Parms;

		this->ProcessEvent( pfndbgPrintWeaponPresetsGRTP, &dbgPrintWeaponPresetsGRTP_Parms, NULL );
	};

	void ReSaveWeaponPresets ()
	{
		static UFunction* pfnReSaveWeaponPresets = NULL;

		if ( !pfnReSaveWeaponPresets )
			pfnReSaveWeaponPresets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReSaveWeaponPresets" );

		ACCInstanceController_execReSaveWeaponPresets_Parms ReSaveWeaponPresets_Parms;

		this->ProcessEvent( pfnReSaveWeaponPresets, &ReSaveWeaponPresets_Parms, NULL );
	};

	void ServerJump ( struct FVector VelocityDelta )
	{
		static UFunction* pfnServerJump = NULL;

		if ( !pfnServerJump )
			pfnServerJump = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerJump" );

		ACCInstanceController_execServerJump_Parms ServerJump_Parms;
		memcpy( &ServerJump_Parms.VelocityDelta, &VelocityDelta, 0xC );

		this->ProcessEvent( pfnServerJump, &ServerJump_Parms, NULL );
	};

	void ClientJump ( struct FVector VelocityDelta )
	{
		static UFunction* pfnClientJump = NULL;

		if ( !pfnClientJump )
			pfnClientJump = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientJump" );

		ACCInstanceController_execClientJump_Parms ClientJump_Parms;
		memcpy( &ClientJump_Parms.VelocityDelta, &VelocityDelta, 0xC );

		this->ProcessEvent( pfnClientJump, &ClientJump_Parms, NULL );
	};

	void DoJump ( struct FVector VelocityDelta )
	{
		static UFunction* pfnDoJump = NULL;

		if ( !pfnDoJump )
			pfnDoJump = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoJump" );

		ACCInstanceController_execDoJump_Parms DoJump_Parms;
		memcpy( &DoJump_Parms.VelocityDelta, &VelocityDelta, 0xC );

		this->ProcessEvent( pfnDoJump, &DoJump_Parms, NULL );
	};

	void fwd_jmp ()
	{
		static UFunction* pfnfwd_jmp = NULL;

		if ( !pfnfwd_jmp )
			pfnfwd_jmp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.fwd_jmp" );

		ACCInstanceController_execfwd_jmp_Parms fwd_jmp_Parms;

		this->ProcessEvent( pfnfwd_jmp, &fwd_jmp_Parms, NULL );
	};

	void jmp ( float X, float Y, float Z )
	{
		static UFunction* pfnjmp = NULL;

		if ( !pfnjmp )
			pfnjmp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.jmp" );

		ACCInstanceController_execjmp_Parms jmp_Parms;
		jmp_Parms.X = X;
		jmp_Parms.Y = Y;
		jmp_Parms.Z = Z;

		this->ProcessEvent( pfnjmp, &jmp_Parms, NULL );
	};

	void ServerReloadWeaponPresets ()
	{
		static UFunction* pfnServerReloadWeaponPresets = NULL;

		if ( !pfnServerReloadWeaponPresets )
			pfnServerReloadWeaponPresets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerReloadWeaponPresets" );

		ACCInstanceController_execServerReloadWeaponPresets_Parms ServerReloadWeaponPresets_Parms;

		this->ProcessEvent( pfnServerReloadWeaponPresets, &ServerReloadWeaponPresets_Parms, NULL );
	};

	void ReloadWeaponPresets ()
	{
		static UFunction* pfnReloadWeaponPresets = NULL;

		if ( !pfnReloadWeaponPresets )
			pfnReloadWeaponPresets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReloadWeaponPresets" );

		ACCInstanceController_execReloadWeaponPresets_Parms ReloadWeaponPresets_Parms;

		this->ProcessEvent( pfnReloadWeaponPresets, &ReloadWeaponPresets_Parms, NULL );
	};

	void ReloadSpreadPresets ()
	{
		static UFunction* pfnReloadSpreadPresets = NULL;

		if ( !pfnReloadSpreadPresets )
			pfnReloadSpreadPresets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReloadSpreadPresets" );

		ACCInstanceController_execReloadSpreadPresets_Parms ReloadSpreadPresets_Parms;

		this->ProcessEvent( pfnReloadSpreadPresets, &ReloadSpreadPresets_Parms, NULL );
	};

	void DoStartGrenadeRecoil ( float DamageScale )
	{
		static UFunction* pfnDoStartGrenadeRecoil = NULL;

		if ( !pfnDoStartGrenadeRecoil )
			pfnDoStartGrenadeRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoStartGrenadeRecoil" );

		ACCInstanceController_execDoStartGrenadeRecoil_Parms DoStartGrenadeRecoil_Parms;
		DoStartGrenadeRecoil_Parms.DamageScale = DamageScale;

		this->ProcessEvent( pfnDoStartGrenadeRecoil, &DoStartGrenadeRecoil_Parms, NULL );
	};

	void TestGrenadeRecoil ( float DamageScale )
	{
		static UFunction* pfnTestGrenadeRecoil = NULL;

		if ( !pfnTestGrenadeRecoil )
			pfnTestGrenadeRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestGrenadeRecoil" );

		ACCInstanceController_execTestGrenadeRecoil_Parms TestGrenadeRecoil_Parms;
		TestGrenadeRecoil_Parms.DamageScale = DamageScale;

		this->ProcessEvent( pfnTestGrenadeRecoil, &TestGrenadeRecoil_Parms, NULL );
	};

	void TestDamageRecoilExEnd ()
	{
		static UFunction* pfnTestDamageRecoilExEnd = NULL;

		if ( !pfnTestDamageRecoilExEnd )
			pfnTestDamageRecoilExEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestDamageRecoilExEnd" );

		ACCInstanceController_execTestDamageRecoilExEnd_Parms TestDamageRecoilExEnd_Parms;

		this->ProcessEvent( pfnTestDamageRecoilExEnd, &TestDamageRecoilExEnd_Parms, NULL );
	};

	void TestDamageRecoilEx ( float Interval )
	{
		static UFunction* pfnTestDamageRecoilEx = NULL;

		if ( !pfnTestDamageRecoilEx )
			pfnTestDamageRecoilEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestDamageRecoilEx" );

		ACCInstanceController_execTestDamageRecoilEx_Parms TestDamageRecoilEx_Parms;
		TestDamageRecoilEx_Parms.Interval = Interval;

		this->ProcessEvent( pfnTestDamageRecoilEx, &TestDamageRecoilEx_Parms, NULL );
	};

	void DoAddDamageRecoil ( float DamageScale, struct FVector PawnSpaceToShooterDir )
	{
		static UFunction* pfnDoAddDamageRecoil = NULL;

		if ( !pfnDoAddDamageRecoil )
			pfnDoAddDamageRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoAddDamageRecoil" );

		ACCInstanceController_execDoAddDamageRecoil_Parms DoAddDamageRecoil_Parms;
		DoAddDamageRecoil_Parms.DamageScale = DamageScale;
		memcpy( &DoAddDamageRecoil_Parms.PawnSpaceToShooterDir, &PawnSpaceToShooterDir, 0xC );

		this->ProcessEvent( pfnDoAddDamageRecoil, &DoAddDamageRecoil_Parms, NULL );
	};

	void TestDamageRecoil ( float DamageScale, float DirX, float DirY, float DirZ )
	{
		static UFunction* pfnTestDamageRecoil = NULL;

		if ( !pfnTestDamageRecoil )
			pfnTestDamageRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestDamageRecoil" );

		ACCInstanceController_execTestDamageRecoil_Parms TestDamageRecoil_Parms;
		TestDamageRecoil_Parms.DamageScale = DamageScale;
		TestDamageRecoil_Parms.DirX = DirX;
		TestDamageRecoil_Parms.DirY = DirY;
		TestDamageRecoil_Parms.DirZ = DirZ;

		this->ProcessEvent( pfnTestDamageRecoil, &TestDamageRecoil_Parms, NULL );
	};

	void ReloadRecoilPresets ()
	{
		static UFunction* pfnReloadRecoilPresets = NULL;

		if ( !pfnReloadRecoilPresets )
			pfnReloadRecoilPresets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReloadRecoilPresets" );

		ACCInstanceController_execReloadRecoilPresets_Parms ReloadRecoilPresets_Parms;

		this->ProcessEvent( pfnReloadRecoilPresets, &ReloadRecoilPresets_Parms, NULL );
	};

	void ResetGIPVisualParams ()
	{
		static UFunction* pfnResetGIPVisualParams = NULL;

		if ( !pfnResetGIPVisualParams )
			pfnResetGIPVisualParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ResetGIPVisualParams" );

		ACCInstanceController_execResetGIPVisualParams_Parms ResetGIPVisualParams_Parms;

		this->ProcessEvent( pfnResetGIPVisualParams, &ResetGIPVisualParams_Parms, NULL );
	};

	void SetGIPVisualParam ( struct FString ParamName, struct FString ParamValue )
	{
		static UFunction* pfnSetGIPVisualParam = NULL;

		if ( !pfnSetGIPVisualParam )
			pfnSetGIPVisualParam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetGIPVisualParam" );

		ACCInstanceController_execSetGIPVisualParam_Parms SetGIPVisualParam_Parms;
		memcpy( &SetGIPVisualParam_Parms.ParamName, &ParamName, 0xC );
		memcpy( &SetGIPVisualParam_Parms.ParamValue, &ParamValue, 0xC );

		this->ProcessEvent( pfnSetGIPVisualParam, &SetGIPVisualParam_Parms, NULL );
	};

	void ServerRetreiveGIPDamageParams ()
	{
		static UFunction* pfnServerRetreiveGIPDamageParams = NULL;

		if ( !pfnServerRetreiveGIPDamageParams )
			pfnServerRetreiveGIPDamageParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRetreiveGIPDamageParams" );

		ACCInstanceController_execServerRetreiveGIPDamageParams_Parms ServerRetreiveGIPDamageParams_Parms;

		this->ProcessEvent( pfnServerRetreiveGIPDamageParams, &ServerRetreiveGIPDamageParams_Parms, NULL );
	};

	void SendGIPDamageParamsToAll ()
	{
		static UFunction* pfnSendGIPDamageParamsToAll = NULL;

		if ( !pfnSendGIPDamageParamsToAll )
			pfnSendGIPDamageParamsToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SendGIPDamageParamsToAll" );

		ACCInstanceController_execSendGIPDamageParamsToAll_Parms SendGIPDamageParamsToAll_Parms;

		this->ProcessEvent( pfnSendGIPDamageParamsToAll, &SendGIPDamageParamsToAll_Parms, NULL );
	};

	void ServerResetGIPDamageParams ()
	{
		static UFunction* pfnServerResetGIPDamageParams = NULL;

		if ( !pfnServerResetGIPDamageParams )
			pfnServerResetGIPDamageParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerResetGIPDamageParams" );

		ACCInstanceController_execServerResetGIPDamageParams_Parms ServerResetGIPDamageParams_Parms;

		this->ProcessEvent( pfnServerResetGIPDamageParams, &ServerResetGIPDamageParams_Parms, NULL );
	};

	void ServerSetGIPDamageParam ( struct FString ParamName, struct FString ParamValue )
	{
		static UFunction* pfnServerSetGIPDamageParam = NULL;

		if ( !pfnServerSetGIPDamageParam )
			pfnServerSetGIPDamageParam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetGIPDamageParam" );

		ACCInstanceController_execServerSetGIPDamageParam_Parms ServerSetGIPDamageParam_Parms;
		memcpy( &ServerSetGIPDamageParam_Parms.ParamName, &ParamName, 0xC );
		memcpy( &ServerSetGIPDamageParam_Parms.ParamValue, &ParamValue, 0xC );

		this->ProcessEvent( pfnServerSetGIPDamageParam, &ServerSetGIPDamageParam_Parms, NULL );
	};

	float eventGetGIP_HPModifier ()
	{
		static UFunction* pfnGetGIP_HPModifier = NULL;

		if ( !pfnGetGIP_HPModifier )
			pfnGetGIP_HPModifier = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetGIP_HPModifier" );

		ACCInstanceController_eventGetGIP_HPModifier_Parms GetGIP_HPModifier_Parms;

		this->ProcessEvent( pfnGetGIP_HPModifier, &GetGIP_HPModifier_Parms, NULL );

		return GetGIP_HPModifier_Parms.ReturnValue;
	};

	void ClientSetGIPDamageParams ( struct FGIPDamageParams GIPDamageParams )
	{
		static UFunction* pfnClientSetGIPDamageParams = NULL;

		if ( !pfnClientSetGIPDamageParams )
			pfnClientSetGIPDamageParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetGIPDamageParams" );

		ACCInstanceController_execClientSetGIPDamageParams_Parms ClientSetGIPDamageParams_Parms;
		memcpy( &ClientSetGIPDamageParams_Parms.GIPDamageParams, &GIPDamageParams, 0x10 );

		this->ProcessEvent( pfnClientSetGIPDamageParams, &ClientSetGIPDamageParams_Parms, NULL );
	};

	void ResetGIPDamageParams ()
	{
		static UFunction* pfnResetGIPDamageParams = NULL;

		if ( !pfnResetGIPDamageParams )
			pfnResetGIPDamageParams = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ResetGIPDamageParams" );

		ACCInstanceController_execResetGIPDamageParams_Parms ResetGIPDamageParams_Parms;

		this->ProcessEvent( pfnResetGIPDamageParams, &ResetGIPDamageParams_Parms, NULL );
	};

	void SetGIPDamageParam ( struct FString ParamName, struct FString ParamValue )
	{
		static UFunction* pfnSetGIPDamageParam = NULL;

		if ( !pfnSetGIPDamageParam )
			pfnSetGIPDamageParam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetGIPDamageParam" );

		ACCInstanceController_execSetGIPDamageParam_Parms SetGIPDamageParam_Parms;
		memcpy( &SetGIPDamageParam_Parms.ParamName, &ParamName, 0xC );
		memcpy( &SetGIPDamageParam_Parms.ParamValue, &ParamValue, 0xC );

		this->ProcessEvent( pfnSetGIPDamageParam, &SetGIPDamageParam_Parms, NULL );
	};

	class ACCInstanceController* GetLocalPC ()
	{
		static UFunction* pfnGetLocalPC = NULL;

		if ( !pfnGetLocalPC )
			pfnGetLocalPC = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetLocalPC" );

		ACCInstanceController_execGetLocalPC_Parms GetLocalPC_Parms;

		this->ProcessEvent( pfnGetLocalPC, &GetLocalPC_Parms, NULL );

		return GetLocalPC_Parms.ReturnValue;
	};

	int eventGetTheControllerID ()
	{
		static UFunction* pfnGetTheControllerID = NULL;

		if ( !pfnGetTheControllerID )
			pfnGetTheControllerID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetTheControllerID" );

		ACCInstanceController_eventGetTheControllerID_Parms GetTheControllerID_Parms;

		this->ProcessEvent( pfnGetTheControllerID, &GetTheControllerID_Parms, NULL );

		return GetTheControllerID_Parms.ReturnValue;
	};

	void ClientForceSetTheControllerID ( int NewTheControllerID )
	{
		static UFunction* pfnClientForceSetTheControllerID = NULL;

		if ( !pfnClientForceSetTheControllerID )
			pfnClientForceSetTheControllerID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientForceSetTheControllerID" );

		ACCInstanceController_execClientForceSetTheControllerID_Parms ClientForceSetTheControllerID_Parms;
		ClientForceSetTheControllerID_Parms.NewTheControllerID = NewTheControllerID;

		this->ProcessEvent( pfnClientForceSetTheControllerID, &ClientForceSetTheControllerID_Parms, NULL );
	};

	int GenerateTheControllerID ()
	{
		static UFunction* pfnGenerateTheControllerID = NULL;

		if ( !pfnGenerateTheControllerID )
			pfnGenerateTheControllerID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GenerateTheControllerID" );

		ACCInstanceController_execGenerateTheControllerID_Parms GenerateTheControllerID_Parms;

		pfnGenerateTheControllerID->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGenerateTheControllerID, &GenerateTheControllerID_Parms, NULL );
		pfnGenerateTheControllerID->FunctionFlags |= 0x400;

		return GenerateTheControllerID_Parms.ReturnValue;
	};

	void ClientDeliverRPCStackStringLine ( int NetRecursionLevel, int SessionId, int LineID, struct FSSOCallerInfo Dest, struct FString StackStringLine, unsigned long bFinish )
	{
		static UFunction* pfnClientDeliverRPCStackStringLine = NULL;

		if ( !pfnClientDeliverRPCStackStringLine )
			pfnClientDeliverRPCStackStringLine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientDeliverRPCStackStringLine" );

		ACCInstanceController_execClientDeliverRPCStackStringLine_Parms ClientDeliverRPCStackStringLine_Parms;
		ClientDeliverRPCStackStringLine_Parms.NetRecursionLevel = NetRecursionLevel;
		ClientDeliverRPCStackStringLine_Parms.SessionId = SessionId;
		ClientDeliverRPCStackStringLine_Parms.LineID = LineID;
		memcpy( &ClientDeliverRPCStackStringLine_Parms.Dest, &Dest, 0x8 );
		memcpy( &ClientDeliverRPCStackStringLine_Parms.StackStringLine, &StackStringLine, 0xC );
		ClientDeliverRPCStackStringLine_Parms.bFinish = bFinish;

		this->ProcessEvent( pfnClientDeliverRPCStackStringLine, &ClientDeliverRPCStackStringLine_Parms, NULL );
	};

	void ServerDeliverRPCStackStringLine ( int NetRecursionLevel, int SessionId, int LineID, struct FSSOCallerInfo Dest, struct FString StackStringLine, unsigned long bFinish )
	{
		static UFunction* pfnServerDeliverRPCStackStringLine = NULL;

		if ( !pfnServerDeliverRPCStackStringLine )
			pfnServerDeliverRPCStackStringLine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerDeliverRPCStackStringLine" );

		ACCInstanceController_execServerDeliverRPCStackStringLine_Parms ServerDeliverRPCStackStringLine_Parms;
		ServerDeliverRPCStackStringLine_Parms.NetRecursionLevel = NetRecursionLevel;
		ServerDeliverRPCStackStringLine_Parms.SessionId = SessionId;
		ServerDeliverRPCStackStringLine_Parms.LineID = LineID;
		memcpy( &ServerDeliverRPCStackStringLine_Parms.Dest, &Dest, 0x8 );
		memcpy( &ServerDeliverRPCStackStringLine_Parms.StackStringLine, &StackStringLine, 0xC );
		ServerDeliverRPCStackStringLine_Parms.bFinish = bFinish;

		this->ProcessEvent( pfnServerDeliverRPCStackStringLine, &ServerDeliverRPCStackStringLine_Parms, NULL );
	};

	void ClientGetRPCScriptStack ( int NetRecursionLevel, int SessionId, int LineID, struct FSSOCallerInfo FinalDest, int OutcomingRPCId )
	{
		static UFunction* pfnClientGetRPCScriptStack = NULL;

		if ( !pfnClientGetRPCScriptStack )
			pfnClientGetRPCScriptStack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientGetRPCScriptStack" );

		ACCInstanceController_execClientGetRPCScriptStack_Parms ClientGetRPCScriptStack_Parms;
		ClientGetRPCScriptStack_Parms.NetRecursionLevel = NetRecursionLevel;
		ClientGetRPCScriptStack_Parms.SessionId = SessionId;
		ClientGetRPCScriptStack_Parms.LineID = LineID;
		memcpy( &ClientGetRPCScriptStack_Parms.FinalDest, &FinalDest, 0x8 );
		ClientGetRPCScriptStack_Parms.OutcomingRPCId = OutcomingRPCId;

		this->ProcessEvent( pfnClientGetRPCScriptStack, &ClientGetRPCScriptStack_Parms, NULL );
	};

	void ServerGetRPCScriptStack ( int NetRecursionLevel, int SessionId, int LineID, struct FSSOCallerInfo FinalDest, int OutcomingRPCId )
	{
		static UFunction* pfnServerGetRPCScriptStack = NULL;

		if ( !pfnServerGetRPCScriptStack )
			pfnServerGetRPCScriptStack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerGetRPCScriptStack" );

		ACCInstanceController_execServerGetRPCScriptStack_Parms ServerGetRPCScriptStack_Parms;
		ServerGetRPCScriptStack_Parms.NetRecursionLevel = NetRecursionLevel;
		ServerGetRPCScriptStack_Parms.SessionId = SessionId;
		ServerGetRPCScriptStack_Parms.LineID = LineID;
		memcpy( &ServerGetRPCScriptStack_Parms.FinalDest, &FinalDest, 0x8 );
		ServerGetRPCScriptStack_Parms.OutcomingRPCId = OutcomingRPCId;

		this->ProcessEvent( pfnServerGetRPCScriptStack, &ServerGetRPCScriptStack_Parms, NULL );
	};

	void client_EnablePlayerForQuestZone ( void* zone )
	{
		static UFunction* pfnclient_EnablePlayerForQuestZone = NULL;

		if ( !pfnclient_EnablePlayerForQuestZone )
			pfnclient_EnablePlayerForQuestZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.client_EnablePlayerForQuestZone" );

		ACCInstanceController_execclient_EnablePlayerForQuestZone_Parms client_EnablePlayerForQuestZone_Parms;
		client_EnablePlayerForQuestZone_Parms.zone = zone;

		this->ProcessEvent( pfnclient_EnablePlayerForQuestZone, &client_EnablePlayerForQuestZone_Parms, NULL );
	};

	void server_EnablePlayerForQuestZone ( void* zone )
	{
		static UFunction* pfnserver_EnablePlayerForQuestZone = NULL;

		if ( !pfnserver_EnablePlayerForQuestZone )
			pfnserver_EnablePlayerForQuestZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.server_EnablePlayerForQuestZone" );

		ACCInstanceController_execserver_EnablePlayerForQuestZone_Parms server_EnablePlayerForQuestZone_Parms;
		server_EnablePlayerForQuestZone_Parms.zone = zone;

		this->ProcessEvent( pfnserver_EnablePlayerForQuestZone, &server_EnablePlayerForQuestZone_Parms, NULL );
	};

	void client_DisablePlayerForQuestZone ( void* zone, unsigned long bVisited/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnclient_DisablePlayerForQuestZone = NULL;

		if ( !pfnclient_DisablePlayerForQuestZone )
			pfnclient_DisablePlayerForQuestZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.client_DisablePlayerForQuestZone" );

		ACCInstanceController_execclient_DisablePlayerForQuestZone_Parms client_DisablePlayerForQuestZone_Parms;
		client_DisablePlayerForQuestZone_Parms.zone = zone;
		client_DisablePlayerForQuestZone_Parms.bVisited = bVisited;

		this->ProcessEvent( pfnclient_DisablePlayerForQuestZone, &client_DisablePlayerForQuestZone_Parms, NULL );
	};

	void server_DisablePlayerForQuestZone ( void* zone )
	{
		static UFunction* pfnserver_DisablePlayerForQuestZone = NULL;

		if ( !pfnserver_DisablePlayerForQuestZone )
			pfnserver_DisablePlayerForQuestZone = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.server_DisablePlayerForQuestZone" );

		ACCInstanceController_execserver_DisablePlayerForQuestZone_Parms server_DisablePlayerForQuestZone_Parms;
		server_DisablePlayerForQuestZone_Parms.zone = zone;

		this->ProcessEvent( pfnserver_DisablePlayerForQuestZone, &server_DisablePlayerForQuestZone_Parms, NULL );
	};

	void ttSetDrugInjectorLevel ( int Level )
	{
		static UFunction* pfnttSetDrugInjectorLevel = NULL;

		if ( !pfnttSetDrugInjectorLevel )
			pfnttSetDrugInjectorLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttSetDrugInjectorLevel" );

		ACCInstanceController_execttSetDrugInjectorLevel_Parms ttSetDrugInjectorLevel_Parms;
		ttSetDrugInjectorLevel_Parms.Level = Level;

		this->ProcessEvent( pfnttSetDrugInjectorLevel, &ttSetDrugInjectorLevel_Parms, NULL );
	};

	void ServerttSetDrugInjectorLevel ( int Level )
	{
		static UFunction* pfnServerttSetDrugInjectorLevel = NULL;

		if ( !pfnServerttSetDrugInjectorLevel )
			pfnServerttSetDrugInjectorLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerttSetDrugInjectorLevel" );

		ACCInstanceController_execServerttSetDrugInjectorLevel_Parms ServerttSetDrugInjectorLevel_Parms;
		ServerttSetDrugInjectorLevel_Parms.Level = Level;

		this->ProcessEvent( pfnServerttSetDrugInjectorLevel, &ServerttSetDrugInjectorLevel_Parms, NULL );
	};

	void SetShowingAllPawns ( float VisibleStageTime, float InvisibleStageTime )
	{
		static UFunction* pfnSetShowingAllPawns = NULL;

		if ( !pfnSetShowingAllPawns )
			pfnSetShowingAllPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetShowingAllPawns" );

		ACCInstanceController_execSetShowingAllPawns_Parms SetShowingAllPawns_Parms;
		SetShowingAllPawns_Parms.VisibleStageTime = VisibleStageTime;
		SetShowingAllPawns_Parms.InvisibleStageTime = InvisibleStageTime;

		this->ProcessEvent( pfnSetShowingAllPawns, &SetShowingAllPawns_Parms, NULL );
	};

	void ttGetServerMsAndFps ()
	{
		static UFunction* pfnttGetServerMsAndFps = NULL;

		if ( !pfnttGetServerMsAndFps )
			pfnttGetServerMsAndFps = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttGetServerMsAndFps" );

		ACCInstanceController_execttGetServerMsAndFps_Parms ttGetServerMsAndFps_Parms;

		this->ProcessEvent( pfnttGetServerMsAndFps, &ttGetServerMsAndFps_Parms, NULL );
	};

	void ServerttGetServerMsAndFps ()
	{
		static UFunction* pfnServerttGetServerMsAndFps = NULL;

		if ( !pfnServerttGetServerMsAndFps )
			pfnServerttGetServerMsAndFps = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerttGetServerMsAndFps" );

		ACCInstanceController_execServerttGetServerMsAndFps_Parms ServerttGetServerMsAndFps_Parms;

		this->ProcessEvent( pfnServerttGetServerMsAndFps, &ServerttGetServerMsAndFps_Parms, NULL );
	};

	void GetAllObjectsInternal ( struct FString Filter, int SortBy, int SortOrder, TArray< struct FString >* StringList )
	{
		static UFunction* pfnGetAllObjectsInternal = NULL;

		if ( !pfnGetAllObjectsInternal )
			pfnGetAllObjectsInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetAllObjectsInternal" );

		ACCInstanceController_execGetAllObjectsInternal_Parms GetAllObjectsInternal_Parms;
		memcpy( &GetAllObjectsInternal_Parms.Filter, &Filter, 0xC );
		GetAllObjectsInternal_Parms.SortBy = SortBy;
		GetAllObjectsInternal_Parms.SortOrder = SortOrder;

		pfnGetAllObjectsInternal->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAllObjectsInternal, &GetAllObjectsInternal_Parms, NULL );
		pfnGetAllObjectsInternal->FunctionFlags |= 0x400;

		if ( StringList )
			memcpy( StringList, &GetAllObjectsInternal_Parms.StringList, 0xC ); // CPF_OutParm
	};

	void GetAllActorsListInternal ( struct FString Filter, int SortBy, int SortOrder, TArray< struct FString >* StringList )
	{
		static UFunction* pfnGetAllActorsListInternal = NULL;

		if ( !pfnGetAllActorsListInternal )
			pfnGetAllActorsListInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetAllActorsListInternal" );

		ACCInstanceController_execGetAllActorsListInternal_Parms GetAllActorsListInternal_Parms;
		memcpy( &GetAllActorsListInternal_Parms.Filter, &Filter, 0xC );
		GetAllActorsListInternal_Parms.SortBy = SortBy;
		GetAllActorsListInternal_Parms.SortOrder = SortOrder;

		pfnGetAllActorsListInternal->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAllActorsListInternal, &GetAllActorsListInternal_Parms, NULL );
		pfnGetAllActorsListInternal->FunctionFlags |= 0x400;

		if ( StringList )
			memcpy( StringList, &GetAllActorsListInternal_Parms.StringList, 0xC ); // CPF_OutParm
	};

	void ServerPrintAllObjects ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnServerPrintAllObjects = NULL;

		if ( !pfnServerPrintAllObjects )
			pfnServerPrintAllObjects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerPrintAllObjects" );

		ACCInstanceController_execServerPrintAllObjects_Parms ServerPrintAllObjects_Parms;
		memcpy( &ServerPrintAllObjects_Parms.Filter, &Filter, 0xC );
		ServerPrintAllObjects_Parms.SortBy = SortBy;
		ServerPrintAllObjects_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnServerPrintAllObjects, &ServerPrintAllObjects_Parms, NULL );
	};

	void ServerPrintAllActors ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnServerPrintAllActors = NULL;

		if ( !pfnServerPrintAllActors )
			pfnServerPrintAllActors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerPrintAllActors" );

		ACCInstanceController_execServerPrintAllActors_Parms ServerPrintAllActors_Parms;
		memcpy( &ServerPrintAllActors_Parms.Filter, &Filter, 0xC );
		ServerPrintAllActors_Parms.SortBy = SortBy;
		ServerPrintAllActors_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnServerPrintAllActors, &ServerPrintAllActors_Parms, NULL );
	};

	void PrintAllObjects ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnPrintAllObjects = NULL;

		if ( !pfnPrintAllObjects )
			pfnPrintAllObjects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintAllObjects" );

		ACCInstanceController_execPrintAllObjects_Parms PrintAllObjects_Parms;
		memcpy( &PrintAllObjects_Parms.Filter, &Filter, 0xC );
		PrintAllObjects_Parms.SortBy = SortBy;
		PrintAllObjects_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnPrintAllObjects, &PrintAllObjects_Parms, NULL );
	};

	void PrintAllActors ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnPrintAllActors = NULL;

		if ( !pfnPrintAllActors )
			pfnPrintAllActors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintAllActors" );

		ACCInstanceController_execPrintAllActors_Parms PrintAllActors_Parms;
		memcpy( &PrintAllActors_Parms.Filter, &Filter, 0xC );
		PrintAllActors_Parms.SortBy = SortBy;
		PrintAllActors_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnPrintAllActors, &PrintAllActors_Parms, NULL );
	};

	void ccdebug_ServerPrintAllObjects ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnccdebug_ServerPrintAllObjects = NULL;

		if ( !pfnccdebug_ServerPrintAllObjects )
			pfnccdebug_ServerPrintAllObjects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccdebug_ServerPrintAllObjects" );

		ACCInstanceController_execccdebug_ServerPrintAllObjects_Parms ccdebug_ServerPrintAllObjects_Parms;
		memcpy( &ccdebug_ServerPrintAllObjects_Parms.Filter, &Filter, 0xC );
		ccdebug_ServerPrintAllObjects_Parms.SortBy = SortBy;
		ccdebug_ServerPrintAllObjects_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnccdebug_ServerPrintAllObjects, &ccdebug_ServerPrintAllObjects_Parms, NULL );
	};

	void ccdebug_ServerPrintAllActors ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnccdebug_ServerPrintAllActors = NULL;

		if ( !pfnccdebug_ServerPrintAllActors )
			pfnccdebug_ServerPrintAllActors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccdebug_ServerPrintAllActors" );

		ACCInstanceController_execccdebug_ServerPrintAllActors_Parms ccdebug_ServerPrintAllActors_Parms;
		memcpy( &ccdebug_ServerPrintAllActors_Parms.Filter, &Filter, 0xC );
		ccdebug_ServerPrintAllActors_Parms.SortBy = SortBy;
		ccdebug_ServerPrintAllActors_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnccdebug_ServerPrintAllActors, &ccdebug_ServerPrintAllActors_Parms, NULL );
	};

	void ccdebug_PrintAllObjects ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnccdebug_PrintAllObjects = NULL;

		if ( !pfnccdebug_PrintAllObjects )
			pfnccdebug_PrintAllObjects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccdebug_PrintAllObjects" );

		ACCInstanceController_execccdebug_PrintAllObjects_Parms ccdebug_PrintAllObjects_Parms;
		memcpy( &ccdebug_PrintAllObjects_Parms.Filter, &Filter, 0xC );
		ccdebug_PrintAllObjects_Parms.SortBy = SortBy;
		ccdebug_PrintAllObjects_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnccdebug_PrintAllObjects, &ccdebug_PrintAllObjects_Parms, NULL );
	};

	void ccdebug_PrintAllActors ( struct FString Filter, int SortBy, int SortOrder )
	{
		static UFunction* pfnccdebug_PrintAllActors = NULL;

		if ( !pfnccdebug_PrintAllActors )
			pfnccdebug_PrintAllActors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccdebug_PrintAllActors" );

		ACCInstanceController_execccdebug_PrintAllActors_Parms ccdebug_PrintAllActors_Parms;
		memcpy( &ccdebug_PrintAllActors_Parms.Filter, &Filter, 0xC );
		ccdebug_PrintAllActors_Parms.SortBy = SortBy;
		ccdebug_PrintAllActors_Parms.SortOrder = SortOrder;

		this->ProcessEvent( pfnccdebug_PrintAllActors, &ccdebug_PrintAllActors_Parms, NULL );
	};

	void NotifyHUD_AssistKillerInfo ( struct FKillerInfo Info )
	{
		static UFunction* pfnNotifyHUD_AssistKillerInfo = NULL;

		if ( !pfnNotifyHUD_AssistKillerInfo )
			pfnNotifyHUD_AssistKillerInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyHUD_AssistKillerInfo" );

		ACCInstanceController_execNotifyHUD_AssistKillerInfo_Parms NotifyHUD_AssistKillerInfo_Parms;
		memcpy( &NotifyHUD_AssistKillerInfo_Parms.Info, &Info, 0xA8 );

		this->ProcessEvent( pfnNotifyHUD_AssistKillerInfo, &NotifyHUD_AssistKillerInfo_Parms, NULL );
	};

	void NotifyHUD_KillerKillerInfo ( struct FKillerInfo Info )
	{
		static UFunction* pfnNotifyHUD_KillerKillerInfo = NULL;

		if ( !pfnNotifyHUD_KillerKillerInfo )
			pfnNotifyHUD_KillerKillerInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyHUD_KillerKillerInfo" );

		ACCInstanceController_execNotifyHUD_KillerKillerInfo_Parms NotifyHUD_KillerKillerInfo_Parms;
		memcpy( &NotifyHUD_KillerKillerInfo_Parms.Info, &Info, 0xA8 );

		this->ProcessEvent( pfnNotifyHUD_KillerKillerInfo, &NotifyHUD_KillerKillerInfo_Parms, NULL );
	};

	void NotifyHUD_SelfKillerInfo ( struct FKillerInfo Info )
	{
		static UFunction* pfnNotifyHUD_SelfKillerInfo = NULL;

		if ( !pfnNotifyHUD_SelfKillerInfo )
			pfnNotifyHUD_SelfKillerInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyHUD_SelfKillerInfo" );

		ACCInstanceController_execNotifyHUD_SelfKillerInfo_Parms NotifyHUD_SelfKillerInfo_Parms;
		memcpy( &NotifyHUD_SelfKillerInfo_Parms.Info, &Info, 0xA8 );

		this->ProcessEvent( pfnNotifyHUD_SelfKillerInfo, &NotifyHUD_SelfKillerInfo_Parms, NULL );
	};

	void RocketDebug ()
	{
		static UFunction* pfnRocketDebug = NULL;

		if ( !pfnRocketDebug )
			pfnRocketDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RocketDebug" );

		ACCInstanceController_execRocketDebug_Parms RocketDebug_Parms;

		this->ProcessEvent( pfnRocketDebug, &RocketDebug_Parms, NULL );
	};

	void* GetRocketQuickStatsObject ()
	{
		static UFunction* pfnGetRocketQuickStatsObject = NULL;

		if ( !pfnGetRocketQuickStatsObject )
			pfnGetRocketQuickStatsObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetRocketQuickStatsObject" );

		ACCInstanceController_execGetRocketQuickStatsObject_Parms GetRocketQuickStatsObject_Parms;

		this->ProcessEvent( pfnGetRocketQuickStatsObject, &GetRocketQuickStatsObject_Parms, NULL );

		return GetRocketQuickStatsObject_Parms.ReturnValue;
	};

	void ServerSpiralRocketsQuickStatsDebug ()
	{
		static UFunction* pfnServerSpiralRocketsQuickStatsDebug = NULL;

		if ( !pfnServerSpiralRocketsQuickStatsDebug )
			pfnServerSpiralRocketsQuickStatsDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSpiralRocketsQuickStatsDebug" );

		ACCInstanceController_execServerSpiralRocketsQuickStatsDebug_Parms ServerSpiralRocketsQuickStatsDebug_Parms;

		this->ProcessEvent( pfnServerSpiralRocketsQuickStatsDebug, &ServerSpiralRocketsQuickStatsDebug_Parms, NULL );
	};

	void SpiralRocketsQuickStatsDebug ()
	{
		static UFunction* pfnSpiralRocketsQuickStatsDebug = NULL;

		if ( !pfnSpiralRocketsQuickStatsDebug )
			pfnSpiralRocketsQuickStatsDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SpiralRocketsQuickStatsDebug" );

		ACCInstanceController_execSpiralRocketsQuickStatsDebug_Parms SpiralRocketsQuickStatsDebug_Parms;

		this->ProcessEvent( pfnSpiralRocketsQuickStatsDebug, &SpiralRocketsQuickStatsDebug_Parms, NULL );
	};

	void EnableFireActionInputTimer ()
	{
		static UFunction* pfnEnableFireActionInputTimer = NULL;

		if ( !pfnEnableFireActionInputTimer )
			pfnEnableFireActionInputTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EnableFireActionInputTimer" );

		ACCInstanceController_execEnableFireActionInputTimer_Parms EnableFireActionInputTimer_Parms;

		this->ProcessEvent( pfnEnableFireActionInputTimer, &EnableFireActionInputTimer_Parms, NULL );
	};

	void TimedEnableActionManagerInput ()
	{
		static UFunction* pfnTimedEnableActionManagerInput = NULL;

		if ( !pfnTimedEnableActionManagerInput )
			pfnTimedEnableActionManagerInput = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TimedEnableActionManagerInput" );

		ACCInstanceController_execTimedEnableActionManagerInput_Parms TimedEnableActionManagerInput_Parms;

		this->ProcessEvent( pfnTimedEnableActionManagerInput, &TimedEnableActionManagerInput_Parms, NULL );
	};

	void DisableActionManagerInput ()
	{
		static UFunction* pfnDisableActionManagerInput = NULL;

		if ( !pfnDisableActionManagerInput )
			pfnDisableActionManagerInput = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DisableActionManagerInput" );

		ACCInstanceController_execDisableActionManagerInput_Parms DisableActionManagerInput_Parms;

		this->ProcessEvent( pfnDisableActionManagerInput, &DisableActionManagerInput_Parms, NULL );
	};

	bool GetPawnBoneInfo_Location ( class ACCInstancePawn* P, struct FName BoneName, struct FVector* Loc )
	{
		static UFunction* pfnGetPawnBoneInfo_Location = NULL;

		if ( !pfnGetPawnBoneInfo_Location )
			pfnGetPawnBoneInfo_Location = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetPawnBoneInfo_Location" );

		ACCInstanceController_execGetPawnBoneInfo_Location_Parms GetPawnBoneInfo_Location_Parms;
		GetPawnBoneInfo_Location_Parms.P = P;
		memcpy( &GetPawnBoneInfo_Location_Parms.BoneName, &BoneName, 0x8 );

		this->ProcessEvent( pfnGetPawnBoneInfo_Location, &GetPawnBoneInfo_Location_Parms, NULL );

		if ( Loc )
			memcpy( Loc, &GetPawnBoneInfo_Location_Parms.Loc, 0xC ); // CPF_OutParm

		return GetPawnBoneInfo_Location_Parms.ReturnValue;
	};

	void ServerSetPawnBoneInfo ( class ACCInstancePawn* P, struct FName* BoneNames, struct FVector* BoneLocations )
	{
		static UFunction* pfnServerSetPawnBoneInfo = NULL;

		if ( !pfnServerSetPawnBoneInfo )
			pfnServerSetPawnBoneInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetPawnBoneInfo" );

		ACCInstanceController_execServerSetPawnBoneInfo_Parms ServerSetPawnBoneInfo_Parms;
		ServerSetPawnBoneInfo_Parms.P = P;
		memcpy( &ServerSetPawnBoneInfo_Parms.BoneNames, &BoneNames, 0x28 );
		memcpy( &ServerSetPawnBoneInfo_Parms.BoneLocations, &BoneLocations, 0x3C );

		this->ProcessEvent( pfnServerSetPawnBoneInfo, &ServerSetPawnBoneInfo_Parms, NULL );
	};

	void ReplicatePawnBoneInfo ( class ACCInstancePawn* P, TArray< struct FName >* BoneNames )
	{
		static UFunction* pfnReplicatePawnBoneInfo = NULL;

		if ( !pfnReplicatePawnBoneInfo )
			pfnReplicatePawnBoneInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatePawnBoneInfo" );

		ACCInstanceController_execReplicatePawnBoneInfo_Parms ReplicatePawnBoneInfo_Parms;
		ReplicatePawnBoneInfo_Parms.P = P;

		this->ProcessEvent( pfnReplicatePawnBoneInfo, &ReplicatePawnBoneInfo_Parms, NULL );

		if ( BoneNames )
			memcpy( BoneNames, &ReplicatePawnBoneInfo_Parms.BoneNames, 0xC ); // CPF_OutParm
	};

	void SetSpectatorSpeed ( float NewSpeed )
	{
		static UFunction* pfnSetSpectatorSpeed = NULL;

		if ( !pfnSetSpectatorSpeed )
			pfnSetSpectatorSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetSpectatorSpeed" );

		ACCInstanceController_execSetSpectatorSpeed_Parms SetSpectatorSpeed_Parms;
		SetSpectatorSpeed_Parms.NewSpeed = NewSpeed;

		this->ProcessEvent( pfnSetSpectatorSpeed, &SetSpectatorSpeed_Parms, NULL );
	};

	void aStrafeInstance ( float Speed, unsigned long isDown )
	{
		static UFunction* pfnaStrafeInstance = NULL;

		if ( !pfnaStrafeInstance )
			pfnaStrafeInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.aStrafeInstance" );

		ACCInstanceController_execaStrafeInstance_Parms aStrafeInstance_Parms;
		aStrafeInstance_Parms.Speed = Speed;
		aStrafeInstance_Parms.isDown = isDown;

		this->ProcessEvent( pfnaStrafeInstance, &aStrafeInstance_Parms, NULL );
	};

	void aBaseYInstance ( float Speed, unsigned long isDown )
	{
		static UFunction* pfnaBaseYInstance = NULL;

		if ( !pfnaBaseYInstance )
			pfnaBaseYInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.aBaseYInstance" );

		ACCInstanceController_execaBaseYInstance_Parms aBaseYInstance_Parms;
		aBaseYInstance_Parms.Speed = Speed;
		aBaseYInstance_Parms.isDown = isDown;

		this->ProcessEvent( pfnaBaseYInstance, &aBaseYInstance_Parms, NULL );
	};

	void ShowFov ()
	{
		static UFunction* pfnShowFov = NULL;

		if ( !pfnShowFov )
			pfnShowFov = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowFov" );

		ACCInstanceController_execShowFov_Parms ShowFov_Parms;

		this->ProcessEvent( pfnShowFov, &ShowFov_Parms, NULL );
	};

	void ShowSens ()
	{
		static UFunction* pfnShowSens = NULL;

		if ( !pfnShowSens )
			pfnShowSens = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowSens" );

		ACCInstanceController_execShowSens_Parms ShowSens_Parms;

		this->ProcessEvent( pfnShowSens, &ShowSens_Parms, NULL );
	};

	bool GetAreGibsEnabled ()
	{
		static UFunction* pfnGetAreGibsEnabled = NULL;

		if ( !pfnGetAreGibsEnabled )
			pfnGetAreGibsEnabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetAreGibsEnabled" );

		ACCInstanceController_execGetAreGibsEnabled_Parms GetAreGibsEnabled_Parms;

		this->ProcessEvent( pfnGetAreGibsEnabled, &GetAreGibsEnabled_Parms, NULL );

		return GetAreGibsEnabled_Parms.ReturnValue;
	};

	void ToggleGibs ()
	{
		static UFunction* pfnToggleGibs = NULL;

		if ( !pfnToggleGibs )
			pfnToggleGibs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleGibs" );

		ACCInstanceController_execToggleGibs_Parms ToggleGibs_Parms;

		this->ProcessEvent( pfnToggleGibs, &ToggleGibs_Parms, NULL );
	};

	void OnClientFinishedLoading ()
	{
		static UFunction* pfnOnClientFinishedLoading = NULL;

		if ( !pfnOnClientFinishedLoading )
			pfnOnClientFinishedLoading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnClientFinishedLoading" );

		ACCInstanceController_execOnClientFinishedLoading_Parms OnClientFinishedLoading_Parms;

		this->ProcessEvent( pfnOnClientFinishedLoading, &OnClientFinishedLoading_Parms, NULL );
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyLocalPlayerTeamReceived" );

		ACCInstanceController_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	void ClientRequestNewLocation ()
	{
		static UFunction* pfnClientRequestNewLocation = NULL;

		if ( !pfnClientRequestNewLocation )
			pfnClientRequestNewLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientRequestNewLocation" );

		ACCInstanceController_execClientRequestNewLocation_Parms ClientRequestNewLocation_Parms;

		this->ProcessEvent( pfnClientRequestNewLocation, &ClientRequestNewLocation_Parms, NULL );
	};

	void ClientForcePositionFromServer ( struct FVector Loc )
	{
		static UFunction* pfnClientForcePositionFromServer = NULL;

		if ( !pfnClientForcePositionFromServer )
			pfnClientForcePositionFromServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientForcePositionFromServer" );

		ACCInstanceController_execClientForcePositionFromServer_Parms ClientForcePositionFromServer_Parms;
		memcpy( &ClientForcePositionFromServer_Parms.Loc, &Loc, 0xC );

		this->ProcessEvent( pfnClientForcePositionFromServer, &ClientForcePositionFromServer_Parms, NULL );
	};

	void ServerRetrieveClientLocation ( struct FVector Loc, float ClientPawnGroundSpeed, struct FName ClientStateName )
	{
		static UFunction* pfnServerRetrieveClientLocation = NULL;

		if ( !pfnServerRetrieveClientLocation )
			pfnServerRetrieveClientLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRetrieveClientLocation" );

		ACCInstanceController_execServerRetrieveClientLocation_Parms ServerRetrieveClientLocation_Parms;
		memcpy( &ServerRetrieveClientLocation_Parms.Loc, &Loc, 0xC );
		ServerRetrieveClientLocation_Parms.ClientPawnGroundSpeed = ClientPawnGroundSpeed;
		memcpy( &ServerRetrieveClientLocation_Parms.ClientStateName, &ClientStateName, 0x8 );

		this->ProcessEvent( pfnServerRetrieveClientLocation, &ServerRetrieveClientLocation_Parms, NULL );
	};

	void eventSendClientAdjustment ()
	{
		static UFunction* pfnSendClientAdjustment = NULL;

		if ( !pfnSendClientAdjustment )
			pfnSendClientAdjustment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SendClientAdjustment" );

		ACCInstanceController_eventSendClientAdjustment_Parms SendClientAdjustment_Parms;

		this->ProcessEvent( pfnSendClientAdjustment, &SendClientAdjustment_Parms, NULL );
	};

	void TestGibsVideo ()
	{
		static UFunction* pfnTestGibsVideo = NULL;

		if ( !pfnTestGibsVideo )
			pfnTestGibsVideo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestGibsVideo" );

		ACCInstanceController_execTestGibsVideo_Parms TestGibsVideo_Parms;

		this->ProcessEvent( pfnTestGibsVideo, &TestGibsVideo_Parms, NULL );
	};

	void ChangeTeam ( struct FString TeamName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ChangeTeam" );

		ACCInstanceController_execChangeTeam_Parms ChangeTeam_Parms;
		memcpy( &ChangeTeam_Parms.TeamName, &TeamName, 0xC );

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );
	};

	void SwitchTeam ()
	{
		static UFunction* pfnSwitchTeam = NULL;

		if ( !pfnSwitchTeam )
			pfnSwitchTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchTeam" );

		ACCInstanceController_execSwitchTeam_Parms SwitchTeam_Parms;

		this->ProcessEvent( pfnSwitchTeam, &SwitchTeam_Parms, NULL );
	};

	void ReceiveCombatLogMessage ( class UClass* Message, int Switch, struct FAdditionalParam Param )
	{
		static UFunction* pfnReceiveCombatLogMessage = NULL;

		if ( !pfnReceiveCombatLogMessage )
			pfnReceiveCombatLogMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReceiveCombatLogMessage" );

		ACCInstanceController_execReceiveCombatLogMessage_Parms ReceiveCombatLogMessage_Parms;
		ReceiveCombatLogMessage_Parms.Message = Message;
		ReceiveCombatLogMessage_Parms.Switch = Switch;
		memcpy( &ReceiveCombatLogMessage_Parms.Param, &Param, 0x50 );

		this->ProcessEvent( pfnReceiveCombatLogMessage, &ReceiveCombatLogMessage_Parms, NULL );
	};

	void PrevWeapon ()
	{
		static UFunction* pfnPrevWeapon = NULL;

		if ( !pfnPrevWeapon )
			pfnPrevWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrevWeapon" );

		ACCInstanceController_execPrevWeapon_Parms PrevWeapon_Parms;

		this->ProcessEvent( pfnPrevWeapon, &PrevWeapon_Parms, NULL );
	};

	void NextWeapon ()
	{
		static UFunction* pfnNextWeapon = NULL;

		if ( !pfnNextWeapon )
			pfnNextWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NextWeapon" );

		ACCInstanceController_execNextWeapon_Parms NextWeapon_Parms;

		this->ProcessEvent( pfnNextWeapon, &NextWeapon_Parms, NULL );
	};

	void AddPlaceableItemCount ( int AddCount, void* Ability )
	{
		static UFunction* pfnAddPlaceableItemCount = NULL;

		if ( !pfnAddPlaceableItemCount )
			pfnAddPlaceableItemCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AddPlaceableItemCount" );

		ACCInstanceController_execAddPlaceableItemCount_Parms AddPlaceableItemCount_Parms;
		AddPlaceableItemCount_Parms.AddCount = AddCount;
		AddPlaceableItemCount_Parms.Ability = Ability;

		this->ProcessEvent( pfnAddPlaceableItemCount, &AddPlaceableItemCount_Parms, NULL );
	};

	void OnPlaceableItemExplode ( class ACCPlaceableItem* PlaceableItem )
	{
		static UFunction* pfnOnPlaceableItemExplode = NULL;

		if ( !pfnOnPlaceableItemExplode )
			pfnOnPlaceableItemExplode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnPlaceableItemExplode" );

		ACCInstanceController_execOnPlaceableItemExplode_Parms OnPlaceableItemExplode_Parms;
		OnPlaceableItemExplode_Parms.PlaceableItem = PlaceableItem;

		this->ProcessEvent( pfnOnPlaceableItemExplode, &OnPlaceableItemExplode_Parms, NULL );
	};

	void OnPlaceableItemSpawn ( class ACCPlaceableItem* PlaceableItem )
	{
		static UFunction* pfnOnPlaceableItemSpawn = NULL;

		if ( !pfnOnPlaceableItemSpawn )
			pfnOnPlaceableItemSpawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnPlaceableItemSpawn" );

		ACCInstanceController_execOnPlaceableItemSpawn_Parms OnPlaceableItemSpawn_Parms;
		OnPlaceableItemSpawn_Parms.PlaceableItem = PlaceableItem;

		this->ProcessEvent( pfnOnPlaceableItemSpawn, &OnPlaceableItemSpawn_Parms, NULL );
	};

	void ReplicateRemainingTime ( int RemainingTime )
	{
		static UFunction* pfnReplicateRemainingTime = NULL;

		if ( !pfnReplicateRemainingTime )
			pfnReplicateRemainingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateRemainingTime" );

		ACCInstanceController_execReplicateRemainingTime_Parms ReplicateRemainingTime_Parms;
		ReplicateRemainingTime_Parms.RemainingTime = RemainingTime;

		this->ProcessEvent( pfnReplicateRemainingTime, &ReplicateRemainingTime_Parms, NULL );
	};

	void ToggleScoreNotify ()
	{
		static UFunction* pfnToggleScoreNotify = NULL;

		if ( !pfnToggleScoreNotify )
			pfnToggleScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleScoreNotify" );

		ACCInstanceController_execToggleScoreNotify_Parms ToggleScoreNotify_Parms;

		this->ProcessEvent( pfnToggleScoreNotify, &ToggleScoreNotify_Parms, NULL );
	};

	void EventReceivedQuestItem ( int ItemType, int ItemLevel, int ItemCount )
	{
		static UFunction* pfnEventReceivedQuestItem = NULL;

		if ( !pfnEventReceivedQuestItem )
			pfnEventReceivedQuestItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EventReceivedQuestItem" );

		ACCInstanceController_execEventReceivedQuestItem_Parms EventReceivedQuestItem_Parms;
		EventReceivedQuestItem_Parms.ItemType = ItemType;
		EventReceivedQuestItem_Parms.ItemLevel = ItemLevel;
		EventReceivedQuestItem_Parms.ItemCount = ItemCount;

		this->ProcessEvent( pfnEventReceivedQuestItem, &EventReceivedQuestItem_Parms, NULL );
	};

	void eventSetFeat ( unsigned char PFT, int Amount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetFeat = NULL;

		if ( !pfnSetFeat )
			pfnSetFeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetFeat" );

		ACCInstanceController_eventSetFeat_Parms SetFeat_Parms;
		SetFeat_Parms.PFT = PFT;
		SetFeat_Parms.Amount = Amount;

		this->ProcessEvent( pfnSetFeat, &SetFeat_Parms, NULL );
	};

	float GetDefaultConnectionTimeout ()
	{
		static UFunction* pfnGetDefaultConnectionTimeout = NULL;

		if ( !pfnGetDefaultConnectionTimeout )
			pfnGetDefaultConnectionTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetDefaultConnectionTimeout" );

		ACCInstanceController_execGetDefaultConnectionTimeout_Parms GetDefaultConnectionTimeout_Parms;

		pfnGetDefaultConnectionTimeout->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDefaultConnectionTimeout, &GetDefaultConnectionTimeout_Parms, NULL );
		pfnGetDefaultConnectionTimeout->FunctionFlags |= 0x400;

		return GetDefaultConnectionTimeout_Parms.ReturnValue;
	};

	float GetConnectionTimeout ()
	{
		static UFunction* pfnGetConnectionTimeout = NULL;

		if ( !pfnGetConnectionTimeout )
			pfnGetConnectionTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetConnectionTimeout" );

		ACCInstanceController_execGetConnectionTimeout_Parms GetConnectionTimeout_Parms;

		pfnGetConnectionTimeout->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetConnectionTimeout, &GetConnectionTimeout_Parms, NULL );
		pfnGetConnectionTimeout->FunctionFlags |= 0x400;

		return GetConnectionTimeout_Parms.ReturnValue;
	};

	void SetConnectionTimeoutInternal ( float NewTimeout )
	{
		static UFunction* pfnSetConnectionTimeoutInternal = NULL;

		if ( !pfnSetConnectionTimeoutInternal )
			pfnSetConnectionTimeoutInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetConnectionTimeoutInternal" );

		ACCInstanceController_execSetConnectionTimeoutInternal_Parms SetConnectionTimeoutInternal_Parms;
		SetConnectionTimeoutInternal_Parms.NewTimeout = NewTimeout;

		pfnSetConnectionTimeoutInternal->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetConnectionTimeoutInternal, &SetConnectionTimeoutInternal_Parms, NULL );
		pfnSetConnectionTimeoutInternal->FunctionFlags |= 0x400;
	};

	bool IsRemoteControlShown ()
	{
		static UFunction* pfnIsRemoteControlShown = NULL;

		if ( !pfnIsRemoteControlShown )
			pfnIsRemoteControlShown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsRemoteControlShown" );

		ACCInstanceController_execIsRemoteControlShown_Parms IsRemoteControlShown_Parms;

		pfnIsRemoteControlShown->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsRemoteControlShown, &IsRemoteControlShown_Parms, NULL );
		pfnIsRemoteControlShown->FunctionFlags |= 0x400;

		return IsRemoteControlShown_Parms.ReturnValue;
	};

	void SetConnectionTimeout ( float NewTimeout )
	{
		static UFunction* pfnSetConnectionTimeout = NULL;

		if ( !pfnSetConnectionTimeout )
			pfnSetConnectionTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetConnectionTimeout" );

		ACCInstanceController_execSetConnectionTimeout_Parms SetConnectionTimeout_Parms;
		SetConnectionTimeout_Parms.NewTimeout = NewTimeout;

		this->ProcessEvent( pfnSetConnectionTimeout, &SetConnectionTimeout_Parms, NULL );
	};

	void ServerSetConnectionTimeout ( float NewTimeout )
	{
		static UFunction* pfnServerSetConnectionTimeout = NULL;

		if ( !pfnServerSetConnectionTimeout )
			pfnServerSetConnectionTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetConnectionTimeout" );

		ACCInstanceController_execServerSetConnectionTimeout_Parms ServerSetConnectionTimeout_Parms;
		ServerSetConnectionTimeout_Parms.NewTimeout = NewTimeout;

		this->ProcessEvent( pfnServerSetConnectionTimeout, &ServerSetConnectionTimeout_Parms, NULL );
	};

	void DoSetConnectionTimeout ( float NewTimeout )
	{
		static UFunction* pfnDoSetConnectionTimeout = NULL;

		if ( !pfnDoSetConnectionTimeout )
			pfnDoSetConnectionTimeout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoSetConnectionTimeout" );

		ACCInstanceController_execDoSetConnectionTimeout_Parms DoSetConnectionTimeout_Parms;
		DoSetConnectionTimeout_Parms.NewTimeout = NewTimeout;

		this->ProcessEvent( pfnDoSetConnectionTimeout, &DoSetConnectionTimeout_Parms, NULL );
	};

	void SpawnSuicideGrenade ()
	{
		static UFunction* pfnSpawnSuicideGrenade = NULL;

		if ( !pfnSpawnSuicideGrenade )
			pfnSpawnSuicideGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SpawnSuicideGrenade" );

		ACCInstanceController_execSpawnSuicideGrenade_Parms SpawnSuicideGrenade_Parms;

		this->ProcessEvent( pfnSpawnSuicideGrenade, &SpawnSuicideGrenade_Parms, NULL );
	};

	void SetSuicideGrenade ( unsigned long bspawn, void* Preset )
	{
		static UFunction* pfnSetSuicideGrenade = NULL;

		if ( !pfnSetSuicideGrenade )
			pfnSetSuicideGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetSuicideGrenade" );

		ACCInstanceController_execSetSuicideGrenade_Parms SetSuicideGrenade_Parms;
		SetSuicideGrenade_Parms.bspawn = bspawn;
		SetSuicideGrenade_Parms.Preset = Preset;

		this->ProcessEvent( pfnSetSuicideGrenade, &SetSuicideGrenade_Parms, NULL );
	};

	void sgspawn ()
	{
		static UFunction* pfnsgspawn = NULL;

		if ( !pfnsgspawn )
			pfnsgspawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.sgspawn" );

		ACCInstanceController_execsgspawn_Parms sgspawn_Parms;

		this->ProcessEvent( pfnsgspawn, &sgspawn_Parms, NULL );
	};

	void RequestSaveAbilityPackage ()
	{
		static UFunction* pfnRequestSaveAbilityPackage = NULL;

		if ( !pfnRequestSaveAbilityPackage )
			pfnRequestSaveAbilityPackage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RequestSaveAbilityPackage" );

		ACCInstanceController_execRequestSaveAbilityPackage_Parms RequestSaveAbilityPackage_Parms;

		this->ProcessEvent( pfnRequestSaveAbilityPackage, &RequestSaveAbilityPackage_Parms, NULL );
	};

	void ServerRequestSaveAbilityPackage ()
	{
		static UFunction* pfnServerRequestSaveAbilityPackage = NULL;

		if ( !pfnServerRequestSaveAbilityPackage )
			pfnServerRequestSaveAbilityPackage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRequestSaveAbilityPackage" );

		ACCInstanceController_execServerRequestSaveAbilityPackage_Parms ServerRequestSaveAbilityPackage_Parms;

		this->ProcessEvent( pfnServerRequestSaveAbilityPackage, &ServerRequestSaveAbilityPackage_Parms, NULL );
	};

	void ClientSaveAbilityPackage ( struct FString pkgName )
	{
		static UFunction* pfnClientSaveAbilityPackage = NULL;

		if ( !pfnClientSaveAbilityPackage )
			pfnClientSaveAbilityPackage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSaveAbilityPackage" );

		ACCInstanceController_execClientSaveAbilityPackage_Parms ClientSaveAbilityPackage_Parms;
		memcpy( &ClientSaveAbilityPackage_Parms.pkgName, &pkgName, 0xC );

		this->ProcessEvent( pfnClientSaveAbilityPackage, &ClientSaveAbilityPackage_Parms, NULL );
	};

	void CopyAbility ( struct FString pkgName, struct FString AbilityName )
	{
		static UFunction* pfnCopyAbility = NULL;

		if ( !pfnCopyAbility )
			pfnCopyAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CopyAbility" );

		ACCInstanceController_execCopyAbility_Parms CopyAbility_Parms;
		memcpy( &CopyAbility_Parms.pkgName, &pkgName, 0xC );
		memcpy( &CopyAbility_Parms.AbilityName, &AbilityName, 0xC );

		this->ProcessEvent( pfnCopyAbility, &CopyAbility_Parms, NULL );
	};

	void MergePackages ( struct FString pkgName )
	{
		static UFunction* pfnMergePackages = NULL;

		if ( !pfnMergePackages )
			pfnMergePackages = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MergePackages" );

		ACCInstanceController_execMergePackages_Parms MergePackages_Parms;
		memcpy( &MergePackages_Parms.pkgName, &pkgName, 0xC );

		this->ProcessEvent( pfnMergePackages, &MergePackages_Parms, NULL );
	};

	void PlayDust ()
	{
		static UFunction* pfnPlayDust = NULL;

		if ( !pfnPlayDust )
			pfnPlayDust = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayDust" );

		ACCInstanceController_execPlayDust_Parms PlayDust_Parms;

		this->ProcessEvent( pfnPlayDust, &PlayDust_Parms, NULL );
	};

	void CameraEffect_PlayEffect ( struct FString EffectName, float BlendInTime, float StayAliveTime, float BlendOutTime )
	{
		static UFunction* pfnCameraEffect_PlayEffect = NULL;

		if ( !pfnCameraEffect_PlayEffect )
			pfnCameraEffect_PlayEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CameraEffect_PlayEffect" );

		ACCInstanceController_execCameraEffect_PlayEffect_Parms CameraEffect_PlayEffect_Parms;
		memcpy( &CameraEffect_PlayEffect_Parms.EffectName, &EffectName, 0xC );
		CameraEffect_PlayEffect_Parms.BlendInTime = BlendInTime;
		CameraEffect_PlayEffect_Parms.StayAliveTime = StayAliveTime;
		CameraEffect_PlayEffect_Parms.BlendOutTime = BlendOutTime;

		this->ProcessEvent( pfnCameraEffect_PlayEffect, &CameraEffect_PlayEffect_Parms, NULL );
	};

	void CameraEffect_PlayEffectSelf ( struct FString EffectName, float StayAliveTime )
	{
		static UFunction* pfnCameraEffect_PlayEffectSelf = NULL;

		if ( !pfnCameraEffect_PlayEffectSelf )
			pfnCameraEffect_PlayEffectSelf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CameraEffect_PlayEffectSelf" );

		ACCInstanceController_execCameraEffect_PlayEffectSelf_Parms CameraEffect_PlayEffectSelf_Parms;
		memcpy( &CameraEffect_PlayEffectSelf_Parms.EffectName, &EffectName, 0xC );
		CameraEffect_PlayEffectSelf_Parms.StayAliveTime = StayAliveTime;

		this->ProcessEvent( pfnCameraEffect_PlayEffectSelf, &CameraEffect_PlayEffectSelf_Parms, NULL );
	};

	void ServerActivateControlledMine ()
	{
		static UFunction* pfnServerActivateControlledMine = NULL;

		if ( !pfnServerActivateControlledMine )
			pfnServerActivateControlledMine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerActivateControlledMine" );

		ACCInstanceController_execServerActivateControlledMine_Parms ServerActivateControlledMine_Parms;

		this->ProcessEvent( pfnServerActivateControlledMine, &ServerActivateControlledMine_Parms, NULL );
	};

	void ServerTestPlayWeaponVisualGetting ()
	{
		static UFunction* pfnServerTestPlayWeaponVisualGetting = NULL;

		if ( !pfnServerTestPlayWeaponVisualGetting )
			pfnServerTestPlayWeaponVisualGetting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerTestPlayWeaponVisualGetting" );

		ACCInstanceController_execServerTestPlayWeaponVisualGetting_Parms ServerTestPlayWeaponVisualGetting_Parms;

		this->ProcessEvent( pfnServerTestPlayWeaponVisualGetting, &ServerTestPlayWeaponVisualGetting_Parms, NULL );
	};

	void ServerTestPlayWeaponVisualHiding ()
	{
		static UFunction* pfnServerTestPlayWeaponVisualHiding = NULL;

		if ( !pfnServerTestPlayWeaponVisualHiding )
			pfnServerTestPlayWeaponVisualHiding = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerTestPlayWeaponVisualHiding" );

		ACCInstanceController_execServerTestPlayWeaponVisualHiding_Parms ServerTestPlayWeaponVisualHiding_Parms;

		this->ProcessEvent( pfnServerTestPlayWeaponVisualHiding, &ServerTestPlayWeaponVisualHiding_Parms, NULL );
	};

	void testPlayWeaponVisualGetting ()
	{
		static UFunction* pfntestPlayWeaponVisualGetting = NULL;

		if ( !pfntestPlayWeaponVisualGetting )
			pfntestPlayWeaponVisualGetting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.testPlayWeaponVisualGetting" );

		ACCInstanceController_exectestPlayWeaponVisualGetting_Parms testPlayWeaponVisualGetting_Parms;

		this->ProcessEvent( pfntestPlayWeaponVisualGetting, &testPlayWeaponVisualGetting_Parms, NULL );
	};

	void testPlayWeaponVisualHiding ()
	{
		static UFunction* pfntestPlayWeaponVisualHiding = NULL;

		if ( !pfntestPlayWeaponVisualHiding )
			pfntestPlayWeaponVisualHiding = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.testPlayWeaponVisualHiding" );

		ACCInstanceController_exectestPlayWeaponVisualHiding_Parms testPlayWeaponVisualHiding_Parms;

		this->ProcessEvent( pfntestPlayWeaponVisualHiding, &testPlayWeaponVisualHiding_Parms, NULL );
	};

	void ServerReceiveEnemyHuntSimulationInfo ( int SimulationID, float TimeStamp, struct FEnemyHuntSimulationInfo EnemyInfo )
	{
		static UFunction* pfnServerReceiveEnemyHuntSimulationInfo = NULL;

		if ( !pfnServerReceiveEnemyHuntSimulationInfo )
			pfnServerReceiveEnemyHuntSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerReceiveEnemyHuntSimulationInfo" );

		ACCInstanceController_execServerReceiveEnemyHuntSimulationInfo_Parms ServerReceiveEnemyHuntSimulationInfo_Parms;
		ServerReceiveEnemyHuntSimulationInfo_Parms.SimulationID = SimulationID;
		ServerReceiveEnemyHuntSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ServerReceiveEnemyHuntSimulationInfo_Parms.EnemyInfo, &EnemyInfo, 0x28 );

		this->ProcessEvent( pfnServerReceiveEnemyHuntSimulationInfo, &ServerReceiveEnemyHuntSimulationInfo_Parms, NULL );
	};

	void ClientReceiveEnemyHuntSimulationInfo ( int SimulationID, float TimeStamp, struct FEnemyHuntSimulationInfo EnemyInfo )
	{
		static UFunction* pfnClientReceiveEnemyHuntSimulationInfo = NULL;

		if ( !pfnClientReceiveEnemyHuntSimulationInfo )
			pfnClientReceiveEnemyHuntSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceiveEnemyHuntSimulationInfo" );

		ACCInstanceController_execClientReceiveEnemyHuntSimulationInfo_Parms ClientReceiveEnemyHuntSimulationInfo_Parms;
		ClientReceiveEnemyHuntSimulationInfo_Parms.SimulationID = SimulationID;
		ClientReceiveEnemyHuntSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ClientReceiveEnemyHuntSimulationInfo_Parms.EnemyInfo, &EnemyInfo, 0x28 );

		this->ProcessEvent( pfnClientReceiveEnemyHuntSimulationInfo, &ClientReceiveEnemyHuntSimulationInfo_Parms, NULL );
	};

	void ServerReceiveSplineSimulationInfo ( int SimulationID, float TimeStamp, struct FSplineSimulationInfo SplineInfo )
	{
		static UFunction* pfnServerReceiveSplineSimulationInfo = NULL;

		if ( !pfnServerReceiveSplineSimulationInfo )
			pfnServerReceiveSplineSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerReceiveSplineSimulationInfo" );

		ACCInstanceController_execServerReceiveSplineSimulationInfo_Parms ServerReceiveSplineSimulationInfo_Parms;
		ServerReceiveSplineSimulationInfo_Parms.SimulationID = SimulationID;
		ServerReceiveSplineSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ServerReceiveSplineSimulationInfo_Parms.SplineInfo, &SplineInfo, 0x34 );

		this->ProcessEvent( pfnServerReceiveSplineSimulationInfo, &ServerReceiveSplineSimulationInfo_Parms, NULL );
	};

	void ClientReceiveSplineSimulationInfo ( int SimulationID, float TimeStamp, struct FSplineSimulationInfo SplineInfo )
	{
		static UFunction* pfnClientReceiveSplineSimulationInfo = NULL;

		if ( !pfnClientReceiveSplineSimulationInfo )
			pfnClientReceiveSplineSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceiveSplineSimulationInfo" );

		ACCInstanceController_execClientReceiveSplineSimulationInfo_Parms ClientReceiveSplineSimulationInfo_Parms;
		ClientReceiveSplineSimulationInfo_Parms.SimulationID = SimulationID;
		ClientReceiveSplineSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ClientReceiveSplineSimulationInfo_Parms.SplineInfo, &SplineInfo, 0x34 );

		this->ProcessEvent( pfnClientReceiveSplineSimulationInfo, &ClientReceiveSplineSimulationInfo_Parms, NULL );
	};

	void ServerReceiveSplineSimulationInfoPair ( int SimulationID, float TimeStamp, struct FSplineSimulationInfo SplineInfo, struct FSplineSimulationInfo NextSplineInfo )
	{
		static UFunction* pfnServerReceiveSplineSimulationInfoPair = NULL;

		if ( !pfnServerReceiveSplineSimulationInfoPair )
			pfnServerReceiveSplineSimulationInfoPair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerReceiveSplineSimulationInfoPair" );

		ACCInstanceController_execServerReceiveSplineSimulationInfoPair_Parms ServerReceiveSplineSimulationInfoPair_Parms;
		ServerReceiveSplineSimulationInfoPair_Parms.SimulationID = SimulationID;
		ServerReceiveSplineSimulationInfoPair_Parms.TimeStamp = TimeStamp;
		memcpy( &ServerReceiveSplineSimulationInfoPair_Parms.SplineInfo, &SplineInfo, 0x34 );
		memcpy( &ServerReceiveSplineSimulationInfoPair_Parms.NextSplineInfo, &NextSplineInfo, 0x34 );

		this->ProcessEvent( pfnServerReceiveSplineSimulationInfoPair, &ServerReceiveSplineSimulationInfoPair_Parms, NULL );
	};

	void ClientReceiveSplineSimulationInfoPair ( int SimulationID, float TimeStamp, struct FSplineSimulationInfo SplineInfo, struct FSplineSimulationInfo NextSplineInfo )
	{
		static UFunction* pfnClientReceiveSplineSimulationInfoPair = NULL;

		if ( !pfnClientReceiveSplineSimulationInfoPair )
			pfnClientReceiveSplineSimulationInfoPair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceiveSplineSimulationInfoPair" );

		ACCInstanceController_execClientReceiveSplineSimulationInfoPair_Parms ClientReceiveSplineSimulationInfoPair_Parms;
		ClientReceiveSplineSimulationInfoPair_Parms.SimulationID = SimulationID;
		ClientReceiveSplineSimulationInfoPair_Parms.TimeStamp = TimeStamp;
		memcpy( &ClientReceiveSplineSimulationInfoPair_Parms.SplineInfo, &SplineInfo, 0x34 );
		memcpy( &ClientReceiveSplineSimulationInfoPair_Parms.NextSplineInfo, &NextSplineInfo, 0x34 );

		this->ProcessEvent( pfnClientReceiveSplineSimulationInfoPair, &ClientReceiveSplineSimulationInfoPair_Parms, NULL );
	};

	void ClientReceivePawnLastTakeHitInfo ( class ACCInstancePawn* P, struct FLastTakeHitInfo LastTakeHitInfoStruct )
	{
		static UFunction* pfnClientReceivePawnLastTakeHitInfo = NULL;

		if ( !pfnClientReceivePawnLastTakeHitInfo )
			pfnClientReceivePawnLastTakeHitInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceivePawnLastTakeHitInfo" );

		ACCInstanceController_execClientReceivePawnLastTakeHitInfo_Parms ClientReceivePawnLastTakeHitInfo_Parms;
		ClientReceivePawnLastTakeHitInfo_Parms.P = P;
		memcpy( &ClientReceivePawnLastTakeHitInfo_Parms.LastTakeHitInfoStruct, &LastTakeHitInfoStruct, 0x44 );

		this->ProcessEvent( pfnClientReceivePawnLastTakeHitInfo, &ClientReceivePawnLastTakeHitInfo_Parms, NULL );
	};

	void ReplicatePawnLastTakeHitInfoToAll ( class ACCInstancePawn* P, struct FLastTakeHitInfo LastTakeHitInfoStruct )
	{
		static UFunction* pfnReplicatePawnLastTakeHitInfoToAll = NULL;

		if ( !pfnReplicatePawnLastTakeHitInfoToAll )
			pfnReplicatePawnLastTakeHitInfoToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatePawnLastTakeHitInfoToAll" );

		ACCInstanceController_execReplicatePawnLastTakeHitInfoToAll_Parms ReplicatePawnLastTakeHitInfoToAll_Parms;
		ReplicatePawnLastTakeHitInfoToAll_Parms.P = P;
		memcpy( &ReplicatePawnLastTakeHitInfoToAll_Parms.LastTakeHitInfoStruct, &LastTakeHitInfoStruct, 0x44 );

		this->ProcessEvent( pfnReplicatePawnLastTakeHitInfoToAll, &ReplicatePawnLastTakeHitInfoToAll_Parms, NULL );
	};

	void ClientReceiveSpawnShotOffGib ( class ACCInstancePawn* P, void* GibPreset, struct FVector ShotOffMomentum )
	{
		static UFunction* pfnClientReceiveSpawnShotOffGib = NULL;

		if ( !pfnClientReceiveSpawnShotOffGib )
			pfnClientReceiveSpawnShotOffGib = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceiveSpawnShotOffGib" );

		ACCInstanceController_execClientReceiveSpawnShotOffGib_Parms ClientReceiveSpawnShotOffGib_Parms;
		ClientReceiveSpawnShotOffGib_Parms.P = P;
		ClientReceiveSpawnShotOffGib_Parms.GibPreset = GibPreset;
		memcpy( &ClientReceiveSpawnShotOffGib_Parms.ShotOffMomentum, &ShotOffMomentum, 0xC );

		this->ProcessEvent( pfnClientReceiveSpawnShotOffGib, &ClientReceiveSpawnShotOffGib_Parms, NULL );
	};

	void ReplicateSpawnShotOffGibToAll ( class ACCInstancePawn* P, void* GibPreset, struct FVector ShotOffMomentum )
	{
		static UFunction* pfnReplicateSpawnShotOffGibToAll = NULL;

		if ( !pfnReplicateSpawnShotOffGibToAll )
			pfnReplicateSpawnShotOffGibToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateSpawnShotOffGibToAll" );

		ACCInstanceController_execReplicateSpawnShotOffGibToAll_Parms ReplicateSpawnShotOffGibToAll_Parms;
		ReplicateSpawnShotOffGibToAll_Parms.P = P;
		ReplicateSpawnShotOffGibToAll_Parms.GibPreset = GibPreset;
		memcpy( &ReplicateSpawnShotOffGibToAll_Parms.ShotOffMomentum, &ShotOffMomentum, 0xC );

		this->ProcessEvent( pfnReplicateSpawnShotOffGibToAll, &ReplicateSpawnShotOffGibToAll_Parms, NULL );
	};

	void ClientReceiveSpawnGibsForEntireBody ( class ACCInstancePawn* P, void* GibPreset, struct FVector ExplosionMomentum, float GibsTearOffMomentum, float GibsTearOffMinPitch )
	{
		static UFunction* pfnClientReceiveSpawnGibsForEntireBody = NULL;

		if ( !pfnClientReceiveSpawnGibsForEntireBody )
			pfnClientReceiveSpawnGibsForEntireBody = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceiveSpawnGibsForEntireBody" );

		ACCInstanceController_execClientReceiveSpawnGibsForEntireBody_Parms ClientReceiveSpawnGibsForEntireBody_Parms;
		ClientReceiveSpawnGibsForEntireBody_Parms.P = P;
		ClientReceiveSpawnGibsForEntireBody_Parms.GibPreset = GibPreset;
		memcpy( &ClientReceiveSpawnGibsForEntireBody_Parms.ExplosionMomentum, &ExplosionMomentum, 0xC );
		ClientReceiveSpawnGibsForEntireBody_Parms.GibsTearOffMomentum = GibsTearOffMomentum;
		ClientReceiveSpawnGibsForEntireBody_Parms.GibsTearOffMinPitch = GibsTearOffMinPitch;

		this->ProcessEvent( pfnClientReceiveSpawnGibsForEntireBody, &ClientReceiveSpawnGibsForEntireBody_Parms, NULL );
	};

	void ReplicateSpawnGibsForEntireBodyToAll ( class ACCInstancePawn* P, void* GibPreset, struct FVector ExplosionMomentum, float GibsTearOffMomentum, float GibsTearOffMinPitch )
	{
		static UFunction* pfnReplicateSpawnGibsForEntireBodyToAll = NULL;

		if ( !pfnReplicateSpawnGibsForEntireBodyToAll )
			pfnReplicateSpawnGibsForEntireBodyToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateSpawnGibsForEntireBodyToAll" );

		ACCInstanceController_execReplicateSpawnGibsForEntireBodyToAll_Parms ReplicateSpawnGibsForEntireBodyToAll_Parms;
		ReplicateSpawnGibsForEntireBodyToAll_Parms.P = P;
		ReplicateSpawnGibsForEntireBodyToAll_Parms.GibPreset = GibPreset;
		memcpy( &ReplicateSpawnGibsForEntireBodyToAll_Parms.ExplosionMomentum, &ExplosionMomentum, 0xC );
		ReplicateSpawnGibsForEntireBodyToAll_Parms.GibsTearOffMomentum = GibsTearOffMomentum;
		ReplicateSpawnGibsForEntireBodyToAll_Parms.GibsTearOffMinPitch = GibsTearOffMinPitch;

		this->ProcessEvent( pfnReplicateSpawnGibsForEntireBodyToAll, &ReplicateSpawnGibsForEntireBodyToAll_Parms, NULL );
	};

	void ClientReceivePawnDeathAnimationInfo ( class ACCInstancePawn* P, struct FDeathAnimationInfo DeathAnimationInfoStruct )
	{
		static UFunction* pfnClientReceivePawnDeathAnimationInfo = NULL;

		if ( !pfnClientReceivePawnDeathAnimationInfo )
			pfnClientReceivePawnDeathAnimationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceivePawnDeathAnimationInfo" );

		ACCInstanceController_execClientReceivePawnDeathAnimationInfo_Parms ClientReceivePawnDeathAnimationInfo_Parms;
		ClientReceivePawnDeathAnimationInfo_Parms.P = P;
		memcpy( &ClientReceivePawnDeathAnimationInfo_Parms.DeathAnimationInfoStruct, &DeathAnimationInfoStruct, 0x40 );

		this->ProcessEvent( pfnClientReceivePawnDeathAnimationInfo, &ClientReceivePawnDeathAnimationInfo_Parms, NULL );
	};

	void ReplicatePawnDeathAnimationInfoToAll ( class ACCInstancePawn* P, struct FDeathAnimationInfo DeathAnimationInfoStruct )
	{
		static UFunction* pfnReplicatePawnDeathAnimationInfoToAll = NULL;

		if ( !pfnReplicatePawnDeathAnimationInfoToAll )
			pfnReplicatePawnDeathAnimationInfoToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatePawnDeathAnimationInfoToAll" );

		ACCInstanceController_execReplicatePawnDeathAnimationInfoToAll_Parms ReplicatePawnDeathAnimationInfoToAll_Parms;
		ReplicatePawnDeathAnimationInfoToAll_Parms.P = P;
		memcpy( &ReplicatePawnDeathAnimationInfoToAll_Parms.DeathAnimationInfoStruct, &DeathAnimationInfoStruct, 0x40 );

		this->ProcessEvent( pfnReplicatePawnDeathAnimationInfoToAll, &ReplicatePawnDeathAnimationInfoToAll_Parms, NULL );
	};

	void ClientReceivePawnRagdollState ( class ACCInstancePawn* P, struct FRagdollStateInfo RagdollStateInfoStruct )
	{
		static UFunction* pfnClientReceivePawnRagdollState = NULL;

		if ( !pfnClientReceivePawnRagdollState )
			pfnClientReceivePawnRagdollState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceivePawnRagdollState" );

		ACCInstanceController_execClientReceivePawnRagdollState_Parms ClientReceivePawnRagdollState_Parms;
		ClientReceivePawnRagdollState_Parms.P = P;
		memcpy( &ClientReceivePawnRagdollState_Parms.RagdollStateInfoStruct, &RagdollStateInfoStruct, 0x44 );

		this->ProcessEvent( pfnClientReceivePawnRagdollState, &ClientReceivePawnRagdollState_Parms, NULL );
	};

	void ReplicatePawnRagdollStateToAll ( class ACCInstancePawn* P, struct FRagdollStateInfo RagdollStateInfoStruct )
	{
		static UFunction* pfnReplicatePawnRagdollStateToAll = NULL;

		if ( !pfnReplicatePawnRagdollStateToAll )
			pfnReplicatePawnRagdollStateToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatePawnRagdollStateToAll" );

		ACCInstanceController_execReplicatePawnRagdollStateToAll_Parms ReplicatePawnRagdollStateToAll_Parms;
		ReplicatePawnRagdollStateToAll_Parms.P = P;
		memcpy( &ReplicatePawnRagdollStateToAll_Parms.RagdollStateInfoStruct, &RagdollStateInfoStruct, 0x44 );

		this->ProcessEvent( pfnReplicatePawnRagdollStateToAll, &ReplicatePawnRagdollStateToAll_Parms, NULL );
	};

	void ClientReceivePawnDeathState ( class ACCInstancePawn* P, unsigned char NewDeathState )
	{
		static UFunction* pfnClientReceivePawnDeathState = NULL;

		if ( !pfnClientReceivePawnDeathState )
			pfnClientReceivePawnDeathState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientReceivePawnDeathState" );

		ACCInstanceController_execClientReceivePawnDeathState_Parms ClientReceivePawnDeathState_Parms;
		ClientReceivePawnDeathState_Parms.P = P;
		ClientReceivePawnDeathState_Parms.NewDeathState = NewDeathState;

		this->ProcessEvent( pfnClientReceivePawnDeathState, &ClientReceivePawnDeathState_Parms, NULL );
	};

	void ReplicatePawnDeathStateToAll ( class ACCInstancePawn* P )
	{
		static UFunction* pfnReplicatePawnDeathStateToAll = NULL;

		if ( !pfnReplicatePawnDeathStateToAll )
			pfnReplicatePawnDeathStateToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatePawnDeathStateToAll" );

		ACCInstanceController_execReplicatePawnDeathStateToAll_Parms ReplicatePawnDeathStateToAll_Parms;
		ReplicatePawnDeathStateToAll_Parms.P = P;

		this->ProcessEvent( pfnReplicatePawnDeathStateToAll, &ReplicatePawnDeathStateToAll_Parms, NULL );
	};

	void SpawnItemPack ( struct FVector SpawnLoc )
	{
		static UFunction* pfnSpawnItemPack = NULL;

		if ( !pfnSpawnItemPack )
			pfnSpawnItemPack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SpawnItemPack" );

		ACCInstanceController_execSpawnItemPack_Parms SpawnItemPack_Parms;
		memcpy( &SpawnItemPack_Parms.SpawnLoc, &SpawnLoc, 0xC );

		this->ProcessEvent( pfnSpawnItemPack, &SpawnItemPack_Parms, NULL );
	};

	void ClientScoreUpdated ( unsigned char ScoreType, int ScoreValue )
	{
		static UFunction* pfnClientScoreUpdated = NULL;

		if ( !pfnClientScoreUpdated )
			pfnClientScoreUpdated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientScoreUpdated" );

		ACCInstanceController_execClientScoreUpdated_Parms ClientScoreUpdated_Parms;
		ClientScoreUpdated_Parms.ScoreType = ScoreType;
		ClientScoreUpdated_Parms.ScoreValue = ScoreValue;

		this->ProcessEvent( pfnClientScoreUpdated, &ClientScoreUpdated_Parms, NULL );
	};

	void ServerChangeMap ( struct FString MapURL )
	{
		static UFunction* pfnServerChangeMap = NULL;

		if ( !pfnServerChangeMap )
			pfnServerChangeMap = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerChangeMap" );

		ACCInstanceController_execServerChangeMap_Parms ServerChangeMap_Parms;
		memcpy( &ServerChangeMap_Parms.MapURL, &MapURL, 0xC );

		this->ProcessEvent( pfnServerChangeMap, &ServerChangeMap_Parms, NULL );
	};

	void ServerServerChangeMap ( struct FString MapURL )
	{
		static UFunction* pfnServerServerChangeMap = NULL;

		if ( !pfnServerServerChangeMap )
			pfnServerServerChangeMap = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerServerChangeMap" );

		ACCInstanceController_execServerServerChangeMap_Parms ServerServerChangeMap_Parms;
		memcpy( &ServerServerChangeMap_Parms.MapURL, &MapURL, 0xC );

		this->ProcessEvent( pfnServerServerChangeMap, &ServerServerChangeMap_Parms, NULL );
	};

	void Client_AM_SetActionInputEnabled ( unsigned char ActionID, unsigned long bEnabled )
	{
		static UFunction* pfnClient_AM_SetActionInputEnabled = NULL;

		if ( !pfnClient_AM_SetActionInputEnabled )
			pfnClient_AM_SetActionInputEnabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_AM_SetActionInputEnabled" );

		ACCInstanceController_execClient_AM_SetActionInputEnabled_Parms Client_AM_SetActionInputEnabled_Parms;
		Client_AM_SetActionInputEnabled_Parms.ActionID = ActionID;
		Client_AM_SetActionInputEnabled_Parms.bEnabled = bEnabled;

		this->ProcessEvent( pfnClient_AM_SetActionInputEnabled, &Client_AM_SetActionInputEnabled_Parms, NULL );
	};

	void Client_AM_SetInputEnabled ( unsigned long bEnabled )
	{
		static UFunction* pfnClient_AM_SetInputEnabled = NULL;

		if ( !pfnClient_AM_SetInputEnabled )
			pfnClient_AM_SetInputEnabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_AM_SetInputEnabled" );

		ACCInstanceController_execClient_AM_SetInputEnabled_Parms Client_AM_SetInputEnabled_Parms;
		Client_AM_SetInputEnabled_Parms.bEnabled = bEnabled;

		this->ProcessEvent( pfnClient_AM_SetInputEnabled, &Client_AM_SetInputEnabled_Parms, NULL );
	};

	void Client_AM_SetClientClockAdjustment ( float ClientClockAdjustment )
	{
		static UFunction* pfnClient_AM_SetClientClockAdjustment = NULL;

		if ( !pfnClient_AM_SetClientClockAdjustment )
			pfnClient_AM_SetClientClockAdjustment = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_AM_SetClientClockAdjustment" );

		ACCInstanceController_execClient_AM_SetClientClockAdjustment_Parms Client_AM_SetClientClockAdjustment_Parms;
		Client_AM_SetClientClockAdjustment_Parms.ClientClockAdjustment = ClientClockAdjustment;

		this->ProcessEvent( pfnClient_AM_SetClientClockAdjustment, &Client_AM_SetClientClockAdjustment_Parms, NULL );
	};

	void Client_AM_SetActionStates ( int RequestID, int RequestFlags, unsigned char InstigatingAction, int StateMask, int WTDMask, struct FString ParametersString, unsigned long bNeedsIncomeUnblockingReply )
	{
		static UFunction* pfnClient_AM_SetActionStates = NULL;

		if ( !pfnClient_AM_SetActionStates )
			pfnClient_AM_SetActionStates = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_AM_SetActionStates" );

		ACCInstanceController_execClient_AM_SetActionStates_Parms Client_AM_SetActionStates_Parms;
		Client_AM_SetActionStates_Parms.RequestID = RequestID;
		Client_AM_SetActionStates_Parms.RequestFlags = RequestFlags;
		Client_AM_SetActionStates_Parms.InstigatingAction = InstigatingAction;
		Client_AM_SetActionStates_Parms.StateMask = StateMask;
		Client_AM_SetActionStates_Parms.WTDMask = WTDMask;
		memcpy( &Client_AM_SetActionStates_Parms.ParametersString, &ParametersString, 0xC );
		Client_AM_SetActionStates_Parms.bNeedsIncomeUnblockingReply = bNeedsIncomeUnblockingReply;

		this->ProcessEvent( pfnClient_AM_SetActionStates, &Client_AM_SetActionStates_Parms, NULL );
	};

	void Server_AM_SetWantsToDo ( float ClientTime, int RequestID, int RequestFlags, unsigned char ActionID, int Mask, int WTDMask, int SimpleWTDMask )
	{
		static UFunction* pfnServer_AM_SetWantsToDo = NULL;

		if ( !pfnServer_AM_SetWantsToDo )
			pfnServer_AM_SetWantsToDo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetWantsToDo" );

		ACCInstanceController_execServer_AM_SetWantsToDo_Parms Server_AM_SetWantsToDo_Parms;
		Server_AM_SetWantsToDo_Parms.ClientTime = ClientTime;
		Server_AM_SetWantsToDo_Parms.RequestID = RequestID;
		Server_AM_SetWantsToDo_Parms.RequestFlags = RequestFlags;
		Server_AM_SetWantsToDo_Parms.ActionID = ActionID;
		Server_AM_SetWantsToDo_Parms.Mask = Mask;
		Server_AM_SetWantsToDo_Parms.WTDMask = WTDMask;
		Server_AM_SetWantsToDo_Parms.SimpleWTDMask = SimpleWTDMask;

		this->ProcessEvent( pfnServer_AM_SetWantsToDo, &Server_AM_SetWantsToDo_Parms, NULL );
	};

	void Server_AM_SetIncomeUnblocking ( int ReplyRequestID )
	{
		static UFunction* pfnServer_AM_SetIncomeUnblocking = NULL;

		if ( !pfnServer_AM_SetIncomeUnblocking )
			pfnServer_AM_SetIncomeUnblocking = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetIncomeUnblocking" );

		ACCInstanceController_execServer_AM_SetIncomeUnblocking_Parms Server_AM_SetIncomeUnblocking_Parms;
		Server_AM_SetIncomeUnblocking_Parms.ReplyRequestID = ReplyRequestID;

		this->ProcessEvent( pfnServer_AM_SetIncomeUnblocking, &Server_AM_SetIncomeUnblocking_Parms, NULL );
	};

	void Server_AM_SetPingTime ( float PingTime )
	{
		static UFunction* pfnServer_AM_SetPingTime = NULL;

		if ( !pfnServer_AM_SetPingTime )
			pfnServer_AM_SetPingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetPingTime" );

		ACCInstanceController_execServer_AM_SetPingTime_Parms Server_AM_SetPingTime_Parms;
		Server_AM_SetPingTime_Parms.PingTime = PingTime;

		this->ProcessEvent( pfnServer_AM_SetPingTime, &Server_AM_SetPingTime_Parms, NULL );
	};

	void Server_AM_SetLastSessionID ( unsigned char Id, int NewLastSessionID )
	{
		static UFunction* pfnServer_AM_SetLastSessionID = NULL;

		if ( !pfnServer_AM_SetLastSessionID )
			pfnServer_AM_SetLastSessionID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetLastSessionID" );

		ACCInstanceController_execServer_AM_SetLastSessionID_Parms Server_AM_SetLastSessionID_Parms;
		Server_AM_SetLastSessionID_Parms.Id = Id;
		Server_AM_SetLastSessionID_Parms.NewLastSessionID = NewLastSessionID;

		this->ProcessEvent( pfnServer_AM_SetLastSessionID, &Server_AM_SetLastSessionID_Parms, NULL );
	};

	void Server_AM_SetActionInputType ( unsigned char ActionID, unsigned char NewInputType )
	{
		static UFunction* pfnServer_AM_SetActionInputType = NULL;

		if ( !pfnServer_AM_SetActionInputType )
			pfnServer_AM_SetActionInputType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetActionInputType" );

		ACCInstanceController_execServer_AM_SetActionInputType_Parms Server_AM_SetActionInputType_Parms;
		Server_AM_SetActionInputType_Parms.ActionID = ActionID;
		Server_AM_SetActionInputType_Parms.NewInputType = NewInputType;

		this->ProcessEvent( pfnServer_AM_SetActionInputType, &Server_AM_SetActionInputType_Parms, NULL );
	};

	void Server_AM_SetActionParameter ( unsigned char ActionID, struct FString ParamValue )
	{
		static UFunction* pfnServer_AM_SetActionParameter = NULL;

		if ( !pfnServer_AM_SetActionParameter )
			pfnServer_AM_SetActionParameter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AM_SetActionParameter" );

		ACCInstanceController_execServer_AM_SetActionParameter_Parms Server_AM_SetActionParameter_Parms;
		Server_AM_SetActionParameter_Parms.ActionID = ActionID;
		memcpy( &Server_AM_SetActionParameter_Parms.ParamValue, &ParamValue, 0xC );

		this->ProcessEvent( pfnServer_AM_SetActionParameter, &Server_AM_SetActionParameter_Parms, NULL );
	};

	void SA ()
	{
		static UFunction* pfnSA = NULL;

		if ( !pfnSA )
			pfnSA = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SA" );

		ACCInstanceController_execSA_Parms SA_Parms;

		this->ProcessEvent( pfnSA, &SA_Parms, NULL );
	};

	void SetUDSAbilities ()
	{
		static UFunction* pfnSetUDSAbilities = NULL;

		if ( !pfnSetUDSAbilities )
			pfnSetUDSAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetUDSAbilities" );

		ACCInstanceController_execSetUDSAbilities_Parms SetUDSAbilities_Parms;

		this->ProcessEvent( pfnSetUDSAbilities, &SetUDSAbilities_Parms, NULL );
	};

	void CheatServerSetAbilities ( struct FName AbName, int Idx )
	{
		static UFunction* pfnCheatServerSetAbilities = NULL;

		if ( !pfnCheatServerSetAbilities )
			pfnCheatServerSetAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheatServerSetAbilities" );

		ACCInstanceController_execCheatServerSetAbilities_Parms CheatServerSetAbilities_Parms;
		memcpy( &CheatServerSetAbilities_Parms.AbName, &AbName, 0x8 );
		CheatServerSetAbilities_Parms.Idx = Idx;

		this->ProcessEvent( pfnCheatServerSetAbilities, &CheatServerSetAbilities_Parms, NULL );
	};

	void CheckIsHitDebug ()
	{
		static UFunction* pfnCheckIsHitDebug = NULL;

		if ( !pfnCheckIsHitDebug )
			pfnCheckIsHitDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheckIsHitDebug" );

		ACCInstanceController_execCheckIsHitDebug_Parms CheckIsHitDebug_Parms;

		this->ProcessEvent( pfnCheckIsHitDebug, &CheckIsHitDebug_Parms, NULL );
	};

	void ServerCheckIsHitDebug ()
	{
		static UFunction* pfnServerCheckIsHitDebug = NULL;

		if ( !pfnServerCheckIsHitDebug )
			pfnServerCheckIsHitDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerCheckIsHitDebug" );

		ACCInstanceController_execServerCheckIsHitDebug_Parms ServerCheckIsHitDebug_Parms;

		this->ProcessEvent( pfnServerCheckIsHitDebug, &ServerCheckIsHitDebug_Parms, NULL );
	};

	void ClientDrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientDrawDebugCylinder = NULL;

		if ( !pfnClientDrawDebugCylinder )
			pfnClientDrawDebugCylinder = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientDrawDebugCylinder" );

		ACCInstanceController_execClientDrawDebugCylinder_Parms ClientDrawDebugCylinder_Parms;
		memcpy( &ClientDrawDebugCylinder_Parms.Start, &Start, 0xC );
		memcpy( &ClientDrawDebugCylinder_Parms.End, &End, 0xC );
		ClientDrawDebugCylinder_Parms.Radius = Radius;
		ClientDrawDebugCylinder_Parms.Segments = Segments;
		ClientDrawDebugCylinder_Parms.R = R;
		ClientDrawDebugCylinder_Parms.G = G;
		ClientDrawDebugCylinder_Parms.B = B;
		ClientDrawDebugCylinder_Parms.bPersistentLines = bPersistentLines;

		this->ProcessEvent( pfnClientDrawDebugCylinder, &ClientDrawDebugCylinder_Parms, NULL );
	};

	void ClientDrawDebugSphere ( struct FVector Center, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientDrawDebugSphere = NULL;

		if ( !pfnClientDrawDebugSphere )
			pfnClientDrawDebugSphere = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientDrawDebugSphere" );

		ACCInstanceController_execClientDrawDebugSphere_Parms ClientDrawDebugSphere_Parms;
		memcpy( &ClientDrawDebugSphere_Parms.Center, &Center, 0xC );
		ClientDrawDebugSphere_Parms.Radius = Radius;
		ClientDrawDebugSphere_Parms.Segments = Segments;
		ClientDrawDebugSphere_Parms.R = R;
		ClientDrawDebugSphere_Parms.G = G;
		ClientDrawDebugSphere_Parms.B = B;
		ClientDrawDebugSphere_Parms.bPersistentLines = bPersistentLines;

		this->ProcessEvent( pfnClientDrawDebugSphere, &ClientDrawDebugSphere_Parms, NULL );
	};

	void ClientDrawDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientDrawDebugLine = NULL;

		if ( !pfnClientDrawDebugLine )
			pfnClientDrawDebugLine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientDrawDebugLine" );

		ACCInstanceController_execClientDrawDebugLine_Parms ClientDrawDebugLine_Parms;
		memcpy( &ClientDrawDebugLine_Parms.LineStart, &LineStart, 0xC );
		memcpy( &ClientDrawDebugLine_Parms.LineEnd, &LineEnd, 0xC );
		ClientDrawDebugLine_Parms.R = R;
		ClientDrawDebugLine_Parms.G = G;
		ClientDrawDebugLine_Parms.B = B;
		ClientDrawDebugLine_Parms.bPersistentLines = bPersistentLines;

		this->ProcessEvent( pfnClientDrawDebugLine, &ClientDrawDebugLine_Parms, NULL );
	};

	bool IsThisControllerFirstFromList ()
	{
		static UFunction* pfnIsThisControllerFirstFromList = NULL;

		if ( !pfnIsThisControllerFirstFromList )
			pfnIsThisControllerFirstFromList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsThisControllerFirstFromList" );

		ACCInstanceController_execIsThisControllerFirstFromList_Parms IsThisControllerFirstFromList_Parms;

		this->ProcessEvent( pfnIsThisControllerFirstFromList, &IsThisControllerFirstFromList_Parms, NULL );

		return IsThisControllerFirstFromList_Parms.ReturnValue;
	};

	bool IsThisControllerOnly ()
	{
		static UFunction* pfnIsThisControllerOnly = NULL;

		if ( !pfnIsThisControllerOnly )
			pfnIsThisControllerOnly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsThisControllerOnly" );

		ACCInstanceController_execIsThisControllerOnly_Parms IsThisControllerOnly_Parms;

		this->ProcessEvent( pfnIsThisControllerOnly, &IsThisControllerOnly_Parms, NULL );

		return IsThisControllerOnly_Parms.ReturnValue;
	};

	void Client_ccrepstats_StringToConsoleAndLog ( struct FString S )
	{
		static UFunction* pfnClient_ccrepstats_StringToConsoleAndLog = NULL;

		if ( !pfnClient_ccrepstats_StringToConsoleAndLog )
			pfnClient_ccrepstats_StringToConsoleAndLog = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_ccrepstats_StringToConsoleAndLog" );

		ACCInstanceController_execClient_ccrepstats_StringToConsoleAndLog_Parms Client_ccrepstats_StringToConsoleAndLog_Parms;
		memcpy( &Client_ccrepstats_StringToConsoleAndLog_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnClient_ccrepstats_StringToConsoleAndLog, &Client_ccrepstats_StringToConsoleAndLog_Parms, NULL );
	};

	void ccrepstats_ReplicateStrigsToClient ( TArray< struct FString >* Strings )
	{
		static UFunction* pfnccrepstats_ReplicateStrigsToClient = NULL;

		if ( !pfnccrepstats_ReplicateStrigsToClient )
			pfnccrepstats_ReplicateStrigsToClient = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_ReplicateStrigsToClient" );

		ACCInstanceController_execccrepstats_ReplicateStrigsToClient_Parms ccrepstats_ReplicateStrigsToClient_Parms;

		this->ProcessEvent( pfnccrepstats_ReplicateStrigsToClient, &ccrepstats_ReplicateStrigsToClient_Parms, NULL );

		if ( Strings )
			memcpy( Strings, &ccrepstats_ReplicateStrigsToClient_Parms.Strings, 0xC ); // CPF_OutParm
	};

	void ccrepstats_StringsToLog ( TArray< struct FString >* Strings )
	{
		static UFunction* pfnccrepstats_StringsToLog = NULL;

		if ( !pfnccrepstats_StringsToLog )
			pfnccrepstats_StringsToLog = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_StringsToLog" );

		ACCInstanceController_execccrepstats_StringsToLog_Parms ccrepstats_StringsToLog_Parms;

		this->ProcessEvent( pfnccrepstats_StringsToLog, &ccrepstats_StringsToLog_Parms, NULL );

		if ( Strings )
			memcpy( Strings, &ccrepstats_StringsToLog_Parms.Strings, 0xC ); // CPF_OutParm
	};

	void ccrepstats_StringsToConsole ( TArray< struct FString >* Strings )
	{
		static UFunction* pfnccrepstats_StringsToConsole = NULL;

		if ( !pfnccrepstats_StringsToConsole )
			pfnccrepstats_StringsToConsole = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_StringsToConsole" );

		ACCInstanceController_execccrepstats_StringsToConsole_Parms ccrepstats_StringsToConsole_Parms;

		this->ProcessEvent( pfnccrepstats_StringsToConsole, &ccrepstats_StringsToConsole_Parms, NULL );

		if ( Strings )
			memcpy( Strings, &ccrepstats_StringsToConsole_Parms.Strings, 0xC ); // CPF_OutParm
	};

	void Do_ccrepstats_stopprofandprint ()
	{
		static UFunction* pfnDo_ccrepstats_stopprofandprint = NULL;

		if ( !pfnDo_ccrepstats_stopprofandprint )
			pfnDo_ccrepstats_stopprofandprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_stopprofandprint" );

		ACCInstanceController_execDo_ccrepstats_stopprofandprint_Parms Do_ccrepstats_stopprofandprint_Parms;

		this->ProcessEvent( pfnDo_ccrepstats_stopprofandprint, &Do_ccrepstats_stopprofandprint_Parms, NULL );
	};

	void Do_ccrepstats_getprofstrings_filter ( struct FString ClassName, struct FString NetworkRole, unsigned long ft1, unsigned long ft2, unsigned long ft3, unsigned long ft4, struct FString FieldName, unsigned long bReplicateToClient/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDo_ccrepstats_getprofstrings_filter = NULL;

		if ( !pfnDo_ccrepstats_getprofstrings_filter )
			pfnDo_ccrepstats_getprofstrings_filter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_getprofstrings_filter" );

		ACCInstanceController_execDo_ccrepstats_getprofstrings_filter_Parms Do_ccrepstats_getprofstrings_filter_Parms;
		memcpy( &Do_ccrepstats_getprofstrings_filter_Parms.ClassName, &ClassName, 0xC );
		memcpy( &Do_ccrepstats_getprofstrings_filter_Parms.NetworkRole, &NetworkRole, 0xC );
		Do_ccrepstats_getprofstrings_filter_Parms.ft1 = ft1;
		Do_ccrepstats_getprofstrings_filter_Parms.ft2 = ft2;
		Do_ccrepstats_getprofstrings_filter_Parms.ft3 = ft3;
		Do_ccrepstats_getprofstrings_filter_Parms.ft4 = ft4;
		memcpy( &Do_ccrepstats_getprofstrings_filter_Parms.FieldName, &FieldName, 0xC );
		Do_ccrepstats_getprofstrings_filter_Parms.bReplicateToClient = bReplicateToClient;

		this->ProcessEvent( pfnDo_ccrepstats_getprofstrings_filter, &Do_ccrepstats_getprofstrings_filter_Parms, NULL );
	};

	void Do_ccrepstats_stopprof ()
	{
		static UFunction* pfnDo_ccrepstats_stopprof = NULL;

		if ( !pfnDo_ccrepstats_stopprof )
			pfnDo_ccrepstats_stopprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_stopprof" );

		ACCInstanceController_execDo_ccrepstats_stopprof_Parms Do_ccrepstats_stopprof_Parms;

		this->ProcessEvent( pfnDo_ccrepstats_stopprof, &Do_ccrepstats_stopprof_Parms, NULL );
	};

	void Do_ccrepstats_startprof ()
	{
		static UFunction* pfnDo_ccrepstats_startprof = NULL;

		if ( !pfnDo_ccrepstats_startprof )
			pfnDo_ccrepstats_startprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_startprof" );

		ACCInstanceController_execDo_ccrepstats_startprof_Parms Do_ccrepstats_startprof_Parms;

		this->ProcessEvent( pfnDo_ccrepstats_startprof, &Do_ccrepstats_startprof_Parms, NULL );
	};

	void Do_ccrepstats_ProfileTimer ()
	{
		static UFunction* pfnDo_ccrepstats_ProfileTimer = NULL;

		if ( !pfnDo_ccrepstats_ProfileTimer )
			pfnDo_ccrepstats_ProfileTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_ProfileTimer" );

		ACCInstanceController_execDo_ccrepstats_ProfileTimer_Parms Do_ccrepstats_ProfileTimer_Parms;

		this->ProcessEvent( pfnDo_ccrepstats_ProfileTimer, &Do_ccrepstats_ProfileTimer_Parms, NULL );
	};

	void Do_ccrepstats_initialize ()
	{
		static UFunction* pfnDo_ccrepstats_initialize = NULL;

		if ( !pfnDo_ccrepstats_initialize )
			pfnDo_ccrepstats_initialize = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Do_ccrepstats_initialize" );

		ACCInstanceController_execDo_ccrepstats_initialize_Parms Do_ccrepstats_initialize_Parms;

		this->ProcessEvent( pfnDo_ccrepstats_initialize, &Do_ccrepstats_initialize_Parms, NULL );
	};

	void Server_ccrepstats_getprofstrings_filter ( struct FString ClassName, struct FString NetworkRole, unsigned long ft1, unsigned long ft2, unsigned long ft3, unsigned long ft4, struct FString FieldName )
	{
		static UFunction* pfnServer_ccrepstats_getprofstrings_filter = NULL;

		if ( !pfnServer_ccrepstats_getprofstrings_filter )
			pfnServer_ccrepstats_getprofstrings_filter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_ccrepstats_getprofstrings_filter" );

		ACCInstanceController_execServer_ccrepstats_getprofstrings_filter_Parms Server_ccrepstats_getprofstrings_filter_Parms;
		memcpy( &Server_ccrepstats_getprofstrings_filter_Parms.ClassName, &ClassName, 0xC );
		memcpy( &Server_ccrepstats_getprofstrings_filter_Parms.NetworkRole, &NetworkRole, 0xC );
		Server_ccrepstats_getprofstrings_filter_Parms.ft1 = ft1;
		Server_ccrepstats_getprofstrings_filter_Parms.ft2 = ft2;
		Server_ccrepstats_getprofstrings_filter_Parms.ft3 = ft3;
		Server_ccrepstats_getprofstrings_filter_Parms.ft4 = ft4;
		memcpy( &Server_ccrepstats_getprofstrings_filter_Parms.FieldName, &FieldName, 0xC );

		this->ProcessEvent( pfnServer_ccrepstats_getprofstrings_filter, &Server_ccrepstats_getprofstrings_filter_Parms, NULL );
	};

	void Server_ccrepstats_stopprof ()
	{
		static UFunction* pfnServer_ccrepstats_stopprof = NULL;

		if ( !pfnServer_ccrepstats_stopprof )
			pfnServer_ccrepstats_stopprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_ccrepstats_stopprof" );

		ACCInstanceController_execServer_ccrepstats_stopprof_Parms Server_ccrepstats_stopprof_Parms;

		this->ProcessEvent( pfnServer_ccrepstats_stopprof, &Server_ccrepstats_stopprof_Parms, NULL );
	};

	void Server_ccrepstats_startprof ()
	{
		static UFunction* pfnServer_ccrepstats_startprof = NULL;

		if ( !pfnServer_ccrepstats_startprof )
			pfnServer_ccrepstats_startprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_ccrepstats_startprof" );

		ACCInstanceController_execServer_ccrepstats_startprof_Parms Server_ccrepstats_startprof_Parms;

		this->ProcessEvent( pfnServer_ccrepstats_startprof, &Server_ccrepstats_startprof_Parms, NULL );
	};

	void ccrepstats_servergetprofstrings_filter ( struct FString ClassName, struct FString NetworkRole, unsigned long ft1, unsigned long ft2, unsigned long ft3, unsigned long ft4, struct FString FieldName )
	{
		static UFunction* pfnccrepstats_servergetprofstrings_filter = NULL;

		if ( !pfnccrepstats_servergetprofstrings_filter )
			pfnccrepstats_servergetprofstrings_filter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_servergetprofstrings_filter" );

		ACCInstanceController_execccrepstats_servergetprofstrings_filter_Parms ccrepstats_servergetprofstrings_filter_Parms;
		memcpy( &ccrepstats_servergetprofstrings_filter_Parms.ClassName, &ClassName, 0xC );
		memcpy( &ccrepstats_servergetprofstrings_filter_Parms.NetworkRole, &NetworkRole, 0xC );
		ccrepstats_servergetprofstrings_filter_Parms.ft1 = ft1;
		ccrepstats_servergetprofstrings_filter_Parms.ft2 = ft2;
		ccrepstats_servergetprofstrings_filter_Parms.ft3 = ft3;
		ccrepstats_servergetprofstrings_filter_Parms.ft4 = ft4;
		memcpy( &ccrepstats_servergetprofstrings_filter_Parms.FieldName, &FieldName, 0xC );

		this->ProcessEvent( pfnccrepstats_servergetprofstrings_filter, &ccrepstats_servergetprofstrings_filter_Parms, NULL );
	};

	void ccrepstats_servergetprofstrings ()
	{
		static UFunction* pfnccrepstats_servergetprofstrings = NULL;

		if ( !pfnccrepstats_servergetprofstrings )
			pfnccrepstats_servergetprofstrings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_servergetprofstrings" );

		ACCInstanceController_execccrepstats_servergetprofstrings_Parms ccrepstats_servergetprofstrings_Parms;

		this->ProcessEvent( pfnccrepstats_servergetprofstrings, &ccrepstats_servergetprofstrings_Parms, NULL );
	};

	void ccrepstats_serverstopprof ()
	{
		static UFunction* pfnccrepstats_serverstopprof = NULL;

		if ( !pfnccrepstats_serverstopprof )
			pfnccrepstats_serverstopprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_serverstopprof" );

		ACCInstanceController_execccrepstats_serverstopprof_Parms ccrepstats_serverstopprof_Parms;

		this->ProcessEvent( pfnccrepstats_serverstopprof, &ccrepstats_serverstopprof_Parms, NULL );
	};

	void ccrepstats_serverstartprof ()
	{
		static UFunction* pfnccrepstats_serverstartprof = NULL;

		if ( !pfnccrepstats_serverstartprof )
			pfnccrepstats_serverstartprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_serverstartprof" );

		ACCInstanceController_execccrepstats_serverstartprof_Parms ccrepstats_serverstartprof_Parms;

		this->ProcessEvent( pfnccrepstats_serverstartprof, &ccrepstats_serverstartprof_Parms, NULL );
	};

	void ccrepstats_getprofstrings_filter ( struct FString ClassName, struct FString NetworkRole, unsigned long ft1, unsigned long ft2, unsigned long ft3, unsigned long ft4, struct FString FieldName )
	{
		static UFunction* pfnccrepstats_getprofstrings_filter = NULL;

		if ( !pfnccrepstats_getprofstrings_filter )
			pfnccrepstats_getprofstrings_filter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_getprofstrings_filter" );

		ACCInstanceController_execccrepstats_getprofstrings_filter_Parms ccrepstats_getprofstrings_filter_Parms;
		memcpy( &ccrepstats_getprofstrings_filter_Parms.ClassName, &ClassName, 0xC );
		memcpy( &ccrepstats_getprofstrings_filter_Parms.NetworkRole, &NetworkRole, 0xC );
		ccrepstats_getprofstrings_filter_Parms.ft1 = ft1;
		ccrepstats_getprofstrings_filter_Parms.ft2 = ft2;
		ccrepstats_getprofstrings_filter_Parms.ft3 = ft3;
		ccrepstats_getprofstrings_filter_Parms.ft4 = ft4;
		memcpy( &ccrepstats_getprofstrings_filter_Parms.FieldName, &FieldName, 0xC );

		this->ProcessEvent( pfnccrepstats_getprofstrings_filter, &ccrepstats_getprofstrings_filter_Parms, NULL );
	};

	void ccrepstats_getprofstrings ()
	{
		static UFunction* pfnccrepstats_getprofstrings = NULL;

		if ( !pfnccrepstats_getprofstrings )
			pfnccrepstats_getprofstrings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_getprofstrings" );

		ACCInstanceController_execccrepstats_getprofstrings_Parms ccrepstats_getprofstrings_Parms;

		this->ProcessEvent( pfnccrepstats_getprofstrings, &ccrepstats_getprofstrings_Parms, NULL );
	};

	void ccrepstats_stopprof ()
	{
		static UFunction* pfnccrepstats_stopprof = NULL;

		if ( !pfnccrepstats_stopprof )
			pfnccrepstats_stopprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_stopprof" );

		ACCInstanceController_execccrepstats_stopprof_Parms ccrepstats_stopprof_Parms;

		this->ProcessEvent( pfnccrepstats_stopprof, &ccrepstats_stopprof_Parms, NULL );
	};

	void ccrepstats_startprof ()
	{
		static UFunction* pfnccrepstats_startprof = NULL;

		if ( !pfnccrepstats_startprof )
			pfnccrepstats_startprof = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ccrepstats_startprof" );

		ACCInstanceController_execccrepstats_startprof_Parms ccrepstats_startprof_Parms;

		this->ProcessEvent( pfnccrepstats_startprof, &ccrepstats_startprof_Parms, NULL );
	};

	void* GetReplicationStatsInstance ()
	{
		static UFunction* pfnGetReplicationStatsInstance = NULL;

		if ( !pfnGetReplicationStatsInstance )
			pfnGetReplicationStatsInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetReplicationStatsInstance" );

		ACCInstanceController_execGetReplicationStatsInstance_Parms GetReplicationStatsInstance_Parms;

		pfnGetReplicationStatsInstance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetReplicationStatsInstance, &GetReplicationStatsInstance_Parms, NULL );
		pfnGetReplicationStatsInstance->FunctionFlags |= 0x400;

		return GetReplicationStatsInstance_Parms.ReturnValue;
	};

	void sniper ( unsigned long S )
	{
		static UFunction* pfnsniper = NULL;

		if ( !pfnsniper )
			pfnsniper = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.sniper" );

		ACCInstanceController_execsniper_Parms sniper_Parms;
		sniper_Parms.S = S;

		this->ProcessEvent( pfnsniper, &sniper_Parms, NULL );
	};

	void GetStatesDebugStringArray2 ( TArray< struct FString >* Strings )
	{
		static UFunction* pfnGetStatesDebugStringArray2 = NULL;

		if ( !pfnGetStatesDebugStringArray2 )
			pfnGetStatesDebugStringArray2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetStatesDebugStringArray2" );

		ACCInstanceController_execGetStatesDebugStringArray2_Parms GetStatesDebugStringArray2_Parms;

		this->ProcessEvent( pfnGetStatesDebugStringArray2, &GetStatesDebugStringArray2_Parms, NULL );

		if ( Strings )
			memcpy( Strings, &GetStatesDebugStringArray2_Parms.Strings, 0xC ); // CPF_OutParm
	};

	void GetStatesDebugStringArray ( TArray< struct FString >* Strings )
	{
		static UFunction* pfnGetStatesDebugStringArray = NULL;

		if ( !pfnGetStatesDebugStringArray )
			pfnGetStatesDebugStringArray = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetStatesDebugStringArray" );

		ACCInstanceController_execGetStatesDebugStringArray_Parms GetStatesDebugStringArray_Parms;

		this->ProcessEvent( pfnGetStatesDebugStringArray, &GetStatesDebugStringArray_Parms, NULL );

		if ( Strings )
			memcpy( Strings, &GetStatesDebugStringArray_Parms.Strings, 0xC ); // CPF_OutParm
	};

	void SetQuickStatsDebugStrings ()
	{
		static UFunction* pfnSetQuickStatsDebugStrings = NULL;

		if ( !pfnSetQuickStatsDebugStrings )
			pfnSetQuickStatsDebugStrings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetQuickStatsDebugStrings" );

		ACCInstanceController_execSetQuickStatsDebugStrings_Parms SetQuickStatsDebugStrings_Parms;

		this->ProcessEvent( pfnSetQuickStatsDebugStrings, &SetQuickStatsDebugStrings_Parms, NULL );
	};

	void SetActionManagerDebugStrings ()
	{
		static UFunction* pfnSetActionManagerDebugStrings = NULL;

		if ( !pfnSetActionManagerDebugStrings )
			pfnSetActionManagerDebugStrings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetActionManagerDebugStrings" );

		ACCInstanceController_execSetActionManagerDebugStrings_Parms SetActionManagerDebugStrings_Parms;

		this->ProcessEvent( pfnSetActionManagerDebugStrings, &SetActionManagerDebugStrings_Parms, NULL );
	};

	void SetObjectStatesDebugStrings ()
	{
		static UFunction* pfnSetObjectStatesDebugStrings = NULL;

		if ( !pfnSetObjectStatesDebugStrings )
			pfnSetObjectStatesDebugStrings = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetObjectStatesDebugStrings" );

		ACCInstanceController_execSetObjectStatesDebugStrings_Parms SetObjectStatesDebugStrings_Parms;

		this->ProcessEvent( pfnSetObjectStatesDebugStrings, &SetObjectStatesDebugStrings_Parms, NULL );
	};

	void ClientGameEnded ( class AActor* EndGameFocus, unsigned long bIsWinner )
	{
		static UFunction* pfnClientGameEnded = NULL;

		if ( !pfnClientGameEnded )
			pfnClientGameEnded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientGameEnded" );

		ACCInstanceController_execClientGameEnded_Parms ClientGameEnded_Parms;
		ClientGameEnded_Parms.EndGameFocus = EndGameFocus;
		ClientGameEnded_Parms.bIsWinner = bIsWinner;

		this->ProcessEvent( pfnClientGameEnded, &ClientGameEnded_Parms, NULL );
	};

	void GameHasEnded ( class AActor* EndGameFocus/*CPF_OptionalParm*/, unsigned long bIsWinner/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGameHasEnded = NULL;

		if ( !pfnGameHasEnded )
			pfnGameHasEnded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GameHasEnded" );

		ACCInstanceController_execGameHasEnded_Parms GameHasEnded_Parms;
		GameHasEnded_Parms.EndGameFocus = EndGameFocus;
		GameHasEnded_Parms.bIsWinner = bIsWinner;

		this->ProcessEvent( pfnGameHasEnded, &GameHasEnded_Parms, NULL );
	};

	void ServerSetVacuumRocket ( unsigned long bCan )
	{
		static UFunction* pfnServerSetVacuumRocket = NULL;

		if ( !pfnServerSetVacuumRocket )
			pfnServerSetVacuumRocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetVacuumRocket" );

		ACCInstanceController_execServerSetVacuumRocket_Parms ServerSetVacuumRocket_Parms;
		ServerSetVacuumRocket_Parms.bCan = bCan;

		this->ProcessEvent( pfnServerSetVacuumRocket, &ServerSetVacuumRocket_Parms, NULL );
	};

	void SetVaccumRocket ()
	{
		static UFunction* pfnSetVaccumRocket = NULL;

		if ( !pfnSetVaccumRocket )
			pfnSetVaccumRocket = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetVaccumRocket" );

		ACCInstanceController_execSetVaccumRocket_Parms SetVaccumRocket_Parms;

		this->ProcessEvent( pfnSetVaccumRocket, &SetVaccumRocket_Parms, NULL );
	};

	void OnToggleCinematicMode ( void* Action )
	{
		static UFunction* pfnOnToggleCinematicMode = NULL;

		if ( !pfnOnToggleCinematicMode )
			pfnOnToggleCinematicMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnToggleCinematicMode" );

		ACCInstanceController_execOnToggleCinematicMode_Parms OnToggleCinematicMode_Parms;
		OnToggleCinematicMode_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggleCinematicMode, &OnToggleCinematicMode_Parms, NULL );
	};

	void ClientNoSniperVision ()
	{
		static UFunction* pfnClientNoSniperVision = NULL;

		if ( !pfnClientNoSniperVision )
			pfnClientNoSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientNoSniperVision" );

		ACCInstanceController_execClientNoSniperVision_Parms ClientNoSniperVision_Parms;

		this->ProcessEvent( pfnClientNoSniperVision, &ClientNoSniperVision_Parms, NULL );
	};

	void DoNoSniperVision ()
	{
		static UFunction* pfnDoNoSniperVision = NULL;

		if ( !pfnDoNoSniperVision )
			pfnDoNoSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoNoSniperVision" );

		ACCInstanceController_execDoNoSniperVision_Parms DoNoSniperVision_Parms;

		this->ProcessEvent( pfnDoNoSniperVision, &DoNoSniperVision_Parms, NULL );
	};

	void NoSniperVision ()
	{
		static UFunction* pfnNoSniperVision = NULL;

		if ( !pfnNoSniperVision )
			pfnNoSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NoSniperVision" );

		ACCInstanceController_execNoSniperVision_Parms NoSniperVision_Parms;

		this->ProcessEvent( pfnNoSniperVision, &NoSniperVision_Parms, NULL );
	};

	struct FActionBarSlotState GetActionBarSlotState ( int I )
	{
		static UFunction* pfnGetActionBarSlotState = NULL;

		if ( !pfnGetActionBarSlotState )
			pfnGetActionBarSlotState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetActionBarSlotState" );

		ACCInstanceController_execGetActionBarSlotState_Parms GetActionBarSlotState_Parms;
		GetActionBarSlotState_Parms.I = I;

		this->ProcessEvent( pfnGetActionBarSlotState, &GetActionBarSlotState_Parms, NULL );

		return GetActionBarSlotState_Parms.ReturnValue;
	};

	bool IsFrozen ()
	{
		static UFunction* pfnIsFrozen = NULL;

		if ( !pfnIsFrozen )
			pfnIsFrozen = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsFrozen" );

		ACCInstanceController_execIsFrozen_Parms IsFrozen_Parms;

		pfnIsFrozen->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsFrozen, &IsFrozen_Parms, NULL );
		pfnIsFrozen->FunctionFlags |= 0x400;

		return IsFrozen_Parms.ReturnValue;
	};

	void ForceLeaveFrozenState ()
	{
		static UFunction* pfnForceLeaveFrozenState = NULL;

		if ( !pfnForceLeaveFrozenState )
			pfnForceLeaveFrozenState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ForceLeaveFrozenState" );

		ACCInstanceController_execForceLeaveFrozenState_Parms ForceLeaveFrozenState_Parms;

		this->ProcessEvent( pfnForceLeaveFrozenState, &ForceLeaveFrozenState_Parms, NULL );
	};

	void eventLeaveFrozenState ()
	{
		static UFunction* pfnLeaveFrozenState = NULL;

		if ( !pfnLeaveFrozenState )
			pfnLeaveFrozenState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.LeaveFrozenState" );

		ACCInstanceController_eventLeaveFrozenState_Parms LeaveFrozenState_Parms;

		this->ProcessEvent( pfnLeaveFrozenState, &LeaveFrozenState_Parms, NULL );
	};

	void eventEnterFrozenState ()
	{
		static UFunction* pfnEnterFrozenState = NULL;

		if ( !pfnEnterFrozenState )
			pfnEnterFrozenState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EnterFrozenState" );

		ACCInstanceController_eventEnterFrozenState_Parms EnterFrozenState_Parms;

		this->ProcessEvent( pfnEnterFrozenState, &EnterFrozenState_Parms, NULL );
	};

	float GetClientClockValue ( float ServerClockValue )
	{
		static UFunction* pfnGetClientClockValue = NULL;

		if ( !pfnGetClientClockValue )
			pfnGetClientClockValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetClientClockValue" );

		ACCInstanceController_execGetClientClockValue_Parms GetClientClockValue_Parms;
		GetClientClockValue_Parms.ServerClockValue = ServerClockValue;

		this->ProcessEvent( pfnGetClientClockValue, &GetClientClockValue_Parms, NULL );

		return GetClientClockValue_Parms.ReturnValue;
	};

	void EndLoadingProcess ()
	{
		static UFunction* pfnEndLoadingProcess = NULL;

		if ( !pfnEndLoadingProcess )
			pfnEndLoadingProcess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EndLoadingProcess" );

		ACCInstanceController_execEndLoadingProcess_Parms EndLoadingProcess_Parms;

		this->ProcessEvent( pfnEndLoadingProcess, &EndLoadingProcess_Parms, NULL );
	};

	void eventSetYakaSpectator ()
	{
		static UFunction* pfnSetYakaSpectator = NULL;

		if ( !pfnSetYakaSpectator )
			pfnSetYakaSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetYakaSpectator" );

		ACCInstanceController_eventSetYakaSpectator_Parms SetYakaSpectator_Parms;

		this->ProcessEvent( pfnSetYakaSpectator, &SetYakaSpectator_Parms, NULL );
	};

	void eventYakaAcceptSpectator ( int UDSId )
	{
		static UFunction* pfnYakaAcceptSpectator = NULL;

		if ( !pfnYakaAcceptSpectator )
			pfnYakaAcceptSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.YakaAcceptSpectator" );

		ACCInstanceController_eventYakaAcceptSpectator_Parms YakaAcceptSpectator_Parms;
		YakaAcceptSpectator_Parms.UDSId = UDSId;

		this->ProcessEvent( pfnYakaAcceptSpectator, &YakaAcceptSpectator_Parms, NULL );
	};

	void eventYakaAccept ( int UDSId, unsigned long Value )
	{
		static UFunction* pfnYakaAccept = NULL;

		if ( !pfnYakaAccept )
			pfnYakaAccept = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.YakaAccept" );

		ACCInstanceController_eventYakaAccept_Parms YakaAccept_Parms;
		YakaAccept_Parms.UDSId = UDSId;
		YakaAccept_Parms.Value = Value;

		this->ProcessEvent( pfnYakaAccept, &YakaAccept_Parms, NULL );
	};

	void StartLoadingProcess ( unsigned long bStart )
	{
		static UFunction* pfnStartLoadingProcess = NULL;

		if ( !pfnStartLoadingProcess )
			pfnStartLoadingProcess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartLoadingProcess" );

		ACCInstanceController_execStartLoadingProcess_Parms StartLoadingProcess_Parms;
		StartLoadingProcess_Parms.bStart = bStart;

		this->ProcessEvent( pfnStartLoadingProcess, &StartLoadingProcess_Parms, NULL );
	};

	void OnTabReleased ()
	{
		static UFunction* pfnOnTabReleased = NULL;

		if ( !pfnOnTabReleased )
			pfnOnTabReleased = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnTabReleased" );

		ACCInstanceController_execOnTabReleased_Parms OnTabReleased_Parms;

		this->ProcessEvent( pfnOnTabReleased, &OnTabReleased_Parms, NULL );
	};

	void OnTabPressed ()
	{
		static UFunction* pfnOnTabPressed = NULL;

		if ( !pfnOnTabPressed )
			pfnOnTabPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnTabPressed" );

		ACCInstanceController_execOnTabPressed_Parms OnTabPressed_Parms;

		this->ProcessEvent( pfnOnTabPressed, &OnTabPressed_Parms, NULL );
	};

	void TickFromPawn ( float DeltaTime )
	{
		static UFunction* pfnTickFromPawn = NULL;

		if ( !pfnTickFromPawn )
			pfnTickFromPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TickFromPawn" );

		ACCInstanceController_execTickFromPawn_Parms TickFromPawn_Parms;
		TickFromPawn_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickFromPawn, &TickFromPawn_Parms, NULL );
	};

	void ClientSetAMCooperation ( int Action1ID, int Action2ID, unsigned char CooperationType )
	{
		static UFunction* pfnClientSetAMCooperation = NULL;

		if ( !pfnClientSetAMCooperation )
			pfnClientSetAMCooperation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetAMCooperation" );

		ACCInstanceController_execClientSetAMCooperation_Parms ClientSetAMCooperation_Parms;
		ClientSetAMCooperation_Parms.Action1ID = Action1ID;
		ClientSetAMCooperation_Parms.Action2ID = Action2ID;
		ClientSetAMCooperation_Parms.CooperationType = CooperationType;

		this->ProcessEvent( pfnClientSetAMCooperation, &ClientSetAMCooperation_Parms, NULL );
	};

	void ServerSetAMCooperation ( int Action1ID, int Action2ID, unsigned char CooperationType )
	{
		static UFunction* pfnServerSetAMCooperation = NULL;

		if ( !pfnServerSetAMCooperation )
			pfnServerSetAMCooperation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetAMCooperation" );

		ACCInstanceController_execServerSetAMCooperation_Parms ServerSetAMCooperation_Parms;
		ServerSetAMCooperation_Parms.Action1ID = Action1ID;
		ServerSetAMCooperation_Parms.Action2ID = Action2ID;
		ServerSetAMCooperation_Parms.CooperationType = CooperationType;

		this->ProcessEvent( pfnServerSetAMCooperation, &ServerSetAMCooperation_Parms, NULL );
	};

	void ReplicateAMDescriptions ( TArray< struct FActionDescription > ActionDescriptions )
	{
		static UFunction* pfnReplicateAMDescriptions = NULL;

		if ( !pfnReplicateAMDescriptions )
			pfnReplicateAMDescriptions = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateAMDescriptions" );

		ACCInstanceController_execReplicateAMDescriptions_Parms ReplicateAMDescriptions_Parms;
		memcpy( &ReplicateAMDescriptions_Parms.ActionDescriptions, &ActionDescriptions, 0xC );

		this->ProcessEvent( pfnReplicateAMDescriptions, &ReplicateAMDescriptions_Parms, NULL );
	};

	void ActionManagerTimer ()
	{
		static UFunction* pfnActionManagerTimer = NULL;

		if ( !pfnActionManagerTimer )
			pfnActionManagerTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActionManagerTimer" );

		ACCInstanceController_execActionManagerTimer_Parms ActionManagerTimer_Parms;

		this->ProcessEvent( pfnActionManagerTimer, &ActionManagerTimer_Parms, NULL );
	};

	void ClientCreateActionManager ()
	{
		static UFunction* pfnClientCreateActionManager = NULL;

		if ( !pfnClientCreateActionManager )
			pfnClientCreateActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientCreateActionManager" );

		ACCInstanceController_execClientCreateActionManager_Parms ClientCreateActionManager_Parms;

		this->ProcessEvent( pfnClientCreateActionManager, &ClientCreateActionManager_Parms, NULL );
	};

	void CreateActionManager ()
	{
		static UFunction* pfnCreateActionManager = NULL;

		if ( !pfnCreateActionManager )
			pfnCreateActionManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CreateActionManager" );

		ACCInstanceController_execCreateActionManager_Parms CreateActionManager_Parms;

		this->ProcessEvent( pfnCreateActionManager, &CreateActionManager_Parms, NULL );
	};

	void OnReloadReleased ()
	{
		static UFunction* pfnOnReloadReleased = NULL;

		if ( !pfnOnReloadReleased )
			pfnOnReloadReleased = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnReloadReleased" );

		ACCInstanceController_execOnReloadReleased_Parms OnReloadReleased_Parms;

		this->ProcessEvent( pfnOnReloadReleased, &OnReloadReleased_Parms, NULL );
	};

	void OnReloadPressed ()
	{
		static UFunction* pfnOnReloadPressed = NULL;

		if ( !pfnOnReloadPressed )
			pfnOnReloadPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnReloadPressed" );

		ACCInstanceController_execOnReloadPressed_Parms OnReloadPressed_Parms;

		this->ProcessEvent( pfnOnReloadPressed, &OnReloadPressed_Parms, NULL );
	};

	void SetAvatarProperies ( unsigned char InClassId, int InClanLogoId, int InClanLogoColorId, struct FCharacterAppearance InAppearance, struct FPaperdoll InPaperdoll, unsigned char InTeam, TArray< struct FAvatarAttribute > InBaseAttributes, TArray< struct FWeaponProfile > InWeaponProfiles, TArray< struct FAbilityInfo > InActionBarAbilities, TArray< struct FDrugInfo > InExtraDrugAbilities )
	{
		static UFunction* pfnSetAvatarProperies = NULL;

		if ( !pfnSetAvatarProperies )
			pfnSetAvatarProperies = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetAvatarProperies" );

		ACCInstanceController_execSetAvatarProperies_Parms SetAvatarProperies_Parms;
		SetAvatarProperies_Parms.InClassId = InClassId;
		SetAvatarProperies_Parms.InClanLogoId = InClanLogoId;
		SetAvatarProperies_Parms.InClanLogoColorId = InClanLogoColorId;
		memcpy( &SetAvatarProperies_Parms.InAppearance, &InAppearance, 0x8 );
		memcpy( &SetAvatarProperies_Parms.InPaperdoll, &InPaperdoll, 0x28 );
		SetAvatarProperies_Parms.InTeam = InTeam;
		memcpy( &SetAvatarProperies_Parms.InBaseAttributes, &InBaseAttributes, 0xC );
		memcpy( &SetAvatarProperies_Parms.InWeaponProfiles, &InWeaponProfiles, 0xC );
		memcpy( &SetAvatarProperies_Parms.InActionBarAbilities, &InActionBarAbilities, 0xC );
		memcpy( &SetAvatarProperies_Parms.InExtraDrugAbilities, &InExtraDrugAbilities, 0xC );

		pfnSetAvatarProperies->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAvatarProperies, &SetAvatarProperies_Parms, NULL );
		pfnSetAvatarProperies->FunctionFlags |= 0x400;
	};

	void SetAvatarAbility ( int AbilitySlot, int ServerAbilityId, int AbilityLevel )
	{
		static UFunction* pfnSetAvatarAbility = NULL;

		if ( !pfnSetAvatarAbility )
			pfnSetAvatarAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetAvatarAbility" );

		ACCInstanceController_execSetAvatarAbility_Parms SetAvatarAbility_Parms;
		SetAvatarAbility_Parms.AbilitySlot = AbilitySlot;
		SetAvatarAbility_Parms.ServerAbilityId = ServerAbilityId;
		SetAvatarAbility_Parms.AbilityLevel = AbilityLevel;

		pfnSetAvatarAbility->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAvatarAbility, &SetAvatarAbility_Parms, NULL );
		pfnSetAvatarAbility->FunctionFlags |= 0x400;
	};

	void ServerTestSimulateProjectileFire ()
	{
		static UFunction* pfnServerTestSimulateProjectileFire = NULL;

		if ( !pfnServerTestSimulateProjectileFire )
			pfnServerTestSimulateProjectileFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerTestSimulateProjectileFire" );

		ACCInstanceController_execServerTestSimulateProjectileFire_Parms ServerTestSimulateProjectileFire_Parms;

		this->ProcessEvent( pfnServerTestSimulateProjectileFire, &ServerTestSimulateProjectileFire_Parms, NULL );
	};

	void TestSimulateProjectileFire ()
	{
		static UFunction* pfnTestSimulateProjectileFire = NULL;

		if ( !pfnTestSimulateProjectileFire )
			pfnTestSimulateProjectileFire = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TestSimulateProjectileFire" );

		ACCInstanceController_execTestSimulateProjectileFire_Parms TestSimulateProjectileFire_Parms;

		this->ProcessEvent( pfnTestSimulateProjectileFire, &TestSimulateProjectileFire_Parms, NULL );
	};

	void ToggleAnimationDebugCamera2 ()
	{
		static UFunction* pfnToggleAnimationDebugCamera2 = NULL;

		if ( !pfnToggleAnimationDebugCamera2 )
			pfnToggleAnimationDebugCamera2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleAnimationDebugCamera2" );

		ACCInstanceController_execToggleAnimationDebugCamera2_Parms ToggleAnimationDebugCamera2_Parms;

		this->ProcessEvent( pfnToggleAnimationDebugCamera2, &ToggleAnimationDebugCamera2_Parms, NULL );
	};

	void ToggleAnimationDebugCamera ()
	{
		static UFunction* pfnToggleAnimationDebugCamera = NULL;

		if ( !pfnToggleAnimationDebugCamera )
			pfnToggleAnimationDebugCamera = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleAnimationDebugCamera" );

		ACCInstanceController_execToggleAnimationDebugCamera_Parms ToggleAnimationDebugCamera_Parms;

		this->ProcessEvent( pfnToggleAnimationDebugCamera, &ToggleAnimationDebugCamera_Parms, NULL );
	};

	void ClientSetAmmoPacks ( int Idx, int I, int J, int K )
	{
		static UFunction* pfnClientSetAmmoPacks = NULL;

		if ( !pfnClientSetAmmoPacks )
			pfnClientSetAmmoPacks = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetAmmoPacks" );

		ACCInstanceController_execClientSetAmmoPacks_Parms ClientSetAmmoPacks_Parms;
		ClientSetAmmoPacks_Parms.Idx = Idx;
		ClientSetAmmoPacks_Parms.I = I;
		ClientSetAmmoPacks_Parms.J = J;
		ClientSetAmmoPacks_Parms.K = K;

		this->ProcessEvent( pfnClientSetAmmoPacks, &ClientSetAmmoPacks_Parms, NULL );
	};

	void ServerSetAmmoPacks ( int Idx, int I, int J, int K )
	{
		static UFunction* pfnServerSetAmmoPacks = NULL;

		if ( !pfnServerSetAmmoPacks )
			pfnServerSetAmmoPacks = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetAmmoPacks" );

		ACCInstanceController_execServerSetAmmoPacks_Parms ServerSetAmmoPacks_Parms;
		ServerSetAmmoPacks_Parms.Idx = Idx;
		ServerSetAmmoPacks_Parms.I = I;
		ServerSetAmmoPacks_Parms.J = J;
		ServerSetAmmoPacks_Parms.K = K;

		this->ProcessEvent( pfnServerSetAmmoPacks, &ServerSetAmmoPacks_Parms, NULL );
	};

	void ServerGetGrenadePacks ()
	{
		static UFunction* pfnServerGetGrenadePacks = NULL;

		if ( !pfnServerGetGrenadePacks )
			pfnServerGetGrenadePacks = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerGetGrenadePacks" );

		ACCInstanceController_execServerGetGrenadePacks_Parms ServerGetGrenadePacks_Parms;

		this->ProcessEvent( pfnServerGetGrenadePacks, &ServerGetGrenadePacks_Parms, NULL );
	};

	void GetGrenadePacks ()
	{
		static UFunction* pfnGetGrenadePacks = NULL;

		if ( !pfnGetGrenadePacks )
			pfnGetGrenadePacks = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetGrenadePacks" );

		ACCInstanceController_execGetGrenadePacks_Parms GetGrenadePacks_Parms;

		this->ProcessEvent( pfnGetGrenadePacks, &GetGrenadePacks_Parms, NULL );
	};

	void ServerExplodeAllMines ()
	{
		static UFunction* pfnServerExplodeAllMines = NULL;

		if ( !pfnServerExplodeAllMines )
			pfnServerExplodeAllMines = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerExplodeAllMines" );

		ACCInstanceController_execServerExplodeAllMines_Parms ServerExplodeAllMines_Parms;

		this->ProcessEvent( pfnServerExplodeAllMines, &ServerExplodeAllMines_Parms, NULL );
	};

	void ExplodeAllMines ()
	{
		static UFunction* pfnExplodeAllMines = NULL;

		if ( !pfnExplodeAllMines )
			pfnExplodeAllMines = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ExplodeAllMines" );

		ACCInstanceController_execExplodeAllMines_Parms ExplodeAllMines_Parms;

		this->ProcessEvent( pfnExplodeAllMines, &ExplodeAllMines_Parms, NULL );
	};

	void ServerGiveStamina ()
	{
		static UFunction* pfnServerGiveStamina = NULL;

		if ( !pfnServerGiveStamina )
			pfnServerGiveStamina = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerGiveStamina" );

		ACCInstanceController_execServerGiveStamina_Parms ServerGiveStamina_Parms;

		this->ProcessEvent( pfnServerGiveStamina, &ServerGiveStamina_Parms, NULL );
	};

	void ServerSetHealth ( int Amount )
	{
		static UFunction* pfnServerSetHealth = NULL;

		if ( !pfnServerSetHealth )
			pfnServerSetHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetHealth" );

		ACCInstanceController_execServerSetHealth_Parms ServerSetHealth_Parms;
		ServerSetHealth_Parms.Amount = Amount;

		this->ProcessEvent( pfnServerSetHealth, &ServerSetHealth_Parms, NULL );
	};

	void ServerGiveHealth ()
	{
		static UFunction* pfnServerGiveHealth = NULL;

		if ( !pfnServerGiveHealth )
			pfnServerGiveHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerGiveHealth" );

		ACCInstanceController_execServerGiveHealth_Parms ServerGiveHealth_Parms;

		this->ProcessEvent( pfnServerGiveHealth, &ServerGiveHealth_Parms, NULL );
	};

	void UpdateActionBarAbilitiesDrugPacks ()
	{
		static UFunction* pfnUpdateActionBarAbilitiesDrugPacks = NULL;

		if ( !pfnUpdateActionBarAbilitiesDrugPacks )
			pfnUpdateActionBarAbilitiesDrugPacks = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateActionBarAbilitiesDrugPacks" );

		ACCInstanceController_execUpdateActionBarAbilitiesDrugPacks_Parms UpdateActionBarAbilitiesDrugPacks_Parms;

		this->ProcessEvent( pfnUpdateActionBarAbilitiesDrugPacks, &UpdateActionBarAbilitiesDrugPacks_Parms, NULL );
	};

	void CCServerAllAmmo ()
	{
		static UFunction* pfnCCServerAllAmmo = NULL;

		if ( !pfnCCServerAllAmmo )
			pfnCCServerAllAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCServerAllAmmo" );

		ACCInstanceController_execCCServerAllAmmo_Parms CCServerAllAmmo_Parms;

		this->ProcessEvent( pfnCCServerAllAmmo, &CCServerAllAmmo_Parms, NULL );
	};

	void ttGiveAll ()
	{
		static UFunction* pfnttGiveAll = NULL;

		if ( !pfnttGiveAll )
			pfnttGiveAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttGiveAll" );

		ACCInstanceController_execttGiveAll_Parms ttGiveAll_Parms;

		this->ProcessEvent( pfnttGiveAll, &ttGiveAll_Parms, NULL );
	};

	void Fly ()
	{
		static UFunction* pfnFly = NULL;

		if ( !pfnFly )
			pfnFly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Fly" );

		ACCInstanceController_execFly_Parms Fly_Parms;

		this->ProcessEvent( pfnFly, &Fly_Parms, NULL );
	};

	void ServerFly ()
	{
		static UFunction* pfnServerFly = NULL;

		if ( !pfnServerFly )
			pfnServerFly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFly" );

		ACCInstanceController_execServerFly_Parms ServerFly_Parms;

		this->ProcessEvent( pfnServerFly, &ServerFly_Parms, NULL );
	};

	void DoFly ()
	{
		static UFunction* pfnDoFly = NULL;

		if ( !pfnDoFly )
			pfnDoFly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoFly" );

		ACCInstanceController_execDoFly_Parms DoFly_Parms;

		this->ProcessEvent( pfnDoFly, &DoFly_Parms, NULL );
	};

	void Ghost ()
	{
		static UFunction* pfnGhost = NULL;

		if ( !pfnGhost )
			pfnGhost = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Ghost" );

		ACCInstanceController_execGhost_Parms Ghost_Parms;

		this->ProcessEvent( pfnGhost, &Ghost_Parms, NULL );
	};

	void ServerGhost ()
	{
		static UFunction* pfnServerGhost = NULL;

		if ( !pfnServerGhost )
			pfnServerGhost = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerGhost" );

		ACCInstanceController_execServerGhost_Parms ServerGhost_Parms;

		this->ProcessEvent( pfnServerGhost, &ServerGhost_Parms, NULL );
	};

	void DoGhost ()
	{
		static UFunction* pfnDoGhost = NULL;

		if ( !pfnDoGhost )
			pfnDoGhost = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoGhost" );

		ACCInstanceController_execDoGhost_Parms DoGhost_Parms;

		this->ProcessEvent( pfnDoGhost, &DoGhost_Parms, NULL );
	};

	void ServerRestoreCooldown ()
	{
		static UFunction* pfnServerRestoreCooldown = NULL;

		if ( !pfnServerRestoreCooldown )
			pfnServerRestoreCooldown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRestoreCooldown" );

		ACCInstanceController_execServerRestoreCooldown_Parms ServerRestoreCooldown_Parms;

		this->ProcessEvent( pfnServerRestoreCooldown, &ServerRestoreCooldown_Parms, NULL );
	};

	void RestoreCooldown ()
	{
		static UFunction* pfnRestoreCooldown = NULL;

		if ( !pfnRestoreCooldown )
			pfnRestoreCooldown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RestoreCooldown" );

		ACCInstanceController_execRestoreCooldown_Parms RestoreCooldown_Parms;

		this->ProcessEvent( pfnRestoreCooldown, &RestoreCooldown_Parms, NULL );
	};

	void SetHealth ( int Amount )
	{
		static UFunction* pfnSetHealth = NULL;

		if ( !pfnSetHealth )
			pfnSetHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetHealth" );

		ACCInstanceController_execSetHealth_Parms SetHealth_Parms;
		SetHealth_Parms.Amount = Amount;

		this->ProcessEvent( pfnSetHealth, &SetHealth_Parms, NULL );
	};

	void GiveHealth ()
	{
		static UFunction* pfnGiveHealth = NULL;

		if ( !pfnGiveHealth )
			pfnGiveHealth = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GiveHealth" );

		ACCInstanceController_execGiveHealth_Parms GiveHealth_Parms;

		this->ProcessEvent( pfnGiveHealth, &GiveHealth_Parms, NULL );
	};

	void GiveStamina ()
	{
		static UFunction* pfnGiveStamina = NULL;

		if ( !pfnGiveStamina )
			pfnGiveStamina = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GiveStamina" );

		ACCInstanceController_execGiveStamina_Parms GiveStamina_Parms;

		this->ProcessEvent( pfnGiveStamina, &GiveStamina_Parms, NULL );
	};

	void CCAllammo ()
	{
		static UFunction* pfnCCAllammo = NULL;

		if ( !pfnCCAllammo )
			pfnCCAllammo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCAllammo" );

		ACCInstanceController_execCCAllammo_Parms CCAllammo_Parms;

		this->ProcessEvent( pfnCCAllammo, &CCAllammo_Parms, NULL );
	};

	void PrintPawns ()
	{
		static UFunction* pfnPrintPawns = NULL;

		if ( !pfnPrintPawns )
			pfnPrintPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintPawns" );

		ACCInstanceController_execPrintPawns_Parms PrintPawns_Parms;

		this->ProcessEvent( pfnPrintPawns, &PrintPawns_Parms, NULL );
	};

	void ClientPrintPawns ()
	{
		static UFunction* pfnClientPrintPawns = NULL;

		if ( !pfnClientPrintPawns )
			pfnClientPrintPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientPrintPawns" );

		ACCInstanceController_execClientPrintPawns_Parms ClientPrintPawns_Parms;

		this->ProcessEvent( pfnClientPrintPawns, &ClientPrintPawns_Parms, NULL );
	};

	void ServerPrintPawns ()
	{
		static UFunction* pfnServerPrintPawns = NULL;

		if ( !pfnServerPrintPawns )
			pfnServerPrintPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerPrintPawns" );

		ACCInstanceController_execServerPrintPawns_Parms ServerPrintPawns_Parms;

		this->ProcessEvent( pfnServerPrintPawns, &ServerPrintPawns_Parms, NULL );
	};

	void DoPrintPawns ()
	{
		static UFunction* pfnDoPrintPawns = NULL;

		if ( !pfnDoPrintPawns )
			pfnDoPrintPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoPrintPawns" );

		ACCInstanceController_execDoPrintPawns_Parms DoPrintPawns_Parms;

		this->ProcessEvent( pfnDoPrintPawns, &DoPrintPawns_Parms, NULL );
	};

	void server_test ()
	{
		static UFunction* pfnserver_test = NULL;

		if ( !pfnserver_test )
			pfnserver_test = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.server_test" );

		ACCInstanceController_execserver_test_Parms server_test_Parms;

		this->ProcessEvent( pfnserver_test, &server_test_Parms, NULL );
	};

	void Test ()
	{
		static UFunction* pfnTest = NULL;

		if ( !pfnTest )
			pfnTest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Test" );

		ACCInstanceController_execTest_Parms Test_Parms;

		this->ProcessEvent( pfnTest, &Test_Parms, NULL );
	};

	void DoCrash ()
	{
		static UFunction* pfnDoCrash = NULL;

		if ( !pfnDoCrash )
			pfnDoCrash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoCrash" );

		ACCInstanceController_execDoCrash_Parms DoCrash_Parms;

		pfnDoCrash->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoCrash, &DoCrash_Parms, NULL );
		pfnDoCrash->FunctionFlags |= 0x400;
	};

	void ClientCrash ()
	{
		static UFunction* pfnClientCrash = NULL;

		if ( !pfnClientCrash )
			pfnClientCrash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientCrash" );

		ACCInstanceController_execClientCrash_Parms ClientCrash_Parms;

		this->ProcessEvent( pfnClientCrash, &ClientCrash_Parms, NULL );
	};

	void ServerCrashAll ()
	{
		static UFunction* pfnServerCrashAll = NULL;

		if ( !pfnServerCrashAll )
			pfnServerCrashAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerCrashAll" );

		ACCInstanceController_execServerCrashAll_Parms ServerCrashAll_Parms;

		this->ProcessEvent( pfnServerCrashAll, &ServerCrashAll_Parms, NULL );
	};

	void CrashAll ()
	{
		static UFunction* pfnCrashAll = NULL;

		if ( !pfnCrashAll )
			pfnCrashAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CrashAll" );

		ACCInstanceController_execCrashAll_Parms CrashAll_Parms;

		this->ProcessEvent( pfnCrashAll, &CrashAll_Parms, NULL );
	};

	void Crash ()
	{
		static UFunction* pfnCrash = NULL;

		if ( !pfnCrash )
			pfnCrash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Crash" );

		ACCInstanceController_execCrash_Parms Crash_Parms;

		this->ProcessEvent( pfnCrash, &Crash_Parms, NULL );
	};

	void DrawPreviousSpaceBasesDebug ()
	{
		static UFunction* pfnDrawPreviousSpaceBasesDebug = NULL;

		if ( !pfnDrawPreviousSpaceBasesDebug )
			pfnDrawPreviousSpaceBasesDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DrawPreviousSpaceBasesDebug" );

		ACCInstanceController_execDrawPreviousSpaceBasesDebug_Parms DrawPreviousSpaceBasesDebug_Parms;

		this->ProcessEvent( pfnDrawPreviousSpaceBasesDebug, &DrawPreviousSpaceBasesDebug_Parms, NULL );
	};

	void server_explode_all_mines ()
	{
		static UFunction* pfnserver_explode_all_mines = NULL;

		if ( !pfnserver_explode_all_mines )
			pfnserver_explode_all_mines = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.server_explode_all_mines" );

		ACCInstanceController_execserver_explode_all_mines_Parms server_explode_all_mines_Parms;

		this->ProcessEvent( pfnserver_explode_all_mines, &server_explode_all_mines_Parms, NULL );
	};

	void explode_all_mines ()
	{
		static UFunction* pfnexplode_all_mines = NULL;

		if ( !pfnexplode_all_mines )
			pfnexplode_all_mines = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.explode_all_mines" );

		ACCInstanceController_execexplode_all_mines_Parms explode_all_mines_Parms;

		this->ProcessEvent( pfnexplode_all_mines, &explode_all_mines_Parms, NULL );
	};

	void DoPerformTraceTesting ()
	{
		static UFunction* pfnDoPerformTraceTesting = NULL;

		if ( !pfnDoPerformTraceTesting )
			pfnDoPerformTraceTesting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoPerformTraceTesting" );

		ACCInstanceController_execDoPerformTraceTesting_Parms DoPerformTraceTesting_Parms;

		this->ProcessEvent( pfnDoPerformTraceTesting, &DoPerformTraceTesting_Parms, NULL );
	};

	void PerformTraceTesting ( class AActor* TraceActor, struct FVector StartPoint, struct FVector EndPoint, unsigned long bStopAtAnyHit, int Iterations )
	{
		static UFunction* pfnPerformTraceTesting = NULL;

		if ( !pfnPerformTraceTesting )
			pfnPerformTraceTesting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PerformTraceTesting" );

		ACCInstanceController_execPerformTraceTesting_Parms PerformTraceTesting_Parms;
		PerformTraceTesting_Parms.TraceActor = TraceActor;
		memcpy( &PerformTraceTesting_Parms.StartPoint, &StartPoint, 0xC );
		memcpy( &PerformTraceTesting_Parms.EndPoint, &EndPoint, 0xC );
		PerformTraceTesting_Parms.bStopAtAnyHit = bStopAtAnyHit;
		PerformTraceTesting_Parms.Iterations = Iterations;

		pfnPerformTraceTesting->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPerformTraceTesting, &PerformTraceTesting_Parms, NULL );
		pfnPerformTraceTesting->FunctionFlags |= 0x400;
	};

	float DoNativeDiv ( float A, float B )
	{
		static UFunction* pfnDoNativeDiv = NULL;

		if ( !pfnDoNativeDiv )
			pfnDoNativeDiv = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoNativeDiv" );

		ACCInstanceController_execDoNativeDiv_Parms DoNativeDiv_Parms;
		DoNativeDiv_Parms.A = A;
		DoNativeDiv_Parms.B = B;

		pfnDoNativeDiv->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoNativeDiv, &DoNativeDiv_Parms, NULL );
		pfnDoNativeDiv->FunctionFlags |= 0x400;

		return DoNativeDiv_Parms.ReturnValue;
	};

	void DoDiv ( float A, float B )
	{
		static UFunction* pfnDoDiv = NULL;

		if ( !pfnDoDiv )
			pfnDoDiv = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoDiv" );

		ACCInstanceController_execDoDiv_Parms DoDiv_Parms;
		DoDiv_Parms.A = A;
		DoDiv_Parms.B = B;

		this->ProcessEvent( pfnDoDiv, &DoDiv_Parms, NULL );
	};

	void PrintAllSkelControls ()
	{
		static UFunction* pfnPrintAllSkelControls = NULL;

		if ( !pfnPrintAllSkelControls )
			pfnPrintAllSkelControls = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintAllSkelControls" );

		ACCInstanceController_execPrintAllSkelControls_Parms PrintAllSkelControls_Parms;

		this->ProcessEvent( pfnPrintAllSkelControls, &PrintAllSkelControls_Parms, NULL );
	};

	void PrintAllAnimObjectProfiles ()
	{
		static UFunction* pfnPrintAllAnimObjectProfiles = NULL;

		if ( !pfnPrintAllAnimObjectProfiles )
			pfnPrintAllAnimObjectProfiles = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintAllAnimObjectProfiles" );

		ACCInstanceController_execPrintAllAnimObjectProfiles_Parms PrintAllAnimObjectProfiles_Parms;

		this->ProcessEvent( pfnPrintAllAnimObjectProfiles, &PrintAllAnimObjectProfiles_Parms, NULL );
	};

	void PrintAllCharacters ()
	{
		static UFunction* pfnPrintAllCharacters = NULL;

		if ( !pfnPrintAllCharacters )
			pfnPrintAllCharacters = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrintAllCharacters" );

		ACCInstanceController_execPrintAllCharacters_Parms PrintAllCharacters_Parms;

		this->ProcessEvent( pfnPrintAllCharacters, &PrintAllCharacters_Parms, NULL );
	};

	void PerformSelectAnimTreeProfiles ()
	{
		static UFunction* pfnPerformSelectAnimTreeProfiles = NULL;

		if ( !pfnPerformSelectAnimTreeProfiles )
			pfnPerformSelectAnimTreeProfiles = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PerformSelectAnimTreeProfiles" );

		ACCInstanceController_execPerformSelectAnimTreeProfiles_Parms PerformSelectAnimTreeProfiles_Parms;

		this->ProcessEvent( pfnPerformSelectAnimTreeProfiles, &PerformSelectAnimTreeProfiles_Parms, NULL );
	};

	void SetGameSpeed ( float T )
	{
		static UFunction* pfnSetGameSpeed = NULL;

		if ( !pfnSetGameSpeed )
			pfnSetGameSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetGameSpeed" );

		ACCInstanceController_execSetGameSpeed_Parms SetGameSpeed_Parms;
		SetGameSpeed_Parms.T = T;

		this->ProcessEvent( pfnSetGameSpeed, &SetGameSpeed_Parms, NULL );
	};

	void CCClientSloMo ( float T )
	{
		static UFunction* pfnCCClientSloMo = NULL;

		if ( !pfnCCClientSloMo )
			pfnCCClientSloMo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCClientSloMo" );

		ACCInstanceController_execCCClientSloMo_Parms CCClientSloMo_Parms;
		CCClientSloMo_Parms.T = T;

		this->ProcessEvent( pfnCCClientSloMo, &CCClientSloMo_Parms, NULL );
	};

	void CCServerSloMo ( float T )
	{
		static UFunction* pfnCCServerSloMo = NULL;

		if ( !pfnCCServerSloMo )
			pfnCCServerSloMo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCServerSloMo" );

		ACCInstanceController_execCCServerSloMo_Parms CCServerSloMo_Parms;
		CCServerSloMo_Parms.T = T;

		this->ProcessEvent( pfnCCServerSloMo, &CCServerSloMo_Parms, NULL );
	};

	void ttCCSlomo ( float T )
	{
		static UFunction* pfnttCCSlomo = NULL;

		if ( !pfnttCCSlomo )
			pfnttCCSlomo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttCCSlomo" );

		ACCInstanceController_execttCCSlomo_Parms ttCCSlomo_Parms;
		ttCCSlomo_Parms.T = T;

		this->ProcessEvent( pfnttCCSlomo, &ttCCSlomo_Parms, NULL );
	};

	void CCServerSlomoDecrease ()
	{
		static UFunction* pfnCCServerSlomoDecrease = NULL;

		if ( !pfnCCServerSlomoDecrease )
			pfnCCServerSlomoDecrease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCServerSlomoDecrease" );

		ACCInstanceController_execCCServerSlomoDecrease_Parms CCServerSlomoDecrease_Parms;

		this->ProcessEvent( pfnCCServerSlomoDecrease, &CCServerSlomoDecrease_Parms, NULL );
	};

	void ttCCSlomoDecrease ()
	{
		static UFunction* pfnttCCSlomoDecrease = NULL;

		if ( !pfnttCCSlomoDecrease )
			pfnttCCSlomoDecrease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttCCSlomoDecrease" );

		ACCInstanceController_execttCCSlomoDecrease_Parms ttCCSlomoDecrease_Parms;

		this->ProcessEvent( pfnttCCSlomoDecrease, &ttCCSlomoDecrease_Parms, NULL );
	};

	void CCServerSlomoIncrease ()
	{
		static UFunction* pfnCCServerSlomoIncrease = NULL;

		if ( !pfnCCServerSlomoIncrease )
			pfnCCServerSlomoIncrease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCServerSlomoIncrease" );

		ACCInstanceController_execCCServerSlomoIncrease_Parms CCServerSlomoIncrease_Parms;

		this->ProcessEvent( pfnCCServerSlomoIncrease, &CCServerSlomoIncrease_Parms, NULL );
	};

	void ttCCSlomoIncrease ()
	{
		static UFunction* pfnttCCSlomoIncrease = NULL;

		if ( !pfnttCCSlomoIncrease )
			pfnttCCSlomoIncrease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ttCCSlomoIncrease" );

		ACCInstanceController_execttCCSlomoIncrease_Parms ttCCSlomoIncrease_Parms;

		this->ProcessEvent( pfnttCCSlomoIncrease, &ttCCSlomoIncrease_Parms, NULL );
	};

	void debugMakeViewTargetInfoMessage ( struct FString* Message )
	{
		static UFunction* pfndebugMakeViewTargetInfoMessage = NULL;

		if ( !pfndebugMakeViewTargetInfoMessage )
			pfndebugMakeViewTargetInfoMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.debugMakeViewTargetInfoMessage" );

		ACCInstanceController_execdebugMakeViewTargetInfoMessage_Parms debugMakeViewTargetInfoMessage_Parms;

		this->ProcessEvent( pfndebugMakeViewTargetInfoMessage, &debugMakeViewTargetInfoMessage_Parms, NULL );

		if ( Message )
			memcpy( Message, &debugMakeViewTargetInfoMessage_Parms.Message, 0xC ); // CPF_OutParm
	};

	void debugServerGetViewTargetInfo ()
	{
		static UFunction* pfndebugServerGetViewTargetInfo = NULL;

		if ( !pfndebugServerGetViewTargetInfo )
			pfndebugServerGetViewTargetInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.debugServerGetViewTargetInfo" );

		ACCInstanceController_execdebugServerGetViewTargetInfo_Parms debugServerGetViewTargetInfo_Parms;

		this->ProcessEvent( pfndebugServerGetViewTargetInfo, &debugServerGetViewTargetInfo_Parms, NULL );
	};

	void debugGetViewTargetInfo ()
	{
		static UFunction* pfndebugGetViewTargetInfo = NULL;

		if ( !pfndebugGetViewTargetInfo )
			pfndebugGetViewTargetInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.debugGetViewTargetInfo" );

		ACCInstanceController_execdebugGetViewTargetInfo_Parms debugGetViewTargetInfo_Parms;

		this->ProcessEvent( pfndebugGetViewTargetInfo, &debugGetViewTargetInfo_Parms, NULL );
	};

	void ChangeDeadCameraPosition ( int SwitchDirection/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChangeDeadCameraPosition = NULL;

		if ( !pfnChangeDeadCameraPosition )
			pfnChangeDeadCameraPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ChangeDeadCameraPosition" );

		ACCInstanceController_execChangeDeadCameraPosition_Parms ChangeDeadCameraPosition_Parms;
		ChangeDeadCameraPosition_Parms.SwitchDirection = SwitchDirection;

		this->ProcessEvent( pfnChangeDeadCameraPosition, &ChangeDeadCameraPosition_Parms, NULL );
	};

	void ReceiveExtraMessageString ( struct FString ExtraString )
	{
		static UFunction* pfnReceiveExtraMessageString = NULL;

		if ( !pfnReceiveExtraMessageString )
			pfnReceiveExtraMessageString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReceiveExtraMessageString" );

		ACCInstanceController_execReceiveExtraMessageString_Parms ReceiveExtraMessageString_Parms;
		memcpy( &ReceiveExtraMessageString_Parms.ExtraString, &ExtraString, 0xC );

		this->ProcessEvent( pfnReceiveExtraMessageString, &ReceiveExtraMessageString_Parms, NULL );
	};

	void ClientGiveActionActor ( class APawn* NewActionActor )
	{
		static UFunction* pfnClientGiveActionActor = NULL;

		if ( !pfnClientGiveActionActor )
			pfnClientGiveActionActor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientGiveActionActor" );

		ACCInstanceController_execClientGiveActionActor_Parms ClientGiveActionActor_Parms;
		ClientGiveActionActor_Parms.NewActionActor = NewActionActor;

		this->ProcessEvent( pfnClientGiveActionActor, &ClientGiveActionActor_Parms, NULL );
	};

	void ClientGiveKillInfo ( class APawn* DeadPawn, class APawn* KillerPawn )
	{
		static UFunction* pfnClientGiveKillInfo = NULL;

		if ( !pfnClientGiveKillInfo )
			pfnClientGiveKillInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientGiveKillInfo" );

		ACCInstanceController_execClientGiveKillInfo_Parms ClientGiveKillInfo_Parms;
		ClientGiveKillInfo_Parms.DeadPawn = DeadPawn;
		ClientGiveKillInfo_Parms.KillerPawn = KillerPawn;

		this->ProcessEvent( pfnClientGiveKillInfo, &ClientGiveKillInfo_Parms, NULL );
	};

	void NotifyTakenControlDamage ( float Damage, class APawn* injured, class AController* InstigatedBy )
	{
		static UFunction* pfnNotifyTakenControlDamage = NULL;

		if ( !pfnNotifyTakenControlDamage )
			pfnNotifyTakenControlDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyTakenControlDamage" );

		ACCInstanceController_execNotifyTakenControlDamage_Parms NotifyTakenControlDamage_Parms;
		NotifyTakenControlDamage_Parms.Damage = Damage;
		NotifyTakenControlDamage_Parms.injured = injured;
		NotifyTakenControlDamage_Parms.InstigatedBy = InstigatedBy;

		this->ProcessEvent( pfnNotifyTakenControlDamage, &NotifyTakenControlDamage_Parms, NULL );
	};

	void NotifyHealthBelowZero ( class AController* Killer, class APawn* KilledPawn )
	{
		static UFunction* pfnNotifyHealthBelowZero = NULL;

		if ( !pfnNotifyHealthBelowZero )
			pfnNotifyHealthBelowZero = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyHealthBelowZero" );

		ACCInstanceController_execNotifyHealthBelowZero_Parms NotifyHealthBelowZero_Parms;
		NotifyHealthBelowZero_Parms.Killer = Killer;
		NotifyHealthBelowZero_Parms.KilledPawn = KilledPawn;

		this->ProcessEvent( pfnNotifyHealthBelowZero, &NotifyHealthBelowZero_Parms, NULL );
	};

	void eventReceivedPlayer ()
	{
		static UFunction* pfnReceivedPlayer = NULL;

		if ( !pfnReceivedPlayer )
			pfnReceivedPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReceivedPlayer" );

		ACCInstanceController_eventReceivedPlayer_Parms ReceivedPlayer_Parms;

		this->ProcessEvent( pfnReceivedPlayer, &ReceivedPlayer_Parms, NULL );
	};

	void FillDefaultAppearance ( unsigned char CharClass, struct FCharacterVisualDescription* Appearance )
	{
		static UFunction* pfnFillDefaultAppearance = NULL;

		if ( !pfnFillDefaultAppearance )
			pfnFillDefaultAppearance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.FillDefaultAppearance" );

		ACCInstanceController_execFillDefaultAppearance_Parms FillDefaultAppearance_Parms;
		FillDefaultAppearance_Parms.CharClass = CharClass;

		pfnFillDefaultAppearance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFillDefaultAppearance, &FillDefaultAppearance_Parms, NULL );
		pfnFillDefaultAppearance->FunctionFlags |= 0x400;

		if ( Appearance )
			memcpy( Appearance, &FillDefaultAppearance_Parms.Appearance, 0x48 ); // CPF_OutParm
	};

	void ClientFinishEmoteAnim ( class ACCInstancePawn* P, struct FRotator PawnEmoteRotation, struct FRotator ControllerPostEmoteRotation )
	{
		static UFunction* pfnClientFinishEmoteAnim = NULL;

		if ( !pfnClientFinishEmoteAnim )
			pfnClientFinishEmoteAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientFinishEmoteAnim" );

		ACCInstanceController_execClientFinishEmoteAnim_Parms ClientFinishEmoteAnim_Parms;
		ClientFinishEmoteAnim_Parms.P = P;
		memcpy( &ClientFinishEmoteAnim_Parms.PawnEmoteRotation, &PawnEmoteRotation, 0xC );
		memcpy( &ClientFinishEmoteAnim_Parms.ControllerPostEmoteRotation, &ControllerPostEmoteRotation, 0xC );

		this->ProcessEvent( pfnClientFinishEmoteAnim, &ClientFinishEmoteAnim_Parms, NULL );
	};

	void ServerAbortPlayingEmoteDueTo ()
	{
		static UFunction* pfnServerAbortPlayingEmoteDueTo = NULL;

		if ( !pfnServerAbortPlayingEmoteDueTo )
			pfnServerAbortPlayingEmoteDueTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerAbortPlayingEmoteDueTo" );

		ACCInstanceController_execServerAbortPlayingEmoteDueTo_Parms ServerAbortPlayingEmoteDueTo_Parms;

		this->ProcessEvent( pfnServerAbortPlayingEmoteDueTo, &ServerAbortPlayingEmoteDueTo_Parms, NULL );
	};

	void ServerAbortPlayingEmoteDueToInternal ()
	{
		static UFunction* pfnServerAbortPlayingEmoteDueToInternal = NULL;

		if ( !pfnServerAbortPlayingEmoteDueToInternal )
			pfnServerAbortPlayingEmoteDueToInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerAbortPlayingEmoteDueToInternal" );

		ACCInstanceController_execServerAbortPlayingEmoteDueToInternal_Parms ServerAbortPlayingEmoteDueToInternal_Parms;

		this->ProcessEvent( pfnServerAbortPlayingEmoteDueToInternal, &ServerAbortPlayingEmoteDueToInternal_Parms, NULL );
	};

	void AbortPlayingEmote ()
	{
		static UFunction* pfnAbortPlayingEmote = NULL;

		if ( !pfnAbortPlayingEmote )
			pfnAbortPlayingEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AbortPlayingEmote" );

		ACCInstanceController_execAbortPlayingEmote_Parms AbortPlayingEmote_Parms;

		this->ProcessEvent( pfnAbortPlayingEmote, &AbortPlayingEmote_Parms, NULL );
	};

	struct FName PeekNextInstanceEmoteName ()
	{
		static UFunction* pfnPeekNextInstanceEmoteName = NULL;

		if ( !pfnPeekNextInstanceEmoteName )
			pfnPeekNextInstanceEmoteName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PeekNextInstanceEmoteName" );

		ACCInstanceController_execPeekNextInstanceEmoteName_Parms PeekNextInstanceEmoteName_Parms;

		this->ProcessEvent( pfnPeekNextInstanceEmoteName, &PeekNextInstanceEmoteName_Parms, NULL );

		return PeekNextInstanceEmoteName_Parms.ReturnValue;
	};

	float GetEmoteLength ( struct FName EmoteName )
	{
		static UFunction* pfnGetEmoteLength = NULL;

		if ( !pfnGetEmoteLength )
			pfnGetEmoteLength = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetEmoteLength" );

		ACCInstanceController_execGetEmoteLength_Parms GetEmoteLength_Parms;
		memcpy( &GetEmoteLength_Parms.EmoteName, &EmoteName, 0x8 );

		this->ProcessEvent( pfnGetEmoteLength, &GetEmoteLength_Parms, NULL );

		return GetEmoteLength_Parms.ReturnValue;
	};

	bool EmoteExists ( struct FName EmoteName )
	{
		static UFunction* pfnEmoteExists = NULL;

		if ( !pfnEmoteExists )
			pfnEmoteExists = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EmoteExists" );

		ACCInstanceController_execEmoteExists_Parms EmoteExists_Parms;
		memcpy( &EmoteExists_Parms.EmoteName, &EmoteName, 0x8 );

		this->ProcessEvent( pfnEmoteExists, &EmoteExists_Parms, NULL );

		return EmoteExists_Parms.ReturnValue;
	};

	bool CheckCanPlayEmote ()
	{
		static UFunction* pfnCheckCanPlayEmote = NULL;

		if ( !pfnCheckCanPlayEmote )
			pfnCheckCanPlayEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheckCanPlayEmote" );

		ACCInstanceController_execCheckCanPlayEmote_Parms CheckCanPlayEmote_Parms;

		this->ProcessEvent( pfnCheckCanPlayEmote, &CheckCanPlayEmote_Parms, NULL );

		return CheckCanPlayEmote_Parms.ReturnValue;
	};

	void PlayEmoteRelease ()
	{
		static UFunction* pfnPlayEmoteRelease = NULL;

		if ( !pfnPlayEmoteRelease )
			pfnPlayEmoteRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayEmoteRelease" );

		ACCInstanceController_execPlayEmoteRelease_Parms PlayEmoteRelease_Parms;

		this->ProcessEvent( pfnPlayEmoteRelease, &PlayEmoteRelease_Parms, NULL );
	};

	void PlayEmote ( struct FName InEmoteName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayEmote = NULL;

		if ( !pfnPlayEmote )
			pfnPlayEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayEmote" );

		ACCInstanceController_execPlayEmote_Parms PlayEmote_Parms;
		memcpy( &PlayEmote_Parms.InEmoteName, &InEmoteName, 0x8 );

		this->ProcessEvent( pfnPlayEmote, &PlayEmote_Parms, NULL );
	};

	void ClientSetIsInNoMovementMode ( class ACCInstancePawn* P, unsigned long bNewIsInNoMovementMode )
	{
		static UFunction* pfnClientSetIsInNoMovementMode = NULL;

		if ( !pfnClientSetIsInNoMovementMode )
			pfnClientSetIsInNoMovementMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetIsInNoMovementMode" );

		ACCInstanceController_execClientSetIsInNoMovementMode_Parms ClientSetIsInNoMovementMode_Parms;
		ClientSetIsInNoMovementMode_Parms.P = P;
		ClientSetIsInNoMovementMode_Parms.bNewIsInNoMovementMode = bNewIsInNoMovementMode;

		this->ProcessEvent( pfnClientSetIsInNoMovementMode, &ClientSetIsInNoMovementMode_Parms, NULL );
	};

	void AbortNoMovement ()
	{
		static UFunction* pfnAbortNoMovement = NULL;

		if ( !pfnAbortNoMovement )
			pfnAbortNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AbortNoMovement" );

		ACCInstanceController_execAbortNoMovement_Parms AbortNoMovement_Parms;

		this->ProcessEvent( pfnAbortNoMovement, &AbortNoMovement_Parms, NULL );
	};

	void StartNoMovement ()
	{
		static UFunction* pfnStartNoMovement = NULL;

		if ( !pfnStartNoMovement )
			pfnStartNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartNoMovement" );

		ACCInstanceController_execStartNoMovement_Parms StartNoMovement_Parms;

		this->ProcessEvent( pfnStartNoMovement, &StartNoMovement_Parms, NULL );
	};

	void StartGrenadeThrowingNoMovement ()
	{
		static UFunction* pfnStartGrenadeThrowingNoMovement = NULL;

		if ( !pfnStartGrenadeThrowingNoMovement )
			pfnStartGrenadeThrowingNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartGrenadeThrowingNoMovement" );

		ACCInstanceController_execStartGrenadeThrowingNoMovement_Parms StartGrenadeThrowingNoMovement_Parms;

		this->ProcessEvent( pfnStartGrenadeThrowingNoMovement, &StartGrenadeThrowingNoMovement_Parms, NULL );
	};

	void AbortGrenadeThrowingNoMovement ()
	{
		static UFunction* pfnAbortGrenadeThrowingNoMovement = NULL;

		if ( !pfnAbortGrenadeThrowingNoMovement )
			pfnAbortGrenadeThrowingNoMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AbortGrenadeThrowingNoMovement" );

		ACCInstanceController_execAbortGrenadeThrowingNoMovement_Parms AbortGrenadeThrowingNoMovement_Parms;

		this->ProcessEvent( pfnAbortGrenadeThrowingNoMovement, &AbortGrenadeThrowingNoMovement_Parms, NULL );
	};

	bool NeedsNoMovementMode ()
	{
		static UFunction* pfnNeedsNoMovementMode = NULL;

		if ( !pfnNeedsNoMovementMode )
			pfnNeedsNoMovementMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NeedsNoMovementMode" );

		ACCInstanceController_execNeedsNoMovementMode_Parms NeedsNoMovementMode_Parms;

		this->ProcessEvent( pfnNeedsNoMovementMode, &NeedsNoMovementMode_Parms, NULL );

		return NeedsNoMovementMode_Parms.ReturnValue;
	};

	void ClientThrowAbilityGrenade ( struct FString GrenadePresetName )
	{
		static UFunction* pfnClientThrowAbilityGrenade = NULL;

		if ( !pfnClientThrowAbilityGrenade )
			pfnClientThrowAbilityGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientThrowAbilityGrenade" );

		ACCInstanceController_execClientThrowAbilityGrenade_Parms ClientThrowAbilityGrenade_Parms;
		memcpy( &ClientThrowAbilityGrenade_Parms.GrenadePresetName, &GrenadePresetName, 0xC );

		this->ProcessEvent( pfnClientThrowAbilityGrenade, &ClientThrowAbilityGrenade_Parms, NULL );
	};

	void ThrowGrenadeRelease ()
	{
		static UFunction* pfnThrowGrenadeRelease = NULL;

		if ( !pfnThrowGrenadeRelease )
			pfnThrowGrenadeRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ThrowGrenadeRelease" );

		ACCInstanceController_execThrowGrenadeRelease_Parms ThrowGrenadeRelease_Parms;

		this->ProcessEvent( pfnThrowGrenadeRelease, &ThrowGrenadeRelease_Parms, NULL );
	};

	void ThrowGrenade ()
	{
		static UFunction* pfnThrowGrenade = NULL;

		if ( !pfnThrowGrenade )
			pfnThrowGrenade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ThrowGrenade" );

		ACCInstanceController_execThrowGrenade_Parms ThrowGrenade_Parms;

		this->ProcessEvent( pfnThrowGrenade, &ThrowGrenade_Parms, NULL );
	};

	void MeleeDefendRelease ()
	{
		static UFunction* pfnMeleeDefendRelease = NULL;

		if ( !pfnMeleeDefendRelease )
			pfnMeleeDefendRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MeleeDefendRelease" );

		ACCInstanceController_execMeleeDefendRelease_Parms MeleeDefendRelease_Parms;

		this->ProcessEvent( pfnMeleeDefendRelease, &MeleeDefendRelease_Parms, NULL );
	};

	void MeleeDefend ()
	{
		static UFunction* pfnMeleeDefend = NULL;

		if ( !pfnMeleeDefend )
			pfnMeleeDefend = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MeleeDefend" );

		ACCInstanceController_execMeleeDefend_Parms MeleeDefend_Parms;

		this->ProcessEvent( pfnMeleeDefend, &MeleeDefend_Parms, NULL );
	};

	bool IsWantsFirstMeleeBeatMode ()
	{
		static UFunction* pfnIsWantsFirstMeleeBeatMode = NULL;

		if ( !pfnIsWantsFirstMeleeBeatMode )
			pfnIsWantsFirstMeleeBeatMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsWantsFirstMeleeBeatMode" );

		ACCInstanceController_execIsWantsFirstMeleeBeatMode_Parms IsWantsFirstMeleeBeatMode_Parms;

		this->ProcessEvent( pfnIsWantsFirstMeleeBeatMode, &IsWantsFirstMeleeBeatMode_Parms, NULL );

		return IsWantsFirstMeleeBeatMode_Parms.ReturnValue;
	};

	void StopManualMeleeMovement ()
	{
		static UFunction* pfnStopManualMeleeMovement = NULL;

		if ( !pfnStopManualMeleeMovement )
			pfnStopManualMeleeMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StopManualMeleeMovement" );

		ACCInstanceController_execStopManualMeleeMovement_Parms StopManualMeleeMovement_Parms;

		this->ProcessEvent( pfnStopManualMeleeMovement, &StopManualMeleeMovement_Parms, NULL );
	};

	void StartMeleeMovement ()
	{
		static UFunction* pfnStartMeleeMovement = NULL;

		if ( !pfnStartMeleeMovement )
			pfnStartMeleeMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartMeleeMovement" );

		ACCInstanceController_execStartMeleeMovement_Parms StartMeleeMovement_Parms;

		this->ProcessEvent( pfnStartMeleeMovement, &StartMeleeMovement_Parms, NULL );
	};

	void AbortMeleeMovement ()
	{
		static UFunction* pfnAbortMeleeMovement = NULL;

		if ( !pfnAbortMeleeMovement )
			pfnAbortMeleeMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AbortMeleeMovement" );

		ACCInstanceController_execAbortMeleeMovement_Parms AbortMeleeMovement_Parms;

		this->ProcessEvent( pfnAbortMeleeMovement, &AbortMeleeMovement_Parms, NULL );
	};

	void ClientFinishMeleeAnim ( class ACCInstancePawn* P, struct FRotator ControllerPostMeleeRotation )
	{
		static UFunction* pfnClientFinishMeleeAnim = NULL;

		if ( !pfnClientFinishMeleeAnim )
			pfnClientFinishMeleeAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientFinishMeleeAnim" );

		ACCInstanceController_execClientFinishMeleeAnim_Parms ClientFinishMeleeAnim_Parms;
		ClientFinishMeleeAnim_Parms.P = P;
		memcpy( &ClientFinishMeleeAnim_Parms.ControllerPostMeleeRotation, &ControllerPostMeleeRotation, 0xC );

		this->ProcessEvent( pfnClientFinishMeleeAnim, &ClientFinishMeleeAnim_Parms, NULL );
	};

	void ClientStartMeleeAnim ( class ACCInstancePawn* P )
	{
		static UFunction* pfnClientStartMeleeAnim = NULL;

		if ( !pfnClientStartMeleeAnim )
			pfnClientStartMeleeAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientStartMeleeAnim" );

		ACCInstanceController_execClientStartMeleeAnim_Parms ClientStartMeleeAnim_Parms;
		ClientStartMeleeAnim_Parms.P = P;

		this->ProcessEvent( pfnClientStartMeleeAnim, &ClientStartMeleeAnim_Parms, NULL );
	};

	void MeleeTuning_SetGF ( float MeleeAvoidanceGlueFactor )
	{
		static UFunction* pfnMeleeTuning_SetGF = NULL;

		if ( !pfnMeleeTuning_SetGF )
			pfnMeleeTuning_SetGF = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MeleeTuning_SetGF" );

		ACCInstanceController_execMeleeTuning_SetGF_Parms MeleeTuning_SetGF_Parms;
		MeleeTuning_SetGF_Parms.MeleeAvoidanceGlueFactor = MeleeAvoidanceGlueFactor;

		this->ProcessEvent( pfnMeleeTuning_SetGF, &MeleeTuning_SetGF_Parms, NULL );
	};

	void MeleeTuning_SetARM ( float MeleeAvoidanceRadiusMultiplier )
	{
		static UFunction* pfnMeleeTuning_SetARM = NULL;

		if ( !pfnMeleeTuning_SetARM )
			pfnMeleeTuning_SetARM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MeleeTuning_SetARM" );

		ACCInstanceController_execMeleeTuning_SetARM_Parms MeleeTuning_SetARM_Parms;
		MeleeTuning_SetARM_Parms.MeleeAvoidanceRadiusMultiplier = MeleeAvoidanceRadiusMultiplier;

		this->ProcessEvent( pfnMeleeTuning_SetARM, &MeleeTuning_SetARM_Parms, NULL );
	};

	void SetMeleeInitialViewRotation ()
	{
		static UFunction* pfnSetMeleeInitialViewRotation = NULL;

		if ( !pfnSetMeleeInitialViewRotation )
			pfnSetMeleeInitialViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetMeleeInitialViewRotation" );

		ACCInstanceController_execSetMeleeInitialViewRotation_Parms SetMeleeInitialViewRotation_Parms;

		this->ProcessEvent( pfnSetMeleeInitialViewRotation, &SetMeleeInitialViewRotation_Parms, NULL );
	};

	void SetMeleeCameraDescription ( struct FName DescName )
	{
		static UFunction* pfnSetMeleeCameraDescription = NULL;

		if ( !pfnSetMeleeCameraDescription )
			pfnSetMeleeCameraDescription = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetMeleeCameraDescription" );

		ACCInstanceController_execSetMeleeCameraDescription_Parms SetMeleeCameraDescription_Parms;
		memcpy( &SetMeleeCameraDescription_Parms.DescName, &DescName, 0x8 );

		this->ProcessEvent( pfnSetMeleeCameraDescription, &SetMeleeCameraDescription_Parms, NULL );
	};

	void MeleeRelease ()
	{
		static UFunction* pfnMeleeRelease = NULL;

		if ( !pfnMeleeRelease )
			pfnMeleeRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MeleeRelease" );

		ACCInstanceController_execMeleeRelease_Parms MeleeRelease_Parms;

		this->ProcessEvent( pfnMeleeRelease, &MeleeRelease_Parms, NULL );
	};

	void Melee ( int Mode/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMelee = NULL;

		if ( !pfnMelee )
			pfnMelee = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Melee" );

		ACCInstanceController_execMelee_Parms Melee_Parms;
		Melee_Parms.Mode = Mode;

		this->ProcessEvent( pfnMelee, &Melee_Parms, NULL );
	};

	void RestoreAmmo ()
	{
		static UFunction* pfnRestoreAmmo = NULL;

		if ( !pfnRestoreAmmo )
			pfnRestoreAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RestoreAmmo" );

		ACCInstanceController_execRestoreAmmo_Parms RestoreAmmo_Parms;

		this->ProcessEvent( pfnRestoreAmmo, &RestoreAmmo_Parms, NULL );
	};

	void ServerRestoreAmmo ()
	{
		static UFunction* pfnServerRestoreAmmo = NULL;

		if ( !pfnServerRestoreAmmo )
			pfnServerRestoreAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRestoreAmmo" );

		ACCInstanceController_execServerRestoreAmmo_Parms ServerRestoreAmmo_Parms;

		this->ProcessEvent( pfnServerRestoreAmmo, &ServerRestoreAmmo_Parms, NULL );
	};

	void SetPreset ( struct FName PresetName, int Lvl/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetPreset = NULL;

		if ( !pfnSetPreset )
			pfnSetPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetPreset" );

		ACCInstanceController_execSetPreset_Parms SetPreset_Parms;
		memcpy( &SetPreset_Parms.PresetName, &PresetName, 0x8 );
		SetPreset_Parms.Lvl = Lvl;

		this->ProcessEvent( pfnSetPreset, &SetPreset_Parms, NULL );
	};

	void eventUDSAvatarSetPreset ( struct FString PresetName )
	{
		static UFunction* pfnUDSAvatarSetPreset = NULL;

		if ( !pfnUDSAvatarSetPreset )
			pfnUDSAvatarSetPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UDSAvatarSetPreset" );

		ACCInstanceController_eventUDSAvatarSetPreset_Parms UDSAvatarSetPreset_Parms;
		memcpy( &UDSAvatarSetPreset_Parms.PresetName, &PresetName, 0xC );

		this->ProcessEvent( pfnUDSAvatarSetPreset, &UDSAvatarSetPreset_Parms, NULL );
	};

	void ClientSetPreset ( struct FName PresetName )
	{
		static UFunction* pfnClientSetPreset = NULL;

		if ( !pfnClientSetPreset )
			pfnClientSetPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetPreset" );

		ACCInstanceController_execClientSetPreset_Parms ClientSetPreset_Parms;
		memcpy( &ClientSetPreset_Parms.PresetName, &PresetName, 0x8 );

		this->ProcessEvent( pfnClientSetPreset, &ClientSetPreset_Parms, NULL );
	};

	void ServerSetPreset ( struct FName PresetName, int Lvl/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerSetPreset = NULL;

		if ( !pfnServerSetPreset )
			pfnServerSetPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetPreset" );

		ACCInstanceController_execServerSetPreset_Parms ServerSetPreset_Parms;
		memcpy( &ServerSetPreset_Parms.PresetName, &PresetName, 0x8 );
		ServerSetPreset_Parms.Lvl = Lvl;

		this->ProcessEvent( pfnServerSetPreset, &ServerSetPreset_Parms, NULL );
	};

	void ReplicateActiveWeaponPreset ( struct FString Data )
	{
		static UFunction* pfnReplicateActiveWeaponPreset = NULL;

		if ( !pfnReplicateActiveWeaponPreset )
			pfnReplicateActiveWeaponPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateActiveWeaponPreset" );

		ACCInstanceController_execReplicateActiveWeaponPreset_Parms ReplicateActiveWeaponPreset_Parms;
		memcpy( &ReplicateActiveWeaponPreset_Parms.Data, &Data, 0xC );

		this->ProcessEvent( pfnReplicateActiveWeaponPreset, &ReplicateActiveWeaponPreset_Parms, NULL );
	};

	void ReplicateActiveWeaponPresetAsString ( void* Preset )
	{
		static UFunction* pfnReplicateActiveWeaponPresetAsString = NULL;

		if ( !pfnReplicateActiveWeaponPresetAsString )
			pfnReplicateActiveWeaponPresetAsString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateActiveWeaponPresetAsString" );

		ACCInstanceController_execReplicateActiveWeaponPresetAsString_Parms ReplicateActiveWeaponPresetAsString_Parms;
		ReplicateActiveWeaponPresetAsString_Parms.Preset = Preset;

		this->ProcessEvent( pfnReplicateActiveWeaponPresetAsString, &ReplicateActiveWeaponPresetAsString_Parms, NULL );
	};

	void ReplicateWeaponPreset ( unsigned char Slot, struct FString Data )
	{
		static UFunction* pfnReplicateWeaponPreset = NULL;

		if ( !pfnReplicateWeaponPreset )
			pfnReplicateWeaponPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateWeaponPreset" );

		ACCInstanceController_execReplicateWeaponPreset_Parms ReplicateWeaponPreset_Parms;
		ReplicateWeaponPreset_Parms.Slot = Slot;
		memcpy( &ReplicateWeaponPreset_Parms.Data, &Data, 0xC );

		this->ProcessEvent( pfnReplicateWeaponPreset, &ReplicateWeaponPreset_Parms, NULL );
	};

	void ReplicateWeaponPresetNoEditor ( unsigned char Slot, struct FName PresetName )
	{
		static UFunction* pfnReplicateWeaponPresetNoEditor = NULL;

		if ( !pfnReplicateWeaponPresetNoEditor )
			pfnReplicateWeaponPresetNoEditor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateWeaponPresetNoEditor" );

		ACCInstanceController_execReplicateWeaponPresetNoEditor_Parms ReplicateWeaponPresetNoEditor_Parms;
		ReplicateWeaponPresetNoEditor_Parms.Slot = Slot;
		memcpy( &ReplicateWeaponPresetNoEditor_Parms.PresetName, &PresetName, 0x8 );

		this->ProcessEvent( pfnReplicateWeaponPresetNoEditor, &ReplicateWeaponPresetNoEditor_Parms, NULL );
	};

	void ReplicateWeaponPresetAsString ( unsigned char Slot, void* Preset )
	{
		static UFunction* pfnReplicateWeaponPresetAsString = NULL;

		if ( !pfnReplicateWeaponPresetAsString )
			pfnReplicateWeaponPresetAsString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateWeaponPresetAsString" );

		ACCInstanceController_execReplicateWeaponPresetAsString_Parms ReplicateWeaponPresetAsString_Parms;
		ReplicateWeaponPresetAsString_Parms.Slot = Slot;
		ReplicateWeaponPresetAsString_Parms.Preset = Preset;

		this->ProcessEvent( pfnReplicateWeaponPresetAsString, &ReplicateWeaponPresetAsString_Parms, NULL );
	};

	void ReplicateActiveAvatarPreset ()
	{
		static UFunction* pfnReplicateActiveAvatarPreset = NULL;

		if ( !pfnReplicateActiveAvatarPreset )
			pfnReplicateActiveAvatarPreset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateActiveAvatarPreset" );

		ACCInstanceController_execReplicateActiveAvatarPreset_Parms ReplicateActiveAvatarPreset_Parms;

		this->ProcessEvent( pfnReplicateActiveAvatarPreset, &ReplicateActiveAvatarPreset_Parms, NULL );
	};

	void ReplicateActiveAvatarPresetAsString ( void* Preset, struct FName PresetName )
	{
		static UFunction* pfnReplicateActiveAvatarPresetAsString = NULL;

		if ( !pfnReplicateActiveAvatarPresetAsString )
			pfnReplicateActiveAvatarPresetAsString = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateActiveAvatarPresetAsString" );

		ACCInstanceController_execReplicateActiveAvatarPresetAsString_Parms ReplicateActiveAvatarPresetAsString_Parms;
		ReplicateActiveAvatarPresetAsString_Parms.Preset = Preset;
		memcpy( &ReplicateActiveAvatarPresetAsString_Parms.PresetName, &PresetName, 0x8 );

		this->ProcessEvent( pfnReplicateActiveAvatarPresetAsString, &ReplicateActiveAvatarPresetAsString_Parms, NULL );
	};

	void ControllerServerNotifyTargetDamaged ()
	{
		static UFunction* pfnControllerServerNotifyTargetDamaged = NULL;

		if ( !pfnControllerServerNotifyTargetDamaged )
			pfnControllerServerNotifyTargetDamaged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ControllerServerNotifyTargetDamaged" );

		ACCInstanceController_execControllerServerNotifyTargetDamaged_Parms ControllerServerNotifyTargetDamaged_Parms;

		this->ProcessEvent( pfnControllerServerNotifyTargetDamaged, &ControllerServerNotifyTargetDamaged_Parms, NULL );
	};

	void ServerSetRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnServerSetRotation = NULL;

		if ( !pfnServerSetRotation )
			pfnServerSetRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetRotation" );

		ACCInstanceController_execServerSetRotation_Parms ServerSetRotation_Parms;
		memcpy( &ServerSetRotation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnServerSetRotation, &ServerSetRotation_Parms, NULL );
	};

	void DoAddRotation ( struct FRotator Delta )
	{
		static UFunction* pfnDoAddRotation = NULL;

		if ( !pfnDoAddRotation )
			pfnDoAddRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoAddRotation" );

		ACCInstanceController_execDoAddRotation_Parms DoAddRotation_Parms;
		memcpy( &DoAddRotation_Parms.Delta, &Delta, 0xC );

		this->ProcessEvent( pfnDoAddRotation, &DoAddRotation_Parms, NULL );
	};

	void SetVisibility ( unsigned long bVis, struct FName AbilName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetVisibility = NULL;

		if ( !pfnSetVisibility )
			pfnSetVisibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetVisibility" );

		ACCInstanceController_execSetVisibility_Parms SetVisibility_Parms;
		SetVisibility_Parms.bVis = bVis;
		memcpy( &SetVisibility_Parms.AbilName, &AbilName, 0x8 );

		this->ProcessEvent( pfnSetVisibility, &SetVisibility_Parms, NULL );
	};

	void Server_Kaboom ()
	{
		static UFunction* pfnServer_Kaboom = NULL;

		if ( !pfnServer_Kaboom )
			pfnServer_Kaboom = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_Kaboom" );

		ACCInstanceController_execServer_Kaboom_Parms Server_Kaboom_Parms;

		this->ProcessEvent( pfnServer_Kaboom, &Server_Kaboom_Parms, NULL );
	};

	void cl_kaboom ()
	{
		static UFunction* pfncl_kaboom = NULL;

		if ( !pfncl_kaboom )
			pfncl_kaboom = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_kaboom" );

		ACCInstanceController_execcl_kaboom_Parms cl_kaboom_Parms;

		this->ProcessEvent( pfncl_kaboom, &cl_kaboom_Parms, NULL );
	};

	void Server_DefCoreInvul ()
	{
		static UFunction* pfnServer_DefCoreInvul = NULL;

		if ( !pfnServer_DefCoreInvul )
			pfnServer_DefCoreInvul = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_DefCoreInvul" );

		ACCInstanceController_execServer_DefCoreInvul_Parms Server_DefCoreInvul_Parms;

		this->ProcessEvent( pfnServer_DefCoreInvul, &Server_DefCoreInvul_Parms, NULL );
	};

	void cl_defcoreinvul ()
	{
		static UFunction* pfncl_defcoreinvul = NULL;

		if ( !pfncl_defcoreinvul )
			pfncl_defcoreinvul = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_defcoreinvul" );

		ACCInstanceController_execcl_defcoreinvul_Parms cl_defcoreinvul_Parms;

		this->ProcessEvent( pfncl_defcoreinvul, &cl_defcoreinvul_Parms, NULL );
	};

	void Server_ViewBot ()
	{
		static UFunction* pfnServer_ViewBot = NULL;

		if ( !pfnServer_ViewBot )
			pfnServer_ViewBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_ViewBot" );

		ACCInstanceController_execServer_ViewBot_Parms Server_ViewBot_Parms;

		this->ProcessEvent( pfnServer_ViewBot, &Server_ViewBot_Parms, NULL );
	};

	void Client_ViewBot ( class AActor* A )
	{
		static UFunction* pfnClient_ViewBot = NULL;

		if ( !pfnClient_ViewBot )
			pfnClient_ViewBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_ViewBot" );

		ACCInstanceController_execClient_ViewBot_Parms Client_ViewBot_Parms;
		Client_ViewBot_Parms.A = A;

		this->ProcessEvent( pfnClient_ViewBot, &Client_ViewBot_Parms, NULL );
	};

	void cl_viewbot ()
	{
		static UFunction* pfncl_viewbot = NULL;

		if ( !pfncl_viewbot )
			pfncl_viewbot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_viewbot" );

		ACCInstanceController_execcl_viewbot_Parms cl_viewbot_Parms;

		this->ProcessEvent( pfncl_viewbot, &cl_viewbot_Parms, NULL );
	};

	void Server_ViewSelf ()
	{
		static UFunction* pfnServer_ViewSelf = NULL;

		if ( !pfnServer_ViewSelf )
			pfnServer_ViewSelf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_ViewSelf" );

		ACCInstanceController_execServer_ViewSelf_Parms Server_ViewSelf_Parms;

		this->ProcessEvent( pfnServer_ViewSelf, &Server_ViewSelf_Parms, NULL );
	};

	void Client_ViewSelf ()
	{
		static UFunction* pfnClient_ViewSelf = NULL;

		if ( !pfnClient_ViewSelf )
			pfnClient_ViewSelf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Client_ViewSelf" );

		ACCInstanceController_execClient_ViewSelf_Parms Client_ViewSelf_Parms;

		this->ProcessEvent( pfnClient_ViewSelf, &Client_ViewSelf_Parms, NULL );
	};

	void cl_viewself ()
	{
		static UFunction* pfncl_viewself = NULL;

		if ( !pfncl_viewself )
			pfncl_viewself = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_viewself" );

		ACCInstanceController_execcl_viewself_Parms cl_viewself_Parms;

		this->ProcessEvent( pfncl_viewself, &cl_viewself_Parms, NULL );
	};

	void Server_AddBot_Location ( int TeamNum, struct FVector BotLocation )
	{
		static UFunction* pfnServer_AddBot_Location = NULL;

		if ( !pfnServer_AddBot_Location )
			pfnServer_AddBot_Location = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AddBot_Location" );

		ACCInstanceController_execServer_AddBot_Location_Parms Server_AddBot_Location_Parms;
		Server_AddBot_Location_Parms.TeamNum = TeamNum;
		memcpy( &Server_AddBot_Location_Parms.BotLocation, &BotLocation, 0xC );

		this->ProcessEvent( pfnServer_AddBot_Location, &Server_AddBot_Location_Parms, NULL );
	};

	void cl_addbot_hack ( int TeamNum )
	{
		static UFunction* pfncl_addbot_hack = NULL;

		if ( !pfncl_addbot_hack )
			pfncl_addbot_hack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_addbot_hack" );

		ACCInstanceController_execcl_addbot_hack_Parms cl_addbot_hack_Parms;
		cl_addbot_hack_Parms.TeamNum = TeamNum;

		this->ProcessEvent( pfncl_addbot_hack, &cl_addbot_hack_Parms, NULL );
	};

	void Server_AddBot ( int TeamNum )
	{
		static UFunction* pfnServer_AddBot = NULL;

		if ( !pfnServer_AddBot )
			pfnServer_AddBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AddBot" );

		ACCInstanceController_execServer_AddBot_Parms Server_AddBot_Parms;
		Server_AddBot_Parms.TeamNum = TeamNum;

		this->ProcessEvent( pfnServer_AddBot, &Server_AddBot_Parms, NULL );
	};

	void cl_addbot_num ( int TeamNum, int Num )
	{
		static UFunction* pfncl_addbot_num = NULL;

		if ( !pfncl_addbot_num )
			pfncl_addbot_num = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_addbot_num" );

		ACCInstanceController_execcl_addbot_num_Parms cl_addbot_num_Parms;
		cl_addbot_num_Parms.TeamNum = TeamNum;
		cl_addbot_num_Parms.Num = Num;

		this->ProcessEvent( pfncl_addbot_num, &cl_addbot_num_Parms, NULL );
	};

	void cl_addbot ( int TeamNum )
	{
		static UFunction* pfncl_addbot = NULL;

		if ( !pfncl_addbot )
			pfncl_addbot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_addbot" );

		ACCInstanceController_execcl_addbot_Parms cl_addbot_Parms;
		cl_addbot_Parms.TeamNum = TeamNum;

		this->ProcessEvent( pfncl_addbot, &cl_addbot_Parms, NULL );
	};

	void Server_AddActionId ( int ActionID )
	{
		static UFunction* pfnServer_AddActionId = NULL;

		if ( !pfnServer_AddActionId )
			pfnServer_AddActionId = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Server_AddActionId" );

		ACCInstanceController_execServer_AddActionId_Parms Server_AddActionId_Parms;
		Server_AddActionId_Parms.ActionID = ActionID;

		this->ProcessEvent( pfnServer_AddActionId, &Server_AddActionId_Parms, NULL );
	};

	void cl_addactionid ( int ActionID )
	{
		static UFunction* pfncl_addactionid = NULL;

		if ( !pfncl_addactionid )
			pfncl_addactionid = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.cl_addactionid" );

		ACCInstanceController_execcl_addactionid_Parms cl_addactionid_Parms;
		cl_addactionid_Parms.ActionID = ActionID;

		this->ProcessEvent( pfncl_addactionid, &cl_addactionid_Parms, NULL );
	};

	void ServerSetInstantTraces ( unsigned long bValue )
	{
		static UFunction* pfnServerSetInstantTraces = NULL;

		if ( !pfnServerSetInstantTraces )
			pfnServerSetInstantTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetInstantTraces" );

		ACCInstanceController_execServerSetInstantTraces_Parms ServerSetInstantTraces_Parms;
		ServerSetInstantTraces_Parms.bValue = bValue;

		this->ProcessEvent( pfnServerSetInstantTraces, &ServerSetInstantTraces_Parms, NULL );
	};

	void ServerSetProjectileTraces ( unsigned long bValue )
	{
		static UFunction* pfnServerSetProjectileTraces = NULL;

		if ( !pfnServerSetProjectileTraces )
			pfnServerSetProjectileTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetProjectileTraces" );

		ACCInstanceController_execServerSetProjectileTraces_Parms ServerSetProjectileTraces_Parms;
		ServerSetProjectileTraces_Parms.bValue = bValue;

		this->ProcessEvent( pfnServerSetProjectileTraces, &ServerSetProjectileTraces_Parms, NULL );
	};

	void ToggleWeaponDebugLine ()
	{
		static UFunction* pfnToggleWeaponDebugLine = NULL;

		if ( !pfnToggleWeaponDebugLine )
			pfnToggleWeaponDebugLine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleWeaponDebugLine" );

		ACCInstanceController_execToggleWeaponDebugLine_Parms ToggleWeaponDebugLine_Parms;

		this->ProcessEvent( pfnToggleWeaponDebugLine, &ToggleWeaponDebugLine_Parms, NULL );
	};

	void ToggleProjectileTraces ()
	{
		static UFunction* pfnToggleProjectileTraces = NULL;

		if ( !pfnToggleProjectileTraces )
			pfnToggleProjectileTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleProjectileTraces" );

		ACCInstanceController_execToggleProjectileTraces_Parms ToggleProjectileTraces_Parms;

		this->ProcessEvent( pfnToggleProjectileTraces, &ToggleProjectileTraces_Parms, NULL );
	};

	void ToggleGrenadeTestTraces ()
	{
		static UFunction* pfnToggleGrenadeTestTraces = NULL;

		if ( !pfnToggleGrenadeTestTraces )
			pfnToggleGrenadeTestTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleGrenadeTestTraces" );

		ACCInstanceController_execToggleGrenadeTestTraces_Parms ToggleGrenadeTestTraces_Parms;

		this->ProcessEvent( pfnToggleGrenadeTestTraces, &ToggleGrenadeTestTraces_Parms, NULL );
	};

	void ServerSetInstantTraces2 ( unsigned long bValue )
	{
		static UFunction* pfnServerSetInstantTraces2 = NULL;

		if ( !pfnServerSetInstantTraces2 )
			pfnServerSetInstantTraces2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetInstantTraces2" );

		ACCInstanceController_execServerSetInstantTraces2_Parms ServerSetInstantTraces2_Parms;
		ServerSetInstantTraces2_Parms.bValue = bValue;

		this->ProcessEvent( pfnServerSetInstantTraces2, &ServerSetInstantTraces2_Parms, NULL );
	};

	void ToggleInstantTraces2 ()
	{
		static UFunction* pfnToggleInstantTraces2 = NULL;

		if ( !pfnToggleInstantTraces2 )
			pfnToggleInstantTraces2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleInstantTraces2" );

		ACCInstanceController_execToggleInstantTraces2_Parms ToggleInstantTraces2_Parms;

		this->ProcessEvent( pfnToggleInstantTraces2, &ToggleInstantTraces2_Parms, NULL );
	};

	void ToggleInstantTraces ()
	{
		static UFunction* pfnToggleInstantTraces = NULL;

		if ( !pfnToggleInstantTraces )
			pfnToggleInstantTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleInstantTraces" );

		ACCInstanceController_execToggleInstantTraces_Parms ToggleInstantTraces_Parms;

		this->ProcessEvent( pfnToggleInstantTraces, &ToggleInstantTraces_Parms, NULL );
	};

	void ToggleCoverInfo ()
	{
		static UFunction* pfnToggleCoverInfo = NULL;

		if ( !pfnToggleCoverInfo )
			pfnToggleCoverInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleCoverInfo" );

		ACCInstanceController_execToggleCoverInfo_Parms ToggleCoverInfo_Parms;

		this->ProcessEvent( pfnToggleCoverInfo, &ToggleCoverInfo_Parms, NULL );
	};

	void TogglePause ()
	{
		static UFunction* pfnTogglePause = NULL;

		if ( !pfnTogglePause )
			pfnTogglePause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.TogglePause" );

		ACCInstanceController_execTogglePause_Parms TogglePause_Parms;

		this->ProcessEvent( pfnTogglePause, &TogglePause_Parms, NULL );
	};

	void ServerTogglePause ()
	{
		static UFunction* pfnServerTogglePause = NULL;

		if ( !pfnServerTogglePause )
			pfnServerTogglePause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerTogglePause" );

		ACCInstanceController_execServerTogglePause_Parms ServerTogglePause_Parms;

		this->ProcessEvent( pfnServerTogglePause, &ServerTogglePause_Parms, NULL );
	};

	void ServerEnableCheats ()
	{
		static UFunction* pfnServerEnableCheats = NULL;

		if ( !pfnServerEnableCheats )
			pfnServerEnableCheats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerEnableCheats" );

		ACCInstanceController_execServerEnableCheats_Parms ServerEnableCheats_Parms;

		this->ProcessEvent( pfnServerEnableCheats, &ServerEnableCheats_Parms, NULL );
	};

	void EnableCheats ()
	{
		static UFunction* pfnEnableCheats = NULL;

		if ( !pfnEnableCheats )
			pfnEnableCheats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EnableCheats" );

		ACCInstanceController_execEnableCheats_Parms EnableCheats_Parms;

		this->ProcessEvent( pfnEnableCheats, &EnableCheats_Parms, NULL );
	};

	void CreateCheats ()
	{
		static UFunction* pfnCreateCheats = NULL;

		if ( !pfnCreateCheats )
			pfnCreateCheats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CreateCheats" );

		ACCInstanceController_execCreateCheats_Parms CreateCheats_Parms;

		this->ProcessEvent( pfnCreateCheats, &CreateCheats_Parms, NULL );
	};

	void CoverServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, int MoveFlags, unsigned char ClientRoll, int View, unsigned char InCoverType, unsigned char InCoverAction, unsigned char InCoverDirection, unsigned long InbWantsToBeMirrored, unsigned char InCurrentSlotDirection )
	{
		static UFunction* pfnCoverServerMove = NULL;

		if ( !pfnCoverServerMove )
			pfnCoverServerMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CoverServerMove" );

		ACCInstanceController_execCoverServerMove_Parms CoverServerMove_Parms;
		CoverServerMove_Parms.TimeStamp = TimeStamp;
		memcpy( &CoverServerMove_Parms.InAccel, &InAccel, 0xC );
		memcpy( &CoverServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		CoverServerMove_Parms.MoveFlags = MoveFlags;
		CoverServerMove_Parms.ClientRoll = ClientRoll;
		CoverServerMove_Parms.View = View;
		CoverServerMove_Parms.InCoverType = InCoverType;
		CoverServerMove_Parms.InCoverAction = InCoverAction;
		CoverServerMove_Parms.InCoverDirection = InCoverDirection;
		CoverServerMove_Parms.InbWantsToBeMirrored = InbWantsToBeMirrored;
		CoverServerMove_Parms.InCurrentSlotDirection = InCurrentSlotDirection;

		this->ProcessEvent( pfnCoverServerMove, &CoverServerMove_Parms, NULL );
	};

	void SendServerMove ( void* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, void* OldMove )
	{
		static UFunction* pfnSendServerMove = NULL;

		if ( !pfnSendServerMove )
			pfnSendServerMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SendServerMove" );

		ACCInstanceController_execSendServerMove_Parms SendServerMove_Parms;
		SendServerMove_Parms.NewMove = NewMove;
		memcpy( &SendServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		SendServerMove_Parms.ClientRoll = ClientRoll;
		SendServerMove_Parms.View = View;
		SendServerMove_Parms.OldMove = OldMove;

		this->ProcessEvent( pfnSendServerMove, &SendServerMove_Parms, NULL );
	};

	void CallServerMove ( void* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, void* OldMove )
	{
		static UFunction* pfnCallServerMove = NULL;

		if ( !pfnCallServerMove )
			pfnCallServerMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CallServerMove" );

		ACCInstanceController_execCallServerMove_Parms CallServerMove_Parms;
		CallServerMove_Parms.NewMove = NewMove;
		memcpy( &CallServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		CallServerMove_Parms.ClientRoll = ClientRoll;
		CallServerMove_Parms.View = View;
		CallServerMove_Parms.OldMove = OldMove;

		this->ProcessEvent( pfnCallServerMove, &CallServerMove_Parms, NULL );
	};

	void eventInitInputSystem ()
	{
		static UFunction* pfnInitInputSystem = NULL;

		if ( !pfnInitInputSystem )
			pfnInitInputSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.InitInputSystem" );

		ACCInstanceController_eventInitInputSystem_Parms InitInputSystem_Parms;

		this->ProcessEvent( pfnInitInputSystem, &InitInputSystem_Parms, NULL );
	};

	void CCServerSuicide ()
	{
		static UFunction* pfnCCServerSuicide = NULL;

		if ( !pfnCCServerSuicide )
			pfnCCServerSuicide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCServerSuicide" );

		ACCInstanceController_execCCServerSuicide_Parms CCServerSuicide_Parms;

		this->ProcessEvent( pfnCCServerSuicide, &CCServerSuicide_Parms, NULL );
	};

	void CCSuicide ()
	{
		static UFunction* pfnCCSuicide = NULL;

		if ( !pfnCCSuicide )
			pfnCCSuicide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CCSuicide" );

		ACCInstanceController_execCCSuicide_Parms CCSuicide_Parms;

		this->ProcessEvent( pfnCCSuicide, &CCSuicide_Parms, NULL );
	};

	void ClientRecieveWeapon ( class AWeapon* W )
	{
		static UFunction* pfnClientRecieveWeapon = NULL;

		if ( !pfnClientRecieveWeapon )
			pfnClientRecieveWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientRecieveWeapon" );

		ACCInstanceController_execClientRecieveWeapon_Parms ClientRecieveWeapon_Parms;
		ClientRecieveWeapon_Parms.W = W;

		this->ProcessEvent( pfnClientRecieveWeapon, &ClientRecieveWeapon_Parms, NULL );
	};

	void ServerRequestWeapon ()
	{
		static UFunction* pfnServerRequestWeapon = NULL;

		if ( !pfnServerRequestWeapon )
			pfnServerRequestWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRequestWeapon" );

		ACCInstanceController_execServerRequestWeapon_Parms ServerRequestWeapon_Parms;

		this->ProcessEvent( pfnServerRequestWeapon, &ServerRequestWeapon_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayerTick" );

		ACCInstanceController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void ShowWeaponStats ()
	{
		static UFunction* pfnShowWeaponStats = NULL;

		if ( !pfnShowWeaponStats )
			pfnShowWeaponStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowWeaponStats" );

		ACCInstanceController_execShowWeaponStats_Parms ShowWeaponStats_Parms;

		this->ProcessEvent( pfnShowWeaponStats, &ShowWeaponStats_Parms, NULL );
	};

	void ServerShowWeaponStats ()
	{
		static UFunction* pfnServerShowWeaponStats = NULL;

		if ( !pfnServerShowWeaponStats )
			pfnServerShowWeaponStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerShowWeaponStats" );

		ACCInstanceController_execServerShowWeaponStats_Parms ServerShowWeaponStats_Parms;

		this->ProcessEvent( pfnServerShowWeaponStats, &ServerShowWeaponStats_Parms, NULL );
	};

	void ShowPlayerStats ()
	{
		static UFunction* pfnShowPlayerStats = NULL;

		if ( !pfnShowPlayerStats )
			pfnShowPlayerStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowPlayerStats" );

		ACCInstanceController_execShowPlayerStats_Parms ShowPlayerStats_Parms;

		this->ProcessEvent( pfnShowPlayerStats, &ShowPlayerStats_Parms, NULL );
	};

	void ServerShowPlayerStats ()
	{
		static UFunction* pfnServerShowPlayerStats = NULL;

		if ( !pfnServerShowPlayerStats )
			pfnServerShowPlayerStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerShowPlayerStats" );

		ACCInstanceController_execServerShowPlayerStats_Parms ServerShowPlayerStats_Parms;

		this->ProcessEvent( pfnServerShowPlayerStats, &ServerShowPlayerStats_Parms, NULL );
	};

	void ShowAFKTime ()
	{
		static UFunction* pfnShowAFKTime = NULL;

		if ( !pfnShowAFKTime )
			pfnShowAFKTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowAFKTime" );

		ACCInstanceController_execShowAFKTime_Parms ShowAFKTime_Parms;

		this->ProcessEvent( pfnShowAFKTime, &ShowAFKTime_Parms, NULL );
	};

	void ServerShowAFKTime ()
	{
		static UFunction* pfnServerShowAFKTime = NULL;

		if ( !pfnServerShowAFKTime )
			pfnServerShowAFKTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerShowAFKTime" );

		ACCInstanceController_execServerShowAFKTime_Parms ServerShowAFKTime_Parms;

		this->ProcessEvent( pfnServerShowAFKTime, &ServerShowAFKTime_Parms, NULL );
	};

	void SetAFK ( unsigned long bNewAFK )
	{
		static UFunction* pfnSetAFK = NULL;

		if ( !pfnSetAFK )
			pfnSetAFK = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetAFK" );

		ACCInstanceController_execSetAFK_Parms SetAFK_Parms;
		SetAFK_Parms.bNewAFK = bNewAFK;

		this->ProcessEvent( pfnSetAFK, &SetAFK_Parms, NULL );
	};

	void ServerSetAFK ( unsigned long bNewAFK )
	{
		static UFunction* pfnServerSetAFK = NULL;

		if ( !pfnServerSetAFK )
			pfnServerSetAFK = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetAFK" );

		ACCInstanceController_execServerSetAFK_Parms ServerSetAFK_Parms;
		ServerSetAFK_Parms.bNewAFK = bNewAFK;

		this->ProcessEvent( pfnServerSetAFK, &ServerSetAFK_Parms, NULL );
	};

	void SetDOFEffect ( void* DOFEffect, float DeltaTime )
	{
		static UFunction* pfnSetDOFEffect = NULL;

		if ( !pfnSetDOFEffect )
			pfnSetDOFEffect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetDOFEffect" );

		ACCInstanceController_execSetDOFEffect_Parms SetDOFEffect_Parms;
		SetDOFEffect_Parms.DOFEffect = DOFEffect;
		SetDOFEffect_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSetDOFEffect, &SetDOFEffect_Parms, NULL );
	};

	unsigned char GetPawnCoverType ()
	{
		static UFunction* pfnGetPawnCoverType = NULL;

		if ( !pfnGetPawnCoverType )
			pfnGetPawnCoverType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetPawnCoverType" );

		ACCInstanceController_execGetPawnCoverType_Parms GetPawnCoverType_Parms;

		this->ProcessEvent( pfnGetPawnCoverType, &GetPawnCoverType_Parms, NULL );

		return GetPawnCoverType_Parms.ReturnValue;
	};

	void SetPawnCoverType ( unsigned char NewCT )
	{
		static UFunction* pfnSetPawnCoverType = NULL;

		if ( !pfnSetPawnCoverType )
			pfnSetPawnCoverType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetPawnCoverType" );

		ACCInstanceController_execSetPawnCoverType_Parms SetPawnCoverType_Parms;
		SetPawnCoverType_Parms.NewCT = NewCT;

		this->ProcessEvent( pfnSetPawnCoverType, &SetPawnCoverType_Parms, NULL );
	};

	unsigned char GetPawnCoverAction ()
	{
		static UFunction* pfnGetPawnCoverAction = NULL;

		if ( !pfnGetPawnCoverAction )
			pfnGetPawnCoverAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetPawnCoverAction" );

		ACCInstanceController_execGetPawnCoverAction_Parms GetPawnCoverAction_Parms;

		this->ProcessEvent( pfnGetPawnCoverAction, &GetPawnCoverAction_Parms, NULL );

		return GetPawnCoverAction_Parms.ReturnValue;
	};

	void eventSetPawnCoverAction ( unsigned char NewCA )
	{
		static UFunction* pfnSetPawnCoverAction = NULL;

		if ( !pfnSetPawnCoverAction )
			pfnSetPawnCoverAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetPawnCoverAction" );

		ACCInstanceController_eventSetPawnCoverAction_Parms SetPawnCoverAction_Parms;
		SetPawnCoverAction_Parms.NewCA = NewCA;

		this->ProcessEvent( pfnSetPawnCoverAction, &SetPawnCoverAction_Parms, NULL );
	};

	unsigned char GetCoverDirection ()
	{
		static UFunction* pfnGetCoverDirection = NULL;

		if ( !pfnGetCoverDirection )
			pfnGetCoverDirection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetCoverDirection" );

		ACCInstanceController_execGetCoverDirection_Parms GetCoverDirection_Parms;

		this->ProcessEvent( pfnGetCoverDirection, &GetCoverDirection_Parms, NULL );

		return GetCoverDirection_Parms.ReturnValue;
	};

	void SetCoverDirection ( unsigned char NewCD )
	{
		static UFunction* pfnSetCoverDirection = NULL;

		if ( !pfnSetCoverDirection )
			pfnSetCoverDirection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetCoverDirection" );

		ACCInstanceController_execSetCoverDirection_Parms SetCoverDirection_Parms;
		SetCoverDirection_Parms.NewCD = NewCD;

		this->ProcessEvent( pfnSetCoverDirection, &SetCoverDirection_Parms, NULL );
	};

	bool IsInCoverState ()
	{
		static UFunction* pfnIsInCoverState = NULL;

		if ( !pfnIsInCoverState )
			pfnIsInCoverState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsInCoverState" );

		ACCInstanceController_execIsInCoverState_Parms IsInCoverState_Parms;

		this->ProcessEvent( pfnIsInCoverState, &IsInCoverState_Parms, NULL );

		return IsInCoverState_Parms.ReturnValue;
	};

	void eventNotifyCoverAdjusted ()
	{
		static UFunction* pfnNotifyCoverAdjusted = NULL;

		if ( !pfnNotifyCoverAdjusted )
			pfnNotifyCoverAdjusted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyCoverAdjusted" );

		ACCInstanceController_eventNotifyCoverAdjusted_Parms NotifyCoverAdjusted_Parms;

		this->ProcessEvent( pfnNotifyCoverAdjusted, &NotifyCoverAdjusted_Parms, NULL );
	};

	void NotifyCoverDisabled ( void* Link, int SlotIdx, unsigned long bAdjacentIdx/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnNotifyCoverDisabled = NULL;

		if ( !pfnNotifyCoverDisabled )
			pfnNotifyCoverDisabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyCoverDisabled" );

		ACCInstanceController_execNotifyCoverDisabled_Parms NotifyCoverDisabled_Parms;
		NotifyCoverDisabled_Parms.Link = Link;
		NotifyCoverDisabled_Parms.SlotIdx = SlotIdx;
		NotifyCoverDisabled_Parms.bAdjacentIdx = bAdjacentIdx;

		this->ProcessEvent( pfnNotifyCoverDisabled, &NotifyCoverDisabled_Parms, NULL );
	};

	void ClientBreakFromCover ()
	{
		static UFunction* pfnClientBreakFromCover = NULL;

		if ( !pfnClientBreakFromCover )
			pfnClientBreakFromCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientBreakFromCover" );

		ACCInstanceController_execClientBreakFromCover_Parms ClientBreakFromCover_Parms;

		this->ProcessEvent( pfnClientBreakFromCover, &ClientBreakFromCover_Parms, NULL );
	};

	bool CanTryToRunToCover ()
	{
		static UFunction* pfnCanTryToRunToCover = NULL;

		if ( !pfnCanTryToRunToCover )
			pfnCanTryToRunToCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CanTryToRunToCover" );

		ACCInstanceController_execCanTryToRunToCover_Parms CanTryToRunToCover_Parms;

		this->ProcessEvent( pfnCanTryToRunToCover, &CanTryToRunToCover_Parms, NULL );

		return CanTryToRunToCover_Parms.ReturnValue;
	};

	void ClientRequestCoverTransition ()
	{
		static UFunction* pfnClientRequestCoverTransition = NULL;

		if ( !pfnClientRequestCoverTransition )
			pfnClientRequestCoverTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientRequestCoverTransition" );

		ACCInstanceController_execClientRequestCoverTransition_Parms ClientRequestCoverTransition_Parms;

		this->ProcessEvent( pfnClientRequestCoverTransition, &ClientRequestCoverTransition_Parms, NULL );
	};

	void ClientInvalidCoverClaim ()
	{
		static UFunction* pfnClientInvalidCoverClaim = NULL;

		if ( !pfnClientInvalidCoverClaim )
			pfnClientInvalidCoverClaim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientInvalidCoverClaim" );

		ACCInstanceController_execClientInvalidCoverClaim_Parms ClientInvalidCoverClaim_Parms;

		this->ProcessEvent( pfnClientInvalidCoverClaim, &ClientInvalidCoverClaim_Parms, NULL );
	};

	void ServerCoverTransition ( void* Link, unsigned char SlotIdx, unsigned char LeftIdx, unsigned char RightIdx, float SlotPct, unsigned char ClientCoverDirection )
	{
		static UFunction* pfnServerCoverTransition = NULL;

		if ( !pfnServerCoverTransition )
			pfnServerCoverTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerCoverTransition" );

		ACCInstanceController_execServerCoverTransition_Parms ServerCoverTransition_Parms;
		ServerCoverTransition_Parms.Link = Link;
		ServerCoverTransition_Parms.SlotIdx = SlotIdx;
		ServerCoverTransition_Parms.LeftIdx = LeftIdx;
		ServerCoverTransition_Parms.RightIdx = RightIdx;
		ServerCoverTransition_Parms.SlotPct = SlotPct;
		ServerCoverTransition_Parms.ClientCoverDirection = ClientCoverDirection;

		this->ProcessEvent( pfnServerCoverTransition, &ServerCoverTransition_Parms, NULL );
	};

	void ClientUpdatePosition ()
	{
		static UFunction* pfnClientUpdatePosition = NULL;

		if ( !pfnClientUpdatePosition )
			pfnClientUpdatePosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientUpdatePosition" );

		ACCInstanceController_execClientUpdatePosition_Parms ClientUpdatePosition_Parms;

		this->ProcessEvent( pfnClientUpdatePosition, &ClientUpdatePosition_Parms, NULL );
	};

	bool GetPawnSide ()
	{
		static UFunction* pfnGetPawnSide = NULL;

		if ( !pfnGetPawnSide )
			pfnGetPawnSide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetPawnSide" );

		ACCInstanceController_execGetPawnSide_Parms GetPawnSide_Parms;

		this->ProcessEvent( pfnGetPawnSide, &GetPawnSide_Parms, NULL );

		return GetPawnSide_Parms.ReturnValue;
	};

	void ServerSetPawnSide ( unsigned long bNewMirrored )
	{
		static UFunction* pfnServerSetPawnSide = NULL;

		if ( !pfnServerSetPawnSide )
			pfnServerSetPawnSide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetPawnSide" );

		ACCInstanceController_execServerSetPawnSide_Parms ServerSetPawnSide_Parms;
		ServerSetPawnSide_Parms.bNewMirrored = bNewMirrored;

		this->ProcessEvent( pfnServerSetPawnSide, &ServerSetPawnSide_Parms, NULL );
	};

	void ClientSetPawnSide ( unsigned long bNewMirrored )
	{
		static UFunction* pfnClientSetPawnSide = NULL;

		if ( !pfnClientSetPawnSide )
			pfnClientSetPawnSide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetPawnSide" );

		ACCInstanceController_execClientSetPawnSide_Parms ClientSetPawnSide_Parms;
		ClientSetPawnSide_Parms.bNewMirrored = bNewMirrored;

		this->ProcessEvent( pfnClientSetPawnSide, &ClientSetPawnSide_Parms, NULL );
	};

	void SetPawnSide ( unsigned long bNewMirrored )
	{
		static UFunction* pfnSetPawnSide = NULL;

		if ( !pfnSetPawnSide )
			pfnSetPawnSide = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetPawnSide" );

		ACCInstanceController_execSetPawnSide_Parms SetPawnSide_Parms;
		SetPawnSide_Parms.bNewMirrored = bNewMirrored;

		this->ProcessEvent( pfnSetPawnSide, &SetPawnSide_Parms, NULL );
	};

	void NotifyReachedCoverSlot ( int SlotIdx, int OldSlotIdx )
	{
		static UFunction* pfnNotifyReachedCoverSlot = NULL;

		if ( !pfnNotifyReachedCoverSlot )
			pfnNotifyReachedCoverSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyReachedCoverSlot" );

		ACCInstanceController_execNotifyReachedCoverSlot_Parms NotifyReachedCoverSlot_Parms;
		NotifyReachedCoverSlot_Parms.SlotIdx = SlotIdx;
		NotifyReachedCoverSlot_Parms.OldSlotIdx = OldSlotIdx;

		this->ProcessEvent( pfnNotifyReachedCoverSlot, &NotifyReachedCoverSlot_Parms, NULL );
	};

	void SetIsInStationaryCover ( unsigned long NewbIsInStationaryCover )
	{
		static UFunction* pfnSetIsInStationaryCover = NULL;

		if ( !pfnSetIsInStationaryCover )
			pfnSetIsInStationaryCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetIsInStationaryCover" );

		ACCInstanceController_execSetIsInStationaryCover_Parms SetIsInStationaryCover_Parms;
		SetIsInStationaryCover_Parms.NewbIsInStationaryCover = NewbIsInStationaryCover;

		this->ProcessEvent( pfnSetIsInStationaryCover, &SetIsInStationaryCover_Parms, NULL );
	};

	void LeftCover ()
	{
		static UFunction* pfnLeftCover = NULL;

		if ( !pfnLeftCover )
			pfnLeftCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.LeftCover" );

		ACCInstanceController_execLeftCover_Parms LeftCover_Parms;

		this->ProcessEvent( pfnLeftCover, &LeftCover_Parms, NULL );
	};

	void ServerLeaveCover ()
	{
		static UFunction* pfnServerLeaveCover = NULL;

		if ( !pfnServerLeaveCover )
			pfnServerLeaveCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerLeaveCover" );

		ACCInstanceController_execServerLeaveCover_Parms ServerLeaveCover_Parms;

		this->ProcessEvent( pfnServerLeaveCover, &ServerLeaveCover_Parms, NULL );
	};

	void BeginLeaveCover ()
	{
		static UFunction* pfnBeginLeaveCover = NULL;

		if ( !pfnBeginLeaveCover )
			pfnBeginLeaveCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.BeginLeaveCover" );

		ACCInstanceController_execBeginLeaveCover_Parms BeginLeaveCover_Parms;

		this->ProcessEvent( pfnBeginLeaveCover, &BeginLeaveCover_Parms, NULL );
	};

	void LeaveCover ()
	{
		static UFunction* pfnLeaveCover = NULL;

		if ( !pfnLeaveCover )
			pfnLeaveCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.LeaveCover" );

		ACCInstanceController_execLeaveCover_Parms LeaveCover_Parms;

		this->ProcessEvent( pfnLeaveCover, &LeaveCover_Parms, NULL );
	};

	bool ShouldAutoAlignCameraWithCover ()
	{
		static UFunction* pfnShouldAutoAlignCameraWithCover = NULL;

		if ( !pfnShouldAutoAlignCameraWithCover )
			pfnShouldAutoAlignCameraWithCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShouldAutoAlignCameraWithCover" );

		ACCInstanceController_execShouldAutoAlignCameraWithCover_Parms ShouldAutoAlignCameraWithCover_Parms;

		this->ProcessEvent( pfnShouldAutoAlignCameraWithCover, &ShouldAutoAlignCameraWithCover_Parms, NULL );

		return ShouldAutoAlignCameraWithCover_Parms.ReturnValue;
	};

	void CoverAcquired ( class ACCInstancePawn* P, struct FCovPosInfo CovInfo, unsigned long bNoCameraAutoAlign/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCoverAcquired = NULL;

		if ( !pfnCoverAcquired )
			pfnCoverAcquired = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CoverAcquired" );

		ACCInstanceController_execCoverAcquired_Parms CoverAcquired_Parms;
		CoverAcquired_Parms.P = P;
		memcpy( &CoverAcquired_Parms.CovInfo, &CovInfo, 0x34 );
		CoverAcquired_Parms.bNoCameraAutoAlign = bNoCameraAutoAlign;

		this->ProcessEvent( pfnCoverAcquired, &CoverAcquired_Parms, NULL );
	};

	void DumpCoverInfo ( struct FCovPosInfo CovInfo )
	{
		static UFunction* pfnDumpCoverInfo = NULL;

		if ( !pfnDumpCoverInfo )
			pfnDumpCoverInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DumpCoverInfo" );

		ACCInstanceController_execDumpCoverInfo_Parms DumpCoverInfo_Parms;
		memcpy( &DumpCoverInfo_Parms.CovInfo, &CovInfo, 0x34 );

		this->ProcessEvent( pfnDumpCoverInfo, &DumpCoverInfo_Parms, NULL );
	};

	void AcquireCover ( struct FCovPosInfo CovInfo, unsigned long bNoCameraAutoAlign/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAcquireCover = NULL;

		if ( !pfnAcquireCover )
			pfnAcquireCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AcquireCover" );

		ACCInstanceController_execAcquireCover_Parms AcquireCover_Parms;
		memcpy( &AcquireCover_Parms.CovInfo, &CovInfo, 0x34 );
		AcquireCover_Parms.bNoCameraAutoAlign = bNoCameraAutoAlign;

		this->ProcessEvent( pfnAcquireCover, &AcquireCover_Parms, NULL );
	};

	void ClientAcquireCover ( struct FCovPosInfo CovInfo )
	{
		static UFunction* pfnClientAcquireCover = NULL;

		if ( !pfnClientAcquireCover )
			pfnClientAcquireCover = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientAcquireCover" );

		ACCInstanceController_execClientAcquireCover_Parms ClientAcquireCover_Parms;
		memcpy( &ClientAcquireCover_Parms.CovInfo, &CovInfo, 0x34 );

		this->ProcessEvent( pfnClientAcquireCover, &ClientAcquireCover_Parms, NULL );
	};

	void CoverLog ( struct FString msg, struct FString Function )
	{
		static UFunction* pfnCoverLog = NULL;

		if ( !pfnCoverLog )
			pfnCoverLog = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CoverLog" );

		ACCInstanceController_execCoverLog_Parms CoverLog_Parms;
		memcpy( &CoverLog_Parms.msg, &msg, 0xC );
		memcpy( &CoverLog_Parms.Function, &Function, 0xC );

		this->ProcessEvent( pfnCoverLog, &CoverLog_Parms, NULL );
	};

	bool eventAllowEvadeOffLedge ()
	{
		static UFunction* pfnAllowEvadeOffLedge = NULL;

		if ( !pfnAllowEvadeOffLedge )
			pfnAllowEvadeOffLedge = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AllowEvadeOffLedge" );

		ACCInstanceController_eventAllowEvadeOffLedge_Parms AllowEvadeOffLedge_Parms;

		this->ProcessEvent( pfnAllowEvadeOffLedge, &AllowEvadeOffLedge_Parms, NULL );

		return AllowEvadeOffLedge_Parms.ReturnValue;
	};

	void ServerDropCarriedObject ()
	{
		static UFunction* pfnServerDropCarriedObject = NULL;

		if ( !pfnServerDropCarriedObject )
			pfnServerDropCarriedObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerDropCarriedObject" );

		ACCInstanceController_execServerDropCarriedObject_Parms ServerDropCarriedObject_Parms;

		this->ProcessEvent( pfnServerDropCarriedObject, &ServerDropCarriedObject_Parms, NULL );
	};

	void eventYakaChangeTeam ( int GroupId )
	{
		static UFunction* pfnYakaChangeTeam = NULL;

		if ( !pfnYakaChangeTeam )
			pfnYakaChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.YakaChangeTeam" );

		ACCInstanceController_eventYakaChangeTeam_Parms YakaChangeTeam_Parms;
		YakaChangeTeam_Parms.GroupId = GroupId;

		this->ProcessEvent( pfnYakaChangeTeam, &YakaChangeTeam_Parms, NULL );
	};

	void SetYakaTeam ( int TeamID )
	{
		static UFunction* pfnSetYakaTeam = NULL;

		if ( !pfnSetYakaTeam )
			pfnSetYakaTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetYakaTeam" );

		ACCInstanceController_execSetYakaTeam_Parms SetYakaTeam_Parms;
		SetYakaTeam_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnSetYakaTeam, &SetYakaTeam_Parms, NULL );
	};

	void ChangedTeamMessage ()
	{
		static UFunction* pfnChangedTeamMessage = NULL;

		if ( !pfnChangedTeamMessage )
			pfnChangedTeamMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ChangedTeamMessage" );

		ACCInstanceController_execChangedTeamMessage_Parms ChangedTeamMessage_Parms;

		this->ProcessEvent( pfnChangedTeamMessage, &ChangedTeamMessage_Parms, NULL );
	};

	void ServerSetCharacterData ( struct FCharacterVisualDescription CharData, int GroupId )
	{
		static UFunction* pfnServerSetCharacterData = NULL;

		if ( !pfnServerSetCharacterData )
			pfnServerSetCharacterData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetCharacterData" );

		ACCInstanceController_execServerSetCharacterData_Parms ServerSetCharacterData_Parms;
		memcpy( &ServerSetCharacterData_Parms.CharData, &CharData, 0x48 );
		ServerSetCharacterData_Parms.GroupId = GroupId;

		this->ProcessEvent( pfnServerSetCharacterData, &ServerSetCharacterData_Parms, NULL );
	};

	void ServerSetNetworkID ( int NewNetworkID )
	{
		static UFunction* pfnServerSetNetworkID = NULL;

		if ( !pfnServerSetNetworkID )
			pfnServerSetNetworkID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetNetworkID" );

		ACCInstanceController_execServerSetNetworkID_Parms ServerSetNetworkID_Parms;
		ServerSetNetworkID_Parms.NewNetworkID = NewNetworkID;

		this->ProcessEvent( pfnServerSetNetworkID, &ServerSetNetworkID_Parms, NULL );
	};

	void eventSetNetworkID ( int NewNetworkID )
	{
		static UFunction* pfnSetNetworkID = NULL;

		if ( !pfnSetNetworkID )
			pfnSetNetworkID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetNetworkID" );

		ACCInstanceController_eventSetNetworkID_Parms SetNetworkID_Parms;
		SetNetworkID_Parms.NewNetworkID = NewNetworkID;

		this->ProcessEvent( pfnSetNetworkID, &SetNetworkID_Parms, NULL );
	};

	void ToggleInstanceResults ()
	{
		static UFunction* pfnToggleInstanceResults = NULL;

		if ( !pfnToggleInstanceResults )
			pfnToggleInstanceResults = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleInstanceResults" );

		ACCInstanceController_execToggleInstanceResults_Parms ToggleInstanceResults_Parms;

		this->ProcessEvent( pfnToggleInstanceResults, &ToggleInstanceResults_Parms, NULL );
	};

	void ToggleScoreboard ( unsigned long bOpen, unsigned long InstanceFinished/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnToggleScoreboard = NULL;

		if ( !pfnToggleScoreboard )
			pfnToggleScoreboard = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleScoreboard" );

		ACCInstanceController_execToggleScoreboard_Parms ToggleScoreboard_Parms;
		ToggleScoreboard_Parms.bOpen = bOpen;
		ToggleScoreboard_Parms.InstanceFinished = InstanceFinished;

		this->ProcessEvent( pfnToggleScoreboard, &ToggleScoreboard_Parms, NULL );
	};

	void ClientForceGC ()
	{
		static UFunction* pfnClientForceGC = NULL;

		if ( !pfnClientForceGC )
			pfnClientForceGC = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientForceGC" );

		ACCInstanceController_execClientForceGC_Parms ClientForceGC_Parms;

		this->ProcessEvent( pfnClientForceGC, &ClientForceGC_Parms, NULL );
	};

	void RessurectionMade ()
	{
		static UFunction* pfnRessurectionMade = NULL;

		if ( !pfnRessurectionMade )
			pfnRessurectionMade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RessurectionMade" );

		ACCInstanceController_execRessurectionMade_Parms RessurectionMade_Parms;

		this->ProcessEvent( pfnRessurectionMade, &RessurectionMade_Parms, NULL );
	};

	void FatalityMade ()
	{
		static UFunction* pfnFatalityMade = NULL;

		if ( !pfnFatalityMade )
			pfnFatalityMade = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.FatalityMade" );

		ACCInstanceController_execFatalityMade_Parms FatalityMade_Parms;

		this->ProcessEvent( pfnFatalityMade, &FatalityMade_Parms, NULL );
	};

	void DoFatality ()
	{
		static UFunction* pfnDoFatality = NULL;

		if ( !pfnDoFatality )
			pfnDoFatality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoFatality" );

		ACCInstanceController_execDoFatality_Parms DoFatality_Parms;

		this->ProcessEvent( pfnDoFatality, &DoFatality_Parms, NULL );
	};

	void DoRessurect ( struct FVector RessurectionLocation )
	{
		static UFunction* pfnDoRessurect = NULL;

		if ( !pfnDoRessurect )
			pfnDoRessurect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoRessurect" );

		ACCInstanceController_execDoRessurect_Parms DoRessurect_Parms;
		memcpy( &DoRessurect_Parms.RessurectionLocation, &RessurectionLocation, 0xC );

		this->ProcessEvent( pfnDoRessurect, &DoRessurect_Parms, NULL );
	};

	void ServerFatality ()
	{
		static UFunction* pfnServerFatality = NULL;

		if ( !pfnServerFatality )
			pfnServerFatality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFatality" );

		ACCInstanceController_execServerFatality_Parms ServerFatality_Parms;

		this->ProcessEvent( pfnServerFatality, &ServerFatality_Parms, NULL );
	};

	void ServerRessurect ( struct FVector RessurectionLocation )
	{
		static UFunction* pfnServerRessurect = NULL;

		if ( !pfnServerRessurect )
			pfnServerRessurect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRessurect" );

		ACCInstanceController_execServerRessurect_Parms ServerRessurect_Parms;
		memcpy( &ServerRessurect_Parms.RessurectionLocation, &RessurectionLocation, 0xC );

		this->ProcessEvent( pfnServerRessurect, &ServerRessurect_Parms, NULL );
	};

	float CalcRespawnTime ()
	{
		static UFunction* pfnCalcRespawnTime = NULL;

		if ( !pfnCalcRespawnTime )
			pfnCalcRespawnTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CalcRespawnTime" );

		ACCInstanceController_execCalcRespawnTime_Parms CalcRespawnTime_Parms;

		this->ProcessEvent( pfnCalcRespawnTime, &CalcRespawnTime_Parms, NULL );

		return CalcRespawnTime_Parms.ReturnValue;
	};

	void eventForceClientMessage ( struct FString S, struct FName Type/*CPF_OptionalParm*/, float MsgLifeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceClientMessage = NULL;

		if ( !pfnForceClientMessage )
			pfnForceClientMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ForceClientMessage" );

		ACCInstanceController_eventForceClientMessage_Parms ForceClientMessage_Parms;
		memcpy( &ForceClientMessage_Parms.S, &S, 0xC );
		memcpy( &ForceClientMessage_Parms.Type, &Type, 0x8 );
		ForceClientMessage_Parms.MsgLifeTime = MsgLifeTime;

		this->ProcessEvent( pfnForceClientMessage, &ForceClientMessage_Parms, NULL );
	};

	void ServerViewSelf ( struct FViewTargetTransitionParams TransitionParams/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerViewSelf = NULL;

		if ( !pfnServerViewSelf )
			pfnServerViewSelf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerViewSelf" );

		ACCInstanceController_execServerViewSelf_Parms ServerViewSelf_Parms;
		memcpy( &ServerViewSelf_Parms.TransitionParams, &TransitionParams, 0xC );

		this->ProcessEvent( pfnServerViewSelf, &ServerViewSelf_Parms, NULL );
	};

	void ServerSetNextViewTarget ()
	{
		static UFunction* pfnServerSetNextViewTarget = NULL;

		if ( !pfnServerSetNextViewTarget )
			pfnServerSetNextViewTarget = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetNextViewTarget" );

		ACCInstanceController_execServerSetNextViewTarget_Parms ServerSetNextViewTarget_Parms;

		this->ProcessEvent( pfnServerSetNextViewTarget, &ServerSetNextViewTarget_Parms, NULL );
	};

	void ServerFollow ( struct FString pname/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerFollow = NULL;

		if ( !pfnServerFollow )
			pfnServerFollow = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFollow" );

		ACCInstanceController_execServerFollow_Parms ServerFollow_Parms;
		memcpy( &ServerFollow_Parms.pname, &pname, 0xC );

		this->ProcessEvent( pfnServerFollow, &ServerFollow_Parms, NULL );
	};

	void ServerFind ( struct FString pname/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerFind = NULL;

		if ( !pfnServerFind )
			pfnServerFind = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFind" );

		ACCInstanceController_execServerFind_Parms ServerFind_Parms;
		memcpy( &ServerFind_Parms.pname, &pname, 0xC );

		this->ProcessEvent( pfnServerFind, &ServerFind_Parms, NULL );
	};

	void ServerListPlayers ()
	{
		static UFunction* pfnServerListPlayers = NULL;

		if ( !pfnServerListPlayers )
			pfnServerListPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerListPlayers" );

		ACCInstanceController_execServerListPlayers_Parms ServerListPlayers_Parms;

		this->ProcessEvent( pfnServerListPlayers, &ServerListPlayers_Parms, NULL );
	};

	void SetTestTournament ()
	{
		static UFunction* pfnSetTestTournament = NULL;

		if ( !pfnSetTestTournament )
			pfnSetTestTournament = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetTestTournament" );

		ACCInstanceController_execSetTestTournament_Parms SetTestTournament_Parms;

		this->ProcessEvent( pfnSetTestTournament, &SetTestTournament_Parms, NULL );
	};

	void ListPlayers ()
	{
		static UFunction* pfnListPlayers = NULL;

		if ( !pfnListPlayers )
			pfnListPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ListPlayers" );

		ACCInstanceController_execListPlayers_Parms ListPlayers_Parms;

		this->ProcessEvent( pfnListPlayers, &ListPlayers_Parms, NULL );
	};

	void ToggleNames ()
	{
		static UFunction* pfnToggleNames = NULL;

		if ( !pfnToggleNames )
			pfnToggleNames = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ToggleNames" );

		ACCInstanceController_execToggleNames_Parms ToggleNames_Parms;

		this->ProcessEvent( pfnToggleNames, &ToggleNames_Parms, NULL );
	};

	void Follow ( struct FString pname )
	{
		static UFunction* pfnFollow = NULL;

		if ( !pfnFollow )
			pfnFollow = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Follow" );

		ACCInstanceController_execFollow_Parms Follow_Parms;
		memcpy( &Follow_Parms.pname, &pname, 0xC );

		this->ProcessEvent( pfnFollow, &Follow_Parms, NULL );
	};

	void Find ( struct FString pname )
	{
		static UFunction* pfnFind = NULL;

		if ( !pfnFind )
			pfnFind = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Find" );

		ACCInstanceController_execFind_Parms Find_Parms;
		memcpy( &Find_Parms.pname, &pname, 0xC );

		this->ProcessEvent( pfnFind, &Find_Parms, NULL );
	};

	void eventDoCommand ( struct FString Command )
	{
		static UFunction* pfnDoCommand = NULL;

		if ( !pfnDoCommand )
			pfnDoCommand = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoCommand" );

		ACCInstanceController_eventDoCommand_Parms DoCommand_Parms;
		memcpy( &DoCommand_Parms.Command, &Command, 0xC );

		this->ProcessEvent( pfnDoCommand, &DoCommand_Parms, NULL );
	};

	bool IsGM ()
	{
		static UFunction* pfnIsGM = NULL;

		if ( !pfnIsGM )
			pfnIsGM = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.IsGM" );

		ACCInstanceController_execIsGM_Parms IsGM_Parms;

		this->ProcessEvent( pfnIsGM, &IsGM_Parms, NULL );

		return IsGM_Parms.ReturnValue;
	};

	void AbortSprint ()
	{
		static UFunction* pfnAbortSprint = NULL;

		if ( !pfnAbortSprint )
			pfnAbortSprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AbortSprint" );

		ACCInstanceController_execAbortSprint_Parms AbortSprint_Parms;

		this->ProcessEvent( pfnAbortSprint, &AbortSprint_Parms, NULL );
	};

	void SprintInstance ( unsigned long SprintOn )
	{
		static UFunction* pfnSprintInstance = NULL;

		if ( !pfnSprintInstance )
			pfnSprintInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SprintInstance" );

		ACCInstanceController_execSprintInstance_Parms SprintInstance_Parms;
		SprintInstance_Parms.SprintOn = SprintOn;

		this->ProcessEvent( pfnSprintInstance, &SprintInstance_Parms, NULL );
	};

	void OnLeftShiftRelease ()
	{
		static UFunction* pfnOnLeftShiftRelease = NULL;

		if ( !pfnOnLeftShiftRelease )
			pfnOnLeftShiftRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLeftShiftRelease" );

		ACCInstanceController_execOnLeftShiftRelease_Parms OnLeftShiftRelease_Parms;

		this->ProcessEvent( pfnOnLeftShiftRelease, &OnLeftShiftRelease_Parms, NULL );
	};

	void OnLeftShiftPress ()
	{
		static UFunction* pfnOnLeftShiftPress = NULL;

		if ( !pfnOnLeftShiftPress )
			pfnOnLeftShiftPress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLeftShiftPress" );

		ACCInstanceController_execOnLeftShiftPress_Parms OnLeftShiftPress_Parms;

		this->ProcessEvent( pfnOnLeftShiftPress, &OnLeftShiftPress_Parms, NULL );
	};

	void OnLeftControlRelease ()
	{
		static UFunction* pfnOnLeftControlRelease = NULL;

		if ( !pfnOnLeftControlRelease )
			pfnOnLeftControlRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLeftControlRelease" );

		ACCInstanceController_execOnLeftControlRelease_Parms OnLeftControlRelease_Parms;

		this->ProcessEvent( pfnOnLeftControlRelease, &OnLeftControlRelease_Parms, NULL );
	};

	void OnLeftControlPress ()
	{
		static UFunction* pfnOnLeftControlPress = NULL;

		if ( !pfnOnLeftControlPress )
			pfnOnLeftControlPress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLeftControlPress" );

		ACCInstanceController_execOnLeftControlPress_Parms OnLeftControlPress_Parms;

		this->ProcessEvent( pfnOnLeftControlPress, &OnLeftControlPress_Parms, NULL );
	};

	void StopCrouch ()
	{
		static UFunction* pfnStopCrouch = NULL;

		if ( !pfnStopCrouch )
			pfnStopCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StopCrouch" );

		ACCInstanceController_execStopCrouch_Parms StopCrouch_Parms;

		this->ProcessEvent( pfnStopCrouch, &StopCrouch_Parms, NULL );
	};

	void StartCrouch ()
	{
		static UFunction* pfnStartCrouch = NULL;

		if ( !pfnStartCrouch )
			pfnStartCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartCrouch" );

		ACCInstanceController_execStartCrouch_Parms StartCrouch_Parms;

		this->ProcessEvent( pfnStartCrouch, &StartCrouch_Parms, NULL );
	};

	void ConditionalStopCrouch ()
	{
		static UFunction* pfnConditionalStopCrouch = NULL;

		if ( !pfnConditionalStopCrouch )
			pfnConditionalStopCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ConditionalStopCrouch" );

		ACCInstanceController_execConditionalStopCrouch_Parms ConditionalStopCrouch_Parms;

		this->ProcessEvent( pfnConditionalStopCrouch, &ConditionalStopCrouch_Parms, NULL );
	};

	bool ConditionalStartCrouch ( unsigned long bTest )
	{
		static UFunction* pfnConditionalStartCrouch = NULL;

		if ( !pfnConditionalStartCrouch )
			pfnConditionalStartCrouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ConditionalStartCrouch" );

		ACCInstanceController_execConditionalStartCrouch_Parms ConditionalStartCrouch_Parms;
		ConditionalStartCrouch_Parms.bTest = bTest;

		this->ProcessEvent( pfnConditionalStartCrouch, &ConditionalStartCrouch_Parms, NULL );

		return ConditionalStartCrouch_Parms.ReturnValue;
	};

	void ForceCrouchAction ()
	{
		static UFunction* pfnForceCrouchAction = NULL;

		if ( !pfnForceCrouchAction )
			pfnForceCrouchAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ForceCrouchAction" );

		ACCInstanceController_execForceCrouchAction_Parms ForceCrouchAction_Parms;

		this->ProcessEvent( pfnForceCrouchAction, &ForceCrouchAction_Parms, NULL );
	};

	void DoEnterIfStreamingEnded ()
	{
		static UFunction* pfnDoEnterIfStreamingEnded = NULL;

		if ( !pfnDoEnterIfStreamingEnded )
			pfnDoEnterIfStreamingEnded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoEnterIfStreamingEnded" );

		ACCInstanceController_execDoEnterIfStreamingEnded_Parms DoEnterIfStreamingEnded_Parms;

		this->ProcessEvent( pfnDoEnterIfStreamingEnded, &DoEnterIfStreamingEnded_Parms, NULL );
	};

	void DoForceEnter ()
	{
		static UFunction* pfnDoForceEnter = NULL;

		if ( !pfnDoForceEnter )
			pfnDoForceEnter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoForceEnter" );

		ACCInstanceController_execDoForceEnter_Parms DoForceEnter_Parms;

		this->ProcessEvent( pfnDoForceEnter, &DoForceEnter_Parms, NULL );
	};

	float GetGrenadeRecoilRoll ()
	{
		static UFunction* pfnGetGrenadeRecoilRoll = NULL;

		if ( !pfnGetGrenadeRecoilRoll )
			pfnGetGrenadeRecoilRoll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetGrenadeRecoilRoll" );

		ACCInstanceController_execGetGrenadeRecoilRoll_Parms GetGrenadeRecoilRoll_Parms;

		this->ProcessEvent( pfnGetGrenadeRecoilRoll, &GetGrenadeRecoilRoll_Parms, NULL );

		return GetGrenadeRecoilRoll_Parms.ReturnValue;
	};

	void PerformRecoilLimitation ( struct FRotator ViewRotWithRecoil, unsigned long bUserMouseMove, struct FRotator* out_ViewRotation )
	{
		static UFunction* pfnPerformRecoilLimitation = NULL;

		if ( !pfnPerformRecoilLimitation )
			pfnPerformRecoilLimitation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PerformRecoilLimitation" );

		ACCInstanceController_execPerformRecoilLimitation_Parms PerformRecoilLimitation_Parms;
		memcpy( &PerformRecoilLimitation_Parms.ViewRotWithRecoil, &ViewRotWithRecoil, 0xC );
		PerformRecoilLimitation_Parms.bUserMouseMove = bUserMouseMove;

		this->ProcessEvent( pfnPerformRecoilLimitation, &PerformRecoilLimitation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &PerformRecoilLimitation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
	};

	void PerformRecoilCompensation ( struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
	{
		static UFunction* pfnPerformRecoilCompensation = NULL;

		if ( !pfnPerformRecoilCompensation )
			pfnPerformRecoilCompensation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PerformRecoilCompensation" );

		ACCInstanceController_execPerformRecoilCompensation_Parms PerformRecoilCompensation_Parms;
		memcpy( &PerformRecoilCompensation_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnPerformRecoilCompensation, &PerformRecoilCompensation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &PerformRecoilCompensation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
	};

	void PerformTickRecoil ( float DeltaTime )
	{
		static UFunction* pfnPerformTickRecoil = NULL;

		if ( !pfnPerformTickRecoil )
			pfnPerformTickRecoil = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PerformTickRecoil" );

		ACCInstanceController_execPerformTickRecoil_Parms PerformTickRecoil_Parms;
		PerformTickRecoil_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPerformTickRecoil, &PerformTickRecoil_Parms, NULL );
	};

	struct FRotator GetSmoothedAdditionalRecoilRotation ()
	{
		static UFunction* pfnGetSmoothedAdditionalRecoilRotation = NULL;

		if ( !pfnGetSmoothedAdditionalRecoilRotation )
			pfnGetSmoothedAdditionalRecoilRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetSmoothedAdditionalRecoilRotation" );

		ACCInstanceController_execGetSmoothedAdditionalRecoilRotation_Parms GetSmoothedAdditionalRecoilRotation_Parms;

		this->ProcessEvent( pfnGetSmoothedAdditionalRecoilRotation, &GetSmoothedAdditionalRecoilRotation_Parms, NULL );

		return GetSmoothedAdditionalRecoilRotation_Parms.ReturnValue;
	};

	struct FRotator GetAdditionalRecoilRotation ()
	{
		static UFunction* pfnGetAdditionalRecoilRotation = NULL;

		if ( !pfnGetAdditionalRecoilRotation )
			pfnGetAdditionalRecoilRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetAdditionalRecoilRotation" );

		ACCInstanceController_execGetAdditionalRecoilRotation_Parms GetAdditionalRecoilRotation_Parms;

		this->ProcessEvent( pfnGetAdditionalRecoilRotation, &GetAdditionalRecoilRotation_Parms, NULL );

		return GetAdditionalRecoilRotation_Parms.ReturnValue;
	};

	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
	{
		static UFunction* pfnProcessViewRotation = NULL;

		if ( !pfnProcessViewRotation )
			pfnProcessViewRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ProcessViewRotation" );

		ACCInstanceController_execProcessViewRotation_Parms ProcessViewRotation_Parms;
		ProcessViewRotation_Parms.DeltaTime = DeltaTime;
		memcpy( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
	};

	struct FVector ProcessAvoidanceMovement ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot, float PenetrationMultiplier/*CPF_OptionalParm*/, float AvoidanceRadiusMultiplier/*CPF_OptionalParm*/, float GlueFactor/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessAvoidanceMovement = NULL;

		if ( !pfnProcessAvoidanceMovement )
			pfnProcessAvoidanceMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ProcessAvoidanceMovement" );

		ACCInstanceController_execProcessAvoidanceMovement_Parms ProcessAvoidanceMovement_Parms;
		ProcessAvoidanceMovement_Parms.DeltaTime = DeltaTime;
		memcpy( &ProcessAvoidanceMovement_Parms.newAccel, &newAccel, 0xC );
		ProcessAvoidanceMovement_Parms.DoubleClickMove = DoubleClickMove;
		memcpy( &ProcessAvoidanceMovement_Parms.DeltaRot, &DeltaRot, 0xC );
		ProcessAvoidanceMovement_Parms.PenetrationMultiplier = PenetrationMultiplier;
		ProcessAvoidanceMovement_Parms.AvoidanceRadiusMultiplier = AvoidanceRadiusMultiplier;
		ProcessAvoidanceMovement_Parms.GlueFactor = GlueFactor;

		this->ProcessEvent( pfnProcessAvoidanceMovement, &ProcessAvoidanceMovement_Parms, NULL );

		return ProcessAvoidanceMovement_Parms.ReturnValue;
	};

	void ReplicateMoveDirection ( unsigned char MoveDirection )
	{
		static UFunction* pfnReplicateMoveDirection = NULL;

		if ( !pfnReplicateMoveDirection )
			pfnReplicateMoveDirection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicateMoveDirection" );

		ACCInstanceController_execReplicateMoveDirection_Parms ReplicateMoveDirection_Parms;
		ReplicateMoveDirection_Parms.MoveDirection = MoveDirection;

		this->ProcessEvent( pfnReplicateMoveDirection, &ReplicateMoveDirection_Parms, NULL );
	};

	void PlayCameraAnim ( void* AnimToPlay, float BlendWeight/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayCameraAnim = NULL;

		if ( !pfnPlayCameraAnim )
			pfnPlayCameraAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayCameraAnim" );

		ACCInstanceController_execPlayCameraAnim_Parms PlayCameraAnim_Parms;
		PlayCameraAnim_Parms.AnimToPlay = AnimToPlay;
		PlayCameraAnim_Parms.BlendWeight = BlendWeight;

		this->ProcessEvent( pfnPlayCameraAnim, &PlayCameraAnim_Parms, NULL );
	};

	void ServerShowScore ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnServerShowScore = NULL;

		if ( !pfnServerShowScore )
			pfnServerShowScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerShowScore" );

		ACCInstanceController_execServerShowScore_Parms ServerShowScore_Parms;
		ServerShowScore_Parms.PRI = PRI;

		this->ProcessEvent( pfnServerShowScore, &ServerShowScore_Parms, NULL );
	};

	void Score ()
	{
		static UFunction* pfnScore = NULL;

		if ( !pfnScore )
			pfnScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Score" );

		ACCInstanceController_execScore_Parms Score_Parms;

		this->ProcessEvent( pfnScore, &Score_Parms, NULL );
	};

	void StopFireMessage ()
	{
		static UFunction* pfnStopFireMessage = NULL;

		if ( !pfnStopFireMessage )
			pfnStopFireMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StopFireMessage" );

		ACCInstanceController_execStopFireMessage_Parms StopFireMessage_Parms;

		this->ProcessEvent( pfnStopFireMessage, &StopFireMessage_Parms, NULL );
	};

	void PressFireMessage ()
	{
		static UFunction* pfnPressFireMessage = NULL;

		if ( !pfnPressFireMessage )
			pfnPressFireMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PressFireMessage" );

		ACCInstanceController_execPressFireMessage_Parms PressFireMessage_Parms;

		this->ProcessEvent( pfnPressFireMessage, &PressFireMessage_Parms, NULL );
	};

	void PlayStartupMessage ( unsigned char StartUpStage )
	{
		static UFunction* pfnPlayStartupMessage = NULL;

		if ( !pfnPlayStartupMessage )
			pfnPlayStartupMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayStartupMessage" );

		ACCInstanceController_execPlayStartupMessage_Parms PlayStartupMessage_Parms;
		PlayStartupMessage_Parms.StartUpStage = StartUpStage;

		this->ProcessEvent( pfnPlayStartupMessage, &PlayStartupMessage_Parms, NULL );
	};

	void Release_WeaponChangeAction ()
	{
		static UFunction* pfnRelease_WeaponChangeAction = NULL;

		if ( !pfnRelease_WeaponChangeAction )
			pfnRelease_WeaponChangeAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Release_WeaponChangeAction" );

		ACCInstanceController_execRelease_WeaponChangeAction_Parms Release_WeaponChangeAction_Parms;

		this->ProcessEvent( pfnRelease_WeaponChangeAction, &Release_WeaponChangeAction_Parms, NULL );
	};

	void Start_WeaponChangeAction ( struct FString Param )
	{
		static UFunction* pfnStart_WeaponChangeAction = NULL;

		if ( !pfnStart_WeaponChangeAction )
			pfnStart_WeaponChangeAction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Start_WeaponChangeAction" );

		ACCInstanceController_execStart_WeaponChangeAction_Parms Start_WeaponChangeAction_Parms;
		memcpy( &Start_WeaponChangeAction_Parms.Param, &Param, 0xC );

		this->ProcessEvent( pfnStart_WeaponChangeAction, &Start_WeaponChangeAction_Parms, NULL );
	};

	void SwitchToThrowingWeapon2_Release ()
	{
		static UFunction* pfnSwitchToThrowingWeapon2_Release = NULL;

		if ( !pfnSwitchToThrowingWeapon2_Release )
			pfnSwitchToThrowingWeapon2_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToThrowingWeapon2_Release" );

		ACCInstanceController_execSwitchToThrowingWeapon2_Release_Parms SwitchToThrowingWeapon2_Release_Parms;

		this->ProcessEvent( pfnSwitchToThrowingWeapon2_Release, &SwitchToThrowingWeapon2_Release_Parms, NULL );
	};

	void SwitchToThrowingWeapon2 ()
	{
		static UFunction* pfnSwitchToThrowingWeapon2 = NULL;

		if ( !pfnSwitchToThrowingWeapon2 )
			pfnSwitchToThrowingWeapon2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToThrowingWeapon2" );

		ACCInstanceController_execSwitchToThrowingWeapon2_Parms SwitchToThrowingWeapon2_Parms;

		this->ProcessEvent( pfnSwitchToThrowingWeapon2, &SwitchToThrowingWeapon2_Parms, NULL );
	};

	void SwitchToThrowingWeapon1_Release ()
	{
		static UFunction* pfnSwitchToThrowingWeapon1_Release = NULL;

		if ( !pfnSwitchToThrowingWeapon1_Release )
			pfnSwitchToThrowingWeapon1_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToThrowingWeapon1_Release" );

		ACCInstanceController_execSwitchToThrowingWeapon1_Release_Parms SwitchToThrowingWeapon1_Release_Parms;

		this->ProcessEvent( pfnSwitchToThrowingWeapon1_Release, &SwitchToThrowingWeapon1_Release_Parms, NULL );
	};

	void SwitchToThrowingWeapon1 ()
	{
		static UFunction* pfnSwitchToThrowingWeapon1 = NULL;

		if ( !pfnSwitchToThrowingWeapon1 )
			pfnSwitchToThrowingWeapon1 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToThrowingWeapon1" );

		ACCInstanceController_execSwitchToThrowingWeapon1_Parms SwitchToThrowingWeapon1_Parms;

		this->ProcessEvent( pfnSwitchToThrowingWeapon1, &SwitchToThrowingWeapon1_Parms, NULL );
	};

	void SwitchToMeleeWeapon_Release ()
	{
		static UFunction* pfnSwitchToMeleeWeapon_Release = NULL;

		if ( !pfnSwitchToMeleeWeapon_Release )
			pfnSwitchToMeleeWeapon_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToMeleeWeapon_Release" );

		ACCInstanceController_execSwitchToMeleeWeapon_Release_Parms SwitchToMeleeWeapon_Release_Parms;

		this->ProcessEvent( pfnSwitchToMeleeWeapon_Release, &SwitchToMeleeWeapon_Release_Parms, NULL );
	};

	void SwitchToMeleeWeapon ()
	{
		static UFunction* pfnSwitchToMeleeWeapon = NULL;

		if ( !pfnSwitchToMeleeWeapon )
			pfnSwitchToMeleeWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToMeleeWeapon" );

		ACCInstanceController_execSwitchToMeleeWeapon_Parms SwitchToMeleeWeapon_Parms;

		this->ProcessEvent( pfnSwitchToMeleeWeapon, &SwitchToMeleeWeapon_Parms, NULL );
	};

	void SwitchToSecondaryWeapon_Release ()
	{
		static UFunction* pfnSwitchToSecondaryWeapon_Release = NULL;

		if ( !pfnSwitchToSecondaryWeapon_Release )
			pfnSwitchToSecondaryWeapon_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToSecondaryWeapon_Release" );

		ACCInstanceController_execSwitchToSecondaryWeapon_Release_Parms SwitchToSecondaryWeapon_Release_Parms;

		this->ProcessEvent( pfnSwitchToSecondaryWeapon_Release, &SwitchToSecondaryWeapon_Release_Parms, NULL );
	};

	void SwitchToSecondaryWeapon ()
	{
		static UFunction* pfnSwitchToSecondaryWeapon = NULL;

		if ( !pfnSwitchToSecondaryWeapon )
			pfnSwitchToSecondaryWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToSecondaryWeapon" );

		ACCInstanceController_execSwitchToSecondaryWeapon_Parms SwitchToSecondaryWeapon_Parms;

		this->ProcessEvent( pfnSwitchToSecondaryWeapon, &SwitchToSecondaryWeapon_Parms, NULL );
	};

	void SwitchToPrimaryWeapon2_Release ()
	{
		static UFunction* pfnSwitchToPrimaryWeapon2_Release = NULL;

		if ( !pfnSwitchToPrimaryWeapon2_Release )
			pfnSwitchToPrimaryWeapon2_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToPrimaryWeapon2_Release" );

		ACCInstanceController_execSwitchToPrimaryWeapon2_Release_Parms SwitchToPrimaryWeapon2_Release_Parms;

		this->ProcessEvent( pfnSwitchToPrimaryWeapon2_Release, &SwitchToPrimaryWeapon2_Release_Parms, NULL );
	};

	void SwitchToPrimaryWeapon2 ()
	{
		static UFunction* pfnSwitchToPrimaryWeapon2 = NULL;

		if ( !pfnSwitchToPrimaryWeapon2 )
			pfnSwitchToPrimaryWeapon2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToPrimaryWeapon2" );

		ACCInstanceController_execSwitchToPrimaryWeapon2_Parms SwitchToPrimaryWeapon2_Parms;

		this->ProcessEvent( pfnSwitchToPrimaryWeapon2, &SwitchToPrimaryWeapon2_Parms, NULL );
	};

	void SwitchToPrimaryWeapon1_Release ()
	{
		static UFunction* pfnSwitchToPrimaryWeapon1_Release = NULL;

		if ( !pfnSwitchToPrimaryWeapon1_Release )
			pfnSwitchToPrimaryWeapon1_Release = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToPrimaryWeapon1_Release" );

		ACCInstanceController_execSwitchToPrimaryWeapon1_Release_Parms SwitchToPrimaryWeapon1_Release_Parms;

		this->ProcessEvent( pfnSwitchToPrimaryWeapon1_Release, &SwitchToPrimaryWeapon1_Release_Parms, NULL );
	};

	void SwitchToPrimaryWeapon1 ()
	{
		static UFunction* pfnSwitchToPrimaryWeapon1 = NULL;

		if ( !pfnSwitchToPrimaryWeapon1 )
			pfnSwitchToPrimaryWeapon1 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToPrimaryWeapon1" );

		ACCInstanceController_execSwitchToPrimaryWeapon1_Parms SwitchToPrimaryWeapon1_Parms;

		this->ProcessEvent( pfnSwitchToPrimaryWeapon1, &SwitchToPrimaryWeapon1_Parms, NULL );
	};

	bool SwitchToWeaponSlot ( unsigned char WeaponSlot, unsigned long bTest )
	{
		static UFunction* pfnSwitchToWeaponSlot = NULL;

		if ( !pfnSwitchToWeaponSlot )
			pfnSwitchToWeaponSlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SwitchToWeaponSlot" );

		ACCInstanceController_execSwitchToWeaponSlot_Parms SwitchToWeaponSlot_Parms;
		SwitchToWeaponSlot_Parms.WeaponSlot = WeaponSlot;
		SwitchToWeaponSlot_Parms.bTest = bTest;

		this->ProcessEvent( pfnSwitchToWeaponSlot, &SwitchToWeaponSlot_Parms, NULL );

		return SwitchToWeaponSlot_Parms.ReturnValue;
	};

	void DropCarriedObject ()
	{
		static UFunction* pfnDropCarriedObject = NULL;

		if ( !pfnDropCarriedObject )
			pfnDropCarriedObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DropCarriedObject" );

		ACCInstanceController_execDropCarriedObject_Parms DropCarriedObject_Parms;

		this->ProcessEvent( pfnDropCarriedObject, &DropCarriedObject_Parms, NULL );
	};

	void DoChangeEffectsManagerState ( struct FName NewEffectsManagerState, int NewHidePawnAndWeapon )
	{
		static UFunction* pfnDoChangeEffectsManagerState = NULL;

		if ( !pfnDoChangeEffectsManagerState )
			pfnDoChangeEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DoChangeEffectsManagerState" );

		ACCInstanceController_execDoChangeEffectsManagerState_Parms DoChangeEffectsManagerState_Parms;
		memcpy( &DoChangeEffectsManagerState_Parms.NewEffectsManagerState, &NewEffectsManagerState, 0x8 );
		DoChangeEffectsManagerState_Parms.NewHidePawnAndWeapon = NewHidePawnAndWeapon;

		this->ProcessEvent( pfnDoChangeEffectsManagerState, &DoChangeEffectsManagerState_Parms, NULL );
	};

	bool GetIsInDelayedChangeEffectsManagerState ()
	{
		static UFunction* pfnGetIsInDelayedChangeEffectsManagerState = NULL;

		if ( !pfnGetIsInDelayedChangeEffectsManagerState )
			pfnGetIsInDelayedChangeEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetIsInDelayedChangeEffectsManagerState" );

		ACCInstanceController_execGetIsInDelayedChangeEffectsManagerState_Parms GetIsInDelayedChangeEffectsManagerState_Parms;

		this->ProcessEvent( pfnGetIsInDelayedChangeEffectsManagerState, &GetIsInDelayedChangeEffectsManagerState_Parms, NULL );

		return GetIsInDelayedChangeEffectsManagerState_Parms.ReturnValue;
	};

	void DelayedChangeEffectsManagerState ()
	{
		static UFunction* pfnDelayedChangeEffectsManagerState = NULL;

		if ( !pfnDelayedChangeEffectsManagerState )
			pfnDelayedChangeEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DelayedChangeEffectsManagerState" );

		ACCInstanceController_execDelayedChangeEffectsManagerState_Parms DelayedChangeEffectsManagerState_Parms;

		this->ProcessEvent( pfnDelayedChangeEffectsManagerState, &DelayedChangeEffectsManagerState_Parms, NULL );
	};

	void UpdateCurrentEffectsManagerState ()
	{
		static UFunction* pfnUpdateCurrentEffectsManagerState = NULL;

		if ( !pfnUpdateCurrentEffectsManagerState )
			pfnUpdateCurrentEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateCurrentEffectsManagerState" );

		ACCInstanceController_execUpdateCurrentEffectsManagerState_Parms UpdateCurrentEffectsManagerState_Parms;

		this->ProcessEvent( pfnUpdateCurrentEffectsManagerState, &UpdateCurrentEffectsManagerState_Parms, NULL );
	};

	struct FName GetCurrentEffectsManagerState ( float* EnteringDelay, int* bHidePawnAndWeapon )
	{
		static UFunction* pfnGetCurrentEffectsManagerState = NULL;

		if ( !pfnGetCurrentEffectsManagerState )
			pfnGetCurrentEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetCurrentEffectsManagerState" );

		ACCInstanceController_execGetCurrentEffectsManagerState_Parms GetCurrentEffectsManagerState_Parms;

		this->ProcessEvent( pfnGetCurrentEffectsManagerState, &GetCurrentEffectsManagerState_Parms, NULL );

		if ( EnteringDelay )
			*EnteringDelay = GetCurrentEffectsManagerState_Parms.EnteringDelay; // CPF_OutParm
		if ( bHidePawnAndWeapon )
			*bHidePawnAndWeapon = GetCurrentEffectsManagerState_Parms.bHidePawnAndWeapon; // CPF_OutParm

		return GetCurrentEffectsManagerState_Parms.ReturnValue;
	};

	struct FName GetEffectsManagerState ( float* EnteringDelay )
	{
		static UFunction* pfnGetEffectsManagerState = NULL;

		if ( !pfnGetEffectsManagerState )
			pfnGetEffectsManagerState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetEffectsManagerState" );

		ACCInstanceController_execGetEffectsManagerState_Parms GetEffectsManagerState_Parms;

		this->ProcessEvent( pfnGetEffectsManagerState, &GetEffectsManagerState_Parms, NULL );

		if ( EnteringDelay )
			*EnteringDelay = GetEffectsManagerState_Parms.EnteringDelay; // CPF_OutParm

		return GetEffectsManagerState_Parms.ReturnValue;
	};

	void SniperAimingPostFireTimer ()
	{
		static UFunction* pfnSniperAimingPostFireTimer = NULL;

		if ( !pfnSniperAimingPostFireTimer )
			pfnSniperAimingPostFireTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SniperAimingPostFireTimer" );

		ACCInstanceController_execSniperAimingPostFireTimer_Parms SniperAimingPostFireTimer_Parms;

		this->ProcessEvent( pfnSniperAimingPostFireTimer, &SniperAimingPostFireTimer_Parms, NULL );
	};

	void NotifyFireAmmunition ( float FireTimeStamp )
	{
		static UFunction* pfnNotifyFireAmmunition = NULL;

		if ( !pfnNotifyFireAmmunition )
			pfnNotifyFireAmmunition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyFireAmmunition" );

		ACCInstanceController_execNotifyFireAmmunition_Parms NotifyFireAmmunition_Parms;
		NotifyFireAmmunition_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnNotifyFireAmmunition, &NotifyFireAmmunition_Parms, NULL );
	};

	void SetId ( int A1/*CPF_OptionalParm*/, int A2/*CPF_OptionalParm*/, int A3/*CPF_OptionalParm*/, int A4/*CPF_OptionalParm*/, int A5/*CPF_OptionalParm*/, int A6/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetId = NULL;

		if ( !pfnSetId )
			pfnSetId = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetId" );

		ACCInstanceController_execSetId_Parms SetId_Parms;
		SetId_Parms.A1 = A1;
		SetId_Parms.A1 = A1;
		SetId_Parms.A1 = A1;
		SetId_Parms.A1 = A1;
		SetId_Parms.A1 = A1;
		SetId_Parms.A1 = A1;

		this->ProcessEvent( pfnSetId, &SetId_Parms, NULL );
	};

	bool GetAimingEnabled ()
	{
		static UFunction* pfnGetAimingEnabled = NULL;

		if ( !pfnGetAimingEnabled )
			pfnGetAimingEnabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetAimingEnabled" );

		ACCInstanceController_execGetAimingEnabled_Parms GetAimingEnabled_Parms;

		this->ProcessEvent( pfnGetAimingEnabled, &GetAimingEnabled_Parms, NULL );

		return GetAimingEnabled_Parms.ReturnValue;
	};

	bool GetIsSniperAiming ()
	{
		static UFunction* pfnGetIsSniperAiming = NULL;

		if ( !pfnGetIsSniperAiming )
			pfnGetIsSniperAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetIsSniperAiming" );

		ACCInstanceController_execGetIsSniperAiming_Parms GetIsSniperAiming_Parms;

		this->ProcessEvent( pfnGetIsSniperAiming, &GetIsSniperAiming_Parms, NULL );

		return GetIsSniperAiming_Parms.ReturnValue;
	};

	float GetInAimingEnteringDelay ()
	{
		static UFunction* pfnGetInAimingEnteringDelay = NULL;

		if ( !pfnGetInAimingEnteringDelay )
			pfnGetInAimingEnteringDelay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetInAimingEnteringDelay" );

		ACCInstanceController_execGetInAimingEnteringDelay_Parms GetInAimingEnteringDelay_Parms;

		this->ProcessEvent( pfnGetInAimingEnteringDelay, &GetInAimingEnteringDelay_Parms, NULL );

		return GetInAimingEnteringDelay_Parms.ReturnValue;
	};

	struct FName GetEffectsManagerStateForAiming ( float* EnteringDelay, int* bHidePawnAndWeapon )
	{
		static UFunction* pfnGetEffectsManagerStateForAiming = NULL;

		if ( !pfnGetEffectsManagerStateForAiming )
			pfnGetEffectsManagerStateForAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetEffectsManagerStateForAiming" );

		ACCInstanceController_execGetEffectsManagerStateForAiming_Parms GetEffectsManagerStateForAiming_Parms;

		this->ProcessEvent( pfnGetEffectsManagerStateForAiming, &GetEffectsManagerStateForAiming_Parms, NULL );

		if ( EnteringDelay )
			*EnteringDelay = GetEffectsManagerStateForAiming_Parms.EnteringDelay; // CPF_OutParm
		if ( bHidePawnAndWeapon )
			*bHidePawnAndWeapon = GetEffectsManagerStateForAiming_Parms.bHidePawnAndWeapon; // CPF_OutParm

		return GetEffectsManagerStateForAiming_Parms.ReturnValue;
	};

	void RemoveAllAimingEffects ()
	{
		static UFunction* pfnRemoveAllAimingEffects = NULL;

		if ( !pfnRemoveAllAimingEffects )
			pfnRemoveAllAimingEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RemoveAllAimingEffects" );

		ACCInstanceController_execRemoveAllAimingEffects_Parms RemoveAllAimingEffects_Parms;

		this->ProcessEvent( pfnRemoveAllAimingEffects, &RemoveAllAimingEffects_Parms, NULL );
	};

	void UpdateAimingEffects ()
	{
		static UFunction* pfnUpdateAimingEffects = NULL;

		if ( !pfnUpdateAimingEffects )
			pfnUpdateAimingEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateAimingEffects" );

		ACCInstanceController_execUpdateAimingEffects_Parms UpdateAimingEffects_Parms;

		this->ProcessEvent( pfnUpdateAimingEffects, &UpdateAimingEffects_Parms, NULL );
	};

	void StartAimingEffects ()
	{
		static UFunction* pfnStartAimingEffects = NULL;

		if ( !pfnStartAimingEffects )
			pfnStartAimingEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartAimingEffects" );

		ACCInstanceController_execStartAimingEffects_Parms StartAimingEffects_Parms;

		this->ProcessEvent( pfnStartAimingEffects, &StartAimingEffects_Parms, NULL );
	};

	void StopAiming ()
	{
		static UFunction* pfnStopAiming = NULL;

		if ( !pfnStopAiming )
			pfnStopAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StopAiming" );

		ACCInstanceController_execStopAiming_Parms StopAiming_Parms;

		this->ProcessEvent( pfnStopAiming, &StopAiming_Parms, NULL );
	};

	void StartAiming ()
	{
		static UFunction* pfnStartAiming = NULL;

		if ( !pfnStartAiming )
			pfnStartAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartAiming" );

		ACCInstanceController_execStartAiming_Parms StartAiming_Parms;

		this->ProcessEvent( pfnStartAiming, &StartAiming_Parms, NULL );
	};

	void ConditionalStopAiming ()
	{
		static UFunction* pfnConditionalStopAiming = NULL;

		if ( !pfnConditionalStopAiming )
			pfnConditionalStopAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ConditionalStopAiming" );

		ACCInstanceController_execConditionalStopAiming_Parms ConditionalStopAiming_Parms;

		this->ProcessEvent( pfnConditionalStopAiming, &ConditionalStopAiming_Parms, NULL );
	};

	bool ConditionalStartAiming ( unsigned long bTest )
	{
		static UFunction* pfnConditionalStartAiming = NULL;

		if ( !pfnConditionalStartAiming )
			pfnConditionalStartAiming = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ConditionalStartAiming" );

		ACCInstanceController_execConditionalStartAiming_Parms ConditionalStartAiming_Parms;
		ConditionalStartAiming_Parms.bTest = bTest;

		this->ProcessEvent( pfnConditionalStartAiming, &ConditionalStartAiming_Parms, NULL );

		return ConditionalStartAiming_Parms.ReturnValue;
	};

	void ClientFinishRollingAnim ( class ACCInstancePawn* P, struct FRotator PawnRollingRotation, struct FRotator ControllerPostRollingRotation )
	{
		static UFunction* pfnClientFinishRollingAnim = NULL;

		if ( !pfnClientFinishRollingAnim )
			pfnClientFinishRollingAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientFinishRollingAnim" );

		ACCInstanceController_execClientFinishRollingAnim_Parms ClientFinishRollingAnim_Parms;
		ClientFinishRollingAnim_Parms.P = P;
		memcpy( &ClientFinishRollingAnim_Parms.PawnRollingRotation, &PawnRollingRotation, 0xC );
		memcpy( &ClientFinishRollingAnim_Parms.ControllerPostRollingRotation, &ControllerPostRollingRotation, 0xC );

		this->ProcessEvent( pfnClientFinishRollingAnim, &ClientFinishRollingAnim_Parms, NULL );
	};

	void ClientPlayRollingAnim ( class ACCInstancePawn* P, unsigned char MoveDir, float RollingTime )
	{
		static UFunction* pfnClientPlayRollingAnim = NULL;

		if ( !pfnClientPlayRollingAnim )
			pfnClientPlayRollingAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientPlayRollingAnim" );

		ACCInstanceController_execClientPlayRollingAnim_Parms ClientPlayRollingAnim_Parms;
		ClientPlayRollingAnim_Parms.P = P;
		ClientPlayRollingAnim_Parms.MoveDir = MoveDir;
		ClientPlayRollingAnim_Parms.RollingTime = RollingTime;

		this->ProcessEvent( pfnClientPlayRollingAnim, &ClientPlayRollingAnim_Parms, NULL );
	};

	void ExitRolling ()
	{
		static UFunction* pfnExitRolling = NULL;

		if ( !pfnExitRolling )
			pfnExitRolling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ExitRolling" );

		ACCInstanceController_execExitRolling_Parms ExitRolling_Parms;

		this->ProcessEvent( pfnExitRolling, &ExitRolling_Parms, NULL );
	};

	void OnRollingRelease ()
	{
		static UFunction* pfnOnRollingRelease = NULL;

		if ( !pfnOnRollingRelease )
			pfnOnRollingRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnRollingRelease" );

		ACCInstanceController_execOnRollingRelease_Parms OnRollingRelease_Parms;

		this->ProcessEvent( pfnOnRollingRelease, &OnRollingRelease_Parms, NULL );
	};

	void OnRollingPress ()
	{
		static UFunction* pfnOnRollingPress = NULL;

		if ( !pfnOnRollingPress )
			pfnOnRollingPress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnRollingPress" );

		ACCInstanceController_execOnRollingPress_Parms OnRollingPress_Parms;

		this->ProcessEvent( pfnOnRollingPress, &OnRollingPress_Parms, NULL );
	};

	bool CheckIfCanRolling ()
	{
		static UFunction* pfnCheckIfCanRolling = NULL;

		if ( !pfnCheckIfCanRolling )
			pfnCheckIfCanRolling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheckIfCanRolling" );

		ACCInstanceController_execCheckIfCanRolling_Parms CheckIfCanRolling_Parms;

		this->ProcessEvent( pfnCheckIfCanRolling, &CheckIfCanRolling_Parms, NULL );

		return CheckIfCanRolling_Parms.ReturnValue;
	};

	struct FVector eventDetermineAccelerationEx ( struct FRotator PawnRotation, unsigned char MoveDir )
	{
		static UFunction* pfnDetermineAccelerationEx = NULL;

		if ( !pfnDetermineAccelerationEx )
			pfnDetermineAccelerationEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DetermineAccelerationEx" );

		ACCInstanceController_eventDetermineAccelerationEx_Parms DetermineAccelerationEx_Parms;
		memcpy( &DetermineAccelerationEx_Parms.PawnRotation, &PawnRotation, 0xC );
		DetermineAccelerationEx_Parms.MoveDir = MoveDir;

		this->ProcessEvent( pfnDetermineAccelerationEx, &DetermineAccelerationEx_Parms, NULL );

		return DetermineAccelerationEx_Parms.ReturnValue;
	};

	bool CanRolling ()
	{
		static UFunction* pfnCanRolling = NULL;

		if ( !pfnCanRolling )
			pfnCanRolling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CanRolling" );

		ACCInstanceController_execCanRolling_Parms CanRolling_Parms;

		pfnCanRolling->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanRolling, &CanRolling_Parms, NULL );
		pfnCanRolling->FunctionFlags |= 0x400;

		return CanRolling_Parms.ReturnValue;
	};

	struct FVector DetermineAcceleration ( struct FRotator Yaw, unsigned char MoveDir, unsigned long PrimaryFwd )
	{
		static UFunction* pfnDetermineAcceleration = NULL;

		if ( !pfnDetermineAcceleration )
			pfnDetermineAcceleration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DetermineAcceleration" );

		ACCInstanceController_execDetermineAcceleration_Parms DetermineAcceleration_Parms;
		memcpy( &DetermineAcceleration_Parms.Yaw, &Yaw, 0xC );
		DetermineAcceleration_Parms.MoveDir = MoveDir;
		DetermineAcceleration_Parms.PrimaryFwd = PrimaryFwd;

		pfnDetermineAcceleration->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDetermineAcceleration, &DetermineAcceleration_Parms, NULL );
		pfnDetermineAcceleration->FunctionFlags |= 0x400;

		return DetermineAcceleration_Parms.ReturnValue;
	};

	bool CanBeInManualVelocityMode ()
	{
		static UFunction* pfnCanBeInManualVelocityMode = NULL;

		if ( !pfnCanBeInManualVelocityMode )
			pfnCanBeInManualVelocityMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CanBeInManualVelocityMode" );

		ACCInstanceController_execCanBeInManualVelocityMode_Parms CanBeInManualVelocityMode_Parms;

		this->ProcessEvent( pfnCanBeInManualVelocityMode, &CanBeInManualVelocityMode_Parms, NULL );

		return CanBeInManualVelocityMode_Parms.ReturnValue;
	};

	bool CheckIfCanSprint ()
	{
		static UFunction* pfnCheckIfCanSprint = NULL;

		if ( !pfnCheckIfCanSprint )
			pfnCheckIfCanSprint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheckIfCanSprint" );

		ACCInstanceController_execCheckIfCanSprint_Parms CheckIfCanSprint_Parms;

		this->ProcessEvent( pfnCheckIfCanSprint, &CheckIfCanSprint_Parms, NULL );

		return CheckIfCanSprint_Parms.ReturnValue;
	};

	void OnSpecialMoveRelease ()
	{
		static UFunction* pfnOnSpecialMoveRelease = NULL;

		if ( !pfnOnSpecialMoveRelease )
			pfnOnSpecialMoveRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnSpecialMoveRelease" );

		ACCInstanceController_execOnSpecialMoveRelease_Parms OnSpecialMoveRelease_Parms;

		this->ProcessEvent( pfnOnSpecialMoveRelease, &OnSpecialMoveRelease_Parms, NULL );
	};

	void OnSpecialMove ()
	{
		static UFunction* pfnOnSpecialMove = NULL;

		if ( !pfnOnSpecialMove )
			pfnOnSpecialMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnSpecialMove" );

		ACCInstanceController_execOnSpecialMove_Parms OnSpecialMove_Parms;

		this->ProcessEvent( pfnOnSpecialMove, &OnSpecialMove_Parms, NULL );
	};

	void ShowPawnAndWeapon ()
	{
		static UFunction* pfnShowPawnAndWeapon = NULL;

		if ( !pfnShowPawnAndWeapon )
			pfnShowPawnAndWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ShowPawnAndWeapon" );

		ACCInstanceController_execShowPawnAndWeapon_Parms ShowPawnAndWeapon_Parms;

		this->ProcessEvent( pfnShowPawnAndWeapon, &ShowPawnAndWeapon_Parms, NULL );
	};

	void HidePawnAndWeapon ()
	{
		static UFunction* pfnHidePawnAndWeapon = NULL;

		if ( !pfnHidePawnAndWeapon )
			pfnHidePawnAndWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.HidePawnAndWeapon" );

		ACCInstanceController_execHidePawnAndWeapon_Parms HidePawnAndWeapon_Parms;

		this->ProcessEvent( pfnHidePawnAndWeapon, &HidePawnAndWeapon_Parms, NULL );
	};

	void OnRBMouseRelease ()
	{
		static UFunction* pfnOnRBMouseRelease = NULL;

		if ( !pfnOnRBMouseRelease )
			pfnOnRBMouseRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnRBMouseRelease" );

		ACCInstanceController_execOnRBMouseRelease_Parms OnRBMouseRelease_Parms;

		this->ProcessEvent( pfnOnRBMouseRelease, &OnRBMouseRelease_Parms, NULL );
	};

	void OnRBMousePress ()
	{
		static UFunction* pfnOnRBMousePress = NULL;

		if ( !pfnOnRBMousePress )
			pfnOnRBMousePress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnRBMousePress" );

		ACCInstanceController_execOnRBMousePress_Parms OnRBMousePress_Parms;

		this->ProcessEvent( pfnOnRBMousePress, &OnRBMousePress_Parms, NULL );
	};

	void UpdateActionBarState ( int I, unsigned char Phase, float PrepareStartTime, float PrepareEndTime, float CooldownStartTime, float CooldownEndTime )
	{
		static UFunction* pfnUpdateActionBarState = NULL;

		if ( !pfnUpdateActionBarState )
			pfnUpdateActionBarState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateActionBarState" );

		ACCInstanceController_execUpdateActionBarState_Parms UpdateActionBarState_Parms;
		UpdateActionBarState_Parms.I = I;
		UpdateActionBarState_Parms.Phase = Phase;
		UpdateActionBarState_Parms.PrepareStartTime = PrepareStartTime;
		UpdateActionBarState_Parms.PrepareEndTime = PrepareEndTime;
		UpdateActionBarState_Parms.CooldownStartTime = CooldownStartTime;
		UpdateActionBarState_Parms.CooldownEndTime = CooldownEndTime;

		this->ProcessEvent( pfnUpdateActionBarState, &UpdateActionBarState_Parms, NULL );
	};

	void DrugPackItemUsed ( int AbilitySlot )
	{
		static UFunction* pfnDrugPackItemUsed = NULL;

		if ( !pfnDrugPackItemUsed )
			pfnDrugPackItemUsed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DrugPackItemUsed" );

		ACCInstanceController_execDrugPackItemUsed_Parms DrugPackItemUsed_Parms;
		DrugPackItemUsed_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnDrugPackItemUsed, &DrugPackItemUsed_Parms, NULL );
	};

	void HUDRadar_Enable ( unsigned long Value )
	{
		static UFunction* pfnHUDRadar_Enable = NULL;

		if ( !pfnHUDRadar_Enable )
			pfnHUDRadar_Enable = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.HUDRadar_Enable" );

		ACCInstanceController_execHUDRadar_Enable_Parms HUDRadar_Enable_Parms;
		HUDRadar_Enable_Parms.Value = Value;

		this->ProcessEvent( pfnHUDRadar_Enable, &HUDRadar_Enable_Parms, NULL );
	};

	void ActionBar_PawnHit ( int DamagePercent )
	{
		static UFunction* pfnActionBar_PawnHit = NULL;

		if ( !pfnActionBar_PawnHit )
			pfnActionBar_PawnHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActionBar_PawnHit" );

		ACCInstanceController_execActionBar_PawnHit_Parms ActionBar_PawnHit_Parms;
		ActionBar_PawnHit_Parms.DamagePercent = DamagePercent;

		this->ProcessEvent( pfnActionBar_PawnHit, &ActionBar_PawnHit_Parms, NULL );
	};

	void ActionBar_AbilityUseDenied ()
	{
		static UFunction* pfnActionBar_AbilityUseDenied = NULL;

		if ( !pfnActionBar_AbilityUseDenied )
			pfnActionBar_AbilityUseDenied = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActionBar_AbilityUseDenied" );

		ACCInstanceController_execActionBar_AbilityUseDenied_Parms ActionBar_AbilityUseDenied_Parms;

		this->ProcessEvent( pfnActionBar_AbilityUseDenied, &ActionBar_AbilityUseDenied_Parms, NULL );
	};

	void ActionBar_UseAbility ( int AbilitySlot )
	{
		static UFunction* pfnActionBar_UseAbility = NULL;

		if ( !pfnActionBar_UseAbility )
			pfnActionBar_UseAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActionBar_UseAbility" );

		ACCInstanceController_execActionBar_UseAbility_Parms ActionBar_UseAbility_Parms;
		ActionBar_UseAbility_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnActionBar_UseAbility, &ActionBar_UseAbility_Parms, NULL );
	};

	void ServerSetAndPrepareAbility ( int AbilitySlot )
	{
		static UFunction* pfnServerSetAndPrepareAbility = NULL;

		if ( !pfnServerSetAndPrepareAbility )
			pfnServerSetAndPrepareAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetAndPrepareAbility" );

		ACCInstanceController_execServerSetAndPrepareAbility_Parms ServerSetAndPrepareAbility_Parms;
		ServerSetAndPrepareAbility_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnServerSetAndPrepareAbility, &ServerSetAndPrepareAbility_Parms, NULL );
	};

	void ClientPlayInjectorSound ()
	{
		static UFunction* pfnClientPlayInjectorSound = NULL;

		if ( !pfnClientPlayInjectorSound )
			pfnClientPlayInjectorSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientPlayInjectorSound" );

		ACCInstanceController_execClientPlayInjectorSound_Parms ClientPlayInjectorSound_Parms;

		this->ProcessEvent( pfnClientPlayInjectorSound, &ClientPlayInjectorSound_Parms, NULL );
	};

	void NotifyAbilityUsed ( int AbilitySlot )
	{
		static UFunction* pfnNotifyAbilityUsed = NULL;

		if ( !pfnNotifyAbilityUsed )
			pfnNotifyAbilityUsed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyAbilityUsed" );

		ACCInstanceController_execNotifyAbilityUsed_Parms NotifyAbilityUsed_Parms;
		NotifyAbilityUsed_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnNotifyAbilityUsed, &NotifyAbilityUsed_Parms, NULL );
	};

	void SetAndPrepareAbility ( int AbilitySlot )
	{
		static UFunction* pfnSetAndPrepareAbility = NULL;

		if ( !pfnSetAndPrepareAbility )
			pfnSetAndPrepareAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetAndPrepareAbility" );

		ACCInstanceController_execSetAndPrepareAbility_Parms SetAndPrepareAbility_Parms;
		SetAndPrepareAbility_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnSetAndPrepareAbility, &SetAndPrepareAbility_Parms, NULL );
	};

	void ClientUpdateWeaponHUD ( int id0, int id1, int id2 )
	{
		static UFunction* pfnClientUpdateWeaponHUD = NULL;

		if ( !pfnClientUpdateWeaponHUD )
			pfnClientUpdateWeaponHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientUpdateWeaponHUD" );

		ACCInstanceController_execClientUpdateWeaponHUD_Parms ClientUpdateWeaponHUD_Parms;
		ClientUpdateWeaponHUD_Parms.id0 = id0;
		ClientUpdateWeaponHUD_Parms.id1 = id1;
		ClientUpdateWeaponHUD_Parms.id2 = id2;

		this->ProcessEvent( pfnClientUpdateWeaponHUD, &ClientUpdateWeaponHUD_Parms, NULL );
	};

	void PlayParticleSystemLocation ( void* PS, float Lifetime, struct FVector Loc, struct FRotator Rot )
	{
		static UFunction* pfnPlayParticleSystemLocation = NULL;

		if ( !pfnPlayParticleSystemLocation )
			pfnPlayParticleSystemLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PlayParticleSystemLocation" );

		ACCInstanceController_execPlayParticleSystemLocation_Parms PlayParticleSystemLocation_Parms;
		PlayParticleSystemLocation_Parms.PS = PS;
		PlayParticleSystemLocation_Parms.Lifetime = Lifetime;
		memcpy( &PlayParticleSystemLocation_Parms.Loc, &Loc, 0xC );
		memcpy( &PlayParticleSystemLocation_Parms.Rot, &Rot, 0xC );

		this->ProcessEvent( pfnPlayParticleSystemLocation, &PlayParticleSystemLocation_Parms, NULL );
	};

	void PrepareAbility ( struct FName AbilityName )
	{
		static UFunction* pfnPrepareAbility = NULL;

		if ( !pfnPrepareAbility )
			pfnPrepareAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PrepareAbility" );

		ACCInstanceController_execPrepareAbility_Parms PrepareAbility_Parms;
		memcpy( &PrepareAbility_Parms.AbilityName, &AbilityName, 0x8 );

		this->ProcessEvent( pfnPrepareAbility, &PrepareAbility_Parms, NULL );
	};

	void AddSimpleBuff ( int Num/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddSimpleBuff = NULL;

		if ( !pfnAddSimpleBuff )
			pfnAddSimpleBuff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AddSimpleBuff" );

		ACCInstanceController_execAddSimpleBuff_Parms AddSimpleBuff_Parms;
		AddSimpleBuff_Parms.Num = Num;

		this->ProcessEvent( pfnAddSimpleBuff, &AddSimpleBuff_Parms, NULL );
	};

	void ServerAddBuff ( int Num )
	{
		static UFunction* pfnServerAddBuff = NULL;

		if ( !pfnServerAddBuff )
			pfnServerAddBuff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerAddBuff" );

		ACCInstanceController_execServerAddBuff_Parms ServerAddBuff_Parms;
		ServerAddBuff_Parms.Num = Num;

		this->ProcessEvent( pfnServerAddBuff, &ServerAddBuff_Parms, NULL );
	};

	void OnLBMouseRelease ()
	{
		static UFunction* pfnOnLBMouseRelease = NULL;

		if ( !pfnOnLBMouseRelease )
			pfnOnLBMouseRelease = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLBMouseRelease" );

		ACCInstanceController_execOnLBMouseRelease_Parms OnLBMouseRelease_Parms;

		this->ProcessEvent( pfnOnLBMouseRelease, &OnLBMouseRelease_Parms, NULL );
	};

	void ServerStopAbility ( struct FName AbilName )
	{
		static UFunction* pfnServerStopAbility = NULL;

		if ( !pfnServerStopAbility )
			pfnServerStopAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerStopAbility" );

		ACCInstanceController_execServerStopAbility_Parms ServerStopAbility_Parms;
		memcpy( &ServerStopAbility_Parms.AbilName, &AbilName, 0x8 );

		this->ProcessEvent( pfnServerStopAbility, &ServerStopAbility_Parms, NULL );
	};

	void ConditionalStopInvisAbibility ()
	{
		static UFunction* pfnConditionalStopInvisAbibility = NULL;

		if ( !pfnConditionalStopInvisAbibility )
			pfnConditionalStopInvisAbibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ConditionalStopInvisAbibility" );

		ACCInstanceController_execConditionalStopInvisAbibility_Parms ConditionalStopInvisAbibility_Parms;

		this->ProcessEvent( pfnConditionalStopInvisAbibility, &ConditionalStopInvisAbibility_Parms, NULL );
	};

	void OnLBMousePress ()
	{
		static UFunction* pfnOnLBMousePress = NULL;

		if ( !pfnOnLBMousePress )
			pfnOnLBMousePress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.OnLBMousePress" );

		ACCInstanceController_execOnLBMousePress_Parms OnLBMousePress_Parms;

		this->ProcessEvent( pfnOnLBMousePress, &OnLBMousePress_Parms, NULL );
	};

	void ServerRestartPlayer ()
	{
		static UFunction* pfnServerRestartPlayer = NULL;

		if ( !pfnServerRestartPlayer )
			pfnServerRestartPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRestartPlayer" );

		ACCInstanceController_execServerRestartPlayer_Parms ServerRestartPlayer_Parms;

		this->ProcessEvent( pfnServerRestartPlayer, &ServerRestartPlayer_Parms, NULL );
	};

	void FakeEquipItems ()
	{
		static UFunction* pfnFakeEquipItems = NULL;

		if ( !pfnFakeEquipItems )
			pfnFakeEquipItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.FakeEquipItems" );

		ACCInstanceController_execFakeEquipItems_Parms FakeEquipItems_Parms;

		this->ProcessEvent( pfnFakeEquipItems, &FakeEquipItems_Parms, NULL );
	};

	void Fatality ()
	{
		static UFunction* pfnFatality = NULL;

		if ( !pfnFatality )
			pfnFatality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Fatality" );

		ACCInstanceController_execFatality_Parms Fatality_Parms;

		this->ProcessEvent( pfnFatality, &Fatality_Parms, NULL );
	};

	void Ressurect ()
	{
		static UFunction* pfnRessurect = NULL;

		if ( !pfnRessurect )
			pfnRessurect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Ressurect" );

		ACCInstanceController_execRessurect_Parms Ressurect_Parms;

		this->ProcessEvent( pfnRessurect, &Ressurect_Parms, NULL );
	};

	void AddAbilityTo ( struct FName AbilityName, int to/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddAbilityTo = NULL;

		if ( !pfnAddAbilityTo )
			pfnAddAbilityTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AddAbilityTo" );

		ACCInstanceController_execAddAbilityTo_Parms AddAbilityTo_Parms;
		memcpy( &AddAbilityTo_Parms.AbilityName, &AbilityName, 0x8 );
		AddAbilityTo_Parms.to = to;

		this->ProcessEvent( pfnAddAbilityTo, &AddAbilityTo_Parms, NULL );
	};

	void DumpAbilities ()
	{
		static UFunction* pfnDumpAbilities = NULL;

		if ( !pfnDumpAbilities )
			pfnDumpAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DumpAbilities" );

		ACCInstanceController_execDumpAbilities_Parms DumpAbilities_Parms;

		this->ProcessEvent( pfnDumpAbilities, &DumpAbilities_Parms, NULL );
	};

	void ServerDumpAbilities ()
	{
		static UFunction* pfnServerDumpAbilities = NULL;

		if ( !pfnServerDumpAbilities )
			pfnServerDumpAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerDumpAbilities" );

		ACCInstanceController_execServerDumpAbilities_Parms ServerDumpAbilities_Parms;

		this->ProcessEvent( pfnServerDumpAbilities, &ServerDumpAbilities_Parms, NULL );
	};

	void UpdateActionBarAbilities ()
	{
		static UFunction* pfnUpdateActionBarAbilities = NULL;

		if ( !pfnUpdateActionBarAbilities )
			pfnUpdateActionBarAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateActionBarAbilities" );

		ACCInstanceController_execUpdateActionBarAbilities_Parms UpdateActionBarAbilities_Parms;

		this->ProcessEvent( pfnUpdateActionBarAbilities, &UpdateActionBarAbilities_Parms, NULL );
	};

	void ServerAddAbilityTo ( struct FName AbilityName, int to, struct FAbilitSlotDesc SlotDesc )
	{
		static UFunction* pfnServerAddAbilityTo = NULL;

		if ( !pfnServerAddAbilityTo )
			pfnServerAddAbilityTo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerAddAbilityTo" );

		ACCInstanceController_execServerAddAbilityTo_Parms ServerAddAbilityTo_Parms;
		memcpy( &ServerAddAbilityTo_Parms.AbilityName, &AbilityName, 0x8 );
		ServerAddAbilityTo_Parms.to = to;
		memcpy( &ServerAddAbilityTo_Parms.SlotDesc, &SlotDesc, 0x10 );

		this->ProcessEvent( pfnServerAddAbilityTo, &ServerAddAbilityTo_Parms, NULL );
	};

	void NotifyHUDAboutActionBarAbility ( int SlotIdx )
	{
		static UFunction* pfnNotifyHUDAboutActionBarAbility = NULL;

		if ( !pfnNotifyHUDAboutActionBarAbility )
			pfnNotifyHUDAboutActionBarAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyHUDAboutActionBarAbility" );

		ACCInstanceController_execNotifyHUDAboutActionBarAbility_Parms NotifyHUDAboutActionBarAbility_Parms;
		NotifyHUDAboutActionBarAbility_Parms.SlotIdx = SlotIdx;

		this->ProcessEvent( pfnNotifyHUDAboutActionBarAbility, &NotifyHUDAboutActionBarAbility_Parms, NULL );
	};

	void ClientAbilityAdded ( struct FName AbilityName, int to, int ServerAbilityId/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientAbilityAdded = NULL;

		if ( !pfnClientAbilityAdded )
			pfnClientAbilityAdded = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientAbilityAdded" );

		ACCInstanceController_execClientAbilityAdded_Parms ClientAbilityAdded_Parms;
		memcpy( &ClientAbilityAdded_Parms.AbilityName, &AbilityName, 0x8 );
		ClientAbilityAdded_Parms.to = to;
		ClientAbilityAdded_Parms.ServerAbilityId = ServerAbilityId;

		this->ProcessEvent( pfnClientAbilityAdded, &ClientAbilityAdded_Parms, NULL );
	};

	void ActivateAbility ( int AbilitySlot )
	{
		static UFunction* pfnActivateAbility = NULL;

		if ( !pfnActivateAbility )
			pfnActivateAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActivateAbility" );

		ACCInstanceController_execActivateAbility_Parms ActivateAbility_Parms;
		ActivateAbility_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnActivateAbility, &ActivateAbility_Parms, NULL );
	};

	void AltActivateAbility ()
	{
		static UFunction* pfnAltActivateAbility = NULL;

		if ( !pfnAltActivateAbility )
			pfnAltActivateAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AltActivateAbility" );

		ACCInstanceController_execAltActivateAbility_Parms AltActivateAbility_Parms;

		this->ProcessEvent( pfnAltActivateAbility, &AltActivateAbility_Parms, NULL );
	};

	void InstanceEntered ()
	{
		static UFunction* pfnInstanceEntered = NULL;

		if ( !pfnInstanceEntered )
			pfnInstanceEntered = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.InstanceEntered" );

		ACCInstanceController_execInstanceEntered_Parms InstanceEntered_Parms;

		pfnInstanceEntered->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInstanceEntered, &InstanceEntered_Parms, NULL );
		pfnInstanceEntered->FunctionFlags |= 0x400;
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PreBeginPlay" );

		ACCInstanceController_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	struct FName GetActionBarAbilityName ( int I )
	{
		static UFunction* pfnGetActionBarAbilityName = NULL;

		if ( !pfnGetActionBarAbilityName )
			pfnGetActionBarAbilityName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetActionBarAbilityName" );

		ACCInstanceController_execGetActionBarAbilityName_Parms GetActionBarAbilityName_Parms;
		GetActionBarAbilityName_Parms.I = I;

		this->ProcessEvent( pfnGetActionBarAbilityName, &GetActionBarAbilityName_Parms, NULL );

		return GetActionBarAbilityName_Parms.ReturnValue;
	};

	void ServerRecreateAbilities ()
	{
		static UFunction* pfnServerRecreateAbilities = NULL;

		if ( !pfnServerRecreateAbilities )
			pfnServerRecreateAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRecreateAbilities" );

		ACCInstanceController_execServerRecreateAbilities_Parms ServerRecreateAbilities_Parms;

		this->ProcessEvent( pfnServerRecreateAbilities, &ServerRecreateAbilities_Parms, NULL );
	};

	void RecreateAbilities ()
	{
		static UFunction* pfnRecreateAbilities = NULL;

		if ( !pfnRecreateAbilities )
			pfnRecreateAbilities = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RecreateAbilities" );

		ACCInstanceController_execRecreateAbilities_Parms RecreateAbilities_Parms;

		this->ProcessEvent( pfnRecreateAbilities, &RecreateAbilities_Parms, NULL );
	};

	void FinishInstance ( int WinnerTeam/*CPF_OptionalParm*/, int AdditionalSeconds/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFinishInstance = NULL;

		if ( !pfnFinishInstance )
			pfnFinishInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.FinishInstance" );

		ACCInstanceController_execFinishInstance_Parms FinishInstance_Parms;
		FinishInstance_Parms.WinnerTeam = WinnerTeam;
		FinishInstance_Parms.AdditionalSeconds = AdditionalSeconds;

		this->ProcessEvent( pfnFinishInstance, &FinishInstance_Parms, NULL );
	};

	void ClientSetHUD ( class UClass* newHUDType, class UClass* newScoringType )
	{
		static UFunction* pfnClientSetHUD = NULL;

		if ( !pfnClientSetHUD )
			pfnClientSetHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientSetHUD" );

		ACCInstanceController_execClientSetHUD_Parms ClientSetHUD_Parms;
		ClientSetHUD_Parms.newHUDType = newHUDType;
		ClientSetHUD_Parms.newScoringType = newScoringType;

		this->ProcessEvent( pfnClientSetHUD, &ClientSetHUD_Parms, NULL );
	};

	void StopScriptProf ( int Client/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStopScriptProf = NULL;

		if ( !pfnStopScriptProf )
			pfnStopScriptProf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StopScriptProf" );

		ACCInstanceController_execStopScriptProf_Parms StopScriptProf_Parms;
		StopScriptProf_Parms.Client = Client;

		this->ProcessEvent( pfnStopScriptProf, &StopScriptProf_Parms, NULL );
	};

	void StartScriptProf ( int Client/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStartScriptProf = NULL;

		if ( !pfnStartScriptProf )
			pfnStartScriptProf = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.StartScriptProf" );

		ACCInstanceController_execStartScriptProf_Parms StartScriptProf_Parms;
		StartScriptProf_Parms.Client = Client;

		this->ProcessEvent( pfnStartScriptProf, &StartScriptProf_Parms, NULL );
	};

	void ServerCaptureStat_Stop ()
	{
		static UFunction* pfnServerCaptureStat_Stop = NULL;

		if ( !pfnServerCaptureStat_Stop )
			pfnServerCaptureStat_Stop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerCaptureStat_Stop" );

		ACCInstanceController_execServerCaptureStat_Stop_Parms ServerCaptureStat_Stop_Parms;

		this->ProcessEvent( pfnServerCaptureStat_Stop, &ServerCaptureStat_Stop_Parms, NULL );
	};

	void ServerCaptureStat_Start ()
	{
		static UFunction* pfnServerCaptureStat_Start = NULL;

		if ( !pfnServerCaptureStat_Start )
			pfnServerCaptureStat_Start = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerCaptureStat_Start" );

		ACCInstanceController_execServerCaptureStat_Start_Parms ServerCaptureStat_Start_Parms;

		this->ProcessEvent( pfnServerCaptureStat_Start, &ServerCaptureStat_Start_Parms, NULL );
	};

	void ServerFinishInstance ( int WinnerTeam, int AdditionalSeconds )
	{
		static UFunction* pfnServerFinishInstance = NULL;

		if ( !pfnServerFinishInstance )
			pfnServerFinishInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFinishInstance" );

		ACCInstanceController_execServerFinishInstance_Parms ServerFinishInstance_Parms;
		ServerFinishInstance_Parms.WinnerTeam = WinnerTeam;
		ServerFinishInstance_Parms.AdditionalSeconds = AdditionalSeconds;

		this->ProcessEvent( pfnServerFinishInstance, &ServerFinishInstance_Parms, NULL );
	};

	void YakaRequestInit ()
	{
		static UFunction* pfnYakaRequestInit = NULL;

		if ( !pfnYakaRequestInit )
			pfnYakaRequestInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.YakaRequestInit" );

		ACCInstanceController_execYakaRequestInit_Parms YakaRequestInit_Parms;

		this->ProcessEvent( pfnYakaRequestInit, &YakaRequestInit_Parms, NULL );
	};

	void MakeYakaRequest ()
	{
		static UFunction* pfnMakeYakaRequest = NULL;

		if ( !pfnMakeYakaRequest )
			pfnMakeYakaRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.MakeYakaRequest" );

		ACCInstanceController_execMakeYakaRequest_Parms MakeYakaRequest_Parms;

		pfnMakeYakaRequest->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMakeYakaRequest, &MakeYakaRequest_Parms, NULL );
		pfnMakeYakaRequest->FunctionFlags |= 0x400;
	};

	void eventApplyYakaCharData ( struct FCharacterVisualDescription CharData, int GroupId )
	{
		static UFunction* pfnApplyYakaCharData = NULL;

		if ( !pfnApplyYakaCharData )
			pfnApplyYakaCharData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ApplyYakaCharData" );

		ACCInstanceController_eventApplyYakaCharData_Parms ApplyYakaCharData_Parms;
		memcpy( &ApplyYakaCharData_Parms.CharData, &CharData, 0x48 );
		ApplyYakaCharData_Parms.GroupId = GroupId;

		this->ProcessEvent( pfnApplyYakaCharData, &ApplyYakaCharData_Parms, NULL );
	};

	void GoToPlayerWaiting ()
	{
		static UFunction* pfnGoToPlayerWaiting = NULL;

		if ( !pfnGoToPlayerWaiting )
			pfnGoToPlayerWaiting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GoToPlayerWaiting" );

		ACCInstanceController_execGoToPlayerWaiting_Parms GoToPlayerWaiting_Parms;

		this->ProcessEvent( pfnGoToPlayerWaiting, &GoToPlayerWaiting_Parms, NULL );
	};

	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Possess" );

		ACCInstanceController_eventPossess_Parms Possess_Parms;
		Possess_Parms.aPawn = aPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void ServerRetrieveQuest ( int I, int Id )
	{
		static UFunction* pfnServerRetrieveQuest = NULL;

		if ( !pfnServerRetrieveQuest )
			pfnServerRetrieveQuest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRetrieveQuest" );

		ACCInstanceController_execServerRetrieveQuest_Parms ServerRetrieveQuest_Parms;
		ServerRetrieveQuest_Parms.I = I;
		ServerRetrieveQuest_Parms.Id = Id;

		this->ProcessEvent( pfnServerRetrieveQuest, &ServerRetrieveQuest_Parms, NULL );
	};

	void ClientPosses ()
	{
		static UFunction* pfnClientPosses = NULL;

		if ( !pfnClientPosses )
			pfnClientPosses = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientPosses" );

		ACCInstanceController_execClientPosses_Parms ClientPosses_Parms;

		this->ProcessEvent( pfnClientPosses, &ClientPosses_Parms, NULL );
	};

	void ServerSetMyHat ( int Id )
	{
		static UFunction* pfnServerSetMyHat = NULL;

		if ( !pfnServerSetMyHat )
			pfnServerSetMyHat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetMyHat" );

		ACCInstanceController_execServerSetMyHat_Parms ServerSetMyHat_Parms;
		ServerSetMyHat_Parms.Id = Id;

		this->ProcessEvent( pfnServerSetMyHat, &ServerSetMyHat_Parms, NULL );
	};

	void SetMyHat ( int Id )
	{
		static UFunction* pfnSetMyHat = NULL;

		if ( !pfnSetMyHat )
			pfnSetMyHat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetMyHat" );

		ACCInstanceController_execSetMyHat_Parms SetMyHat_Parms;
		SetMyHat_Parms.Id = Id;

		this->ProcessEvent( pfnSetMyHat, &SetMyHat_Parms, NULL );
	};

	void temp_SetHairID ( int HairId )
	{
		static UFunction* pfntemp_SetHairID = NULL;

		if ( !pfntemp_SetHairID )
			pfntemp_SetHairID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.temp_SetHairID" );

		ACCInstanceController_exectemp_SetHairID_Parms temp_SetHairID_Parms;
		temp_SetHairID_Parms.HairId = HairId;

		this->ProcessEvent( pfntemp_SetHairID, &temp_SetHairID_Parms, NULL );
	};

	void EnableSniperVision ()
	{
		static UFunction* pfnEnableSniperVision = NULL;

		if ( !pfnEnableSniperVision )
			pfnEnableSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.EnableSniperVision" );

		ACCInstanceController_execEnableSniperVision_Parms EnableSniperVision_Parms;

		this->ProcessEvent( pfnEnableSniperVision, &EnableSniperVision_Parms, NULL );
	};

	void DisableSniperVision ()
	{
		static UFunction* pfnDisableSniperVision = NULL;

		if ( !pfnDisableSniperVision )
			pfnDisableSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DisableSniperVision" );

		ACCInstanceController_execDisableSniperVision_Parms DisableSniperVision_Parms;

		this->ProcessEvent( pfnDisableSniperVision, &DisableSniperVision_Parms, NULL );
	};

	void ServerDisableSniperVision ()
	{
		static UFunction* pfnServerDisableSniperVision = NULL;

		if ( !pfnServerDisableSniperVision )
			pfnServerDisableSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerDisableSniperVision" );

		ACCInstanceController_execServerDisableSniperVision_Parms ServerDisableSniperVision_Parms;

		this->ProcessEvent( pfnServerDisableSniperVision, &ServerDisableSniperVision_Parms, NULL );
	};

	void AffectBySniperVision ()
	{
		static UFunction* pfnAffectBySniperVision = NULL;

		if ( !pfnAffectBySniperVision )
			pfnAffectBySniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AffectBySniperVision" );

		ACCInstanceController_execAffectBySniperVision_Parms AffectBySniperVision_Parms;

		this->ProcessEvent( pfnAffectBySniperVision, &AffectBySniperVision_Parms, NULL );
	};

	void ServerEnableSniperVision ()
	{
		static UFunction* pfnServerEnableSniperVision = NULL;

		if ( !pfnServerEnableSniperVision )
			pfnServerEnableSniperVision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerEnableSniperVision" );

		ACCInstanceController_execServerEnableSniperVision_Parms ServerEnableSniperVision_Parms;

		this->ProcessEvent( pfnServerEnableSniperVision, &ServerEnableSniperVision_Parms, NULL );
	};

	void ServerRestoreProperties ()
	{
		static UFunction* pfnServerRestoreProperties = NULL;

		if ( !pfnServerRestoreProperties )
			pfnServerRestoreProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerRestoreProperties" );

		ACCInstanceController_execServerRestoreProperties_Parms ServerRestoreProperties_Parms;

		this->ProcessEvent( pfnServerRestoreProperties, &ServerRestoreProperties_Parms, NULL );
	};

	void InitializeDeadCameraSwitchers ()
	{
		static UFunction* pfnInitializeDeadCameraSwitchers = NULL;

		if ( !pfnInitializeDeadCameraSwitchers )
			pfnInitializeDeadCameraSwitchers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.InitializeDeadCameraSwitchers" );

		ACCInstanceController_execInitializeDeadCameraSwitchers_Parms InitializeDeadCameraSwitchers_Parms;

		this->ProcessEvent( pfnInitializeDeadCameraSwitchers, &InitializeDeadCameraSwitchers_Parms, NULL );
	};

	void InitializeLevelCameras ()
	{
		static UFunction* pfnInitializeLevelCameras = NULL;

		if ( !pfnInitializeLevelCameras )
			pfnInitializeLevelCameras = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.InitializeLevelCameras" );

		ACCInstanceController_execInitializeLevelCameras_Parms InitializeLevelCameras_Parms;

		this->ProcessEvent( pfnInitializeLevelCameras, &InitializeLevelCameras_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.PostBeginPlay" );

		ACCInstanceController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void DestroyAvatar ()
	{
		static UFunction* pfnDestroyAvatar = NULL;

		if ( !pfnDestroyAvatar )
			pfnDestroyAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DestroyAvatar" );

		ACCInstanceController_execDestroyAvatar_Parms DestroyAvatar_Parms;

		this->ProcessEvent( pfnDestroyAvatar, &DestroyAvatar_Parms, NULL );
	};

	void CreateAvatar ()
	{
		static UFunction* pfnCreateAvatar = NULL;

		if ( !pfnCreateAvatar )
			pfnCreateAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CreateAvatar" );

		ACCInstanceController_execCreateAvatar_Parms CreateAvatar_Parms;

		this->ProcessEvent( pfnCreateAvatar, &CreateAvatar_Parms, NULL );
	};

	void UpdateTakenDamage ()
	{
		static UFunction* pfnUpdateTakenDamage = NULL;

		if ( !pfnUpdateTakenDamage )
			pfnUpdateTakenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.UpdateTakenDamage" );

		ACCInstanceController_execUpdateTakenDamage_Parms UpdateTakenDamage_Parms;

		this->ProcessEvent( pfnUpdateTakenDamage, &UpdateTakenDamage_Parms, NULL );
	};

	bool AvatarEditorActive ()
	{
		static UFunction* pfnAvatarEditorActive = NULL;

		if ( !pfnAvatarEditorActive )
			pfnAvatarEditorActive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.AvatarEditorActive" );

		ACCInstanceController_execAvatarEditorActive_Parms AvatarEditorActive_Parms;

		pfnAvatarEditorActive->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAvatarEditorActive, &AvatarEditorActive_Parms, NULL );
		pfnAvatarEditorActive->FunctionFlags |= 0x400;

		return AvatarEditorActive_Parms.ReturnValue;
	};

	void SetPlayerPositionByAnimation ()
	{
		static UFunction* pfnSetPlayerPositionByAnimation = NULL;

		if ( !pfnSetPlayerPositionByAnimation )
			pfnSetPlayerPositionByAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.SetPlayerPositionByAnimation" );

		ACCInstanceController_execSetPlayerPositionByAnimation_Parms SetPlayerPositionByAnimation_Parms;

		pfnSetPlayerPositionByAnimation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetPlayerPositionByAnimation, &SetPlayerPositionByAnimation_Parms, NULL );
		pfnSetPlayerPositionByAnimation->FunctionFlags |= 0x400;
	};

	void ActionBarReplicatedEvent ( int I )
	{
		static UFunction* pfnActionBarReplicatedEvent = NULL;

		if ( !pfnActionBarReplicatedEvent )
			pfnActionBarReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ActionBarReplicatedEvent" );

		ACCInstanceController_execActionBarReplicatedEvent_Parms ActionBarReplicatedEvent_Parms;
		ActionBarReplicatedEvent_Parms.I = I;

		this->ProcessEvent( pfnActionBarReplicatedEvent, &ActionBarReplicatedEvent_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatedEvent" );

		ACCInstanceController_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void NotifySniperVisionStateChanged ()
	{
		static UFunction* pfnNotifySniperVisionStateChanged = NULL;

		if ( !pfnNotifySniperVisionStateChanged )
			pfnNotifySniperVisionStateChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifySniperVisionStateChanged" );

		ACCInstanceController_execNotifySniperVisionStateChanged_Parms NotifySniperVisionStateChanged_Parms;

		this->ProcessEvent( pfnNotifySniperVisionStateChanged, &NotifySniperVisionStateChanged_Parms, NULL );
	};

	void eventReplicatedEventEx ( struct FName VarName, int ArrayIndex )
	{
		static UFunction* pfnReplicatedEventEx = NULL;

		if ( !pfnReplicatedEventEx )
			pfnReplicatedEventEx = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ReplicatedEventEx" );

		ACCInstanceController_eventReplicatedEventEx_Parms ReplicatedEventEx_Parms;
		memcpy( &ReplicatedEventEx_Parms.VarName, &VarName, 0x8 );
		ReplicatedEventEx_Parms.ArrayIndex = ArrayIndex;

		this->ProcessEvent( pfnReplicatedEventEx, &ReplicatedEventEx_Parms, NULL );
	};

	struct FString eventGetName ()
	{
		static UFunction* pfnGetName = NULL;

		if ( !pfnGetName )
			pfnGetName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.GetName" );

		ACCInstanceController_eventGetName_Parms GetName_Parms;

		this->ProcessEvent( pfnGetName, &GetName_Parms, NULL );

		return GetName_Parms.ReturnValue;
	};

	void ServerSetAbilitySensModif ( float Modif )
	{
		static UFunction* pfnServerSetAbilitySensModif = NULL;

		if ( !pfnServerSetAbilitySensModif )
			pfnServerSetAbilitySensModif = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerSetAbilitySensModif" );

		ACCInstanceController_execServerSetAbilitySensModif_Parms ServerSetAbilitySensModif_Parms;
		ServerSetAbilitySensModif_Parms.Modif = Modif;

		this->ProcessEvent( pfnServerSetAbilitySensModif, &ServerSetAbilitySensModif_Parms, NULL );
	};

	void ResetSensModif ()
	{
		static UFunction* pfnResetSensModif = NULL;

		if ( !pfnResetSensModif )
			pfnResetSensModif = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ResetSensModif" );

		ACCInstanceController_execResetSensModif_Parms ResetSensModif_Parms;

		this->ProcessEvent( pfnResetSensModif, &ResetSensModif_Parms, NULL );
	};

	void ApplySensModif ( float Modif )
	{
		static UFunction* pfnApplySensModif = NULL;

		if ( !pfnApplySensModif )
			pfnApplySensModif = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ApplySensModif" );

		ACCInstanceController_execApplySensModif_Parms ApplySensModif_Parms;
		ApplySensModif_Parms.Modif = Modif;

		this->ProcessEvent( pfnApplySensModif, &ApplySensModif_Parms, NULL );
	};

	void ClientPreparePawnForDisconnect ()
	{
		static UFunction* pfnClientPreparePawnForDisconnect = NULL;

		if ( !pfnClientPreparePawnForDisconnect )
			pfnClientPreparePawnForDisconnect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientPreparePawnForDisconnect" );

		ACCInstanceController_execClientPreparePawnForDisconnect_Parms ClientPreparePawnForDisconnect_Parms;

		this->ProcessEvent( pfnClientPreparePawnForDisconnect, &ClientPreparePawnForDisconnect_Parms, NULL );
	};

	void FixWeaponBasedDrugs ()
	{
		static UFunction* pfnFixWeaponBasedDrugs = NULL;

		if ( !pfnFixWeaponBasedDrugs )
			pfnFixWeaponBasedDrugs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.FixWeaponBasedDrugs" );

		ACCInstanceController_execFixWeaponBasedDrugs_Parms FixWeaponBasedDrugs_Parms;

		this->ProcessEvent( pfnFixWeaponBasedDrugs, &FixWeaponBasedDrugs_Parms, NULL );
	};

	void ServerFixDrugsToActionManagerConnection ()
	{
		static UFunction* pfnServerFixDrugsToActionManagerConnection = NULL;

		if ( !pfnServerFixDrugsToActionManagerConnection )
			pfnServerFixDrugsToActionManagerConnection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ServerFixDrugsToActionManagerConnection" );

		ACCInstanceController_execServerFixDrugsToActionManagerConnection_Parms ServerFixDrugsToActionManagerConnection_Parms;

		this->ProcessEvent( pfnServerFixDrugsToActionManagerConnection, &ServerFixDrugsToActionManagerConnection_Parms, NULL );
	};

	void ClientRemovePRI ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnClientRemovePRI = NULL;

		if ( !pfnClientRemovePRI )
			pfnClientRemovePRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ClientRemovePRI" );

		ACCInstanceController_execClientRemovePRI_Parms ClientRemovePRI_Parms;
		ClientRemovePRI_Parms.PRI = PRI;

		this->ProcessEvent( pfnClientRemovePRI, &ClientRemovePRI_Parms, NULL );
	};

	void RemovePRI ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnRemovePRI = NULL;

		if ( !pfnRemovePRI )
			pfnRemovePRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.RemovePRI" );

		ACCInstanceController_execRemovePRI_Parms RemovePRI_Parms;
		RemovePRI_Parms.PRI = PRI;

		this->ProcessEvent( pfnRemovePRI, &RemovePRI_Parms, NULL );
	};

	void LeaveInstance ()
	{
		static UFunction* pfnLeaveInstance = NULL;

		if ( !pfnLeaveInstance )
			pfnLeaveInstance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.LeaveInstance" );

		ACCInstanceController_execLeaveInstance_Parms LeaveInstance_Parms;

		this->ProcessEvent( pfnLeaveInstance, &LeaveInstance_Parms, NULL );
	};

	void ResetCamera ()
	{
		static UFunction* pfnResetCamera = NULL;

		if ( !pfnResetCamera )
			pfnResetCamera = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ResetCamera" );

		ACCInstanceController_execResetCamera_Parms ResetCamera_Parms;

		this->ProcessEvent( pfnResetCamera, &ResetCamera_Parms, NULL );
	};

	void ResetHUDItems ()
	{
		static UFunction* pfnResetHUDItems = NULL;

		if ( !pfnResetHUDItems )
			pfnResetHUDItems = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.ResetHUDItems" );

		ACCInstanceController_execResetHUDItems_Parms ResetHUDItems_Parms;

		this->ProcessEvent( pfnResetHUDItems, &ResetHUDItems_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.Destroyed" );

		ACCInstanceController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void NotifyExiting ()
	{
		static UFunction* pfnNotifyExiting = NULL;

		if ( !pfnNotifyExiting )
			pfnNotifyExiting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.NotifyExiting" );

		ACCInstanceController_execNotifyExiting_Parms NotifyExiting_Parms;

		this->ProcessEvent( pfnNotifyExiting, &NotifyExiting_Parms, NULL );
	};

	void CheckForStopActiveReplicationStats ()
	{
		static UFunction* pfnCheckForStopActiveReplicationStats = NULL;

		if ( !pfnCheckForStopActiveReplicationStats )
			pfnCheckForStopActiveReplicationStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.CheckForStopActiveReplicationStats" );

		ACCInstanceController_execCheckForStopActiveReplicationStats_Parms CheckForStopActiveReplicationStats_Parms;

		this->ProcessEvent( pfnCheckForStopActiveReplicationStats, &CheckForStopActiveReplicationStats_Parms, NULL );
	};

	void DebugPlayerFeats ()
	{
		static UFunction* pfnDebugPlayerFeats = NULL;

		if ( !pfnDebugPlayerFeats )
			pfnDebugPlayerFeats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DebugPlayerFeats" );

		ACCInstanceController_execDebugPlayerFeats_Parms DebugPlayerFeats_Parms;

		this->ProcessEvent( pfnDebugPlayerFeats, &DebugPlayerFeats_Parms, NULL );
	};

	void DebugPlayerStats ()
	{
		static UFunction* pfnDebugPlayerStats = NULL;

		if ( !pfnDebugPlayerStats )
			pfnDebugPlayerStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceController.DebugPlayerStats" );

		ACCInstanceController_execDebugPlayerStats_Parms DebugPlayerStats_Parms;

		this->ProcessEvent( pfnDebugPlayerStats, &DebugPlayerStats_Parms, NULL );
	};

};

UClass* ACCInstanceController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif