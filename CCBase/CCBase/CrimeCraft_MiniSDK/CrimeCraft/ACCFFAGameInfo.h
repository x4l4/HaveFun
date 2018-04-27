/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCFFAGameInfo.h
// Date: 06/16/2011 @ 05:19:41.529
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCFFAGameInfo_execAddPlayerScoreNotify_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCFFAGameInfo_execCalculateLead_Parms
{
	class AController* ControllerToSkip;
};

struct ACCFFAGameInfo_execCheckWinByScore_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execCheckKills_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execCheckFFAGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCFFAGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCFFAGameInfo_execLogout_Parms
{
	class AController* Exiting;
};

struct ACCFFAGameInfo_execStartMatch_Parms
{
};

struct ACCFFAGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCFFAGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0x528 - 0x558)
class ACCFFAGameInfo : public ACCInstanceGameInfo
{
public:
	class UClass*                                      QuestItemClasses[ 12 ];                      // 0x0528 (0x0030)

	// RoundOver
	// MatchInProgress
	// MatchOver

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCFFAGameInfo" );

		return ClassPointer;
	};

public:
	void AddPlayerScoreNotify ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST, int ExtraData )
	{
		static UFunction* pfnAddPlayerScoreNotify = NULL;

		if ( !pfnAddPlayerScoreNotify )
			pfnAddPlayerScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.AddPlayerScoreNotify" );

		ACCFFAGameInfo_execAddPlayerScoreNotify_Parms AddPlayerScoreNotify_Parms;
		AddPlayerScoreNotify_Parms.PRI = PRI;
		AddPlayerScoreNotify_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScoreNotify_Parms.PST = PST;
		AddPlayerScoreNotify_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScoreNotify, &AddPlayerScoreNotify_Parms, NULL );
	};

	void CalculateLead ( class AController* ControllerToSkip/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCalculateLead = NULL;

		if ( !pfnCalculateLead )
			pfnCalculateLead = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.CalculateLead" );

		ACCFFAGameInfo_execCalculateLead_Parms CalculateLead_Parms;
		CalculateLead_Parms.ControllerToSkip = ControllerToSkip;

		this->ProcessEvent( pfnCalculateLead, &CalculateLead_Parms, NULL );
	};

	bool CheckWinByScore ()
	{
		static UFunction* pfnCheckWinByScore = NULL;

		if ( !pfnCheckWinByScore )
			pfnCheckWinByScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.CheckWinByScore" );

		ACCFFAGameInfo_execCheckWinByScore_Parms CheckWinByScore_Parms;

		this->ProcessEvent( pfnCheckWinByScore, &CheckWinByScore_Parms, NULL );

		return CheckWinByScore_Parms.ReturnValue;
	};

	bool CheckKills ()
	{
		static UFunction* pfnCheckKills = NULL;

		if ( !pfnCheckKills )
			pfnCheckKills = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.CheckKills" );

		ACCFFAGameInfo_execCheckKills_Parms CheckKills_Parms;

		this->ProcessEvent( pfnCheckKills, &CheckKills_Parms, NULL );

		return CheckKills_Parms.ReturnValue;
	};

	bool CheckFFAGameEnd ()
	{
		static UFunction* pfnCheckFFAGameEnd = NULL;

		if ( !pfnCheckFFAGameEnd )
			pfnCheckFFAGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.CheckFFAGameEnd" );

		ACCFFAGameInfo_execCheckFFAGameEnd_Parms CheckFFAGameEnd_Parms;

		this->ProcessEvent( pfnCheckFFAGameEnd, &CheckFFAGameEnd_Parms, NULL );

		return CheckFFAGameEnd_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.NeedSuddenDeath" );

		ACCFFAGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.EndGame" );

		ACCFFAGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.CheckEndGame" );

		ACCFFAGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.RatePlayerStart" );

		ACCFFAGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void Logout ( class AController* Exiting )
	{
		static UFunction* pfnLogout = NULL;

		if ( !pfnLogout )
			pfnLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.Logout" );

		ACCFFAGameInfo_execLogout_Parms Logout_Parms;
		Logout_Parms.Exiting = Exiting;

		this->ProcessEvent( pfnLogout, &Logout_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.StartMatch" );

		ACCFFAGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.PostBeginPlay" );

		ACCFFAGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAGameInfo.InitGame" );

		ACCFFAGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCFFAGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif