/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCSurvivalGameInfo2.h
// Date: 06/16/2011 @ 05:19:42.29
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCSurvivalGameInfo2_execEndGameTimer_Parms
{
};

struct ACCSurvivalGameInfo2_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCSurvivalGameInfo2_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo2_execCheck_CoreDefended_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo2_execCheck_CoreDestroyed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo2_execPatchLootTables_Parms
{
	class UClass* Item;
	float Prob;
	int Count;
};

struct ACCSurvivalGameInfo2_execl_SpawnItem_Parms
{
	void* bot;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo2_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCSurvivalGameInfo2_execReset_Parms
{
};

struct ACCSurvivalGameInfo2_execStartMatch_Parms
{
};

struct ACCSurvivalGameInfo2_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCSurvivalGameInfo2_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD70 - 0xD9C)
class ACCSurvivalGameInfo2 : public ACCPVEGameInfo
{
public:
	class ACCDefenceCore*                              defCore;                                     // 0x0D70 (0x0004)
	TArray< struct FLootTableEntry >                   LT_Common;                                   // 0x0D74 (0x000C)
	TArray< struct FLootTableEntry >                   LT_Courier;                                  // 0x0D80 (0x000C)
	TArray< struct FLootTableEntry >                   LT_Boss;                                     // 0x0D8C (0x000C)
	unsigned long                                      bCourierSpawned : 1;                         // 0x0D98 (0x0004) [0x00000001]

	// MatchOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCSurvivalGameInfo2" );

		return ClassPointer;
	};

public:
	void EndGameTimer ()
	{
		static UFunction* pfnEndGameTimer = NULL;

		if ( !pfnEndGameTimer )
			pfnEndGameTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.EndGameTimer" );

		ACCSurvivalGameInfo2_execEndGameTimer_Parms EndGameTimer_Parms;

		this->ProcessEvent( pfnEndGameTimer, &EndGameTimer_Parms, NULL );
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.EndGame" );

		ACCSurvivalGameInfo2_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.CheckEndGame" );

		ACCSurvivalGameInfo2_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	bool Check_CoreDefended ()
	{
		static UFunction* pfnCheck_CoreDefended = NULL;

		if ( !pfnCheck_CoreDefended )
			pfnCheck_CoreDefended = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.Check_CoreDefended" );

		ACCSurvivalGameInfo2_execCheck_CoreDefended_Parms Check_CoreDefended_Parms;

		this->ProcessEvent( pfnCheck_CoreDefended, &Check_CoreDefended_Parms, NULL );

		return Check_CoreDefended_Parms.ReturnValue;
	};

	bool Check_CoreDestroyed ()
	{
		static UFunction* pfnCheck_CoreDestroyed = NULL;

		if ( !pfnCheck_CoreDestroyed )
			pfnCheck_CoreDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.Check_CoreDestroyed" );

		ACCSurvivalGameInfo2_execCheck_CoreDestroyed_Parms Check_CoreDestroyed_Parms;

		this->ProcessEvent( pfnCheck_CoreDestroyed, &Check_CoreDestroyed_Parms, NULL );

		return Check_CoreDestroyed_Parms.ReturnValue;
	};

	void PatchLootTables ( class UClass* Item, float Prob/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPatchLootTables = NULL;

		if ( !pfnPatchLootTables )
			pfnPatchLootTables = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.PatchLootTables" );

		ACCSurvivalGameInfo2_execPatchLootTables_Parms PatchLootTables_Parms;
		PatchLootTables_Parms.Item = Item;
		PatchLootTables_Parms.Prob = Prob;
		PatchLootTables_Parms.Count = Count;

		this->ProcessEvent( pfnPatchLootTables, &PatchLootTables_Parms, NULL );
	};

	void* l_SpawnItem ( void* bot )
	{
		static UFunction* pfnl_SpawnItem = NULL;

		if ( !pfnl_SpawnItem )
			pfnl_SpawnItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.l_SpawnItem" );

		ACCSurvivalGameInfo2_execl_SpawnItem_Parms l_SpawnItem_Parms;
		l_SpawnItem_Parms.bot = bot;

		this->ProcessEvent( pfnl_SpawnItem, &l_SpawnItem_Parms, NULL );

		return l_SpawnItem_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.Killed" );

		ACCSurvivalGameInfo2_execKilled_Parms Killed_Parms;
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
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.Reset" );

		ACCSurvivalGameInfo2_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.StartMatch" );

		ACCSurvivalGameInfo2_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.PostBeginPlay" );

		ACCSurvivalGameInfo2_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo2.InitGame" );

		ACCSurvivalGameInfo2_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCSurvivalGameInfo2::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif