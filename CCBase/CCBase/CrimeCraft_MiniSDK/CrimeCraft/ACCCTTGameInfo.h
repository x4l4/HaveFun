/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTTGameInfo.h
// Date: 06/16/2011 @ 05:19:41.376
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTTGameInfo_execCheckTDMGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCCTTGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execReset_Parms
{
};

struct ACCCTTGameInfo_execRestartPlayers_Parms
{
};

struct ACCCTTGameInfo_execResetCaptureZones_Parms
{
};

struct ACCCTTGameInfo_execDoAddPlayerScore_Parms
{
	class ACCInstancePawn* Player;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCCTTGameInfo_execGetPRIForPawnPlayer_Parms
{
	class ACCInstancePawn* Player;
	class ACCCTTPlayerReplicationInfo* ReturnValue; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execIsValidRound_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execIsLastRound_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTTGameInfo_execStartRound_Parms
{
};

struct ACCCTTGameInfo_execStartMatch_Parms
{
};

struct ACCCTTGameInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCCTTGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCTTGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD44 - 0xD70)
class ACCCTTGameInfo : public ACCTDMGameInfo
{
public:
	class ACCCTTGameReplicationInfo*                   GRI;                                         // 0x0D44 (0x0004)
	TArray< class ACCCTTCaptureZone* >                 Zones;                                       // 0x0D48 (0x000C)
	void*                                              PlayersInZonePool;                           // 0x0D54 (0x0004)
	int                                                numRounds;                                   // 0x0D58 (0x0004)
	int                                                RoundLength;                                 // 0x0D5C (0x0004)
	int                                                IntermissionTime;                            // 0x0D60 (0x0004)
	int                                                TeamsScore[ 2 ];                             // 0x0D64 (0x0008)
	int                                                DefenceKillScore;                            // 0x0D6C (0x0004)

	// MatchOver
	// RoundOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTTGameInfo" );

		return ClassPointer;
	};

public:
	bool CheckTDMGameEnd ()
	{
		static UFunction* pfnCheckTDMGameEnd = NULL;

		if ( !pfnCheckTDMGameEnd )
			pfnCheckTDMGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.CheckTDMGameEnd" );

		ACCCTTGameInfo_execCheckTDMGameEnd_Parms CheckTDMGameEnd_Parms;

		this->ProcessEvent( pfnCheckTDMGameEnd, &CheckTDMGameEnd_Parms, NULL );

		return CheckTDMGameEnd_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.NeedSuddenDeath" );

		ACCCTTGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.EndGame" );

		ACCCTTGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.CheckEndGame" );

		ACCCTTGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.RatePlayerStart" );

		ACCCTTGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.Reset" );

		ACCCTTGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void RestartPlayers ()
	{
		static UFunction* pfnRestartPlayers = NULL;

		if ( !pfnRestartPlayers )
			pfnRestartPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.RestartPlayers" );

		ACCCTTGameInfo_execRestartPlayers_Parms RestartPlayers_Parms;

		this->ProcessEvent( pfnRestartPlayers, &RestartPlayers_Parms, NULL );
	};

	void ResetCaptureZones ()
	{
		static UFunction* pfnResetCaptureZones = NULL;

		if ( !pfnResetCaptureZones )
			pfnResetCaptureZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.ResetCaptureZones" );

		ACCCTTGameInfo_execResetCaptureZones_Parms ResetCaptureZones_Parms;

		this->ProcessEvent( pfnResetCaptureZones, &ResetCaptureZones_Parms, NULL );
	};

	void DoAddPlayerScore ( class ACCInstancePawn* Player, int ScoreToAdd, unsigned char PST/*CPF_OptionalParm*/, int ExtraData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDoAddPlayerScore = NULL;

		if ( !pfnDoAddPlayerScore )
			pfnDoAddPlayerScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.DoAddPlayerScore" );

		ACCCTTGameInfo_execDoAddPlayerScore_Parms DoAddPlayerScore_Parms;
		DoAddPlayerScore_Parms.Player = Player;
		DoAddPlayerScore_Parms.ScoreToAdd = ScoreToAdd;
		DoAddPlayerScore_Parms.PST = PST;
		DoAddPlayerScore_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnDoAddPlayerScore, &DoAddPlayerScore_Parms, NULL );
	};

	class ACCCTTPlayerReplicationInfo* GetPRIForPawnPlayer ( class ACCInstancePawn* Player )
	{
		static UFunction* pfnGetPRIForPawnPlayer = NULL;

		if ( !pfnGetPRIForPawnPlayer )
			pfnGetPRIForPawnPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.GetPRIForPawnPlayer" );

		ACCCTTGameInfo_execGetPRIForPawnPlayer_Parms GetPRIForPawnPlayer_Parms;
		GetPRIForPawnPlayer_Parms.Player = Player;

		this->ProcessEvent( pfnGetPRIForPawnPlayer, &GetPRIForPawnPlayer_Parms, NULL );

		return GetPRIForPawnPlayer_Parms.ReturnValue;
	};

	bool IsValidRound ()
	{
		static UFunction* pfnIsValidRound = NULL;

		if ( !pfnIsValidRound )
			pfnIsValidRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.IsValidRound" );

		ACCCTTGameInfo_execIsValidRound_Parms IsValidRound_Parms;

		this->ProcessEvent( pfnIsValidRound, &IsValidRound_Parms, NULL );

		return IsValidRound_Parms.ReturnValue;
	};

	bool IsLastRound ()
	{
		static UFunction* pfnIsLastRound = NULL;

		if ( !pfnIsLastRound )
			pfnIsLastRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.IsLastRound" );

		ACCCTTGameInfo_execIsLastRound_Parms IsLastRound_Parms;

		this->ProcessEvent( pfnIsLastRound, &IsLastRound_Parms, NULL );

		return IsLastRound_Parms.ReturnValue;
	};

	void StartRound ()
	{
		static UFunction* pfnStartRound = NULL;

		if ( !pfnStartRound )
			pfnStartRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.StartRound" );

		ACCCTTGameInfo_execStartRound_Parms StartRound_Parms;

		this->ProcessEvent( pfnStartRound, &StartRound_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.StartMatch" );

		ACCCTTGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.Destroyed" );

		ACCCTTGameInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.PostBeginPlay" );

		ACCCTTGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameInfo.InitGame" );

		ACCCTTGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCCTTGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif