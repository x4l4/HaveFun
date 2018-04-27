/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCInstanceGameInfo.h
// Date: 06/16/2011 @ 05:19:40.815
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCInstanceGameInfo_execCheckNPCIndicators_Parms
{
};

struct ACCInstanceGameInfo_execPatchLootTable_Parms
{
	TArray< struct FLootTableEntry > table; // CPF_OutParm
	class UClass* Item;
	float Prob;
	int Count;
};

struct ACCInstanceGameInfo_execPatchLootTables_Parms
{
	class UClass* Item;
	float Prob;
	int Count;
};

struct ACCInstanceGameInfo_execGetLootItem_Parms
{
	TArray< struct FLootTableEntry > lt;
	class UClass* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execCheckLootTable_Parms
{
	TArray< struct FLootTableEntry > lt;
};

struct ACCInstanceGameInfo_execGetZInPoint_Parms
{
	struct FVector pt;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execIsPlayerUsingInvisibility_Parms
{
	class APlayerController* C;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execevtPlayerTouchedTheItem_Parms
{
	void* Item;
	class APlayerController* Player;
};

struct ACCInstanceGameInfo_execNotifyKismetAboutCratePickup_Parms
{
	class AController* C;
	void* I;
};

struct ACCInstanceGameInfo_eventScoreCarryObjectEnemy_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	void* TheObject;
};// FUNC_Event

struct ACCInstanceGameInfo_eventScoreCarryObject_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	void* TheObject;
};// FUNC_Event

struct ACCInstanceGameInfo_execClearPickupProgressAll_Parms
{
};// FUNC_Native

struct ACCInstanceGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCInstanceGameInfo_eventAvatarReady_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct ACCInstanceGameInfo_execFindInactivePRI_Parms
{
	class APlayerController* PC;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execAddInactivePRI_Parms
{
	class APlayerReplicationInfo* PRI;
	class APlayerController* PC;
};

struct ACCInstanceGameInfo_execBroadcastCombatLogMessageParam_Parms
{
	class AActor* Sender;
	class UClass* Message;
	int Switch;
	struct FAdditionalParam Param;
};

struct ACCInstanceGameInfo_execNotifyMineExplode_Parms
{
	class ACCInstanceController* CController;
	class ACCMine* CMine;
};

struct ACCInstanceGameInfo_execIsDead_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execAddPlayerScore_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCInstanceGameInfo_execAddPlayerScoreNotify_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCInstanceGameInfo_execGetWeaponAttachmentPresetStore_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execSetGameSpeed_Parms
{
	float T;
};

struct ACCInstanceGameInfo_execRestartPlayers_Parms
{
};

struct ACCInstanceGameInfo_execNotifyTakenDamage_Parms
{
	float Damage;
	class APawn* injured;
	class AController* InstigatedBy;
};

struct ACCInstanceGameInfo_execGetDefaultPlayerClass_Parms
{
	class AController* C;
	class UClass* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execSpawnDefaultPawnFor_Parms
{
	class AController* NewPlayer;
	class ANavigationPoint* StartSpot;
	class APawn* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execChoosePlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_eventLogin_Parms
{
	struct FString Portal;
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
	class APlayerController* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCInstanceGameInfo_execRestartPlayer_Parms
{
	class AController* NewPlayer;
};

struct ACCInstanceGameInfo_execCheckQuestZones_Parms
{
	class AController* NewPlayer;
};

struct ACCInstanceGameInfo_execSetPlayerDefaults_Parms
{
	class APawn* PlayerPawn;
};

struct ACCInstanceGameInfo_execRespawnPlayer_Parms
{
	class AController* Player;
};

struct ACCInstanceGameInfo_execPlayerCanRestart_Parms
{
	class APlayerController* aPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCInstanceGameInfo_execReset_Parms
{
};

struct ACCInstanceGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execRestartGame_Parms
{
};

struct ACCInstanceGameInfo_execInitGameReplicationInfo_Parms
{
};

struct ACCInstanceGameInfo_execAddDefaultInventory_Parms
{
	class APawn* PlayerPawn;
};

struct ACCInstanceGameInfo_execLogout_Parms
{
	class AController* Exiting;
};

struct ACCInstanceGameInfo_eventPostLogin_Parms
{
	class APlayerController* NewPlayer;
};// FUNC_Event

struct ACCInstanceGameInfo_execAFKEvent_Parms
{
	class APlayerReplicationInfo* InstigatorPRI;
	float Time;
};

struct ACCInstanceGameInfo_execWeaponFireEvent_Parms
{
	class APlayerReplicationInfo* InstigatorPRI;
	int WeaponSlot;
	int FireMode;
	int NumFired;
};

struct ACCInstanceGameInfo_execFeatEvent_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned char FeatType;
	int Value;
};

struct ACCInstanceGameInfo_execPickUpEvent_Parms
{
	class APlayerReplicationInfo* PRI;
	unsigned char PickUpType;
	int PickupNum;
};

struct ACCInstanceGameInfo_execBonusEvent_Parms
{
	unsigned char BonusType;
	class APlayerReplicationInfo* BonusPlayer;
};

struct ACCInstanceGameInfo_execObjectiveEvent_Parms
{
	unsigned char StatType;
	int TeamNo;
	class APlayerReplicationInfo* InstigatorPRI;
	int ObjectiveIndex;
};

struct ACCInstanceGameInfo_execKillEvent_Parms
{
	unsigned char Killtype;
	class APlayerReplicationInfo* Killer;
	class APlayerReplicationInfo* Victim;
	int KillerWeaponID;
	int VictimWeaponID;
};

struct ACCInstanceGameInfo_execGameEvent_Parms
{
	unsigned char EventType;
	int Team;
	class APlayerReplicationInfo* InstigatorPRI;
	int AddData;
};

struct ACCInstanceGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo* Scorer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execCheckMaxLives_Parms
{
	class APlayerReplicationInfo* Scorer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execSpawnBotController_Parms
{
	class UClass* BotClass;
	struct FBotRosterEntry Entry;
	int TeamIndex;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execAddBot_Parms
{
	struct FString BotName;
	int TeamIndex;
	class UClass* BotClass;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execNeedPlayers_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execStopAllMovement_Parms
{
};

struct ACCInstanceGameInfo_execKismetGameEndedEvent_Parms
{
};

struct ACCInstanceGameInfo_execSortPlayersByScore_Parms
{
};

struct ACCInstanceGameInfo_execNativeSortPlayers_Parms
{
};// FUNC_Native

struct ACCInstanceGameInfo_execSuddenDeathNotify_Parms
{
};

struct ACCInstanceGameInfo_execScoreFFAKill_Parms
{
	class ACCPlayerReplicationInfo* PRI;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execScoreMultiKill_Parms
{
	class ACCPlayerReplicationInfo* PRI;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execGoToPendingMatch_Parms
{
};

struct ACCInstanceGameInfo_execYakaRequestInit_Parms
{
};

struct ACCInstanceGameInfo_execMatchIsInProgress_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execEndRound_Parms
{
	class AActor* EndRoundFocus;
};

struct ACCInstanceGameInfo_execResetLevel_Parms
{
};

struct ACCInstanceGameInfo_execJustStarted_Parms
{
	float MaxElapsedTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execPlayStartupMessage_Parms
{
};

struct ACCInstanceGameInfo_execPlayRegularEndOfMatchMessage_Parms
{
};

struct ACCInstanceGameInfo_execPlayEndOfMatchMessage_Parms
{
};

struct ACCInstanceGameInfo_execIsAWinner_Parms
{
	class APlayerController* C;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execDominatingVictory_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execNativeRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceGameInfo_execNativeScoreActors_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	unsigned long TeamGame : 1;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCInstanceGameInfo_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCInstanceGameInfo_execStartMatch_Parms
{
};

struct ACCInstanceGameInfo_execdebugRemoveDeadPawns_Parms
{
};

struct ACCInstanceGameInfo_execRestart_Parms
{
};// FUNC_Exec

struct ACCInstanceGameInfo_execForceRespawn_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execDecodeEvent_Parms
{
	struct FName EventType;
	int TeamNo;
	struct FString InstigatorName;
	struct FString AdditionalName;
	class UClass* AdditionalObj;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execEndLogging_Parms
{
	struct FString Reason;
};

struct ACCInstanceGameInfo_execInitLogging_Parms
{
};

struct ACCInstanceGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCInstanceGameInfo_execPreBeginPlay_Parms
{
};

struct ACCInstanceGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

struct ACCInstanceGameInfo_execCCGetLocalPlayerController_Parms
{
	class APlayerController* ReturnValue; // CPF_ReturnParm
};

struct ACCInstanceGameInfo_execSetGCPendingTime_Parms
{
	float NewTime;
};// FUNC_Native

struct ACCInstanceGameInfo_execEndWarmup_Parms
{
};// FUNC_Native

struct ACCInstanceGameInfo_execStartWarmup_Parms
{
};// FUNC_Native

struct ACCInstanceGameInfo_execSendStat_Parms
{
};// FUNC_Native

struct ACCInstanceGameInfo_execInstanceFinished_Parms
{
};// FUNC_Native

// (0x394 - 0x528)
class ACCInstanceGameInfo : public ACCGameInfo
{
public:
	void*                                              GameStats;                                   // 0x0394 (0x0004)
	struct FString                                     GameStatsClass;                              // 0x0398 (0x000C)
	int                                                SendGameStatsIndex;                          // 0x03A4 (0x0004)
	int                                                RemainingTime;                               // 0x03A8 (0x0004)
	int                                                ElapsedTime;                                 // 0x03AC (0x0004)
	class AActor*                                      EndGameFocus;                                // 0x03B0 (0x0004)
	float                                              EndTime;                                     // 0x03B4 (0x0004)
	int                                                EndMessageWait;                              // 0x03B8 (0x0004)
	int                                                EndMessageCounter;                           // 0x03BC (0x0004)
	int                                                RestartWait;                                 // 0x03C0 (0x0004)
	int                                                ResetCountDown;                              // 0x03C4 (0x0004)
	int                                                CountDown;                                   // 0x03C8 (0x0004)
	unsigned long                                      bStartedCountDown : 1;                       // 0x03CC (0x0004) [0x00000001]
	unsigned long                                      bFinalStartup : 1;                           // 0x03CC (0x0004) [0x00000002]
	unsigned long                                      bOverTimeBroadcast : 1;                      // 0x03CC (0x0004) [0x00000004]
	unsigned long                                      bPlayersMustBeReady : 1;                     // 0x03CC (0x0004) [0x00000008]
	unsigned long                                      bForceRespawn : 1;                           // 0x03CC (0x0004) [0x00000010]
	unsigned long                                      bTempForceRespawn : 1;                       // 0x03CC (0x0004) [0x00000020]
	unsigned long                                      bWaitForNetPlayers : 1;                      // 0x03CC (0x0004) [0x00000040]
	unsigned long                                      bMustJoinBeforeStart : 1;                    // 0x03CC (0x0004) [0x00000080]
	unsigned long                                      bPlayersVsBots : 1;                          // 0x03CC (0x0004) [0x00000100]
	unsigned long                                      bWarmupRound : 1;                            // 0x03CC (0x0004) [0x00000200]
	unsigned long                                      bTournament : 1;                             // 0x03CC (0x0004) [0x00000400]
	unsigned long                                      bQuickStart : 1;                             // 0x03CC (0x0004) [0x00000800]
	unsigned long                                      bConsoleServer : 1;                          // 0x03CC (0x0004) [0x00001000]
	unsigned long                                      bWaitingYaka : 1;                            // 0x03CC (0x0004) [0x00002000]
	unsigned long                                      bSuddenDeath : 1;                            // 0x03CC (0x0004) [0x00004000]
	unsigned long                                      FirstBlood : 1;                              // 0x03CC (0x0004) [0x00008000]
	unsigned long                                      TriggeredMinLeft5 : 1;                       // 0x03CC (0x0004) [0x00010000]
	unsigned long                                      TriggeredMinLeft3 : 1;                       // 0x03CC (0x0004) [0x00020000]
	unsigned long                                      TriggeredMinLeft1 : 1;                       // 0x03CC (0x0004) [0x00040000]
	unsigned long                                      TriggeredWarmLeft60 : 1;                     // 0x03CC (0x0004) [0x00080000]
	unsigned long                                      TriggeredWarmLeft30 : 1;                     // 0x03CC (0x0004) [0x00100000]
	unsigned long                                      TriggeredWarmLeft15 : 1;                     // 0x03CC (0x0004) [0x00200000]
	unsigned long                                      EnableGameStatsLog : 1;                      // 0x03CC (0x0004) [0x00400000]
	unsigned long                                      DemoRecording_Enabled : 1;                   // 0x03CC (0x0004) [0x00800000]
	float                                              EndTimeDelay;                                // 0x03D0 (0x0004)
	int                                                ResetTimeDelay;                              // 0x03D4 (0x0004)
	int                                                NetWait;                                     // 0x03D8 (0x0004)
	int                                                WarmupTime;                                  // 0x03DC (0x0004)
	int                                                WarmupRemaining;                             // 0x03E0 (0x0004)
	float                                              DeadActionCamControlDamage;                  // 0x03E4 (0x0004)
	int                                                MinWaitRespawnTime;                          // 0x03E8 (0x0004)
	int                                                MaxWaitRespawnTime;                          // 0x03EC (0x0004)
	int                                                NormalPlayerLiveTime;                        // 0x03F0 (0x0004)
	int                                                ForceRespawnTime;                            // 0x03F4 (0x0004)
	int                                                ProgressiveRespawn;                          // 0x03F8 (0x0004)
	unsigned char                                      StartUpStage;                                // 0x03FC (0x0001)
	int                                                DesiredPlayerCount;                          // 0x0400 (0x0004)
	float                                              BotRatio;                                    // 0x0404 (0x0004)
	int                                                MinNetPlayers;                               // 0x0408 (0x0004)
	class ANavigationPoint*                            LastPlayerStartSpot;                         // 0x040C (0x0004)
	class ANavigationPoint*                            LastStartSpot;                               // 0x0410 (0x0004)
	int                                                DefaultMaxLives;                             // 0x0414 (0x0004)
	class UClass*                                      ConsolePlayerControllerClass;                // 0x0418 (0x0004)
	void*                                              BotRoster;                                   // 0x041C (0x0004)
	class AController*                                 LastSpawnedPawnController;                   // 0x0420 (0x0004)
	void*                                              WeaponAttachmentPresetStore;                 // 0x0424 (0x0004)
	void*                                              GlobalInstanceParamsInstance;                // 0x0428 (0x0004)
	TArray< void* >                                    StoreInstances;                              // 0x042C (0x000C)
	class UClass*                                      DefaultBotPawnClass;                         // 0x0438 (0x0004)
	class UClass*                                      DefaultBotPawnIllusionClass;                 // 0x043C (0x0004)
	float                                              LastLoginTime;                               // 0x0440 (0x0004)
	float                                              FriendSpawnPriority;                         // 0x0444 (0x0004)
	float                                              EnemySpawnPriority;                          // 0x0448 (0x0004)
	float                                              MineSpawnPriority;                           // 0x044C (0x0004)
	float                                              FriendControlDistance;                       // 0x0450 (0x0004)
	float                                              EnemyControlDistance;                        // 0x0454 (0x0004)
	float                                              MineControlDistance;                         // 0x0458 (0x0004)
	float                                              FriendRejectDistance;                        // 0x045C (0x0004)
	int                                                FriendRejectFriendsLimit;                    // 0x0460 (0x0004)
	float                                              PStartRandomScore;                           // 0x0464 (0x0004)
	float                                              PStartNormalScore;                           // 0x0468 (0x0004)
	float                                              PStartBaseScore;                             // 0x046C (0x0004)
	float                                              PStartAvoidLastScore;                        // 0x0470 (0x0004)
	int                                                SuddenDeathTime;                             // 0x0474 (0x0004)
	float                                              MultiKillDeltaTime;                          // 0x0478 (0x0004)
	int                                                MultiKillScoreIncrement;                     // 0x047C (0x0004)
	int                                                MultiKillScoreStart;                         // 0x0480 (0x0004)
	int                                                FFAKillScoreIncrement;                       // 0x0484 (0x0004)
	int                                                HeadShotScore;                               // 0x0488 (0x0004)
	int                                                GranadeKillScore;                            // 0x048C (0x0004)
	int                                                LastBulletKillScore;                         // 0x0490 (0x0004)
	int                                                FirstBloodScore;                             // 0x0494 (0x0004)
	int                                                OneKillScore;                                // 0x0498 (0x0004)
	int                                                AssistScore;                                 // 0x049C (0x0004)
	int                                                MineKillScore;                               // 0x04A0 (0x0004)
	int                                                PenetrationScore;                            // 0x04A4 (0x0004)
	int                                                MeleeKillScore;                              // 0x04A8 (0x0004)
	int                                                DeathScore;                                  // 0x04AC (0x0004)
	int                                                MineDestroyScore;                            // 0x04B0 (0x0004)
	int                                                SuicideScore;                                // 0x04B4 (0x0004)
	int                                                MultiKillTeamScoreStart;                     // 0x04B8 (0x0004)
	int                                                MultiKillTeamScoreIncrement;                 // 0x04BC (0x0004)
	int                                                FFAKillTeamScoreIncrement;                   // 0x04C0 (0x0004)
	int                                                HeadShotTeamScore;                           // 0x04C4 (0x0004)
	int                                                GranadeKillTeamScore;                        // 0x04C8 (0x0004)
	int                                                LastBulletKillTeamScore;                     // 0x04CC (0x0004)
	int                                                FirstBloodTeamScore;                         // 0x04D0 (0x0004)
	int                                                OneKillTeamScore;                            // 0x04D4 (0x0004)
	int                                                AssistTeamScore;                             // 0x04D8 (0x0004)
	int                                                MineKillTeamScore;                           // 0x04DC (0x0004)
	int                                                MeleeKillTeamScore;                          // 0x04E0 (0x0004)
	int                                                PenetrationTeamScore;                        // 0x04E4 (0x0004)
	int                                                DeathTeamScore;                              // 0x04E8 (0x0004)
	int                                                MineDestroyTeamScore;                        // 0x04EC (0x0004)
	int                                                SuicideTeamScore;                            // 0x04F0 (0x0004)
	float                                              PickupTime;                                  // 0x04F4 (0x0004)
	float                                              PickupAssist;                                // 0x04F8 (0x0004)
	struct FString                                     DemoRecording_DemoName;                      // 0x04FC (0x000C)
	float                                              AssistDeltaTime;                             // 0x0508 (0x0004)
	int                                                BotKillCount;                                // 0x050C (0x0004)
	TArray< class ACCPlayerReplicationInfo* >          SortedPRIArray0;                             // 0x0510 (0x000C)
	TArray< class ACCPlayerReplicationInfo* >          SortedPRIArray1;                             // 0x051C (0x000C)

	// RoundOver
	// MatchOver
	// MatchInProgress
	// PendingMatch
	// WaitingYaka

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCInstanceGameInfo" );

		return ClassPointer;
	};

public:
	void CheckNPCIndicators ()
	{
		static UFunction* pfnCheckNPCIndicators = NULL;

		if ( !pfnCheckNPCIndicators )
			pfnCheckNPCIndicators = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckNPCIndicators" );

		ACCInstanceGameInfo_execCheckNPCIndicators_Parms CheckNPCIndicators_Parms;

		this->ProcessEvent( pfnCheckNPCIndicators, &CheckNPCIndicators_Parms, NULL );
	};

	void PatchLootTable ( class UClass* Item, float Prob/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/, TArray< struct FLootTableEntry >* table )
	{
		static UFunction* pfnPatchLootTable = NULL;

		if ( !pfnPatchLootTable )
			pfnPatchLootTable = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PatchLootTable" );

		ACCInstanceGameInfo_execPatchLootTable_Parms PatchLootTable_Parms;
		PatchLootTable_Parms.Item = Item;
		PatchLootTable_Parms.Prob = Prob;
		PatchLootTable_Parms.Count = Count;

		this->ProcessEvent( pfnPatchLootTable, &PatchLootTable_Parms, NULL );

		if ( table )
			memcpy( table, &PatchLootTable_Parms.table, 0xC ); // CPF_OutParm
	};

	void PatchLootTables ( class UClass* Item, float Prob/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPatchLootTables = NULL;

		if ( !pfnPatchLootTables )
			pfnPatchLootTables = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PatchLootTables" );

		ACCInstanceGameInfo_execPatchLootTables_Parms PatchLootTables_Parms;
		PatchLootTables_Parms.Item = Item;
		PatchLootTables_Parms.Prob = Prob;
		PatchLootTables_Parms.Count = Count;

		this->ProcessEvent( pfnPatchLootTables, &PatchLootTables_Parms, NULL );
	};

	class UClass* GetLootItem ( TArray< struct FLootTableEntry > lt )
	{
		static UFunction* pfnGetLootItem = NULL;

		if ( !pfnGetLootItem )
			pfnGetLootItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GetLootItem" );

		ACCInstanceGameInfo_execGetLootItem_Parms GetLootItem_Parms;
		memcpy( &GetLootItem_Parms.lt, &lt, 0xC );

		this->ProcessEvent( pfnGetLootItem, &GetLootItem_Parms, NULL );

		return GetLootItem_Parms.ReturnValue;
	};

	void CheckLootTable ( TArray< struct FLootTableEntry > lt )
	{
		static UFunction* pfnCheckLootTable = NULL;

		if ( !pfnCheckLootTable )
			pfnCheckLootTable = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckLootTable" );

		ACCInstanceGameInfo_execCheckLootTable_Parms CheckLootTable_Parms;
		memcpy( &CheckLootTable_Parms.lt, &lt, 0xC );

		this->ProcessEvent( pfnCheckLootTable, &CheckLootTable_Parms, NULL );
	};

	struct FVector GetZInPoint ( struct FVector pt )
	{
		static UFunction* pfnGetZInPoint = NULL;

		if ( !pfnGetZInPoint )
			pfnGetZInPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GetZInPoint" );

		ACCInstanceGameInfo_execGetZInPoint_Parms GetZInPoint_Parms;
		memcpy( &GetZInPoint_Parms.pt, &pt, 0xC );

		this->ProcessEvent( pfnGetZInPoint, &GetZInPoint_Parms, NULL );

		return GetZInPoint_Parms.ReturnValue;
	};

	bool IsPlayerUsingInvisibility ( class APlayerController* C )
	{
		static UFunction* pfnIsPlayerUsingInvisibility = NULL;

		if ( !pfnIsPlayerUsingInvisibility )
			pfnIsPlayerUsingInvisibility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.IsPlayerUsingInvisibility" );

		ACCInstanceGameInfo_execIsPlayerUsingInvisibility_Parms IsPlayerUsingInvisibility_Parms;
		IsPlayerUsingInvisibility_Parms.C = C;

		this->ProcessEvent( pfnIsPlayerUsingInvisibility, &IsPlayerUsingInvisibility_Parms, NULL );

		return IsPlayerUsingInvisibility_Parms.ReturnValue;
	};

	void evtPlayerTouchedTheItem ( void* Item, class APlayerController* Player )
	{
		static UFunction* pfnevtPlayerTouchedTheItem = NULL;

		if ( !pfnevtPlayerTouchedTheItem )
			pfnevtPlayerTouchedTheItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.evtPlayerTouchedTheItem" );

		ACCInstanceGameInfo_execevtPlayerTouchedTheItem_Parms evtPlayerTouchedTheItem_Parms;
		evtPlayerTouchedTheItem_Parms.Item = Item;
		evtPlayerTouchedTheItem_Parms.Player = Player;

		this->ProcessEvent( pfnevtPlayerTouchedTheItem, &evtPlayerTouchedTheItem_Parms, NULL );
	};

	void NotifyKismetAboutCratePickup ( class AController* C, void* I )
	{
		static UFunction* pfnNotifyKismetAboutCratePickup = NULL;

		if ( !pfnNotifyKismetAboutCratePickup )
			pfnNotifyKismetAboutCratePickup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NotifyKismetAboutCratePickup" );

		ACCInstanceGameInfo_execNotifyKismetAboutCratePickup_Parms NotifyKismetAboutCratePickup_Parms;
		NotifyKismetAboutCratePickup_Parms.C = C;
		NotifyKismetAboutCratePickup_Parms.I = I;

		this->ProcessEvent( pfnNotifyKismetAboutCratePickup, &NotifyKismetAboutCratePickup_Parms, NULL );
	};

	void eventScoreCarryObjectEnemy ( TArray< class ACCInstancePawn* > ScorersList, void* TheObject )
	{
		static UFunction* pfnScoreCarryObjectEnemy = NULL;

		if ( !pfnScoreCarryObjectEnemy )
			pfnScoreCarryObjectEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ScoreCarryObjectEnemy" );

		ACCInstanceGameInfo_eventScoreCarryObjectEnemy_Parms ScoreCarryObjectEnemy_Parms;
		ScoreCarryObjectEnemy_Parms.ScorersList = ScorersList;
		ScoreCarryObjectEnemy_Parms.TheObject = TheObject;

		this->ProcessEvent( pfnScoreCarryObjectEnemy, &ScoreCarryObjectEnemy_Parms, NULL );
	};

	void eventScoreCarryObject ( TArray< class ACCInstancePawn* > ScorersList, void* TheObject )
	{
		static UFunction* pfnScoreCarryObject = NULL;

		if ( !pfnScoreCarryObject )
			pfnScoreCarryObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ScoreCarryObject" );

		ACCInstanceGameInfo_eventScoreCarryObject_Parms ScoreCarryObject_Parms;
		ScoreCarryObject_Parms.ScorersList = ScorersList;
		ScoreCarryObject_Parms.TheObject = TheObject;

		this->ProcessEvent( pfnScoreCarryObject, &ScoreCarryObject_Parms, NULL );
	};

	void ClearPickupProgressAll ()
	{
		static UFunction* pfnClearPickupProgressAll = NULL;

		if ( !pfnClearPickupProgressAll )
			pfnClearPickupProgressAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ClearPickupProgressAll" );

		ACCInstanceGameInfo_execClearPickupProgressAll_Parms ClearPickupProgressAll_Parms;

		pfnClearPickupProgressAll->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearPickupProgressAll, &ClearPickupProgressAll_Parms, NULL );
		pfnClearPickupProgressAll->FunctionFlags |= 0x400;
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Tick" );

		ACCInstanceGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventAvatarReady ( class APlayerController* PC )
	{
		static UFunction* pfnAvatarReady = NULL;

		if ( !pfnAvatarReady )
			pfnAvatarReady = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AvatarReady" );

		ACCInstanceGameInfo_eventAvatarReady_Parms AvatarReady_Parms;
		AvatarReady_Parms.PC = PC;

		this->ProcessEvent( pfnAvatarReady, &AvatarReady_Parms, NULL );
	};

	bool FindInactivePRI ( class APlayerController* PC )
	{
		static UFunction* pfnFindInactivePRI = NULL;

		if ( !pfnFindInactivePRI )
			pfnFindInactivePRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.FindInactivePRI" );

		ACCInstanceGameInfo_execFindInactivePRI_Parms FindInactivePRI_Parms;
		FindInactivePRI_Parms.PC = PC;

		this->ProcessEvent( pfnFindInactivePRI, &FindInactivePRI_Parms, NULL );

		return FindInactivePRI_Parms.ReturnValue;
	};

	void AddInactivePRI ( class APlayerReplicationInfo* PRI, class APlayerController* PC )
	{
		static UFunction* pfnAddInactivePRI = NULL;

		if ( !pfnAddInactivePRI )
			pfnAddInactivePRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AddInactivePRI" );

		ACCInstanceGameInfo_execAddInactivePRI_Parms AddInactivePRI_Parms;
		AddInactivePRI_Parms.PRI = PRI;
		AddInactivePRI_Parms.PC = PC;

		this->ProcessEvent( pfnAddInactivePRI, &AddInactivePRI_Parms, NULL );
	};

	void BroadcastCombatLogMessageParam ( class AActor* Sender, class UClass* Message, int Switch/*CPF_OptionalParm*/, struct FAdditionalParam Param/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBroadcastCombatLogMessageParam = NULL;

		if ( !pfnBroadcastCombatLogMessageParam )
			pfnBroadcastCombatLogMessageParam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.BroadcastCombatLogMessageParam" );

		ACCInstanceGameInfo_execBroadcastCombatLogMessageParam_Parms BroadcastCombatLogMessageParam_Parms;
		BroadcastCombatLogMessageParam_Parms.Sender = Sender;
		BroadcastCombatLogMessageParam_Parms.Message = Message;
		BroadcastCombatLogMessageParam_Parms.Switch = Switch;
		memcpy( &BroadcastCombatLogMessageParam_Parms.Param, &Param, 0x50 );

		this->ProcessEvent( pfnBroadcastCombatLogMessageParam, &BroadcastCombatLogMessageParam_Parms, NULL );
	};

	void NotifyMineExplode ( class ACCInstanceController* CController, class ACCMine* CMine )
	{
		static UFunction* pfnNotifyMineExplode = NULL;

		if ( !pfnNotifyMineExplode )
			pfnNotifyMineExplode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NotifyMineExplode" );

		ACCInstanceGameInfo_execNotifyMineExplode_Parms NotifyMineExplode_Parms;
		NotifyMineExplode_Parms.CController = CController;
		NotifyMineExplode_Parms.CMine = CMine;

		this->ProcessEvent( pfnNotifyMineExplode, &NotifyMineExplode_Parms, NULL );
	};

	bool IsDead ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnIsDead = NULL;

		if ( !pfnIsDead )
			pfnIsDead = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.IsDead" );

		ACCInstanceGameInfo_execIsDead_Parms IsDead_Parms;
		IsDead_Parms.PRI = PRI;

		this->ProcessEvent( pfnIsDead, &IsDead_Parms, NULL );

		return IsDead_Parms.ReturnValue;
	};

	void AddPlayerScore ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST/*CPF_OptionalParm*/, int ExtraData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddPlayerScore = NULL;

		if ( !pfnAddPlayerScore )
			pfnAddPlayerScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AddPlayerScore" );

		ACCInstanceGameInfo_execAddPlayerScore_Parms AddPlayerScore_Parms;
		AddPlayerScore_Parms.PRI = PRI;
		AddPlayerScore_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScore_Parms.PST = PST;
		AddPlayerScore_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScore, &AddPlayerScore_Parms, NULL );
	};

	void AddPlayerScoreNotify ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST, int ExtraData )
	{
		static UFunction* pfnAddPlayerScoreNotify = NULL;

		if ( !pfnAddPlayerScoreNotify )
			pfnAddPlayerScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AddPlayerScoreNotify" );

		ACCInstanceGameInfo_execAddPlayerScoreNotify_Parms AddPlayerScoreNotify_Parms;
		AddPlayerScoreNotify_Parms.PRI = PRI;
		AddPlayerScoreNotify_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScoreNotify_Parms.PST = PST;
		AddPlayerScoreNotify_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScoreNotify, &AddPlayerScoreNotify_Parms, NULL );
	};

	void* GetWeaponAttachmentPresetStore ()
	{
		static UFunction* pfnGetWeaponAttachmentPresetStore = NULL;

		if ( !pfnGetWeaponAttachmentPresetStore )
			pfnGetWeaponAttachmentPresetStore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GetWeaponAttachmentPresetStore" );

		ACCInstanceGameInfo_execGetWeaponAttachmentPresetStore_Parms GetWeaponAttachmentPresetStore_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentPresetStore, &GetWeaponAttachmentPresetStore_Parms, NULL );

		return GetWeaponAttachmentPresetStore_Parms.ReturnValue;
	};

	void SetGameSpeed ( float T )
	{
		static UFunction* pfnSetGameSpeed = NULL;

		if ( !pfnSetGameSpeed )
			pfnSetGameSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SetGameSpeed" );

		ACCInstanceGameInfo_execSetGameSpeed_Parms SetGameSpeed_Parms;
		SetGameSpeed_Parms.T = T;

		this->ProcessEvent( pfnSetGameSpeed, &SetGameSpeed_Parms, NULL );
	};

	void RestartPlayers ()
	{
		static UFunction* pfnRestartPlayers = NULL;

		if ( !pfnRestartPlayers )
			pfnRestartPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.RestartPlayers" );

		ACCInstanceGameInfo_execRestartPlayers_Parms RestartPlayers_Parms;

		this->ProcessEvent( pfnRestartPlayers, &RestartPlayers_Parms, NULL );
	};

	void NotifyTakenDamage ( float Damage, class APawn* injured, class AController* InstigatedBy )
	{
		static UFunction* pfnNotifyTakenDamage = NULL;

		if ( !pfnNotifyTakenDamage )
			pfnNotifyTakenDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NotifyTakenDamage" );

		ACCInstanceGameInfo_execNotifyTakenDamage_Parms NotifyTakenDamage_Parms;
		NotifyTakenDamage_Parms.Damage = Damage;
		NotifyTakenDamage_Parms.injured = injured;
		NotifyTakenDamage_Parms.InstigatedBy = InstigatedBy;

		this->ProcessEvent( pfnNotifyTakenDamage, &NotifyTakenDamage_Parms, NULL );
	};

	class UClass* GetDefaultPlayerClass ( class AController* C )
	{
		static UFunction* pfnGetDefaultPlayerClass = NULL;

		if ( !pfnGetDefaultPlayerClass )
			pfnGetDefaultPlayerClass = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GetDefaultPlayerClass" );

		ACCInstanceGameInfo_execGetDefaultPlayerClass_Parms GetDefaultPlayerClass_Parms;
		GetDefaultPlayerClass_Parms.C = C;

		this->ProcessEvent( pfnGetDefaultPlayerClass, &GetDefaultPlayerClass_Parms, NULL );

		return GetDefaultPlayerClass_Parms.ReturnValue;
	};

	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot )
	{
		static UFunction* pfnSpawnDefaultPawnFor = NULL;

		if ( !pfnSpawnDefaultPawnFor )
			pfnSpawnDefaultPawnFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SpawnDefaultPawnFor" );

		ACCInstanceGameInfo_execSpawnDefaultPawnFor_Parms SpawnDefaultPawnFor_Parms;
		SpawnDefaultPawnFor_Parms.NewPlayer = NewPlayer;
		SpawnDefaultPawnFor_Parms.StartSpot = StartSpot;

		this->ProcessEvent( pfnSpawnDefaultPawnFor, &SpawnDefaultPawnFor_Parms, NULL );

		return SpawnDefaultPawnFor_Parms.ReturnValue;
	};

	void* ChoosePlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnChoosePlayerStart = NULL;

		if ( !pfnChoosePlayerStart )
			pfnChoosePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ChoosePlayerStart" );

		ACCInstanceGameInfo_execChoosePlayerStart_Parms ChoosePlayerStart_Parms;
		ChoosePlayerStart_Parms.Player = Player;
		ChoosePlayerStart_Parms.InTeam = InTeam;

		this->ProcessEvent( pfnChoosePlayerStart, &ChoosePlayerStart_Parms, NULL );

		return ChoosePlayerStart_Parms.ReturnValue;
	};

	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnLogin = NULL;

		if ( !pfnLogin )
			pfnLogin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Login" );

		ACCInstanceGameInfo_eventLogin_Parms Login_Parms;
		memcpy( &Login_Parms.Portal, &Portal, 0xC );
		memcpy( &Login_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnLogin, &Login_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &Login_Parms.ErrorMessage, 0xC ); // CPF_OutParm

		return Login_Parms.ReturnValue;
	};

	void RestartPlayer ( class AController* NewPlayer )
	{
		static UFunction* pfnRestartPlayer = NULL;

		if ( !pfnRestartPlayer )
			pfnRestartPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.RestartPlayer" );

		ACCInstanceGameInfo_execRestartPlayer_Parms RestartPlayer_Parms;
		RestartPlayer_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnRestartPlayer, &RestartPlayer_Parms, NULL );
	};

	void CheckQuestZones ( class AController* NewPlayer )
	{
		static UFunction* pfnCheckQuestZones = NULL;

		if ( !pfnCheckQuestZones )
			pfnCheckQuestZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckQuestZones" );

		ACCInstanceGameInfo_execCheckQuestZones_Parms CheckQuestZones_Parms;
		CheckQuestZones_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnCheckQuestZones, &CheckQuestZones_Parms, NULL );
	};

	void SetPlayerDefaults ( class APawn* PlayerPawn )
	{
		static UFunction* pfnSetPlayerDefaults = NULL;

		if ( !pfnSetPlayerDefaults )
			pfnSetPlayerDefaults = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SetPlayerDefaults" );

		ACCInstanceGameInfo_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;
		SetPlayerDefaults_Parms.PlayerPawn = PlayerPawn;

		this->ProcessEvent( pfnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
	};

	void RespawnPlayer ( class AController* Player )
	{
		static UFunction* pfnRespawnPlayer = NULL;

		if ( !pfnRespawnPlayer )
			pfnRespawnPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.RespawnPlayer" );

		ACCInstanceGameInfo_execRespawnPlayer_Parms RespawnPlayer_Parms;
		RespawnPlayer_Parms.Player = Player;

		this->ProcessEvent( pfnRespawnPlayer, &RespawnPlayer_Parms, NULL );
	};

	bool PlayerCanRestart ( class APlayerController* aPlayer )
	{
		static UFunction* pfnPlayerCanRestart = NULL;

		if ( !pfnPlayerCanRestart )
			pfnPlayerCanRestart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PlayerCanRestart" );

		ACCInstanceGameInfo_execPlayerCanRestart_Parms PlayerCanRestart_Parms;
		PlayerCanRestart_Parms.aPlayer = aPlayer;

		this->ProcessEvent( pfnPlayerCanRestart, &PlayerCanRestart_Parms, NULL );

		return PlayerCanRestart_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Killed" );

		ACCInstanceGameInfo_execKilled_Parms Killed_Parms;
		Killed_Parms.Killer = Killer;
		Killed_Parms.KilledPlayer = KilledPlayer;
		Killed_Parms.KilledPawn = KilledPawn;
		Killed_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnKilled, &Killed_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Reset" );

		ACCInstanceGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckEndGame" );

		ACCInstanceGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	void RestartGame ()
	{
		static UFunction* pfnRestartGame = NULL;

		if ( !pfnRestartGame )
			pfnRestartGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.RestartGame" );

		ACCInstanceGameInfo_execRestartGame_Parms RestartGame_Parms;

		this->ProcessEvent( pfnRestartGame, &RestartGame_Parms, NULL );
	};

	void InitGameReplicationInfo ()
	{
		static UFunction* pfnInitGameReplicationInfo = NULL;

		if ( !pfnInitGameReplicationInfo )
			pfnInitGameReplicationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.InitGameReplicationInfo" );

		ACCInstanceGameInfo_execInitGameReplicationInfo_Parms InitGameReplicationInfo_Parms;

		this->ProcessEvent( pfnInitGameReplicationInfo, &InitGameReplicationInfo_Parms, NULL );
	};

	void AddDefaultInventory ( class APawn* PlayerPawn )
	{
		static UFunction* pfnAddDefaultInventory = NULL;

		if ( !pfnAddDefaultInventory )
			pfnAddDefaultInventory = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AddDefaultInventory" );

		ACCInstanceGameInfo_execAddDefaultInventory_Parms AddDefaultInventory_Parms;
		AddDefaultInventory_Parms.PlayerPawn = PlayerPawn;

		this->ProcessEvent( pfnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
	};

	void Logout ( class AController* Exiting )
	{
		static UFunction* pfnLogout = NULL;

		if ( !pfnLogout )
			pfnLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Logout" );

		ACCInstanceGameInfo_execLogout_Parms Logout_Parms;
		Logout_Parms.Exiting = Exiting;

		this->ProcessEvent( pfnLogout, &Logout_Parms, NULL );
	};

	void eventPostLogin ( class APlayerController* NewPlayer )
	{
		static UFunction* pfnPostLogin = NULL;

		if ( !pfnPostLogin )
			pfnPostLogin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PostLogin" );

		ACCInstanceGameInfo_eventPostLogin_Parms PostLogin_Parms;
		PostLogin_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnPostLogin, &PostLogin_Parms, NULL );
	};

	void AFKEvent ( class APlayerReplicationInfo* InstigatorPRI, float Time )
	{
		static UFunction* pfnAFKEvent = NULL;

		if ( !pfnAFKEvent )
			pfnAFKEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AFKEvent" );

		ACCInstanceGameInfo_execAFKEvent_Parms AFKEvent_Parms;
		AFKEvent_Parms.InstigatorPRI = InstigatorPRI;
		AFKEvent_Parms.Time = Time;

		this->ProcessEvent( pfnAFKEvent, &AFKEvent_Parms, NULL );
	};

	void WeaponFireEvent ( class APlayerReplicationInfo* InstigatorPRI, int WeaponSlot, int FireMode, int NumFired )
	{
		static UFunction* pfnWeaponFireEvent = NULL;

		if ( !pfnWeaponFireEvent )
			pfnWeaponFireEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.WeaponFireEvent" );

		ACCInstanceGameInfo_execWeaponFireEvent_Parms WeaponFireEvent_Parms;
		WeaponFireEvent_Parms.InstigatorPRI = InstigatorPRI;
		WeaponFireEvent_Parms.WeaponSlot = WeaponSlot;
		WeaponFireEvent_Parms.FireMode = FireMode;
		WeaponFireEvent_Parms.NumFired = NumFired;

		this->ProcessEvent( pfnWeaponFireEvent, &WeaponFireEvent_Parms, NULL );
	};

	void FeatEvent ( class APlayerReplicationInfo* PRI, unsigned char FeatType, int Value )
	{
		static UFunction* pfnFeatEvent = NULL;

		if ( !pfnFeatEvent )
			pfnFeatEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.FeatEvent" );

		ACCInstanceGameInfo_execFeatEvent_Parms FeatEvent_Parms;
		FeatEvent_Parms.PRI = PRI;
		FeatEvent_Parms.FeatType = FeatType;
		FeatEvent_Parms.Value = Value;

		this->ProcessEvent( pfnFeatEvent, &FeatEvent_Parms, NULL );
	};

	void PickUpEvent ( class APlayerReplicationInfo* PRI, unsigned char PickUpType, int PickupNum/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPickUpEvent = NULL;

		if ( !pfnPickUpEvent )
			pfnPickUpEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PickUpEvent" );

		ACCInstanceGameInfo_execPickUpEvent_Parms PickUpEvent_Parms;
		PickUpEvent_Parms.PRI = PRI;
		PickUpEvent_Parms.PickUpType = PickUpType;
		PickUpEvent_Parms.PickupNum = PickupNum;

		this->ProcessEvent( pfnPickUpEvent, &PickUpEvent_Parms, NULL );
	};

	void BonusEvent ( unsigned char BonusType, class APlayerReplicationInfo* BonusPlayer )
	{
		static UFunction* pfnBonusEvent = NULL;

		if ( !pfnBonusEvent )
			pfnBonusEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.BonusEvent" );

		ACCInstanceGameInfo_execBonusEvent_Parms BonusEvent_Parms;
		BonusEvent_Parms.BonusType = BonusType;
		BonusEvent_Parms.BonusPlayer = BonusPlayer;

		this->ProcessEvent( pfnBonusEvent, &BonusEvent_Parms, NULL );
	};

	void ObjectiveEvent ( unsigned char StatType, int TeamNo, class APlayerReplicationInfo* InstigatorPRI, int ObjectiveIndex )
	{
		static UFunction* pfnObjectiveEvent = NULL;

		if ( !pfnObjectiveEvent )
			pfnObjectiveEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ObjectiveEvent" );

		ACCInstanceGameInfo_execObjectiveEvent_Parms ObjectiveEvent_Parms;
		ObjectiveEvent_Parms.StatType = StatType;
		ObjectiveEvent_Parms.TeamNo = TeamNo;
		ObjectiveEvent_Parms.InstigatorPRI = InstigatorPRI;
		ObjectiveEvent_Parms.ObjectiveIndex = ObjectiveIndex;

		this->ProcessEvent( pfnObjectiveEvent, &ObjectiveEvent_Parms, NULL );
	};

	void KillEvent ( unsigned char Killtype, class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim, int KillerWeaponID, int VictimWeaponID )
	{
		static UFunction* pfnKillEvent = NULL;

		if ( !pfnKillEvent )
			pfnKillEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.KillEvent" );

		ACCInstanceGameInfo_execKillEvent_Parms KillEvent_Parms;
		KillEvent_Parms.Killtype = Killtype;
		KillEvent_Parms.Killer = Killer;
		KillEvent_Parms.Victim = Victim;
		KillEvent_Parms.KillerWeaponID = KillerWeaponID;
		KillEvent_Parms.VictimWeaponID = VictimWeaponID;

		this->ProcessEvent( pfnKillEvent, &KillEvent_Parms, NULL );
	};

	void GameEvent ( unsigned char EventType, int Team, class APlayerReplicationInfo* InstigatorPRI, int AddData )
	{
		static UFunction* pfnGameEvent = NULL;

		if ( !pfnGameEvent )
			pfnGameEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GameEvent" );

		ACCInstanceGameInfo_execGameEvent_Parms GameEvent_Parms;
		GameEvent_Parms.EventType = EventType;
		GameEvent_Parms.Team = Team;
		GameEvent_Parms.InstigatorPRI = InstigatorPRI;
		GameEvent_Parms.AddData = AddData;

		this->ProcessEvent( pfnGameEvent, &GameEvent_Parms, NULL );
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer )
	{
		static UFunction* pfnCheckScore = NULL;

		if ( !pfnCheckScore )
			pfnCheckScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckScore" );

		ACCInstanceGameInfo_execCheckScore_Parms CheckScore_Parms;
		CheckScore_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnCheckScore, &CheckScore_Parms, NULL );

		return CheckScore_Parms.ReturnValue;
	};

	bool CheckMaxLives ( class APlayerReplicationInfo* Scorer )
	{
		static UFunction* pfnCheckMaxLives = NULL;

		if ( !pfnCheckMaxLives )
			pfnCheckMaxLives = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CheckMaxLives" );

		ACCInstanceGameInfo_execCheckMaxLives_Parms CheckMaxLives_Parms;
		CheckMaxLives_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnCheckMaxLives, &CheckMaxLives_Parms, NULL );

		return CheckMaxLives_Parms.ReturnValue;
	};

	void* SpawnBotController ( class UClass* BotClass, struct FBotRosterEntry Entry, int TeamIndex/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnBotController = NULL;

		if ( !pfnSpawnBotController )
			pfnSpawnBotController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SpawnBotController" );

		ACCInstanceGameInfo_execSpawnBotController_Parms SpawnBotController_Parms;
		SpawnBotController_Parms.BotClass = BotClass;
		memcpy( &SpawnBotController_Parms.Entry, &Entry, 0x90 );
		SpawnBotController_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSpawnBotController, &SpawnBotController_Parms, NULL );

		return SpawnBotController_Parms.ReturnValue;
	};

	void* AddBot ( struct FString BotName/*CPF_OptionalParm*/, int TeamIndex/*CPF_OptionalParm*/, class UClass* BotClass/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddBot = NULL;

		if ( !pfnAddBot )
			pfnAddBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.AddBot" );

		ACCInstanceGameInfo_execAddBot_Parms AddBot_Parms;
		memcpy( &AddBot_Parms.BotName, &BotName, 0xC );
		AddBot_Parms.TeamIndex = TeamIndex;
		AddBot_Parms.BotClass = BotClass;

		this->ProcessEvent( pfnAddBot, &AddBot_Parms, NULL );

		return AddBot_Parms.ReturnValue;
	};

	bool NeedPlayers ()
	{
		static UFunction* pfnNeedPlayers = NULL;

		if ( !pfnNeedPlayers )
			pfnNeedPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NeedPlayers" );

		ACCInstanceGameInfo_execNeedPlayers_Parms NeedPlayers_Parms;

		this->ProcessEvent( pfnNeedPlayers, &NeedPlayers_Parms, NULL );

		return NeedPlayers_Parms.ReturnValue;
	};

	void StopAllMovement ()
	{
		static UFunction* pfnStopAllMovement = NULL;

		if ( !pfnStopAllMovement )
			pfnStopAllMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.StopAllMovement" );

		ACCInstanceGameInfo_execStopAllMovement_Parms StopAllMovement_Parms;

		this->ProcessEvent( pfnStopAllMovement, &StopAllMovement_Parms, NULL );
	};

	void KismetGameEndedEvent ()
	{
		static UFunction* pfnKismetGameEndedEvent = NULL;

		if ( !pfnKismetGameEndedEvent )
			pfnKismetGameEndedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.KismetGameEndedEvent" );

		ACCInstanceGameInfo_execKismetGameEndedEvent_Parms KismetGameEndedEvent_Parms;

		this->ProcessEvent( pfnKismetGameEndedEvent, &KismetGameEndedEvent_Parms, NULL );
	};

	void SortPlayersByScore ()
	{
		static UFunction* pfnSortPlayersByScore = NULL;

		if ( !pfnSortPlayersByScore )
			pfnSortPlayersByScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SortPlayersByScore" );

		ACCInstanceGameInfo_execSortPlayersByScore_Parms SortPlayersByScore_Parms;

		this->ProcessEvent( pfnSortPlayersByScore, &SortPlayersByScore_Parms, NULL );
	};

	void NativeSortPlayers ()
	{
		static UFunction* pfnNativeSortPlayers = NULL;

		if ( !pfnNativeSortPlayers )
			pfnNativeSortPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NativeSortPlayers" );

		ACCInstanceGameInfo_execNativeSortPlayers_Parms NativeSortPlayers_Parms;

		pfnNativeSortPlayers->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeSortPlayers, &NativeSortPlayers_Parms, NULL );
		pfnNativeSortPlayers->FunctionFlags |= 0x400;
	};

	void SuddenDeathNotify ()
	{
		static UFunction* pfnSuddenDeathNotify = NULL;

		if ( !pfnSuddenDeathNotify )
			pfnSuddenDeathNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SuddenDeathNotify" );

		ACCInstanceGameInfo_execSuddenDeathNotify_Parms SuddenDeathNotify_Parms;

		this->ProcessEvent( pfnSuddenDeathNotify, &SuddenDeathNotify_Parms, NULL );
	};

	int ScoreFFAKill ( class ACCPlayerReplicationInfo* PRI )
	{
		static UFunction* pfnScoreFFAKill = NULL;

		if ( !pfnScoreFFAKill )
			pfnScoreFFAKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ScoreFFAKill" );

		ACCInstanceGameInfo_execScoreFFAKill_Parms ScoreFFAKill_Parms;
		ScoreFFAKill_Parms.PRI = PRI;

		this->ProcessEvent( pfnScoreFFAKill, &ScoreFFAKill_Parms, NULL );

		return ScoreFFAKill_Parms.ReturnValue;
	};

	int ScoreMultiKill ( class ACCPlayerReplicationInfo* PRI )
	{
		static UFunction* pfnScoreMultiKill = NULL;

		if ( !pfnScoreMultiKill )
			pfnScoreMultiKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ScoreMultiKill" );

		ACCInstanceGameInfo_execScoreMultiKill_Parms ScoreMultiKill_Parms;
		ScoreMultiKill_Parms.PRI = PRI;

		this->ProcessEvent( pfnScoreMultiKill, &ScoreMultiKill_Parms, NULL );

		return ScoreMultiKill_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NeedSuddenDeath" );

		ACCInstanceGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void GoToPendingMatch ()
	{
		static UFunction* pfnGoToPendingMatch = NULL;

		if ( !pfnGoToPendingMatch )
			pfnGoToPendingMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.GoToPendingMatch" );

		ACCInstanceGameInfo_execGoToPendingMatch_Parms GoToPendingMatch_Parms;

		this->ProcessEvent( pfnGoToPendingMatch, &GoToPendingMatch_Parms, NULL );
	};

	void YakaRequestInit ()
	{
		static UFunction* pfnYakaRequestInit = NULL;

		if ( !pfnYakaRequestInit )
			pfnYakaRequestInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.YakaRequestInit" );

		ACCInstanceGameInfo_execYakaRequestInit_Parms YakaRequestInit_Parms;

		this->ProcessEvent( pfnYakaRequestInit, &YakaRequestInit_Parms, NULL );
	};

	bool MatchIsInProgress ()
	{
		static UFunction* pfnMatchIsInProgress = NULL;

		if ( !pfnMatchIsInProgress )
			pfnMatchIsInProgress = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.MatchIsInProgress" );

		ACCInstanceGameInfo_execMatchIsInProgress_Parms MatchIsInProgress_Parms;

		this->ProcessEvent( pfnMatchIsInProgress, &MatchIsInProgress_Parms, NULL );

		return MatchIsInProgress_Parms.ReturnValue;
	};

	void EndRound ( class AActor* EndRoundFocus )
	{
		static UFunction* pfnEndRound = NULL;

		if ( !pfnEndRound )
			pfnEndRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.EndRound" );

		ACCInstanceGameInfo_execEndRound_Parms EndRound_Parms;
		EndRound_Parms.EndRoundFocus = EndRoundFocus;

		this->ProcessEvent( pfnEndRound, &EndRound_Parms, NULL );
	};

	void ResetLevel ()
	{
		static UFunction* pfnResetLevel = NULL;

		if ( !pfnResetLevel )
			pfnResetLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ResetLevel" );

		ACCInstanceGameInfo_execResetLevel_Parms ResetLevel_Parms;

		this->ProcessEvent( pfnResetLevel, &ResetLevel_Parms, NULL );
	};

	bool JustStarted ( float MaxElapsedTime )
	{
		static UFunction* pfnJustStarted = NULL;

		if ( !pfnJustStarted )
			pfnJustStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.JustStarted" );

		ACCInstanceGameInfo_execJustStarted_Parms JustStarted_Parms;
		JustStarted_Parms.MaxElapsedTime = MaxElapsedTime;

		this->ProcessEvent( pfnJustStarted, &JustStarted_Parms, NULL );

		return JustStarted_Parms.ReturnValue;
	};

	void PlayStartupMessage ()
	{
		static UFunction* pfnPlayStartupMessage = NULL;

		if ( !pfnPlayStartupMessage )
			pfnPlayStartupMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PlayStartupMessage" );

		ACCInstanceGameInfo_execPlayStartupMessage_Parms PlayStartupMessage_Parms;

		this->ProcessEvent( pfnPlayStartupMessage, &PlayStartupMessage_Parms, NULL );
	};

	void PlayRegularEndOfMatchMessage ()
	{
		static UFunction* pfnPlayRegularEndOfMatchMessage = NULL;

		if ( !pfnPlayRegularEndOfMatchMessage )
			pfnPlayRegularEndOfMatchMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PlayRegularEndOfMatchMessage" );

		ACCInstanceGameInfo_execPlayRegularEndOfMatchMessage_Parms PlayRegularEndOfMatchMessage_Parms;

		this->ProcessEvent( pfnPlayRegularEndOfMatchMessage, &PlayRegularEndOfMatchMessage_Parms, NULL );
	};

	void PlayEndOfMatchMessage ()
	{
		static UFunction* pfnPlayEndOfMatchMessage = NULL;

		if ( !pfnPlayEndOfMatchMessage )
			pfnPlayEndOfMatchMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PlayEndOfMatchMessage" );

		ACCInstanceGameInfo_execPlayEndOfMatchMessage_Parms PlayEndOfMatchMessage_Parms;

		this->ProcessEvent( pfnPlayEndOfMatchMessage, &PlayEndOfMatchMessage_Parms, NULL );
	};

	bool IsAWinner ( class APlayerController* C )
	{
		static UFunction* pfnIsAWinner = NULL;

		if ( !pfnIsAWinner )
			pfnIsAWinner = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.IsAWinner" );

		ACCInstanceGameInfo_execIsAWinner_Parms IsAWinner_Parms;
		IsAWinner_Parms.C = C;

		this->ProcessEvent( pfnIsAWinner, &IsAWinner_Parms, NULL );

		return IsAWinner_Parms.ReturnValue;
	};

	bool DominatingVictory ()
	{
		static UFunction* pfnDominatingVictory = NULL;

		if ( !pfnDominatingVictory )
			pfnDominatingVictory = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.DominatingVictory" );

		ACCInstanceGameInfo_execDominatingVictory_Parms DominatingVictory_Parms;

		this->ProcessEvent( pfnDominatingVictory, &DominatingVictory_Parms, NULL );

		return DominatingVictory_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.RatePlayerStart" );

		ACCInstanceGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	float NativeRatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnNativeRatePlayerStart = NULL;

		if ( !pfnNativeRatePlayerStart )
			pfnNativeRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NativeRatePlayerStart" );

		ACCInstanceGameInfo_execNativeRatePlayerStart_Parms NativeRatePlayerStart_Parms;
		NativeRatePlayerStart_Parms.P = P;
		NativeRatePlayerStart_Parms.Team = Team;
		NativeRatePlayerStart_Parms.Player = Player;

		pfnNativeRatePlayerStart->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeRatePlayerStart, &NativeRatePlayerStart_Parms, NULL );
		pfnNativeRatePlayerStart->FunctionFlags |= 0x400;

		return NativeRatePlayerStart_Parms.ReturnValue;
	};

	float NativeScoreActors ( void* P, unsigned char Team, class AController* Player, unsigned long TeamGame )
	{
		static UFunction* pfnNativeScoreActors = NULL;

		if ( !pfnNativeScoreActors )
			pfnNativeScoreActors = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.NativeScoreActors" );

		ACCInstanceGameInfo_execNativeScoreActors_Parms NativeScoreActors_Parms;
		NativeScoreActors_Parms.P = P;
		NativeScoreActors_Parms.Team = Team;
		NativeScoreActors_Parms.Player = Player;
		NativeScoreActors_Parms.TeamGame = TeamGame;

		pfnNativeScoreActors->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeScoreActors, &NativeScoreActors_Parms, NULL );
		pfnNativeScoreActors->FunctionFlags |= 0x400;

		return NativeScoreActors_Parms.ReturnValue;
	};

	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/, struct FString IncomingName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPlayerStart = NULL;

		if ( !pfnFindPlayerStart )
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.FindPlayerStart" );

		ACCInstanceGameInfo_execFindPlayerStart_Parms FindPlayerStart_Parms;
		FindPlayerStart_Parms.Player = Player;
		FindPlayerStart_Parms.InTeam = InTeam;
		memcpy( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

		this->ProcessEvent( pfnFindPlayerStart, &FindPlayerStart_Parms, NULL );

		return FindPlayerStart_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.EndGame" );

		ACCInstanceGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.StartMatch" );

		ACCInstanceGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void debugRemoveDeadPawns ()
	{
		static UFunction* pfndebugRemoveDeadPawns = NULL;

		if ( !pfndebugRemoveDeadPawns )
			pfndebugRemoveDeadPawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.debugRemoveDeadPawns" );

		ACCInstanceGameInfo_execdebugRemoveDeadPawns_Parms debugRemoveDeadPawns_Parms;

		this->ProcessEvent( pfndebugRemoveDeadPawns, &debugRemoveDeadPawns_Parms, NULL );
	};

	void Restart ()
	{
		static UFunction* pfnRestart = NULL;

		if ( !pfnRestart )
			pfnRestart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.Restart" );

		ACCInstanceGameInfo_execRestart_Parms Restart_Parms;

		this->ProcessEvent( pfnRestart, &Restart_Parms, NULL );
	};

	bool ForceRespawn ()
	{
		static UFunction* pfnForceRespawn = NULL;

		if ( !pfnForceRespawn )
			pfnForceRespawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.ForceRespawn" );

		ACCInstanceGameInfo_execForceRespawn_Parms ForceRespawn_Parms;

		this->ProcessEvent( pfnForceRespawn, &ForceRespawn_Parms, NULL );

		return ForceRespawn_Parms.ReturnValue;
	};

	struct FString DecodeEvent ( struct FName EventType, int TeamNo, struct FString InstigatorName, struct FString AdditionalName, class UClass* AdditionalObj )
	{
		static UFunction* pfnDecodeEvent = NULL;

		if ( !pfnDecodeEvent )
			pfnDecodeEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.DecodeEvent" );

		ACCInstanceGameInfo_execDecodeEvent_Parms DecodeEvent_Parms;
		memcpy( &DecodeEvent_Parms.EventType, &EventType, 0x8 );
		DecodeEvent_Parms.TeamNo = TeamNo;
		memcpy( &DecodeEvent_Parms.InstigatorName, &InstigatorName, 0xC );
		memcpy( &DecodeEvent_Parms.AdditionalName, &AdditionalName, 0xC );
		DecodeEvent_Parms.AdditionalObj = AdditionalObj;

		this->ProcessEvent( pfnDecodeEvent, &DecodeEvent_Parms, NULL );

		return DecodeEvent_Parms.ReturnValue;
	};

	void EndLogging ( struct FString Reason )
	{
		static UFunction* pfnEndLogging = NULL;

		if ( !pfnEndLogging )
			pfnEndLogging = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.EndLogging" );

		ACCInstanceGameInfo_execEndLogging_Parms EndLogging_Parms;
		memcpy( &EndLogging_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndLogging, &EndLogging_Parms, NULL );
	};

	void InitLogging ()
	{
		static UFunction* pfnInitLogging = NULL;

		if ( !pfnInitLogging )
			pfnInitLogging = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.InitLogging" );

		ACCInstanceGameInfo_execInitLogging_Parms InitLogging_Parms;

		this->ProcessEvent( pfnInitLogging, &InitLogging_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PostBeginPlay" );

		ACCInstanceGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void PreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.PreBeginPlay" );

		ACCInstanceGameInfo_execPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.InitGame" );

		ACCInstanceGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

	class APlayerController* CCGetLocalPlayerController ()
	{
		static UFunction* pfnCCGetLocalPlayerController = NULL;

		if ( !pfnCCGetLocalPlayerController )
			pfnCCGetLocalPlayerController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.CCGetLocalPlayerController" );

		ACCInstanceGameInfo_execCCGetLocalPlayerController_Parms CCGetLocalPlayerController_Parms;

		this->ProcessEvent( pfnCCGetLocalPlayerController, &CCGetLocalPlayerController_Parms, NULL );

		return CCGetLocalPlayerController_Parms.ReturnValue;
	};

	void SetGCPendingTime ( float NewTime )
	{
		static UFunction* pfnSetGCPendingTime = NULL;

		if ( !pfnSetGCPendingTime )
			pfnSetGCPendingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SetGCPendingTime" );

		ACCInstanceGameInfo_execSetGCPendingTime_Parms SetGCPendingTime_Parms;
		SetGCPendingTime_Parms.NewTime = NewTime;

		pfnSetGCPendingTime->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetGCPendingTime, &SetGCPendingTime_Parms, NULL );
		pfnSetGCPendingTime->FunctionFlags |= 0x400;
	};

	void EndWarmup ()
	{
		static UFunction* pfnEndWarmup = NULL;

		if ( !pfnEndWarmup )
			pfnEndWarmup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.EndWarmup" );

		ACCInstanceGameInfo_execEndWarmup_Parms EndWarmup_Parms;

		pfnEndWarmup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEndWarmup, &EndWarmup_Parms, NULL );
		pfnEndWarmup->FunctionFlags |= 0x400;
	};

	void StartWarmup ()
	{
		static UFunction* pfnStartWarmup = NULL;

		if ( !pfnStartWarmup )
			pfnStartWarmup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.StartWarmup" );

		ACCInstanceGameInfo_execStartWarmup_Parms StartWarmup_Parms;

		pfnStartWarmup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStartWarmup, &StartWarmup_Parms, NULL );
		pfnStartWarmup->FunctionFlags |= 0x400;
	};

	void SendStat ()
	{
		static UFunction* pfnSendStat = NULL;

		if ( !pfnSendStat )
			pfnSendStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.SendStat" );

		ACCInstanceGameInfo_execSendStat_Parms SendStat_Parms;

		pfnSendStat->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSendStat, &SendStat_Parms, NULL );
		pfnSendStat->FunctionFlags |= 0x400;
	};

	void InstanceFinished ()
	{
		static UFunction* pfnInstanceFinished = NULL;

		if ( !pfnInstanceFinished )
			pfnInstanceFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInstanceGameInfo.InstanceFinished" );

		ACCInstanceGameInfo_execInstanceFinished_Parms InstanceFinished_Parms;

		pfnInstanceFinished->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInstanceFinished, &InstanceFinished_Parms, NULL );
		pfnInstanceFinished->FunctionFlags |= 0x400;
	};

};

UClass* ACCInstanceGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif