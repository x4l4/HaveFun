/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCSoloGameInfo.h
// Date: 06/16/2011 @ 05:19:42.49
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCSoloGameInfo_execOnPlayerActionStarted_Parms
{
	class APlayerController* C;
};

struct ACCSoloGameInfo_execDisplayHUDMessage_Parms
{
	int msgId;
};

struct ACCSoloGameInfo_execCheckForUnguardedSpawnPoints_Parms
{
};

struct ACCSoloGameInfo_execCheckForGuardedSpawnPoints_Parms
{
};

struct ACCSoloGameInfo_execIsPlayersNearSpawnSpot_Parms
{
	struct FVector Spot;
	float Radius;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSoloGameInfo_execSpawnItem_Parms
{
	void* sp;
	struct FVector Loc;
	unsigned long bBoss : 1;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCSoloGameInfo_execUpdatePlayerQuestItemsInfo_Parms
{
	int PlayerIdx;
};

struct ACCSoloGameInfo_execevtPlayerTouchedTheItem_Parms
{
	void* Item;
	class APlayerController* Player;
};

struct ACCSoloGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCSoloGameInfo_execIsPlayerActive_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSoloGameInfo_execOnClientFinishedLoading_Parms
{
	class AController* Player;
};

struct ACCSoloGameInfo_execLogout_Parms
{
	class AController* PC;
};

struct ACCSoloGameInfo_eventLogin_Parms
{
	struct FString Portal;
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
	class APlayerController* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCSoloGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCSoloGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCSoloGameInfo_execRestartPlayer_Parms
{
	class AController* Player;
};

struct ACCSoloGameInfo_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCSoloGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCSoloGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD70 - 0xDF4)
class ACCSoloGameInfo : public ACCPVEGameInfo
{
public:
	TArray< void* >                                    GuardedSpawnPoints;                          // 0x0D70 (0x000C)
	TArray< void* >                                    GuardedSpawnPointsAwaitingRespawn;           // 0x0D7C (0x000C)
	TArray< void* >                                    UnguardedSpawnPoints;                        // 0x0D88 (0x000C)
	TArray< void* >                                    DisabledUnguardedSpawnPoints;                // 0x0D94 (0x000C)
	TArray< struct FSoloPlayerInfo >                   Players;                                     // 0x0DA0 (0x000C)
	int                                                NumUnguardedQuestItems;                      // 0x0DAC (0x0004)
	int                                                MaxNumUnguardedQuestItems;                   // 0x0DB0 (0x0004)
	float                                              GuardedSpawnPointRespawnCooldown;            // 0x0DB4 (0x0004)
	class UClass*                                      QuestItemClasses[ 12 ];                      // 0x0DB8 (0x0030)
	float                                              MatchInProgressFirstTickTime;                // 0x0DE8 (0x0004)
	int                                                SessionLimit;                                // 0x0DEC (0x0004)
	float                                              LastBossAnnounceTime;                        // 0x0DF0 (0x0004)

	// MatchOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCSoloGameInfo" );

		return ClassPointer;
	};

public:
	void OnPlayerActionStarted ( class APlayerController* C )
	{
		static UFunction* pfnOnPlayerActionStarted = NULL;

		if ( !pfnOnPlayerActionStarted )
			pfnOnPlayerActionStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.OnPlayerActionStarted" );

		ACCSoloGameInfo_execOnPlayerActionStarted_Parms OnPlayerActionStarted_Parms;
		OnPlayerActionStarted_Parms.C = C;

		this->ProcessEvent( pfnOnPlayerActionStarted, &OnPlayerActionStarted_Parms, NULL );
	};

	void DisplayHUDMessage ( int msgId )
	{
		static UFunction* pfnDisplayHUDMessage = NULL;

		if ( !pfnDisplayHUDMessage )
			pfnDisplayHUDMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.DisplayHUDMessage" );

		ACCSoloGameInfo_execDisplayHUDMessage_Parms DisplayHUDMessage_Parms;
		DisplayHUDMessage_Parms.msgId = msgId;

		this->ProcessEvent( pfnDisplayHUDMessage, &DisplayHUDMessage_Parms, NULL );
	};

	void CheckForUnguardedSpawnPoints ()
	{
		static UFunction* pfnCheckForUnguardedSpawnPoints = NULL;

		if ( !pfnCheckForUnguardedSpawnPoints )
			pfnCheckForUnguardedSpawnPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.CheckForUnguardedSpawnPoints" );

		ACCSoloGameInfo_execCheckForUnguardedSpawnPoints_Parms CheckForUnguardedSpawnPoints_Parms;

		this->ProcessEvent( pfnCheckForUnguardedSpawnPoints, &CheckForUnguardedSpawnPoints_Parms, NULL );
	};

	void CheckForGuardedSpawnPoints ()
	{
		static UFunction* pfnCheckForGuardedSpawnPoints = NULL;

		if ( !pfnCheckForGuardedSpawnPoints )
			pfnCheckForGuardedSpawnPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.CheckForGuardedSpawnPoints" );

		ACCSoloGameInfo_execCheckForGuardedSpawnPoints_Parms CheckForGuardedSpawnPoints_Parms;

		this->ProcessEvent( pfnCheckForGuardedSpawnPoints, &CheckForGuardedSpawnPoints_Parms, NULL );
	};

	bool IsPlayersNearSpawnSpot ( struct FVector Spot, float Radius )
	{
		static UFunction* pfnIsPlayersNearSpawnSpot = NULL;

		if ( !pfnIsPlayersNearSpawnSpot )
			pfnIsPlayersNearSpawnSpot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.IsPlayersNearSpawnSpot" );

		ACCSoloGameInfo_execIsPlayersNearSpawnSpot_Parms IsPlayersNearSpawnSpot_Parms;
		memcpy( &IsPlayersNearSpawnSpot_Parms.Spot, &Spot, 0xC );
		IsPlayersNearSpawnSpot_Parms.Radius = Radius;

		this->ProcessEvent( pfnIsPlayersNearSpawnSpot, &IsPlayersNearSpawnSpot_Parms, NULL );

		return IsPlayersNearSpawnSpot_Parms.ReturnValue;
	};

	void* SpawnItem ( void* sp, struct FVector Loc/*CPF_OptionalParm*/, unsigned long bBoss/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnItem = NULL;

		if ( !pfnSpawnItem )
			pfnSpawnItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.SpawnItem" );

		ACCSoloGameInfo_execSpawnItem_Parms SpawnItem_Parms;
		SpawnItem_Parms.sp = sp;
		memcpy( &SpawnItem_Parms.Loc, &Loc, 0xC );
		SpawnItem_Parms.bBoss = bBoss;

		this->ProcessEvent( pfnSpawnItem, &SpawnItem_Parms, NULL );

		return SpawnItem_Parms.ReturnValue;
	};

	void UpdatePlayerQuestItemsInfo ( int PlayerIdx )
	{
		static UFunction* pfnUpdatePlayerQuestItemsInfo = NULL;

		if ( !pfnUpdatePlayerQuestItemsInfo )
			pfnUpdatePlayerQuestItemsInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.UpdatePlayerQuestItemsInfo" );

		ACCSoloGameInfo_execUpdatePlayerQuestItemsInfo_Parms UpdatePlayerQuestItemsInfo_Parms;
		UpdatePlayerQuestItemsInfo_Parms.PlayerIdx = PlayerIdx;

		this->ProcessEvent( pfnUpdatePlayerQuestItemsInfo, &UpdatePlayerQuestItemsInfo_Parms, NULL );
	};

	void evtPlayerTouchedTheItem ( void* Item, class APlayerController* Player )
	{
		static UFunction* pfnevtPlayerTouchedTheItem = NULL;

		if ( !pfnevtPlayerTouchedTheItem )
			pfnevtPlayerTouchedTheItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.evtPlayerTouchedTheItem" );

		ACCSoloGameInfo_execevtPlayerTouchedTheItem_Parms evtPlayerTouchedTheItem_Parms;
		evtPlayerTouchedTheItem_Parms.Item = Item;
		evtPlayerTouchedTheItem_Parms.Player = Player;

		this->ProcessEvent( pfnevtPlayerTouchedTheItem, &evtPlayerTouchedTheItem_Parms, NULL );
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.EndGame" );

		ACCSoloGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool IsPlayerActive ( class APawn* P )
	{
		static UFunction* pfnIsPlayerActive = NULL;

		if ( !pfnIsPlayerActive )
			pfnIsPlayerActive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.IsPlayerActive" );

		ACCSoloGameInfo_execIsPlayerActive_Parms IsPlayerActive_Parms;
		IsPlayerActive_Parms.P = P;

		this->ProcessEvent( pfnIsPlayerActive, &IsPlayerActive_Parms, NULL );

		return IsPlayerActive_Parms.ReturnValue;
	};

	void OnClientFinishedLoading ( class AController* Player )
	{
		static UFunction* pfnOnClientFinishedLoading = NULL;

		if ( !pfnOnClientFinishedLoading )
			pfnOnClientFinishedLoading = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.OnClientFinishedLoading" );

		ACCSoloGameInfo_execOnClientFinishedLoading_Parms OnClientFinishedLoading_Parms;
		OnClientFinishedLoading_Parms.Player = Player;

		this->ProcessEvent( pfnOnClientFinishedLoading, &OnClientFinishedLoading_Parms, NULL );
	};

	void Logout ( class AController* PC )
	{
		static UFunction* pfnLogout = NULL;

		if ( !pfnLogout )
			pfnLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.Logout" );

		ACCSoloGameInfo_execLogout_Parms Logout_Parms;
		Logout_Parms.PC = PC;

		this->ProcessEvent( pfnLogout, &Logout_Parms, NULL );
	};

	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnLogin = NULL;

		if ( !pfnLogin )
			pfnLogin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.Login" );

		ACCSoloGameInfo_eventLogin_Parms Login_Parms;
		memcpy( &Login_Parms.Portal, &Portal, 0xC );
		memcpy( &Login_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnLogin, &Login_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &Login_Parms.ErrorMessage, 0xC ); // CPF_OutParm

		return Login_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.Killed" );

		ACCSoloGameInfo_execKilled_Parms Killed_Parms;
		Killed_Parms.Killer = Killer;
		Killed_Parms.KilledPlayer = KilledPlayer;
		Killed_Parms.KilledPawn = KilledPawn;
		Killed_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnKilled, &Killed_Parms, NULL );
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.RatePlayerStart" );

		ACCSoloGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void RestartPlayer ( class AController* Player )
	{
		static UFunction* pfnRestartPlayer = NULL;

		if ( !pfnRestartPlayer )
			pfnRestartPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.RestartPlayer" );

		ACCSoloGameInfo_execRestartPlayer_Parms RestartPlayer_Parms;
		RestartPlayer_Parms.Player = Player;

		this->ProcessEvent( pfnRestartPlayer, &RestartPlayer_Parms, NULL );
	};

	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/, struct FString IncomingName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPlayerStart = NULL;

		if ( !pfnFindPlayerStart )
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.FindPlayerStart" );

		ACCSoloGameInfo_execFindPlayerStart_Parms FindPlayerStart_Parms;
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
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.PostBeginPlay" );

		ACCSoloGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSoloGameInfo.InitGame" );

		ACCSoloGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCSoloGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif