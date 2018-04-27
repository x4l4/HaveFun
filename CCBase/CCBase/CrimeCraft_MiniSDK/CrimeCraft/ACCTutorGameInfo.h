/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorGameInfo.h
// Date: 06/16/2011 @ 05:19:41.980
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTutorGameInfo_execEndGameTimer_Parms
{
};

struct ACCTutorGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCTutorGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTutorGameInfo_execPatchLootTables_Parms
{
	class UClass* Item;
	float Prob;
	int Count;
};

struct ACCTutorGameInfo_execl_SpawnItem_Parms
{
	void* bot;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCTutorGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCTutorGameInfo_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCTutorGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0xD70 - 0xD80)
class ACCTutorGameInfo : public ACCPVEGameInfo
{
public:
	int                                                NumBotsLeft;                                 // 0x0D70 (0x0004)
	TArray< struct FLootTableEntry >                   LT_Common;                                   // 0x0D74 (0x000C)

	// MatchOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorGameInfo" );

		return ClassPointer;
	};

public:
	void EndGameTimer ()
	{
		static UFunction* pfnEndGameTimer = NULL;

		if ( !pfnEndGameTimer )
			pfnEndGameTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.EndGameTimer" );

		ACCTutorGameInfo_execEndGameTimer_Parms EndGameTimer_Parms;

		this->ProcessEvent( pfnEndGameTimer, &EndGameTimer_Parms, NULL );
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.EndGame" );

		ACCTutorGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.CheckEndGame" );

		ACCTutorGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	void PatchLootTables ( class UClass* Item, float Prob/*CPF_OptionalParm*/, int Count/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPatchLootTables = NULL;

		if ( !pfnPatchLootTables )
			pfnPatchLootTables = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.PatchLootTables" );

		ACCTutorGameInfo_execPatchLootTables_Parms PatchLootTables_Parms;
		PatchLootTables_Parms.Item = Item;
		PatchLootTables_Parms.Prob = Prob;
		PatchLootTables_Parms.Count = Count;

		this->ProcessEvent( pfnPatchLootTables, &PatchLootTables_Parms, NULL );
	};

	void* l_SpawnItem ( void* bot )
	{
		static UFunction* pfnl_SpawnItem = NULL;

		if ( !pfnl_SpawnItem )
			pfnl_SpawnItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.l_SpawnItem" );

		ACCTutorGameInfo_execl_SpawnItem_Parms l_SpawnItem_Parms;
		l_SpawnItem_Parms.bot = bot;

		this->ProcessEvent( pfnl_SpawnItem, &l_SpawnItem_Parms, NULL );

		return l_SpawnItem_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.Killed" );

		ACCTutorGameInfo_execKilled_Parms Killed_Parms;
		Killed_Parms.Killer = Killer;
		Killed_Parms.KilledPlayer = KilledPlayer;
		Killed_Parms.KilledPawn = KilledPawn;
		Killed_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnKilled, &Killed_Parms, NULL );
	};

	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/, struct FString IncomingName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPlayerStart = NULL;

		if ( !pfnFindPlayerStart )
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.FindPlayerStart" );

		ACCTutorGameInfo_execFindPlayerStart_Parms FindPlayerStart_Parms;
		FindPlayerStart_Parms.Player = Player;
		FindPlayerStart_Parms.InTeam = InTeam;
		memcpy( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

		this->ProcessEvent( pfnFindPlayerStart, &FindPlayerStart_Parms, NULL );

		return FindPlayerStart_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorGameInfo.PostBeginPlay" );

		ACCTutorGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCTutorGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif