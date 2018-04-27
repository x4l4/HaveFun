/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPVEGameInfo.h
// Date: 06/16/2011 @ 05:19:41.859
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPVEGameInfo_execDisplayHUDMessage_Parms
{
	int msgId;
};

struct ACCPVEGameInfo_execSpawnItem_Parms
{
	void* sp;
	struct FVector Loc;
	unsigned long bBoss : 1;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execAddLastScore_Parms
{
	class ACCPlayerReplicationInfo* PRI;
	int iLastScoreGain;
	unsigned char iLastScoreType;
	float iLastScoreTime;
};

struct ACCPVEGameInfo_execAddPlayerScore_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCPVEGameInfo_execNotifyKismetAboutDefCoreDestruction_Parms
{
	int defCoreIndex;
	class ACCDefenceCore* defCore;
};

struct ACCPVEGameInfo_execNotifyKismetAboutBotDeath_Parms
{
	class AController* orig;
	class AController* instig;
};

struct ACCPVEGameInfo_execIsPlayerActive_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execDestroyBotDeferred_Parms
{
	class AController* C;
};

struct ACCPVEGameInfo_execDestroyBot_Parms
{
	class AController* C;
};

struct ACCPVEGameInfo_execCachePreferredBotSpawns_Parms
{
	TArray< void* > Cache;
};

struct ACCPVEGameInfo_execPickTeam_Parms
{
	unsigned char Num;
	class AController* C;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execInBotTeam_Parms
{
	class AController* Ctrl;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execInPlayerTeam_Parms
{
	class AController* Ctrl;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execGetGRI_Parms
{
	class ACCGameReplicationInfo* ReturnValue; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execOnPlayerActionStarted_Parms
{
	class APlayerController* C;
};

struct ACCPVEGameInfo_execNeedSuddenDeath_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execNeedPlayers_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPVEGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCPVEGameInfo_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCPVEGameInfo_eventLogin_Parms
{
	struct FString Portal;
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
	class APlayerController* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPVEGameInfo_execPostBeginPlay_Parms
{
};

struct ACCPVEGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD3C - 0xD70)
class ACCPVEGameInfo : public ACCTeamInstanceGameInfo
{
public:
	TArray< void* >                                    CachedBotSpawns;                             // 0x0D3C (0x000C)
	int                                                LastUsedBotSpawn;                            // 0x0D48 (0x0004)
	struct FString                                     EndGameReason;                               // 0x0D4C (0x000C)
	int                                                OriginalOneKillScore;                        // 0x0D58 (0x0004)
	int                                                PVEDifficulty;                               // 0x0D5C (0x0004)
	int                                                PVEBotLimit;                                 // 0x0D60 (0x0004)
	TArray< class AController* >                       DestroyBotDeferredControllers;               // 0x0D64 (0x000C)

	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPVEGameInfo" );

		return ClassPointer;
	};

public:
	void DisplayHUDMessage ( int msgId )
	{
		static UFunction* pfnDisplayHUDMessage = NULL;

		if ( !pfnDisplayHUDMessage )
			pfnDisplayHUDMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.DisplayHUDMessage" );

		ACCPVEGameInfo_execDisplayHUDMessage_Parms DisplayHUDMessage_Parms;
		DisplayHUDMessage_Parms.msgId = msgId;

		this->ProcessEvent( pfnDisplayHUDMessage, &DisplayHUDMessage_Parms, NULL );
	};

	void* SpawnItem ( void* sp, struct FVector Loc/*CPF_OptionalParm*/, unsigned long bBoss/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnItem = NULL;

		if ( !pfnSpawnItem )
			pfnSpawnItem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.SpawnItem" );

		ACCPVEGameInfo_execSpawnItem_Parms SpawnItem_Parms;
		SpawnItem_Parms.sp = sp;
		memcpy( &SpawnItem_Parms.Loc, &Loc, 0xC );
		SpawnItem_Parms.bBoss = bBoss;

		this->ProcessEvent( pfnSpawnItem, &SpawnItem_Parms, NULL );

		return SpawnItem_Parms.ReturnValue;
	};

	void AddLastScore ( class ACCPlayerReplicationInfo* PRI, int iLastScoreGain, unsigned char iLastScoreType, float iLastScoreTime )
	{
		static UFunction* pfnAddLastScore = NULL;

		if ( !pfnAddLastScore )
			pfnAddLastScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.AddLastScore" );

		ACCPVEGameInfo_execAddLastScore_Parms AddLastScore_Parms;
		AddLastScore_Parms.PRI = PRI;
		AddLastScore_Parms.iLastScoreGain = iLastScoreGain;
		AddLastScore_Parms.iLastScoreType = iLastScoreType;
		AddLastScore_Parms.iLastScoreTime = iLastScoreTime;

		this->ProcessEvent( pfnAddLastScore, &AddLastScore_Parms, NULL );
	};

	void AddPlayerScore ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST/*CPF_OptionalParm*/, int ExtraData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddPlayerScore = NULL;

		if ( !pfnAddPlayerScore )
			pfnAddPlayerScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.AddPlayerScore" );

		ACCPVEGameInfo_execAddPlayerScore_Parms AddPlayerScore_Parms;
		AddPlayerScore_Parms.PRI = PRI;
		AddPlayerScore_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScore_Parms.PST = PST;
		AddPlayerScore_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScore, &AddPlayerScore_Parms, NULL );
	};

	void NotifyKismetAboutDefCoreDestruction ( int defCoreIndex, class ACCDefenceCore* defCore )
	{
		static UFunction* pfnNotifyKismetAboutDefCoreDestruction = NULL;

		if ( !pfnNotifyKismetAboutDefCoreDestruction )
			pfnNotifyKismetAboutDefCoreDestruction = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.NotifyKismetAboutDefCoreDestruction" );

		ACCPVEGameInfo_execNotifyKismetAboutDefCoreDestruction_Parms NotifyKismetAboutDefCoreDestruction_Parms;
		NotifyKismetAboutDefCoreDestruction_Parms.defCoreIndex = defCoreIndex;
		NotifyKismetAboutDefCoreDestruction_Parms.defCore = defCore;

		this->ProcessEvent( pfnNotifyKismetAboutDefCoreDestruction, &NotifyKismetAboutDefCoreDestruction_Parms, NULL );
	};

	void NotifyKismetAboutBotDeath ( class AController* orig, class AController* instig )
	{
		static UFunction* pfnNotifyKismetAboutBotDeath = NULL;

		if ( !pfnNotifyKismetAboutBotDeath )
			pfnNotifyKismetAboutBotDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.NotifyKismetAboutBotDeath" );

		ACCPVEGameInfo_execNotifyKismetAboutBotDeath_Parms NotifyKismetAboutBotDeath_Parms;
		NotifyKismetAboutBotDeath_Parms.orig = orig;
		NotifyKismetAboutBotDeath_Parms.instig = instig;

		this->ProcessEvent( pfnNotifyKismetAboutBotDeath, &NotifyKismetAboutBotDeath_Parms, NULL );
	};

	bool IsPlayerActive ( class APawn* P )
	{
		static UFunction* pfnIsPlayerActive = NULL;

		if ( !pfnIsPlayerActive )
			pfnIsPlayerActive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.IsPlayerActive" );

		ACCPVEGameInfo_execIsPlayerActive_Parms IsPlayerActive_Parms;
		IsPlayerActive_Parms.P = P;

		this->ProcessEvent( pfnIsPlayerActive, &IsPlayerActive_Parms, NULL );

		return IsPlayerActive_Parms.ReturnValue;
	};

	void DestroyBotDeferred ( class AController* C )
	{
		static UFunction* pfnDestroyBotDeferred = NULL;

		if ( !pfnDestroyBotDeferred )
			pfnDestroyBotDeferred = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.DestroyBotDeferred" );

		ACCPVEGameInfo_execDestroyBotDeferred_Parms DestroyBotDeferred_Parms;
		DestroyBotDeferred_Parms.C = C;

		this->ProcessEvent( pfnDestroyBotDeferred, &DestroyBotDeferred_Parms, NULL );
	};

	void DestroyBot ( class AController* C )
	{
		static UFunction* pfnDestroyBot = NULL;

		if ( !pfnDestroyBot )
			pfnDestroyBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.DestroyBot" );

		ACCPVEGameInfo_execDestroyBot_Parms DestroyBot_Parms;
		DestroyBot_Parms.C = C;

		this->ProcessEvent( pfnDestroyBot, &DestroyBot_Parms, NULL );
	};

	void CachePreferredBotSpawns ( TArray< void* > Cache )
	{
		static UFunction* pfnCachePreferredBotSpawns = NULL;

		if ( !pfnCachePreferredBotSpawns )
			pfnCachePreferredBotSpawns = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.CachePreferredBotSpawns" );

		ACCPVEGameInfo_execCachePreferredBotSpawns_Parms CachePreferredBotSpawns_Parms;
		CachePreferredBotSpawns_Parms.Cache = Cache;

		this->ProcessEvent( pfnCachePreferredBotSpawns, &CachePreferredBotSpawns_Parms, NULL );
	};

	unsigned char PickTeam ( unsigned char Num, class AController* C )
	{
		static UFunction* pfnPickTeam = NULL;

		if ( !pfnPickTeam )
			pfnPickTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.PickTeam" );

		ACCPVEGameInfo_execPickTeam_Parms PickTeam_Parms;
		PickTeam_Parms.Num = Num;
		PickTeam_Parms.C = C;

		this->ProcessEvent( pfnPickTeam, &PickTeam_Parms, NULL );

		return PickTeam_Parms.ReturnValue;
	};

	bool InBotTeam ( class AController* Ctrl )
	{
		static UFunction* pfnInBotTeam = NULL;

		if ( !pfnInBotTeam )
			pfnInBotTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.InBotTeam" );

		ACCPVEGameInfo_execInBotTeam_Parms InBotTeam_Parms;
		InBotTeam_Parms.Ctrl = Ctrl;

		this->ProcessEvent( pfnInBotTeam, &InBotTeam_Parms, NULL );

		return InBotTeam_Parms.ReturnValue;
	};

	bool InPlayerTeam ( class AController* Ctrl )
	{
		static UFunction* pfnInPlayerTeam = NULL;

		if ( !pfnInPlayerTeam )
			pfnInPlayerTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.InPlayerTeam" );

		ACCPVEGameInfo_execInPlayerTeam_Parms InPlayerTeam_Parms;
		InPlayerTeam_Parms.Ctrl = Ctrl;

		this->ProcessEvent( pfnInPlayerTeam, &InPlayerTeam_Parms, NULL );

		return InPlayerTeam_Parms.ReturnValue;
	};

	class ACCGameReplicationInfo* GetGRI ()
	{
		static UFunction* pfnGetGRI = NULL;

		if ( !pfnGetGRI )
			pfnGetGRI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.GetGRI" );

		ACCPVEGameInfo_execGetGRI_Parms GetGRI_Parms;

		this->ProcessEvent( pfnGetGRI, &GetGRI_Parms, NULL );

		return GetGRI_Parms.ReturnValue;
	};

	void OnPlayerActionStarted ( class APlayerController* C )
	{
		static UFunction* pfnOnPlayerActionStarted = NULL;

		if ( !pfnOnPlayerActionStarted )
			pfnOnPlayerActionStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.OnPlayerActionStarted" );

		ACCPVEGameInfo_execOnPlayerActionStarted_Parms OnPlayerActionStarted_Parms;
		OnPlayerActionStarted_Parms.C = C;

		this->ProcessEvent( pfnOnPlayerActionStarted, &OnPlayerActionStarted_Parms, NULL );
	};

	bool NeedSuddenDeath ()
	{
		static UFunction* pfnNeedSuddenDeath = NULL;

		if ( !pfnNeedSuddenDeath )
			pfnNeedSuddenDeath = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.NeedSuddenDeath" );

		ACCPVEGameInfo_execNeedSuddenDeath_Parms NeedSuddenDeath_Parms;

		this->ProcessEvent( pfnNeedSuddenDeath, &NeedSuddenDeath_Parms, NULL );

		return NeedSuddenDeath_Parms.ReturnValue;
	};

	bool NeedPlayers ()
	{
		static UFunction* pfnNeedPlayers = NULL;

		if ( !pfnNeedPlayers )
			pfnNeedPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.NeedPlayers" );

		ACCPVEGameInfo_execNeedPlayers_Parms NeedPlayers_Parms;

		this->ProcessEvent( pfnNeedPlayers, &NeedPlayers_Parms, NULL );

		return NeedPlayers_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.Killed" );

		ACCPVEGameInfo_execKilled_Parms Killed_Parms;
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
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.FindPlayerStart" );

		ACCPVEGameInfo_execFindPlayerStart_Parms FindPlayerStart_Parms;
		FindPlayerStart_Parms.Player = Player;
		FindPlayerStart_Parms.InTeam = InTeam;
		memcpy( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

		this->ProcessEvent( pfnFindPlayerStart, &FindPlayerStart_Parms, NULL );

		return FindPlayerStart_Parms.ReturnValue;
	};

	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnLogin = NULL;

		if ( !pfnLogin )
			pfnLogin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.Login" );

		ACCPVEGameInfo_eventLogin_Parms Login_Parms;
		memcpy( &Login_Parms.Portal, &Portal, 0xC );
		memcpy( &Login_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnLogin, &Login_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &Login_Parms.ErrorMessage, 0xC ); // CPF_OutParm

		return Login_Parms.ReturnValue;
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.PostBeginPlay" );

		ACCPVEGameInfo_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPVEGameInfo.InitGame" );

		ACCPVEGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCPVEGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif