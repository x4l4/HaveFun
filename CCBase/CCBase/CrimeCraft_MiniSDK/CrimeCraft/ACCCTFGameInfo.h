/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTFGameInfo.h
// Date: 06/16/2011 @ 05:19:42.63
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTFGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCCTFGameInfo_execAddPlayerScoreNotify_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCCTFGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execStartMatch_Parms
{
};

struct ACCCTFGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCCTFGameInfo_execGetWinnerTeam_Parms
{
	class ATeamInfo* ReturnValue; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execGetWinnerTeamByScore_Parms
{
	class ATeamInfo* ReturnValue; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execGetWinnerTeamByFlag_Parms
{
	class ATeamInfo* ReturnValue; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execCheckCTFGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameInfo_execScoreWithFlagKill_Parms
{
	class AController* Scorer;
};

struct ACCCTFGameInfo_execScoreFlagCarrierKill_Parms
{
	class AController* Scorer;
};

struct ACCCTFGameInfo_eventScoreCarryObjectEnemy_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	void* TheObject;
};// FUNC_Event

struct ACCCTFGameInfo_eventScoreCarryObject_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	void* TheObject;
};// FUNC_Event

struct ACCCTFGameInfo_execScoreFlagReturn_Parms
{
	class AController* Scorer;
};

struct ACCCTFGameInfo_execScoreFlagPickUp_Parms
{
	class AController* Scorer;
};

struct ACCCTFGameInfo_execScoreFlagSteal_Parms
{
	class AController* Scorer;
};

struct ACCCTFGameInfo_execScoreFlagCapture_Parms
{
	class AController* Scorer;
	void* TheFlag;
};

struct ACCCTFGameInfo_execPostBeginPlay_Parms
{
};

struct ACCCTFGameInfo_execRegisterFlag_Parms
{
	void* flag;
	int TeamIndex;
};

struct ACCCTFGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD3C - 0xD80)
class ACCCTFGameInfo : public ACCTeamInstanceGameInfo
{
public:
	void*                                              Flags[ 2 ];                                  // 0x0D3C (0x0008)
	float                                              NearBaseSpawnPriority;                       // 0x0D44 (0x0004)
	float                                              NearBaseControlDistance;                     // 0x0D48 (0x0004)
	class UClass*                                      AnnouncerMessageClass;                       // 0x0D4C (0x0004)
	int                                                FlagStealScore;                              // 0x0D50 (0x0004)
	int                                                FlagPickUpScore;                             // 0x0D54 (0x0004)
	int                                                FlagReturnScore;                             // 0x0D58 (0x0004)
	int                                                FlagCaptureScore;                            // 0x0D5C (0x0004)
	int                                                FlagCarrierKillScore;                        // 0x0D60 (0x0004)
	int                                                WithFlagKillScore;                           // 0x0D64 (0x0004)
	int                                                FlagStealTeamScore;                          // 0x0D68 (0x0004)
	int                                                FlagPickUpTeamScore;                         // 0x0D6C (0x0004)
	int                                                FlagReturnTeamScore;                         // 0x0D70 (0x0004)
	int                                                FlagCaptureTeamScore;                        // 0x0D74 (0x0004)
	int                                                FlagCarrierKillTeamScore;                    // 0x0D78 (0x0004)
	int                                                WithFlagKillTeamScore;                       // 0x0D7C (0x0004)

	// RoundOver
	// MatchOver
	// MatchInProgress
	// PendingMatch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTFGameInfo" );

		return ClassPointer;
	};

public:
	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.Tick" );

		ACCCTFGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void AddPlayerScoreNotify ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST, int ExtraData )
	{
		static UFunction* pfnAddPlayerScoreNotify = NULL;

		if ( !pfnAddPlayerScoreNotify )
			pfnAddPlayerScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.AddPlayerScoreNotify" );

		ACCCTFGameInfo_execAddPlayerScoreNotify_Parms AddPlayerScoreNotify_Parms;
		AddPlayerScoreNotify_Parms.PRI = PRI;
		AddPlayerScoreNotify_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScoreNotify_Parms.PST = PST;
		AddPlayerScoreNotify_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScoreNotify, &AddPlayerScoreNotify_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.CheckEndGame" );

		ACCCTFGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.NeedSuddenDeath" );

		ACCCTFGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.StartMatch" );

		ACCCTFGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.RatePlayerStart" );

		ACCCTFGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.EndGame" );

		ACCCTFGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	class ATeamInfo* GetWinnerTeam ()
	{
		static UFunction* pfnGetWinnerTeam = NULL;

		if ( !pfnGetWinnerTeam )
			pfnGetWinnerTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.GetWinnerTeam" );

		ACCCTFGameInfo_execGetWinnerTeam_Parms GetWinnerTeam_Parms;

		this->ProcessEvent( pfnGetWinnerTeam, &GetWinnerTeam_Parms, NULL );

		return GetWinnerTeam_Parms.ReturnValue;
	};

	class ATeamInfo* GetWinnerTeamByScore ()
	{
		static UFunction* pfnGetWinnerTeamByScore = NULL;

		if ( !pfnGetWinnerTeamByScore )
			pfnGetWinnerTeamByScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.GetWinnerTeamByScore" );

		ACCCTFGameInfo_execGetWinnerTeamByScore_Parms GetWinnerTeamByScore_Parms;

		this->ProcessEvent( pfnGetWinnerTeamByScore, &GetWinnerTeamByScore_Parms, NULL );

		return GetWinnerTeamByScore_Parms.ReturnValue;
	};

	class ATeamInfo* GetWinnerTeamByFlag ()
	{
		static UFunction* pfnGetWinnerTeamByFlag = NULL;

		if ( !pfnGetWinnerTeamByFlag )
			pfnGetWinnerTeamByFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.GetWinnerTeamByFlag" );

		ACCCTFGameInfo_execGetWinnerTeamByFlag_Parms GetWinnerTeamByFlag_Parms;

		this->ProcessEvent( pfnGetWinnerTeamByFlag, &GetWinnerTeamByFlag_Parms, NULL );

		return GetWinnerTeamByFlag_Parms.ReturnValue;
	};

	bool CheckCTFGameEnd ()
	{
		static UFunction* pfnCheckCTFGameEnd = NULL;

		if ( !pfnCheckCTFGameEnd )
			pfnCheckCTFGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.CheckCTFGameEnd" );

		ACCCTFGameInfo_execCheckCTFGameEnd_Parms CheckCTFGameEnd_Parms;

		this->ProcessEvent( pfnCheckCTFGameEnd, &CheckCTFGameEnd_Parms, NULL );

		return CheckCTFGameEnd_Parms.ReturnValue;
	};

	void ScoreWithFlagKill ( class AController* Scorer )
	{
		static UFunction* pfnScoreWithFlagKill = NULL;

		if ( !pfnScoreWithFlagKill )
			pfnScoreWithFlagKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreWithFlagKill" );

		ACCCTFGameInfo_execScoreWithFlagKill_Parms ScoreWithFlagKill_Parms;
		ScoreWithFlagKill_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnScoreWithFlagKill, &ScoreWithFlagKill_Parms, NULL );
	};

	void ScoreFlagCarrierKill ( class AController* Scorer )
	{
		static UFunction* pfnScoreFlagCarrierKill = NULL;

		if ( !pfnScoreFlagCarrierKill )
			pfnScoreFlagCarrierKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreFlagCarrierKill" );

		ACCCTFGameInfo_execScoreFlagCarrierKill_Parms ScoreFlagCarrierKill_Parms;
		ScoreFlagCarrierKill_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnScoreFlagCarrierKill, &ScoreFlagCarrierKill_Parms, NULL );
	};

	void eventScoreCarryObjectEnemy ( TArray< class ACCInstancePawn* > ScorersList, void* TheObject )
	{
		static UFunction* pfnScoreCarryObjectEnemy = NULL;

		if ( !pfnScoreCarryObjectEnemy )
			pfnScoreCarryObjectEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreCarryObjectEnemy" );

		ACCCTFGameInfo_eventScoreCarryObjectEnemy_Parms ScoreCarryObjectEnemy_Parms;
		ScoreCarryObjectEnemy_Parms.ScorersList = ScorersList;
		ScoreCarryObjectEnemy_Parms.TheObject = TheObject;

		this->ProcessEvent( pfnScoreCarryObjectEnemy, &ScoreCarryObjectEnemy_Parms, NULL );
	};

	void eventScoreCarryObject ( TArray< class ACCInstancePawn* > ScorersList, void* TheObject )
	{
		static UFunction* pfnScoreCarryObject = NULL;

		if ( !pfnScoreCarryObject )
			pfnScoreCarryObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreCarryObject" );

		ACCCTFGameInfo_eventScoreCarryObject_Parms ScoreCarryObject_Parms;
		ScoreCarryObject_Parms.ScorersList = ScorersList;
		ScoreCarryObject_Parms.TheObject = TheObject;

		this->ProcessEvent( pfnScoreCarryObject, &ScoreCarryObject_Parms, NULL );
	};

	void ScoreFlagReturn ( class AController* Scorer )
	{
		static UFunction* pfnScoreFlagReturn = NULL;

		if ( !pfnScoreFlagReturn )
			pfnScoreFlagReturn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreFlagReturn" );

		ACCCTFGameInfo_execScoreFlagReturn_Parms ScoreFlagReturn_Parms;
		ScoreFlagReturn_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnScoreFlagReturn, &ScoreFlagReturn_Parms, NULL );
	};

	void ScoreFlagPickUp ( class AController* Scorer )
	{
		static UFunction* pfnScoreFlagPickUp = NULL;

		if ( !pfnScoreFlagPickUp )
			pfnScoreFlagPickUp = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreFlagPickUp" );

		ACCCTFGameInfo_execScoreFlagPickUp_Parms ScoreFlagPickUp_Parms;
		ScoreFlagPickUp_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnScoreFlagPickUp, &ScoreFlagPickUp_Parms, NULL );
	};

	void ScoreFlagSteal ( class AController* Scorer )
	{
		static UFunction* pfnScoreFlagSteal = NULL;

		if ( !pfnScoreFlagSteal )
			pfnScoreFlagSteal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreFlagSteal" );

		ACCCTFGameInfo_execScoreFlagSteal_Parms ScoreFlagSteal_Parms;
		ScoreFlagSteal_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnScoreFlagSteal, &ScoreFlagSteal_Parms, NULL );
	};

	void ScoreFlagCapture ( class AController* Scorer, void* TheFlag )
	{
		static UFunction* pfnScoreFlagCapture = NULL;

		if ( !pfnScoreFlagCapture )
			pfnScoreFlagCapture = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.ScoreFlagCapture" );

		ACCCTFGameInfo_execScoreFlagCapture_Parms ScoreFlagCapture_Parms;
		ScoreFlagCapture_Parms.Scorer = Scorer;
		ScoreFlagCapture_Parms.TheFlag = TheFlag;

		this->ProcessEvent( pfnScoreFlagCapture, &ScoreFlagCapture_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.PostBeginPlay" );

		ACCCTFGameInfo_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void RegisterFlag ( void* flag, int TeamIndex )
	{
		static UFunction* pfnRegisterFlag = NULL;

		if ( !pfnRegisterFlag )
			pfnRegisterFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.RegisterFlag" );

		ACCCTFGameInfo_execRegisterFlag_Parms RegisterFlag_Parms;
		RegisterFlag_Parms.flag = flag;
		RegisterFlag_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnRegisterFlag, &RegisterFlag_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameInfo.InitGame" );

		ACCCTFGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCCTFGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif