/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTZGameInfo.h
// Date: 06/16/2011 @ 05:19:41.386
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTZGameInfo_execCheckZones_Parms
{
};

struct ACCCTZGameInfo_execCheckTDMGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTZGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTZGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCCTZGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTZGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCTZGameInfo_execFreezeCaptureZones_Parms
{
	unsigned long bFreeze : 1;
};

struct ACCCTZGameInfo_execReset_Parms
{
};

struct ACCCTZGameInfo_execRestartPlayers_Parms
{
};

struct ACCCTZGameInfo_execStartRound_Parms
{
};

struct ACCCTZGameInfo_execStartMatch_Parms
{
};

struct ACCCTZGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCTZGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD44 - 0xD78)
class ACCCTZGameInfo : public ACCTDMGameInfo
{
public:
	TArray< class ACCCaptureZone* >                    Zones;                                       // 0x0D44 (0x000C)
	int                                                RedsScore;                                   // 0x0D50 (0x0004)
	int                                                BluesScore;                                  // 0x0D54 (0x0004)
	class ACCCTZGameReplicationInfo*                   GRI;                                         // 0x0D58 (0x0004)
	int                                                numRounds;                                   // 0x0D5C (0x0004)
	int                                                RoundLength;                                 // 0x0D60 (0x0004)
	int                                                IntermissionTime;                            // 0x0D64 (0x0004)
	int                                                CaptureScore;                                // 0x0D68 (0x0004)
	int                                                DefenceKillScore;                            // 0x0D6C (0x0004)
	int                                                DefenceScoreTick;                            // 0x0D70 (0x0004)
	int                                                DefenceScoreVal;                             // 0x0D74 (0x0004)

	// MatchOver
	// RoundOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTZGameInfo" );

		return ClassPointer;
	};

public:
	void CheckZones ()
	{
		static UFunction* pfnCheckZones = NULL;

		if ( !pfnCheckZones )
			pfnCheckZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.CheckZones" );

		ACCCTZGameInfo_execCheckZones_Parms CheckZones_Parms;

		this->ProcessEvent( pfnCheckZones, &CheckZones_Parms, NULL );
	};

	bool CheckTDMGameEnd ()
	{
		static UFunction* pfnCheckTDMGameEnd = NULL;

		if ( !pfnCheckTDMGameEnd )
			pfnCheckTDMGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.CheckTDMGameEnd" );

		ACCCTZGameInfo_execCheckTDMGameEnd_Parms CheckTDMGameEnd_Parms;

		this->ProcessEvent( pfnCheckTDMGameEnd, &CheckTDMGameEnd_Parms, NULL );

		return CheckTDMGameEnd_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.NeedSuddenDeath" );

		ACCCTZGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.EndGame" );

		ACCCTZGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.CheckEndGame" );

		ACCCTZGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.RatePlayerStart" );

		ACCCTZGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void FreezeCaptureZones ( unsigned long bFreeze )
	{
		static UFunction* pfnFreezeCaptureZones = NULL;

		if ( !pfnFreezeCaptureZones )
			pfnFreezeCaptureZones = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.FreezeCaptureZones" );

		ACCCTZGameInfo_execFreezeCaptureZones_Parms FreezeCaptureZones_Parms;
		FreezeCaptureZones_Parms.bFreeze = bFreeze;

		this->ProcessEvent( pfnFreezeCaptureZones, &FreezeCaptureZones_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.Reset" );

		ACCCTZGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void RestartPlayers ()
	{
		static UFunction* pfnRestartPlayers = NULL;

		if ( !pfnRestartPlayers )
			pfnRestartPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.RestartPlayers" );

		ACCCTZGameInfo_execRestartPlayers_Parms RestartPlayers_Parms;

		this->ProcessEvent( pfnRestartPlayers, &RestartPlayers_Parms, NULL );
	};

	void StartRound ()
	{
		static UFunction* pfnStartRound = NULL;

		if ( !pfnStartRound )
			pfnStartRound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.StartRound" );

		ACCCTZGameInfo_execStartRound_Parms StartRound_Parms;

		this->ProcessEvent( pfnStartRound, &StartRound_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.StartMatch" );

		ACCCTZGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.PostBeginPlay" );

		ACCCTZGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTZGameInfo.InitGame" );

		ACCCTZGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCCTZGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif