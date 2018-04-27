/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCLTGameInfo.h
// Date: 06/16/2011 @ 05:19:40.938
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCLTGameInfo_execCheckWinner_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCLTGameInfo_execCheckCLTGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCLTGameInfo_execFindTeamWinner_Parms
{
	int TeamID;
	class APawn* ReturnValue; // CPF_ReturnParm
};

struct ACCCLTGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCCLTGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCLTGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCLTGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCLTGameInfo_eventScorePoint_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	class ACCCLTPoint* ThePoint;
};// FUNC_Event

struct ACCCLTGameInfo_eventSpawnNextPoint_Parms
{
};// FUNC_Event

struct ACCCLTGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCCLTGameInfo_execStartMatch_Parms
{
};

struct ACCCLTGameInfo_execSetNextPoint_Parms
{
	class ACCCLTPoint* NextPoint;
};

struct ACCCLTGameInfo_execFindNextPoint_Parms
{
	class ACCCLTPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCCLTGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCLTGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD3C - 0xD64)
class ACCCLTGameInfo : public ACCTeamInstanceGameInfo
{
public:
	TArray< class ACCCLTPoint* >                       CLTPointsList;                               // 0x0D3C (0x000C)
	class ACCCLTPoint*                                 CurrPoint;                                   // 0x0D48 (0x0004)
	class ACCCLTPoint*                                 prevpoint;                                   // 0x0D4C (0x0004)
	float                                              PStartPointScore;                            // 0x0D50 (0x0004)
	int                                                CapturePointScore;                           // 0x0D54 (0x0004)
	int                                                CaptureKillScore;                            // 0x0D58 (0x0004)
	int                                                DefendKillScore;                             // 0x0D5C (0x0004)
	int                                                TeamCaptureScore;                            // 0x0D60 (0x0004)

	// RoundOver
	// MatchInProgress
	// MatchOver

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCLTGameInfo" );

		return ClassPointer;
	};

public:
	int CheckWinner ()
	{
		static UFunction* pfnCheckWinner = NULL;

		if ( !pfnCheckWinner )
			pfnCheckWinner = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.CheckWinner" );

		ACCCLTGameInfo_execCheckWinner_Parms CheckWinner_Parms;

		this->ProcessEvent( pfnCheckWinner, &CheckWinner_Parms, NULL );

		return CheckWinner_Parms.ReturnValue;
	};

	bool CheckCLTGameEnd ()
	{
		static UFunction* pfnCheckCLTGameEnd = NULL;

		if ( !pfnCheckCLTGameEnd )
			pfnCheckCLTGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.CheckCLTGameEnd" );

		ACCCLTGameInfo_execCheckCLTGameEnd_Parms CheckCLTGameEnd_Parms;

		this->ProcessEvent( pfnCheckCLTGameEnd, &CheckCLTGameEnd_Parms, NULL );

		return CheckCLTGameEnd_Parms.ReturnValue;
	};

	class APawn* FindTeamWinner ( int TeamID )
	{
		static UFunction* pfnFindTeamWinner = NULL;

		if ( !pfnFindTeamWinner )
			pfnFindTeamWinner = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.FindTeamWinner" );

		ACCCLTGameInfo_execFindTeamWinner_Parms FindTeamWinner_Parms;
		FindTeamWinner_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnFindTeamWinner, &FindTeamWinner_Parms, NULL );

		return FindTeamWinner_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.EndGame" );

		ACCCLTGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.CheckEndGame" );

		ACCCLTGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.RatePlayerStart" );

		ACCCLTGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
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
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.NeedSuddenDeath" );

		ACCCLTGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void eventScorePoint ( TArray< class ACCInstancePawn* > ScorersList, class ACCCLTPoint* ThePoint )
	{
		static UFunction* pfnScorePoint = NULL;

		if ( !pfnScorePoint )
			pfnScorePoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.ScorePoint" );

		ACCCLTGameInfo_eventScorePoint_Parms ScorePoint_Parms;
		ScorePoint_Parms.ScorersList = ScorersList;
		ScorePoint_Parms.ThePoint = ThePoint;

		this->ProcessEvent( pfnScorePoint, &ScorePoint_Parms, NULL );
	};

	void eventSpawnNextPoint ()
	{
		static UFunction* pfnSpawnNextPoint = NULL;

		if ( !pfnSpawnNextPoint )
			pfnSpawnNextPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.SpawnNextPoint" );

		ACCCLTGameInfo_eventSpawnNextPoint_Parms SpawnNextPoint_Parms;

		this->ProcessEvent( pfnSpawnNextPoint, &SpawnNextPoint_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.Tick" );

		ACCCLTGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.StartMatch" );

		ACCCLTGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void SetNextPoint ( class ACCCLTPoint* NextPoint )
	{
		static UFunction* pfnSetNextPoint = NULL;

		if ( !pfnSetNextPoint )
			pfnSetNextPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.SetNextPoint" );

		ACCCLTGameInfo_execSetNextPoint_Parms SetNextPoint_Parms;
		SetNextPoint_Parms.NextPoint = NextPoint;

		this->ProcessEvent( pfnSetNextPoint, &SetNextPoint_Parms, NULL );
	};

	class ACCCLTPoint* FindNextPoint ()
	{
		static UFunction* pfnFindNextPoint = NULL;

		if ( !pfnFindNextPoint )
			pfnFindNextPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.FindNextPoint" );

		ACCCLTGameInfo_execFindNextPoint_Parms FindNextPoint_Parms;

		this->ProcessEvent( pfnFindNextPoint, &FindNextPoint_Parms, NULL );

		return FindNextPoint_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.PostBeginPlay" );

		ACCCLTGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTGameInfo.InitGame" );

		ACCCLTGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCCLTGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif