/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTDMGameInfo.h
// Date: 06/16/2011 @ 05:19:41.373
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTDMGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCTDMGameInfo_execCheckTDMGameEnd_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTDMGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTDMGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ACCTDMGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo* Scorer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTDMGameInfo_execStartMatch_Parms
{
};

struct ACCTDMGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCTDMGameInfo_execNativeRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

// (0xD3C - 0xD44)
class ACCTDMGameInfo : public ACCTeamInstanceGameInfo
{
public:
	float                                              FirstSpawnTimeLimit;                         // 0x0D3C (0x0004)
	int                                                LastKiller;                                  // 0x0D40 (0x0004)

	// MatchOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTDMGameInfo" );

		return ClassPointer;
	};

public:
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.EndGame" );

		ACCTDMGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckTDMGameEnd ()
	{
		static UFunction* pfnCheckTDMGameEnd = NULL;

		if ( !pfnCheckTDMGameEnd )
			pfnCheckTDMGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.CheckTDMGameEnd" );

		ACCTDMGameInfo_execCheckTDMGameEnd_Parms CheckTDMGameEnd_Parms;

		this->ProcessEvent( pfnCheckTDMGameEnd, &CheckTDMGameEnd_Parms, NULL );

		return CheckTDMGameEnd_Parms.ReturnValue;
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.NeedSuddenDeath" );

		ACCTDMGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.Tick" );

		ACCTDMGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer )
	{
		static UFunction* pfnCheckScore = NULL;

		if ( !pfnCheckScore )
			pfnCheckScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.CheckScore" );

		ACCTDMGameInfo_execCheckScore_Parms CheckScore_Parms;
		CheckScore_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnCheckScore, &CheckScore_Parms, NULL );

		return CheckScore_Parms.ReturnValue;
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.StartMatch" );

		ACCTDMGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.RatePlayerStart" );

		ACCTDMGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
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
			pfnNativeRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTDMGameInfo.NativeRatePlayerStart" );

		ACCTDMGameInfo_execNativeRatePlayerStart_Parms NativeRatePlayerStart_Parms;
		NativeRatePlayerStart_Parms.P = P;
		NativeRatePlayerStart_Parms.Team = Team;
		NativeRatePlayerStart_Parms.Player = Player;

		pfnNativeRatePlayerStart->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeRatePlayerStart, &NativeRatePlayerStart_Parms, NULL );
		pfnNativeRatePlayerStart->FunctionFlags |= 0x400;

		return NativeRatePlayerStart_Parms.ReturnValue;
	};

};

UClass* ACCTDMGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif