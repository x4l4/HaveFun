/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AGameInfo.h
// Date: 06/16/2011 @ 05:19:39.257
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum PlayerScoreType
{
	PSC_None = 0,
	PSC_Kill = 1,
	PSC_KillAssist = 2,
	PSC_GranadeKill = 3,
	PSC_MultiKill = 4,
	PSC_Death = 5,
	PSC_CLT = 6,
	PSC_CTF = 7,
	PSC_CTP = 8,
	PSC_CTPDefendKill = 9,
	PSC_CTPCaptureKill = 10,
	PSC_PTB = 11,
	PSC_ROB = 12,
	PSC_ROBBagCarrierKill = 13,
	PSC_ROBWithBagKill = 14,
	PSC_ROBDeposit = 15,
	PSC_ROBRobbery = 16,
	PSC_ROBMaxScoreCapture = 17,
	PSC_ROBBagCapture = 18,
	PSC_ROBBagReturn = 19,
	PSC_ROBDefendKill = 20,
	PSC_PICKUP = 21,
	PSC_TDM = 22,
	PSC_Headshot = 23,
	PSC_FirstBlood = 24,
	PSC_LastBulletKill = 25,
	PSC_HighLevelKill = 26,
	PSC_PenetrationKill = 27,
	PSC_MeleeKill = 28,
	PSC_BossKill = 29,
	PSC_BossKillAssist = 30,
	PSC_MineDestroy = 31,
	PSC_FFAKill = 32,
	PSC_CTF_FlagSteal = 33,
	PSC_CTF_FlagPickUp = 34,
	PSC_CTF_FlagReturn = 35,
	PSC_CTF_FlagCapture = 36,
	PSC_CTF_FlagCarrierKill = 37,
	PSC_CTF_WithFlagKill = 38,
	PSC_Suicide = 39,
	PSC_MAX = 40
};

struct AGameInfo_execAddPlayerScore_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct AGameInfo_execDoGameSpecificPerformanceSettings_Parms
{
	class AWorldInfo* TheWorldInfo;
};

struct AGameInfo_execDoTimeBasedSentinelStatGathering_Parms
{
};

struct AGameInfo_execDoSentinel_PerfAtSpecificLocation_Parms
{
	struct FVector InLocation;
	struct FRotator InRotation;
};// FUNC_Native

struct AGameInfo_execDoSentinel_MemoryAtSpecificLocation_Parms
{
	struct FVector InLocation;
	struct FRotator InRotation;
};// FUNC_Native

struct AGameInfo_execGetTravelLocations_Parms
{
	struct FName LevelName;
	class APlayerController* PC;
	TArray< struct FVector > TravelPoints; // CPF_OutParm
};// FUNC_Native

struct AGameInfo_execHandlePerLoadedMapAudioStats_Parms
{
};// FUNC_Native

struct AGameInfo_execDoSentinelActionPerLoadedMap_Parms
{
};// FUNC_Native

struct AGameInfo_execDoTravelTheWorld_Parms
{
};// FUNC_Exec

struct AGameInfo_execEndSentinelRun_Parms
{
	unsigned char RunResult;
};// FUNC_Native

struct AGameInfo_execAddSentinelPerTimePeriodStats_Parms
{
	struct FVector InLocation;
	struct FRotator InRotation;
};// FUNC_Native

struct AGameInfo_execBeginSentinelRun_Parms
{
	struct FString TaskDescription;
	struct FString TaskParameter;
	struct FString TagDesc;
};// FUNC_Native

struct AGameInfo_execTellClientsToTravelToSession_Parms
{
	struct FName SessionName;
	class UClass* SearchClass;
	unsigned char PlatformSpecificInfo[ 68 ];
};

struct AGameInfo_execTellClientsToReturnToPartyHost_Parms
{
	class APlayerReplicationInfo* PartyLeader;
};

struct AGameInfo_execIncrementNumberOfMatchesPlayed_Parms
{
};

struct AGameInfo_execIncrementAutomatedTestingMapIndex_Parms
{
};

struct AGameInfo_execCloseAutomatedMapTestTimer_Parms
{
};

struct AGameInfo_execStartAutomatedMapTestTimerWorker_Parms
{
};

struct AGameInfo_eventStartAutomatedMapTestTimer_Parms
{
};// FUNC_Event

struct AGameInfo_execOnServerCreateComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct AGameInfo_execRegisterServer_Parms
{
};

struct AGameInfo_execOnLoginChange_Parms
{
	unsigned char LocalUserNum;
};

struct AGameInfo_execOnLoginFailed_Parms
{
	unsigned char LocalUserNum;
	unsigned char ErrorCode;
};

struct AGameInfo_execClearAutoLoginDelegates_Parms
{
};

struct AGameInfo_execProcessServerLogin_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_eventMatineeCancelled_Parms
{
};// FUNC_Event

struct AGameInfo_execRecalculateSkillRating_Parms
{
};

struct AGameInfo_execUpdateGameplayMuteList_Parms
{
	class APlayerController* PC;
};

struct AGameInfo_execNotifyArbitratedMatchEnd_Parms
{
};

struct AGameInfo_execMatchIsInProgress_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execArbitrationRegistrationComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct AGameInfo_execRegisterServerForArbitration_Parms
{
};

struct AGameInfo_execStartArbitratedMatch_Parms
{
};

struct AGameInfo_execStartArbitrationRegistration_Parms
{
};

struct AGameInfo_execProcessClientRegistrationCompletion_Parms
{
	class APlayerController* PC;
	unsigned long bWasSuccessful : 1;
};

struct AGameInfo_execUpdateGameSettingsCounts_Parms
{
};

struct AGameInfo_execSetSeamlessTravelViewTarget_Parms
{
	class APlayerController* PC;
};

struct AGameInfo_eventHandleSeamlessTravelPlayer_Parms
{
	class AController* C; // CPF_OutParm
};// FUNC_Event

struct AGameInfo_execUpdateGameSettings_Parms
{
};

struct AGameInfo_eventPostSeamlessTravel_Parms
{
};// FUNC_Event

struct AGameInfo_execSwapPlayerControllers_Parms
{
	class APlayerController* OldPC;
	class APlayerController* NewPC;
};// FUNC_Final FUNC_Native

struct AGameInfo_eventGetSeamlessTravelActorList_Parms
{
	unsigned long bToEntry : 1;
	TArray< class AActor* > ActorList; // CPF_OutParm
};// FUNC_Event

struct AGameInfo_execOverridePRI_Parms
{
	class APlayerController* PC;
	class APlayerReplicationInfo* OldPRI;
};

struct AGameInfo_execFindInactivePRI_Parms
{
	class APlayerController* PC;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execAddInactivePRI_Parms
{
	class APlayerReplicationInfo* PRI;
	class APlayerController* PC;
};

struct AGameInfo_eventPostCommitMapChange_Parms
{
};// FUNC_Event

struct AGameInfo_eventPreCommitMapChange_Parms
{
	struct FString PreviousMapName;
	struct FString NextMapName;
};// FUNC_Event

struct AGameInfo_execAllowPausing_Parms
{
	class APlayerController* PC;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execAllowCheats_Parms
{
	class APlayerController* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execAllowMutator_Parms
{
	struct FString MutatorClassName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execPlayerCanRestart_Parms
{
	class APlayerController* aPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execPlayerCanRestartGame_Parms
{
	class APlayerController* aPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execKillBots_Parms
{
};// FUNC_Exec

struct AGameInfo_execDriverLeftVehicle_Parms
{
	class AVehicle* V;
	class APawn* P;
};

struct AGameInfo_execCanLeaveVehicle_Parms
{
	class AVehicle* V;
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execDriverEnteredVehicle_Parms
{
	class AVehicle* V;
	class APawn* P;
};

struct AGameInfo_execParseMessageString_Parms
{
	class AController* Who;
	struct FString Message;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execModifyScoreKill_Parms
{
	class AController* Killer;
	class AController* Other;
};

struct AGameInfo_execScoreKill_Parms
{
	class AController* Killer;
	class AController* Other;
	class UClass* DamageType;
	int WeaponID;
	unsigned long bFakeDeath : 1;
	int ShootFlags;
};

struct AGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo* Scorer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execScoreObjective_Parms
{
	class APlayerReplicationInfo* Scorer;
	int Score;
};

struct AGameInfo_execAddObjectiveScore_Parms
{
	class APlayerReplicationInfo* Scorer;
	int Score;
};

struct AGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execChoosePlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	void* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execShouldSpawnAtStartSpot_Parms
{
	class AController* Player;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execEndLogging_Parms
{
	struct FString Reason;
};

struct AGameInfo_execEndOnlineGame_Parms
{
};

struct AGameInfo_execPerformEndGameHandling_Parms
{
};

struct AGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct AGameInfo_execWriteOnlinePlayerScores_Parms
{
};

struct AGameInfo_execWriteOnlineStats_Parms
{
};

struct AGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execCheckModifiedEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_eventBroadcastLocalizedTeam_Parms
{
	int TeamIndex;
	class AActor* Sender;
	class UClass* Message;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};// FUNC_Event

struct AGameInfo_eventBroadcastLocalized_Parms
{
	class AActor* Sender;
	class UClass* Message;
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	class UObject* OptionalObject;
	int OptionalData;
};// FUNC_Event

struct AGameInfo_execBroadcastTeam_Parms
{
	class AController* Sender;
	struct FString msg;
	struct FName Type;
};

struct AGameInfo_eventBroadcast_Parms
{
	class AActor* Sender;
	struct FString msg;
	struct FName Type;
};// FUNC_Event

struct AGameInfo_execRestartGame_Parms
{
};

struct AGameInfo_execGetTravelType_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execGetNextAutomatedTestingMap_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execGetNextMap_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execSendPlayer_Parms
{
	class APlayerController* aPlayer;
	struct FString URL;
};

struct AGameInfo_execPickTeam_Parms
{
	unsigned char Current;
	class AController* C;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execChangeTeam_Parms
{
	class AController* Other;
	int N;
	unsigned long bNewTeam : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execChangeName_Parms
{
	class AController* Other;
	struct FString S;
	unsigned long bNameChange : 1;
};

struct AGameInfo_execDiscardInventory_Parms
{
	class APawn* Other;
	class AController* Killer;
};

struct AGameInfo_execPickupQuery_Parms
{
	class APawn* Other;
	class UClass* ItemClass;
	class AActor* Pickup;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execShouldRespawn_Parms
{
	void* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execCheckRelevance_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execReduceDamage_Parms
{
	int Damage; // CPF_OutParm
	class APawn* injured;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum; // CPF_OutParm
	class UClass* DamageType;
};

struct AGameInfo_execCanSpectate_Parms
{
	class APlayerController* Viewer;
	class APlayerReplicationInfo* ViewTarget;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execKickBan_Parms
{
	struct FString S;
};

struct AGameInfo_execKick_Parms
{
	struct FString S;
};

struct AGameInfo_execParseKillMessage_Parms
{
	struct FString KillerName;
	struct FString VictimName;
	struct FString DeathMessage;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execBroadcastDeathMessage_Parms
{
	class AController* Killer;
	class AController* Other;
	class UClass* DamageType;
};

struct AGameInfo_execPreventDeath_Parms
{
	class APawn* KilledPawn;
	class AController* Killer;
	class UClass* DamageType;
	struct FVector HitLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct AGameInfo_execNotifyKilled_Parms
{
	class AController* Killer;
	class AController* Killed;
	class APawn* KilledPawn;
};

struct AGameInfo_execSetPlayerDefaults_Parms
{
	class APawn* PlayerPawn;
};

struct AGameInfo_execMutate_Parms
{
	struct FString MutateString;
	class APlayerController* Sender;
};

struct AGameInfo_eventAddDefaultInventory_Parms
{
	class APawn* P;
};// FUNC_Event

struct AGameInfo_eventAcceptInventory_Parms
{
	class APawn* PlayerPawn;
};// FUNC_Event

struct AGameInfo_execUnregisterPlayer_Parms
{
	class APlayerController* PC;
};

struct AGameInfo_execLogout_Parms
{
	class AController* Exiting;
};

struct AGameInfo_eventPreExit_Parms
{
};// FUNC_Event

struct AGameInfo_execCalculatedNetSpeed_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execUpdateNetSpeeds_Parms
{
};

struct AGameInfo_eventPostLogin_Parms
{
	class APlayerController* NewPlayer;
};// FUNC_Event

struct AGameInfo_execGenericPlayerInitialization_Parms
{
	class AController* C;
};

struct AGameInfo_execReplicateStreamingStatus_Parms
{
	class APlayerController* PC;
};

struct AGameInfo_execGetDefaultPlayerClass_Parms
{
	class AController* C;
	class UClass* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execSpawnDefaultPawnFor_Parms
{
	class AController* NewPlayer;
	class ANavigationPoint* StartSpot;
	class APawn* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execRestartPlayer_Parms
{
	class AController* NewPlayer;
};

struct AGameInfo_execStartBots_Parms
{
};

struct AGameInfo_execStartHumans_Parms
{
};

struct AGameInfo_execOnStartOnlineGameComplete_Parms
{
	struct FName SessionName;
	unsigned long bWasSuccessful : 1;
};

struct AGameInfo_execStartOnlineGame_Parms
{
};

struct AGameInfo_execStartMatch_Parms
{
};

struct AGameInfo_eventLogin_Parms
{
	struct FString Portal;
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
	class APlayerController* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AGameInfo_execAtCapacity_Parms
{
	unsigned long bSpectator : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_eventPreLogin_Parms
{
	struct FString Options;
	struct FString Address;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

struct AGameInfo_execRequiresPassword_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execProcessClientTravel_Parms
{
	struct FString URL; // CPF_OutParm
	struct FGuid NextMapGuid;
	unsigned long bSeamless : 1;
	unsigned long bAbsolute : 1;
	class APlayerController* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execProcessServerTravel_Parms
{
	struct FString URL;
	unsigned long bAbsolute : 1;
};

struct AGameInfo_eventGetBeaconText_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AGameInfo_execRemoveMutator_Parms
{
	void* MutatorToRemove;
};

struct AGameInfo_execAddGameRules_Parms
{
	class UClass* GRClass;
};

struct AGameInfo_execAddMutator_Parms
{
	struct FString mutname;
	unsigned long bUserAdded : 1;
};

struct AGameInfo_execParseAutomatedTestingOptions_Parms
{
	struct FString Options;
};

struct AGameInfo_eventNotifyPendingConnectionLost_Parms
{
};// FUNC_Event

struct AGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

struct AGameInfo_eventSetGameType_Parms
{
	struct FString MapName;
	struct FString Options;
	struct FString Portal;
	class UClass* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AGameInfo_eventGetDefaultGameClassPath_Parms
{
	struct FString MapName;
	struct FString Options;
	struct FString Portal;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AGameInfo_execGetIntOption_Parms
{
	struct FString Options;
	struct FString ParseString;
	int CurrentValue;
	int ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execHasOption_Parms
{
	struct FString Options;
	struct FString InKey;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execParseOption_Parms
{
	struct FString Options;
	struct FString InKey;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execGetKeyValue_Parms
{
	struct FString Pair;
	struct FString Key; // CPF_OutParm
	struct FString Value; // CPF_OutParm
};

struct AGameInfo_execGrabOption_Parms
{
	struct FString Options; // CPF_OutParm
	struct FString Result; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execSetGameSpeed_Parms
{
	float T;
};

struct AGameInfo_execDebugPause_Parms
{
};

struct AGameInfo_execForceClearUnpauseDelegates_Parms
{
	class AActor* PauseActor;
};// FUNC_Final FUNC_Native

struct AGameInfo_eventClearPause_Parms
{
};// FUNC_Event

struct AGameInfo_execSetPause_Parms
{
	class APlayerController* PC;
	struct FScriptDelegate CanUnpauseDelegate;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execCanUnpause_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execGetServerPort_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execGetNumPlayers_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execGetNetworkNumber_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AGameInfo_execInitGameReplicationInfo_Parms
{
};

struct AGameInfo_eventKickIdler_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct AGameInfo_eventGameEnding_Parms
{
};// FUNC_Event

struct AGameInfo_execNotifyNavigationChanged_Parms
{
	class ANavigationPoint* N;
};

struct AGameInfo_execDoNavFearCostFallOff_Parms
{
};// FUNC_Final FUNC_Native

struct AGameInfo_eventTimer_Parms
{
};// FUNC_Event

struct AGameInfo_execResetLevel_Parms
{
};

struct AGameInfo_execShouldReset_Parms
{
	class AActor* ActorToReset;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execReset_Parms
{
};

struct AGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AGameInfo_execGetCoverReplicator_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_execUseLowGore_Parms
{
	class AWorldInfo* WI;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameInfo_execFindPlayerByID_Parms
{
	int PlayerID;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AGameInfo_eventPreBeginPlay_Parms
{
};// FUNC_Event

// (0x1BC - 0x394)
class AGameInfo : public AInfo
{
public:
	unsigned long                                      bRestartLevel : 1;                           // 0x01BC (0x0004) [0x00000001]
	unsigned long                                      bPauseable : 1;                              // 0x01BC (0x0004) [0x00000002]
	unsigned long                                      bTeamGame : 1;                               // 0x01BC (0x0004) [0x00000004]
	unsigned long                                      bGameEnded : 1;                              // 0x01BC (0x0004) [0x00000008]
	unsigned long                                      bOverTime : 1;                               // 0x01BC (0x0004) [0x00000010]
	unsigned long                                      bDelayedStart : 1;                           // 0x01BC (0x0004) [0x00000020]
	unsigned long                                      bWaitingToStartMatch : 1;                    // 0x01BC (0x0004) [0x00000040]
	unsigned long                                      bChangeLevels : 1;                           // 0x01BC (0x0004) [0x00000080]
	unsigned long                                      bAlreadyChanged : 1;                         // 0x01BC (0x0004) [0x00000100]
	unsigned long                                      bLoggingGame : 1;                            // 0x01BC (0x0004) [0x00000200]
	unsigned long                                      bAdminCanPause : 1;                          // 0x01BC (0x0004) [0x00000400]
	unsigned long                                      bGameRestarted : 1;                          // 0x01BC (0x0004) [0x00000800]
	unsigned long                                      bLevelChange : 1;                            // 0x01BC (0x0004) [0x00001000]
	unsigned long                                      bKickLiveIdlers : 1;                         // 0x01BC (0x0004) [0x00002000]
	unsigned long                                      bUsingArbitration : 1;                       // 0x01BC (0x0004) [0x00004000]
	unsigned long                                      bHasArbitratedHandshakeBegun : 1;            // 0x01BC (0x0004) [0x00008000]
	unsigned long                                      bNeedsEndGameHandshake : 1;                  // 0x01BC (0x0004) [0x00010000]
	unsigned long                                      bIsEndGameHandshakeComplete : 1;             // 0x01BC (0x0004) [0x00020000]
	unsigned long                                      bHasEndGameHandshakeBegun : 1;               // 0x01BC (0x0004) [0x00040000]
	unsigned long                                      bFixedPlayerStart : 1;                       // 0x01BC (0x0004) [0x00080000]
	unsigned long                                      bAutomatedPerfTesting : 1;                   // 0x01BC (0x0004) [0x00100000]
	unsigned long                                      bAutoContinueToNextRound : 1;                // 0x01BC (0x0004) [0x00200000]
	unsigned long                                      bUsingAutomatedTestingMapList : 1;           // 0x01BC (0x0004) [0x00400000]
	unsigned long                                      bAutomatedTestingWithOpen : 1;               // 0x01BC (0x0004) [0x00800000]
	unsigned long                                      bCheckingForFragmentation : 1;               // 0x01BC (0x0004) [0x01000000]
	unsigned long                                      bCheckingForMemLeaks : 1;                    // 0x01BC (0x0004) [0x02000000]
	unsigned long                                      bDoingASentinelRun : 1;                      // 0x01BC (0x0004) [0x04000000]
	unsigned long                                      bDoFearCostFallOff : 1;                      // 0x01BC (0x0004) [0x08000000]
	unsigned long                                      bUseSeamlessTravel : 1;                      // 0x01BC (0x0004) [0x10000000]
	unsigned long                                      bHasNetworkError : 1;                        // 0x01BC (0x0004) [0x20000000]
	unsigned long                                      bRequiresPushToTalk : 1;                     // 0x01BC (0x0004) [0x40000000]
	unsigned long                                      bSentinelStreamingLevelStillLoading : 1;     // 0x01BC (0x0004) [0x80000000]
	int                                                AutomatedPerfRemainingTime;                  // 0x01C0 (0x0004)
	int                                                AutomatedTestingMapIndex;                    // 0x01C4 (0x0004)
	TArray< struct FString >                           AutomatedMapTestingList;                     // 0x01C8 (0x000C)
	int                                                NumAutomatedMapTestingCycles;                // 0x01D4 (0x0004)
	int                                                NumberOfMatchesPlayed;                       // 0x01D8 (0x0004)
	int                                                NumMapListCyclesDone;                        // 0x01DC (0x0004)
	struct FString                                     AutomatedTestingExecCommandToRunAtStartMatch; // 0x01E0 (0x000C)
	struct FString                                     AutomatedMapTestingTransitionMap;            // 0x01EC (0x000C)
	struct FString                                     CauseEventCommand;                           // 0x01F8 (0x000C)
	struct FString                                     SentinelTaskDescription;                     // 0x0204 (0x000C)
	struct FString                                     SentinelTaskParameter;                       // 0x0210 (0x000C)
	struct FString                                     SentinelTagDesc;                             // 0x021C (0x000C)
	struct FString                                     BugLocString;                                // 0x0228 (0x000C)
	struct FString                                     BugRotString;                                // 0x0234 (0x000C)
	TArray< class APlayerController* >                 PendingArbitrationPCs;                       // 0x0240 (0x000C)
	TArray< class APlayerController* >                 ArbitrationPCs;                              // 0x024C (0x000C)
	float                                              ArbitrationHandshakeTimeout;                 // 0x0258 (0x0004)
	float                                              GameDifficulty;                              // 0x025C (0x0004)
	int                                                GoreLevel;                                   // 0x0260 (0x0004)
	float                                              GameSpeed;                                   // 0x0264 (0x0004)
	class UClass*                                      DefaultPawnClass;                            // 0x0268 (0x0004)
	class UClass*                                      ScoreBoardType;                              // 0x026C (0x0004)
	class UClass*                                      HUDType;                                     // 0x0270 (0x0004)
	int                                                MaxSpectators;                               // 0x0274 (0x0004)
	int                                                MaxSpectatorsAllowed;                        // 0x0278 (0x0004)
	int                                                NumSpectators;                               // 0x027C (0x0004)
	int                                                MaxPlayers;                                  // 0x0280 (0x0004)
	int                                                MaxPlayersAllowed;                           // 0x0284 (0x0004)
	int                                                NumPlayers;                                  // 0x0288 (0x0004)
	int                                                NumBots;                                     // 0x028C (0x0004)
	int                                                NumTravellingPlayers;                        // 0x0290 (0x0004)
	int                                                CurrentID;                                   // 0x0294 (0x0004)
	struct FString                                     DefaultPlayerName;                           // 0x0298 (0x000C)
	struct FString                                     GameName;                                    // 0x02A4 (0x000C)
	float                                              FearCostFallOff;                             // 0x02B0 (0x0004)
	int                                                GoalScore;                                   // 0x02B4 (0x0004)
	int                                                MaxLives;                                    // 0x02B8 (0x0004)
	int                                                TimeLimit;                                   // 0x02BC (0x0004)
	class UClass*                                      DeathMessageClass;                           // 0x02C0 (0x0004)
	class UClass*                                      GameMessageClass;                            // 0x02C4 (0x0004)
	void*                                              BaseMutator;                                 // 0x02C8 (0x0004)
	class UClass*                                      AccessControlClass;                          // 0x02CC (0x0004)
	void*                                              AccessControl;                               // 0x02D0 (0x0004)
	void*                                              GameRulesModifiers;                          // 0x02D4 (0x0004)
	class UClass*                                      BroadcastHandlerClass;                       // 0x02D8 (0x0004)
	void*                                              BroadcastHandler;                            // 0x02DC (0x0004)
	class UClass*                                      PlayerControllerClass;                       // 0x02E0 (0x0004)
	class UClass*                                      PlayerReplicationInfoClass;                  // 0x02E4 (0x0004)
	class UClass*                                      GameReplicationInfoClass;                    // 0x02E8 (0x0004)
	class AGameReplicationInfo*                        GameReplicationInfo;                         // 0x02EC (0x0004)
	float                                              MaxIdleTime;                                 // 0x02F0 (0x0004)
	float                                              MaxTimeMargin;                               // 0x02F4 (0x0004)
	float                                              TimeMarginSlack;                             // 0x02F8 (0x0004)
	float                                              MinTimeMargin;                               // 0x02FC (0x0004)
	TArray< class APlayerReplicationInfo* >            InactivePRIArray;                            // 0x0300 (0x000C)
	TArray< struct FScriptDelegate >                   Pausers;                                     // 0x030C (0x000C)
	class UOnlineSubsystem*                            OnlineSub;                                   // 0x0318 (0x0004)
	unsigned char                                      unknown_data08[ 8 ];                         // 0x031C (0x0008)
	class UClass*                                      OnlineStatsWriteClass;                       // 0x0324 (0x0004)
	int                                                LeaderboardId;                               // 0x0328 (0x0004)
	int                                                ArbitratedLeaderboardId;                     // 0x032C (0x0004)
	void*                                              CoverReplicatorBase;                         // 0x0330 (0x0004)
	class UClass*                                      OnlineGameSettingsClass;                     // 0x0334 (0x0004)
	struct FString                                     ServerOptions;                               // 0x0338 (0x000C)
	int                                                AdjustedNetSpeed;                            // 0x0344 (0x0004)
	float                                              LastNetSpeedUpdateTime;                      // 0x0348 (0x0004)
	int                                                TotalNetBandwidth;                           // 0x034C (0x0004)
	int                                                MinDynamicBandwidth;                         // 0x0350 (0x0004)
	int                                                MaxDynamicBandwidth;                         // 0x0354 (0x0004)
	class APlayerController*                           SentinelPC;                                  // 0x0358 (0x0004)
	class APawn*                                       SentinelPawn;                                // 0x035C (0x0004)
	TArray< class ANavigationPoint* >                  SentinelNavArray;                            // 0x0360 (0x000C)
	TArray< struct FVector >                           SentinelTravelArray;                         // 0x036C (0x000C)
	int                                                SentinelNavigationIdx;                       // 0x0378 (0x0004)
	int                                                SentinelIdx;                                 // 0x037C (0x0004)
	int                                                NumRotationsIncrement;                       // 0x0380 (0x0004)
	int                                                TravelPointsIncrement;                       // 0x0384 (0x0004)
	struct FScriptDelegate                             __CanUnpause__Delegate;                      // 0x0388 (0x000C)

	// TravelTheWorld
	// PendingMatch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.GameInfo" );

		return ClassPointer;
	};

public:
	void AddPlayerScore ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST/*CPF_OptionalParm*/, int ExtraData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddPlayerScore = NULL;

		if ( !pfnAddPlayerScore )
			pfnAddPlayerScore = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddPlayerScore" );

		AGameInfo_execAddPlayerScore_Parms AddPlayerScore_Parms;
		AddPlayerScore_Parms.PRI = PRI;
		AddPlayerScore_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScore_Parms.PST = PST;
		AddPlayerScore_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScore, &AddPlayerScore_Parms, NULL );
	};

	void DoGameSpecificPerformanceSettings ( class AWorldInfo* TheWorldInfo )
	{
		static UFunction* pfnDoGameSpecificPerformanceSettings = NULL;

		if ( !pfnDoGameSpecificPerformanceSettings )
			pfnDoGameSpecificPerformanceSettings = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoGameSpecificPerformanceSettings" );

		AGameInfo_execDoGameSpecificPerformanceSettings_Parms DoGameSpecificPerformanceSettings_Parms;
		DoGameSpecificPerformanceSettings_Parms.TheWorldInfo = TheWorldInfo;

		this->ProcessEvent( pfnDoGameSpecificPerformanceSettings, &DoGameSpecificPerformanceSettings_Parms, NULL );
	};

	void DoTimeBasedSentinelStatGathering ()
	{
		static UFunction* pfnDoTimeBasedSentinelStatGathering = NULL;

		if ( !pfnDoTimeBasedSentinelStatGathering )
			pfnDoTimeBasedSentinelStatGathering = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoTimeBasedSentinelStatGathering" );

		AGameInfo_execDoTimeBasedSentinelStatGathering_Parms DoTimeBasedSentinelStatGathering_Parms;

		this->ProcessEvent( pfnDoTimeBasedSentinelStatGathering, &DoTimeBasedSentinelStatGathering_Parms, NULL );
	};

	void DoSentinel_PerfAtSpecificLocation ( struct FVector InLocation, struct FRotator InRotation )
	{
		static UFunction* pfnDoSentinel_PerfAtSpecificLocation = NULL;

		if ( !pfnDoSentinel_PerfAtSpecificLocation )
			pfnDoSentinel_PerfAtSpecificLocation = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoSentinel_PerfAtSpecificLocation" );

		AGameInfo_execDoSentinel_PerfAtSpecificLocation_Parms DoSentinel_PerfAtSpecificLocation_Parms;
		memcpy( &DoSentinel_PerfAtSpecificLocation_Parms.InLocation, &InLocation, 0xC );
		memcpy( &DoSentinel_PerfAtSpecificLocation_Parms.InRotation, &InRotation, 0xC );

		pfnDoSentinel_PerfAtSpecificLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoSentinel_PerfAtSpecificLocation, &DoSentinel_PerfAtSpecificLocation_Parms, NULL );
		pfnDoSentinel_PerfAtSpecificLocation->FunctionFlags |= 0x400;
	};

	void DoSentinel_MemoryAtSpecificLocation ( struct FVector InLocation, struct FRotator InRotation )
	{
		static UFunction* pfnDoSentinel_MemoryAtSpecificLocation = NULL;

		if ( !pfnDoSentinel_MemoryAtSpecificLocation )
			pfnDoSentinel_MemoryAtSpecificLocation = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoSentinel_MemoryAtSpecificLocation" );

		AGameInfo_execDoSentinel_MemoryAtSpecificLocation_Parms DoSentinel_MemoryAtSpecificLocation_Parms;
		memcpy( &DoSentinel_MemoryAtSpecificLocation_Parms.InLocation, &InLocation, 0xC );
		memcpy( &DoSentinel_MemoryAtSpecificLocation_Parms.InRotation, &InRotation, 0xC );

		pfnDoSentinel_MemoryAtSpecificLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoSentinel_MemoryAtSpecificLocation, &DoSentinel_MemoryAtSpecificLocation_Parms, NULL );
		pfnDoSentinel_MemoryAtSpecificLocation->FunctionFlags |= 0x400;
	};

	void GetTravelLocations ( struct FName LevelName, class APlayerController* PC, TArray< struct FVector >* TravelPoints )
	{
		static UFunction* pfnGetTravelLocations = NULL;

		if ( !pfnGetTravelLocations )
			pfnGetTravelLocations = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetTravelLocations" );

		AGameInfo_execGetTravelLocations_Parms GetTravelLocations_Parms;
		memcpy( &GetTravelLocations_Parms.LevelName, &LevelName, 0x8 );
		GetTravelLocations_Parms.PC = PC;

		pfnGetTravelLocations->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTravelLocations, &GetTravelLocations_Parms, NULL );
		pfnGetTravelLocations->FunctionFlags |= 0x400;

		if ( TravelPoints )
			memcpy( TravelPoints, &GetTravelLocations_Parms.TravelPoints, 0xC ); // CPF_OutParm
	};

	void HandlePerLoadedMapAudioStats ()
	{
		static UFunction* pfnHandlePerLoadedMapAudioStats = NULL;

		if ( !pfnHandlePerLoadedMapAudioStats )
			pfnHandlePerLoadedMapAudioStats = UObject::FindObject< UFunction >( "Function Engine.GameInfo.HandlePerLoadedMapAudioStats" );

		AGameInfo_execHandlePerLoadedMapAudioStats_Parms HandlePerLoadedMapAudioStats_Parms;

		pfnHandlePerLoadedMapAudioStats->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnHandlePerLoadedMapAudioStats, &HandlePerLoadedMapAudioStats_Parms, NULL );
		pfnHandlePerLoadedMapAudioStats->FunctionFlags |= 0x400;
	};

	void DoSentinelActionPerLoadedMap ()
	{
		static UFunction* pfnDoSentinelActionPerLoadedMap = NULL;

		if ( !pfnDoSentinelActionPerLoadedMap )
			pfnDoSentinelActionPerLoadedMap = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoSentinelActionPerLoadedMap" );

		AGameInfo_execDoSentinelActionPerLoadedMap_Parms DoSentinelActionPerLoadedMap_Parms;

		pfnDoSentinelActionPerLoadedMap->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoSentinelActionPerLoadedMap, &DoSentinelActionPerLoadedMap_Parms, NULL );
		pfnDoSentinelActionPerLoadedMap->FunctionFlags |= 0x400;
	};

	void DoTravelTheWorld ()
	{
		static UFunction* pfnDoTravelTheWorld = NULL;

		if ( !pfnDoTravelTheWorld )
			pfnDoTravelTheWorld = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoTravelTheWorld" );

		AGameInfo_execDoTravelTheWorld_Parms DoTravelTheWorld_Parms;

		this->ProcessEvent( pfnDoTravelTheWorld, &DoTravelTheWorld_Parms, NULL );
	};

	void EndSentinelRun ( unsigned char RunResult )
	{
		static UFunction* pfnEndSentinelRun = NULL;

		if ( !pfnEndSentinelRun )
			pfnEndSentinelRun = UObject::FindObject< UFunction >( "Function Engine.GameInfo.EndSentinelRun" );

		AGameInfo_execEndSentinelRun_Parms EndSentinelRun_Parms;
		EndSentinelRun_Parms.RunResult = RunResult;

		pfnEndSentinelRun->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEndSentinelRun, &EndSentinelRun_Parms, NULL );
		pfnEndSentinelRun->FunctionFlags |= 0x400;
	};

	void AddSentinelPerTimePeriodStats ( struct FVector InLocation, struct FRotator InRotation )
	{
		static UFunction* pfnAddSentinelPerTimePeriodStats = NULL;

		if ( !pfnAddSentinelPerTimePeriodStats )
			pfnAddSentinelPerTimePeriodStats = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddSentinelPerTimePeriodStats" );

		AGameInfo_execAddSentinelPerTimePeriodStats_Parms AddSentinelPerTimePeriodStats_Parms;
		memcpy( &AddSentinelPerTimePeriodStats_Parms.InLocation, &InLocation, 0xC );
		memcpy( &AddSentinelPerTimePeriodStats_Parms.InRotation, &InRotation, 0xC );

		pfnAddSentinelPerTimePeriodStats->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddSentinelPerTimePeriodStats, &AddSentinelPerTimePeriodStats_Parms, NULL );
		pfnAddSentinelPerTimePeriodStats->FunctionFlags |= 0x400;
	};

	void BeginSentinelRun ( struct FString TaskDescription, struct FString TaskParameter, struct FString TagDesc )
	{
		static UFunction* pfnBeginSentinelRun = NULL;

		if ( !pfnBeginSentinelRun )
			pfnBeginSentinelRun = UObject::FindObject< UFunction >( "Function Engine.GameInfo.BeginSentinelRun" );

		AGameInfo_execBeginSentinelRun_Parms BeginSentinelRun_Parms;
		memcpy( &BeginSentinelRun_Parms.TaskDescription, &TaskDescription, 0xC );
		memcpy( &BeginSentinelRun_Parms.TaskParameter, &TaskParameter, 0xC );
		memcpy( &BeginSentinelRun_Parms.TagDesc, &TagDesc, 0xC );

		pfnBeginSentinelRun->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBeginSentinelRun, &BeginSentinelRun_Parms, NULL );
		pfnBeginSentinelRun->FunctionFlags |= 0x400;
	};

	void TellClientsToTravelToSession ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
	{
		static UFunction* pfnTellClientsToTravelToSession = NULL;

		if ( !pfnTellClientsToTravelToSession )
			pfnTellClientsToTravelToSession = UObject::FindObject< UFunction >( "Function Engine.GameInfo.TellClientsToTravelToSession" );

		AGameInfo_execTellClientsToTravelToSession_Parms TellClientsToTravelToSession_Parms;
		memcpy( &TellClientsToTravelToSession_Parms.SessionName, &SessionName, 0x8 );
		TellClientsToTravelToSession_Parms.SearchClass = SearchClass;
		memcpy( &TellClientsToTravelToSession_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x44 );

		this->ProcessEvent( pfnTellClientsToTravelToSession, &TellClientsToTravelToSession_Parms, NULL );
	};

	void TellClientsToReturnToPartyHost ( class APlayerReplicationInfo* PartyLeader/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTellClientsToReturnToPartyHost = NULL;

		if ( !pfnTellClientsToReturnToPartyHost )
			pfnTellClientsToReturnToPartyHost = UObject::FindObject< UFunction >( "Function Engine.GameInfo.TellClientsToReturnToPartyHost" );

		AGameInfo_execTellClientsToReturnToPartyHost_Parms TellClientsToReturnToPartyHost_Parms;
		TellClientsToReturnToPartyHost_Parms.PartyLeader = PartyLeader;

		this->ProcessEvent( pfnTellClientsToReturnToPartyHost, &TellClientsToReturnToPartyHost_Parms, NULL );
	};

	void IncrementNumberOfMatchesPlayed ()
	{
		static UFunction* pfnIncrementNumberOfMatchesPlayed = NULL;

		if ( !pfnIncrementNumberOfMatchesPlayed )
			pfnIncrementNumberOfMatchesPlayed = UObject::FindObject< UFunction >( "Function Engine.GameInfo.IncrementNumberOfMatchesPlayed" );

		AGameInfo_execIncrementNumberOfMatchesPlayed_Parms IncrementNumberOfMatchesPlayed_Parms;

		this->ProcessEvent( pfnIncrementNumberOfMatchesPlayed, &IncrementNumberOfMatchesPlayed_Parms, NULL );
	};

	void IncrementAutomatedTestingMapIndex ()
	{
		static UFunction* pfnIncrementAutomatedTestingMapIndex = NULL;

		if ( !pfnIncrementAutomatedTestingMapIndex )
			pfnIncrementAutomatedTestingMapIndex = UObject::FindObject< UFunction >( "Function Engine.GameInfo.IncrementAutomatedTestingMapIndex" );

		AGameInfo_execIncrementAutomatedTestingMapIndex_Parms IncrementAutomatedTestingMapIndex_Parms;

		this->ProcessEvent( pfnIncrementAutomatedTestingMapIndex, &IncrementAutomatedTestingMapIndex_Parms, NULL );
	};

	void CloseAutomatedMapTestTimer ()
	{
		static UFunction* pfnCloseAutomatedMapTestTimer = NULL;

		if ( !pfnCloseAutomatedMapTestTimer )
			pfnCloseAutomatedMapTestTimer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CloseAutomatedMapTestTimer" );

		AGameInfo_execCloseAutomatedMapTestTimer_Parms CloseAutomatedMapTestTimer_Parms;

		this->ProcessEvent( pfnCloseAutomatedMapTestTimer, &CloseAutomatedMapTestTimer_Parms, NULL );
	};

	void StartAutomatedMapTestTimerWorker ()
	{
		static UFunction* pfnStartAutomatedMapTestTimerWorker = NULL;

		if ( !pfnStartAutomatedMapTestTimerWorker )
			pfnStartAutomatedMapTestTimerWorker = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartAutomatedMapTestTimerWorker" );

		AGameInfo_execStartAutomatedMapTestTimerWorker_Parms StartAutomatedMapTestTimerWorker_Parms;

		this->ProcessEvent( pfnStartAutomatedMapTestTimerWorker, &StartAutomatedMapTestTimerWorker_Parms, NULL );
	};

	void eventStartAutomatedMapTestTimer ()
	{
		static UFunction* pfnStartAutomatedMapTestTimer = NULL;

		if ( !pfnStartAutomatedMapTestTimer )
			pfnStartAutomatedMapTestTimer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartAutomatedMapTestTimer" );

		AGameInfo_eventStartAutomatedMapTestTimer_Parms StartAutomatedMapTestTimer_Parms;

		this->ProcessEvent( pfnStartAutomatedMapTestTimer, &StartAutomatedMapTestTimer_Parms, NULL );
	};

	void OnServerCreateComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnServerCreateComplete = NULL;

		if ( !pfnOnServerCreateComplete )
			pfnOnServerCreateComplete = UObject::FindObject< UFunction >( "Function Engine.GameInfo.OnServerCreateComplete" );

		AGameInfo_execOnServerCreateComplete_Parms OnServerCreateComplete_Parms;
		memcpy( &OnServerCreateComplete_Parms.SessionName, &SessionName, 0x8 );
		OnServerCreateComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnServerCreateComplete, &OnServerCreateComplete_Parms, NULL );
	};

	void RegisterServer ()
	{
		static UFunction* pfnRegisterServer = NULL;

		if ( !pfnRegisterServer )
			pfnRegisterServer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RegisterServer" );

		AGameInfo_execRegisterServer_Parms RegisterServer_Parms;

		this->ProcessEvent( pfnRegisterServer, &RegisterServer_Parms, NULL );
	};

	void OnLoginChange ( unsigned char LocalUserNum )
	{
		static UFunction* pfnOnLoginChange = NULL;

		if ( !pfnOnLoginChange )
			pfnOnLoginChange = UObject::FindObject< UFunction >( "Function Engine.GameInfo.OnLoginChange" );

		AGameInfo_execOnLoginChange_Parms OnLoginChange_Parms;
		OnLoginChange_Parms.LocalUserNum = LocalUserNum;

		this->ProcessEvent( pfnOnLoginChange, &OnLoginChange_Parms, NULL );
	};

	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
	{
		static UFunction* pfnOnLoginFailed = NULL;

		if ( !pfnOnLoginFailed )
			pfnOnLoginFailed = UObject::FindObject< UFunction >( "Function Engine.GameInfo.OnLoginFailed" );

		AGameInfo_execOnLoginFailed_Parms OnLoginFailed_Parms;
		OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
		OnLoginFailed_Parms.ErrorCode = ErrorCode;

		this->ProcessEvent( pfnOnLoginFailed, &OnLoginFailed_Parms, NULL );
	};

	void ClearAutoLoginDelegates ()
	{
		static UFunction* pfnClearAutoLoginDelegates = NULL;

		if ( !pfnClearAutoLoginDelegates )
			pfnClearAutoLoginDelegates = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ClearAutoLoginDelegates" );

		AGameInfo_execClearAutoLoginDelegates_Parms ClearAutoLoginDelegates_Parms;

		this->ProcessEvent( pfnClearAutoLoginDelegates, &ClearAutoLoginDelegates_Parms, NULL );
	};

	bool ProcessServerLogin ()
	{
		static UFunction* pfnProcessServerLogin = NULL;

		if ( !pfnProcessServerLogin )
			pfnProcessServerLogin = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ProcessServerLogin" );

		AGameInfo_execProcessServerLogin_Parms ProcessServerLogin_Parms;

		this->ProcessEvent( pfnProcessServerLogin, &ProcessServerLogin_Parms, NULL );

		return ProcessServerLogin_Parms.ReturnValue;
	};

	void eventMatineeCancelled ()
	{
		static UFunction* pfnMatineeCancelled = NULL;

		if ( !pfnMatineeCancelled )
			pfnMatineeCancelled = UObject::FindObject< UFunction >( "Function Engine.GameInfo.MatineeCancelled" );

		AGameInfo_eventMatineeCancelled_Parms MatineeCancelled_Parms;

		this->ProcessEvent( pfnMatineeCancelled, &MatineeCancelled_Parms, NULL );
	};

	void RecalculateSkillRating ()
	{
		static UFunction* pfnRecalculateSkillRating = NULL;

		if ( !pfnRecalculateSkillRating )
			pfnRecalculateSkillRating = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RecalculateSkillRating" );

		AGameInfo_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;

		this->ProcessEvent( pfnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );
	};

	void UpdateGameplayMuteList ( class APlayerController* PC )
	{
		static UFunction* pfnUpdateGameplayMuteList = NULL;

		if ( !pfnUpdateGameplayMuteList )
			pfnUpdateGameplayMuteList = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UpdateGameplayMuteList" );

		AGameInfo_execUpdateGameplayMuteList_Parms UpdateGameplayMuteList_Parms;
		UpdateGameplayMuteList_Parms.PC = PC;

		this->ProcessEvent( pfnUpdateGameplayMuteList, &UpdateGameplayMuteList_Parms, NULL );
	};

	void NotifyArbitratedMatchEnd ()
	{
		static UFunction* pfnNotifyArbitratedMatchEnd = NULL;

		if ( !pfnNotifyArbitratedMatchEnd )
			pfnNotifyArbitratedMatchEnd = UObject::FindObject< UFunction >( "Function Engine.GameInfo.NotifyArbitratedMatchEnd" );

		AGameInfo_execNotifyArbitratedMatchEnd_Parms NotifyArbitratedMatchEnd_Parms;

		this->ProcessEvent( pfnNotifyArbitratedMatchEnd, &NotifyArbitratedMatchEnd_Parms, NULL );
	};

	bool MatchIsInProgress ()
	{
		static UFunction* pfnMatchIsInProgress = NULL;

		if ( !pfnMatchIsInProgress )
			pfnMatchIsInProgress = UObject::FindObject< UFunction >( "Function Engine.GameInfo.MatchIsInProgress" );

		AGameInfo_execMatchIsInProgress_Parms MatchIsInProgress_Parms;

		this->ProcessEvent( pfnMatchIsInProgress, &MatchIsInProgress_Parms, NULL );

		return MatchIsInProgress_Parms.ReturnValue;
	};

	void ArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnArbitrationRegistrationComplete = NULL;

		if ( !pfnArbitrationRegistrationComplete )
			pfnArbitrationRegistrationComplete = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ArbitrationRegistrationComplete" );

		AGameInfo_execArbitrationRegistrationComplete_Parms ArbitrationRegistrationComplete_Parms;
		memcpy( &ArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
		ArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnArbitrationRegistrationComplete, &ArbitrationRegistrationComplete_Parms, NULL );
	};

	void RegisterServerForArbitration ()
	{
		static UFunction* pfnRegisterServerForArbitration = NULL;

		if ( !pfnRegisterServerForArbitration )
			pfnRegisterServerForArbitration = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RegisterServerForArbitration" );

		AGameInfo_execRegisterServerForArbitration_Parms RegisterServerForArbitration_Parms;

		this->ProcessEvent( pfnRegisterServerForArbitration, &RegisterServerForArbitration_Parms, NULL );
	};

	void StartArbitratedMatch ()
	{
		static UFunction* pfnStartArbitratedMatch = NULL;

		if ( !pfnStartArbitratedMatch )
			pfnStartArbitratedMatch = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartArbitratedMatch" );

		AGameInfo_execStartArbitratedMatch_Parms StartArbitratedMatch_Parms;

		this->ProcessEvent( pfnStartArbitratedMatch, &StartArbitratedMatch_Parms, NULL );
	};

	void StartArbitrationRegistration ()
	{
		static UFunction* pfnStartArbitrationRegistration = NULL;

		if ( !pfnStartArbitrationRegistration )
			pfnStartArbitrationRegistration = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartArbitrationRegistration" );

		AGameInfo_execStartArbitrationRegistration_Parms StartArbitrationRegistration_Parms;

		this->ProcessEvent( pfnStartArbitrationRegistration, &StartArbitrationRegistration_Parms, NULL );
	};

	void ProcessClientRegistrationCompletion ( class APlayerController* PC, unsigned long bWasSuccessful )
	{
		static UFunction* pfnProcessClientRegistrationCompletion = NULL;

		if ( !pfnProcessClientRegistrationCompletion )
			pfnProcessClientRegistrationCompletion = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ProcessClientRegistrationCompletion" );

		AGameInfo_execProcessClientRegistrationCompletion_Parms ProcessClientRegistrationCompletion_Parms;
		ProcessClientRegistrationCompletion_Parms.PC = PC;
		ProcessClientRegistrationCompletion_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnProcessClientRegistrationCompletion, &ProcessClientRegistrationCompletion_Parms, NULL );
	};

	void UpdateGameSettingsCounts ()
	{
		static UFunction* pfnUpdateGameSettingsCounts = NULL;

		if ( !pfnUpdateGameSettingsCounts )
			pfnUpdateGameSettingsCounts = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UpdateGameSettingsCounts" );

		AGameInfo_execUpdateGameSettingsCounts_Parms UpdateGameSettingsCounts_Parms;

		this->ProcessEvent( pfnUpdateGameSettingsCounts, &UpdateGameSettingsCounts_Parms, NULL );
	};

	void SetSeamlessTravelViewTarget ( class APlayerController* PC )
	{
		static UFunction* pfnSetSeamlessTravelViewTarget = NULL;

		if ( !pfnSetSeamlessTravelViewTarget )
			pfnSetSeamlessTravelViewTarget = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SetSeamlessTravelViewTarget" );

		AGameInfo_execSetSeamlessTravelViewTarget_Parms SetSeamlessTravelViewTarget_Parms;
		SetSeamlessTravelViewTarget_Parms.PC = PC;

		this->ProcessEvent( pfnSetSeamlessTravelViewTarget, &SetSeamlessTravelViewTarget_Parms, NULL );
	};

	void eventHandleSeamlessTravelPlayer ( class AController** C )
	{
		static UFunction* pfnHandleSeamlessTravelPlayer = NULL;

		if ( !pfnHandleSeamlessTravelPlayer )
			pfnHandleSeamlessTravelPlayer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.HandleSeamlessTravelPlayer" );

		AGameInfo_eventHandleSeamlessTravelPlayer_Parms HandleSeamlessTravelPlayer_Parms;

		this->ProcessEvent( pfnHandleSeamlessTravelPlayer, &HandleSeamlessTravelPlayer_Parms, NULL );

		if ( C )
			*C = HandleSeamlessTravelPlayer_Parms.C; // CPF_OutParm
	};

	void UpdateGameSettings ()
	{
		static UFunction* pfnUpdateGameSettings = NULL;

		if ( !pfnUpdateGameSettings )
			pfnUpdateGameSettings = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UpdateGameSettings" );

		AGameInfo_execUpdateGameSettings_Parms UpdateGameSettings_Parms;

		this->ProcessEvent( pfnUpdateGameSettings, &UpdateGameSettings_Parms, NULL );
	};

	void eventPostSeamlessTravel ()
	{
		static UFunction* pfnPostSeamlessTravel = NULL;

		if ( !pfnPostSeamlessTravel )
			pfnPostSeamlessTravel = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PostSeamlessTravel" );

		AGameInfo_eventPostSeamlessTravel_Parms PostSeamlessTravel_Parms;

		this->ProcessEvent( pfnPostSeamlessTravel, &PostSeamlessTravel_Parms, NULL );
	};

	void SwapPlayerControllers ( class APlayerController* OldPC, class APlayerController* NewPC )
	{
		static UFunction* pfnSwapPlayerControllers = NULL;

		if ( !pfnSwapPlayerControllers )
			pfnSwapPlayerControllers = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SwapPlayerControllers" );

		AGameInfo_execSwapPlayerControllers_Parms SwapPlayerControllers_Parms;
		SwapPlayerControllers_Parms.OldPC = OldPC;
		SwapPlayerControllers_Parms.NewPC = NewPC;

		pfnSwapPlayerControllers->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSwapPlayerControllers, &SwapPlayerControllers_Parms, NULL );
		pfnSwapPlayerControllers->FunctionFlags |= 0x400;
	};

	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList )
	{
		static UFunction* pfnGetSeamlessTravelActorList = NULL;

		if ( !pfnGetSeamlessTravelActorList )
			pfnGetSeamlessTravelActorList = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetSeamlessTravelActorList" );

		AGameInfo_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;
		GetSeamlessTravelActorList_Parms.bToEntry = bToEntry;

		this->ProcessEvent( pfnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL );

		if ( ActorList )
			*ActorList = GetSeamlessTravelActorList_Parms.ActorList; // CPF_OutParm
	};

	void OverridePRI ( class APlayerController* PC, class APlayerReplicationInfo* OldPRI )
	{
		static UFunction* pfnOverridePRI = NULL;

		if ( !pfnOverridePRI )
			pfnOverridePRI = UObject::FindObject< UFunction >( "Function Engine.GameInfo.OverridePRI" );

		AGameInfo_execOverridePRI_Parms OverridePRI_Parms;
		OverridePRI_Parms.PC = PC;
		OverridePRI_Parms.OldPRI = OldPRI;

		this->ProcessEvent( pfnOverridePRI, &OverridePRI_Parms, NULL );
	};

	bool FindInactivePRI ( class APlayerController* PC )
	{
		static UFunction* pfnFindInactivePRI = NULL;

		if ( !pfnFindInactivePRI )
			pfnFindInactivePRI = UObject::FindObject< UFunction >( "Function Engine.GameInfo.FindInactivePRI" );

		AGameInfo_execFindInactivePRI_Parms FindInactivePRI_Parms;
		FindInactivePRI_Parms.PC = PC;

		this->ProcessEvent( pfnFindInactivePRI, &FindInactivePRI_Parms, NULL );

		return FindInactivePRI_Parms.ReturnValue;
	};

	void AddInactivePRI ( class APlayerReplicationInfo* PRI, class APlayerController* PC )
	{
		static UFunction* pfnAddInactivePRI = NULL;

		if ( !pfnAddInactivePRI )
			pfnAddInactivePRI = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddInactivePRI" );

		AGameInfo_execAddInactivePRI_Parms AddInactivePRI_Parms;
		AddInactivePRI_Parms.PRI = PRI;
		AddInactivePRI_Parms.PC = PC;

		this->ProcessEvent( pfnAddInactivePRI, &AddInactivePRI_Parms, NULL );
	};

	void eventPostCommitMapChange ()
	{
		static UFunction* pfnPostCommitMapChange = NULL;

		if ( !pfnPostCommitMapChange )
			pfnPostCommitMapChange = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PostCommitMapChange" );

		AGameInfo_eventPostCommitMapChange_Parms PostCommitMapChange_Parms;

		this->ProcessEvent( pfnPostCommitMapChange, &PostCommitMapChange_Parms, NULL );
	};

	void eventPreCommitMapChange ( struct FString PreviousMapName, struct FString NextMapName )
	{
		static UFunction* pfnPreCommitMapChange = NULL;

		if ( !pfnPreCommitMapChange )
			pfnPreCommitMapChange = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PreCommitMapChange" );

		AGameInfo_eventPreCommitMapChange_Parms PreCommitMapChange_Parms;
		memcpy( &PreCommitMapChange_Parms.PreviousMapName, &PreviousMapName, 0xC );
		memcpy( &PreCommitMapChange_Parms.NextMapName, &NextMapName, 0xC );

		this->ProcessEvent( pfnPreCommitMapChange, &PreCommitMapChange_Parms, NULL );
	};

	bool AllowPausing ( class APlayerController* PC/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAllowPausing = NULL;

		if ( !pfnAllowPausing )
			pfnAllowPausing = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AllowPausing" );

		AGameInfo_execAllowPausing_Parms AllowPausing_Parms;
		AllowPausing_Parms.PC = PC;

		this->ProcessEvent( pfnAllowPausing, &AllowPausing_Parms, NULL );

		return AllowPausing_Parms.ReturnValue;
	};

	bool AllowCheats ( class APlayerController* P )
	{
		static UFunction* pfnAllowCheats = NULL;

		if ( !pfnAllowCheats )
			pfnAllowCheats = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AllowCheats" );

		AGameInfo_execAllowCheats_Parms AllowCheats_Parms;
		AllowCheats_Parms.P = P;

		this->ProcessEvent( pfnAllowCheats, &AllowCheats_Parms, NULL );

		return AllowCheats_Parms.ReturnValue;
	};

	bool AllowMutator ( struct FString MutatorClassName )
	{
		static UFunction* pfnAllowMutator = NULL;

		if ( !pfnAllowMutator )
			pfnAllowMutator = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AllowMutator" );

		AGameInfo_execAllowMutator_Parms AllowMutator_Parms;
		memcpy( &AllowMutator_Parms.MutatorClassName, &MutatorClassName, 0xC );

		this->ProcessEvent( pfnAllowMutator, &AllowMutator_Parms, NULL );

		return AllowMutator_Parms.ReturnValue;
	};

	bool PlayerCanRestart ( class APlayerController* aPlayer )
	{
		static UFunction* pfnPlayerCanRestart = NULL;

		if ( !pfnPlayerCanRestart )
			pfnPlayerCanRestart = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PlayerCanRestart" );

		AGameInfo_execPlayerCanRestart_Parms PlayerCanRestart_Parms;
		PlayerCanRestart_Parms.aPlayer = aPlayer;

		this->ProcessEvent( pfnPlayerCanRestart, &PlayerCanRestart_Parms, NULL );

		return PlayerCanRestart_Parms.ReturnValue;
	};

	bool PlayerCanRestartGame ( class APlayerController* aPlayer )
	{
		static UFunction* pfnPlayerCanRestartGame = NULL;

		if ( !pfnPlayerCanRestartGame )
			pfnPlayerCanRestartGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PlayerCanRestartGame" );

		AGameInfo_execPlayerCanRestartGame_Parms PlayerCanRestartGame_Parms;
		PlayerCanRestartGame_Parms.aPlayer = aPlayer;

		this->ProcessEvent( pfnPlayerCanRestartGame, &PlayerCanRestartGame_Parms, NULL );

		return PlayerCanRestartGame_Parms.ReturnValue;
	};

	void KillBots ()
	{
		static UFunction* pfnKillBots = NULL;

		if ( !pfnKillBots )
			pfnKillBots = UObject::FindObject< UFunction >( "Function Engine.GameInfo.KillBots" );

		AGameInfo_execKillBots_Parms KillBots_Parms;

		this->ProcessEvent( pfnKillBots, &KillBots_Parms, NULL );
	};

	void DriverLeftVehicle ( class AVehicle* V, class APawn* P )
	{
		static UFunction* pfnDriverLeftVehicle = NULL;

		if ( !pfnDriverLeftVehicle )
			pfnDriverLeftVehicle = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DriverLeftVehicle" );

		AGameInfo_execDriverLeftVehicle_Parms DriverLeftVehicle_Parms;
		DriverLeftVehicle_Parms.V = V;
		DriverLeftVehicle_Parms.P = P;

		this->ProcessEvent( pfnDriverLeftVehicle, &DriverLeftVehicle_Parms, NULL );
	};

	bool CanLeaveVehicle ( class AVehicle* V, class APawn* P )
	{
		static UFunction* pfnCanLeaveVehicle = NULL;

		if ( !pfnCanLeaveVehicle )
			pfnCanLeaveVehicle = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CanLeaveVehicle" );

		AGameInfo_execCanLeaveVehicle_Parms CanLeaveVehicle_Parms;
		CanLeaveVehicle_Parms.V = V;
		CanLeaveVehicle_Parms.P = P;

		this->ProcessEvent( pfnCanLeaveVehicle, &CanLeaveVehicle_Parms, NULL );

		return CanLeaveVehicle_Parms.ReturnValue;
	};

	void DriverEnteredVehicle ( class AVehicle* V, class APawn* P )
	{
		static UFunction* pfnDriverEnteredVehicle = NULL;

		if ( !pfnDriverEnteredVehicle )
			pfnDriverEnteredVehicle = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DriverEnteredVehicle" );

		AGameInfo_execDriverEnteredVehicle_Parms DriverEnteredVehicle_Parms;
		DriverEnteredVehicle_Parms.V = V;
		DriverEnteredVehicle_Parms.P = P;

		this->ProcessEvent( pfnDriverEnteredVehicle, &DriverEnteredVehicle_Parms, NULL );
	};

	struct FString ParseMessageString ( class AController* Who, struct FString Message )
	{
		static UFunction* pfnParseMessageString = NULL;

		if ( !pfnParseMessageString )
			pfnParseMessageString = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ParseMessageString" );

		AGameInfo_execParseMessageString_Parms ParseMessageString_Parms;
		ParseMessageString_Parms.Who = Who;
		memcpy( &ParseMessageString_Parms.Message, &Message, 0xC );

		this->ProcessEvent( pfnParseMessageString, &ParseMessageString_Parms, NULL );

		return ParseMessageString_Parms.ReturnValue;
	};

	void ModifyScoreKill ( class AController* Killer, class AController* Other )
	{
		static UFunction* pfnModifyScoreKill = NULL;

		if ( !pfnModifyScoreKill )
			pfnModifyScoreKill = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ModifyScoreKill" );

		AGameInfo_execModifyScoreKill_Parms ModifyScoreKill_Parms;
		ModifyScoreKill_Parms.Killer = Killer;
		ModifyScoreKill_Parms.Other = Other;

		this->ProcessEvent( pfnModifyScoreKill, &ModifyScoreKill_Parms, NULL );
	};

	void ScoreKill ( class AController* Killer, class AController* Other, class UClass* DamageType, int WeaponID/*CPF_OptionalParm*/, unsigned long bFakeDeath/*CPF_OptionalParm*/, int ShootFlags/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnScoreKill = NULL;

		if ( !pfnScoreKill )
			pfnScoreKill = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ScoreKill" );

		AGameInfo_execScoreKill_Parms ScoreKill_Parms;
		ScoreKill_Parms.Killer = Killer;
		ScoreKill_Parms.Other = Other;
		ScoreKill_Parms.DamageType = DamageType;
		ScoreKill_Parms.WeaponID = WeaponID;
		ScoreKill_Parms.bFakeDeath = bFakeDeath;
		ScoreKill_Parms.ShootFlags = ShootFlags;

		this->ProcessEvent( pfnScoreKill, &ScoreKill_Parms, NULL );
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer )
	{
		static UFunction* pfnCheckScore = NULL;

		if ( !pfnCheckScore )
			pfnCheckScore = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CheckScore" );

		AGameInfo_execCheckScore_Parms CheckScore_Parms;
		CheckScore_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnCheckScore, &CheckScore_Parms, NULL );

		return CheckScore_Parms.ReturnValue;
	};

	void ScoreObjective ( class APlayerReplicationInfo* Scorer, int Score )
	{
		static UFunction* pfnScoreObjective = NULL;

		if ( !pfnScoreObjective )
			pfnScoreObjective = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ScoreObjective" );

		AGameInfo_execScoreObjective_Parms ScoreObjective_Parms;
		ScoreObjective_Parms.Scorer = Scorer;
		ScoreObjective_Parms.Score = Score;

		this->ProcessEvent( pfnScoreObjective, &ScoreObjective_Parms, NULL );
	};

	void AddObjectiveScore ( class APlayerReplicationInfo* Scorer, int Score )
	{
		static UFunction* pfnAddObjectiveScore = NULL;

		if ( !pfnAddObjectiveScore )
			pfnAddObjectiveScore = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddObjectiveScore" );

		AGameInfo_execAddObjectiveScore_Parms AddObjectiveScore_Parms;
		AddObjectiveScore_Parms.Scorer = Scorer;
		AddObjectiveScore_Parms.Score = Score;

		this->ProcessEvent( pfnAddObjectiveScore, &AddObjectiveScore_Parms, NULL );
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RatePlayerStart" );

		AGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void* ChoosePlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChoosePlayerStart = NULL;

		if ( !pfnChoosePlayerStart )
			pfnChoosePlayerStart = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ChoosePlayerStart" );

		AGameInfo_execChoosePlayerStart_Parms ChoosePlayerStart_Parms;
		ChoosePlayerStart_Parms.Player = Player;
		ChoosePlayerStart_Parms.InTeam = InTeam;

		this->ProcessEvent( pfnChoosePlayerStart, &ChoosePlayerStart_Parms, NULL );

		return ChoosePlayerStart_Parms.ReturnValue;
	};

	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/, struct FString IncomingName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPlayerStart = NULL;

		if ( !pfnFindPlayerStart )
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function Engine.GameInfo.FindPlayerStart" );

		AGameInfo_execFindPlayerStart_Parms FindPlayerStart_Parms;
		FindPlayerStart_Parms.Player = Player;
		FindPlayerStart_Parms.InTeam = InTeam;
		memcpy( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

		this->ProcessEvent( pfnFindPlayerStart, &FindPlayerStart_Parms, NULL );

		return FindPlayerStart_Parms.ReturnValue;
	};

	bool ShouldSpawnAtStartSpot ( class AController* Player )
	{
		static UFunction* pfnShouldSpawnAtStartSpot = NULL;

		if ( !pfnShouldSpawnAtStartSpot )
			pfnShouldSpawnAtStartSpot = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ShouldSpawnAtStartSpot" );

		AGameInfo_execShouldSpawnAtStartSpot_Parms ShouldSpawnAtStartSpot_Parms;
		ShouldSpawnAtStartSpot_Parms.Player = Player;

		this->ProcessEvent( pfnShouldSpawnAtStartSpot, &ShouldSpawnAtStartSpot_Parms, NULL );

		return ShouldSpawnAtStartSpot_Parms.ReturnValue;
	};

	void EndLogging ( struct FString Reason )
	{
		static UFunction* pfnEndLogging = NULL;

		if ( !pfnEndLogging )
			pfnEndLogging = UObject::FindObject< UFunction >( "Function Engine.GameInfo.EndLogging" );

		AGameInfo_execEndLogging_Parms EndLogging_Parms;
		memcpy( &EndLogging_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndLogging, &EndLogging_Parms, NULL );
	};

	void EndOnlineGame ()
	{
		static UFunction* pfnEndOnlineGame = NULL;

		if ( !pfnEndOnlineGame )
			pfnEndOnlineGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.EndOnlineGame" );

		AGameInfo_execEndOnlineGame_Parms EndOnlineGame_Parms;

		this->ProcessEvent( pfnEndOnlineGame, &EndOnlineGame_Parms, NULL );
	};

	void PerformEndGameHandling ()
	{
		static UFunction* pfnPerformEndGameHandling = NULL;

		if ( !pfnPerformEndGameHandling )
			pfnPerformEndGameHandling = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PerformEndGameHandling" );

		AGameInfo_execPerformEndGameHandling_Parms PerformEndGameHandling_Parms;

		this->ProcessEvent( pfnPerformEndGameHandling, &PerformEndGameHandling_Parms, NULL );
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.EndGame" );

		AGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	void WriteOnlinePlayerScores ()
	{
		static UFunction* pfnWriteOnlinePlayerScores = NULL;

		if ( !pfnWriteOnlinePlayerScores )
			pfnWriteOnlinePlayerScores = UObject::FindObject< UFunction >( "Function Engine.GameInfo.WriteOnlinePlayerScores" );

		AGameInfo_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;

		this->ProcessEvent( pfnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );
	};

	void WriteOnlineStats ()
	{
		static UFunction* pfnWriteOnlineStats = NULL;

		if ( !pfnWriteOnlineStats )
			pfnWriteOnlineStats = UObject::FindObject< UFunction >( "Function Engine.GameInfo.WriteOnlineStats" );

		AGameInfo_execWriteOnlineStats_Parms WriteOnlineStats_Parms;

		this->ProcessEvent( pfnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CheckEndGame" );

		AGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	bool CheckModifiedEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckModifiedEndGame = NULL;

		if ( !pfnCheckModifiedEndGame )
			pfnCheckModifiedEndGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CheckModifiedEndGame" );

		AGameInfo_execCheckModifiedEndGame_Parms CheckModifiedEndGame_Parms;
		CheckModifiedEndGame_Parms.Winner = Winner;
		memcpy( &CheckModifiedEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckModifiedEndGame, &CheckModifiedEndGame_Parms, NULL );

		return CheckModifiedEndGame_Parms.ReturnValue;
	};

	void eventBroadcastLocalizedTeam ( int TeamIndex, class AActor* Sender, class UClass* Message, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastLocalizedTeam = NULL;

		if ( !pfnBroadcastLocalizedTeam )
			pfnBroadcastLocalizedTeam = UObject::FindObject< UFunction >( "Function Engine.GameInfo.BroadcastLocalizedTeam" );

		AGameInfo_eventBroadcastLocalizedTeam_Parms BroadcastLocalizedTeam_Parms;
		BroadcastLocalizedTeam_Parms.TeamIndex = TeamIndex;
		BroadcastLocalizedTeam_Parms.Sender = Sender;
		BroadcastLocalizedTeam_Parms.Message = Message;
		BroadcastLocalizedTeam_Parms.Switch = Switch;
		BroadcastLocalizedTeam_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedTeam_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalizedTeam_Parms.OptionalObject = OptionalObject;
		BroadcastLocalizedTeam_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnBroadcastLocalizedTeam, &BroadcastLocalizedTeam_Parms, NULL );
	};

	void eventBroadcastLocalized ( class AActor* Sender, class UClass* Message, int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastLocalized = NULL;

		if ( !pfnBroadcastLocalized )
			pfnBroadcastLocalized = UObject::FindObject< UFunction >( "Function Engine.GameInfo.BroadcastLocalized" );

		AGameInfo_eventBroadcastLocalized_Parms BroadcastLocalized_Parms;
		BroadcastLocalized_Parms.Sender = Sender;
		BroadcastLocalized_Parms.Message = Message;
		BroadcastLocalized_Parms.Switch = Switch;
		BroadcastLocalized_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalized_Parms.RelatedPRI1 = RelatedPRI1;
		BroadcastLocalized_Parms.OptionalObject = OptionalObject;
		BroadcastLocalized_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnBroadcastLocalized, &BroadcastLocalized_Parms, NULL );
	};

	void BroadcastTeam ( class AController* Sender, struct FString msg, struct FName Type/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastTeam = NULL;

		if ( !pfnBroadcastTeam )
			pfnBroadcastTeam = UObject::FindObject< UFunction >( "Function Engine.GameInfo.BroadcastTeam" );

		AGameInfo_execBroadcastTeam_Parms BroadcastTeam_Parms;
		BroadcastTeam_Parms.Sender = Sender;
		memcpy( &BroadcastTeam_Parms.msg, &msg, 0xC );
		memcpy( &BroadcastTeam_Parms.Type, &Type, 0x8 );

		this->ProcessEvent( pfnBroadcastTeam, &BroadcastTeam_Parms, NULL );
	};

	void eventBroadcast ( class AActor* Sender, struct FString msg, struct FName Type/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcast = NULL;

		if ( !pfnBroadcast )
			pfnBroadcast = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Broadcast" );

		AGameInfo_eventBroadcast_Parms Broadcast_Parms;
		Broadcast_Parms.Sender = Sender;
		memcpy( &Broadcast_Parms.msg, &msg, 0xC );
		memcpy( &Broadcast_Parms.Type, &Type, 0x8 );

		this->ProcessEvent( pfnBroadcast, &Broadcast_Parms, NULL );
	};

	void RestartGame ()
	{
		static UFunction* pfnRestartGame = NULL;

		if ( !pfnRestartGame )
			pfnRestartGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RestartGame" );

		AGameInfo_execRestartGame_Parms RestartGame_Parms;

		this->ProcessEvent( pfnRestartGame, &RestartGame_Parms, NULL );
	};

	bool GetTravelType ()
	{
		static UFunction* pfnGetTravelType = NULL;

		if ( !pfnGetTravelType )
			pfnGetTravelType = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetTravelType" );

		AGameInfo_execGetTravelType_Parms GetTravelType_Parms;

		this->ProcessEvent( pfnGetTravelType, &GetTravelType_Parms, NULL );

		return GetTravelType_Parms.ReturnValue;
	};

	struct FString GetNextAutomatedTestingMap ()
	{
		static UFunction* pfnGetNextAutomatedTestingMap = NULL;

		if ( !pfnGetNextAutomatedTestingMap )
			pfnGetNextAutomatedTestingMap = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetNextAutomatedTestingMap" );

		AGameInfo_execGetNextAutomatedTestingMap_Parms GetNextAutomatedTestingMap_Parms;

		this->ProcessEvent( pfnGetNextAutomatedTestingMap, &GetNextAutomatedTestingMap_Parms, NULL );

		return GetNextAutomatedTestingMap_Parms.ReturnValue;
	};

	struct FString GetNextMap ()
	{
		static UFunction* pfnGetNextMap = NULL;

		if ( !pfnGetNextMap )
			pfnGetNextMap = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetNextMap" );

		AGameInfo_execGetNextMap_Parms GetNextMap_Parms;

		this->ProcessEvent( pfnGetNextMap, &GetNextMap_Parms, NULL );

		return GetNextMap_Parms.ReturnValue;
	};

	void SendPlayer ( class APlayerController* aPlayer, struct FString URL )
	{
		static UFunction* pfnSendPlayer = NULL;

		if ( !pfnSendPlayer )
			pfnSendPlayer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SendPlayer" );

		AGameInfo_execSendPlayer_Parms SendPlayer_Parms;
		SendPlayer_Parms.aPlayer = aPlayer;
		memcpy( &SendPlayer_Parms.URL, &URL, 0xC );

		this->ProcessEvent( pfnSendPlayer, &SendPlayer_Parms, NULL );
	};

	unsigned char PickTeam ( unsigned char Current, class AController* C )
	{
		static UFunction* pfnPickTeam = NULL;

		if ( !pfnPickTeam )
			pfnPickTeam = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PickTeam" );

		AGameInfo_execPickTeam_Parms PickTeam_Parms;
		PickTeam_Parms.Current = Current;
		PickTeam_Parms.C = C;

		this->ProcessEvent( pfnPickTeam, &PickTeam_Parms, NULL );

		return PickTeam_Parms.ReturnValue;
	};

	bool ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ChangeTeam" );

		AGameInfo_execChangeTeam_Parms ChangeTeam_Parms;
		ChangeTeam_Parms.Other = Other;
		ChangeTeam_Parms.N = N;
		ChangeTeam_Parms.bNewTeam = bNewTeam;

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );

		return ChangeTeam_Parms.ReturnValue;
	};

	void ChangeName ( class AController* Other, struct FString S, unsigned long bNameChange )
	{
		static UFunction* pfnChangeName = NULL;

		if ( !pfnChangeName )
			pfnChangeName = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ChangeName" );

		AGameInfo_execChangeName_Parms ChangeName_Parms;
		ChangeName_Parms.Other = Other;
		memcpy( &ChangeName_Parms.S, &S, 0xC );
		ChangeName_Parms.bNameChange = bNameChange;

		this->ProcessEvent( pfnChangeName, &ChangeName_Parms, NULL );
	};

	void DiscardInventory ( class APawn* Other, class AController* Killer/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDiscardInventory = NULL;

		if ( !pfnDiscardInventory )
			pfnDiscardInventory = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DiscardInventory" );

		AGameInfo_execDiscardInventory_Parms DiscardInventory_Parms;
		DiscardInventory_Parms.Other = Other;
		DiscardInventory_Parms.Killer = Killer;

		this->ProcessEvent( pfnDiscardInventory, &DiscardInventory_Parms, NULL );
	};

	bool PickupQuery ( class APawn* Other, class UClass* ItemClass, class AActor* Pickup )
	{
		static UFunction* pfnPickupQuery = NULL;

		if ( !pfnPickupQuery )
			pfnPickupQuery = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PickupQuery" );

		AGameInfo_execPickupQuery_Parms PickupQuery_Parms;
		PickupQuery_Parms.Other = Other;
		PickupQuery_Parms.ItemClass = ItemClass;
		PickupQuery_Parms.Pickup = Pickup;

		this->ProcessEvent( pfnPickupQuery, &PickupQuery_Parms, NULL );

		return PickupQuery_Parms.ReturnValue;
	};

	bool ShouldRespawn ( void* Other )
	{
		static UFunction* pfnShouldRespawn = NULL;

		if ( !pfnShouldRespawn )
			pfnShouldRespawn = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ShouldRespawn" );

		AGameInfo_execShouldRespawn_Parms ShouldRespawn_Parms;
		ShouldRespawn_Parms.Other = Other;

		this->ProcessEvent( pfnShouldRespawn, &ShouldRespawn_Parms, NULL );

		return ShouldRespawn_Parms.ReturnValue;
	};

	bool CheckRelevance ( class AActor* Other )
	{
		static UFunction* pfnCheckRelevance = NULL;

		if ( !pfnCheckRelevance )
			pfnCheckRelevance = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CheckRelevance" );

		AGameInfo_execCheckRelevance_Parms CheckRelevance_Parms;
		CheckRelevance_Parms.Other = Other;

		this->ProcessEvent( pfnCheckRelevance, &CheckRelevance_Parms, NULL );

		return CheckRelevance_Parms.ReturnValue;
	};

	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum )
	{
		static UFunction* pfnReduceDamage = NULL;

		if ( !pfnReduceDamage )
			pfnReduceDamage = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ReduceDamage" );

		AGameInfo_execReduceDamage_Parms ReduceDamage_Parms;
		ReduceDamage_Parms.injured = injured;
		ReduceDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ReduceDamage_Parms.HitLocation, &HitLocation, 0xC );
		ReduceDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnReduceDamage, &ReduceDamage_Parms, NULL );

		if ( Damage )
			*Damage = ReduceDamage_Parms.Damage; // CPF_OutParm
		if ( Momentum )
			memcpy( Momentum, &ReduceDamage_Parms.Momentum, 0xC ); // CPF_OutParm
	};

	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget )
	{
		static UFunction* pfnCanSpectate = NULL;

		if ( !pfnCanSpectate )
			pfnCanSpectate = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CanSpectate" );

		AGameInfo_execCanSpectate_Parms CanSpectate_Parms;
		CanSpectate_Parms.Viewer = Viewer;
		CanSpectate_Parms.ViewTarget = ViewTarget;

		this->ProcessEvent( pfnCanSpectate, &CanSpectate_Parms, NULL );

		return CanSpectate_Parms.ReturnValue;
	};

	void KickBan ( struct FString S )
	{
		static UFunction* pfnKickBan = NULL;

		if ( !pfnKickBan )
			pfnKickBan = UObject::FindObject< UFunction >( "Function Engine.GameInfo.KickBan" );

		AGameInfo_execKickBan_Parms KickBan_Parms;
		memcpy( &KickBan_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnKickBan, &KickBan_Parms, NULL );
	};

	void Kick ( struct FString S )
	{
		static UFunction* pfnKick = NULL;

		if ( !pfnKick )
			pfnKick = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Kick" );

		AGameInfo_execKick_Parms Kick_Parms;
		memcpy( &Kick_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnKick, &Kick_Parms, NULL );
	};

	struct FString ParseKillMessage ( struct FString KillerName, struct FString VictimName, struct FString DeathMessage )
	{
		static UFunction* pfnParseKillMessage = NULL;

		if ( !pfnParseKillMessage )
			pfnParseKillMessage = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ParseKillMessage" );

		AGameInfo_execParseKillMessage_Parms ParseKillMessage_Parms;
		memcpy( &ParseKillMessage_Parms.KillerName, &KillerName, 0xC );
		memcpy( &ParseKillMessage_Parms.VictimName, &VictimName, 0xC );
		memcpy( &ParseKillMessage_Parms.DeathMessage, &DeathMessage, 0xC );

		this->ProcessEvent( pfnParseKillMessage, &ParseKillMessage_Parms, NULL );

		return ParseKillMessage_Parms.ReturnValue;
	};

	void BroadcastDeathMessage ( class AController* Killer, class AController* Other, class UClass* DamageType )
	{
		static UFunction* pfnBroadcastDeathMessage = NULL;

		if ( !pfnBroadcastDeathMessage )
			pfnBroadcastDeathMessage = UObject::FindObject< UFunction >( "Function Engine.GameInfo.BroadcastDeathMessage" );

		AGameInfo_execBroadcastDeathMessage_Parms BroadcastDeathMessage_Parms;
		BroadcastDeathMessage_Parms.Killer = Killer;
		BroadcastDeathMessage_Parms.Other = Other;
		BroadcastDeathMessage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnBroadcastDeathMessage, &BroadcastDeathMessage_Parms, NULL );
	};

	bool PreventDeath ( class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
	{
		static UFunction* pfnPreventDeath = NULL;

		if ( !pfnPreventDeath )
			pfnPreventDeath = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PreventDeath" );

		AGameInfo_execPreventDeath_Parms PreventDeath_Parms;
		PreventDeath_Parms.KilledPawn = KilledPawn;
		PreventDeath_Parms.Killer = Killer;
		PreventDeath_Parms.DamageType = DamageType;
		memcpy( &PreventDeath_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnPreventDeath, &PreventDeath_Parms, NULL );

		return PreventDeath_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Killed" );

		AGameInfo_execKilled_Parms Killed_Parms;
		Killed_Parms.Killer = Killer;
		Killed_Parms.KilledPlayer = KilledPlayer;
		Killed_Parms.KilledPawn = KilledPawn;
		Killed_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnKilled, &Killed_Parms, NULL );
	};

	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn )
	{
		static UFunction* pfnNotifyKilled = NULL;

		if ( !pfnNotifyKilled )
			pfnNotifyKilled = UObject::FindObject< UFunction >( "Function Engine.GameInfo.NotifyKilled" );

		AGameInfo_execNotifyKilled_Parms NotifyKilled_Parms;
		NotifyKilled_Parms.Killer = Killer;
		NotifyKilled_Parms.Killed = Killed;
		NotifyKilled_Parms.KilledPawn = KilledPawn;

		this->ProcessEvent( pfnNotifyKilled, &NotifyKilled_Parms, NULL );
	};

	void SetPlayerDefaults ( class APawn* PlayerPawn )
	{
		static UFunction* pfnSetPlayerDefaults = NULL;

		if ( !pfnSetPlayerDefaults )
			pfnSetPlayerDefaults = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SetPlayerDefaults" );

		AGameInfo_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;
		SetPlayerDefaults_Parms.PlayerPawn = PlayerPawn;

		this->ProcessEvent( pfnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
	};

	void Mutate ( struct FString MutateString, class APlayerController* Sender )
	{
		static UFunction* pfnMutate = NULL;

		if ( !pfnMutate )
			pfnMutate = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Mutate" );

		AGameInfo_execMutate_Parms Mutate_Parms;
		memcpy( &Mutate_Parms.MutateString, &MutateString, 0xC );
		Mutate_Parms.Sender = Sender;

		this->ProcessEvent( pfnMutate, &Mutate_Parms, NULL );
	};

	void eventAddDefaultInventory ( class APawn* P )
	{
		static UFunction* pfnAddDefaultInventory = NULL;

		if ( !pfnAddDefaultInventory )
			pfnAddDefaultInventory = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddDefaultInventory" );

		AGameInfo_eventAddDefaultInventory_Parms AddDefaultInventory_Parms;
		AddDefaultInventory_Parms.P = P;

		this->ProcessEvent( pfnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
	};

	void eventAcceptInventory ( class APawn* PlayerPawn )
	{
		static UFunction* pfnAcceptInventory = NULL;

		if ( !pfnAcceptInventory )
			pfnAcceptInventory = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AcceptInventory" );

		AGameInfo_eventAcceptInventory_Parms AcceptInventory_Parms;
		AcceptInventory_Parms.PlayerPawn = PlayerPawn;

		this->ProcessEvent( pfnAcceptInventory, &AcceptInventory_Parms, NULL );
	};

	void UnregisterPlayer ( class APlayerController* PC )
	{
		static UFunction* pfnUnregisterPlayer = NULL;

		if ( !pfnUnregisterPlayer )
			pfnUnregisterPlayer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UnregisterPlayer" );

		AGameInfo_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
		UnregisterPlayer_Parms.PC = PC;

		this->ProcessEvent( pfnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );
	};

	void Logout ( class AController* Exiting )
	{
		static UFunction* pfnLogout = NULL;

		if ( !pfnLogout )
			pfnLogout = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Logout" );

		AGameInfo_execLogout_Parms Logout_Parms;
		Logout_Parms.Exiting = Exiting;

		this->ProcessEvent( pfnLogout, &Logout_Parms, NULL );
	};

	void eventPreExit ()
	{
		static UFunction* pfnPreExit = NULL;

		if ( !pfnPreExit )
			pfnPreExit = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PreExit" );

		AGameInfo_eventPreExit_Parms PreExit_Parms;

		this->ProcessEvent( pfnPreExit, &PreExit_Parms, NULL );
	};

	int CalculatedNetSpeed ()
	{
		static UFunction* pfnCalculatedNetSpeed = NULL;

		if ( !pfnCalculatedNetSpeed )
			pfnCalculatedNetSpeed = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CalculatedNetSpeed" );

		AGameInfo_execCalculatedNetSpeed_Parms CalculatedNetSpeed_Parms;

		this->ProcessEvent( pfnCalculatedNetSpeed, &CalculatedNetSpeed_Parms, NULL );

		return CalculatedNetSpeed_Parms.ReturnValue;
	};

	void UpdateNetSpeeds ()
	{
		static UFunction* pfnUpdateNetSpeeds = NULL;

		if ( !pfnUpdateNetSpeeds )
			pfnUpdateNetSpeeds = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UpdateNetSpeeds" );

		AGameInfo_execUpdateNetSpeeds_Parms UpdateNetSpeeds_Parms;

		this->ProcessEvent( pfnUpdateNetSpeeds, &UpdateNetSpeeds_Parms, NULL );
	};

	void eventPostLogin ( class APlayerController* NewPlayer )
	{
		static UFunction* pfnPostLogin = NULL;

		if ( !pfnPostLogin )
			pfnPostLogin = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PostLogin" );

		AGameInfo_eventPostLogin_Parms PostLogin_Parms;
		PostLogin_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnPostLogin, &PostLogin_Parms, NULL );
	};

	void GenericPlayerInitialization ( class AController* C )
	{
		static UFunction* pfnGenericPlayerInitialization = NULL;

		if ( !pfnGenericPlayerInitialization )
			pfnGenericPlayerInitialization = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GenericPlayerInitialization" );

		AGameInfo_execGenericPlayerInitialization_Parms GenericPlayerInitialization_Parms;
		GenericPlayerInitialization_Parms.C = C;

		this->ProcessEvent( pfnGenericPlayerInitialization, &GenericPlayerInitialization_Parms, NULL );
	};

	void ReplicateStreamingStatus ( class APlayerController* PC )
	{
		static UFunction* pfnReplicateStreamingStatus = NULL;

		if ( !pfnReplicateStreamingStatus )
			pfnReplicateStreamingStatus = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ReplicateStreamingStatus" );

		AGameInfo_execReplicateStreamingStatus_Parms ReplicateStreamingStatus_Parms;
		ReplicateStreamingStatus_Parms.PC = PC;

		this->ProcessEvent( pfnReplicateStreamingStatus, &ReplicateStreamingStatus_Parms, NULL );
	};

	class UClass* GetDefaultPlayerClass ( class AController* C )
	{
		static UFunction* pfnGetDefaultPlayerClass = NULL;

		if ( !pfnGetDefaultPlayerClass )
			pfnGetDefaultPlayerClass = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetDefaultPlayerClass" );

		AGameInfo_execGetDefaultPlayerClass_Parms GetDefaultPlayerClass_Parms;
		GetDefaultPlayerClass_Parms.C = C;

		this->ProcessEvent( pfnGetDefaultPlayerClass, &GetDefaultPlayerClass_Parms, NULL );

		return GetDefaultPlayerClass_Parms.ReturnValue;
	};

	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
	{
		static UFunction* pfnSpawnDefaultPawnFor = NULL;

		if ( !pfnSpawnDefaultPawnFor )
			pfnSpawnDefaultPawnFor = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SpawnDefaultPawnFor" );

		AGameInfo_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
		SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
		SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

		this->ProcessEvent( pfnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

		return SpawnDefaultPawnFor_Parms.ReturnValue;
	};

	void RestartPlayer ( class AController* NewPlayer )
	{
		static UFunction* pfnRestartPlayer = NULL;

		if ( !pfnRestartPlayer )
			pfnRestartPlayer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RestartPlayer" );

		AGameInfo_execRestartPlayer_Parms RestartPlayer_Parms;
		RestartPlayer_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnRestartPlayer, &RestartPlayer_Parms, NULL );
	};

	void StartBots ()
	{
		static UFunction* pfnStartBots = NULL;

		if ( !pfnStartBots )
			pfnStartBots = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartBots" );

		AGameInfo_execStartBots_Parms StartBots_Parms;

		this->ProcessEvent( pfnStartBots, &StartBots_Parms, NULL );
	};

	void StartHumans ()
	{
		static UFunction* pfnStartHumans = NULL;

		if ( !pfnStartHumans )
			pfnStartHumans = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartHumans" );

		AGameInfo_execStartHumans_Parms StartHumans_Parms;

		this->ProcessEvent( pfnStartHumans, &StartHumans_Parms, NULL );
	};

	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
	{
		static UFunction* pfnOnStartOnlineGameComplete = NULL;

		if ( !pfnOnStartOnlineGameComplete )
			pfnOnStartOnlineGameComplete = UObject::FindObject< UFunction >( "Function Engine.GameInfo.OnStartOnlineGameComplete" );

		AGameInfo_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
		memcpy( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
		OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

		this->ProcessEvent( pfnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
	};

	void StartOnlineGame ()
	{
		static UFunction* pfnStartOnlineGame = NULL;

		if ( !pfnStartOnlineGame )
			pfnStartOnlineGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartOnlineGame" );

		AGameInfo_execStartOnlineGame_Parms StartOnlineGame_Parms;

		this->ProcessEvent( pfnStartOnlineGame, &StartOnlineGame_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function Engine.GameInfo.StartMatch" );

		AGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnLogin = NULL;

		if ( !pfnLogin )
			pfnLogin = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Login" );

		AGameInfo_eventLogin_Parms Login_Parms;
		memcpy( &Login_Parms.Portal, &Portal, 0xC );
		memcpy( &Login_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnLogin, &Login_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &Login_Parms.ErrorMessage, 0xC ); // CPF_OutParm

		return Login_Parms.ReturnValue;
	};

	bool AtCapacity ( unsigned long bSpectator )
	{
		static UFunction* pfnAtCapacity = NULL;

		if ( !pfnAtCapacity )
			pfnAtCapacity = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AtCapacity" );

		AGameInfo_execAtCapacity_Parms AtCapacity_Parms;
		AtCapacity_Parms.bSpectator = bSpectator;

		this->ProcessEvent( pfnAtCapacity, &AtCapacity_Parms, NULL );

		return AtCapacity_Parms.ReturnValue;
	};

	void eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage )
	{
		static UFunction* pfnPreLogin = NULL;

		if ( !pfnPreLogin )
			pfnPreLogin = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PreLogin" );

		AGameInfo_eventPreLogin_Parms PreLogin_Parms;
		memcpy( &PreLogin_Parms.Options, &Options, 0xC );
		memcpy( &PreLogin_Parms.Address, &Address, 0xC );

		this->ProcessEvent( pfnPreLogin, &PreLogin_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &PreLogin_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

	bool RequiresPassword ()
	{
		static UFunction* pfnRequiresPassword = NULL;

		if ( !pfnRequiresPassword )
			pfnRequiresPassword = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RequiresPassword" );

		AGameInfo_execRequiresPassword_Parms RequiresPassword_Parms;

		this->ProcessEvent( pfnRequiresPassword, &RequiresPassword_Parms, NULL );

		return RequiresPassword_Parms.ReturnValue;
	};

	class APlayerController* ProcessClientTravel ( struct FGuid NextMapGuid, unsigned long bSeamless, unsigned long bAbsolute, struct FString* URL )
	{
		static UFunction* pfnProcessClientTravel = NULL;

		if ( !pfnProcessClientTravel )
			pfnProcessClientTravel = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ProcessClientTravel" );

		AGameInfo_execProcessClientTravel_Parms ProcessClientTravel_Parms;
		memcpy( &ProcessClientTravel_Parms.NextMapGuid, &NextMapGuid, 0x10 );
		ProcessClientTravel_Parms.bSeamless = bSeamless;
		ProcessClientTravel_Parms.bAbsolute = bAbsolute;

		this->ProcessEvent( pfnProcessClientTravel, &ProcessClientTravel_Parms, NULL );

		if ( URL )
			memcpy( URL, &ProcessClientTravel_Parms.URL, 0xC ); // CPF_OutParm

		return ProcessClientTravel_Parms.ReturnValue;
	};

	void ProcessServerTravel ( struct FString URL, unsigned long bAbsolute/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessServerTravel = NULL;

		if ( !pfnProcessServerTravel )
			pfnProcessServerTravel = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ProcessServerTravel" );

		AGameInfo_execProcessServerTravel_Parms ProcessServerTravel_Parms;
		memcpy( &ProcessServerTravel_Parms.URL, &URL, 0xC );
		ProcessServerTravel_Parms.bAbsolute = bAbsolute;

		this->ProcessEvent( pfnProcessServerTravel, &ProcessServerTravel_Parms, NULL );
	};

	struct FString eventGetBeaconText ()
	{
		static UFunction* pfnGetBeaconText = NULL;

		if ( !pfnGetBeaconText )
			pfnGetBeaconText = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetBeaconText" );

		AGameInfo_eventGetBeaconText_Parms GetBeaconText_Parms;

		this->ProcessEvent( pfnGetBeaconText, &GetBeaconText_Parms, NULL );

		return GetBeaconText_Parms.ReturnValue;
	};

	void RemoveMutator ( void* MutatorToRemove )
	{
		static UFunction* pfnRemoveMutator = NULL;

		if ( !pfnRemoveMutator )
			pfnRemoveMutator = UObject::FindObject< UFunction >( "Function Engine.GameInfo.RemoveMutator" );

		AGameInfo_execRemoveMutator_Parms RemoveMutator_Parms;
		RemoveMutator_Parms.MutatorToRemove = MutatorToRemove;

		this->ProcessEvent( pfnRemoveMutator, &RemoveMutator_Parms, NULL );
	};

	void AddGameRules ( class UClass* GRClass )
	{
		static UFunction* pfnAddGameRules = NULL;

		if ( !pfnAddGameRules )
			pfnAddGameRules = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddGameRules" );

		AGameInfo_execAddGameRules_Parms AddGameRules_Parms;
		AddGameRules_Parms.GRClass = GRClass;

		this->ProcessEvent( pfnAddGameRules, &AddGameRules_Parms, NULL );
	};

	void AddMutator ( struct FString mutname, unsigned long bUserAdded/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddMutator = NULL;

		if ( !pfnAddMutator )
			pfnAddMutator = UObject::FindObject< UFunction >( "Function Engine.GameInfo.AddMutator" );

		AGameInfo_execAddMutator_Parms AddMutator_Parms;
		memcpy( &AddMutator_Parms.mutname, &mutname, 0xC );
		AddMutator_Parms.bUserAdded = bUserAdded;

		this->ProcessEvent( pfnAddMutator, &AddMutator_Parms, NULL );
	};

	void ParseAutomatedTestingOptions ( struct FString Options )
	{
		static UFunction* pfnParseAutomatedTestingOptions = NULL;

		if ( !pfnParseAutomatedTestingOptions )
			pfnParseAutomatedTestingOptions = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ParseAutomatedTestingOptions" );

		AGameInfo_execParseAutomatedTestingOptions_Parms ParseAutomatedTestingOptions_Parms;
		memcpy( &ParseAutomatedTestingOptions_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnParseAutomatedTestingOptions, &ParseAutomatedTestingOptions_Parms, NULL );
	};

	void eventNotifyPendingConnectionLost ()
	{
		static UFunction* pfnNotifyPendingConnectionLost = NULL;

		if ( !pfnNotifyPendingConnectionLost )
			pfnNotifyPendingConnectionLost = UObject::FindObject< UFunction >( "Function Engine.GameInfo.NotifyPendingConnectionLost" );

		AGameInfo_eventNotifyPendingConnectionLost_Parms NotifyPendingConnectionLost_Parms;

		this->ProcessEvent( pfnNotifyPendingConnectionLost, &NotifyPendingConnectionLost_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function Engine.GameInfo.InitGame" );

		AGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal )
	{
		static UFunction* pfnSetGameType = NULL;

		if ( !pfnSetGameType )
			pfnSetGameType = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SetGameType" );

		AGameInfo_eventSetGameType_Parms SetGameType_Parms;
		memcpy( &SetGameType_Parms.MapName, &MapName, 0xC );
		memcpy( &SetGameType_Parms.Options, &Options, 0xC );
		memcpy( &SetGameType_Parms.Portal, &Portal, 0xC );

		this->ProcessEvent( pfnSetGameType, &SetGameType_Parms, NULL );

		return SetGameType_Parms.ReturnValue;
	};

	struct FString eventGetDefaultGameClassPath ( struct FString MapName, struct FString Options, struct FString Portal )
	{
		static UFunction* pfnGetDefaultGameClassPath = NULL;

		if ( !pfnGetDefaultGameClassPath )
			pfnGetDefaultGameClassPath = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetDefaultGameClassPath" );

		AGameInfo_eventGetDefaultGameClassPath_Parms GetDefaultGameClassPath_Parms;
		memcpy( &GetDefaultGameClassPath_Parms.MapName, &MapName, 0xC );
		memcpy( &GetDefaultGameClassPath_Parms.Options, &Options, 0xC );
		memcpy( &GetDefaultGameClassPath_Parms.Portal, &Portal, 0xC );

		this->ProcessEvent( pfnGetDefaultGameClassPath, &GetDefaultGameClassPath_Parms, NULL );

		return GetDefaultGameClassPath_Parms.ReturnValue;
	};

	int GetIntOption ( struct FString Options, struct FString ParseString, int CurrentValue )
	{
		static UFunction* pfnGetIntOption = NULL;

		if ( !pfnGetIntOption )
			pfnGetIntOption = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetIntOption" );

		AGameInfo_execGetIntOption_Parms GetIntOption_Parms;
		memcpy( &GetIntOption_Parms.Options, &Options, 0xC );
		memcpy( &GetIntOption_Parms.ParseString, &ParseString, 0xC );
		GetIntOption_Parms.CurrentValue = CurrentValue;

		this->ProcessEvent( pfnGetIntOption, &GetIntOption_Parms, NULL );

		return GetIntOption_Parms.ReturnValue;
	};

	bool HasOption ( struct FString Options, struct FString InKey )
	{
		static UFunction* pfnHasOption = NULL;

		if ( !pfnHasOption )
			pfnHasOption = UObject::FindObject< UFunction >( "Function Engine.GameInfo.HasOption" );

		AGameInfo_execHasOption_Parms HasOption_Parms;
		memcpy( &HasOption_Parms.Options, &Options, 0xC );
		memcpy( &HasOption_Parms.InKey, &InKey, 0xC );

		this->ProcessEvent( pfnHasOption, &HasOption_Parms, NULL );

		return HasOption_Parms.ReturnValue;
	};

	struct FString ParseOption ( struct FString Options, struct FString InKey )
	{
		static UFunction* pfnParseOption = NULL;

		if ( !pfnParseOption )
			pfnParseOption = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ParseOption" );

		AGameInfo_execParseOption_Parms ParseOption_Parms;
		memcpy( &ParseOption_Parms.Options, &Options, 0xC );
		memcpy( &ParseOption_Parms.InKey, &InKey, 0xC );

		this->ProcessEvent( pfnParseOption, &ParseOption_Parms, NULL );

		return ParseOption_Parms.ReturnValue;
	};

	void GetKeyValue ( struct FString Pair, struct FString* Key, struct FString* Value )
	{
		static UFunction* pfnGetKeyValue = NULL;

		if ( !pfnGetKeyValue )
			pfnGetKeyValue = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetKeyValue" );

		AGameInfo_execGetKeyValue_Parms GetKeyValue_Parms;
		memcpy( &GetKeyValue_Parms.Pair, &Pair, 0xC );

		this->ProcessEvent( pfnGetKeyValue, &GetKeyValue_Parms, NULL );

		if ( Key )
			memcpy( Key, &GetKeyValue_Parms.Key, 0xC ); // CPF_OutParm
		if ( Value )
			memcpy( Value, &GetKeyValue_Parms.Value, 0xC ); // CPF_OutParm
	};

	bool GrabOption ( struct FString* Options, struct FString* Result )
	{
		static UFunction* pfnGrabOption = NULL;

		if ( !pfnGrabOption )
			pfnGrabOption = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GrabOption" );

		AGameInfo_execGrabOption_Parms GrabOption_Parms;

		this->ProcessEvent( pfnGrabOption, &GrabOption_Parms, NULL );

		if ( Options )
			memcpy( Options, &GrabOption_Parms.Options, 0xC ); // CPF_OutParm
		if ( Result )
			memcpy( Result, &GrabOption_Parms.Result, 0xC ); // CPF_OutParm

		return GrabOption_Parms.ReturnValue;
	};

	void SetGameSpeed ( float T )
	{
		static UFunction* pfnSetGameSpeed = NULL;

		if ( !pfnSetGameSpeed )
			pfnSetGameSpeed = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SetGameSpeed" );

		AGameInfo_execSetGameSpeed_Parms SetGameSpeed_Parms;
		SetGameSpeed_Parms.T = T;

		this->ProcessEvent( pfnSetGameSpeed, &SetGameSpeed_Parms, NULL );
	};

	void DebugPause ()
	{
		static UFunction* pfnDebugPause = NULL;

		if ( !pfnDebugPause )
			pfnDebugPause = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DebugPause" );

		AGameInfo_execDebugPause_Parms DebugPause_Parms;

		this->ProcessEvent( pfnDebugPause, &DebugPause_Parms, NULL );
	};

	void ForceClearUnpauseDelegates ( class AActor* PauseActor )
	{
		static UFunction* pfnForceClearUnpauseDelegates = NULL;

		if ( !pfnForceClearUnpauseDelegates )
			pfnForceClearUnpauseDelegates = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ForceClearUnpauseDelegates" );

		AGameInfo_execForceClearUnpauseDelegates_Parms ForceClearUnpauseDelegates_Parms;
		ForceClearUnpauseDelegates_Parms.PauseActor = PauseActor;

		pfnForceClearUnpauseDelegates->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceClearUnpauseDelegates, &ForceClearUnpauseDelegates_Parms, NULL );
		pfnForceClearUnpauseDelegates->FunctionFlags |= 0x400;
	};

	void eventClearPause ()
	{
		static UFunction* pfnClearPause = NULL;

		if ( !pfnClearPause )
			pfnClearPause = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ClearPause" );

		AGameInfo_eventClearPause_Parms ClearPause_Parms;

		this->ProcessEvent( pfnClearPause, &ClearPause_Parms, NULL );
	};

	bool SetPause ( class APlayerController* PC, struct FScriptDelegate CanUnpauseDelegate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetPause = NULL;

		if ( !pfnSetPause )
			pfnSetPause = UObject::FindObject< UFunction >( "Function Engine.GameInfo.SetPause" );

		AGameInfo_execSetPause_Parms SetPause_Parms;
		SetPause_Parms.PC = PC;
		memcpy( &SetPause_Parms.CanUnpauseDelegate, &CanUnpauseDelegate, 0xC );

		this->ProcessEvent( pfnSetPause, &SetPause_Parms, NULL );

		return SetPause_Parms.ReturnValue;
	};

	bool CanUnpause ()
	{
		static UFunction* pfnCanUnpause = NULL;

		if ( !pfnCanUnpause )
			pfnCanUnpause = UObject::FindObject< UFunction >( "Function Engine.GameInfo.CanUnpause" );

		AGameInfo_execCanUnpause_Parms CanUnpause_Parms;

		this->ProcessEvent( pfnCanUnpause, &CanUnpause_Parms, NULL );

		return CanUnpause_Parms.ReturnValue;
	};

	int GetServerPort ()
	{
		static UFunction* pfnGetServerPort = NULL;

		if ( !pfnGetServerPort )
			pfnGetServerPort = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetServerPort" );

		AGameInfo_execGetServerPort_Parms GetServerPort_Parms;

		this->ProcessEvent( pfnGetServerPort, &GetServerPort_Parms, NULL );

		return GetServerPort_Parms.ReturnValue;
	};

	int GetNumPlayers ()
	{
		static UFunction* pfnGetNumPlayers = NULL;

		if ( !pfnGetNumPlayers )
			pfnGetNumPlayers = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetNumPlayers" );

		AGameInfo_execGetNumPlayers_Parms GetNumPlayers_Parms;

		this->ProcessEvent( pfnGetNumPlayers, &GetNumPlayers_Parms, NULL );

		return GetNumPlayers_Parms.ReturnValue;
	};

	struct FString GetNetworkNumber ()
	{
		static UFunction* pfnGetNetworkNumber = NULL;

		if ( !pfnGetNetworkNumber )
			pfnGetNetworkNumber = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetNetworkNumber" );

		AGameInfo_execGetNetworkNumber_Parms GetNetworkNumber_Parms;

		pfnGetNetworkNumber->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetNetworkNumber, &GetNetworkNumber_Parms, NULL );
		pfnGetNetworkNumber->FunctionFlags |= 0x400;

		return GetNetworkNumber_Parms.ReturnValue;
	};

	void InitGameReplicationInfo ()
	{
		static UFunction* pfnInitGameReplicationInfo = NULL;

		if ( !pfnInitGameReplicationInfo )
			pfnInitGameReplicationInfo = UObject::FindObject< UFunction >( "Function Engine.GameInfo.InitGameReplicationInfo" );

		AGameInfo_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

		this->ProcessEvent( pfnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
	};

	void eventKickIdler ( class APlayerController* PC )
	{
		static UFunction* pfnKickIdler = NULL;

		if ( !pfnKickIdler )
			pfnKickIdler = UObject::FindObject< UFunction >( "Function Engine.GameInfo.KickIdler" );

		AGameInfo_eventKickIdler_Parms KickIdler_Parms;
		KickIdler_Parms.PC = PC;

		this->ProcessEvent( pfnKickIdler, &KickIdler_Parms, NULL );
	};

	void eventGameEnding ()
	{
		static UFunction* pfnGameEnding = NULL;

		if ( !pfnGameEnding )
			pfnGameEnding = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GameEnding" );

		AGameInfo_eventGameEnding_Parms GameEnding_Parms;

		this->ProcessEvent( pfnGameEnding, &GameEnding_Parms, NULL );
	};

	void NotifyNavigationChanged ( class ANavigationPoint* N )
	{
		static UFunction* pfnNotifyNavigationChanged = NULL;

		if ( !pfnNotifyNavigationChanged )
			pfnNotifyNavigationChanged = UObject::FindObject< UFunction >( "Function Engine.GameInfo.NotifyNavigationChanged" );

		AGameInfo_execNotifyNavigationChanged_Parms NotifyNavigationChanged_Parms;
		NotifyNavigationChanged_Parms.N = N;

		this->ProcessEvent( pfnNotifyNavigationChanged, &NotifyNavigationChanged_Parms, NULL );
	};

	void DoNavFearCostFallOff ()
	{
		static UFunction* pfnDoNavFearCostFallOff = NULL;

		if ( !pfnDoNavFearCostFallOff )
			pfnDoNavFearCostFallOff = UObject::FindObject< UFunction >( "Function Engine.GameInfo.DoNavFearCostFallOff" );

		AGameInfo_execDoNavFearCostFallOff_Parms DoNavFearCostFallOff_Parms;

		pfnDoNavFearCostFallOff->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoNavFearCostFallOff, &DoNavFearCostFallOff_Parms, NULL );
		pfnDoNavFearCostFallOff->FunctionFlags |= 0x400;
	};

	void eventTimer ()
	{
		static UFunction* pfnTimer = NULL;

		if ( !pfnTimer )
			pfnTimer = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Timer" );

		AGameInfo_eventTimer_Parms Timer_Parms;

		this->ProcessEvent( pfnTimer, &Timer_Parms, NULL );
	};

	void ResetLevel ()
	{
		static UFunction* pfnResetLevel = NULL;

		if ( !pfnResetLevel )
			pfnResetLevel = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ResetLevel" );

		AGameInfo_execResetLevel_Parms ResetLevel_Parms;

		this->ProcessEvent( pfnResetLevel, &ResetLevel_Parms, NULL );
	};

	bool ShouldReset ( class AActor* ActorToReset )
	{
		static UFunction* pfnShouldReset = NULL;

		if ( !pfnShouldReset )
			pfnShouldReset = UObject::FindObject< UFunction >( "Function Engine.GameInfo.ShouldReset" );

		AGameInfo_execShouldReset_Parms ShouldReset_Parms;
		ShouldReset_Parms.ActorToReset = ActorToReset;

		this->ProcessEvent( pfnShouldReset, &ShouldReset_Parms, NULL );

		return ShouldReset_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.GameInfo.Reset" );

		AGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PostBeginPlay" );

		AGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void* GetCoverReplicator ()
	{
		static UFunction* pfnGetCoverReplicator = NULL;

		if ( !pfnGetCoverReplicator )
			pfnGetCoverReplicator = UObject::FindObject< UFunction >( "Function Engine.GameInfo.GetCoverReplicator" );

		AGameInfo_execGetCoverReplicator_Parms GetCoverReplicator_Parms;

		this->ProcessEvent( pfnGetCoverReplicator, &GetCoverReplicator_Parms, NULL );

		return GetCoverReplicator_Parms.ReturnValue;
	};

	bool UseLowGore ( class AWorldInfo* WI )
	{
		static UFunction* pfnUseLowGore = NULL;

		if ( !pfnUseLowGore )
			pfnUseLowGore = UObject::FindObject< UFunction >( "Function Engine.GameInfo.UseLowGore" );

		AGameInfo_execUseLowGore_Parms UseLowGore_Parms;
		UseLowGore_Parms.WI = WI;

		this->ProcessEvent( pfnUseLowGore, &UseLowGore_Parms, NULL );

		return UseLowGore_Parms.ReturnValue;
	};

	struct FString FindPlayerByID ( int PlayerID )
	{
		static UFunction* pfnFindPlayerByID = NULL;

		if ( !pfnFindPlayerByID )
			pfnFindPlayerByID = UObject::FindObject< UFunction >( "Function Engine.GameInfo.FindPlayerByID" );

		AGameInfo_execFindPlayerByID_Parms FindPlayerByID_Parms;
		FindPlayerByID_Parms.PlayerID = PlayerID;

		this->ProcessEvent( pfnFindPlayerByID, &FindPlayerByID_Parms, NULL );

		return FindPlayerByID_Parms.ReturnValue;
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.GameInfo.PreBeginPlay" );

		AGameInfo_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

};

UClass* AGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif