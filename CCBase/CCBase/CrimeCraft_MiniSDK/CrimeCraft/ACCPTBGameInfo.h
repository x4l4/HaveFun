/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPTBGameInfo.h
// Date: 06/16/2011 @ 05:19:41.846
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPTBGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCPTBGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPTBGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCPTBGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPTBGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCPTBGameInfo_execClearPTBState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCPTBGameInfo_execScoreBlast_Parms
{
};

struct ACCPTBGameInfo_execScoreDemine_Parms
{
	class ACCPTBPlayerReplicationInfo* PRI;
};

struct ACCPTBGameInfo_eventDoDemine_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCPTBGameInfo_execScoreMine_Parms
{
	class ACCPTBPlayerReplicationInfo* PRI;
};

struct ACCPTBGameInfo_eventDoMine_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCPTBGameInfo_execRemoveBomb_Parms
{
};

struct ACCPTBGameInfo_execSpawnBomb_Parms
{
};

struct ACCPTBGameInfo_execStartRound_Parms
{
};

struct ACCPTBGameInfo_execStartMatch_Parms
{
};

struct ACCPTBGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCPTBGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD3C - 0xD7C)
class ACCPTBGameInfo : public ACCTeamInstanceGameInfo
{
public:
	unsigned long                                      bUpdatePTB : 1;                              // 0x0D3C (0x0004) [0x00000001]
	int                                                numRounds;                                   // 0x0D40 (0x0004)
	int                                                CurrRound;                                   // 0x0D44 (0x0004)
	void*                                              MineSpawn;                                   // 0x0D48 (0x0004)
	class ACCPTBMineBase*                              MineBase;                                    // 0x0D4C (0x0004)
	void*                                              Bomb;                                        // 0x0D50 (0x0004)
	int                                                MineTime;                                    // 0x0D54 (0x0004)
	int                                                DemineTime;                                  // 0x0D58 (0x0004)
	int                                                BlastTime;                                   // 0x0D5C (0x0004)
	int                                                MineScore;                                   // 0x0D60 (0x0004)
	int                                                DemineScore;                                 // 0x0D64 (0x0004)
	int                                                RoundWinScore;                               // 0x0D68 (0x0004)
	int                                                PlayerMineScore;                             // 0x0D6C (0x0004)
	int                                                PlayerDemineScore;                           // 0x0D70 (0x0004)
	int                                                PTBMineKillScore;                            // 0x0D74 (0x0004)
	int                                                PTBDemineKillScore;                          // 0x0D78 (0x0004)

	// RoundOver
	// MatchInProgress
	// MatchOver

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPTBGameInfo" );

		return ClassPointer;
	};

public:
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.EndGame" );

		ACCPTBGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.CheckEndGame" );

		ACCPTBGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.RatePlayerStart" );

		ACCPTBGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.NeedSuddenDeath" );

		ACCPTBGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.Tick" );

		ACCPTBGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	bool ClearPTBState ()
	{
		static UFunction* pfnClearPTBState = NULL;

		if ( !pfnClearPTBState )
			pfnClearPTBState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.ClearPTBState" );

		ACCPTBGameInfo_execClearPTBState_Parms ClearPTBState_Parms;

		pfnClearPTBState->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearPTBState, &ClearPTBState_Parms, NULL );
		pfnClearPTBState->FunctionFlags |= 0x400;

		return ClearPTBState_Parms.ReturnValue;
	};

	void ScoreBlast ()
	{
		static UFunction* pfnScoreBlast = NULL;

		if ( !pfnScoreBlast )
			pfnScoreBlast = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.ScoreBlast" );

		ACCPTBGameInfo_execScoreBlast_Parms ScoreBlast_Parms;

		this->ProcessEvent( pfnScoreBlast, &ScoreBlast_Parms, NULL );
	};

	void ScoreDemine ( class ACCPTBPlayerReplicationInfo* PRI )
	{
		static UFunction* pfnScoreDemine = NULL;

		if ( !pfnScoreDemine )
			pfnScoreDemine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.ScoreDemine" );

		ACCPTBGameInfo_execScoreDemine_Parms ScoreDemine_Parms;
		ScoreDemine_Parms.PRI = PRI;

		this->ProcessEvent( pfnScoreDemine, &ScoreDemine_Parms, NULL );
	};

	bool eventDoDemine ( class APawn* P )
	{
		static UFunction* pfnDoDemine = NULL;

		if ( !pfnDoDemine )
			pfnDoDemine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.DoDemine" );

		ACCPTBGameInfo_eventDoDemine_Parms DoDemine_Parms;
		DoDemine_Parms.P = P;

		this->ProcessEvent( pfnDoDemine, &DoDemine_Parms, NULL );

		return DoDemine_Parms.ReturnValue;
	};

	void ScoreMine ( class ACCPTBPlayerReplicationInfo* PRI )
	{
		static UFunction* pfnScoreMine = NULL;

		if ( !pfnScoreMine )
			pfnScoreMine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.ScoreMine" );

		ACCPTBGameInfo_execScoreMine_Parms ScoreMine_Parms;
		ScoreMine_Parms.PRI = PRI;

		this->ProcessEvent( pfnScoreMine, &ScoreMine_Parms, NULL );
	};

	bool eventDoMine ( class APawn* P )
	{
		static UFunction* pfnDoMine = NULL;

		if ( !pfnDoMine )
			pfnDoMine = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.DoMine" );

		ACCPTBGameInfo_eventDoMine_Parms DoMine_Parms;
		DoMine_Parms.P = P;

		this->ProcessEvent( pfnDoMine, &DoMine_Parms, NULL );

		return DoMine_Parms.ReturnValue;
	};

	void RemoveBomb ()
	{
		static UFunction* pfnRemoveBomb = NULL;

		if ( !pfnRemoveBomb )
			pfnRemoveBomb = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.RemoveBomb" );

		ACCPTBGameInfo_execRemoveBomb_Parms RemoveBomb_Parms;

		this->ProcessEvent( pfnRemoveBomb, &RemoveBomb_Parms, NULL );
	};

	void SpawnBomb ()
	{
		static UFunction* pfnSpawnBomb = NULL;

		if ( !pfnSpawnBomb )
			pfnSpawnBomb = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.SpawnBomb" );

		ACCPTBGameInfo_execSpawnBomb_Parms SpawnBomb_Parms;

		this->ProcessEvent( pfnSpawnBomb, &SpawnBomb_Parms, NULL );
	};

	void StartRound ()
	{
		static UFunction* pfnStartRound = NULL;

		if ( !pfnStartRound )
			pfnStartRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.StartRound" );

		ACCPTBGameInfo_execStartRound_Parms StartRound_Parms;

		this->ProcessEvent( pfnStartRound, &StartRound_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.StartMatch" );

		ACCPTBGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.PostBeginPlay" );

		ACCPTBGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameInfo.InitGame" );

		ACCPTBGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCPTBGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif