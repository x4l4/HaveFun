/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCROBGameInfo.h
// Date: 06/16/2011 @ 05:19:41.885
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ELastScoreMessage
{
	LSM_None = 0,
	lsm = 1,
	ELastScoreMessage_MAX = 4
};

struct ACCROBGameInfo_eventScoreCarryObject_Parms
{
	TArray< class ACCInstancePawn* > ScorersList;
	void* TheObject;
};// FUNC_Event

struct ACCROBGameInfo_execRemoveBag_Parms
{
	void* Bag;
};

struct ACCROBGameInfo_execAddBag_Parms
{
	void* Bag;
};

struct ACCROBGameInfo_execCaptureScore_Parms
{
	void* Bag;
	class AController* ScoreController;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execReturnScore_Parms
{
	void* Bag;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execCheckROBScore_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execCheckROBGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCROBGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCROBGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCROBGameInfo_execReturnAllDroppedBags_Parms
{
};

struct ACCROBGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCROBGameInfo_execClearPawnsRobberyState_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCROBGameInfo_eventBroadcastBaseScoreNotification_Parms
{
};// FUNC_Event

struct ACCROBGameInfo_eventPlayerCaptureScore_Parms
{
	class ACCPlayerReplicationInfo* CCPRI;
	int Score;
};// FUNC_Event

struct ACCROBGameInfo_eventAllScoreAtDeposit_Parms
{
	class APawn* P;
	int Score;
};// FUNC_Event

struct ACCROBGameInfo_eventGivePlayerABag_Parms
{
	class APawn* P;
	int TeamIndex;
};// FUNC_Event

struct ACCROBGameInfo_eventMaxScoreCapture_Parms
{
	class APlayerReplicationInfo* PRI;
};// FUNC_Event

struct ACCROBGameInfo_execStartMatch_Parms
{
};

struct ACCROBGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCROBGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD3C - 0xDA0)
class ACCROBGameInfo : public ACCTeamInstanceGameInfo
{
public:
	class ACCROBBase*                                  RedBase;                                     // 0x0D3C (0x0004)
	class ACCROBBase*                                  BlueBase;                                    // 0x0D40 (0x0004)
	class ACCROBBase*                                  NeutralBase;                                 // 0x0D44 (0x0004)
	int                                                StartScore;                                  // 0x0D48 (0x0004)
	int                                                StartScoreNeutral;                           // 0x0D4C (0x0004)
	int                                                RobberySpeed;                                // 0x0D50 (0x0004)
	int                                                DepositSpeed;                                // 0x0D54 (0x0004)
	int                                                MaxCarry;                                    // 0x0D58 (0x0004)
	int                                                BagLifeTime;                                 // 0x0D5C (0x0004)
	int                                                BagCoolDown;                                 // 0x0D60 (0x0004)
	int                                                WithBagKillScore;                            // 0x0D64 (0x0004)
	int                                                BagCarrierKillScore;                         // 0x0D68 (0x0004)
	int                                                DefendKillScore;                             // 0x0D6C (0x0004)
	int                                                MaxScoreCaptureScore;                        // 0x0D70 (0x0004)
	int                                                BagCaptureScore;                             // 0x0D74 (0x0004)
	int                                                BagReturnScore;                              // 0x0D78 (0x0004)
	unsigned long                                      UpdateROB : 1;                               // 0x0D7C (0x0004) [0x00000001]
	unsigned char                                      LastRedMessage;                              // 0x0D80 (0x0001)
	unsigned char                                      LastBlueMessage;                             // 0x0D81 (0x0001)
	struct FLastROBStruct                              LastROB[ 2 ];                                // 0x0D84 (0x0010)
	TArray< void* >                                    Bags;                                        // 0x0D94 (0x000C)

	// RoundOver
	// MatchInProgress
	// MatchOver

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCROBGameInfo" );

		return ClassPointer;
	};

public:
	void eventScoreCarryObject ( TArray< class ACCInstancePawn* > ScorersList, void* TheObject )
	{
		static UFunction* pfnScoreCarryObject = NULL;

		if ( !pfnScoreCarryObject )
			pfnScoreCarryObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.ScoreCarryObject" );

		ACCROBGameInfo_eventScoreCarryObject_Parms ScoreCarryObject_Parms;
		ScoreCarryObject_Parms.ScorersList = ScorersList;
		ScoreCarryObject_Parms.TheObject = TheObject;

		this->ProcessEvent( pfnScoreCarryObject, &ScoreCarryObject_Parms, NULL );
	};

	void RemoveBag ( void* Bag )
	{
		static UFunction* pfnRemoveBag = NULL;

		if ( !pfnRemoveBag )
			pfnRemoveBag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.RemoveBag" );

		ACCROBGameInfo_execRemoveBag_Parms RemoveBag_Parms;
		RemoveBag_Parms.Bag = Bag;

		this->ProcessEvent( pfnRemoveBag, &RemoveBag_Parms, NULL );
	};

	void AddBag ( void* Bag )
	{
		static UFunction* pfnAddBag = NULL;

		if ( !pfnAddBag )
			pfnAddBag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.AddBag" );

		ACCROBGameInfo_execAddBag_Parms AddBag_Parms;
		AddBag_Parms.Bag = Bag;

		this->ProcessEvent( pfnAddBag, &AddBag_Parms, NULL );
	};

	bool CaptureScore ( void* Bag, class AController* ScoreController )
	{
		static UFunction* pfnCaptureScore = NULL;

		if ( !pfnCaptureScore )
			pfnCaptureScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.CaptureScore" );

		ACCROBGameInfo_execCaptureScore_Parms CaptureScore_Parms;
		CaptureScore_Parms.Bag = Bag;
		CaptureScore_Parms.ScoreController = ScoreController;

		this->ProcessEvent( pfnCaptureScore, &CaptureScore_Parms, NULL );

		return CaptureScore_Parms.ReturnValue;
	};

	bool ReturnScore ( void* Bag )
	{
		static UFunction* pfnReturnScore = NULL;

		if ( !pfnReturnScore )
			pfnReturnScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.ReturnScore" );

		ACCROBGameInfo_execReturnScore_Parms ReturnScore_Parms;
		ReturnScore_Parms.Bag = Bag;

		this->ProcessEvent( pfnReturnScore, &ReturnScore_Parms, NULL );

		return ReturnScore_Parms.ReturnValue;
	};

	bool CheckROBScore ()
	{
		static UFunction* pfnCheckROBScore = NULL;

		if ( !pfnCheckROBScore )
			pfnCheckROBScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.CheckROBScore" );

		ACCROBGameInfo_execCheckROBScore_Parms CheckROBScore_Parms;

		this->ProcessEvent( pfnCheckROBScore, &CheckROBScore_Parms, NULL );

		return CheckROBScore_Parms.ReturnValue;
	};

	bool CheckROBGameEnd ()
	{
		static UFunction* pfnCheckROBGameEnd = NULL;

		if ( !pfnCheckROBGameEnd )
			pfnCheckROBGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.CheckROBGameEnd" );

		ACCROBGameInfo_execCheckROBGameEnd_Parms CheckROBGameEnd_Parms;

		this->ProcessEvent( pfnCheckROBGameEnd, &CheckROBGameEnd_Parms, NULL );

		return CheckROBGameEnd_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.EndGame" );

		ACCROBGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.CheckEndGame" );

		ACCROBGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.RatePlayerStart" );

		ACCROBGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
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
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.NeedSuddenDeath" );

		ACCROBGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void ReturnAllDroppedBags ()
	{
		static UFunction* pfnReturnAllDroppedBags = NULL;

		if ( !pfnReturnAllDroppedBags )
			pfnReturnAllDroppedBags = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.ReturnAllDroppedBags" );

		ACCROBGameInfo_execReturnAllDroppedBags_Parms ReturnAllDroppedBags_Parms;

		this->ProcessEvent( pfnReturnAllDroppedBags, &ReturnAllDroppedBags_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.Tick" );

		ACCROBGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	bool ClearPawnsRobberyState ()
	{
		static UFunction* pfnClearPawnsRobberyState = NULL;

		if ( !pfnClearPawnsRobberyState )
			pfnClearPawnsRobberyState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.ClearPawnsRobberyState" );

		ACCROBGameInfo_execClearPawnsRobberyState_Parms ClearPawnsRobberyState_Parms;

		pfnClearPawnsRobberyState->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnClearPawnsRobberyState, &ClearPawnsRobberyState_Parms, NULL );
		pfnClearPawnsRobberyState->FunctionFlags |= 0x400;

		return ClearPawnsRobberyState_Parms.ReturnValue;
	};

	void eventBroadcastBaseScoreNotification ()
	{
		static UFunction* pfnBroadcastBaseScoreNotification = NULL;

		if ( !pfnBroadcastBaseScoreNotification )
			pfnBroadcastBaseScoreNotification = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.BroadcastBaseScoreNotification" );

		ACCROBGameInfo_eventBroadcastBaseScoreNotification_Parms BroadcastBaseScoreNotification_Parms;

		this->ProcessEvent( pfnBroadcastBaseScoreNotification, &BroadcastBaseScoreNotification_Parms, NULL );
	};

	void eventPlayerCaptureScore ( class ACCPlayerReplicationInfo* CCPRI, int Score )
	{
		static UFunction* pfnPlayerCaptureScore = NULL;

		if ( !pfnPlayerCaptureScore )
			pfnPlayerCaptureScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.PlayerCaptureScore" );

		ACCROBGameInfo_eventPlayerCaptureScore_Parms PlayerCaptureScore_Parms;
		PlayerCaptureScore_Parms.CCPRI = CCPRI;
		PlayerCaptureScore_Parms.Score = Score;

		this->ProcessEvent( pfnPlayerCaptureScore, &PlayerCaptureScore_Parms, NULL );
	};

	void eventAllScoreAtDeposit ( class APawn* P, int Score )
	{
		static UFunction* pfnAllScoreAtDeposit = NULL;

		if ( !pfnAllScoreAtDeposit )
			pfnAllScoreAtDeposit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.AllScoreAtDeposit" );

		ACCROBGameInfo_eventAllScoreAtDeposit_Parms AllScoreAtDeposit_Parms;
		AllScoreAtDeposit_Parms.P = P;
		AllScoreAtDeposit_Parms.Score = Score;

		this->ProcessEvent( pfnAllScoreAtDeposit, &AllScoreAtDeposit_Parms, NULL );
	};

	void eventGivePlayerABag ( class APawn* P, int TeamIndex )
	{
		static UFunction* pfnGivePlayerABag = NULL;

		if ( !pfnGivePlayerABag )
			pfnGivePlayerABag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.GivePlayerABag" );

		ACCROBGameInfo_eventGivePlayerABag_Parms GivePlayerABag_Parms;
		GivePlayerABag_Parms.P = P;
		GivePlayerABag_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnGivePlayerABag, &GivePlayerABag_Parms, NULL );
	};

	void eventMaxScoreCapture ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnMaxScoreCapture = NULL;

		if ( !pfnMaxScoreCapture )
			pfnMaxScoreCapture = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.MaxScoreCapture" );

		ACCROBGameInfo_eventMaxScoreCapture_Parms MaxScoreCapture_Parms;
		MaxScoreCapture_Parms.PRI = PRI;

		this->ProcessEvent( pfnMaxScoreCapture, &MaxScoreCapture_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.StartMatch" );

		ACCROBGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.PostBeginPlay" );

		ACCROBGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBGameInfo.InitGame" );

		ACCROBGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCROBGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif