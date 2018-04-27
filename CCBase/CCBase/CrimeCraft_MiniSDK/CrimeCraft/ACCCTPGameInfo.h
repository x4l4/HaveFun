/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTPGameInfo.h
// Date: 06/16/2011 @ 05:19:41.303
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTPGameInfo_execAddPlayerScoreNotify_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCCTPGameInfo_execCheckPoints_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTPGameInfo_execCheckCTPGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTPGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCCTPGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTPGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCTPGameInfo_execSuddenDeathNotify_Parms
{
};

struct ACCCTPGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTPGameInfo_eventPointLost_Parms
{
	class ACCCapturePoint* ThePoint;
	unsigned char TeamID;
};// FUNC_Event

struct ACCCTPGameInfo_eventScorePoint_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	class ACCCapturePoint* ThePoint;
};// FUNC_Event

struct ACCCTPGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCCTPGameInfo_eventPostLogin_Parms
{
	class APlayerController* PC;
};// FUNC_Event

struct ACCCTPGameInfo_execChangeTeam_Parms
{
	class AController* Other;
	int N;
	unsigned long bNewTeam : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTPGameInfo_execReinitPoints_Parms
{
	void* PC;
	int TeamIndex;
};

struct ACCCTPGameInfo_execStartMatch_Parms
{
};

struct ACCCTPGameInfo_execResetPointsToDefault_Parms
{
};

struct ACCCTPGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCTPGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

struct ACCCTPGameInfo_execUpdateLastPoint_Parms
{
	int TeamID;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCTPGameInfo_execClearCTPState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0xD3C - 0xD7C)
class ACCCTPGameInfo : public ACCTeamInstanceGameInfo
{
public:
	TArray< class ACCCapturePoint* >                   CapturePointsList;                           // 0x0D3C (0x000C)
	class ACCCapturePoint*                             LastPointBlue;                               // 0x0D48 (0x0004)
	class ACCCapturePoint*                             LastPointRed;                                // 0x0D4C (0x0004)
	class ACCCapturePoint*                             BasePointBlue;                               // 0x0D50 (0x0004)
	class ACCCapturePoint*                             BasePointRed;                                // 0x0D54 (0x0004)
	float                                              LastPointCaptureTime;                        // 0x0D58 (0x0004)
	unsigned long                                      UpdateCapturePoints : 1;                     // 0x0D5C (0x0004) [0x00000001]
	float                                              PStartPointScore;                            // 0x0D60 (0x0004)
	int                                                CapturePointScore;                           // 0x0D64 (0x0004)
	int                                                CaptureKillScore;                            // 0x0D68 (0x0004)
	int                                                DefendKillScore;                             // 0x0D6C (0x0004)
	int                                                TeamCapturePointScore;                       // 0x0D70 (0x0004)
	int                                                TeamCaptureKillScore;                        // 0x0D74 (0x0004)
	int                                                TeamDefendKillScore;                         // 0x0D78 (0x0004)

	// RoundOver
	// MatchInProgress
	// MatchOver

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTPGameInfo" );

		return ClassPointer;
	};

public:
	void AddPlayerScoreNotify ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST, int ExtraData )
	{
		static UFunction* pfnAddPlayerScoreNotify = NULL;

		if ( !pfnAddPlayerScoreNotify )
			pfnAddPlayerScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.AddPlayerScoreNotify" );

		ACCCTPGameInfo_execAddPlayerScoreNotify_Parms AddPlayerScoreNotify_Parms;
		AddPlayerScoreNotify_Parms.PRI = PRI;
		AddPlayerScoreNotify_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScoreNotify_Parms.PST = PST;
		AddPlayerScoreNotify_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScoreNotify, &AddPlayerScoreNotify_Parms, NULL );
	};

	bool CheckPoints ()
	{
		static UFunction* pfnCheckPoints = NULL;

		if ( !pfnCheckPoints )
			pfnCheckPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.CheckPoints" );

		ACCCTPGameInfo_execCheckPoints_Parms CheckPoints_Parms;

		this->ProcessEvent( pfnCheckPoints, &CheckPoints_Parms, NULL );

		return CheckPoints_Parms.ReturnValue;
	};

	bool CheckCTPGameEnd ()
	{
		static UFunction* pfnCheckCTPGameEnd = NULL;

		if ( !pfnCheckCTPGameEnd )
			pfnCheckCTPGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.CheckCTPGameEnd" );

		ACCCTPGameInfo_execCheckCTPGameEnd_Parms CheckCTPGameEnd_Parms;

		this->ProcessEvent( pfnCheckCTPGameEnd, &CheckCTPGameEnd_Parms, NULL );

		return CheckCTPGameEnd_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.EndGame" );

		ACCCTPGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.CheckEndGame" );

		ACCCTPGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.RatePlayerStart" );

		ACCCTPGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void SuddenDeathNotify ()
	{
		static UFunction* pfnSuddenDeathNotify = NULL;

		if ( !pfnSuddenDeathNotify )
			pfnSuddenDeathNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.SuddenDeathNotify" );

		ACCCTPGameInfo_execSuddenDeathNotify_Parms SuddenDeathNotify_Parms;

		this->ProcessEvent( pfnSuddenDeathNotify, &SuddenDeathNotify_Parms, NULL );
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.NeedSuddenDeath" );

		ACCCTPGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void eventPointLost ( class ACCCapturePoint* ThePoint, unsigned char TeamID )
	{
		static UFunction* pfnPointLost = NULL;

		if ( !pfnPointLost )
			pfnPointLost = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.PointLost" );

		ACCCTPGameInfo_eventPointLost_Parms PointLost_Parms;
		PointLost_Parms.ThePoint = ThePoint;
		PointLost_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnPointLost, &PointLost_Parms, NULL );
	};

	void eventScorePoint ( TArray< class ACCInstancePawn* > ScorersList, class ACCCapturePoint* ThePoint )
	{
		static UFunction* pfnScorePoint = NULL;

		if ( !pfnScorePoint )
			pfnScorePoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.ScorePoint" );

		ACCCTPGameInfo_eventScorePoint_Parms ScorePoint_Parms;
		ScorePoint_Parms.ScorersList = ScorersList;
		ScorePoint_Parms.ThePoint = ThePoint;

		this->ProcessEvent( pfnScorePoint, &ScorePoint_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.Tick" );

		ACCCTPGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventPostLogin ( class APlayerController* PC )
	{
		static UFunction* pfnPostLogin = NULL;

		if ( !pfnPostLogin )
			pfnPostLogin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.PostLogin" );

		ACCCTPGameInfo_eventPostLogin_Parms PostLogin_Parms;
		PostLogin_Parms.PC = PC;

		this->ProcessEvent( pfnPostLogin, &PostLogin_Parms, NULL );
	};

	bool ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.ChangeTeam" );

		ACCCTPGameInfo_execChangeTeam_Parms ChangeTeam_Parms;
		ChangeTeam_Parms.Other = Other;
		ChangeTeam_Parms.N = N;
		ChangeTeam_Parms.bNewTeam = bNewTeam;

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );

		return ChangeTeam_Parms.ReturnValue;
	};

	void ReinitPoints ( void* PC, int TeamIndex )
	{
		static UFunction* pfnReinitPoints = NULL;

		if ( !pfnReinitPoints )
			pfnReinitPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.ReinitPoints" );

		ACCCTPGameInfo_execReinitPoints_Parms ReinitPoints_Parms;
		ReinitPoints_Parms.PC = PC;
		ReinitPoints_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnReinitPoints, &ReinitPoints_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.StartMatch" );

		ACCCTPGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void ResetPointsToDefault ()
	{
		static UFunction* pfnResetPointsToDefault = NULL;

		if ( !pfnResetPointsToDefault )
			pfnResetPointsToDefault = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.ResetPointsToDefault" );

		ACCCTPGameInfo_execResetPointsToDefault_Parms ResetPointsToDefault_Parms;

		this->ProcessEvent( pfnResetPointsToDefault, &ResetPointsToDefault_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.PostBeginPlay" );

		ACCCTPGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.InitGame" );

		ACCCTPGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

	bool UpdateLastPoint ( int TeamID )
	{
		static UFunction* pfnUpdateLastPoint = NULL;

		if ( !pfnUpdateLastPoint )
			pfnUpdateLastPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.UpdateLastPoint" );

		ACCCTPGameInfo_execUpdateLastPoint_Parms UpdateLastPoint_Parms;
		UpdateLastPoint_Parms.TeamID = TeamID;

		pfnUpdateLastPoint->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateLastPoint, &UpdateLastPoint_Parms, NULL );
		pfnUpdateLastPoint->FunctionFlags |= 0x400;

		return UpdateLastPoint_Parms.ReturnValue;
	};

	bool ClearCTPState ()
	{
		static UFunction* pfnClearCTPState = NULL;

		if ( !pfnClearCTPState )
			pfnClearCTPState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPGameInfo.ClearCTPState" );

		ACCCTPGameInfo_execClearCTPState_Parms ClearCTPState_Parms;

		pfnClearCTPState->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearCTPState, &ClearCTPState_Parms, NULL );
		pfnClearCTPState->FunctionFlags |= 0x400;

		return ClearCTPState_Parms.ReturnValue;
	};

};

UClass* ACCCTPGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif