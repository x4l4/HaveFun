/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCKTBGameInfo.h
// Date: 06/16/2011 @ 05:19:42.59
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCKTBGameInfo_execPatchLootTables_Parms
{
	class UClass* Item;
	float Prob;
	int Count;
};

struct ACCKTBGameInfo_execl_SpawnItem_Parms
{
	void* bot;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCKTBGameInfo_execEndGameTimer_Parms
{
};

struct ACCKTBGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCKTBGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCKTBGameInfo_execCheck_BossKilled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCKTBGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCKTBGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCKTBGameInfo_execReset_Parms
{
};

struct ACCKTBGameInfo_execStartMatch_Parms
{
};

struct ACCKTBGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCKTBGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD70 - 0xDAC)
class ACCKTBGameInfo : public ACCPVEGameInfo
{
public:
	unsigned long                                      bBossKilled : 1;                             // 0x0D70 (0x0004) [0x00000001]
	class AController*                                 Boss;                                        // 0x0D74 (0x0004)
	TArray< struct FLootTableEntry >                   LT_Common;                                   // 0x0D78 (0x000C)
	TArray< struct FLootTableEntry >                   LT_SpecOps;                                  // 0x0D84 (0x000C)
	TArray< struct FLootTableEntry >                   LT_Lieutenant;                               // 0x0D90 (0x000C)
	TArray< struct FLootTableEntry >                   LT_Boss;                                     // 0x0D9C (0x000C)
	int                                                NumPlayersLastFrame;                         // 0x0DA8 (0x0004)

	// MatchOver
	// MatchInProgress
	// PendingMatch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCKTBGameInfo" );

		return ClassPointer;
	};

public:
	void PatchLootTables ( class UClass* Item, float Prob/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPatchLootTables = NULL;

		if ( !pfnPatchLootTables )
			pfnPatchLootTables = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.PatchLootTables" );

		ACCKTBGameInfo_execPatchLootTables_Parms PatchLootTables_Parms;
		PatchLootTables_Parms.Item = Item;
		PatchLootTables_Parms.Prob = Prob;
		PatchLootTables_Parms.Count = Count;

		this->ProcessEvent( pfnPatchLootTables, &PatchLootTables_Parms, NULL );
	};

	void* l_SpawnItem ( void* bot )
	{
		static UFunction* pfnl_SpawnItem = NULL;

		if ( !pfnl_SpawnItem )
			pfnl_SpawnItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.l_SpawnItem" );

		ACCKTBGameInfo_execl_SpawnItem_Parms l_SpawnItem_Parms;
		l_SpawnItem_Parms.bot = bot;

		this->ProcessEvent( pfnl_SpawnItem, &l_SpawnItem_Parms, NULL );

		return l_SpawnItem_Parms.ReturnValue;
	};

	void EndGameTimer ()
	{
		static UFunction* pfnEndGameTimer = NULL;

		if ( !pfnEndGameTimer )
			pfnEndGameTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.EndGameTimer" );

		ACCKTBGameInfo_execEndGameTimer_Parms EndGameTimer_Parms;

		this->ProcessEvent( pfnEndGameTimer, &EndGameTimer_Parms, NULL );
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.EndGame" );

		ACCKTBGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.CheckEndGame" );

		ACCKTBGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	bool Check_BossKilled ()
	{
		static UFunction* pfnCheck_BossKilled = NULL;

		if ( !pfnCheck_BossKilled )
			pfnCheck_BossKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.Check_BossKilled" );

		ACCKTBGameInfo_execCheck_BossKilled_Parms Check_BossKilled_Parms;

		this->ProcessEvent( pfnCheck_BossKilled, &Check_BossKilled_Parms, NULL );

		return Check_BossKilled_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.RatePlayerStart" );

		ACCKTBGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.Killed" );

		ACCKTBGameInfo_execKilled_Parms Killed_Parms;
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
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.Reset" );

		ACCKTBGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.StartMatch" );

		ACCKTBGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.PostBeginPlay" );

		ACCKTBGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCKTBGameInfo.InitGame" );

		ACCKTBGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCKTBGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif