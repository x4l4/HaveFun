/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: APlayerController.h
// Date: 06/16/2011 @ 05:19:39.168
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAXCLIENTUPDATEINTERVAL              0.25
#define Const_CLIENTADJUSTUPDATECOST               180.0
#define Const_MAXVEHICLEPOSITIONERRORSQUARED       900.0
#define Const_MAXNEARZEROVELOCITYSQUARED           16.0
#define Const_MAXPOSITIONERRORSQUARED              96.0

enum EProgressMessageType
{
	PMT_Clear = 0,
	PMT_Information = 1,
	PMT_AdminMessage = 2,
	PMT_DownloadProgress = 3,
	PMT_ConnectionFailure = 4,
	PMT_SocketFailure = 5,
	PMT_MAX = 6
};

enum EInputMatchAction
{
	IMA_GreaterThan = 0,
	IMA_LessThan = 1,
	IMA_MAX = 2
};

enum EInputTypes
{
	IT_XAxis = 0,
	IT_YAxis = 1,
	IT_MAX = 2
};

struct APlayerController_execGoToDeadState_Parms
{
};

struct APlayerController_eventGetTheControllerID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execClientSetRotation_Parms
{
	struct FRotator NewRotation;
	unsigned long bResetCamera : 1;
};

struct APlayerController_execClientSetLocation_Parms
{
	struct FVector NewLocation;
	struct FRotator NewRotation;
};

struct APlayerController_execFacePawnRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct APlayerController_execLogOutBugItAIGoToLogFile_Parms
{
	struct FString InScreenShotDesc;
	struct FString InGoString;
	struct FString InLocString;
};// FUNC_Final FUNC_Native

struct APlayerController_execLogOutBugItGoToLogFile_Parms
{
	struct FString InScreenShotDesc;
	struct FString InGoString;
	struct FString InLocString;
};// FUNC_Final FUNC_Native

struct APlayerController_execGetFRotatorFromString_Parms
{
	struct FString InStr;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execGetFVectorFromString_Parms
{
	struct FString InStr;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execDisableDebugAI_Parms
{
};

struct APlayerController_execBugItAI_Parms
{
	struct FString ScreenShotDescription;
};// FUNC_Exec FUNC_Event

struct APlayerController_execBugIt_Parms
{
	struct FString ScreenShotDescription;
};// FUNC_Exec FUNC_Event

struct APlayerController_execBugItWorker_Parms
{
	struct FVector TheLocation;
	struct FRotator TheRotation;
};

struct APlayerController_execNotifyExiting_Parms
{
};

struct APlayerController_execBugItGoString_Parms
{
	struct FString TheLocation;
	struct FString TheRotation;
};

struct APlayerController_execBugItGo_Parms
{
	float X;
	float Y;
	float Z;
	int Pitch;
	int Yaw;
	int Roll;
};// FUNC_Exec

struct APlayerController_eventClientSpawnCameraLensEffect_Parms
{
	class UClass* LensEffectEmitterClass;
};// FUNC_Event

struct APlayerController_execSentinel_PostAcquireTravelTheWorldPoints_Parms
{
};

struct APlayerController_execSentinel_PreAcquireTravelTheWorldPoints_Parms
{
};

struct APlayerController_execSentinel_SetupForGamebasedTravelTheWorld_Parms
{
};

struct APlayerController_execOnFlyThroughHasEnded_Parms
{
	void* inAction;
};

struct APlayerController_eventGetAchievementProgression_Parms
{
	int AchievementId;
	float CurrentValue; // CPF_OutParm
	float MaxValue; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execGetPartyGameTypeName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execGetPartyMapName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execIsPartyLeader_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_eventClientPrestreamTextures_Parms
{
	class AActor* ForcedActor;
	float ForceDuration;
	unsigned long bEnableStreaming : 1;
};// FUNC_Event

struct APlayerController_eventClientSetForceMipLevelsToBeResident_Parms
{
	class UMaterialInterface* Material;
	float ForceDuration;
};// FUNC_Event

struct APlayerController_execClientControlMovieTexture_Parms
{
	void* MovieTexture;
	unsigned char Mode;
};

struct APlayerController_execGetSplitscreenPlayerCount_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execGetSplitscreenPlayerByIndex_Parms
{
	int PlayerIndex;
	class APlayerReplicationInfo* ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execHasSplitscreenPlayer_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execIsSplitscreenPlayer_Parms
{
	int out_SplitscreenPlayerIndex; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execIsPrimaryPlayer_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execClientReturnToParty_Parms
{
};

struct APlayerController_execOnJoinTravelToSessionComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execClientTravelToSession_Parms
{
	struct FName SessionName;
	class UClass* SearchClass;
	unsigned char PlatformSpecificInfo[ 68 ];
};

struct APlayerController_execPathClear_Parms
{
};// FUNC_Exec

struct APlayerController_execPathChild_Parms
{
	int Cnt;
};// FUNC_Exec

struct APlayerController_execPathStep_Parms
{
	int Cnt;
};// FUNC_Exec

struct APlayerController_eventSoakPause_Parms
{
	class APawn* P;
};// FUNC_Event

struct APlayerController_execIncrementNumberOfMatchesPlayed_Parms
{
};

struct APlayerController_execCanViewUserCreatedContent_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execClientEndOnlineGame_Parms
{
};

struct APlayerController_execClientStartOnlineGame_Parms
{
};

struct APlayerController_execServerRegisterClientStatGuid_Parms
{
	struct FString StatGuid;
};

struct APlayerController_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execClientRegisterHostStatGuid_Parms
{
	struct FString StatGuid;
};

struct APlayerController_execEnableDebugCamera_Parms
{
};

struct APlayerController_eventRemoveDebugText_Parms
{
	class AActor* SrcActor;
};// FUNC_Final FUNC_Event

struct APlayerController_eventAddDebugText_Parms
{
	struct FString DebugText;
	class AActor* SrcActor;
	float Duration;
	struct FVector Offset;
	struct FVector DesiredOffset;
	struct FColor TextColor;
	unsigned long bSkipOverwriteCheck : 1;
};// FUNC_Final FUNC_Event

struct APlayerController_execDrawDebugTextList_Parms
{
	class UCanvas* Canvas;
	float RenderDelta;
};// FUNC_Final

struct APlayerController_execOnDestroy_Parms
{
	void* Action;
};

struct APlayerController_execClientStartNetworkedVoice_Parms
{
};

struct APlayerController_execClientStopNetworkedVoice_Parms
{
};

struct APlayerController_execClientSetHostUniqueId_Parms
{
	struct FUniqueNetId InHostId;
};

struct APlayerController_execClientWriteLeaderboardStats_Parms
{
	class UClass* OnlineStatsWriteClass;
};

struct APlayerController_execClientWriteOnlinePlayerScores_Parms
{
	int LeaderboardId;
};

struct APlayerController_execClientArbitratedMatchEnded_Parms
{
};

struct APlayerController_execNotifyNotEnoughSpaceInInvite_Parms
{
};

struct APlayerController_execNotifyNotAllPlayersCanJoinInvite_Parms
{
};

struct APlayerController_execNotifyInviteFailed_Parms
{
};

struct APlayerController_execOnInviteJoinComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execOnDestroyForInviteComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execOnEndForInviteComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execClearInviteDelegates_Parms
{
};

struct APlayerController_execCanAllPlayersPlayOnline_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execInviteHasEnoughSpace_Parms
{
	void* InviteSettings;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execOnGameInviteAccepted_Parms
{
	void* GameInviteSettings;
};

struct APlayerController_execServerRegisteredForArbitration_Parms
{
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execOnArbitrationRegisterComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct APlayerController_execClientRegisterForArbitration_Parms
{
};

struct APlayerController_eventClientWasKicked_Parms
{
};// FUNC_Event

struct APlayerController_execNotifyConnectionError_Parms
{
	struct FString Message;
	struct FString Title;
};

struct APlayerController_execIsShowingSubtitles_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execSetShowSubtitles_Parms
{
	unsigned long bValue : 1;
};// FUNC_Exec FUNC_Native

struct APlayerController_eventNotifyDirectorControl_Parms
{
	unsigned long bNowControlling : 1;
};// FUNC_Event

struct APlayerController_eventServerUnmutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};// FUNC_Event

struct APlayerController_eventServerMutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};// FUNC_Event

struct APlayerController_execGameplayUnmutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};

struct APlayerController_execGameplayMutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};

struct APlayerController_eventClientUnmutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};// FUNC_Event

struct APlayerController_eventClientMutePlayer_Parms
{
	struct FUniqueNetId PlayerNetId;
};// FUNC_Event

struct APlayerController_execClientVoiceHandshakeComplete_Parms
{
};

struct APlayerController_execGetPlayerControllerFromNetId_Parms
{
	struct FUniqueNetId PlayerNetId;
	class APlayerController* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execClientSetOnlineStatus_Parms
{
};

struct APlayerController_execSeamlessTravelFrom_Parms
{
	class APlayerController* OldPC;
};

struct APlayerController_execSeamlessTravelTo_Parms
{
	class APlayerController* NewPC;
};

struct APlayerController_eventGetSeamlessTravelActorList_Parms
{
	unsigned long bToEntry : 1;
	TArray< class AActor* > ActorList; // CPF_OutParm
};// FUNC_Event

struct APlayerController_execIsPlayerMuted_Parms
{
	struct FUniqueNetId Sender; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execGetUIController_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execSaveActorConfig_Parms
{
	struct FName actorName;
};// FUNC_Exec

struct APlayerController_execSaveClassConfig_Parms
{
	struct FString ClassName;
};// FUNC_Exec

struct APlayerController_eventClientSetBlockOnAsyncLoading_Parms
{
};// FUNC_Event

struct APlayerController_eventClientFlushLevelStreaming_Parms
{
};// FUNC_Final FUNC_Event FUNC_Native

struct APlayerController_eventClientCancelPendingMapChange_Parms
{
};// FUNC_Event

struct APlayerController_eventClientCommitMapChange_Parms
{
};// FUNC_Event

struct APlayerController_execDelayedPrepareMapChange_Parms
{
};

struct APlayerController_eventClientPrepareMapChange_Parms
{
	struct FName LevelName;
	unsigned long bFirst : 1;
	unsigned long bLast : 1;
};// FUNC_Event

struct APlayerController_eventServerUpdateLevelVisibility_Parms
{
	struct FName PackageName;
	unsigned long bIsVisible : 1;
};// FUNC_Final FUNC_Event FUNC_Native

struct APlayerController_execClientUpdateLevelStreamingStatus_Parms
{
	struct FName PackageName;
	unsigned long bNewShouldBeLoaded : 1;
	unsigned long bNewShouldBeVisible : 1;
	unsigned long bNewShouldBlockOnLoad : 1;
};// FUNC_Final FUNC_Native

struct APlayerController_eventLevelStreamingStatusChanged_Parms
{
	void* LevelObject;
	unsigned long bNewShouldBeLoaded : 1;
	unsigned long bNewShouldBeVisible : 1;
	unsigned long bNewShouldBlockOnLoad : 1;
};// FUNC_Event

struct APlayerController_eventClientForceGarbageCollection_Parms
{
};// FUNC_Event

struct APlayerController_execOnConsoleCommand_Parms
{
	void* inAction;
};

struct APlayerController_execResetPlayerMovementInput_Parms
{
};

struct APlayerController_eventIsLookInputIgnored_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execIgnoreLookInput_Parms
{
	unsigned long bNewLookInput : 1;
};

struct APlayerController_eventIsMoveInputIgnored_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execIgnoreMoveInput_Parms
{
	unsigned long bNewMoveInput : 1;
};

struct APlayerController_execClientSetCinematicMode_Parms
{
	unsigned long bInCinematicMode : 1;
	unsigned long bAffectsMovement : 1;
	unsigned long bAffectsTurning : 1;
	unsigned long bAffectsHUD : 1;
};

struct APlayerController_execSetCinematicMode_Parms
{
	unsigned long bInCinematicMode : 1;
	unsigned long bHidePlayer : 1;
	unsigned long bAffectsHUD : 1;
	unsigned long bAffectsMovement : 1;
	unsigned long bAffectsTurning : 1;
	unsigned long bAffectsButtons : 1;
};

struct APlayerController_execOnToggleCinematicMode_Parms
{
	void* Action;
};

struct APlayerController_execCameraShake_Parms
{
	float Duration;
	struct FVector newRotAmplitude;
	struct FVector newRotFrequency;
	struct FVector newLocAmplitude;
	struct FVector newLocFrequency;
	float newFOVAmplitude;
	float newFOVFrequency;
};

struct APlayerController_execIsForceFeedbackAllowed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_eventClientStopForceFeedbackWaveform_Parms
{
	void* FFWaveform;
};// FUNC_Final FUNC_Event

struct APlayerController_eventClientPlayForceFeedbackWaveform_Parms
{
	void* FFWaveform;
};// FUNC_Event

struct APlayerController_eventPlayRumble_Parms
{
	void* TheAnimNotify;
};// FUNC_Event

struct APlayerController_execOnForceFeedback_Parms
{
	void* Action;
};

struct APlayerController_execNotifyTakeHit_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	int Damage;
	class UClass* DamageType;
	struct FVector Momentum;
};

struct APlayerController_execShowGameState_Parms
{
};// FUNC_Exec

struct APlayerController_execShowPlayerState_Parms
{
};// FUNC_Exec

struct APlayerController_execListCE_Parms
{
};// FUNC_Exec

struct APlayerController_execListConsoleEvents_Parms
{
};// FUNC_Exec

struct APlayerController_execCE_Parms
{
	struct FName EventName;
};// FUNC_Exec

struct APlayerController_execCauseEvent_Parms
{
	struct FName EventName;
};// FUNC_Exec

struct APlayerController_execServerCauseEvent_Parms
{
	struct FName EventName;
};

struct APlayerController_execOnToggleHUD_Parms
{
	void* inAction;
};

struct APlayerController_execOnSetCameraTarget_Parms
{
	void* inAction;
};

struct APlayerController_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct APlayerController_execClientIgnoreLookInput_Parms
{
	unsigned long bIgnore : 1;
};

struct APlayerController_execClientIgnoreMoveInput_Parms
{
	unsigned long bIgnore : 1;
};

struct APlayerController_execOnToggleInput_Parms
{
	void* inAction;
};

struct APlayerController_execDrawHUD_Parms
{
	class AHUD* H;
};

struct APlayerController_execCanRestartPlayer_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execServerViewSelf_Parms
{
	struct FViewTargetTransitionParams TransitionParams;
};

struct APlayerController_execViewAPlayer_Parms
{
	int Dir;
};

struct APlayerController_execServerViewPrevPlayer_Parms
{
};

struct APlayerController_execServerViewNextPlayer_Parms
{
};

struct APlayerController_execServerSetSpectatorLocation_Parms
{
	struct FVector NewLoc;
};

struct APlayerController_execIsSpectating_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execCheckJumpOrDuck_Parms
{
};

struct APlayerController_execClearDoubleClick_Parms
{
};

struct APlayerController_eventLimitViewRotation_Parms
{
	struct FRotator ViewRotation;
	float ViewPitchMin;
	float ViewPitchMax;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execProcessViewRotation_Parms
{
	float DeltaTime;
	struct FRotator out_ViewRotation; // CPF_OutParm
	struct FRotator DeltaRot;
};

struct APlayerController_execUpdateRotation_Parms
{
	float DeltaTime;
};

struct APlayerController_execViewShake_Parms
{
	float DeltaTime;
};

struct APlayerController_eventGetPlayerViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct APlayerController_eventSpawnPlayerCamera_Parms
{
};// FUNC_Event

struct APlayerController_execServerVerifyViewTarget_Parms
{
};

struct APlayerController_execGetViewTarget_Parms
{
	class AActor* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_eventClientSetViewTarget_Parms
{
	class AActor* A;
	struct FViewTargetTransitionParams TransitionParams;
};// FUNC_Event

struct APlayerController_execSetViewTarget_Parms
{
	class AActor* NewViewTarget;
	struct FViewTargetTransitionParams TransitionParams;
};// FUNC_Native

struct APlayerController_execIsLocalPlayerController_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_eventGetFOVAngle_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execAdjustFOV_Parms
{
	float DeltaTime;
};

struct APlayerController_eventNotifyLanded_Parms
{
	struct FVector HitNormal;
	class AActor* FloorActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct APlayerController_execAimHelpDot_Parms
{
	unsigned long bInstantHit : 1;
	float ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execGetAdjustedAimFor_Parms
{
	class AWeapon* W;
	struct FVector StartFireLoc;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct APlayerController_eventCameraLookAtFinished_Parms
{
	void* Action;
};// FUNC_Event

struct APlayerController_execAimingHelp_Parms
{
	unsigned long bInstantHit : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execPlayerMove_Parms
{
	float DeltaTime;
};

struct APlayerController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct APlayerController_execNotifyChangedWeapon_Parms
{
	class AWeapon* PreviousWeapon;
	class AWeapon* NewWeapon;
};

struct APlayerController_execClientGameEnded_Parms
{
	class AActor* EndGameFocus;
	unsigned long bIsWinner : 1;
};

struct APlayerController_execGameHasEnded_Parms
{
	class AActor* EndGameFocus;
	unsigned long bIsWinner : 1;
};

struct APlayerController_execClientRestart_Parms
{
	class APawn* NewPawn;
};

struct APlayerController_execEnterStartState_Parms
{
};

struct APlayerController_execHasClientLoadedCurrentWorld_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_eventNotifyLoadedWorld_Parms
{
	struct FName WorldPackageName;
	unsigned long bFinalDest : 1;
};// FUNC_Event

struct APlayerController_eventServerNotifyLoadedWorld_Parms
{
	struct FName WorldPackageName;
};// FUNC_Final FUNC_Event FUNC_Native

struct APlayerController_execRestart_Parms
{
	unsigned long bVehicleTransition : 1;
};

struct APlayerController_execClientSetProgressTime_Parms
{
	float T;
};

struct APlayerController_execSetProgressTime_Parms
{
	float T;
};// FUNC_Exec FUNC_Event

struct APlayerController_execClientSetProgressMessage_Parms
{
	unsigned char MessageType;
	struct FString Message;
	struct FString Title;
	unsigned long bIgnoreFutureNetworkMessages : 1;
};

struct APlayerController_execSetProgressMessage_Parms
{
	unsigned char MessageType;
	struct FString Message;
	struct FString Title;
};// FUNC_Exec FUNC_Event

struct APlayerController_execClientClearProgressMessages_Parms
{
};

struct APlayerController_execClearProgressMessages_Parms
{
};// FUNC_Exec

struct APlayerController_execSwitchLevel_Parms
{
	struct FString URL;
};// FUNC_Exec

struct APlayerController_execServerChangeTeam_Parms
{
	int N;
};

struct APlayerController_execChangeTeam_Parms
{
	struct FString TeamName;
};// FUNC_Exec

struct APlayerController_execSwitchTeam_Parms
{
};// FUNC_Exec

struct APlayerController_execServerChangeName_Parms
{
	struct FString S;
};

struct APlayerController_execSetName_Parms
{
	struct FString S;
};// FUNC_Exec

struct APlayerController_execServerSuicide_Parms
{
};

struct APlayerController_execSuicide_Parms
{
};// FUNC_Exec

struct APlayerController_execTriggerInteracted_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execFindVehicleToDrive_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execPerformedUseAction_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execServerUse_Parms
{
};

struct APlayerController_execUse_Parms
{
};// FUNC_Exec

struct APlayerController_execGetTriggerUseList_Parms
{
	float interactDistanceToCheck;
	float crosshairDist;
	float minDot;
	unsigned long bUsuableOnly : 1;
	TArray< class ATrigger* > out_useList; // CPF_OutParm
};

struct APlayerController_execStopAltFire_Parms
{
	unsigned char FireModeNum;
};// FUNC_Exec

struct APlayerController_execStartAltFire_Parms
{
	unsigned char FireModeNum;
};// FUNC_Exec

struct APlayerController_execStopFire_Parms
{
	unsigned char FireModeNum;
};// FUNC_Exec

struct APlayerController_execStartFire_Parms
{
	unsigned char FireModeNum;
};// FUNC_Exec

struct APlayerController_execNextWeapon_Parms
{
};// FUNC_Exec

struct APlayerController_execPrevWeapon_Parms
{
};// FUNC_Exec

struct APlayerController_execServerThrowWeapon_Parms
{
};

struct APlayerController_execThrowWeapon_Parms
{
};// FUNC_Exec

struct APlayerController_execUTrace_Parms
{
};// FUNC_Exec

struct APlayerController_execServerUTrace_Parms
{
};

struct APlayerController_eventConditionalPause_Parms
{
	unsigned long bDesiredPauseState : 1;
};// FUNC_Event

struct APlayerController_execShowMenu_Parms
{
};// FUNC_Exec

struct APlayerController_execServerPause_Parms
{
};

struct APlayerController_execPause_Parms
{
};// FUNC_Exec

struct APlayerController_execIsPaused_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execDebugPause_Parms
{
};// FUNC_Exec

struct APlayerController_execSetPause_Parms
{
	unsigned long bPause : 1;
	struct FScriptDelegate CanUnpauseDelegate;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execCanUnpause_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execPauseRumbleForAllPlayers_Parms
{
	unsigned long bShouldPauseRumble : 1;
};

struct APlayerController_execQuickLoad_Parms
{
};// FUNC_Exec

struct APlayerController_execQuickSave_Parms
{
};// FUNC_Exec

struct APlayerController_execLocalTravel_Parms
{
	struct FString URL;
};// FUNC_Exec

struct APlayerController_execRestartLevel_Parms
{
};// FUNC_Exec

struct APlayerController_execServerSpeech_Parms
{
	struct FName Type;
	int Index;
	struct FString Callsign;
};

struct APlayerController_execSpeech_Parms
{
	struct FName Type;
	int Index;
	struct FString Callsign;
};// FUNC_Exec

struct APlayerController_execServerRestartGame_Parms
{
};

struct APlayerController_execHandleWalking_Parms
{
};

struct APlayerController_execCallServerMove_Parms
{
	void* NewMove;
	struct FVector ClientLoc;
	unsigned char ClientRoll;
	int View;
	void* OldMove;
};

struct APlayerController_execReplicateMove_Parms
{
	float DeltaTime;
	struct FVector newAccel;
	unsigned char DoubleClickMove;
	struct FRotator DeltaRot;
};

struct APlayerController_execCompressAccel_Parms
{
	int C;
	int ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execGetFreeMove_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execClientUpdatePosition_Parms
{
};

struct APlayerController_execClearAckedMoves_Parms
{
};

struct APlayerController_execServerUpdatePing_Parms
{
	int NewPing;
};

struct APlayerController_execUpdateStateFromAdjustment_Parms
{
	struct FName NewState;
};

struct APlayerController_execLongClientAdjustPosition_Parms
{
	float TimeStamp;
	struct FName NewState;
	unsigned char newPhysics;
	float NewLocX;
	float NewLocY;
	float NewLocZ;
	float NewVelX;
	float NewVelY;
	float NewVelZ;
	class AActor* NewBase;
	float NewFloorX;
	float NewFloorY;
	float NewFloorZ;
};

struct APlayerController_execUpdatePing_Parms
{
	float TimeStamp;
};// FUNC_Final

struct APlayerController_execServerSetNetSpeed_Parms
{
	int NewSpeed;
};

struct APlayerController_execClientAdjustPosition_Parms
{
	float TimeStamp;
	struct FName NewState;
	unsigned char newPhysics;
	float NewLocX;
	float NewLocY;
	float NewLocZ;
	float NewVelX;
	float NewVelY;
	float NewVelZ;
	class AActor* NewBase;
};

struct APlayerController_execClientAckGoodMove_Parms
{
	float TimeStamp;
};

struct APlayerController_execClientCapBandwidth_Parms
{
	int Cap;
};

struct APlayerController_execShortClientAdjustPosition_Parms
{
	float TimeStamp;
	struct FName NewState;
	unsigned char newPhysics;
	float NewLocX;
	float NewLocY;
	float NewLocZ;
	class AActor* NewBase;
};

struct APlayerController_execVeryShortClientAdjustPosition_Parms
{
	float TimeStamp;
	float NewLocX;
	float NewLocY;
	float NewLocZ;
	class AActor* NewBase;
};

struct APlayerController_execMoveAutonomous_Parms
{
	float DeltaTime;
	int CompressedFlags;
	struct FVector newAccel;
	struct FRotator DeltaRot;
};

struct APlayerController_execProcessMove_Parms
{
	float DeltaTime;
	struct FVector newAccel;
	unsigned char DoubleClickMove;
	struct FRotator DeltaRot;
};

struct APlayerController_execProcessDrive_Parms
{
	float InForward;
	float InStrafe;
	float InUp;
	unsigned long InJump : 1;
};

struct APlayerController_execServerDrive_Parms
{
	float InForward;
	float InStrafe;
	float aUp;
	unsigned long InJump : 1;
	int View;
};

struct APlayerController_eventSendClientAdjustment_Parms
{
};// FUNC_Event

struct APlayerController_execServerMove_Parms
{
	float TimeStamp;
	struct FVector InAccel;
	struct FVector ClientLoc;
	int MoveFlags;
	unsigned char ClientRoll;
	int View;
};

struct APlayerController_execOldServerMove_Parms
{
	float OldTimeStamp;
	unsigned char OldAccelX;
	unsigned char OldAccelY;
	unsigned char OldAccelZ;
	int OldMoveFlags;
};

struct APlayerController_execDualServerMove_Parms
{
	float TimeStamp0;
	struct FVector InAccel0;
	int PendingFlags;
	int View0;
	float TimeStamp;
	struct FVector InAccel;
	struct FVector ClientLoc;
	int NewFlags;
	unsigned char ClientRoll;
	int View;
};

struct APlayerController_execForceDeathUpdate_Parms
{
};

struct APlayerController_execClientVoiceMessage_Parms
{
	class APlayerReplicationInfo* Sender;
	class APlayerReplicationInfo* Recipient;
	struct FName MessageType;
	unsigned char messageID;
};

struct APlayerController_execUsingFirstPersonCamera_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_eventClientSetCameraFade_Parms
{
	unsigned long bEnableFading : 1;
	struct FColor FadeColor;
	struct FVector2D FadeAlpha;
	float FadeTime;
};// FUNC_Event

struct APlayerController_eventResetCameraMode_Parms
{
};// FUNC_Event

struct APlayerController_execSetCameraMode_Parms
{
	struct FName NewCamMode;
};

struct APlayerController_execClientSetCameraMode_Parms
{
	struct FName NewCamMode;
};

struct APlayerController_execServerCamera_Parms
{
	struct FName NewMode;
};

struct APlayerController_execCamera_Parms
{
	struct FName NewMode;
};// FUNC_Exec

struct APlayerController_eventPreClientTravel_Parms
{
	struct FString PendingURL;
	unsigned char TravelType;
	unsigned long bIsSeamlessTravel : 1;
};// FUNC_Event

struct APlayerController_execServerTeamSay_Parms
{
	struct FString msg;
};

struct APlayerController_execTeamSay_Parms
{
	struct FString msg;
};// FUNC_Exec

struct APlayerController_execServerSay_Parms
{
	struct FString msg;
};

struct APlayerController_execSay_Parms
{
	struct FString msg;
};// FUNC_Exec

struct APlayerController_execAllowTextMessage_Parms
{
	struct FString msg;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execServerMutate_Parms
{
	struct FString MutateString;
};

struct APlayerController_execMutate_Parms
{
	struct FString MutateString;
};// FUNC_Exec

struct APlayerController_execFOV_Parms
{
	float F;
};// FUNC_Exec

struct APlayerController_execResetFOV_Parms
{
};

struct APlayerController_execSetFOV_Parms
{
	float NewFOV;
};

struct APlayerController_execFixFOV_Parms
{
};

struct APlayerController_eventDestroyed_Parms
{
};// FUNC_Event

struct APlayerController_eventClearOnlineDelegates_Parms
{
};// FUNC_Event

struct APlayerController_execRegisterOnlineDelegates_Parms
{
};

struct APlayerController_execPlayBeepSound_Parms
{
};

struct APlayerController_eventTeamMessage_Parms
{
	class APlayerReplicationInfo* PRI;
	struct FString S;
	struct FName Type;
	float MsgLifeTime;
};// FUNC_Event

struct APlayerController_execSpeakTTS_Parms
{
	struct FString S;
	class APlayerReplicationInfo* PRI;
};

struct APlayerController_execTeamTalk_Parms
{
};// FUNC_Exec

struct APlayerController_execTalk_Parms
{
};// FUNC_Exec

struct APlayerController_execCreateTTSSoundCue_Parms
{
	struct FString StrToSpeak;
	class APlayerReplicationInfo* PRI;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execAllowTTSMessageFrom_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execCanCommunicate_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_eventClientMessage_Parms
{
	struct FString S;
	struct FName Type;
	float MsgLifeTime;
};// FUNC_Event

struct APlayerController_execClientPlayActorFaceFXAnim_Parms
{
	class AActor* SourceActor;
	void* AnimSet;
	struct FString GroupName;
	struct FString SeqName;
	void* SoundCueToPlay;
};

struct APlayerController_eventKismet_ClientStopSound_Parms
{
	void* ASound;
	class AActor* SourceActor;
	float FadeOutTime;
};// FUNC_Event

struct APlayerController_eventKismet_ClientPlaySound_Parms
{
	void* ASound;
	class AActor* SourceActor;
	float VolumeMultiplier;
	float PitchMultiplier;
	float FadeInTime;
	unsigned long bSuppressSubtitles : 1;
	unsigned long bSuppressSpatialization : 1;
};// FUNC_Event

struct APlayerController_execIsClosestLocalPlayerToActor_Parms
{
	class AActor* TheActor;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_eventClientHearSound_Parms
{
	void* ASound;
	class AActor* SourceActor;
	struct FVector SourceLocation;
	unsigned long bStopWhenOwnerDestroyed : 1;
	unsigned long bIsOccluded : 1;
};// FUNC_Event

struct APlayerController_execGetPooledAudioComponent_Parms
{
	void* ASound;
	class AActor* SourceActor;
	unsigned long bStopWhenOwnerDestroyed : 1;
	unsigned long bUseLocation : 1;
	struct FVector SourceLocation;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execHearSoundFinished_Parms
{
	void* AC;
};

struct APlayerController_eventClientPlaySound_Parms
{
	void* ASound;
};// FUNC_Event

struct APlayerController_eventReceiveLocalizedMessage_Parms
{
	class UClass* Message;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};// FUNC_Event

struct APlayerController_execCleanupPRI_Parms
{
};

struct APlayerController_execHandlePickup_Parms
{
	class AInventory* Inv;
};

struct APlayerController_execClientSetHUD_Parms
{
	class UClass* newHUDType;
	class UClass* newScoringType;
};

struct APlayerController_execPawnDied_Parms
{
	class APawn* P;
};

struct APlayerController_eventUnPossess_Parms
{
};// FUNC_Event

struct APlayerController_execServerAcknowledgePossession_Parms
{
	class APawn* P;
};

struct APlayerController_execAcknowledgePossession_Parms
{
	class APawn* P;
};

struct APlayerController_eventPossess_Parms
{
	class APawn* aPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct APlayerController_execGivePawn_Parms
{
	class APawn* NewPawn;
};

struct APlayerController_execAskForPawn_Parms
{
};

struct APlayerController_execClientGotoState_Parms
{
	struct FName NewState;
	struct FName NewLabel;
};

struct APlayerController_execIsMouseAvailable_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execIsKeyboardAvailable_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execSetUseTiltForwardAndBack_Parms
{
	unsigned long bActive : 1;
};// FUNC_Native

struct APlayerController_execSetOnlyUseControllerTiltInput_Parms
{
	unsigned long bActive : 1;
};// FUNC_Native

struct APlayerController_execSetControllerTiltActive_Parms
{
	unsigned long bActive : 1;
};// FUNC_Native

struct APlayerController_execSetControllerTiltDesiredIfAvailable_Parms
{
	unsigned long bActive : 1;
};// FUNC_Native

struct APlayerController_execIsControllerTiltActive_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execGetRumbleScale_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execSetRumbleScale_Parms
{
	float ScaleBy;
};// FUNC_Final

struct APlayerController_execReloadProfileSettings_Parms
{
};

struct APlayerController_execSetPlayerDataProvider_Parms
{
	void* DataProvider;
};

struct APlayerController_execUnregisterStandardPlayerDataStores_Parms
{
};

struct APlayerController_execUnregisterPlayerDataStores_Parms
{
};

struct APlayerController_execRegisterStandardPlayerDataStores_Parms
{
};

struct APlayerController_execRegisterCustomPlayerDataStores_Parms
{
};

struct APlayerController_execRegisterPlayerDataStores_Parms
{
};// FUNC_Final

struct APlayerController_execClientInitializeDataStores_Parms
{
};

struct APlayerController_execServerSetPlayerSkill_Parms
{
	int PlayerSkill;
};

struct APlayerController_execServerSetUniquePlayerId_Parms
{
	struct FUniqueNetId UniqueId;
	unsigned long bWasInvited : 1;
};

struct APlayerController_eventInitUniquePlayerId_Parms
{
};// FUNC_Event

struct APlayerController_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct APlayerController_eventInitInputSystem_Parms
{
};// FUNC_Event

struct APlayerController_execGetOnlineSubsystem_Parms
{
	class UOnlineSubsystem* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct APlayerController_execPostControllerIdChange_Parms
{
};

struct APlayerController_execPreControllerIdChange_Parms
{
};

struct APlayerController_execCleanOutSavedMoves_Parms
{
};

struct APlayerController_execClientReset_Parms
{
};

struct APlayerController_execReset_Parms
{
};

struct APlayerController_execSpawnDefaultHUD_Parms
{
};

struct APlayerController_execEnableCheats_Parms
{
};// FUNC_Exec

struct APlayerController_execAddCheats_Parms
{
};

struct APlayerController_eventKickWarning_Parms
{
};// FUNC_Event

struct APlayerController_execServerGivePawn_Parms
{
};

struct APlayerController_execServerShortTimeout_Parms
{
};

struct APlayerController_execResetTimeMargin_Parms
{
};

struct APlayerController_eventPreRender_Parms
{
	class UCanvas* Canvas;
};// FUNC_Event

struct APlayerController_eventReceivedPlayer_Parms
{
};// FUNC_Event

struct APlayerController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct APlayerController_execSpawnCoverReplicator_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct APlayerController_execCanUnpauseControllerConnected_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execOnControllerChanged_Parms
{
	int ControllerId;
	unsigned long bIsConnected : 1;
};

struct APlayerController_execCanUnpauseExternalUI_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerController_execOnExternalUIChanged_Parms
{
	unsigned long bIsOpening : 1;
};

struct APlayerController_execForceClearUnpauseDelegates_Parms
{
};

struct APlayerController_eventFellOutOfWorld_Parms
{
	class UClass* dmgType;
};// FUNC_Event

struct APlayerController_execCleanUpAudioComponents_Parms
{
};// FUNC_Native

struct APlayerController_execFindStairRotation_Parms
{
	float DeltaTime;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x020C]

struct APlayerController_execCheckSpeedHack_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_eventServerProcessConvolve_Parms
{
	struct FString C;
	int H;
};// FUNC_Final FUNC_Event FUNC_Native

struct APlayerController_eventClientConvolve_Parms
{
	struct FString C;
	int H;
};// FUNC_Final FUNC_Event FUNC_Native

struct APlayerController_execSetAudioGroupVolume_Parms
{
	struct FName GroupName;
	float Volume;
};// FUNC_Exec FUNC_Native

struct APlayerController_execSetAllowMatureLanguage_Parms
{
	unsigned long bAllowMatureLanguge : 1;
};// FUNC_Native

struct APlayerController_execPasteFromClipboard_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execCopyToClipboard_Parms
{
	struct FString Text;
};// FUNC_Native

struct APlayerController_execGetDefaultURL_Parms
{
	struct FString Option;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execUpdateURL_Parms
{
	struct FString NewOption;
	struct FString NewValue;
	unsigned long bSave1Default : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x0222]

struct APlayerController_eventClientTravel_Parms
{
	struct FString URL;
	unsigned char TravelType;
	unsigned long bSeamless : 1;
	struct FGuid MapPackageGuid;
};// FUNC_Event FUNC_Native

struct APlayerController_execConsoleCommand_Parms
{
	struct FString Command;
	unsigned long bWriteToLog : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerController_execGetServerNetworkAddress_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execGetPlayerNetworkAddress_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct APlayerController_execSetNetSpeed_Parms
{
	int NewSpeed;
};// FUNC_Final FUNC_Native

struct APlayerController_execClientDrawCoordinateSystem_Parms
{
	struct FVector AxisLoc;
	struct FRotator AxisRot;
	float Scale;
	unsigned long bPersistentLines : 1;
};

// (0x344 - 0x5B4)
class APlayerController : public AController
{
public:
	void*                                              Player;                                      // 0x0344 (0x0004)
	class ACamera*                                     PlayerCamera;                                // 0x0348 (0x0004)
	class UClass*                                      CameraClass;                                 // 0x034C (0x0004)
	class ADebugCameraController*                      DebugCameraControllerRef;                    // 0x0350 (0x0004)
	class UClass*                                      DebugCameraControllerClass;                  // 0x0354 (0x0004)
	class UClass*                                      PlayerOwnerDataStoreClass;                   // 0x0358 (0x0004)
	void*                                              CurrentPlayerData;                           // 0x035C (0x0004)
	unsigned long                                      bFrozen : 1;                                 // 0x0360 (0x0004) [0x00000001]
	unsigned long                                      bPressedJump : 1;                            // 0x0360 (0x0004) [0x00000002]
	unsigned long                                      bDoubleJump : 1;                             // 0x0360 (0x0004) [0x00000004]
	unsigned long                                      bUpdatePosition : 1;                         // 0x0360 (0x0004) [0x00000008]
	unsigned long                                      bUpdating : 1;                               // 0x0360 (0x0004) [0x00000010]
	unsigned long                                      bNeverSwitchOnPickup : 1;                    // 0x0360 (0x0004) [0x00000020]
	unsigned long                                      bCheatFlying : 1;                            // 0x0360 (0x0004) [0x00000040]
	unsigned long                                      bCameraPositionLocked : 1;                   // 0x0360 (0x0004) [0x00000080]
	unsigned long                                      bNoTextToSpeechVoiceMessages : 1;            // 0x0360 (0x0004) [0x00000100]
	unsigned long                                      bTextToSpeechTeamMessagesOnly : 1;           // 0x0360 (0x0004) [0x00000200]
	unsigned long                                      bShortConnectTimeOut : 1;                    // 0x0360 (0x0004) [0x00000400]
	unsigned long                                      bPendingDestroy : 1;                         // 0x0360 (0x0004) [0x00000800]
	unsigned long                                      bWasSpeedHack : 1;                           // 0x0360 (0x0004) [0x00001000]
	unsigned long                                      bWasSaturated : 1;                           // 0x0360 (0x0004) [0x00002000]
	unsigned long                                      bDynamicNetSpeed : 1;                        // 0x0360 (0x0004) [0x00004000]
	unsigned long                                      bAimingHelp : 1;                             // 0x0360 (0x0004) [0x00008000]
	unsigned long                                      bClientSimulatingViewTarget : 1;             // 0x0360 (0x0004) [0x00010000]
	unsigned long                                      bHasVoiceHandshakeCompleted : 1;             // 0x0360 (0x0004) [0x00020000]
	unsigned long                                      bCinematicMode : 1;                          // 0x0360 (0x0004) [0x00040000]
	unsigned long                                      bCinemaDisableInputMove : 1;                 // 0x0360 (0x0004) [0x00080000]
	unsigned long                                      bCinemaDisableInputLook : 1;                 // 0x0360 (0x0004) [0x00100000]
	unsigned long                                      bIgnoreNetworkMessages : 1;                  // 0x0360 (0x0004) [0x00200000]
	unsigned long                                      bReplicateAllPawns : 1;                      // 0x0360 (0x0004) [0x00400000]
	unsigned long                                      bIsUsingStreamingVolumes : 1;                // 0x0360 (0x0004) [0x00800000]
	unsigned long                                      bIsExternalUIOpen : 1;                       // 0x0360 (0x0004) [0x01000000]
	unsigned long                                      bIsControllerConnected : 1;                  // 0x0360 (0x0004) [0x02000000]
	unsigned long                                      bCheckSoundOcclusion : 1;                    // 0x0360 (0x0004) [0x04000000]
	unsigned long                                      bLogHearSoundOverflow : 1;                   // 0x0360 (0x0004) [0x08000000]
	unsigned long                                      bCheckRelevancyThroughPortals : 1;           // 0x0360 (0x0004) [0x10000000]
	unsigned long                                      bReceivedUniqueId : 1;                       // 0x0360 (0x0004) [0x20000000]
	float                                              MaxResponseTime;                             // 0x0364 (0x0004)
	float                                              WaitDelay;                                   // 0x0368 (0x0004)
	class APawn*                                       AcknowledgedPawn;                            // 0x036C (0x0004)
	unsigned char                                      DoubleClickDir;                              // 0x0370 (0x0001)
	unsigned char                                      bIgnoreMoveInput;                            // 0x0371 (0x0001)
	unsigned char                                      bIgnoreLookInput;                            // 0x0372 (0x0001)
	unsigned char                                      bRun;                                        // 0x0373 (0x0001)
	unsigned char                                      bDuck;                                       // 0x0374 (0x0001)
	unsigned char                                      NetPlayerIndex;                              // 0x0375 (0x0001)
	class AActor*                                      ViewTarget;                                  // 0x0378 (0x0004)
	class APlayerReplicationInfo*                      RealViewTarget;                              // 0x037C (0x0004)
	void*                                              ControllingDirTrackInst;                     // 0x0380 (0x0004)
	float                                              FOVAngle;                                    // 0x0384 (0x0004)
	float                                              DesiredFOV;                                  // 0x0388 (0x0004)
	float                                              DefaultFOV;                                  // 0x038C (0x0004)
	float                                              LODDistanceFactor;                           // 0x0390 (0x0004)
	struct FRotator                                    TargetViewRotation;                          // 0x0394 (0x000C)
	float                                              TargetEyeHeight;                             // 0x03A0 (0x0004)
	struct FRotator                                    BlendedTargetViewRotation;                   // 0x03A4 (0x000C)
	class AHUD*                                        myHUD;                                       // 0x03B0 (0x0004)
	class UClass*                                      SavedMoveClass;                              // 0x03B4 (0x0004)
	void*                                              SavedMoves;                                  // 0x03B8 (0x0004)
	void*                                              FreeMoves;                                   // 0x03BC (0x0004)
	void*                                              PendingMove;                                 // 0x03C0 (0x0004)
	struct FVector                                     LastAckedAccel;                              // 0x03C4 (0x000C)
	float                                              CurrentTimeStamp;                            // 0x03D0 (0x0004)
	float                                              LastUpdateTime;                              // 0x03D4 (0x0004)
	float                                              ServerTimeStamp;                             // 0x03D8 (0x0004)
	float                                              TimeMargin;                                  // 0x03DC (0x0004)
	float                                              ClientUpdateTime;                            // 0x03E0 (0x0004)
	float                                              MaxTimeMargin;                               // 0x03E4 (0x0004)
	float                                              LastActiveTime;                              // 0x03E8 (0x0004)
	int                                                ClientCap;                                   // 0x03EC (0x0004)
	float                                              DynamicPingThreshold;                        // 0x03F0 (0x0004)
	float                                              LastPingUpdate;                              // 0x03F4 (0x0004)
	float                                              OldPing;                                     // 0x03F8 (0x0004)
	float                                              LastSpeedHackLog;                            // 0x03FC (0x0004)
	struct FClientAdjustment                           PendingAdjustment;                           // 0x0400 (0x0034)
	struct FString                                     ProgressMessage[ 2 ];                        // 0x0434 (0x0018)
	float                                              ProgressTimeOut;                             // 0x044C (0x0004)
	struct FString                                     QuickSaveString;                             // 0x0450 (0x000C)
	struct FString                                     NoPauseMessage;                              // 0x045C (0x000C)
	struct FString                                     ViewingFrom;                                 // 0x0468 (0x000C)
	struct FString                                     OwnCamera;                                   // 0x0474 (0x000C)
	int                                                GroundPitch;                                 // 0x0480 (0x0004)
	struct FVector                                     OldFloor;                                    // 0x0484 (0x000C)
	class UCheatManager*                               CheatManager;                                // 0x0490 (0x0004)
	class UClass*                                      CheatClass;                                  // 0x0494 (0x0004)
	class UPlayerInput*                                PlayerInput;                                 // 0x0498 (0x0004)
	class UClass*                                      InputClass;                                  // 0x049C (0x0004)
	struct FVector                                     FailedPathStart;                             // 0x04A0 (0x000C)
	void*                                              CylinderComponent;                           // 0x04AC (0x0004)
	struct FString                                     ForceFeedbackManagerClassName;               // 0x04B0 (0x000C)
	void*                                              ForceFeedbackManager;                        // 0x04BC (0x0004)
	TArray< class UInteraction* >                      Interactions;                                // 0x04C0 (0x000C)
	TArray< struct FUniqueNetId >                      VoiceMuteList;                               // 0x04CC (0x000C)
	TArray< struct FUniqueNetId >                      GameplayVoiceMuteList;                       // 0x04D8 (0x000C)
	TArray< struct FUniqueNetId >                      VoicePacketFilter;                           // 0x04E4 (0x000C)
	class UOnlineSubsystem*                            OnlineSub;                                   // 0x04F0 (0x0004)
	unsigned char                                      unknown_data06[ 8 ];                         // 0x04F4 (0x0008)
	void*                                              OnlinePlayerData;                            // 0x04FC (0x0004)
	float                                              InteractDistance;                            // 0x0500 (0x0004)
	struct FName                                       DelayedJoinSessionName;                      // 0x0504 (0x0008)
	TArray< struct FInputMatchRequest >                InputRequests;                               // 0x050C (0x000C)
	float                                              LastBroadcastTime;                           // 0x0518 (0x0004)
	struct FString                                     LastBroadcastString[ 4 ];                    // 0x051C (0x0030)
	TArray< struct FName >                             PendingMapChangeLevelNames;                  // 0x054C (0x000C)
	void*                                              MyCoverReplicator;                           // 0x0558 (0x0004)
	TArray< struct FDebugTextInfo >                    DebugTextList;                               // 0x055C (0x000C)
	float                                              SpectatorCameraSpeed;                        // 0x0568 (0x0004)
	void*                                              PendingSwapConnection;                       // 0x056C (0x0004)
	float                                              MinRespawnDelay;                             // 0x0570 (0x0004)
	int                                                MaxConcurrentHearSounds;                     // 0x0574 (0x0004)
	TArray< void* >                                    HearSoundActiveComponents;                   // 0x0578 (0x000C)
	TArray< void* >                                    HearSoundPoolComponents;                     // 0x0584 (0x000C)
	TArray< class AActor* >                            HiddenActors;                                // 0x0590 (0x000C)
	float                                              LastSpectatorStateSynchTime;                 // 0x059C (0x0004)
	int                                                RelevancyCacheID;                            // 0x05A0 (0x0004)
	int                                                MaxRelevancyCacheID;                         // 0x05A4 (0x0004)
	struct FScriptDelegate                             __CanUnpause__Delegate;                      // 0x05A8 (0x000C)

	// Dead
	// RoundEnded
	// WaitingForPawn
	// PlayerWaiting
	// Spectating
	// BaseSpectating
	// PlayerFlying
	// PlayerSwimming
	// PlayerDriving
	// PlayerClimbing
	// PlayerWalking

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.PlayerController" );

		return ClassPointer;
	};

public:
	void GoToDeadState ()
	{
		static UFunction* pfnGoToDeadState = NULL;

		if ( !pfnGoToDeadState )
			pfnGoToDeadState = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GoToDeadState" );

		APlayerController_execGoToDeadState_Parms GoToDeadState_Parms;

		this->ProcessEvent( pfnGoToDeadState, &GoToDeadState_Parms, NULL );
	};

	int eventGetTheControllerID ()
	{
		static UFunction* pfnGetTheControllerID = NULL;

		if ( !pfnGetTheControllerID )
			pfnGetTheControllerID = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetTheControllerID" );

		APlayerController_eventGetTheControllerID_Parms GetTheControllerID_Parms;

		this->ProcessEvent( pfnGetTheControllerID, &GetTheControllerID_Parms, NULL );

		return GetTheControllerID_Parms.ReturnValue;
	};

	void ClientSetRotation ( struct FRotator NewRotation, unsigned long bResetCamera/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSetRotation = NULL;

		if ( !pfnClientSetRotation )
			pfnClientSetRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetRotation" );

		APlayerController_execClientSetRotation_Parms ClientSetRotation_Parms;
		memcpy( &ClientSetRotation_Parms.NewRotation, &NewRotation, 0xC );
		ClientSetRotation_Parms.bResetCamera = bResetCamera;

		this->ProcessEvent( pfnClientSetRotation, &ClientSetRotation_Parms, NULL );
	};

	void ClientSetLocation ( struct FVector NewLocation, struct FRotator NewRotation )
	{
		static UFunction* pfnClientSetLocation = NULL;

		if ( !pfnClientSetLocation )
			pfnClientSetLocation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetLocation" );

		APlayerController_execClientSetLocation_Parms ClientSetLocation_Parms;
		memcpy( &ClientSetLocation_Parms.NewLocation, &NewLocation, 0xC );
		memcpy( &ClientSetLocation_Parms.NewRotation, &NewRotation, 0xC );

		this->ProcessEvent( pfnClientSetLocation, &ClientSetLocation_Parms, NULL );
	};

	void FacePawnRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFacePawnRotation = NULL;

		if ( !pfnFacePawnRotation )
			pfnFacePawnRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FacePawnRotation" );

		APlayerController_execFacePawnRotation_Parms FacePawnRotation_Parms;
		memcpy( &FacePawnRotation_Parms.NewRotation, &NewRotation, 0xC );
		FacePawnRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFacePawnRotation, &FacePawnRotation_Parms, NULL );
	};

	void LogOutBugItAIGoToLogFile ( struct FString InScreenShotDesc, struct FString InGoString, struct FString InLocString )
	{
		static UFunction* pfnLogOutBugItAIGoToLogFile = NULL;

		if ( !pfnLogOutBugItAIGoToLogFile )
			pfnLogOutBugItAIGoToLogFile = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LogOutBugItAIGoToLogFile" );

		APlayerController_execLogOutBugItAIGoToLogFile_Parms LogOutBugItAIGoToLogFile_Parms;
		memcpy( &LogOutBugItAIGoToLogFile_Parms.InScreenShotDesc, &InScreenShotDesc, 0xC );
		memcpy( &LogOutBugItAIGoToLogFile_Parms.InGoString, &InGoString, 0xC );
		memcpy( &LogOutBugItAIGoToLogFile_Parms.InLocString, &InLocString, 0xC );

		pfnLogOutBugItAIGoToLogFile->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLogOutBugItAIGoToLogFile, &LogOutBugItAIGoToLogFile_Parms, NULL );
		pfnLogOutBugItAIGoToLogFile->FunctionFlags |= 0x400;
	};

	void LogOutBugItGoToLogFile ( struct FString InScreenShotDesc, struct FString InGoString, struct FString InLocString )
	{
		static UFunction* pfnLogOutBugItGoToLogFile = NULL;

		if ( !pfnLogOutBugItGoToLogFile )
			pfnLogOutBugItGoToLogFile = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LogOutBugItGoToLogFile" );

		APlayerController_execLogOutBugItGoToLogFile_Parms LogOutBugItGoToLogFile_Parms;
		memcpy( &LogOutBugItGoToLogFile_Parms.InScreenShotDesc, &InScreenShotDesc, 0xC );
		memcpy( &LogOutBugItGoToLogFile_Parms.InGoString, &InGoString, 0xC );
		memcpy( &LogOutBugItGoToLogFile_Parms.InLocString, &InLocString, 0xC );

		pfnLogOutBugItGoToLogFile->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLogOutBugItGoToLogFile, &LogOutBugItGoToLogFile_Parms, NULL );
		pfnLogOutBugItGoToLogFile->FunctionFlags |= 0x400;
	};

	struct FRotator GetFRotatorFromString ( struct FString InStr )
	{
		static UFunction* pfnGetFRotatorFromString = NULL;

		if ( !pfnGetFRotatorFromString )
			pfnGetFRotatorFromString = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetFRotatorFromString" );

		APlayerController_execGetFRotatorFromString_Parms GetFRotatorFromString_Parms;
		memcpy( &GetFRotatorFromString_Parms.InStr, &InStr, 0xC );

		pfnGetFRotatorFromString->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFRotatorFromString, &GetFRotatorFromString_Parms, NULL );
		pfnGetFRotatorFromString->FunctionFlags |= 0x400;

		return GetFRotatorFromString_Parms.ReturnValue;
	};

	struct FVector GetFVectorFromString ( struct FString InStr )
	{
		static UFunction* pfnGetFVectorFromString = NULL;

		if ( !pfnGetFVectorFromString )
			pfnGetFVectorFromString = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetFVectorFromString" );

		APlayerController_execGetFVectorFromString_Parms GetFVectorFromString_Parms;
		memcpy( &GetFVectorFromString_Parms.InStr, &InStr, 0xC );

		pfnGetFVectorFromString->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFVectorFromString, &GetFVectorFromString_Parms, NULL );
		pfnGetFVectorFromString->FunctionFlags |= 0x400;

		return GetFVectorFromString_Parms.ReturnValue;
	};

	void DisableDebugAI ()
	{
		static UFunction* pfnDisableDebugAI = NULL;

		if ( !pfnDisableDebugAI )
			pfnDisableDebugAI = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DisableDebugAI" );

		APlayerController_execDisableDebugAI_Parms DisableDebugAI_Parms;

		this->ProcessEvent( pfnDisableDebugAI, &DisableDebugAI_Parms, NULL );
	};

	void BugItAI ( struct FString ScreenShotDescription/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBugItAI = NULL;

		if ( !pfnBugItAI )
			pfnBugItAI = UObject::FindObject< UFunction >( "Function Engine.PlayerController.BugItAI" );

		APlayerController_execBugItAI_Parms BugItAI_Parms;
		memcpy( &BugItAI_Parms.ScreenShotDescription, &ScreenShotDescription, 0xC );

		this->ProcessEvent( pfnBugItAI, &BugItAI_Parms, NULL );
	};

	void BugIt ( struct FString ScreenShotDescription/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBugIt = NULL;

		if ( !pfnBugIt )
			pfnBugIt = UObject::FindObject< UFunction >( "Function Engine.PlayerController.BugIt" );

		APlayerController_execBugIt_Parms BugIt_Parms;
		memcpy( &BugIt_Parms.ScreenShotDescription, &ScreenShotDescription, 0xC );

		this->ProcessEvent( pfnBugIt, &BugIt_Parms, NULL );
	};

	void BugItWorker ( struct FVector TheLocation, struct FRotator TheRotation )
	{
		static UFunction* pfnBugItWorker = NULL;

		if ( !pfnBugItWorker )
			pfnBugItWorker = UObject::FindObject< UFunction >( "Function Engine.PlayerController.BugItWorker" );

		APlayerController_execBugItWorker_Parms BugItWorker_Parms;
		memcpy( &BugItWorker_Parms.TheLocation, &TheLocation, 0xC );
		memcpy( &BugItWorker_Parms.TheRotation, &TheRotation, 0xC );

		this->ProcessEvent( pfnBugItWorker, &BugItWorker_Parms, NULL );
	};

	void NotifyExiting ()
	{
		static UFunction* pfnNotifyExiting = NULL;

		if ( !pfnNotifyExiting )
			pfnNotifyExiting = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyExiting" );

		APlayerController_execNotifyExiting_Parms NotifyExiting_Parms;

		this->ProcessEvent( pfnNotifyExiting, &NotifyExiting_Parms, NULL );
	};

	void BugItGoString ( struct FString TheLocation, struct FString TheRotation )
	{
		static UFunction* pfnBugItGoString = NULL;

		if ( !pfnBugItGoString )
			pfnBugItGoString = UObject::FindObject< UFunction >( "Function Engine.PlayerController.BugItGoString" );

		APlayerController_execBugItGoString_Parms BugItGoString_Parms;
		memcpy( &BugItGoString_Parms.TheLocation, &TheLocation, 0xC );
		memcpy( &BugItGoString_Parms.TheRotation, &TheRotation, 0xC );

		this->ProcessEvent( pfnBugItGoString, &BugItGoString_Parms, NULL );
	};

	void BugItGo ( float X, float Y, float Z, int Pitch, int Yaw, int Roll )
	{
		static UFunction* pfnBugItGo = NULL;

		if ( !pfnBugItGo )
			pfnBugItGo = UObject::FindObject< UFunction >( "Function Engine.PlayerController.BugItGo" );

		APlayerController_execBugItGo_Parms BugItGo_Parms;
		BugItGo_Parms.X = X;
		BugItGo_Parms.Y = Y;
		BugItGo_Parms.Z = Z;
		BugItGo_Parms.Pitch = Pitch;
		BugItGo_Parms.Yaw = Yaw;
		BugItGo_Parms.Roll = Roll;

		this->ProcessEvent( pfnBugItGo, &BugItGo_Parms, NULL );
	};

	void eventClientSpawnCameraLensEffect ( class UClass* LensEffectEmitterClass )
	{
		static UFunction* pfnClientSpawnCameraLensEffect = NULL;

		if ( !pfnClientSpawnCameraLensEffect )
			pfnClientSpawnCameraLensEffect = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSpawnCameraLensEffect" );

		APlayerController_eventClientSpawnCameraLensEffect_Parms ClientSpawnCameraLensEffect_Parms;
		ClientSpawnCameraLensEffect_Parms.LensEffectEmitterClass = LensEffectEmitterClass;

		this->ProcessEvent( pfnClientSpawnCameraLensEffect, &ClientSpawnCameraLensEffect_Parms, NULL );
	};

	void Sentinel_PostAcquireTravelTheWorldPoints ()
	{
		static UFunction* pfnSentinel_PostAcquireTravelTheWorldPoints = NULL;

		if ( !pfnSentinel_PostAcquireTravelTheWorldPoints )
			pfnSentinel_PostAcquireTravelTheWorldPoints = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Sentinel_PostAcquireTravelTheWorldPoints" );

		APlayerController_execSentinel_PostAcquireTravelTheWorldPoints_Parms Sentinel_PostAcquireTravelTheWorldPoints_Parms;

		this->ProcessEvent( pfnSentinel_PostAcquireTravelTheWorldPoints, &Sentinel_PostAcquireTravelTheWorldPoints_Parms, NULL );
	};

	void Sentinel_PreAcquireTravelTheWorldPoints ()
	{
		static UFunction* pfnSentinel_PreAcquireTravelTheWorldPoints = NULL;

		if ( !pfnSentinel_PreAcquireTravelTheWorldPoints )
			pfnSentinel_PreAcquireTravelTheWorldPoints = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Sentinel_PreAcquireTravelTheWorldPoints" );

		APlayerController_execSentinel_PreAcquireTravelTheWorldPoints_Parms Sentinel_PreAcquireTravelTheWorldPoints_Parms;

		this->ProcessEvent( pfnSentinel_PreAcquireTravelTheWorldPoints, &Sentinel_PreAcquireTravelTheWorldPoints_Parms, NULL );
	};

	void Sentinel_SetupForGamebasedTravelTheWorld ()
	{
		static UFunction* pfnSentinel_SetupForGamebasedTravelTheWorld = NULL;

		if ( !pfnSentinel_SetupForGamebasedTravelTheWorld )
			pfnSentinel_SetupForGamebasedTravelTheWorld = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Sentinel_SetupForGamebasedTravelTheWorld" );

		APlayerController_execSentinel_SetupForGamebasedTravelTheWorld_Parms Sentinel_SetupForGamebasedTravelTheWorld_Parms;

		this->ProcessEvent( pfnSentinel_SetupForGamebasedTravelTheWorld, &Sentinel_SetupForGamebasedTravelTheWorld_Parms, NULL );
	};

	void OnFlyThroughHasEnded ( void* inAction )
	{
		static UFunction* pfnOnFlyThroughHasEnded = NULL;

		if ( !pfnOnFlyThroughHasEnded )
			pfnOnFlyThroughHasEnded = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnFlyThroughHasEnded" );

		APlayerController_execOnFlyThroughHasEnded_Parms OnFlyThroughHasEnded_Parms;
		OnFlyThroughHasEnded_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnFlyThroughHasEnded, &OnFlyThroughHasEnded_Parms, NULL );
	};

	bool eventGetAchievementProgression ( int AchievementId, float* CurrentValue, float* MaxValue )
	{
		static UFunction* pfnGetAchievementProgression = NULL;

		if ( !pfnGetAchievementProgression )
			pfnGetAchievementProgression = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetAchievementProgression" );

		APlayerController_eventGetAchievementProgression_Parms GetAchievementProgression_Parms;
		GetAchievementProgression_Parms.AchievementId = AchievementId;

		this->ProcessEvent( pfnGetAchievementProgression, &GetAchievementProgression_Parms, NULL );

		if ( CurrentValue )
			*CurrentValue = GetAchievementProgression_Parms.CurrentValue; // CPF_OutParm
		if ( MaxValue )
			*MaxValue = GetAchievementProgression_Parms.MaxValue; // CPF_OutParm

		return GetAchievementProgression_Parms.ReturnValue;
	};

	struct FString GetPartyGameTypeName ()
	{
		static UFunction* pfnGetPartyGameTypeName = NULL;

		if ( !pfnGetPartyGameTypeName )
			pfnGetPartyGameTypeName = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPartyGameTypeName" );

		APlayerController_execGetPartyGameTypeName_Parms GetPartyGameTypeName_Parms;

		this->ProcessEvent( pfnGetPartyGameTypeName, &GetPartyGameTypeName_Parms, NULL );

		return GetPartyGameTypeName_Parms.ReturnValue;
	};

	struct FString GetPartyMapName ()
	{
		static UFunction* pfnGetPartyMapName = NULL;

		if ( !pfnGetPartyMapName )
			pfnGetPartyMapName = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPartyMapName" );

		APlayerController_execGetPartyMapName_Parms GetPartyMapName_Parms;

		this->ProcessEvent( pfnGetPartyMapName, &GetPartyMapName_Parms, NULL );

		return GetPartyMapName_Parms.ReturnValue;
	};

	bool IsPartyLeader ()
	{
		static UFunction* pfnIsPartyLeader = NULL;

		if ( !pfnIsPartyLeader )
			pfnIsPartyLeader = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsPartyLeader" );

		APlayerController_execIsPartyLeader_Parms IsPartyLeader_Parms;

		this->ProcessEvent( pfnIsPartyLeader, &IsPartyLeader_Parms, NULL );

		return IsPartyLeader_Parms.ReturnValue;
	};

	void eventClientPrestreamTextures ( class AActor* ForcedActor, float ForceDuration, unsigned long bEnableStreaming )
	{
		static UFunction* pfnClientPrestreamTextures = NULL;

		if ( !pfnClientPrestreamTextures )
			pfnClientPrestreamTextures = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientPrestreamTextures" );

		APlayerController_eventClientPrestreamTextures_Parms ClientPrestreamTextures_Parms;
		ClientPrestreamTextures_Parms.ForcedActor = ForcedActor;
		ClientPrestreamTextures_Parms.ForceDuration = ForceDuration;
		ClientPrestreamTextures_Parms.bEnableStreaming = bEnableStreaming;

		this->ProcessEvent( pfnClientPrestreamTextures, &ClientPrestreamTextures_Parms, NULL );
	};

	void eventClientSetForceMipLevelsToBeResident ( class UMaterialInterface* Material, float ForceDuration )
	{
		static UFunction* pfnClientSetForceMipLevelsToBeResident = NULL;

		if ( !pfnClientSetForceMipLevelsToBeResident )
			pfnClientSetForceMipLevelsToBeResident = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident" );

		APlayerController_eventClientSetForceMipLevelsToBeResident_Parms ClientSetForceMipLevelsToBeResident_Parms;
		ClientSetForceMipLevelsToBeResident_Parms.Material = Material;
		ClientSetForceMipLevelsToBeResident_Parms.ForceDuration = ForceDuration;

		this->ProcessEvent( pfnClientSetForceMipLevelsToBeResident, &ClientSetForceMipLevelsToBeResident_Parms, NULL );
	};

	void ClientControlMovieTexture ( void* MovieTexture, unsigned char Mode )
	{
		static UFunction* pfnClientControlMovieTexture = NULL;

		if ( !pfnClientControlMovieTexture )
			pfnClientControlMovieTexture = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientControlMovieTexture" );

		APlayerController_execClientControlMovieTexture_Parms ClientControlMovieTexture_Parms;
		ClientControlMovieTexture_Parms.MovieTexture = MovieTexture;
		ClientControlMovieTexture_Parms.Mode = Mode;

		this->ProcessEvent( pfnClientControlMovieTexture, &ClientControlMovieTexture_Parms, NULL );
	};

	int GetSplitscreenPlayerCount ()
	{
		static UFunction* pfnGetSplitscreenPlayerCount = NULL;

		if ( !pfnGetSplitscreenPlayerCount )
			pfnGetSplitscreenPlayerCount = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetSplitscreenPlayerCount" );

		APlayerController_execGetSplitscreenPlayerCount_Parms GetSplitscreenPlayerCount_Parms;

		this->ProcessEvent( pfnGetSplitscreenPlayerCount, &GetSplitscreenPlayerCount_Parms, NULL );

		return GetSplitscreenPlayerCount_Parms.ReturnValue;
	};

	class APlayerReplicationInfo* GetSplitscreenPlayerByIndex ( int PlayerIndex/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetSplitscreenPlayerByIndex = NULL;

		if ( !pfnGetSplitscreenPlayerByIndex )
			pfnGetSplitscreenPlayerByIndex = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetSplitscreenPlayerByIndex" );

		APlayerController_execGetSplitscreenPlayerByIndex_Parms GetSplitscreenPlayerByIndex_Parms;
		GetSplitscreenPlayerByIndex_Parms.PlayerIndex = PlayerIndex;

		this->ProcessEvent( pfnGetSplitscreenPlayerByIndex, &GetSplitscreenPlayerByIndex_Parms, NULL );

		return GetSplitscreenPlayerByIndex_Parms.ReturnValue;
	};

	bool HasSplitscreenPlayer ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnHasSplitscreenPlayer = NULL;

		if ( !pfnHasSplitscreenPlayer )
			pfnHasSplitscreenPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.HasSplitscreenPlayer" );

		APlayerController_execHasSplitscreenPlayer_Parms HasSplitscreenPlayer_Parms;
		HasSplitscreenPlayer_Parms.PRI = PRI;

		this->ProcessEvent( pfnHasSplitscreenPlayer, &HasSplitscreenPlayer_Parms, NULL );

		return HasSplitscreenPlayer_Parms.ReturnValue;
	};

	bool IsSplitscreenPlayer ( int* out_SplitscreenPlayerIndex )
	{
		static UFunction* pfnIsSplitscreenPlayer = NULL;

		if ( !pfnIsSplitscreenPlayer )
			pfnIsSplitscreenPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsSplitscreenPlayer" );

		APlayerController_execIsSplitscreenPlayer_Parms IsSplitscreenPlayer_Parms;

		this->ProcessEvent( pfnIsSplitscreenPlayer, &IsSplitscreenPlayer_Parms, NULL );

		if ( out_SplitscreenPlayerIndex )
			*out_SplitscreenPlayerIndex = IsSplitscreenPlayer_Parms.out_SplitscreenPlayerIndex; // CPF_OutParm

		return IsSplitscreenPlayer_Parms.ReturnValue;
	};

	bool IsPrimaryPlayer ()
	{
		static UFunction* pfnIsPrimaryPlayer = NULL;

		if ( !pfnIsPrimaryPlayer )
			pfnIsPrimaryPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsPrimaryPlayer" );

		APlayerController_execIsPrimaryPlayer_Parms IsPrimaryPlayer_Parms;

		this->ProcessEvent( pfnIsPrimaryPlayer, &IsPrimaryPlayer_Parms, NULL );

		return IsPrimaryPlayer_Parms.ReturnValue;
	};

	void ClientReturnToParty ()
	{
		static UFunction* pfnClientReturnToParty = NULL;

		if ( !pfnClientReturnToParty )
			pfnClientReturnToParty = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientReturnToParty" );

		APlayerController_execClientReturnToParty_Parms ClientReturnToParty_Parms;

		this->ProcessEvent( pfnClientReturnToParty, &ClientReturnToParty_Parms, NULL );
	};

	void OnJoinTravelToSessionComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnJoinTravelToSessionComplete = NULL;

		if ( !pfnOnJoinTravelToSessionComplete )
			pfnOnJoinTravelToSessionComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnJoinTravelToSessionComplete" );

		APlayerController_execOnJoinTravelToSessionComplete_Parms OnJoinTravelToSessionComplete_Parms;
		memcpy( &OnJoinTravelToSessionComplete_Parms.SessionName, &SessionName, 0x8 );
		OnJoinTravelToSessionComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnJoinTravelToSessionComplete, &OnJoinTravelToSessionComplete_Parms, NULL );
	};

	void ClientTravelToSession ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
	{
		static UFunction* pfnClientTravelToSession = NULL;

		if ( !pfnClientTravelToSession )
			pfnClientTravelToSession = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientTravelToSession" );

		APlayerController_execClientTravelToSession_Parms ClientTravelToSession_Parms;
		memcpy( &ClientTravelToSession_Parms.SessionName, &SessionName, 0x8 );
		ClientTravelToSession_Parms.SearchClass = SearchClass;
		memcpy( &ClientTravelToSession_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x44 );

		this->ProcessEvent( pfnClientTravelToSession, &ClientTravelToSession_Parms, NULL );
	};

	void PathClear ()
	{
		static UFunction* pfnPathClear = NULL;

		if ( !pfnPathClear )
			pfnPathClear = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PathClear" );

		APlayerController_execPathClear_Parms PathClear_Parms;

		this->ProcessEvent( pfnPathClear, &PathClear_Parms, NULL );
	};

	void PathChild ( int Cnt/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPathChild = NULL;

		if ( !pfnPathChild )
			pfnPathChild = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PathChild" );

		APlayerController_execPathChild_Parms PathChild_Parms;
		PathChild_Parms.Cnt = Cnt;

		this->ProcessEvent( pfnPathChild, &PathChild_Parms, NULL );
	};

	void PathStep ( int Cnt/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPathStep = NULL;

		if ( !pfnPathStep )
			pfnPathStep = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PathStep" );

		APlayerController_execPathStep_Parms PathStep_Parms;
		PathStep_Parms.Cnt = Cnt;

		this->ProcessEvent( pfnPathStep, &PathStep_Parms, NULL );
	};

	void eventSoakPause ( class APawn* P )
	{
		static UFunction* pfnSoakPause = NULL;

		if ( !pfnSoakPause )
			pfnSoakPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SoakPause" );

		APlayerController_eventSoakPause_Parms SoakPause_Parms;
		SoakPause_Parms.P = P;

		this->ProcessEvent( pfnSoakPause, &SoakPause_Parms, NULL );
	};

	void IncrementNumberOfMatchesPlayed ()
	{
		static UFunction* pfnIncrementNumberOfMatchesPlayed = NULL;

		if ( !pfnIncrementNumberOfMatchesPlayed )
			pfnIncrementNumberOfMatchesPlayed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IncrementNumberOfMatchesPlayed" );

		APlayerController_execIncrementNumberOfMatchesPlayed_Parms IncrementNumberOfMatchesPlayed_Parms;

		this->ProcessEvent( pfnIncrementNumberOfMatchesPlayed, &IncrementNumberOfMatchesPlayed_Parms, NULL );
	};

	bool CanViewUserCreatedContent ()
	{
		static UFunction* pfnCanViewUserCreatedContent = NULL;

		if ( !pfnCanViewUserCreatedContent )
			pfnCanViewUserCreatedContent = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanViewUserCreatedContent" );

		APlayerController_execCanViewUserCreatedContent_Parms CanViewUserCreatedContent_Parms;

		this->ProcessEvent( pfnCanViewUserCreatedContent, &CanViewUserCreatedContent_Parms, NULL );

		return CanViewUserCreatedContent_Parms.ReturnValue;
	};

	void ClientEndOnlineGame ()
	{
		static UFunction* pfnClientEndOnlineGame = NULL;

		if ( !pfnClientEndOnlineGame )
			pfnClientEndOnlineGame = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientEndOnlineGame" );

		APlayerController_execClientEndOnlineGame_Parms ClientEndOnlineGame_Parms;

		this->ProcessEvent( pfnClientEndOnlineGame, &ClientEndOnlineGame_Parms, NULL );
	};

	void ClientStartOnlineGame ()
	{
		static UFunction* pfnClientStartOnlineGame = NULL;

		if ( !pfnClientStartOnlineGame )
			pfnClientStartOnlineGame = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientStartOnlineGame" );

		APlayerController_execClientStartOnlineGame_Parms ClientStartOnlineGame_Parms;

		this->ProcessEvent( pfnClientStartOnlineGame, &ClientStartOnlineGame_Parms, NULL );
	};

	void ServerRegisterClientStatGuid ( struct FString StatGuid )
	{
		static UFunction* pfnServerRegisterClientStatGuid = NULL;

		if ( !pfnServerRegisterClientStatGuid )
			pfnServerRegisterClientStatGuid = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerRegisterClientStatGuid" );

		APlayerController_execServerRegisterClientStatGuid_Parms ServerRegisterClientStatGuid_Parms;
		memcpy( &ServerRegisterClientStatGuid_Parms.StatGuid, &StatGuid, 0xC );

		this->ProcessEvent( pfnServerRegisterClientStatGuid, &ServerRegisterClientStatGuid_Parms, NULL );
	};

	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnRegisterHostStatGuidComplete = NULL;

		if ( !pfnOnRegisterHostStatGuidComplete )
			pfnOnRegisterHostStatGuidComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnRegisterHostStatGuidComplete" );

		APlayerController_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
		OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
	};

	void ClientRegisterHostStatGuid ( struct FString StatGuid )
	{
		static UFunction* pfnClientRegisterHostStatGuid = NULL;

		if ( !pfnClientRegisterHostStatGuid )
			pfnClientRegisterHostStatGuid = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientRegisterHostStatGuid" );

		APlayerController_execClientRegisterHostStatGuid_Parms ClientRegisterHostStatGuid_Parms;
		memcpy( &ClientRegisterHostStatGuid_Parms.StatGuid, &StatGuid, 0xC );

		this->ProcessEvent( pfnClientRegisterHostStatGuid, &ClientRegisterHostStatGuid_Parms, NULL );
	};

	void EnableDebugCamera ()
	{
		static UFunction* pfnEnableDebugCamera = NULL;

		if ( !pfnEnableDebugCamera )
			pfnEnableDebugCamera = UObject::FindObject< UFunction >( "Function Engine.PlayerController.EnableDebugCamera" );

		APlayerController_execEnableDebugCamera_Parms EnableDebugCamera_Parms;

		this->ProcessEvent( pfnEnableDebugCamera, &EnableDebugCamera_Parms, NULL );
	};

	void eventRemoveDebugText ( class AActor* SrcActor )
	{
		static UFunction* pfnRemoveDebugText = NULL;

		if ( !pfnRemoveDebugText )
			pfnRemoveDebugText = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RemoveDebugText" );

		APlayerController_eventRemoveDebugText_Parms RemoveDebugText_Parms;
		RemoveDebugText_Parms.SrcActor = SrcActor;

		this->ProcessEvent( pfnRemoveDebugText, &RemoveDebugText_Parms, NULL );
	};

	void eventAddDebugText ( struct FString DebugText, class AActor* SrcActor/*CPF_OptionalParm*/, float Duration/*CPF_OptionalParm*/, struct FVector Offset/*CPF_OptionalParm*/, struct FVector DesiredOffset/*CPF_OptionalParm*/, struct FColor TextColor/*CPF_OptionalParm*/, unsigned long bSkipOverwriteCheck/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddDebugText = NULL;

		if ( !pfnAddDebugText )
			pfnAddDebugText = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AddDebugText" );

		APlayerController_eventAddDebugText_Parms AddDebugText_Parms;
		memcpy( &AddDebugText_Parms.DebugText, &DebugText, 0xC );
		AddDebugText_Parms.SrcActor = SrcActor;
		AddDebugText_Parms.Duration = Duration;
		memcpy( &AddDebugText_Parms.Offset, &Offset, 0xC );
		memcpy( &AddDebugText_Parms.DesiredOffset, &DesiredOffset, 0xC );
		memcpy( &AddDebugText_Parms.TextColor, &TextColor, 0x4 );
		AddDebugText_Parms.bSkipOverwriteCheck = bSkipOverwriteCheck;

		this->ProcessEvent( pfnAddDebugText, &AddDebugText_Parms, NULL );
	};

	void DrawDebugTextList ( class UCanvas* Canvas, float RenderDelta )
	{
		static UFunction* pfnDrawDebugTextList = NULL;

		if ( !pfnDrawDebugTextList )
			pfnDrawDebugTextList = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DrawDebugTextList" );

		APlayerController_execDrawDebugTextList_Parms DrawDebugTextList_Parms;
		DrawDebugTextList_Parms.Canvas = Canvas;
		DrawDebugTextList_Parms.RenderDelta = RenderDelta;

		this->ProcessEvent( pfnDrawDebugTextList, &DrawDebugTextList_Parms, NULL );
	};

	void OnDestroy ( void* Action )
	{
		static UFunction* pfnOnDestroy = NULL;

		if ( !pfnOnDestroy )
			pfnOnDestroy = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnDestroy" );

		APlayerController_execOnDestroy_Parms OnDestroy_Parms;
		OnDestroy_Parms.Action = Action;

		this->ProcessEvent( pfnOnDestroy, &OnDestroy_Parms, NULL );
	};

	void ClientStartNetworkedVoice ()
	{
		static UFunction* pfnClientStartNetworkedVoice = NULL;

		if ( !pfnClientStartNetworkedVoice )
			pfnClientStartNetworkedVoice = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientStartNetworkedVoice" );

		APlayerController_execClientStartNetworkedVoice_Parms ClientStartNetworkedVoice_Parms;

		this->ProcessEvent( pfnClientStartNetworkedVoice, &ClientStartNetworkedVoice_Parms, NULL );
	};

	void ClientStopNetworkedVoice ()
	{
		static UFunction* pfnClientStopNetworkedVoice = NULL;

		if ( !pfnClientStopNetworkedVoice )
			pfnClientStopNetworkedVoice = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientStopNetworkedVoice" );

		APlayerController_execClientStopNetworkedVoice_Parms ClientStopNetworkedVoice_Parms;

		this->ProcessEvent( pfnClientStopNetworkedVoice, &ClientStopNetworkedVoice_Parms, NULL );
	};

	void ClientSetHostUniqueId ( struct FUniqueNetId InHostId )
	{
		static UFunction* pfnClientSetHostUniqueId = NULL;

		if ( !pfnClientSetHostUniqueId )
			pfnClientSetHostUniqueId = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetHostUniqueId" );

		APlayerController_execClientSetHostUniqueId_Parms ClientSetHostUniqueId_Parms;
		memcpy( &ClientSetHostUniqueId_Parms.InHostId, &InHostId, 0x8 );

		this->ProcessEvent( pfnClientSetHostUniqueId, &ClientSetHostUniqueId_Parms, NULL );
	};

	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass )
	{
		static UFunction* pfnClientWriteLeaderboardStats = NULL;

		if ( !pfnClientWriteLeaderboardStats )
			pfnClientWriteLeaderboardStats = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientWriteLeaderboardStats" );

		APlayerController_execClientWriteLeaderboardStats_Parms ClientWriteLeaderboardStats_Parms;
		ClientWriteLeaderboardStats_Parms.OnlineStatsWriteClass = OnlineStatsWriteClass;

		this->ProcessEvent( pfnClientWriteLeaderboardStats, &ClientWriteLeaderboardStats_Parms, NULL );
	};

	void ClientWriteOnlinePlayerScores ( int LeaderboardId )
	{
		static UFunction* pfnClientWriteOnlinePlayerScores = NULL;

		if ( !pfnClientWriteOnlinePlayerScores )
			pfnClientWriteOnlinePlayerScores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientWriteOnlinePlayerScores" );

		APlayerController_execClientWriteOnlinePlayerScores_Parms ClientWriteOnlinePlayerScores_Parms;
		ClientWriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

		this->ProcessEvent( pfnClientWriteOnlinePlayerScores, &ClientWriteOnlinePlayerScores_Parms, NULL );
	};

	void ClientArbitratedMatchEnded ()
	{
		static UFunction* pfnClientArbitratedMatchEnded = NULL;

		if ( !pfnClientArbitratedMatchEnded )
			pfnClientArbitratedMatchEnded = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientArbitratedMatchEnded" );

		APlayerController_execClientArbitratedMatchEnded_Parms ClientArbitratedMatchEnded_Parms;

		this->ProcessEvent( pfnClientArbitratedMatchEnded, &ClientArbitratedMatchEnded_Parms, NULL );
	};

	void NotifyNotEnoughSpaceInInvite ()
	{
		static UFunction* pfnNotifyNotEnoughSpaceInInvite = NULL;

		if ( !pfnNotifyNotEnoughSpaceInInvite )
			pfnNotifyNotEnoughSpaceInInvite = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyNotEnoughSpaceInInvite" );

		APlayerController_execNotifyNotEnoughSpaceInInvite_Parms NotifyNotEnoughSpaceInInvite_Parms;

		this->ProcessEvent( pfnNotifyNotEnoughSpaceInInvite, &NotifyNotEnoughSpaceInInvite_Parms, NULL );
	};

	void NotifyNotAllPlayersCanJoinInvite ()
	{
		static UFunction* pfnNotifyNotAllPlayersCanJoinInvite = NULL;

		if ( !pfnNotifyNotAllPlayersCanJoinInvite )
			pfnNotifyNotAllPlayersCanJoinInvite = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyNotAllPlayersCanJoinInvite" );

		APlayerController_execNotifyNotAllPlayersCanJoinInvite_Parms NotifyNotAllPlayersCanJoinInvite_Parms;

		this->ProcessEvent( pfnNotifyNotAllPlayersCanJoinInvite, &NotifyNotAllPlayersCanJoinInvite_Parms, NULL );
	};

	void NotifyInviteFailed ()
	{
		static UFunction* pfnNotifyInviteFailed = NULL;

		if ( !pfnNotifyInviteFailed )
			pfnNotifyInviteFailed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyInviteFailed" );

		APlayerController_execNotifyInviteFailed_Parms NotifyInviteFailed_Parms;

		this->ProcessEvent( pfnNotifyInviteFailed, &NotifyInviteFailed_Parms, NULL );
	};

	void OnInviteJoinComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnInviteJoinComplete = NULL;

		if ( !pfnOnInviteJoinComplete )
			pfnOnInviteJoinComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnInviteJoinComplete" );

		APlayerController_execOnInviteJoinComplete_Parms OnInviteJoinComplete_Parms;
		memcpy( &OnInviteJoinComplete_Parms.SessionName, &SessionName, 0x8 );
		OnInviteJoinComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnInviteJoinComplete, &OnInviteJoinComplete_Parms, NULL );
	};

	void OnDestroyForInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnDestroyForInviteComplete = NULL;

		if ( !pfnOnDestroyForInviteComplete )
			pfnOnDestroyForInviteComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnDestroyForInviteComplete" );

		APlayerController_execOnDestroyForInviteComplete_Parms OnDestroyForInviteComplete_Parms;
		memcpy( &OnDestroyForInviteComplete_Parms.SessionName, &SessionName, 0x8 );
		OnDestroyForInviteComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnDestroyForInviteComplete, &OnDestroyForInviteComplete_Parms, NULL );
	};

	void OnEndForInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnEndForInviteComplete = NULL;

		if ( !pfnOnEndForInviteComplete )
			pfnOnEndForInviteComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnEndForInviteComplete" );

		APlayerController_execOnEndForInviteComplete_Parms OnEndForInviteComplete_Parms;
		memcpy( &OnEndForInviteComplete_Parms.SessionName, &SessionName, 0x8 );
		OnEndForInviteComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnEndForInviteComplete, &OnEndForInviteComplete_Parms, NULL );
	};

	void ClearInviteDelegates ()
	{
		static UFunction* pfnClearInviteDelegates = NULL;

		if ( !pfnClearInviteDelegates )
			pfnClearInviteDelegates = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClearInviteDelegates" );

		APlayerController_execClearInviteDelegates_Parms ClearInviteDelegates_Parms;

		this->ProcessEvent( pfnClearInviteDelegates, &ClearInviteDelegates_Parms, NULL );
	};

	bool CanAllPlayersPlayOnline ()
	{
		static UFunction* pfnCanAllPlayersPlayOnline = NULL;

		if ( !pfnCanAllPlayersPlayOnline )
			pfnCanAllPlayersPlayOnline = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanAllPlayersPlayOnline" );

		APlayerController_execCanAllPlayersPlayOnline_Parms CanAllPlayersPlayOnline_Parms;

		this->ProcessEvent( pfnCanAllPlayersPlayOnline, &CanAllPlayersPlayOnline_Parms, NULL );

		return CanAllPlayersPlayOnline_Parms.ReturnValue;
	};

	bool InviteHasEnoughSpace ( void* InviteSettings )
	{
		static UFunction* pfnInviteHasEnoughSpace = NULL;

		if ( !pfnInviteHasEnoughSpace )
			pfnInviteHasEnoughSpace = UObject::FindObject< UFunction >( "Function Engine.PlayerController.InviteHasEnoughSpace" );

		APlayerController_execInviteHasEnoughSpace_Parms InviteHasEnoughSpace_Parms;
		InviteHasEnoughSpace_Parms.InviteSettings = InviteSettings;

		this->ProcessEvent( pfnInviteHasEnoughSpace, &InviteHasEnoughSpace_Parms, NULL );

		return InviteHasEnoughSpace_Parms.ReturnValue;
	};

	void OnGameInviteAccepted ( void* GameInviteSettings )
	{
		static UFunction* pfnOnGameInviteAccepted = NULL;

		if ( !pfnOnGameInviteAccepted )
			pfnOnGameInviteAccepted = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnGameInviteAccepted" );

		APlayerController_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
		OnGameInviteAccepted_Parms.GameInviteSettings = GameInviteSettings;

		this->ProcessEvent( pfnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );
	};

	void ServerRegisteredForArbitration ( unsigned long bWasSuccessful )
	{
		static UFunction* pfnServerRegisteredForArbitration = NULL;

		if ( !pfnServerRegisteredForArbitration )
			pfnServerRegisteredForArbitration = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerRegisteredForArbitration" );

		APlayerController_execServerRegisteredForArbitration_Parms ServerRegisteredForArbitration_Parms;
		ServerRegisteredForArbitration_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnServerRegisteredForArbitration, &ServerRegisteredForArbitration_Parms, NULL );
	};

	void OnArbitrationRegisterComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnArbitrationRegisterComplete = NULL;

		if ( !pfnOnArbitrationRegisterComplete )
			pfnOnArbitrationRegisterComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnArbitrationRegisterComplete" );

		APlayerController_execOnArbitrationRegisterComplete_Parms OnArbitrationRegisterComplete_Parms;
		memcpy( &OnArbitrationRegisterComplete_Parms.SessionName, &SessionName, 0x8 );
		OnArbitrationRegisterComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnArbitrationRegisterComplete, &OnArbitrationRegisterComplete_Parms, NULL );
	};

	void ClientRegisterForArbitration ()
	{
		static UFunction* pfnClientRegisterForArbitration = NULL;

		if ( !pfnClientRegisterForArbitration )
			pfnClientRegisterForArbitration = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientRegisterForArbitration" );

		APlayerController_execClientRegisterForArbitration_Parms ClientRegisterForArbitration_Parms;

		this->ProcessEvent( pfnClientRegisterForArbitration, &ClientRegisterForArbitration_Parms, NULL );
	};

	void eventClientWasKicked ()
	{
		static UFunction* pfnClientWasKicked = NULL;

		if ( !pfnClientWasKicked )
			pfnClientWasKicked = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientWasKicked" );

		APlayerController_eventClientWasKicked_Parms ClientWasKicked_Parms;

		this->ProcessEvent( pfnClientWasKicked, &ClientWasKicked_Parms, NULL );
	};

	void NotifyConnectionError ( struct FString Message/*CPF_OptionalParm*/, struct FString Title/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnNotifyConnectionError = NULL;

		if ( !pfnNotifyConnectionError )
			pfnNotifyConnectionError = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyConnectionError" );

		APlayerController_execNotifyConnectionError_Parms NotifyConnectionError_Parms;
		memcpy( &NotifyConnectionError_Parms.Message, &Message, 0xC );
		memcpy( &NotifyConnectionError_Parms.Title, &Title, 0xC );

		this->ProcessEvent( pfnNotifyConnectionError, &NotifyConnectionError_Parms, NULL );
	};

	bool IsShowingSubtitles ()
	{
		static UFunction* pfnIsShowingSubtitles = NULL;

		if ( !pfnIsShowingSubtitles )
			pfnIsShowingSubtitles = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsShowingSubtitles" );

		APlayerController_execIsShowingSubtitles_Parms IsShowingSubtitles_Parms;

		pfnIsShowingSubtitles->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsShowingSubtitles, &IsShowingSubtitles_Parms, NULL );
		pfnIsShowingSubtitles->FunctionFlags |= 0x400;

		return IsShowingSubtitles_Parms.ReturnValue;
	};

	void SetShowSubtitles ( unsigned long bValue )
	{
		static UFunction* pfnSetShowSubtitles = NULL;

		if ( !pfnSetShowSubtitles )
			pfnSetShowSubtitles = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetShowSubtitles" );

		APlayerController_execSetShowSubtitles_Parms SetShowSubtitles_Parms;
		SetShowSubtitles_Parms.bValue = bValue;

		pfnSetShowSubtitles->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetShowSubtitles, &SetShowSubtitles_Parms, NULL );
		pfnSetShowSubtitles->FunctionFlags |= 0x400;
	};

	void eventNotifyDirectorControl ( unsigned long bNowControlling )
	{
		static UFunction* pfnNotifyDirectorControl = NULL;

		if ( !pfnNotifyDirectorControl )
			pfnNotifyDirectorControl = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyDirectorControl" );

		APlayerController_eventNotifyDirectorControl_Parms NotifyDirectorControl_Parms;
		NotifyDirectorControl_Parms.bNowControlling = bNowControlling;

		this->ProcessEvent( pfnNotifyDirectorControl, &NotifyDirectorControl_Parms, NULL );
	};

	void eventServerUnmutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnServerUnmutePlayer = NULL;

		if ( !pfnServerUnmutePlayer )
			pfnServerUnmutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerUnmutePlayer" );

		APlayerController_eventServerUnmutePlayer_Parms ServerUnmutePlayer_Parms;
		memcpy( &ServerUnmutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnServerUnmutePlayer, &ServerUnmutePlayer_Parms, NULL );
	};

	void eventServerMutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnServerMutePlayer = NULL;

		if ( !pfnServerMutePlayer )
			pfnServerMutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerMutePlayer" );

		APlayerController_eventServerMutePlayer_Parms ServerMutePlayer_Parms;
		memcpy( &ServerMutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnServerMutePlayer, &ServerMutePlayer_Parms, NULL );
	};

	void GameplayUnmutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnGameplayUnmutePlayer = NULL;

		if ( !pfnGameplayUnmutePlayer )
			pfnGameplayUnmutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GameplayUnmutePlayer" );

		APlayerController_execGameplayUnmutePlayer_Parms GameplayUnmutePlayer_Parms;
		memcpy( &GameplayUnmutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnGameplayUnmutePlayer, &GameplayUnmutePlayer_Parms, NULL );
	};

	void GameplayMutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnGameplayMutePlayer = NULL;

		if ( !pfnGameplayMutePlayer )
			pfnGameplayMutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GameplayMutePlayer" );

		APlayerController_execGameplayMutePlayer_Parms GameplayMutePlayer_Parms;
		memcpy( &GameplayMutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnGameplayMutePlayer, &GameplayMutePlayer_Parms, NULL );
	};

	void eventClientUnmutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnClientUnmutePlayer = NULL;

		if ( !pfnClientUnmutePlayer )
			pfnClientUnmutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientUnmutePlayer" );

		APlayerController_eventClientUnmutePlayer_Parms ClientUnmutePlayer_Parms;
		memcpy( &ClientUnmutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnClientUnmutePlayer, &ClientUnmutePlayer_Parms, NULL );
	};

	void eventClientMutePlayer ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnClientMutePlayer = NULL;

		if ( !pfnClientMutePlayer )
			pfnClientMutePlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientMutePlayer" );

		APlayerController_eventClientMutePlayer_Parms ClientMutePlayer_Parms;
		memcpy( &ClientMutePlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		this->ProcessEvent( pfnClientMutePlayer, &ClientMutePlayer_Parms, NULL );
	};

	void ClientVoiceHandshakeComplete ()
	{
		static UFunction* pfnClientVoiceHandshakeComplete = NULL;

		if ( !pfnClientVoiceHandshakeComplete )
			pfnClientVoiceHandshakeComplete = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientVoiceHandshakeComplete" );

		APlayerController_execClientVoiceHandshakeComplete_Parms ClientVoiceHandshakeComplete_Parms;

		this->ProcessEvent( pfnClientVoiceHandshakeComplete, &ClientVoiceHandshakeComplete_Parms, NULL );
	};

	class APlayerController* GetPlayerControllerFromNetId ( struct FUniqueNetId PlayerNetId )
	{
		static UFunction* pfnGetPlayerControllerFromNetId = NULL;

		if ( !pfnGetPlayerControllerFromNetId )
			pfnGetPlayerControllerFromNetId = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPlayerControllerFromNetId" );

		APlayerController_execGetPlayerControllerFromNetId_Parms GetPlayerControllerFromNetId_Parms;
		memcpy( &GetPlayerControllerFromNetId_Parms.PlayerNetId, &PlayerNetId, 0x8 );

		pfnGetPlayerControllerFromNetId->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPlayerControllerFromNetId, &GetPlayerControllerFromNetId_Parms, NULL );
		pfnGetPlayerControllerFromNetId->FunctionFlags |= 0x400;

		return GetPlayerControllerFromNetId_Parms.ReturnValue;
	};

	void ClientSetOnlineStatus ()
	{
		static UFunction* pfnClientSetOnlineStatus = NULL;

		if ( !pfnClientSetOnlineStatus )
			pfnClientSetOnlineStatus = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetOnlineStatus" );

		APlayerController_execClientSetOnlineStatus_Parms ClientSetOnlineStatus_Parms;

		this->ProcessEvent( pfnClientSetOnlineStatus, &ClientSetOnlineStatus_Parms, NULL );
	};

	void SeamlessTravelFrom ( class APlayerController* OldPC )
	{
		static UFunction* pfnSeamlessTravelFrom = NULL;

		if ( !pfnSeamlessTravelFrom )
			pfnSeamlessTravelFrom = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SeamlessTravelFrom" );

		APlayerController_execSeamlessTravelFrom_Parms SeamlessTravelFrom_Parms;
		SeamlessTravelFrom_Parms.OldPC = OldPC;

		this->ProcessEvent( pfnSeamlessTravelFrom, &SeamlessTravelFrom_Parms, NULL );
	};

	void SeamlessTravelTo ( class APlayerController* NewPC )
	{
		static UFunction* pfnSeamlessTravelTo = NULL;

		if ( !pfnSeamlessTravelTo )
			pfnSeamlessTravelTo = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SeamlessTravelTo" );

		APlayerController_execSeamlessTravelTo_Parms SeamlessTravelTo_Parms;
		SeamlessTravelTo_Parms.NewPC = NewPC;

		this->ProcessEvent( pfnSeamlessTravelTo, &SeamlessTravelTo_Parms, NULL );
	};

	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList )
	{
		static UFunction* pfnGetSeamlessTravelActorList = NULL;

		if ( !pfnGetSeamlessTravelActorList )
			pfnGetSeamlessTravelActorList = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetSeamlessTravelActorList" );

		APlayerController_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;
		GetSeamlessTravelActorList_Parms.bToEntry = bToEntry;

		this->ProcessEvent( pfnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL );

		if ( ActorList )
			*ActorList = GetSeamlessTravelActorList_Parms.ActorList; // CPF_OutParm
	};

	bool IsPlayerMuted ( struct FUniqueNetId* Sender )
	{
		static UFunction* pfnIsPlayerMuted = NULL;

		if ( !pfnIsPlayerMuted )
			pfnIsPlayerMuted = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsPlayerMuted" );

		APlayerController_execIsPlayerMuted_Parms IsPlayerMuted_Parms;

		pfnIsPlayerMuted->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayerMuted, &IsPlayerMuted_Parms, NULL );
		pfnIsPlayerMuted->FunctionFlags |= 0x400;

		if ( Sender )
			memcpy( Sender, &IsPlayerMuted_Parms.Sender, 0x8 ); // CPF_OutParm

		return IsPlayerMuted_Parms.ReturnValue;
	};

	void* GetUIController ()
	{
		static UFunction* pfnGetUIController = NULL;

		if ( !pfnGetUIController )
			pfnGetUIController = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetUIController" );

		APlayerController_execGetUIController_Parms GetUIController_Parms;

		this->ProcessEvent( pfnGetUIController, &GetUIController_Parms, NULL );

		return GetUIController_Parms.ReturnValue;
	};

	void SaveActorConfig ( struct FName actorName )
	{
		static UFunction* pfnSaveActorConfig = NULL;

		if ( !pfnSaveActorConfig )
			pfnSaveActorConfig = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SaveActorConfig" );

		APlayerController_execSaveActorConfig_Parms SaveActorConfig_Parms;
		memcpy( &SaveActorConfig_Parms.actorName, &actorName, 0x8 );

		this->ProcessEvent( pfnSaveActorConfig, &SaveActorConfig_Parms, NULL );
	};

	void SaveClassConfig ( struct FString ClassName )
	{
		static UFunction* pfnSaveClassConfig = NULL;

		if ( !pfnSaveClassConfig )
			pfnSaveClassConfig = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SaveClassConfig" );

		APlayerController_execSaveClassConfig_Parms SaveClassConfig_Parms;
		memcpy( &SaveClassConfig_Parms.ClassName, &ClassName, 0xC );

		this->ProcessEvent( pfnSaveClassConfig, &SaveClassConfig_Parms, NULL );
	};

	void eventClientSetBlockOnAsyncLoading ()
	{
		static UFunction* pfnClientSetBlockOnAsyncLoading = NULL;

		if ( !pfnClientSetBlockOnAsyncLoading )
			pfnClientSetBlockOnAsyncLoading = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetBlockOnAsyncLoading" );

		APlayerController_eventClientSetBlockOnAsyncLoading_Parms ClientSetBlockOnAsyncLoading_Parms;

		this->ProcessEvent( pfnClientSetBlockOnAsyncLoading, &ClientSetBlockOnAsyncLoading_Parms, NULL );
	};

	void eventClientFlushLevelStreaming ()
	{
		static UFunction* pfnClientFlushLevelStreaming = NULL;

		if ( !pfnClientFlushLevelStreaming )
			pfnClientFlushLevelStreaming = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientFlushLevelStreaming" );

		APlayerController_eventClientFlushLevelStreaming_Parms ClientFlushLevelStreaming_Parms;

		pfnClientFlushLevelStreaming->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClientFlushLevelStreaming, &ClientFlushLevelStreaming_Parms, NULL );
		pfnClientFlushLevelStreaming->FunctionFlags |= 0x400;
	};

	void eventClientCancelPendingMapChange ()
	{
		static UFunction* pfnClientCancelPendingMapChange = NULL;

		if ( !pfnClientCancelPendingMapChange )
			pfnClientCancelPendingMapChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientCancelPendingMapChange" );

		APlayerController_eventClientCancelPendingMapChange_Parms ClientCancelPendingMapChange_Parms;

		this->ProcessEvent( pfnClientCancelPendingMapChange, &ClientCancelPendingMapChange_Parms, NULL );
	};

	void eventClientCommitMapChange ()
	{
		static UFunction* pfnClientCommitMapChange = NULL;

		if ( !pfnClientCommitMapChange )
			pfnClientCommitMapChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientCommitMapChange" );

		APlayerController_eventClientCommitMapChange_Parms ClientCommitMapChange_Parms;

		this->ProcessEvent( pfnClientCommitMapChange, &ClientCommitMapChange_Parms, NULL );
	};

	void DelayedPrepareMapChange ()
	{
		static UFunction* pfnDelayedPrepareMapChange = NULL;

		if ( !pfnDelayedPrepareMapChange )
			pfnDelayedPrepareMapChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DelayedPrepareMapChange" );

		APlayerController_execDelayedPrepareMapChange_Parms DelayedPrepareMapChange_Parms;

		this->ProcessEvent( pfnDelayedPrepareMapChange, &DelayedPrepareMapChange_Parms, NULL );
	};

	void eventClientPrepareMapChange ( struct FName LevelName, unsigned long bFirst, unsigned long bLast )
	{
		static UFunction* pfnClientPrepareMapChange = NULL;

		if ( !pfnClientPrepareMapChange )
			pfnClientPrepareMapChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientPrepareMapChange" );

		APlayerController_eventClientPrepareMapChange_Parms ClientPrepareMapChange_Parms;
		memcpy( &ClientPrepareMapChange_Parms.LevelName, &LevelName, 0x8 );
		ClientPrepareMapChange_Parms.bFirst = bFirst;
		ClientPrepareMapChange_Parms.bLast = bLast;

		this->ProcessEvent( pfnClientPrepareMapChange, &ClientPrepareMapChange_Parms, NULL );
	};

	void eventServerUpdateLevelVisibility ( struct FName PackageName, unsigned long bIsVisible )
	{
		static UFunction* pfnServerUpdateLevelVisibility = NULL;

		if ( !pfnServerUpdateLevelVisibility )
			pfnServerUpdateLevelVisibility = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerUpdateLevelVisibility" );

		APlayerController_eventServerUpdateLevelVisibility_Parms ServerUpdateLevelVisibility_Parms;
		memcpy( &ServerUpdateLevelVisibility_Parms.PackageName, &PackageName, 0x8 );
		ServerUpdateLevelVisibility_Parms.bIsVisible = bIsVisible;

		pfnServerUpdateLevelVisibility->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnServerUpdateLevelVisibility, &ServerUpdateLevelVisibility_Parms, NULL );
		pfnServerUpdateLevelVisibility->FunctionFlags |= 0x400;
	};

	void ClientUpdateLevelStreamingStatus ( struct FName PackageName, unsigned long bNewShouldBeLoaded, unsigned long bNewShouldBeVisible, unsigned long bNewShouldBlockOnLoad )
	{
		static UFunction* pfnClientUpdateLevelStreamingStatus = NULL;

		if ( !pfnClientUpdateLevelStreamingStatus )
			pfnClientUpdateLevelStreamingStatus = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientUpdateLevelStreamingStatus" );

		APlayerController_execClientUpdateLevelStreamingStatus_Parms ClientUpdateLevelStreamingStatus_Parms;
		memcpy( &ClientUpdateLevelStreamingStatus_Parms.PackageName, &PackageName, 0x8 );
		ClientUpdateLevelStreamingStatus_Parms.bNewShouldBeLoaded = bNewShouldBeLoaded;
		ClientUpdateLevelStreamingStatus_Parms.bNewShouldBeVisible = bNewShouldBeVisible;
		ClientUpdateLevelStreamingStatus_Parms.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;

		pfnClientUpdateLevelStreamingStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClientUpdateLevelStreamingStatus, &ClientUpdateLevelStreamingStatus_Parms, NULL );
		pfnClientUpdateLevelStreamingStatus->FunctionFlags |= 0x400;
	};

	void eventLevelStreamingStatusChanged ( void* LevelObject, unsigned long bNewShouldBeLoaded, unsigned long bNewShouldBeVisible, unsigned long bNewShouldBlockOnLoad )
	{
		static UFunction* pfnLevelStreamingStatusChanged = NULL;

		if ( !pfnLevelStreamingStatusChanged )
			pfnLevelStreamingStatusChanged = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LevelStreamingStatusChanged" );

		APlayerController_eventLevelStreamingStatusChanged_Parms LevelStreamingStatusChanged_Parms;
		LevelStreamingStatusChanged_Parms.LevelObject = LevelObject;
		LevelStreamingStatusChanged_Parms.bNewShouldBeLoaded = bNewShouldBeLoaded;
		LevelStreamingStatusChanged_Parms.bNewShouldBeVisible = bNewShouldBeVisible;
		LevelStreamingStatusChanged_Parms.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;

		this->ProcessEvent( pfnLevelStreamingStatusChanged, &LevelStreamingStatusChanged_Parms, NULL );
	};

	void eventClientForceGarbageCollection ()
	{
		static UFunction* pfnClientForceGarbageCollection = NULL;

		if ( !pfnClientForceGarbageCollection )
			pfnClientForceGarbageCollection = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientForceGarbageCollection" );

		APlayerController_eventClientForceGarbageCollection_Parms ClientForceGarbageCollection_Parms;

		this->ProcessEvent( pfnClientForceGarbageCollection, &ClientForceGarbageCollection_Parms, NULL );
	};

	void OnConsoleCommand ( void* inAction )
	{
		static UFunction* pfnOnConsoleCommand = NULL;

		if ( !pfnOnConsoleCommand )
			pfnOnConsoleCommand = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnConsoleCommand" );

		APlayerController_execOnConsoleCommand_Parms OnConsoleCommand_Parms;
		OnConsoleCommand_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnConsoleCommand, &OnConsoleCommand_Parms, NULL );
	};

	void ResetPlayerMovementInput ()
	{
		static UFunction* pfnResetPlayerMovementInput = NULL;

		if ( !pfnResetPlayerMovementInput )
			pfnResetPlayerMovementInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ResetPlayerMovementInput" );

		APlayerController_execResetPlayerMovementInput_Parms ResetPlayerMovementInput_Parms;

		this->ProcessEvent( pfnResetPlayerMovementInput, &ResetPlayerMovementInput_Parms, NULL );
	};

	bool eventIsLookInputIgnored ()
	{
		static UFunction* pfnIsLookInputIgnored = NULL;

		if ( !pfnIsLookInputIgnored )
			pfnIsLookInputIgnored = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsLookInputIgnored" );

		APlayerController_eventIsLookInputIgnored_Parms IsLookInputIgnored_Parms;

		this->ProcessEvent( pfnIsLookInputIgnored, &IsLookInputIgnored_Parms, NULL );

		return IsLookInputIgnored_Parms.ReturnValue;
	};

	void IgnoreLookInput ( unsigned long bNewLookInput )
	{
		static UFunction* pfnIgnoreLookInput = NULL;

		if ( !pfnIgnoreLookInput )
			pfnIgnoreLookInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IgnoreLookInput" );

		APlayerController_execIgnoreLookInput_Parms IgnoreLookInput_Parms;
		IgnoreLookInput_Parms.bNewLookInput = bNewLookInput;

		this->ProcessEvent( pfnIgnoreLookInput, &IgnoreLookInput_Parms, NULL );
	};

	bool eventIsMoveInputIgnored ()
	{
		static UFunction* pfnIsMoveInputIgnored = NULL;

		if ( !pfnIsMoveInputIgnored )
			pfnIsMoveInputIgnored = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsMoveInputIgnored" );

		APlayerController_eventIsMoveInputIgnored_Parms IsMoveInputIgnored_Parms;

		this->ProcessEvent( pfnIsMoveInputIgnored, &IsMoveInputIgnored_Parms, NULL );

		return IsMoveInputIgnored_Parms.ReturnValue;
	};

	void IgnoreMoveInput ( unsigned long bNewMoveInput )
	{
		static UFunction* pfnIgnoreMoveInput = NULL;

		if ( !pfnIgnoreMoveInput )
			pfnIgnoreMoveInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IgnoreMoveInput" );

		APlayerController_execIgnoreMoveInput_Parms IgnoreMoveInput_Parms;
		IgnoreMoveInput_Parms.bNewMoveInput = bNewMoveInput;

		this->ProcessEvent( pfnIgnoreMoveInput, &IgnoreMoveInput_Parms, NULL );
	};

	void ClientSetCinematicMode ( unsigned long bInCinematicMode, unsigned long bAffectsMovement, unsigned long bAffectsTurning, unsigned long bAffectsHUD )
	{
		static UFunction* pfnClientSetCinematicMode = NULL;

		if ( !pfnClientSetCinematicMode )
			pfnClientSetCinematicMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetCinematicMode" );

		APlayerController_execClientSetCinematicMode_Parms ClientSetCinematicMode_Parms;
		ClientSetCinematicMode_Parms.bInCinematicMode = bInCinematicMode;
		ClientSetCinematicMode_Parms.bAffectsMovement = bAffectsMovement;
		ClientSetCinematicMode_Parms.bAffectsTurning = bAffectsTurning;
		ClientSetCinematicMode_Parms.bAffectsHUD = bAffectsHUD;

		this->ProcessEvent( pfnClientSetCinematicMode, &ClientSetCinematicMode_Parms, NULL );
	};

	void SetCinematicMode ( unsigned long bInCinematicMode, unsigned long bHidePlayer, unsigned long bAffectsHUD, unsigned long bAffectsMovement, unsigned long bAffectsTurning, unsigned long bAffectsButtons )
	{
		static UFunction* pfnSetCinematicMode = NULL;

		if ( !pfnSetCinematicMode )
			pfnSetCinematicMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetCinematicMode" );

		APlayerController_execSetCinematicMode_Parms SetCinematicMode_Parms;
		SetCinematicMode_Parms.bInCinematicMode = bInCinematicMode;
		SetCinematicMode_Parms.bHidePlayer = bHidePlayer;
		SetCinematicMode_Parms.bAffectsHUD = bAffectsHUD;
		SetCinematicMode_Parms.bAffectsMovement = bAffectsMovement;
		SetCinematicMode_Parms.bAffectsTurning = bAffectsTurning;
		SetCinematicMode_Parms.bAffectsButtons = bAffectsButtons;

		this->ProcessEvent( pfnSetCinematicMode, &SetCinematicMode_Parms, NULL );
	};

	void OnToggleCinematicMode ( void* Action )
	{
		static UFunction* pfnOnToggleCinematicMode = NULL;

		if ( !pfnOnToggleCinematicMode )
			pfnOnToggleCinematicMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnToggleCinematicMode" );

		APlayerController_execOnToggleCinematicMode_Parms OnToggleCinematicMode_Parms;
		OnToggleCinematicMode_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggleCinematicMode, &OnToggleCinematicMode_Parms, NULL );
	};

	void CameraShake ( float Duration, struct FVector newRotAmplitude, struct FVector newRotFrequency, struct FVector newLocAmplitude, struct FVector newLocFrequency, float newFOVAmplitude, float newFOVFrequency )
	{
		static UFunction* pfnCameraShake = NULL;

		if ( !pfnCameraShake )
			pfnCameraShake = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CameraShake" );

		APlayerController_execCameraShake_Parms CameraShake_Parms;
		CameraShake_Parms.Duration = Duration;
		memcpy( &CameraShake_Parms.newRotAmplitude, &newRotAmplitude, 0xC );
		memcpy( &CameraShake_Parms.newRotFrequency, &newRotFrequency, 0xC );
		memcpy( &CameraShake_Parms.newLocAmplitude, &newLocAmplitude, 0xC );
		memcpy( &CameraShake_Parms.newLocFrequency, &newLocFrequency, 0xC );
		CameraShake_Parms.newFOVAmplitude = newFOVAmplitude;
		CameraShake_Parms.newFOVFrequency = newFOVFrequency;

		this->ProcessEvent( pfnCameraShake, &CameraShake_Parms, NULL );
	};

	bool IsForceFeedbackAllowed ()
	{
		static UFunction* pfnIsForceFeedbackAllowed = NULL;

		if ( !pfnIsForceFeedbackAllowed )
			pfnIsForceFeedbackAllowed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsForceFeedbackAllowed" );

		APlayerController_execIsForceFeedbackAllowed_Parms IsForceFeedbackAllowed_Parms;

		this->ProcessEvent( pfnIsForceFeedbackAllowed, &IsForceFeedbackAllowed_Parms, NULL );

		return IsForceFeedbackAllowed_Parms.ReturnValue;
	};

	void eventClientStopForceFeedbackWaveform ( void* FFWaveform/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientStopForceFeedbackWaveform = NULL;

		if ( !pfnClientStopForceFeedbackWaveform )
			pfnClientStopForceFeedbackWaveform = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientStopForceFeedbackWaveform" );

		APlayerController_eventClientStopForceFeedbackWaveform_Parms ClientStopForceFeedbackWaveform_Parms;
		ClientStopForceFeedbackWaveform_Parms.FFWaveform = FFWaveform;

		this->ProcessEvent( pfnClientStopForceFeedbackWaveform, &ClientStopForceFeedbackWaveform_Parms, NULL );
	};

	void eventClientPlayForceFeedbackWaveform ( void* FFWaveform )
	{
		static UFunction* pfnClientPlayForceFeedbackWaveform = NULL;

		if ( !pfnClientPlayForceFeedbackWaveform )
			pfnClientPlayForceFeedbackWaveform = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientPlayForceFeedbackWaveform" );

		APlayerController_eventClientPlayForceFeedbackWaveform_Parms ClientPlayForceFeedbackWaveform_Parms;
		ClientPlayForceFeedbackWaveform_Parms.FFWaveform = FFWaveform;

		this->ProcessEvent( pfnClientPlayForceFeedbackWaveform, &ClientPlayForceFeedbackWaveform_Parms, NULL );
	};

	void eventPlayRumble ( void* TheAnimNotify )
	{
		static UFunction* pfnPlayRumble = NULL;

		if ( !pfnPlayRumble )
			pfnPlayRumble = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PlayRumble" );

		APlayerController_eventPlayRumble_Parms PlayRumble_Parms;
		PlayRumble_Parms.TheAnimNotify = TheAnimNotify;

		this->ProcessEvent( pfnPlayRumble, &PlayRumble_Parms, NULL );
	};

	void OnForceFeedback ( void* Action )
	{
		static UFunction* pfnOnForceFeedback = NULL;

		if ( !pfnOnForceFeedback )
			pfnOnForceFeedback = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnForceFeedback" );

		APlayerController_execOnForceFeedback_Parms OnForceFeedback_Parms;
		OnForceFeedback_Parms.Action = Action;

		this->ProcessEvent( pfnOnForceFeedback, &OnForceFeedback_Parms, NULL );
	};

	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
	{
		static UFunction* pfnNotifyTakeHit = NULL;

		if ( !pfnNotifyTakeHit )
			pfnNotifyTakeHit = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyTakeHit" );

		APlayerController_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
		NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
		NotifyTakeHit_Parms.Damage = Damage;
		NotifyTakeHit_Parms.DamageType = DamageType;
		memcpy( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

		this->ProcessEvent( pfnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
	};

	void ShowGameState ()
	{
		static UFunction* pfnShowGameState = NULL;

		if ( !pfnShowGameState )
			pfnShowGameState = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ShowGameState" );

		APlayerController_execShowGameState_Parms ShowGameState_Parms;

		this->ProcessEvent( pfnShowGameState, &ShowGameState_Parms, NULL );
	};

	void ShowPlayerState ()
	{
		static UFunction* pfnShowPlayerState = NULL;

		if ( !pfnShowPlayerState )
			pfnShowPlayerState = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ShowPlayerState" );

		APlayerController_execShowPlayerState_Parms ShowPlayerState_Parms;

		this->ProcessEvent( pfnShowPlayerState, &ShowPlayerState_Parms, NULL );
	};

	void ListCE ()
	{
		static UFunction* pfnListCE = NULL;

		if ( !pfnListCE )
			pfnListCE = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ListCE" );

		APlayerController_execListCE_Parms ListCE_Parms;

		this->ProcessEvent( pfnListCE, &ListCE_Parms, NULL );
	};

	void ListConsoleEvents ()
	{
		static UFunction* pfnListConsoleEvents = NULL;

		if ( !pfnListConsoleEvents )
			pfnListConsoleEvents = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ListConsoleEvents" );

		APlayerController_execListConsoleEvents_Parms ListConsoleEvents_Parms;

		this->ProcessEvent( pfnListConsoleEvents, &ListConsoleEvents_Parms, NULL );
	};

	void CE ( struct FName EventName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCE = NULL;

		if ( !pfnCE )
			pfnCE = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CE" );

		APlayerController_execCE_Parms CE_Parms;
		memcpy( &CE_Parms.EventName, &EventName, 0x8 );

		this->ProcessEvent( pfnCE, &CE_Parms, NULL );
	};

	void CauseEvent ( struct FName EventName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCauseEvent = NULL;

		if ( !pfnCauseEvent )
			pfnCauseEvent = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CauseEvent" );

		APlayerController_execCauseEvent_Parms CauseEvent_Parms;
		memcpy( &CauseEvent_Parms.EventName, &EventName, 0x8 );

		this->ProcessEvent( pfnCauseEvent, &CauseEvent_Parms, NULL );
	};

	void ServerCauseEvent ( struct FName EventName )
	{
		static UFunction* pfnServerCauseEvent = NULL;

		if ( !pfnServerCauseEvent )
			pfnServerCauseEvent = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerCauseEvent" );

		APlayerController_execServerCauseEvent_Parms ServerCauseEvent_Parms;
		memcpy( &ServerCauseEvent_Parms.EventName, &EventName, 0x8 );

		this->ProcessEvent( pfnServerCauseEvent, &ServerCauseEvent_Parms, NULL );
	};

	void OnToggleHUD ( void* inAction )
	{
		static UFunction* pfnOnToggleHUD = NULL;

		if ( !pfnOnToggleHUD )
			pfnOnToggleHUD = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnToggleHUD" );

		APlayerController_execOnToggleHUD_Parms OnToggleHUD_Parms;
		OnToggleHUD_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnToggleHUD, &OnToggleHUD_Parms, NULL );
	};

	void OnSetCameraTarget ( void* inAction )
	{
		static UFunction* pfnOnSetCameraTarget = NULL;

		if ( !pfnOnSetCameraTarget )
			pfnOnSetCameraTarget = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnSetCameraTarget" );

		APlayerController_execOnSetCameraTarget_Parms OnSetCameraTarget_Parms;
		OnSetCameraTarget_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnSetCameraTarget, &OnSetCameraTarget_Parms, NULL );
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DisplayDebug" );

		APlayerController_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	void ClientIgnoreLookInput ( unsigned long bIgnore )
	{
		static UFunction* pfnClientIgnoreLookInput = NULL;

		if ( !pfnClientIgnoreLookInput )
			pfnClientIgnoreLookInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientIgnoreLookInput" );

		APlayerController_execClientIgnoreLookInput_Parms ClientIgnoreLookInput_Parms;
		ClientIgnoreLookInput_Parms.bIgnore = bIgnore;

		this->ProcessEvent( pfnClientIgnoreLookInput, &ClientIgnoreLookInput_Parms, NULL );
	};

	void ClientIgnoreMoveInput ( unsigned long bIgnore )
	{
		static UFunction* pfnClientIgnoreMoveInput = NULL;

		if ( !pfnClientIgnoreMoveInput )
			pfnClientIgnoreMoveInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientIgnoreMoveInput" );

		APlayerController_execClientIgnoreMoveInput_Parms ClientIgnoreMoveInput_Parms;
		ClientIgnoreMoveInput_Parms.bIgnore = bIgnore;

		this->ProcessEvent( pfnClientIgnoreMoveInput, &ClientIgnoreMoveInput_Parms, NULL );
	};

	void OnToggleInput ( void* inAction )
	{
		static UFunction* pfnOnToggleInput = NULL;

		if ( !pfnOnToggleInput )
			pfnOnToggleInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnToggleInput" );

		APlayerController_execOnToggleInput_Parms OnToggleInput_Parms;
		OnToggleInput_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnToggleInput, &OnToggleInput_Parms, NULL );
	};

	void DrawHUD ( class AHUD* H )
	{
		static UFunction* pfnDrawHUD = NULL;

		if ( !pfnDrawHUD )
			pfnDrawHUD = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DrawHUD" );

		APlayerController_execDrawHUD_Parms DrawHUD_Parms;
		DrawHUD_Parms.H = H;

		this->ProcessEvent( pfnDrawHUD, &DrawHUD_Parms, NULL );
	};

	bool CanRestartPlayer ()
	{
		static UFunction* pfnCanRestartPlayer = NULL;

		if ( !pfnCanRestartPlayer )
			pfnCanRestartPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanRestartPlayer" );

		APlayerController_execCanRestartPlayer_Parms CanRestartPlayer_Parms;

		this->ProcessEvent( pfnCanRestartPlayer, &CanRestartPlayer_Parms, NULL );

		return CanRestartPlayer_Parms.ReturnValue;
	};

	void ServerViewSelf ( struct FViewTargetTransitionParams TransitionParams/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerViewSelf = NULL;

		if ( !pfnServerViewSelf )
			pfnServerViewSelf = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerViewSelf" );

		APlayerController_execServerViewSelf_Parms ServerViewSelf_Parms;
		memcpy( &ServerViewSelf_Parms.TransitionParams, &TransitionParams, 0xC );

		this->ProcessEvent( pfnServerViewSelf, &ServerViewSelf_Parms, NULL );
	};

	void ViewAPlayer ( int Dir )
	{
		static UFunction* pfnViewAPlayer = NULL;

		if ( !pfnViewAPlayer )
			pfnViewAPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ViewAPlayer" );

		APlayerController_execViewAPlayer_Parms ViewAPlayer_Parms;
		ViewAPlayer_Parms.Dir = Dir;

		this->ProcessEvent( pfnViewAPlayer, &ViewAPlayer_Parms, NULL );
	};

	void ServerViewPrevPlayer ()
	{
		static UFunction* pfnServerViewPrevPlayer = NULL;

		if ( !pfnServerViewPrevPlayer )
			pfnServerViewPrevPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerViewPrevPlayer" );

		APlayerController_execServerViewPrevPlayer_Parms ServerViewPrevPlayer_Parms;

		this->ProcessEvent( pfnServerViewPrevPlayer, &ServerViewPrevPlayer_Parms, NULL );
	};

	void ServerViewNextPlayer ()
	{
		static UFunction* pfnServerViewNextPlayer = NULL;

		if ( !pfnServerViewNextPlayer )
			pfnServerViewNextPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerViewNextPlayer" );

		APlayerController_execServerViewNextPlayer_Parms ServerViewNextPlayer_Parms;

		this->ProcessEvent( pfnServerViewNextPlayer, &ServerViewNextPlayer_Parms, NULL );
	};

	void ServerSetSpectatorLocation ( struct FVector NewLoc )
	{
		static UFunction* pfnServerSetSpectatorLocation = NULL;

		if ( !pfnServerSetSpectatorLocation )
			pfnServerSetSpectatorLocation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSetSpectatorLocation" );

		APlayerController_execServerSetSpectatorLocation_Parms ServerSetSpectatorLocation_Parms;
		memcpy( &ServerSetSpectatorLocation_Parms.NewLoc, &NewLoc, 0xC );

		this->ProcessEvent( pfnServerSetSpectatorLocation, &ServerSetSpectatorLocation_Parms, NULL );
	};

	bool IsSpectating ()
	{
		static UFunction* pfnIsSpectating = NULL;

		if ( !pfnIsSpectating )
			pfnIsSpectating = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsSpectating" );

		APlayerController_execIsSpectating_Parms IsSpectating_Parms;

		this->ProcessEvent( pfnIsSpectating, &IsSpectating_Parms, NULL );

		return IsSpectating_Parms.ReturnValue;
	};

	void CheckJumpOrDuck ()
	{
		static UFunction* pfnCheckJumpOrDuck = NULL;

		if ( !pfnCheckJumpOrDuck )
			pfnCheckJumpOrDuck = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CheckJumpOrDuck" );

		APlayerController_execCheckJumpOrDuck_Parms CheckJumpOrDuck_Parms;

		this->ProcessEvent( pfnCheckJumpOrDuck, &CheckJumpOrDuck_Parms, NULL );
	};

	void ClearDoubleClick ()
	{
		static UFunction* pfnClearDoubleClick = NULL;

		if ( !pfnClearDoubleClick )
			pfnClearDoubleClick = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClearDoubleClick" );

		APlayerController_execClearDoubleClick_Parms ClearDoubleClick_Parms;

		this->ProcessEvent( pfnClearDoubleClick, &ClearDoubleClick_Parms, NULL );
	};

	struct FRotator eventLimitViewRotation ( struct FRotator ViewRotation, float ViewPitchMin, float ViewPitchMax )
	{
		static UFunction* pfnLimitViewRotation = NULL;

		if ( !pfnLimitViewRotation )
			pfnLimitViewRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LimitViewRotation" );

		APlayerController_eventLimitViewRotation_Parms LimitViewRotation_Parms;
		memcpy( &LimitViewRotation_Parms.ViewRotation, &ViewRotation, 0xC );
		LimitViewRotation_Parms.ViewPitchMin = ViewPitchMin;
		LimitViewRotation_Parms.ViewPitchMax = ViewPitchMax;

		this->ProcessEvent( pfnLimitViewRotation, &LimitViewRotation_Parms, NULL );

		return LimitViewRotation_Parms.ReturnValue;
	};

	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
	{
		static UFunction* pfnProcessViewRotation = NULL;

		if ( !pfnProcessViewRotation )
			pfnProcessViewRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ProcessViewRotation" );

		APlayerController_execProcessViewRotation_Parms ProcessViewRotation_Parms;
		ProcessViewRotation_Parms.DeltaTime = DeltaTime;
		memcpy( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

		if ( out_ViewRotation )
			memcpy( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC ); // CPF_OutParm
	};

	void UpdateRotation ( float DeltaTime )
	{
		static UFunction* pfnUpdateRotation = NULL;

		if ( !pfnUpdateRotation )
			pfnUpdateRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UpdateRotation" );

		APlayerController_execUpdateRotation_Parms UpdateRotation_Parms;
		UpdateRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateRotation, &UpdateRotation_Parms, NULL );
	};

	void ViewShake ( float DeltaTime )
	{
		static UFunction* pfnViewShake = NULL;

		if ( !pfnViewShake )
			pfnViewShake = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ViewShake" );

		APlayerController_execViewShake_Parms ViewShake_Parms;
		ViewShake_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnViewShake, &ViewShake_Parms, NULL );
	};

	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetPlayerViewPoint = NULL;

		if ( !pfnGetPlayerViewPoint )
			pfnGetPlayerViewPoint = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPlayerViewPoint" );

		APlayerController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

		this->ProcessEvent( pfnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetPlayerViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetPlayerViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	void eventSpawnPlayerCamera ()
	{
		static UFunction* pfnSpawnPlayerCamera = NULL;

		if ( !pfnSpawnPlayerCamera )
			pfnSpawnPlayerCamera = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SpawnPlayerCamera" );

		APlayerController_eventSpawnPlayerCamera_Parms SpawnPlayerCamera_Parms;

		this->ProcessEvent( pfnSpawnPlayerCamera, &SpawnPlayerCamera_Parms, NULL );
	};

	void ServerVerifyViewTarget ()
	{
		static UFunction* pfnServerVerifyViewTarget = NULL;

		if ( !pfnServerVerifyViewTarget )
			pfnServerVerifyViewTarget = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerVerifyViewTarget" );

		APlayerController_execServerVerifyViewTarget_Parms ServerVerifyViewTarget_Parms;

		this->ProcessEvent( pfnServerVerifyViewTarget, &ServerVerifyViewTarget_Parms, NULL );
	};

	class AActor* GetViewTarget ()
	{
		static UFunction* pfnGetViewTarget = NULL;

		if ( !pfnGetViewTarget )
			pfnGetViewTarget = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetViewTarget" );

		APlayerController_execGetViewTarget_Parms GetViewTarget_Parms;

		pfnGetViewTarget->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetViewTarget, &GetViewTarget_Parms, NULL );
		pfnGetViewTarget->FunctionFlags |= 0x400;

		return GetViewTarget_Parms.ReturnValue;
	};

	void eventClientSetViewTarget ( class AActor* A, struct FViewTargetTransitionParams TransitionParams/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSetViewTarget = NULL;

		if ( !pfnClientSetViewTarget )
			pfnClientSetViewTarget = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetViewTarget" );

		APlayerController_eventClientSetViewTarget_Parms ClientSetViewTarget_Parms;
		ClientSetViewTarget_Parms.A = A;
		memcpy( &ClientSetViewTarget_Parms.TransitionParams, &TransitionParams, 0xC );

		this->ProcessEvent( pfnClientSetViewTarget, &ClientSetViewTarget_Parms, NULL );
	};

	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetViewTarget = NULL;

		if ( !pfnSetViewTarget )
			pfnSetViewTarget = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetViewTarget" );

		APlayerController_execSetViewTarget_Parms SetViewTarget_Parms;
		SetViewTarget_Parms.NewViewTarget = NewViewTarget;
		memcpy( &SetViewTarget_Parms.TransitionParams, &TransitionParams, 0xC );

		pfnSetViewTarget->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetViewTarget, &SetViewTarget_Parms, NULL );
		pfnSetViewTarget->FunctionFlags |= 0x400;
	};

	bool IsLocalPlayerController ()
	{
		static UFunction* pfnIsLocalPlayerController = NULL;

		if ( !pfnIsLocalPlayerController )
			pfnIsLocalPlayerController = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsLocalPlayerController" );

		APlayerController_execIsLocalPlayerController_Parms IsLocalPlayerController_Parms;

		pfnIsLocalPlayerController->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsLocalPlayerController, &IsLocalPlayerController_Parms, NULL );
		pfnIsLocalPlayerController->FunctionFlags |= 0x400;

		return IsLocalPlayerController_Parms.ReturnValue;
	};

	float eventGetFOVAngle ()
	{
		static UFunction* pfnGetFOVAngle = NULL;

		if ( !pfnGetFOVAngle )
			pfnGetFOVAngle = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetFOVAngle" );

		APlayerController_eventGetFOVAngle_Parms GetFOVAngle_Parms;

		this->ProcessEvent( pfnGetFOVAngle, &GetFOVAngle_Parms, NULL );

		return GetFOVAngle_Parms.ReturnValue;
	};

	void AdjustFOV ( float DeltaTime )
	{
		static UFunction* pfnAdjustFOV = NULL;

		if ( !pfnAdjustFOV )
			pfnAdjustFOV = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AdjustFOV" );

		APlayerController_execAdjustFOV_Parms AdjustFOV_Parms;
		AdjustFOV_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnAdjustFOV, &AdjustFOV_Parms, NULL );
	};

	bool eventNotifyLanded ( struct FVector HitNormal, class AActor* FloorActor )
	{
		static UFunction* pfnNotifyLanded = NULL;

		if ( !pfnNotifyLanded )
			pfnNotifyLanded = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyLanded" );

		APlayerController_eventNotifyLanded_Parms NotifyLanded_Parms;
		memcpy( &NotifyLanded_Parms.HitNormal, &HitNormal, 0xC );
		NotifyLanded_Parms.FloorActor = FloorActor;

		this->ProcessEvent( pfnNotifyLanded, &NotifyLanded_Parms, NULL );

		return NotifyLanded_Parms.ReturnValue;
	};

	float AimHelpDot ( unsigned long bInstantHit )
	{
		static UFunction* pfnAimHelpDot = NULL;

		if ( !pfnAimHelpDot )
			pfnAimHelpDot = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AimHelpDot" );

		APlayerController_execAimHelpDot_Parms AimHelpDot_Parms;
		AimHelpDot_Parms.bInstantHit = bInstantHit;

		this->ProcessEvent( pfnAimHelpDot, &AimHelpDot_Parms, NULL );

		return AimHelpDot_Parms.ReturnValue;
	};

	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc )
	{
		static UFunction* pfnGetAdjustedAimFor = NULL;

		if ( !pfnGetAdjustedAimFor )
			pfnGetAdjustedAimFor = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetAdjustedAimFor" );

		APlayerController_execGetAdjustedAimFor_Parms GetAdjustedAimFor_Parms;
		GetAdjustedAimFor_Parms.W = W;
		memcpy( &GetAdjustedAimFor_Parms.StartFireLoc, &StartFireLoc, 0xC );

		this->ProcessEvent( pfnGetAdjustedAimFor, &GetAdjustedAimFor_Parms, NULL );

		return GetAdjustedAimFor_Parms.ReturnValue;
	};

	void eventCameraLookAtFinished ( void* Action )
	{
		static UFunction* pfnCameraLookAtFinished = NULL;

		if ( !pfnCameraLookAtFinished )
			pfnCameraLookAtFinished = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CameraLookAtFinished" );

		APlayerController_eventCameraLookAtFinished_Parms CameraLookAtFinished_Parms;
		CameraLookAtFinished_Parms.Action = Action;

		this->ProcessEvent( pfnCameraLookAtFinished, &CameraLookAtFinished_Parms, NULL );
	};

	bool AimingHelp ( unsigned long bInstantHit )
	{
		static UFunction* pfnAimingHelp = NULL;

		if ( !pfnAimingHelp )
			pfnAimingHelp = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AimingHelp" );

		APlayerController_execAimingHelp_Parms AimingHelp_Parms;
		AimingHelp_Parms.bInstantHit = bInstantHit;

		this->ProcessEvent( pfnAimingHelp, &AimingHelp_Parms, NULL );

		return AimingHelp_Parms.ReturnValue;
	};

	void PlayerMove ( float DeltaTime )
	{
		static UFunction* pfnPlayerMove = NULL;

		if ( !pfnPlayerMove )
			pfnPlayerMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PlayerMove" );

		APlayerController_execPlayerMove_Parms PlayerMove_Parms;
		PlayerMove_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerMove, &PlayerMove_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PlayerTick" );

		APlayerController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void NotifyChangedWeapon ( class AWeapon* PreviousWeapon, class AWeapon* NewWeapon )
	{
		static UFunction* pfnNotifyChangedWeapon = NULL;

		if ( !pfnNotifyChangedWeapon )
			pfnNotifyChangedWeapon = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyChangedWeapon" );

		APlayerController_execNotifyChangedWeapon_Parms NotifyChangedWeapon_Parms;
		NotifyChangedWeapon_Parms.PreviousWeapon = PreviousWeapon;
		NotifyChangedWeapon_Parms.NewWeapon = NewWeapon;

		this->ProcessEvent( pfnNotifyChangedWeapon, &NotifyChangedWeapon_Parms, NULL );
	};

	void ClientGameEnded ( class AActor* EndGameFocus, unsigned long bIsWinner )
	{
		static UFunction* pfnClientGameEnded = NULL;

		if ( !pfnClientGameEnded )
			pfnClientGameEnded = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientGameEnded" );

		APlayerController_execClientGameEnded_Parms ClientGameEnded_Parms;
		ClientGameEnded_Parms.EndGameFocus = EndGameFocus;
		ClientGameEnded_Parms.bIsWinner = bIsWinner;

		this->ProcessEvent( pfnClientGameEnded, &ClientGameEnded_Parms, NULL );
	};

	void GameHasEnded ( class AActor* EndGameFocus/*CPF_OptionalParm*/, unsigned long bIsWinner/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGameHasEnded = NULL;

		if ( !pfnGameHasEnded )
			pfnGameHasEnded = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GameHasEnded" );

		APlayerController_execGameHasEnded_Parms GameHasEnded_Parms;
		GameHasEnded_Parms.EndGameFocus = EndGameFocus;
		GameHasEnded_Parms.bIsWinner = bIsWinner;

		this->ProcessEvent( pfnGameHasEnded, &GameHasEnded_Parms, NULL );
	};

	void ClientRestart ( class APawn* NewPawn )
	{
		static UFunction* pfnClientRestart = NULL;

		if ( !pfnClientRestart )
			pfnClientRestart = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientRestart" );

		APlayerController_execClientRestart_Parms ClientRestart_Parms;
		ClientRestart_Parms.NewPawn = NewPawn;

		this->ProcessEvent( pfnClientRestart, &ClientRestart_Parms, NULL );
	};

	void EnterStartState ()
	{
		static UFunction* pfnEnterStartState = NULL;

		if ( !pfnEnterStartState )
			pfnEnterStartState = UObject::FindObject< UFunction >( "Function Engine.PlayerController.EnterStartState" );

		APlayerController_execEnterStartState_Parms EnterStartState_Parms;

		this->ProcessEvent( pfnEnterStartState, &EnterStartState_Parms, NULL );
	};

	bool HasClientLoadedCurrentWorld ()
	{
		static UFunction* pfnHasClientLoadedCurrentWorld = NULL;

		if ( !pfnHasClientLoadedCurrentWorld )
			pfnHasClientLoadedCurrentWorld = UObject::FindObject< UFunction >( "Function Engine.PlayerController.HasClientLoadedCurrentWorld" );

		APlayerController_execHasClientLoadedCurrentWorld_Parms HasClientLoadedCurrentWorld_Parms;

		pfnHasClientLoadedCurrentWorld->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnHasClientLoadedCurrentWorld, &HasClientLoadedCurrentWorld_Parms, NULL );
		pfnHasClientLoadedCurrentWorld->FunctionFlags |= 0x400;

		return HasClientLoadedCurrentWorld_Parms.ReturnValue;
	};

	void eventNotifyLoadedWorld ( struct FName WorldPackageName, unsigned long bFinalDest )
	{
		static UFunction* pfnNotifyLoadedWorld = NULL;

		if ( !pfnNotifyLoadedWorld )
			pfnNotifyLoadedWorld = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NotifyLoadedWorld" );

		APlayerController_eventNotifyLoadedWorld_Parms NotifyLoadedWorld_Parms;
		memcpy( &NotifyLoadedWorld_Parms.WorldPackageName, &WorldPackageName, 0x8 );
		NotifyLoadedWorld_Parms.bFinalDest = bFinalDest;

		this->ProcessEvent( pfnNotifyLoadedWorld, &NotifyLoadedWorld_Parms, NULL );
	};

	void eventServerNotifyLoadedWorld ( struct FName WorldPackageName )
	{
		static UFunction* pfnServerNotifyLoadedWorld = NULL;

		if ( !pfnServerNotifyLoadedWorld )
			pfnServerNotifyLoadedWorld = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerNotifyLoadedWorld" );

		APlayerController_eventServerNotifyLoadedWorld_Parms ServerNotifyLoadedWorld_Parms;
		memcpy( &ServerNotifyLoadedWorld_Parms.WorldPackageName, &WorldPackageName, 0x8 );

		pfnServerNotifyLoadedWorld->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnServerNotifyLoadedWorld, &ServerNotifyLoadedWorld_Parms, NULL );
		pfnServerNotifyLoadedWorld->FunctionFlags |= 0x400;
	};

	void Restart ( unsigned long bVehicleTransition )
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Restart" );

		APlayerController_execRestart_Parms Restart_Parms;
		Restart_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	void ClientSetProgressTime ( float T )
	{
		static UFunction* pfnClientSetProgressTime = NULL;

		if ( !pfnClientSetProgressTime )
			pfnClientSetProgressTime = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetProgressTime" );

		APlayerController_execClientSetProgressTime_Parms ClientSetProgressTime_Parms;
		ClientSetProgressTime_Parms.T = T;

		this->ProcessEvent( pfnClientSetProgressTime, &ClientSetProgressTime_Parms, NULL );
	};

	void SetProgressTime ( float T )
	{
		static UFunction* pfnSetProgressTime = NULL;

		if ( !pfnSetProgressTime )
			pfnSetProgressTime = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetProgressTime" );

		APlayerController_execSetProgressTime_Parms SetProgressTime_Parms;
		SetProgressTime_Parms.T = T;

		this->ProcessEvent( pfnSetProgressTime, &SetProgressTime_Parms, NULL );
	};

	void ClientSetProgressMessage ( unsigned char MessageType, struct FString Message, struct FString Title/*CPF_OptionalParm*/, unsigned long bIgnoreFutureNetworkMessages/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSetProgressMessage = NULL;

		if ( !pfnClientSetProgressMessage )
			pfnClientSetProgressMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetProgressMessage" );

		APlayerController_execClientSetProgressMessage_Parms ClientSetProgressMessage_Parms;
		ClientSetProgressMessage_Parms.MessageType = MessageType;
		memcpy( &ClientSetProgressMessage_Parms.Message, &Message, 0xC );
		memcpy( &ClientSetProgressMessage_Parms.Title, &Title, 0xC );
		ClientSetProgressMessage_Parms.bIgnoreFutureNetworkMessages = bIgnoreFutureNetworkMessages;

		this->ProcessEvent( pfnClientSetProgressMessage, &ClientSetProgressMessage_Parms, NULL );
	};

	void SetProgressMessage ( unsigned char MessageType, struct FString Message, struct FString Title/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetProgressMessage = NULL;

		if ( !pfnSetProgressMessage )
			pfnSetProgressMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetProgressMessage" );

		APlayerController_execSetProgressMessage_Parms SetProgressMessage_Parms;
		SetProgressMessage_Parms.MessageType = MessageType;
		memcpy( &SetProgressMessage_Parms.Message, &Message, 0xC );
		memcpy( &SetProgressMessage_Parms.Title, &Title, 0xC );

		this->ProcessEvent( pfnSetProgressMessage, &SetProgressMessage_Parms, NULL );
	};

	void ClientClearProgressMessages ()
	{
		static UFunction* pfnClientClearProgressMessages = NULL;

		if ( !pfnClientClearProgressMessages )
			pfnClientClearProgressMessages = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientClearProgressMessages" );

		APlayerController_execClientClearProgressMessages_Parms ClientClearProgressMessages_Parms;

		this->ProcessEvent( pfnClientClearProgressMessages, &ClientClearProgressMessages_Parms, NULL );
	};

	void ClearProgressMessages ()
	{
		static UFunction* pfnClearProgressMessages = NULL;

		if ( !pfnClearProgressMessages )
			pfnClearProgressMessages = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClearProgressMessages" );

		APlayerController_execClearProgressMessages_Parms ClearProgressMessages_Parms;

		this->ProcessEvent( pfnClearProgressMessages, &ClearProgressMessages_Parms, NULL );
	};

	void SwitchLevel ( struct FString URL )
	{
		static UFunction* pfnSwitchLevel = NULL;

		if ( !pfnSwitchLevel )
			pfnSwitchLevel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SwitchLevel" );

		APlayerController_execSwitchLevel_Parms SwitchLevel_Parms;
		memcpy( &SwitchLevel_Parms.URL, &URL, 0xC );

		this->ProcessEvent( pfnSwitchLevel, &SwitchLevel_Parms, NULL );
	};

	void ServerChangeTeam ( int N )
	{
		static UFunction* pfnServerChangeTeam = NULL;

		if ( !pfnServerChangeTeam )
			pfnServerChangeTeam = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerChangeTeam" );

		APlayerController_execServerChangeTeam_Parms ServerChangeTeam_Parms;
		ServerChangeTeam_Parms.N = N;

		this->ProcessEvent( pfnServerChangeTeam, &ServerChangeTeam_Parms, NULL );
	};

	void ChangeTeam ( struct FString TeamName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ChangeTeam" );

		APlayerController_execChangeTeam_Parms ChangeTeam_Parms;
		memcpy( &ChangeTeam_Parms.TeamName, &TeamName, 0xC );

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );
	};

	void SwitchTeam ()
	{
		static UFunction* pfnSwitchTeam = NULL;

		if ( !pfnSwitchTeam )
			pfnSwitchTeam = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SwitchTeam" );

		APlayerController_execSwitchTeam_Parms SwitchTeam_Parms;

		this->ProcessEvent( pfnSwitchTeam, &SwitchTeam_Parms, NULL );
	};

	void ServerChangeName ( struct FString S )
	{
		static UFunction* pfnServerChangeName = NULL;

		if ( !pfnServerChangeName )
			pfnServerChangeName = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerChangeName" );

		APlayerController_execServerChangeName_Parms ServerChangeName_Parms;
		memcpy( &ServerChangeName_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnServerChangeName, &ServerChangeName_Parms, NULL );
	};

	void SetName ( struct FString S )
	{
		static UFunction* pfnSetName = NULL;

		if ( !pfnSetName )
			pfnSetName = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetName" );

		APlayerController_execSetName_Parms SetName_Parms;
		memcpy( &SetName_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnSetName, &SetName_Parms, NULL );
	};

	void ServerSuicide ()
	{
		static UFunction* pfnServerSuicide = NULL;

		if ( !pfnServerSuicide )
			pfnServerSuicide = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSuicide" );

		APlayerController_execServerSuicide_Parms ServerSuicide_Parms;

		this->ProcessEvent( pfnServerSuicide, &ServerSuicide_Parms, NULL );
	};

	void Suicide ()
	{
		static UFunction* pfnSuicide = NULL;

		if ( !pfnSuicide )
			pfnSuicide = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Suicide" );

		APlayerController_execSuicide_Parms Suicide_Parms;

		this->ProcessEvent( pfnSuicide, &Suicide_Parms, NULL );
	};

	bool TriggerInteracted ()
	{
		static UFunction* pfnTriggerInteracted = NULL;

		if ( !pfnTriggerInteracted )
			pfnTriggerInteracted = UObject::FindObject< UFunction >( "Function Engine.PlayerController.TriggerInteracted" );

		APlayerController_execTriggerInteracted_Parms TriggerInteracted_Parms;

		this->ProcessEvent( pfnTriggerInteracted, &TriggerInteracted_Parms, NULL );

		return TriggerInteracted_Parms.ReturnValue;
	};

	bool FindVehicleToDrive ()
	{
		static UFunction* pfnFindVehicleToDrive = NULL;

		if ( !pfnFindVehicleToDrive )
			pfnFindVehicleToDrive = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FindVehicleToDrive" );

		APlayerController_execFindVehicleToDrive_Parms FindVehicleToDrive_Parms;

		this->ProcessEvent( pfnFindVehicleToDrive, &FindVehicleToDrive_Parms, NULL );

		return FindVehicleToDrive_Parms.ReturnValue;
	};

	bool PerformedUseAction ()
	{
		static UFunction* pfnPerformedUseAction = NULL;

		if ( !pfnPerformedUseAction )
			pfnPerformedUseAction = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PerformedUseAction" );

		APlayerController_execPerformedUseAction_Parms PerformedUseAction_Parms;

		this->ProcessEvent( pfnPerformedUseAction, &PerformedUseAction_Parms, NULL );

		return PerformedUseAction_Parms.ReturnValue;
	};

	void ServerUse ()
	{
		static UFunction* pfnServerUse = NULL;

		if ( !pfnServerUse )
			pfnServerUse = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerUse" );

		APlayerController_execServerUse_Parms ServerUse_Parms;

		this->ProcessEvent( pfnServerUse, &ServerUse_Parms, NULL );
	};

	void Use ()
	{
		static UFunction* pfnUse = NULL;

		if ( !pfnUse )
			pfnUse = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Use" );

		APlayerController_execUse_Parms Use_Parms;

		this->ProcessEvent( pfnUse, &Use_Parms, NULL );
	};

	void GetTriggerUseList ( float interactDistanceToCheck, float crosshairDist, float minDot, unsigned long bUsuableOnly, TArray< class ATrigger* >* out_useList )
	{
		static UFunction* pfnGetTriggerUseList = NULL;

		if ( !pfnGetTriggerUseList )
			pfnGetTriggerUseList = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetTriggerUseList" );

		APlayerController_execGetTriggerUseList_Parms GetTriggerUseList_Parms;
		GetTriggerUseList_Parms.interactDistanceToCheck = interactDistanceToCheck;
		GetTriggerUseList_Parms.crosshairDist = crosshairDist;
		GetTriggerUseList_Parms.minDot = minDot;
		GetTriggerUseList_Parms.bUsuableOnly = bUsuableOnly;

		this->ProcessEvent( pfnGetTriggerUseList, &GetTriggerUseList_Parms, NULL );

		if ( out_useList )
			*out_useList = GetTriggerUseList_Parms.out_useList; // CPF_OutParm
	};

	void StopAltFire ( unsigned char FireModeNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStopAltFire = NULL;

		if ( !pfnStopAltFire )
			pfnStopAltFire = UObject::FindObject< UFunction >( "Function Engine.PlayerController.StopAltFire" );

		APlayerController_execStopAltFire_Parms StopAltFire_Parms;
		StopAltFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopAltFire, &StopAltFire_Parms, NULL );
	};

	void StartAltFire ( unsigned char FireModeNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStartAltFire = NULL;

		if ( !pfnStartAltFire )
			pfnStartAltFire = UObject::FindObject< UFunction >( "Function Engine.PlayerController.StartAltFire" );

		APlayerController_execStartAltFire_Parms StartAltFire_Parms;
		StartAltFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStartAltFire, &StartAltFire_Parms, NULL );
	};

	void StopFire ( unsigned char FireModeNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStopFire = NULL;

		if ( !pfnStopFire )
			pfnStopFire = UObject::FindObject< UFunction >( "Function Engine.PlayerController.StopFire" );

		APlayerController_execStopFire_Parms StopFire_Parms;
		StopFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStopFire, &StopFire_Parms, NULL );
	};

	void StartFire ( unsigned char FireModeNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnStartFire = NULL;

		if ( !pfnStartFire )
			pfnStartFire = UObject::FindObject< UFunction >( "Function Engine.PlayerController.StartFire" );

		APlayerController_execStartFire_Parms StartFire_Parms;
		StartFire_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnStartFire, &StartFire_Parms, NULL );
	};

	void NextWeapon ()
	{
		static UFunction* pfnNextWeapon = NULL;

		if ( !pfnNextWeapon )
			pfnNextWeapon = UObject::FindObject< UFunction >( "Function Engine.PlayerController.NextWeapon" );

		APlayerController_execNextWeapon_Parms NextWeapon_Parms;

		this->ProcessEvent( pfnNextWeapon, &NextWeapon_Parms, NULL );
	};

	void PrevWeapon ()
	{
		static UFunction* pfnPrevWeapon = NULL;

		if ( !pfnPrevWeapon )
			pfnPrevWeapon = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PrevWeapon" );

		APlayerController_execPrevWeapon_Parms PrevWeapon_Parms;

		this->ProcessEvent( pfnPrevWeapon, &PrevWeapon_Parms, NULL );
	};

	void ServerThrowWeapon ()
	{
		static UFunction* pfnServerThrowWeapon = NULL;

		if ( !pfnServerThrowWeapon )
			pfnServerThrowWeapon = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerThrowWeapon" );

		APlayerController_execServerThrowWeapon_Parms ServerThrowWeapon_Parms;

		this->ProcessEvent( pfnServerThrowWeapon, &ServerThrowWeapon_Parms, NULL );
	};

	void ThrowWeapon ()
	{
		static UFunction* pfnThrowWeapon = NULL;

		if ( !pfnThrowWeapon )
			pfnThrowWeapon = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ThrowWeapon" );

		APlayerController_execThrowWeapon_Parms ThrowWeapon_Parms;

		this->ProcessEvent( pfnThrowWeapon, &ThrowWeapon_Parms, NULL );
	};

	void UTrace ()
	{
		static UFunction* pfnUTrace = NULL;

		if ( !pfnUTrace )
			pfnUTrace = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UTrace" );

		APlayerController_execUTrace_Parms UTrace_Parms;

		this->ProcessEvent( pfnUTrace, &UTrace_Parms, NULL );
	};

	void ServerUTrace ()
	{
		static UFunction* pfnServerUTrace = NULL;

		if ( !pfnServerUTrace )
			pfnServerUTrace = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerUTrace" );

		APlayerController_execServerUTrace_Parms ServerUTrace_Parms;

		this->ProcessEvent( pfnServerUTrace, &ServerUTrace_Parms, NULL );
	};

	void eventConditionalPause ( unsigned long bDesiredPauseState )
	{
		static UFunction* pfnConditionalPause = NULL;

		if ( !pfnConditionalPause )
			pfnConditionalPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ConditionalPause" );

		APlayerController_eventConditionalPause_Parms ConditionalPause_Parms;
		ConditionalPause_Parms.bDesiredPauseState = bDesiredPauseState;

		this->ProcessEvent( pfnConditionalPause, &ConditionalPause_Parms, NULL );
	};

	void ShowMenu ()
	{
		static UFunction* pfnShowMenu = NULL;

		if ( !pfnShowMenu )
			pfnShowMenu = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ShowMenu" );

		APlayerController_execShowMenu_Parms ShowMenu_Parms;

		this->ProcessEvent( pfnShowMenu, &ShowMenu_Parms, NULL );
	};

	void ServerPause ()
	{
		static UFunction* pfnServerPause = NULL;

		if ( !pfnServerPause )
			pfnServerPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerPause" );

		APlayerController_execServerPause_Parms ServerPause_Parms;

		this->ProcessEvent( pfnServerPause, &ServerPause_Parms, NULL );
	};

	void Pause ()
	{
		static UFunction* pfnPause = NULL;

		if ( !pfnPause )
			pfnPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Pause" );

		APlayerController_execPause_Parms Pause_Parms;

		this->ProcessEvent( pfnPause, &Pause_Parms, NULL );
	};

	bool IsPaused ()
	{
		static UFunction* pfnIsPaused = NULL;

		if ( !pfnIsPaused )
			pfnIsPaused = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsPaused" );

		APlayerController_execIsPaused_Parms IsPaused_Parms;

		this->ProcessEvent( pfnIsPaused, &IsPaused_Parms, NULL );

		return IsPaused_Parms.ReturnValue;
	};

	void DebugPause ()
	{
		static UFunction* pfnDebugPause = NULL;

		if ( !pfnDebugPause )
			pfnDebugPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DebugPause" );

		APlayerController_execDebugPause_Parms DebugPause_Parms;

		this->ProcessEvent( pfnDebugPause, &DebugPause_Parms, NULL );
	};

	bool SetPause ( unsigned long bPause, struct FScriptDelegate CanUnpauseDelegate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetPause = NULL;

		if ( !pfnSetPause )
			pfnSetPause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetPause" );

		APlayerController_execSetPause_Parms SetPause_Parms;
		SetPause_Parms.bPause = bPause;
		memcpy( &SetPause_Parms.CanUnpauseDelegate, &CanUnpauseDelegate, 0xC );

		this->ProcessEvent( pfnSetPause, &SetPause_Parms, NULL );

		return SetPause_Parms.ReturnValue;
	};

	bool CanUnpause ()
	{
		static UFunction* pfnCanUnpause = NULL;

		if ( !pfnCanUnpause )
			pfnCanUnpause = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanUnpause" );

		APlayerController_execCanUnpause_Parms CanUnpause_Parms;

		this->ProcessEvent( pfnCanUnpause, &CanUnpause_Parms, NULL );

		return CanUnpause_Parms.ReturnValue;
	};

	void PauseRumbleForAllPlayers ( unsigned long bShouldPauseRumble/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPauseRumbleForAllPlayers = NULL;

		if ( !pfnPauseRumbleForAllPlayers )
			pfnPauseRumbleForAllPlayers = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PauseRumbleForAllPlayers" );

		APlayerController_execPauseRumbleForAllPlayers_Parms PauseRumbleForAllPlayers_Parms;
		PauseRumbleForAllPlayers_Parms.bShouldPauseRumble = bShouldPauseRumble;

		this->ProcessEvent( pfnPauseRumbleForAllPlayers, &PauseRumbleForAllPlayers_Parms, NULL );
	};

	void QuickLoad ()
	{
		static UFunction* pfnQuickLoad = NULL;

		if ( !pfnQuickLoad )
			pfnQuickLoad = UObject::FindObject< UFunction >( "Function Engine.PlayerController.QuickLoad" );

		APlayerController_execQuickLoad_Parms QuickLoad_Parms;

		this->ProcessEvent( pfnQuickLoad, &QuickLoad_Parms, NULL );
	};

	void QuickSave ()
	{
		static UFunction* pfnQuickSave = NULL;

		if ( !pfnQuickSave )
			pfnQuickSave = UObject::FindObject< UFunction >( "Function Engine.PlayerController.QuickSave" );

		APlayerController_execQuickSave_Parms QuickSave_Parms;

		this->ProcessEvent( pfnQuickSave, &QuickSave_Parms, NULL );
	};

	void LocalTravel ( struct FString URL )
	{
		static UFunction* pfnLocalTravel = NULL;

		if ( !pfnLocalTravel )
			pfnLocalTravel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LocalTravel" );

		APlayerController_execLocalTravel_Parms LocalTravel_Parms;
		memcpy( &LocalTravel_Parms.URL, &URL, 0xC );

		this->ProcessEvent( pfnLocalTravel, &LocalTravel_Parms, NULL );
	};

	void RestartLevel ()
	{
		static UFunction* pfnRestartLevel = NULL;

		if ( !pfnRestartLevel )
			pfnRestartLevel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RestartLevel" );

		APlayerController_execRestartLevel_Parms RestartLevel_Parms;

		this->ProcessEvent( pfnRestartLevel, &RestartLevel_Parms, NULL );
	};

	void ServerSpeech ( struct FName Type, int Index, struct FString Callsign )
	{
		static UFunction* pfnServerSpeech = NULL;

		if ( !pfnServerSpeech )
			pfnServerSpeech = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSpeech" );

		APlayerController_execServerSpeech_Parms ServerSpeech_Parms;
		memcpy( &ServerSpeech_Parms.Type, &Type, 0x8 );
		ServerSpeech_Parms.Index = Index;
		memcpy( &ServerSpeech_Parms.Callsign, &Callsign, 0xC );

		this->ProcessEvent( pfnServerSpeech, &ServerSpeech_Parms, NULL );
	};

	void Speech ( struct FName Type, int Index, struct FString Callsign )
	{
		static UFunction* pfnSpeech = NULL;

		if ( !pfnSpeech )
			pfnSpeech = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Speech" );

		APlayerController_execSpeech_Parms Speech_Parms;
		memcpy( &Speech_Parms.Type, &Type, 0x8 );
		Speech_Parms.Index = Index;
		memcpy( &Speech_Parms.Callsign, &Callsign, 0xC );

		this->ProcessEvent( pfnSpeech, &Speech_Parms, NULL );
	};

	void ServerRestartGame ()
	{
		static UFunction* pfnServerRestartGame = NULL;

		if ( !pfnServerRestartGame )
			pfnServerRestartGame = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerRestartGame" );

		APlayerController_execServerRestartGame_Parms ServerRestartGame_Parms;

		this->ProcessEvent( pfnServerRestartGame, &ServerRestartGame_Parms, NULL );
	};

	void HandleWalking ()
	{
		static UFunction* pfnHandleWalking = NULL;

		if ( !pfnHandleWalking )
			pfnHandleWalking = UObject::FindObject< UFunction >( "Function Engine.PlayerController.HandleWalking" );

		APlayerController_execHandleWalking_Parms HandleWalking_Parms;

		this->ProcessEvent( pfnHandleWalking, &HandleWalking_Parms, NULL );
	};

	void CallServerMove ( void* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, void* OldMove )
	{
		static UFunction* pfnCallServerMove = NULL;

		if ( !pfnCallServerMove )
			pfnCallServerMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CallServerMove" );

		APlayerController_execCallServerMove_Parms CallServerMove_Parms;
		CallServerMove_Parms.NewMove = NewMove;
		memcpy( &CallServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		CallServerMove_Parms.ClientRoll = ClientRoll;
		CallServerMove_Parms.View = View;
		CallServerMove_Parms.OldMove = OldMove;

		this->ProcessEvent( pfnCallServerMove, &CallServerMove_Parms, NULL );
	};

	void ReplicateMove ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot )
	{
		static UFunction* pfnReplicateMove = NULL;

		if ( !pfnReplicateMove )
			pfnReplicateMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ReplicateMove" );

		APlayerController_execReplicateMove_Parms ReplicateMove_Parms;
		ReplicateMove_Parms.DeltaTime = DeltaTime;
		memcpy( &ReplicateMove_Parms.newAccel, &newAccel, 0xC );
		ReplicateMove_Parms.DoubleClickMove = DoubleClickMove;
		memcpy( &ReplicateMove_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnReplicateMove, &ReplicateMove_Parms, NULL );
	};

	int CompressAccel ( int C )
	{
		static UFunction* pfnCompressAccel = NULL;

		if ( !pfnCompressAccel )
			pfnCompressAccel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CompressAccel" );

		APlayerController_execCompressAccel_Parms CompressAccel_Parms;
		CompressAccel_Parms.C = C;

		this->ProcessEvent( pfnCompressAccel, &CompressAccel_Parms, NULL );

		return CompressAccel_Parms.ReturnValue;
	};

	void* GetFreeMove ()
	{
		static UFunction* pfnGetFreeMove = NULL;

		if ( !pfnGetFreeMove )
			pfnGetFreeMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetFreeMove" );

		APlayerController_execGetFreeMove_Parms GetFreeMove_Parms;

		this->ProcessEvent( pfnGetFreeMove, &GetFreeMove_Parms, NULL );

		return GetFreeMove_Parms.ReturnValue;
	};

	void ClientUpdatePosition ()
	{
		static UFunction* pfnClientUpdatePosition = NULL;

		if ( !pfnClientUpdatePosition )
			pfnClientUpdatePosition = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientUpdatePosition" );

		APlayerController_execClientUpdatePosition_Parms ClientUpdatePosition_Parms;

		this->ProcessEvent( pfnClientUpdatePosition, &ClientUpdatePosition_Parms, NULL );
	};

	void ClearAckedMoves ()
	{
		static UFunction* pfnClearAckedMoves = NULL;

		if ( !pfnClearAckedMoves )
			pfnClearAckedMoves = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClearAckedMoves" );

		APlayerController_execClearAckedMoves_Parms ClearAckedMoves_Parms;

		this->ProcessEvent( pfnClearAckedMoves, &ClearAckedMoves_Parms, NULL );
	};

	void ServerUpdatePing ( int NewPing )
	{
		static UFunction* pfnServerUpdatePing = NULL;

		if ( !pfnServerUpdatePing )
			pfnServerUpdatePing = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerUpdatePing" );

		APlayerController_execServerUpdatePing_Parms ServerUpdatePing_Parms;
		ServerUpdatePing_Parms.NewPing = NewPing;

		this->ProcessEvent( pfnServerUpdatePing, &ServerUpdatePing_Parms, NULL );
	};

	void UpdateStateFromAdjustment ( struct FName NewState )
	{
		static UFunction* pfnUpdateStateFromAdjustment = NULL;

		if ( !pfnUpdateStateFromAdjustment )
			pfnUpdateStateFromAdjustment = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UpdateStateFromAdjustment" );

		APlayerController_execUpdateStateFromAdjustment_Parms UpdateStateFromAdjustment_Parms;
		memcpy( &UpdateStateFromAdjustment_Parms.NewState, &NewState, 0x8 );

		this->ProcessEvent( pfnUpdateStateFromAdjustment, &UpdateStateFromAdjustment_Parms, NULL );
	};

	void LongClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ )
	{
		static UFunction* pfnLongClientAdjustPosition = NULL;

		if ( !pfnLongClientAdjustPosition )
			pfnLongClientAdjustPosition = UObject::FindObject< UFunction >( "Function Engine.PlayerController.LongClientAdjustPosition" );

		APlayerController_execLongClientAdjustPosition_Parms LongClientAdjustPosition_Parms;
		LongClientAdjustPosition_Parms.TimeStamp = TimeStamp;
		memcpy( &LongClientAdjustPosition_Parms.NewState, &NewState, 0x8 );
		LongClientAdjustPosition_Parms.newPhysics = newPhysics;
		LongClientAdjustPosition_Parms.NewLocX = NewLocX;
		LongClientAdjustPosition_Parms.NewLocY = NewLocY;
		LongClientAdjustPosition_Parms.NewLocZ = NewLocZ;
		LongClientAdjustPosition_Parms.NewVelX = NewVelX;
		LongClientAdjustPosition_Parms.NewVelY = NewVelY;
		LongClientAdjustPosition_Parms.NewVelZ = NewVelZ;
		LongClientAdjustPosition_Parms.NewBase = NewBase;
		LongClientAdjustPosition_Parms.NewFloorX = NewFloorX;
		LongClientAdjustPosition_Parms.NewFloorY = NewFloorY;
		LongClientAdjustPosition_Parms.NewFloorZ = NewFloorZ;

		this->ProcessEvent( pfnLongClientAdjustPosition, &LongClientAdjustPosition_Parms, NULL );
	};

	void UpdatePing ( float TimeStamp )
	{
		static UFunction* pfnUpdatePing = NULL;

		if ( !pfnUpdatePing )
			pfnUpdatePing = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UpdatePing" );

		APlayerController_execUpdatePing_Parms UpdatePing_Parms;
		UpdatePing_Parms.TimeStamp = TimeStamp;

		this->ProcessEvent( pfnUpdatePing, &UpdatePing_Parms, NULL );
	};

	void ServerSetNetSpeed ( int NewSpeed )
	{
		static UFunction* pfnServerSetNetSpeed = NULL;

		if ( !pfnServerSetNetSpeed )
			pfnServerSetNetSpeed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSetNetSpeed" );

		APlayerController_execServerSetNetSpeed_Parms ServerSetNetSpeed_Parms;
		ServerSetNetSpeed_Parms.NewSpeed = NewSpeed;

		this->ProcessEvent( pfnServerSetNetSpeed, &ServerSetNetSpeed_Parms, NULL );
	};

	void ClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase )
	{
		static UFunction* pfnClientAdjustPosition = NULL;

		if ( !pfnClientAdjustPosition )
			pfnClientAdjustPosition = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientAdjustPosition" );

		APlayerController_execClientAdjustPosition_Parms ClientAdjustPosition_Parms;
		ClientAdjustPosition_Parms.TimeStamp = TimeStamp;
		memcpy( &ClientAdjustPosition_Parms.NewState, &NewState, 0x8 );
		ClientAdjustPosition_Parms.newPhysics = newPhysics;
		ClientAdjustPosition_Parms.NewLocX = NewLocX;
		ClientAdjustPosition_Parms.NewLocY = NewLocY;
		ClientAdjustPosition_Parms.NewLocZ = NewLocZ;
		ClientAdjustPosition_Parms.NewVelX = NewVelX;
		ClientAdjustPosition_Parms.NewVelY = NewVelY;
		ClientAdjustPosition_Parms.NewVelZ = NewVelZ;
		ClientAdjustPosition_Parms.NewBase = NewBase;

		this->ProcessEvent( pfnClientAdjustPosition, &ClientAdjustPosition_Parms, NULL );
	};

	void ClientAckGoodMove ( float TimeStamp )
	{
		static UFunction* pfnClientAckGoodMove = NULL;

		if ( !pfnClientAckGoodMove )
			pfnClientAckGoodMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientAckGoodMove" );

		APlayerController_execClientAckGoodMove_Parms ClientAckGoodMove_Parms;
		ClientAckGoodMove_Parms.TimeStamp = TimeStamp;

		this->ProcessEvent( pfnClientAckGoodMove, &ClientAckGoodMove_Parms, NULL );
	};

	void ClientCapBandwidth ( int Cap )
	{
		static UFunction* pfnClientCapBandwidth = NULL;

		if ( !pfnClientCapBandwidth )
			pfnClientCapBandwidth = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientCapBandwidth" );

		APlayerController_execClientCapBandwidth_Parms ClientCapBandwidth_Parms;
		ClientCapBandwidth_Parms.Cap = Cap;

		this->ProcessEvent( pfnClientCapBandwidth, &ClientCapBandwidth_Parms, NULL );
	};

	void ShortClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase )
	{
		static UFunction* pfnShortClientAdjustPosition = NULL;

		if ( !pfnShortClientAdjustPosition )
			pfnShortClientAdjustPosition = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ShortClientAdjustPosition" );

		APlayerController_execShortClientAdjustPosition_Parms ShortClientAdjustPosition_Parms;
		ShortClientAdjustPosition_Parms.TimeStamp = TimeStamp;
		memcpy( &ShortClientAdjustPosition_Parms.NewState, &NewState, 0x8 );
		ShortClientAdjustPosition_Parms.newPhysics = newPhysics;
		ShortClientAdjustPosition_Parms.NewLocX = NewLocX;
		ShortClientAdjustPosition_Parms.NewLocY = NewLocY;
		ShortClientAdjustPosition_Parms.NewLocZ = NewLocZ;
		ShortClientAdjustPosition_Parms.NewBase = NewBase;

		this->ProcessEvent( pfnShortClientAdjustPosition, &ShortClientAdjustPosition_Parms, NULL );
	};

	void VeryShortClientAdjustPosition ( float TimeStamp, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase )
	{
		static UFunction* pfnVeryShortClientAdjustPosition = NULL;

		if ( !pfnVeryShortClientAdjustPosition )
			pfnVeryShortClientAdjustPosition = UObject::FindObject< UFunction >( "Function Engine.PlayerController.VeryShortClientAdjustPosition" );

		APlayerController_execVeryShortClientAdjustPosition_Parms VeryShortClientAdjustPosition_Parms;
		VeryShortClientAdjustPosition_Parms.TimeStamp = TimeStamp;
		VeryShortClientAdjustPosition_Parms.NewLocX = NewLocX;
		VeryShortClientAdjustPosition_Parms.NewLocY = NewLocY;
		VeryShortClientAdjustPosition_Parms.NewLocZ = NewLocZ;
		VeryShortClientAdjustPosition_Parms.NewBase = NewBase;

		this->ProcessEvent( pfnVeryShortClientAdjustPosition, &VeryShortClientAdjustPosition_Parms, NULL );
	};

	void MoveAutonomous ( float DeltaTime, int CompressedFlags, struct FVector newAccel, struct FRotator DeltaRot )
	{
		static UFunction* pfnMoveAutonomous = NULL;

		if ( !pfnMoveAutonomous )
			pfnMoveAutonomous = UObject::FindObject< UFunction >( "Function Engine.PlayerController.MoveAutonomous" );

		APlayerController_execMoveAutonomous_Parms MoveAutonomous_Parms;
		MoveAutonomous_Parms.DeltaTime = DeltaTime;
		MoveAutonomous_Parms.CompressedFlags = CompressedFlags;
		memcpy( &MoveAutonomous_Parms.newAccel, &newAccel, 0xC );
		memcpy( &MoveAutonomous_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnMoveAutonomous, &MoveAutonomous_Parms, NULL );
	};

	void ProcessMove ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot )
	{
		static UFunction* pfnProcessMove = NULL;

		if ( !pfnProcessMove )
			pfnProcessMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ProcessMove" );

		APlayerController_execProcessMove_Parms ProcessMove_Parms;
		ProcessMove_Parms.DeltaTime = DeltaTime;
		memcpy( &ProcessMove_Parms.newAccel, &newAccel, 0xC );
		ProcessMove_Parms.DoubleClickMove = DoubleClickMove;
		memcpy( &ProcessMove_Parms.DeltaRot, &DeltaRot, 0xC );

		this->ProcessEvent( pfnProcessMove, &ProcessMove_Parms, NULL );
	};

	void ProcessDrive ( float InForward, float InStrafe, float InUp, unsigned long InJump )
	{
		static UFunction* pfnProcessDrive = NULL;

		if ( !pfnProcessDrive )
			pfnProcessDrive = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ProcessDrive" );

		APlayerController_execProcessDrive_Parms ProcessDrive_Parms;
		ProcessDrive_Parms.InForward = InForward;
		ProcessDrive_Parms.InStrafe = InStrafe;
		ProcessDrive_Parms.InUp = InUp;
		ProcessDrive_Parms.InJump = InJump;

		this->ProcessEvent( pfnProcessDrive, &ProcessDrive_Parms, NULL );
	};

	void ServerDrive ( float InForward, float InStrafe, float aUp, unsigned long InJump, int View )
	{
		static UFunction* pfnServerDrive = NULL;

		if ( !pfnServerDrive )
			pfnServerDrive = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerDrive" );

		APlayerController_execServerDrive_Parms ServerDrive_Parms;
		ServerDrive_Parms.InForward = InForward;
		ServerDrive_Parms.InStrafe = InStrafe;
		ServerDrive_Parms.aUp = aUp;
		ServerDrive_Parms.InJump = InJump;
		ServerDrive_Parms.View = View;

		this->ProcessEvent( pfnServerDrive, &ServerDrive_Parms, NULL );
	};

	void eventSendClientAdjustment ()
	{
		static UFunction* pfnSendClientAdjustment = NULL;

		if ( !pfnSendClientAdjustment )
			pfnSendClientAdjustment = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SendClientAdjustment" );

		APlayerController_eventSendClientAdjustment_Parms SendClientAdjustment_Parms;

		this->ProcessEvent( pfnSendClientAdjustment, &SendClientAdjustment_Parms, NULL );
	};

	void ServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, int MoveFlags, unsigned char ClientRoll, int View )
	{
		static UFunction* pfnServerMove = NULL;

		if ( !pfnServerMove )
			pfnServerMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerMove" );

		APlayerController_execServerMove_Parms ServerMove_Parms;
		ServerMove_Parms.TimeStamp = TimeStamp;
		memcpy( &ServerMove_Parms.InAccel, &InAccel, 0xC );
		memcpy( &ServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		ServerMove_Parms.MoveFlags = MoveFlags;
		ServerMove_Parms.ClientRoll = ClientRoll;
		ServerMove_Parms.View = View;

		this->ProcessEvent( pfnServerMove, &ServerMove_Parms, NULL );
	};

	void OldServerMove ( float OldTimeStamp, unsigned char OldAccelX, unsigned char OldAccelY, unsigned char OldAccelZ, int OldMoveFlags )
	{
		static UFunction* pfnOldServerMove = NULL;

		if ( !pfnOldServerMove )
			pfnOldServerMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OldServerMove" );

		APlayerController_execOldServerMove_Parms OldServerMove_Parms;
		OldServerMove_Parms.OldTimeStamp = OldTimeStamp;
		OldServerMove_Parms.OldAccelX = OldAccelX;
		OldServerMove_Parms.OldAccelY = OldAccelY;
		OldServerMove_Parms.OldAccelZ = OldAccelZ;
		OldServerMove_Parms.OldMoveFlags = OldMoveFlags;

		this->ProcessEvent( pfnOldServerMove, &OldServerMove_Parms, NULL );
	};

	void DualServerMove ( float TimeStamp0, struct FVector InAccel0, int PendingFlags, int View0, float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, int NewFlags, unsigned char ClientRoll, int View )
	{
		static UFunction* pfnDualServerMove = NULL;

		if ( !pfnDualServerMove )
			pfnDualServerMove = UObject::FindObject< UFunction >( "Function Engine.PlayerController.DualServerMove" );

		APlayerController_execDualServerMove_Parms DualServerMove_Parms;
		DualServerMove_Parms.TimeStamp0 = TimeStamp0;
		memcpy( &DualServerMove_Parms.InAccel0, &InAccel0, 0xC );
		DualServerMove_Parms.PendingFlags = PendingFlags;
		DualServerMove_Parms.View0 = View0;
		DualServerMove_Parms.TimeStamp = TimeStamp;
		memcpy( &DualServerMove_Parms.InAccel, &InAccel, 0xC );
		memcpy( &DualServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
		DualServerMove_Parms.NewFlags = NewFlags;
		DualServerMove_Parms.ClientRoll = ClientRoll;
		DualServerMove_Parms.View = View;

		this->ProcessEvent( pfnDualServerMove, &DualServerMove_Parms, NULL );
	};

	void ForceDeathUpdate ()
	{
		static UFunction* pfnForceDeathUpdate = NULL;

		if ( !pfnForceDeathUpdate )
			pfnForceDeathUpdate = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ForceDeathUpdate" );

		APlayerController_execForceDeathUpdate_Parms ForceDeathUpdate_Parms;

		this->ProcessEvent( pfnForceDeathUpdate, &ForceDeathUpdate_Parms, NULL );
	};

	void ClientVoiceMessage ( class APlayerReplicationInfo* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, unsigned char messageID )
	{
		static UFunction* pfnClientVoiceMessage = NULL;

		if ( !pfnClientVoiceMessage )
			pfnClientVoiceMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientVoiceMessage" );

		APlayerController_execClientVoiceMessage_Parms ClientVoiceMessage_Parms;
		ClientVoiceMessage_Parms.Sender = Sender;
		ClientVoiceMessage_Parms.Recipient = Recipient;
		memcpy( &ClientVoiceMessage_Parms.MessageType, &MessageType, 0x8 );
		ClientVoiceMessage_Parms.messageID = messageID;

		this->ProcessEvent( pfnClientVoiceMessage, &ClientVoiceMessage_Parms, NULL );
	};

	bool UsingFirstPersonCamera ()
	{
		static UFunction* pfnUsingFirstPersonCamera = NULL;

		if ( !pfnUsingFirstPersonCamera )
			pfnUsingFirstPersonCamera = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UsingFirstPersonCamera" );

		APlayerController_execUsingFirstPersonCamera_Parms UsingFirstPersonCamera_Parms;

		this->ProcessEvent( pfnUsingFirstPersonCamera, &UsingFirstPersonCamera_Parms, NULL );

		return UsingFirstPersonCamera_Parms.ReturnValue;
	};

	void eventClientSetCameraFade ( unsigned long bEnableFading, struct FColor FadeColor/*CPF_OptionalParm*/, struct FVector2D FadeAlpha/*CPF_OptionalParm*/, float FadeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientSetCameraFade = NULL;

		if ( !pfnClientSetCameraFade )
			pfnClientSetCameraFade = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetCameraFade" );

		APlayerController_eventClientSetCameraFade_Parms ClientSetCameraFade_Parms;
		ClientSetCameraFade_Parms.bEnableFading = bEnableFading;
		memcpy( &ClientSetCameraFade_Parms.FadeColor, &FadeColor, 0x4 );
		memcpy( &ClientSetCameraFade_Parms.FadeAlpha, &FadeAlpha, 0x8 );
		ClientSetCameraFade_Parms.FadeTime = FadeTime;

		this->ProcessEvent( pfnClientSetCameraFade, &ClientSetCameraFade_Parms, NULL );
	};

	void eventResetCameraMode ()
	{
		static UFunction* pfnResetCameraMode = NULL;

		if ( !pfnResetCameraMode )
			pfnResetCameraMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ResetCameraMode" );

		APlayerController_eventResetCameraMode_Parms ResetCameraMode_Parms;

		this->ProcessEvent( pfnResetCameraMode, &ResetCameraMode_Parms, NULL );
	};

	void SetCameraMode ( struct FName NewCamMode )
	{
		static UFunction* pfnSetCameraMode = NULL;

		if ( !pfnSetCameraMode )
			pfnSetCameraMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetCameraMode" );

		APlayerController_execSetCameraMode_Parms SetCameraMode_Parms;
		memcpy( &SetCameraMode_Parms.NewCamMode, &NewCamMode, 0x8 );

		this->ProcessEvent( pfnSetCameraMode, &SetCameraMode_Parms, NULL );
	};

	void ClientSetCameraMode ( struct FName NewCamMode )
	{
		static UFunction* pfnClientSetCameraMode = NULL;

		if ( !pfnClientSetCameraMode )
			pfnClientSetCameraMode = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetCameraMode" );

		APlayerController_execClientSetCameraMode_Parms ClientSetCameraMode_Parms;
		memcpy( &ClientSetCameraMode_Parms.NewCamMode, &NewCamMode, 0x8 );

		this->ProcessEvent( pfnClientSetCameraMode, &ClientSetCameraMode_Parms, NULL );
	};

	void ServerCamera ( struct FName NewMode )
	{
		static UFunction* pfnServerCamera = NULL;

		if ( !pfnServerCamera )
			pfnServerCamera = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerCamera" );

		APlayerController_execServerCamera_Parms ServerCamera_Parms;
		memcpy( &ServerCamera_Parms.NewMode, &NewMode, 0x8 );

		this->ProcessEvent( pfnServerCamera, &ServerCamera_Parms, NULL );
	};

	void Camera ( struct FName NewMode )
	{
		static UFunction* pfnCamera = NULL;

		if ( !pfnCamera )
			pfnCamera = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Camera" );

		APlayerController_execCamera_Parms Camera_Parms;
		memcpy( &Camera_Parms.NewMode, &NewMode, 0x8 );

		this->ProcessEvent( pfnCamera, &Camera_Parms, NULL );
	};

	void eventPreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel )
	{
		static UFunction* pfnPreClientTravel = NULL;

		if ( !pfnPreClientTravel )
			pfnPreClientTravel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PreClientTravel" );

		APlayerController_eventPreClientTravel_Parms PreClientTravel_Parms;
		memcpy( &PreClientTravel_Parms.PendingURL, &PendingURL, 0xC );
		PreClientTravel_Parms.TravelType = TravelType;
		PreClientTravel_Parms.bIsSeamlessTravel = bIsSeamlessTravel;

		this->ProcessEvent( pfnPreClientTravel, &PreClientTravel_Parms, NULL );
	};

	void ServerTeamSay ( struct FString msg )
	{
		static UFunction* pfnServerTeamSay = NULL;

		if ( !pfnServerTeamSay )
			pfnServerTeamSay = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerTeamSay" );

		APlayerController_execServerTeamSay_Parms ServerTeamSay_Parms;
		memcpy( &ServerTeamSay_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnServerTeamSay, &ServerTeamSay_Parms, NULL );
	};

	void TeamSay ( struct FString msg )
	{
		static UFunction* pfnTeamSay = NULL;

		if ( !pfnTeamSay )
			pfnTeamSay = UObject::FindObject< UFunction >( "Function Engine.PlayerController.TeamSay" );

		APlayerController_execTeamSay_Parms TeamSay_Parms;
		memcpy( &TeamSay_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnTeamSay, &TeamSay_Parms, NULL );
	};

	void ServerSay ( struct FString msg )
	{
		static UFunction* pfnServerSay = NULL;

		if ( !pfnServerSay )
			pfnServerSay = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSay" );

		APlayerController_execServerSay_Parms ServerSay_Parms;
		memcpy( &ServerSay_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnServerSay, &ServerSay_Parms, NULL );
	};

	void Say ( struct FString msg )
	{
		static UFunction* pfnSay = NULL;

		if ( !pfnSay )
			pfnSay = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Say" );

		APlayerController_execSay_Parms Say_Parms;
		memcpy( &Say_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnSay, &Say_Parms, NULL );
	};

	bool AllowTextMessage ( struct FString msg )
	{
		static UFunction* pfnAllowTextMessage = NULL;

		if ( !pfnAllowTextMessage )
			pfnAllowTextMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AllowTextMessage" );

		APlayerController_execAllowTextMessage_Parms AllowTextMessage_Parms;
		memcpy( &AllowTextMessage_Parms.msg, &msg, 0xC );

		this->ProcessEvent( pfnAllowTextMessage, &AllowTextMessage_Parms, NULL );

		return AllowTextMessage_Parms.ReturnValue;
	};

	void ServerMutate ( struct FString MutateString )
	{
		static UFunction* pfnServerMutate = NULL;

		if ( !pfnServerMutate )
			pfnServerMutate = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerMutate" );

		APlayerController_execServerMutate_Parms ServerMutate_Parms;
		memcpy( &ServerMutate_Parms.MutateString, &MutateString, 0xC );

		this->ProcessEvent( pfnServerMutate, &ServerMutate_Parms, NULL );
	};

	void Mutate ( struct FString MutateString )
	{
		static UFunction* pfnMutate = NULL;

		if ( !pfnMutate )
			pfnMutate = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Mutate" );

		APlayerController_execMutate_Parms Mutate_Parms;
		memcpy( &Mutate_Parms.MutateString, &MutateString, 0xC );

		this->ProcessEvent( pfnMutate, &Mutate_Parms, NULL );
	};

	void FOV ( float F )
	{
		static UFunction* pfnFOV = NULL;

		if ( !pfnFOV )
			pfnFOV = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FOV" );

		APlayerController_execFOV_Parms FOV_Parms;
		FOV_Parms.F = F;

		this->ProcessEvent( pfnFOV, &FOV_Parms, NULL );
	};

	void ResetFOV ()
	{
		static UFunction* pfnResetFOV = NULL;

		if ( !pfnResetFOV )
			pfnResetFOV = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ResetFOV" );

		APlayerController_execResetFOV_Parms ResetFOV_Parms;

		this->ProcessEvent( pfnResetFOV, &ResetFOV_Parms, NULL );
	};

	void SetFOV ( float NewFOV )
	{
		static UFunction* pfnSetFOV = NULL;

		if ( !pfnSetFOV )
			pfnSetFOV = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetFOV" );

		APlayerController_execSetFOV_Parms SetFOV_Parms;
		SetFOV_Parms.NewFOV = NewFOV;

		this->ProcessEvent( pfnSetFOV, &SetFOV_Parms, NULL );
	};

	void FixFOV ()
	{
		static UFunction* pfnFixFOV = NULL;

		if ( !pfnFixFOV )
			pfnFixFOV = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FixFOV" );

		APlayerController_execFixFOV_Parms FixFOV_Parms;

		this->ProcessEvent( pfnFixFOV, &FixFOV_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Destroyed" );

		APlayerController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventClearOnlineDelegates ()
	{
		static UFunction* pfnClearOnlineDelegates = NULL;

		if ( !pfnClearOnlineDelegates )
			pfnClearOnlineDelegates = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClearOnlineDelegates" );

		APlayerController_eventClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

		this->ProcessEvent( pfnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
	};

	void RegisterOnlineDelegates ()
	{
		static UFunction* pfnRegisterOnlineDelegates = NULL;

		if ( !pfnRegisterOnlineDelegates )
			pfnRegisterOnlineDelegates = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RegisterOnlineDelegates" );

		APlayerController_execRegisterOnlineDelegates_Parms RegisterOnlineDelegates_Parms;

		this->ProcessEvent( pfnRegisterOnlineDelegates, &RegisterOnlineDelegates_Parms, NULL );
	};

	void PlayBeepSound ()
	{
		static UFunction* pfnPlayBeepSound = NULL;

		if ( !pfnPlayBeepSound )
			pfnPlayBeepSound = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PlayBeepSound" );

		APlayerController_execPlayBeepSound_Parms PlayBeepSound_Parms;

		this->ProcessEvent( pfnPlayBeepSound, &PlayBeepSound_Parms, NULL );
	};

	void eventTeamMessage ( class APlayerReplicationInfo* PRI, struct FString S, struct FName Type, float MsgLifeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTeamMessage = NULL;

		if ( !pfnTeamMessage )
			pfnTeamMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.TeamMessage" );

		APlayerController_eventTeamMessage_Parms TeamMessage_Parms;
		TeamMessage_Parms.PRI = PRI;
		memcpy( &TeamMessage_Parms.S, &S, 0xC );
		memcpy( &TeamMessage_Parms.Type, &Type, 0x8 );
		TeamMessage_Parms.MsgLifeTime = MsgLifeTime;

		this->ProcessEvent( pfnTeamMessage, &TeamMessage_Parms, NULL );
	};

	void SpeakTTS ( struct FString S, class APlayerReplicationInfo* PRI/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpeakTTS = NULL;

		if ( !pfnSpeakTTS )
			pfnSpeakTTS = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SpeakTTS" );

		APlayerController_execSpeakTTS_Parms SpeakTTS_Parms;
		memcpy( &SpeakTTS_Parms.S, &S, 0xC );
		SpeakTTS_Parms.PRI = PRI;

		this->ProcessEvent( pfnSpeakTTS, &SpeakTTS_Parms, NULL );
	};

	void TeamTalk ()
	{
		static UFunction* pfnTeamTalk = NULL;

		if ( !pfnTeamTalk )
			pfnTeamTalk = UObject::FindObject< UFunction >( "Function Engine.PlayerController.TeamTalk" );

		APlayerController_execTeamTalk_Parms TeamTalk_Parms;

		this->ProcessEvent( pfnTeamTalk, &TeamTalk_Parms, NULL );
	};

	void Talk ()
	{
		static UFunction* pfnTalk = NULL;

		if ( !pfnTalk )
			pfnTalk = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Talk" );

		APlayerController_execTalk_Parms Talk_Parms;

		this->ProcessEvent( pfnTalk, &Talk_Parms, NULL );
	};

	void* CreateTTSSoundCue ( struct FString StrToSpeak, class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCreateTTSSoundCue = NULL;

		if ( !pfnCreateTTSSoundCue )
			pfnCreateTTSSoundCue = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CreateTTSSoundCue" );

		APlayerController_execCreateTTSSoundCue_Parms CreateTTSSoundCue_Parms;
		memcpy( &CreateTTSSoundCue_Parms.StrToSpeak, &StrToSpeak, 0xC );
		CreateTTSSoundCue_Parms.PRI = PRI;

		pfnCreateTTSSoundCue->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreateTTSSoundCue, &CreateTTSSoundCue_Parms, NULL );
		pfnCreateTTSSoundCue->FunctionFlags |= 0x400;

		return CreateTTSSoundCue_Parms.ReturnValue;
	};

	bool AllowTTSMessageFrom ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnAllowTTSMessageFrom = NULL;

		if ( !pfnAllowTTSMessageFrom )
			pfnAllowTTSMessageFrom = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AllowTTSMessageFrom" );

		APlayerController_execAllowTTSMessageFrom_Parms AllowTTSMessageFrom_Parms;
		AllowTTSMessageFrom_Parms.PRI = PRI;

		this->ProcessEvent( pfnAllowTTSMessageFrom, &AllowTTSMessageFrom_Parms, NULL );

		return AllowTTSMessageFrom_Parms.ReturnValue;
	};

	bool CanCommunicate ()
	{
		static UFunction* pfnCanCommunicate = NULL;

		if ( !pfnCanCommunicate )
			pfnCanCommunicate = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanCommunicate" );

		APlayerController_execCanCommunicate_Parms CanCommunicate_Parms;

		this->ProcessEvent( pfnCanCommunicate, &CanCommunicate_Parms, NULL );

		return CanCommunicate_Parms.ReturnValue;
	};

	void eventClientMessage ( struct FString S, struct FName Type/*CPF_OptionalParm*/, float MsgLifeTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientMessage = NULL;

		if ( !pfnClientMessage )
			pfnClientMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientMessage" );

		APlayerController_eventClientMessage_Parms ClientMessage_Parms;
		memcpy( &ClientMessage_Parms.S, &S, 0xC );
		memcpy( &ClientMessage_Parms.Type, &Type, 0x8 );
		ClientMessage_Parms.MsgLifeTime = MsgLifeTime;

		this->ProcessEvent( pfnClientMessage, &ClientMessage_Parms, NULL );
	};

	void ClientPlayActorFaceFXAnim ( class AActor* SourceActor, void* AnimSet, struct FString GroupName, struct FString SeqName, void* SoundCueToPlay )
	{
		static UFunction* pfnClientPlayActorFaceFXAnim = NULL;

		if ( !pfnClientPlayActorFaceFXAnim )
			pfnClientPlayActorFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientPlayActorFaceFXAnim" );

		APlayerController_execClientPlayActorFaceFXAnim_Parms ClientPlayActorFaceFXAnim_Parms;
		ClientPlayActorFaceFXAnim_Parms.SourceActor = SourceActor;
		ClientPlayActorFaceFXAnim_Parms.AnimSet = AnimSet;
		memcpy( &ClientPlayActorFaceFXAnim_Parms.GroupName, &GroupName, 0xC );
		memcpy( &ClientPlayActorFaceFXAnim_Parms.SeqName, &SeqName, 0xC );
		ClientPlayActorFaceFXAnim_Parms.SoundCueToPlay = SoundCueToPlay;

		this->ProcessEvent( pfnClientPlayActorFaceFXAnim, &ClientPlayActorFaceFXAnim_Parms, NULL );
	};

	void eventKismet_ClientStopSound ( void* ASound, class AActor* SourceActor, float FadeOutTime )
	{
		static UFunction* pfnKismet_ClientStopSound = NULL;

		if ( !pfnKismet_ClientStopSound )
			pfnKismet_ClientStopSound = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Kismet_ClientStopSound" );

		APlayerController_eventKismet_ClientStopSound_Parms Kismet_ClientStopSound_Parms;
		Kismet_ClientStopSound_Parms.ASound = ASound;
		Kismet_ClientStopSound_Parms.SourceActor = SourceActor;
		Kismet_ClientStopSound_Parms.FadeOutTime = FadeOutTime;

		this->ProcessEvent( pfnKismet_ClientStopSound, &Kismet_ClientStopSound_Parms, NULL );
	};

	void eventKismet_ClientPlaySound ( void* ASound, class AActor* SourceActor, float VolumeMultiplier, float PitchMultiplier, float FadeInTime, unsigned long bSuppressSubtitles, unsigned long bSuppressSpatialization )
	{
		static UFunction* pfnKismet_ClientPlaySound = NULL;

		if ( !pfnKismet_ClientPlaySound )
			pfnKismet_ClientPlaySound = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Kismet_ClientPlaySound" );

		APlayerController_eventKismet_ClientPlaySound_Parms Kismet_ClientPlaySound_Parms;
		Kismet_ClientPlaySound_Parms.ASound = ASound;
		Kismet_ClientPlaySound_Parms.SourceActor = SourceActor;
		Kismet_ClientPlaySound_Parms.VolumeMultiplier = VolumeMultiplier;
		Kismet_ClientPlaySound_Parms.PitchMultiplier = PitchMultiplier;
		Kismet_ClientPlaySound_Parms.FadeInTime = FadeInTime;
		Kismet_ClientPlaySound_Parms.bSuppressSubtitles = bSuppressSubtitles;
		Kismet_ClientPlaySound_Parms.bSuppressSpatialization = bSuppressSpatialization;

		this->ProcessEvent( pfnKismet_ClientPlaySound, &Kismet_ClientPlaySound_Parms, NULL );
	};

	bool IsClosestLocalPlayerToActor ( class AActor* TheActor )
	{
		static UFunction* pfnIsClosestLocalPlayerToActor = NULL;

		if ( !pfnIsClosestLocalPlayerToActor )
			pfnIsClosestLocalPlayerToActor = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsClosestLocalPlayerToActor" );

		APlayerController_execIsClosestLocalPlayerToActor_Parms IsClosestLocalPlayerToActor_Parms;
		IsClosestLocalPlayerToActor_Parms.TheActor = TheActor;

		this->ProcessEvent( pfnIsClosestLocalPlayerToActor, &IsClosestLocalPlayerToActor_Parms, NULL );

		return IsClosestLocalPlayerToActor_Parms.ReturnValue;
	};

	void eventClientHearSound ( void* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientHearSound = NULL;

		if ( !pfnClientHearSound )
			pfnClientHearSound = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientHearSound" );

		APlayerController_eventClientHearSound_Parms ClientHearSound_Parms;
		ClientHearSound_Parms.ASound = ASound;
		ClientHearSound_Parms.SourceActor = SourceActor;
		memcpy( &ClientHearSound_Parms.SourceLocation, &SourceLocation, 0xC );
		ClientHearSound_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
		ClientHearSound_Parms.bIsOccluded = bIsOccluded;

		this->ProcessEvent( pfnClientHearSound, &ClientHearSound_Parms, NULL );
	};

	void* GetPooledAudioComponent ( void* ASound, class AActor* SourceActor, unsigned long bStopWhenOwnerDestroyed, unsigned long bUseLocation/*CPF_OptionalParm*/, struct FVector SourceLocation/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetPooledAudioComponent = NULL;

		if ( !pfnGetPooledAudioComponent )
			pfnGetPooledAudioComponent = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPooledAudioComponent" );

		APlayerController_execGetPooledAudioComponent_Parms GetPooledAudioComponent_Parms;
		GetPooledAudioComponent_Parms.ASound = ASound;
		GetPooledAudioComponent_Parms.SourceActor = SourceActor;
		GetPooledAudioComponent_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
		GetPooledAudioComponent_Parms.bUseLocation = bUseLocation;
		memcpy( &GetPooledAudioComponent_Parms.SourceLocation, &SourceLocation, 0xC );

		pfnGetPooledAudioComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPooledAudioComponent, &GetPooledAudioComponent_Parms, NULL );
		pfnGetPooledAudioComponent->FunctionFlags |= 0x400;

		return GetPooledAudioComponent_Parms.ReturnValue;
	};

	void HearSoundFinished ( void* AC )
	{
		static UFunction* pfnHearSoundFinished = NULL;

		if ( !pfnHearSoundFinished )
			pfnHearSoundFinished = UObject::FindObject< UFunction >( "Function Engine.PlayerController.HearSoundFinished" );

		APlayerController_execHearSoundFinished_Parms HearSoundFinished_Parms;
		HearSoundFinished_Parms.AC = AC;

		this->ProcessEvent( pfnHearSoundFinished, &HearSoundFinished_Parms, NULL );
	};

	void eventClientPlaySound ( void* ASound )
	{
		static UFunction* pfnClientPlaySound = NULL;

		if ( !pfnClientPlaySound )
			pfnClientPlaySound = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientPlaySound" );

		APlayerController_eventClientPlaySound_Parms ClientPlaySound_Parms;
		ClientPlaySound_Parms.ASound = ASound;

		this->ProcessEvent( pfnClientPlaySound, &ClientPlaySound_Parms, NULL );
	};

	void eventReceiveLocalizedMessage ( class UClass* Message, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnReceiveLocalizedMessage = NULL;

		if ( !pfnReceiveLocalizedMessage )
			pfnReceiveLocalizedMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ReceiveLocalizedMessage" );

		APlayerController_eventReceiveLocalizedMessage_Parms ReceiveLocalizedMessage_Parms;
		ReceiveLocalizedMessage_Parms.Message = Message;
		ReceiveLocalizedMessage_Parms.Switch = Switch;
		ReceiveLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		ReceiveLocalizedMessage_Parms.RelatedPRI1 = RelatedPRI1;
		ReceiveLocalizedMessage_Parms.OptionalObject = OptionalObject;
		ReceiveLocalizedMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnReceiveLocalizedMessage, &ReceiveLocalizedMessage_Parms, NULL );
	};

	void CleanupPRI ()
	{
		static UFunction* pfnCleanupPRI = NULL;

		if ( !pfnCleanupPRI )
			pfnCleanupPRI = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CleanupPRI" );

		APlayerController_execCleanupPRI_Parms CleanupPRI_Parms;

		this->ProcessEvent( pfnCleanupPRI, &CleanupPRI_Parms, NULL );
	};

	void HandlePickup ( class AInventory* Inv )
	{
		static UFunction* pfnHandlePickup = NULL;

		if ( !pfnHandlePickup )
			pfnHandlePickup = UObject::FindObject< UFunction >( "Function Engine.PlayerController.HandlePickup" );

		APlayerController_execHandlePickup_Parms HandlePickup_Parms;
		HandlePickup_Parms.Inv = Inv;

		this->ProcessEvent( pfnHandlePickup, &HandlePickup_Parms, NULL );
	};

	void ClientSetHUD ( class UClass* newHUDType, class UClass* newScoringType )
	{
		static UFunction* pfnClientSetHUD = NULL;

		if ( !pfnClientSetHUD )
			pfnClientSetHUD = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientSetHUD" );

		APlayerController_execClientSetHUD_Parms ClientSetHUD_Parms;
		ClientSetHUD_Parms.newHUDType = newHUDType;
		ClientSetHUD_Parms.newScoringType = newScoringType;

		this->ProcessEvent( pfnClientSetHUD, &ClientSetHUD_Parms, NULL );
	};

	void PawnDied ( class APawn* P )
	{
		static UFunction* pfnPawnDied = NULL;

		if ( !pfnPawnDied )
			pfnPawnDied = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PawnDied" );

		APlayerController_execPawnDied_Parms PawnDied_Parms;
		PawnDied_Parms.P = P;

		this->ProcessEvent( pfnPawnDied, &PawnDied_Parms, NULL );
	};

	void eventUnPossess ()
	{
		static UFunction* pfnUnPossess = NULL;

		if ( !pfnUnPossess )
			pfnUnPossess = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UnPossess" );

		APlayerController_eventUnPossess_Parms UnPossess_Parms;

		this->ProcessEvent( pfnUnPossess, &UnPossess_Parms, NULL );
	};

	void ServerAcknowledgePossession ( class APawn* P )
	{
		static UFunction* pfnServerAcknowledgePossession = NULL;

		if ( !pfnServerAcknowledgePossession )
			pfnServerAcknowledgePossession = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerAcknowledgePossession" );

		APlayerController_execServerAcknowledgePossession_Parms ServerAcknowledgePossession_Parms;
		ServerAcknowledgePossession_Parms.P = P;

		this->ProcessEvent( pfnServerAcknowledgePossession, &ServerAcknowledgePossession_Parms, NULL );
	};

	void AcknowledgePossession ( class APawn* P )
	{
		static UFunction* pfnAcknowledgePossession = NULL;

		if ( !pfnAcknowledgePossession )
			pfnAcknowledgePossession = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AcknowledgePossession" );

		APlayerController_execAcknowledgePossession_Parms AcknowledgePossession_Parms;
		AcknowledgePossession_Parms.P = P;

		this->ProcessEvent( pfnAcknowledgePossession, &AcknowledgePossession_Parms, NULL );
	};

	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Possess" );

		APlayerController_eventPossess_Parms Possess_Parms;
		Possess_Parms.aPawn = aPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void GivePawn ( class APawn* NewPawn )
	{
		static UFunction* pfnGivePawn = NULL;

		if ( !pfnGivePawn )
			pfnGivePawn = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GivePawn" );

		APlayerController_execGivePawn_Parms GivePawn_Parms;
		GivePawn_Parms.NewPawn = NewPawn;

		this->ProcessEvent( pfnGivePawn, &GivePawn_Parms, NULL );
	};

	void AskForPawn ()
	{
		static UFunction* pfnAskForPawn = NULL;

		if ( !pfnAskForPawn )
			pfnAskForPawn = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AskForPawn" );

		APlayerController_execAskForPawn_Parms AskForPawn_Parms;

		this->ProcessEvent( pfnAskForPawn, &AskForPawn_Parms, NULL );
	};

	void ClientGotoState ( struct FName NewState, struct FName NewLabel/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientGotoState = NULL;

		if ( !pfnClientGotoState )
			pfnClientGotoState = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientGotoState" );

		APlayerController_execClientGotoState_Parms ClientGotoState_Parms;
		memcpy( &ClientGotoState_Parms.NewState, &NewState, 0x8 );
		memcpy( &ClientGotoState_Parms.NewLabel, &NewLabel, 0x8 );

		this->ProcessEvent( pfnClientGotoState, &ClientGotoState_Parms, NULL );
	};

	bool IsMouseAvailable ()
	{
		static UFunction* pfnIsMouseAvailable = NULL;

		if ( !pfnIsMouseAvailable )
			pfnIsMouseAvailable = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsMouseAvailable" );

		APlayerController_execIsMouseAvailable_Parms IsMouseAvailable_Parms;

		pfnIsMouseAvailable->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsMouseAvailable, &IsMouseAvailable_Parms, NULL );
		pfnIsMouseAvailable->FunctionFlags |= 0x400;

		return IsMouseAvailable_Parms.ReturnValue;
	};

	bool IsKeyboardAvailable ()
	{
		static UFunction* pfnIsKeyboardAvailable = NULL;

		if ( !pfnIsKeyboardAvailable )
			pfnIsKeyboardAvailable = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsKeyboardAvailable" );

		APlayerController_execIsKeyboardAvailable_Parms IsKeyboardAvailable_Parms;

		pfnIsKeyboardAvailable->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsKeyboardAvailable, &IsKeyboardAvailable_Parms, NULL );
		pfnIsKeyboardAvailable->FunctionFlags |= 0x400;

		return IsKeyboardAvailable_Parms.ReturnValue;
	};

	void SetUseTiltForwardAndBack ( unsigned long bActive )
	{
		static UFunction* pfnSetUseTiltForwardAndBack = NULL;

		if ( !pfnSetUseTiltForwardAndBack )
			pfnSetUseTiltForwardAndBack = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetUseTiltForwardAndBack" );

		APlayerController_execSetUseTiltForwardAndBack_Parms SetUseTiltForwardAndBack_Parms;
		SetUseTiltForwardAndBack_Parms.bActive = bActive;

		pfnSetUseTiltForwardAndBack->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetUseTiltForwardAndBack, &SetUseTiltForwardAndBack_Parms, NULL );
		pfnSetUseTiltForwardAndBack->FunctionFlags |= 0x400;
	};

	void SetOnlyUseControllerTiltInput ( unsigned long bActive )
	{
		static UFunction* pfnSetOnlyUseControllerTiltInput = NULL;

		if ( !pfnSetOnlyUseControllerTiltInput )
			pfnSetOnlyUseControllerTiltInput = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetOnlyUseControllerTiltInput" );

		APlayerController_execSetOnlyUseControllerTiltInput_Parms SetOnlyUseControllerTiltInput_Parms;
		SetOnlyUseControllerTiltInput_Parms.bActive = bActive;

		pfnSetOnlyUseControllerTiltInput->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetOnlyUseControllerTiltInput, &SetOnlyUseControllerTiltInput_Parms, NULL );
		pfnSetOnlyUseControllerTiltInput->FunctionFlags |= 0x400;
	};

	void SetControllerTiltActive ( unsigned long bActive )
	{
		static UFunction* pfnSetControllerTiltActive = NULL;

		if ( !pfnSetControllerTiltActive )
			pfnSetControllerTiltActive = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetControllerTiltActive" );

		APlayerController_execSetControllerTiltActive_Parms SetControllerTiltActive_Parms;
		SetControllerTiltActive_Parms.bActive = bActive;

		pfnSetControllerTiltActive->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetControllerTiltActive, &SetControllerTiltActive_Parms, NULL );
		pfnSetControllerTiltActive->FunctionFlags |= 0x400;
	};

	void SetControllerTiltDesiredIfAvailable ( unsigned long bActive )
	{
		static UFunction* pfnSetControllerTiltDesiredIfAvailable = NULL;

		if ( !pfnSetControllerTiltDesiredIfAvailable )
			pfnSetControllerTiltDesiredIfAvailable = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetControllerTiltDesiredIfAvailable" );

		APlayerController_execSetControllerTiltDesiredIfAvailable_Parms SetControllerTiltDesiredIfAvailable_Parms;
		SetControllerTiltDesiredIfAvailable_Parms.bActive = bActive;

		pfnSetControllerTiltDesiredIfAvailable->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetControllerTiltDesiredIfAvailable, &SetControllerTiltDesiredIfAvailable_Parms, NULL );
		pfnSetControllerTiltDesiredIfAvailable->FunctionFlags |= 0x400;
	};

	bool IsControllerTiltActive ()
	{
		static UFunction* pfnIsControllerTiltActive = NULL;

		if ( !pfnIsControllerTiltActive )
			pfnIsControllerTiltActive = UObject::FindObject< UFunction >( "Function Engine.PlayerController.IsControllerTiltActive" );

		APlayerController_execIsControllerTiltActive_Parms IsControllerTiltActive_Parms;

		pfnIsControllerTiltActive->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsControllerTiltActive, &IsControllerTiltActive_Parms, NULL );
		pfnIsControllerTiltActive->FunctionFlags |= 0x400;

		return IsControllerTiltActive_Parms.ReturnValue;
	};

	float GetRumbleScale ()
	{
		static UFunction* pfnGetRumbleScale = NULL;

		if ( !pfnGetRumbleScale )
			pfnGetRumbleScale = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetRumbleScale" );

		APlayerController_execGetRumbleScale_Parms GetRumbleScale_Parms;

		this->ProcessEvent( pfnGetRumbleScale, &GetRumbleScale_Parms, NULL );

		return GetRumbleScale_Parms.ReturnValue;
	};

	void SetRumbleScale ( float ScaleBy )
	{
		static UFunction* pfnSetRumbleScale = NULL;

		if ( !pfnSetRumbleScale )
			pfnSetRumbleScale = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetRumbleScale" );

		APlayerController_execSetRumbleScale_Parms SetRumbleScale_Parms;
		SetRumbleScale_Parms.ScaleBy = ScaleBy;

		this->ProcessEvent( pfnSetRumbleScale, &SetRumbleScale_Parms, NULL );
	};

	void ReloadProfileSettings ()
	{
		static UFunction* pfnReloadProfileSettings = NULL;

		if ( !pfnReloadProfileSettings )
			pfnReloadProfileSettings = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ReloadProfileSettings" );

		APlayerController_execReloadProfileSettings_Parms ReloadProfileSettings_Parms;

		this->ProcessEvent( pfnReloadProfileSettings, &ReloadProfileSettings_Parms, NULL );
	};

	void SetPlayerDataProvider ( void* DataProvider )
	{
		static UFunction* pfnSetPlayerDataProvider = NULL;

		if ( !pfnSetPlayerDataProvider )
			pfnSetPlayerDataProvider = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetPlayerDataProvider" );

		APlayerController_execSetPlayerDataProvider_Parms SetPlayerDataProvider_Parms;
		SetPlayerDataProvider_Parms.DataProvider = DataProvider;

		this->ProcessEvent( pfnSetPlayerDataProvider, &SetPlayerDataProvider_Parms, NULL );
	};

	void UnregisterStandardPlayerDataStores ()
	{
		static UFunction* pfnUnregisterStandardPlayerDataStores = NULL;

		if ( !pfnUnregisterStandardPlayerDataStores )
			pfnUnregisterStandardPlayerDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UnregisterStandardPlayerDataStores" );

		APlayerController_execUnregisterStandardPlayerDataStores_Parms UnregisterStandardPlayerDataStores_Parms;

		this->ProcessEvent( pfnUnregisterStandardPlayerDataStores, &UnregisterStandardPlayerDataStores_Parms, NULL );
	};

	void UnregisterPlayerDataStores ()
	{
		static UFunction* pfnUnregisterPlayerDataStores = NULL;

		if ( !pfnUnregisterPlayerDataStores )
			pfnUnregisterPlayerDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UnregisterPlayerDataStores" );

		APlayerController_execUnregisterPlayerDataStores_Parms UnregisterPlayerDataStores_Parms;

		this->ProcessEvent( pfnUnregisterPlayerDataStores, &UnregisterPlayerDataStores_Parms, NULL );
	};

	void RegisterStandardPlayerDataStores ()
	{
		static UFunction* pfnRegisterStandardPlayerDataStores = NULL;

		if ( !pfnRegisterStandardPlayerDataStores )
			pfnRegisterStandardPlayerDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RegisterStandardPlayerDataStores" );

		APlayerController_execRegisterStandardPlayerDataStores_Parms RegisterStandardPlayerDataStores_Parms;

		this->ProcessEvent( pfnRegisterStandardPlayerDataStores, &RegisterStandardPlayerDataStores_Parms, NULL );
	};

	void RegisterCustomPlayerDataStores ()
	{
		static UFunction* pfnRegisterCustomPlayerDataStores = NULL;

		if ( !pfnRegisterCustomPlayerDataStores )
			pfnRegisterCustomPlayerDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RegisterCustomPlayerDataStores" );

		APlayerController_execRegisterCustomPlayerDataStores_Parms RegisterCustomPlayerDataStores_Parms;

		this->ProcessEvent( pfnRegisterCustomPlayerDataStores, &RegisterCustomPlayerDataStores_Parms, NULL );
	};

	void RegisterPlayerDataStores ()
	{
		static UFunction* pfnRegisterPlayerDataStores = NULL;

		if ( !pfnRegisterPlayerDataStores )
			pfnRegisterPlayerDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.RegisterPlayerDataStores" );

		APlayerController_execRegisterPlayerDataStores_Parms RegisterPlayerDataStores_Parms;

		this->ProcessEvent( pfnRegisterPlayerDataStores, &RegisterPlayerDataStores_Parms, NULL );
	};

	void ClientInitializeDataStores ()
	{
		static UFunction* pfnClientInitializeDataStores = NULL;

		if ( !pfnClientInitializeDataStores )
			pfnClientInitializeDataStores = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientInitializeDataStores" );

		APlayerController_execClientInitializeDataStores_Parms ClientInitializeDataStores_Parms;

		this->ProcessEvent( pfnClientInitializeDataStores, &ClientInitializeDataStores_Parms, NULL );
	};

	void ServerSetPlayerSkill ( int PlayerSkill )
	{
		static UFunction* pfnServerSetPlayerSkill = NULL;

		if ( !pfnServerSetPlayerSkill )
			pfnServerSetPlayerSkill = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSetPlayerSkill" );

		APlayerController_execServerSetPlayerSkill_Parms ServerSetPlayerSkill_Parms;
		ServerSetPlayerSkill_Parms.PlayerSkill = PlayerSkill;

		this->ProcessEvent( pfnServerSetPlayerSkill, &ServerSetPlayerSkill_Parms, NULL );
	};

	void ServerSetUniquePlayerId ( struct FUniqueNetId UniqueId, unsigned long bWasInvited )
	{
		static UFunction* pfnServerSetUniquePlayerId = NULL;

		if ( !pfnServerSetUniquePlayerId )
			pfnServerSetUniquePlayerId = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerSetUniquePlayerId" );

		APlayerController_execServerSetUniquePlayerId_Parms ServerSetUniquePlayerId_Parms;
		memcpy( &ServerSetUniquePlayerId_Parms.UniqueId, &UniqueId, 0x8 );
		ServerSetUniquePlayerId_Parms.bWasInvited = bWasInvited;

		this->ProcessEvent( pfnServerSetUniquePlayerId, &ServerSetUniquePlayerId_Parms, NULL );
	};

	void eventInitUniquePlayerId ()
	{
		static UFunction* pfnInitUniquePlayerId = NULL;

		if ( !pfnInitUniquePlayerId )
			pfnInitUniquePlayerId = UObject::FindObject< UFunction >( "Function Engine.PlayerController.InitUniquePlayerId" );

		APlayerController_eventInitUniquePlayerId_Parms InitUniquePlayerId_Parms;

		this->ProcessEvent( pfnInitUniquePlayerId, &InitUniquePlayerId_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ReplicatedEvent" );

		APlayerController_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventInitInputSystem ()
	{
		static UFunction* pfnInitInputSystem = NULL;

		if ( !pfnInitInputSystem )
			pfnInitInputSystem = UObject::FindObject< UFunction >( "Function Engine.PlayerController.InitInputSystem" );

		APlayerController_eventInitInputSystem_Parms InitInputSystem_Parms;

		this->ProcessEvent( pfnInitInputSystem, &InitInputSystem_Parms, NULL );
	};

	class UOnlineSubsystem* GetOnlineSubsystem ()
	{
		static UFunction* pfnGetOnlineSubsystem = NULL;

		if ( !pfnGetOnlineSubsystem )
			pfnGetOnlineSubsystem = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetOnlineSubsystem" );

		APlayerController_execGetOnlineSubsystem_Parms GetOnlineSubsystem_Parms;

		this->ProcessEvent( pfnGetOnlineSubsystem, &GetOnlineSubsystem_Parms, NULL );

		return GetOnlineSubsystem_Parms.ReturnValue;
	};

	void PostControllerIdChange ()
	{
		static UFunction* pfnPostControllerIdChange = NULL;

		if ( !pfnPostControllerIdChange )
			pfnPostControllerIdChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PostControllerIdChange" );

		APlayerController_execPostControllerIdChange_Parms PostControllerIdChange_Parms;

		this->ProcessEvent( pfnPostControllerIdChange, &PostControllerIdChange_Parms, NULL );
	};

	void PreControllerIdChange ()
	{
		static UFunction* pfnPreControllerIdChange = NULL;

		if ( !pfnPreControllerIdChange )
			pfnPreControllerIdChange = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PreControllerIdChange" );

		APlayerController_execPreControllerIdChange_Parms PreControllerIdChange_Parms;

		this->ProcessEvent( pfnPreControllerIdChange, &PreControllerIdChange_Parms, NULL );
	};

	void CleanOutSavedMoves ()
	{
		static UFunction* pfnCleanOutSavedMoves = NULL;

		if ( !pfnCleanOutSavedMoves )
			pfnCleanOutSavedMoves = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CleanOutSavedMoves" );

		APlayerController_execCleanOutSavedMoves_Parms CleanOutSavedMoves_Parms;

		this->ProcessEvent( pfnCleanOutSavedMoves, &CleanOutSavedMoves_Parms, NULL );
	};

	void ClientReset ()
	{
		static UFunction* pfnClientReset = NULL;

		if ( !pfnClientReset )
			pfnClientReset = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientReset" );

		APlayerController_execClientReset_Parms ClientReset_Parms;

		this->ProcessEvent( pfnClientReset, &ClientReset_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.PlayerController.Reset" );

		APlayerController_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void SpawnDefaultHUD ()
	{
		static UFunction* pfnSpawnDefaultHUD = NULL;

		if ( !pfnSpawnDefaultHUD )
			pfnSpawnDefaultHUD = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SpawnDefaultHUD" );

		APlayerController_execSpawnDefaultHUD_Parms SpawnDefaultHUD_Parms;

		this->ProcessEvent( pfnSpawnDefaultHUD, &SpawnDefaultHUD_Parms, NULL );
	};

	void EnableCheats ()
	{
		static UFunction* pfnEnableCheats = NULL;

		if ( !pfnEnableCheats )
			pfnEnableCheats = UObject::FindObject< UFunction >( "Function Engine.PlayerController.EnableCheats" );

		APlayerController_execEnableCheats_Parms EnableCheats_Parms;

		this->ProcessEvent( pfnEnableCheats, &EnableCheats_Parms, NULL );
	};

	void AddCheats ()
	{
		static UFunction* pfnAddCheats = NULL;

		if ( !pfnAddCheats )
			pfnAddCheats = UObject::FindObject< UFunction >( "Function Engine.PlayerController.AddCheats" );

		APlayerController_execAddCheats_Parms AddCheats_Parms;

		this->ProcessEvent( pfnAddCheats, &AddCheats_Parms, NULL );
	};

	void eventKickWarning ()
	{
		static UFunction* pfnKickWarning = NULL;

		if ( !pfnKickWarning )
			pfnKickWarning = UObject::FindObject< UFunction >( "Function Engine.PlayerController.KickWarning" );

		APlayerController_eventKickWarning_Parms KickWarning_Parms;

		this->ProcessEvent( pfnKickWarning, &KickWarning_Parms, NULL );
	};

	void ServerGivePawn ()
	{
		static UFunction* pfnServerGivePawn = NULL;

		if ( !pfnServerGivePawn )
			pfnServerGivePawn = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerGivePawn" );

		APlayerController_execServerGivePawn_Parms ServerGivePawn_Parms;

		this->ProcessEvent( pfnServerGivePawn, &ServerGivePawn_Parms, NULL );
	};

	void ServerShortTimeout ()
	{
		static UFunction* pfnServerShortTimeout = NULL;

		if ( !pfnServerShortTimeout )
			pfnServerShortTimeout = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerShortTimeout" );

		APlayerController_execServerShortTimeout_Parms ServerShortTimeout_Parms;

		this->ProcessEvent( pfnServerShortTimeout, &ServerShortTimeout_Parms, NULL );
	};

	void ResetTimeMargin ()
	{
		static UFunction* pfnResetTimeMargin = NULL;

		if ( !pfnResetTimeMargin )
			pfnResetTimeMargin = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ResetTimeMargin" );

		APlayerController_execResetTimeMargin_Parms ResetTimeMargin_Parms;

		this->ProcessEvent( pfnResetTimeMargin, &ResetTimeMargin_Parms, NULL );
	};

	void eventPreRender ( class UCanvas* Canvas )
	{
		static UFunction* pfnPreRender = NULL;

		if ( !pfnPreRender )
			pfnPreRender = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PreRender" );

		APlayerController_eventPreRender_Parms PreRender_Parms;
		PreRender_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnPreRender, &PreRender_Parms, NULL );
	};

	void eventReceivedPlayer ()
	{
		static UFunction* pfnReceivedPlayer = NULL;

		if ( !pfnReceivedPlayer )
			pfnReceivedPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ReceivedPlayer" );

		APlayerController_eventReceivedPlayer_Parms ReceivedPlayer_Parms;

		this->ProcessEvent( pfnReceivedPlayer, &ReceivedPlayer_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PostBeginPlay" );

		APlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void* SpawnCoverReplicator ()
	{
		static UFunction* pfnSpawnCoverReplicator = NULL;

		if ( !pfnSpawnCoverReplicator )
			pfnSpawnCoverReplicator = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SpawnCoverReplicator" );

		APlayerController_execSpawnCoverReplicator_Parms SpawnCoverReplicator_Parms;

		this->ProcessEvent( pfnSpawnCoverReplicator, &SpawnCoverReplicator_Parms, NULL );

		return SpawnCoverReplicator_Parms.ReturnValue;
	};

	bool CanUnpauseControllerConnected ()
	{
		static UFunction* pfnCanUnpauseControllerConnected = NULL;

		if ( !pfnCanUnpauseControllerConnected )
			pfnCanUnpauseControllerConnected = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanUnpauseControllerConnected" );

		APlayerController_execCanUnpauseControllerConnected_Parms CanUnpauseControllerConnected_Parms;

		this->ProcessEvent( pfnCanUnpauseControllerConnected, &CanUnpauseControllerConnected_Parms, NULL );

		return CanUnpauseControllerConnected_Parms.ReturnValue;
	};

	void OnControllerChanged ( int ControllerId, unsigned long bIsConnected )
	{
		static UFunction* pfnOnControllerChanged = NULL;

		if ( !pfnOnControllerChanged )
			pfnOnControllerChanged = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnControllerChanged" );

		APlayerController_execOnControllerChanged_Parms OnControllerChanged_Parms;
		OnControllerChanged_Parms.ControllerId = ControllerId;
		OnControllerChanged_Parms.bIsConnected = bIsConnected;

		this->ProcessEvent( pfnOnControllerChanged, &OnControllerChanged_Parms, NULL );
	};

	bool CanUnpauseExternalUI ()
	{
		static UFunction* pfnCanUnpauseExternalUI = NULL;

		if ( !pfnCanUnpauseExternalUI )
			pfnCanUnpauseExternalUI = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CanUnpauseExternalUI" );

		APlayerController_execCanUnpauseExternalUI_Parms CanUnpauseExternalUI_Parms;

		this->ProcessEvent( pfnCanUnpauseExternalUI, &CanUnpauseExternalUI_Parms, NULL );

		return CanUnpauseExternalUI_Parms.ReturnValue;
	};

	void OnExternalUIChanged ( unsigned long bIsOpening )
	{
		static UFunction* pfnOnExternalUIChanged = NULL;

		if ( !pfnOnExternalUIChanged )
			pfnOnExternalUIChanged = UObject::FindObject< UFunction >( "Function Engine.PlayerController.OnExternalUIChanged" );

		APlayerController_execOnExternalUIChanged_Parms OnExternalUIChanged_Parms;
		OnExternalUIChanged_Parms.bIsOpening = bIsOpening;

		this->ProcessEvent( pfnOnExternalUIChanged, &OnExternalUIChanged_Parms, NULL );
	};

	void ForceClearUnpauseDelegates ()
	{
		static UFunction* pfnForceClearUnpauseDelegates = NULL;

		if ( !pfnForceClearUnpauseDelegates )
			pfnForceClearUnpauseDelegates = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ForceClearUnpauseDelegates" );

		APlayerController_execForceClearUnpauseDelegates_Parms ForceClearUnpauseDelegates_Parms;

		this->ProcessEvent( pfnForceClearUnpauseDelegates, &ForceClearUnpauseDelegates_Parms, NULL );
	};

	void eventFellOutOfWorld ( class UClass* dmgType )
	{
		static UFunction* pfnFellOutOfWorld = NULL;

		if ( !pfnFellOutOfWorld )
			pfnFellOutOfWorld = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FellOutOfWorld" );

		APlayerController_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
		FellOutOfWorld_Parms.dmgType = dmgType;

		this->ProcessEvent( pfnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
	};

	void CleanUpAudioComponents ()
	{
		static UFunction* pfnCleanUpAudioComponents = NULL;

		if ( !pfnCleanUpAudioComponents )
			pfnCleanUpAudioComponents = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CleanUpAudioComponents" );

		APlayerController_execCleanUpAudioComponents_Parms CleanUpAudioComponents_Parms;

		pfnCleanUpAudioComponents->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCleanUpAudioComponents, &CleanUpAudioComponents_Parms, NULL );
		pfnCleanUpAudioComponents->FunctionFlags |= 0x400;
	};

	int FindStairRotation ( float DeltaTime )
	{
		static UFunction* pfnFindStairRotation = NULL;

		if ( !pfnFindStairRotation )
			pfnFindStairRotation = UObject::FindObject< UFunction >( "Function Engine.PlayerController.FindStairRotation" );

		APlayerController_execFindStairRotation_Parms FindStairRotation_Parms;
		FindStairRotation_Parms.DeltaTime = DeltaTime;

		WORD NativeIndex = pfnFindStairRotation->iNative;
		pfnFindStairRotation->iNative = 0;

		pfnFindStairRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindStairRotation, &FindStairRotation_Parms, NULL );
		pfnFindStairRotation->FunctionFlags |= 0x400;

		pfnFindStairRotation->iNative = NativeIndex;

		return FindStairRotation_Parms.ReturnValue;
	};

	bool CheckSpeedHack ( float DeltaTime )
	{
		static UFunction* pfnCheckSpeedHack = NULL;

		if ( !pfnCheckSpeedHack )
			pfnCheckSpeedHack = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CheckSpeedHack" );

		APlayerController_execCheckSpeedHack_Parms CheckSpeedHack_Parms;
		CheckSpeedHack_Parms.DeltaTime = DeltaTime;

		pfnCheckSpeedHack->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCheckSpeedHack, &CheckSpeedHack_Parms, NULL );
		pfnCheckSpeedHack->FunctionFlags |= 0x400;

		return CheckSpeedHack_Parms.ReturnValue;
	};

	void eventServerProcessConvolve ( struct FString C, int H )
	{
		static UFunction* pfnServerProcessConvolve = NULL;

		if ( !pfnServerProcessConvolve )
			pfnServerProcessConvolve = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ServerProcessConvolve" );

		APlayerController_eventServerProcessConvolve_Parms ServerProcessConvolve_Parms;
		memcpy( &ServerProcessConvolve_Parms.C, &C, 0xC );
		ServerProcessConvolve_Parms.H = H;

		pfnServerProcessConvolve->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnServerProcessConvolve, &ServerProcessConvolve_Parms, NULL );
		pfnServerProcessConvolve->FunctionFlags |= 0x400;
	};

	void eventClientConvolve ( struct FString C, int H )
	{
		static UFunction* pfnClientConvolve = NULL;

		if ( !pfnClientConvolve )
			pfnClientConvolve = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientConvolve" );

		APlayerController_eventClientConvolve_Parms ClientConvolve_Parms;
		memcpy( &ClientConvolve_Parms.C, &C, 0xC );
		ClientConvolve_Parms.H = H;

		pfnClientConvolve->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClientConvolve, &ClientConvolve_Parms, NULL );
		pfnClientConvolve->FunctionFlags |= 0x400;
	};

	void SetAudioGroupVolume ( struct FName GroupName, float Volume )
	{
		static UFunction* pfnSetAudioGroupVolume = NULL;

		if ( !pfnSetAudioGroupVolume )
			pfnSetAudioGroupVolume = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetAudioGroupVolume" );

		APlayerController_execSetAudioGroupVolume_Parms SetAudioGroupVolume_Parms;
		memcpy( &SetAudioGroupVolume_Parms.GroupName, &GroupName, 0x8 );
		SetAudioGroupVolume_Parms.Volume = Volume;

		pfnSetAudioGroupVolume->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAudioGroupVolume, &SetAudioGroupVolume_Parms, NULL );
		pfnSetAudioGroupVolume->FunctionFlags |= 0x400;
	};

	void SetAllowMatureLanguage ( unsigned long bAllowMatureLanguge )
	{
		static UFunction* pfnSetAllowMatureLanguage = NULL;

		if ( !pfnSetAllowMatureLanguage )
			pfnSetAllowMatureLanguage = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetAllowMatureLanguage" );

		APlayerController_execSetAllowMatureLanguage_Parms SetAllowMatureLanguage_Parms;
		SetAllowMatureLanguage_Parms.bAllowMatureLanguge = bAllowMatureLanguge;

		pfnSetAllowMatureLanguage->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAllowMatureLanguage, &SetAllowMatureLanguage_Parms, NULL );
		pfnSetAllowMatureLanguage->FunctionFlags |= 0x400;
	};

	struct FString PasteFromClipboard ()
	{
		static UFunction* pfnPasteFromClipboard = NULL;

		if ( !pfnPasteFromClipboard )
			pfnPasteFromClipboard = UObject::FindObject< UFunction >( "Function Engine.PlayerController.PasteFromClipboard" );

		APlayerController_execPasteFromClipboard_Parms PasteFromClipboard_Parms;

		pfnPasteFromClipboard->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPasteFromClipboard, &PasteFromClipboard_Parms, NULL );
		pfnPasteFromClipboard->FunctionFlags |= 0x400;

		return PasteFromClipboard_Parms.ReturnValue;
	};

	void CopyToClipboard ( struct FString Text )
	{
		static UFunction* pfnCopyToClipboard = NULL;

		if ( !pfnCopyToClipboard )
			pfnCopyToClipboard = UObject::FindObject< UFunction >( "Function Engine.PlayerController.CopyToClipboard" );

		APlayerController_execCopyToClipboard_Parms CopyToClipboard_Parms;
		memcpy( &CopyToClipboard_Parms.Text, &Text, 0xC );

		pfnCopyToClipboard->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCopyToClipboard, &CopyToClipboard_Parms, NULL );
		pfnCopyToClipboard->FunctionFlags |= 0x400;
	};

	struct FString GetDefaultURL ( struct FString Option )
	{
		static UFunction* pfnGetDefaultURL = NULL;

		if ( !pfnGetDefaultURL )
			pfnGetDefaultURL = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetDefaultURL" );

		APlayerController_execGetDefaultURL_Parms GetDefaultURL_Parms;
		memcpy( &GetDefaultURL_Parms.Option, &Option, 0xC );

		pfnGetDefaultURL->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDefaultURL, &GetDefaultURL_Parms, NULL );
		pfnGetDefaultURL->FunctionFlags |= 0x400;

		return GetDefaultURL_Parms.ReturnValue;
	};

	void UpdateURL ( struct FString NewOption, struct FString NewValue, unsigned long bSave1Default )
	{
		static UFunction* pfnUpdateURL = NULL;

		if ( !pfnUpdateURL )
			pfnUpdateURL = UObject::FindObject< UFunction >( "Function Engine.PlayerController.UpdateURL" );

		APlayerController_execUpdateURL_Parms UpdateURL_Parms;
		memcpy( &UpdateURL_Parms.NewOption, &NewOption, 0xC );
		memcpy( &UpdateURL_Parms.NewValue, &NewValue, 0xC );
		UpdateURL_Parms.bSave1Default = bSave1Default;

		WORD NativeIndex = pfnUpdateURL->iNative;
		pfnUpdateURL->iNative = 0;

		pfnUpdateURL->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateURL, &UpdateURL_Parms, NULL );
		pfnUpdateURL->FunctionFlags |= 0x400;

		pfnUpdateURL->iNative = NativeIndex;
	};

	void eventClientTravel ( struct FString URL, unsigned char TravelType, unsigned long bSeamless/*CPF_OptionalParm*/, struct FGuid MapPackageGuid/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientTravel = NULL;

		if ( !pfnClientTravel )
			pfnClientTravel = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientTravel" );

		APlayerController_eventClientTravel_Parms ClientTravel_Parms;
		memcpy( &ClientTravel_Parms.URL, &URL, 0xC );
		ClientTravel_Parms.TravelType = TravelType;
		ClientTravel_Parms.bSeamless = bSeamless;
		memcpy( &ClientTravel_Parms.MapPackageGuid, &MapPackageGuid, 0x10 );

		pfnClientTravel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClientTravel, &ClientTravel_Parms, NULL );
		pfnClientTravel->FunctionFlags |= 0x400;
	};

	struct FString ConsoleCommand ( struct FString Command, unsigned long bWriteToLog/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnConsoleCommand = NULL;

		if ( !pfnConsoleCommand )
			pfnConsoleCommand = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ConsoleCommand" );

		APlayerController_execConsoleCommand_Parms ConsoleCommand_Parms;
		memcpy( &ConsoleCommand_Parms.Command, &Command, 0xC );
		ConsoleCommand_Parms.bWriteToLog = bWriteToLog;

		pfnConsoleCommand->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnConsoleCommand, &ConsoleCommand_Parms, NULL );
		pfnConsoleCommand->FunctionFlags |= 0x400;

		return ConsoleCommand_Parms.ReturnValue;
	};

	struct FString GetServerNetworkAddress ()
	{
		static UFunction* pfnGetServerNetworkAddress = NULL;

		if ( !pfnGetServerNetworkAddress )
			pfnGetServerNetworkAddress = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetServerNetworkAddress" );

		APlayerController_execGetServerNetworkAddress_Parms GetServerNetworkAddress_Parms;

		pfnGetServerNetworkAddress->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetServerNetworkAddress, &GetServerNetworkAddress_Parms, NULL );
		pfnGetServerNetworkAddress->FunctionFlags |= 0x400;

		return GetServerNetworkAddress_Parms.ReturnValue;
	};

	struct FString GetPlayerNetworkAddress ()
	{
		static UFunction* pfnGetPlayerNetworkAddress = NULL;

		if ( !pfnGetPlayerNetworkAddress )
			pfnGetPlayerNetworkAddress = UObject::FindObject< UFunction >( "Function Engine.PlayerController.GetPlayerNetworkAddress" );

		APlayerController_execGetPlayerNetworkAddress_Parms GetPlayerNetworkAddress_Parms;

		pfnGetPlayerNetworkAddress->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPlayerNetworkAddress, &GetPlayerNetworkAddress_Parms, NULL );
		pfnGetPlayerNetworkAddress->FunctionFlags |= 0x400;

		return GetPlayerNetworkAddress_Parms.ReturnValue;
	};

	void SetNetSpeed ( int NewSpeed )
	{
		static UFunction* pfnSetNetSpeed = NULL;

		if ( !pfnSetNetSpeed )
			pfnSetNetSpeed = UObject::FindObject< UFunction >( "Function Engine.PlayerController.SetNetSpeed" );

		APlayerController_execSetNetSpeed_Parms SetNetSpeed_Parms;
		SetNetSpeed_Parms.NewSpeed = NewSpeed;

		pfnSetNetSpeed->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetNetSpeed, &SetNetSpeed_Parms, NULL );
		pfnSetNetSpeed->FunctionFlags |= 0x400;
	};

	void ClientDrawCoordinateSystem ( struct FVector AxisLoc, struct FRotator AxisRot, float Scale, unsigned long bPersistentLines/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientDrawCoordinateSystem = NULL;

		if ( !pfnClientDrawCoordinateSystem )
			pfnClientDrawCoordinateSystem = UObject::FindObject< UFunction >( "Function Engine.PlayerController.ClientDrawCoordinateSystem" );

		APlayerController_execClientDrawCoordinateSystem_Parms ClientDrawCoordinateSystem_Parms;
		memcpy( &ClientDrawCoordinateSystem_Parms.AxisLoc, &AxisLoc, 0xC );
		memcpy( &ClientDrawCoordinateSystem_Parms.AxisRot, &AxisRot, 0xC );
		ClientDrawCoordinateSystem_Parms.Scale = Scale;
		ClientDrawCoordinateSystem_Parms.bPersistentLines = bPersistentLines;

		this->ProcessEvent( pfnClientDrawCoordinateSystem, &ClientDrawCoordinateSystem_Parms, NULL );
	};

};

UClass* APlayerController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif