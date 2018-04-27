/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTeamInstanceGameInfo.h
// Date: 06/16/2011 @ 05:19:40.898
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTeamInstanceGameInfo_execAddPlayerScoreNotify_Parms
{
	class APlayerReplicationInfo* PRI;
	int ScoreToAdd;
	unsigned char PST;
	int ExtraData;
};

struct ACCTeamInstanceGameInfo_execCheckControllers_Parms
{
	int TeamID;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execCheckPlayers_Parms
{
	int TeamID;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execSpawnBotController_Parms
{
	class UClass* BotClass;
	struct FBotRosterEntry Entry;
	int TeamIndex;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

struct ACCTeamInstanceGameInfo_execFindTeamWinner_Parms
{
	int TeamID;
	class APawn* ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execNativeRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCTeamInstanceGameInfo_execCheckScore_Parms
{
	class APlayerReplicationInfo* Scorer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execReduceDamage_Parms
{
	int Damage; // CPF_OutParm
	class APawn* injured;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum; // CPF_OutParm
	class UClass* DamageType;
};

struct ACCTeamInstanceGameInfo_execSetFriendlyFireScale_Parms
{
	float FFS;
};// FUNC_Exec

struct ACCTeamInstanceGameInfo_execFindTeamForControllerOnGroup_Parms
{
	class ACCController* C;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execPickTeam_Parms
{
	unsigned char Num;
	class AController* C;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execSetTeam_Parms
{
	class AController* Other;
	class ACCTeamInfo* NewTeam;
	unsigned long bNewTeam : 1;
};

struct ACCTeamInstanceGameInfo_execChangeTeam_Parms
{
	class AController* Other;
	int Num;
	unsigned long bNewTeam : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execCreateTeam_Parms
{
	int TeamIndex;
};

struct ACCTeamInstanceGameInfo_execPreBeginPlay_Parms
{
};

struct ACCTeamInstanceGameInfo_execLogout_Parms
{
	class AController* Exiting;
};

struct ACCTeamInstanceGameInfo_execRemoveSomeBotsFromTeam_Parms
{
	int Count;
	int Team;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execRemoveSomeBots_Parms
{
	int Count;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execAddSomeBots_Parms
{
	int Count;
	int Team;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTeamInstanceGameInfo_execBalanceBotCount_Parms
{
	int forceDeltaCount;
};

// (0x528 - 0xD3C)
class ACCTeamInstanceGameInfo : public ACCInstanceGameInfo
{
public:
	class ACCTeamInfo*                                 Teams[ 256 ];                                // 0x0528 (0x0400)
	class UClass*                                      TeamAIType[ 256 ];                           // 0x0928 (0x0400)
	float                                              FriendlyFireScale;                           // 0x0D28 (0x0004)
	int                                                MaxTeamPlayers;                              // 0x0D2C (0x0004)
	unsigned long                                      bGameVersusBots : 1;                         // 0x0D30 (0x0004) [0x00000001]
	unsigned long                                      bFillAllTeamsWithBots : 1;                   // 0x0D30 (0x0004) [0x00000002]
	float                                              PStartTeamScore;                             // 0x0D34 (0x0004)
	float                                              PStartNoTeamPSScore;                         // 0x0D38 (0x0004)

	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTeamInstanceGameInfo" );

		return ClassPointer;
	};

public:
	void AddPlayerScoreNotify ( class APlayerReplicationInfo* PRI, int ScoreToAdd, unsigned char PST, int ExtraData )
	{
		static UFunction* pfnAddPlayerScoreNotify = NULL;

		if ( !pfnAddPlayerScoreNotify )
			pfnAddPlayerScoreNotify = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.AddPlayerScoreNotify" );

		ACCTeamInstanceGameInfo_execAddPlayerScoreNotify_Parms AddPlayerScoreNotify_Parms;
		AddPlayerScoreNotify_Parms.PRI = PRI;
		AddPlayerScoreNotify_Parms.ScoreToAdd = ScoreToAdd;
		AddPlayerScoreNotify_Parms.PST = PST;
		AddPlayerScoreNotify_Parms.ExtraData = ExtraData;

		this->ProcessEvent( pfnAddPlayerScoreNotify, &AddPlayerScoreNotify_Parms, NULL );
	};

	int CheckControllers ( int TeamID )
	{
		static UFunction* pfnCheckControllers = NULL;

		if ( !pfnCheckControllers )
			pfnCheckControllers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.CheckControllers" );

		ACCTeamInstanceGameInfo_execCheckControllers_Parms CheckControllers_Parms;
		CheckControllers_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnCheckControllers, &CheckControllers_Parms, NULL );

		return CheckControllers_Parms.ReturnValue;
	};

	int CheckPlayers ( int TeamID )
	{
		static UFunction* pfnCheckPlayers = NULL;

		if ( !pfnCheckPlayers )
			pfnCheckPlayers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.CheckPlayers" );

		ACCTeamInstanceGameInfo_execCheckPlayers_Parms CheckPlayers_Parms;
		CheckPlayers_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnCheckPlayers, &CheckPlayers_Parms, NULL );

		return CheckPlayers_Parms.ReturnValue;
	};

	void* SpawnBotController ( class UClass* BotClass, struct FBotRosterEntry Entry, int TeamIndex/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnBotController = NULL;

		if ( !pfnSpawnBotController )
			pfnSpawnBotController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.SpawnBotController" );

		ACCTeamInstanceGameInfo_execSpawnBotController_Parms SpawnBotController_Parms;
		SpawnBotController_Parms.BotClass = BotClass;
		memcpy( &SpawnBotController_Parms.Entry, &Entry, 0x90 );
		SpawnBotController_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSpawnBotController, &SpawnBotController_Parms, NULL );

		return SpawnBotController_Parms.ReturnValue;
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.InitGame" );

		ACCTeamInstanceGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

	class APawn* FindTeamWinner ( int TeamID )
	{
		static UFunction* pfnFindTeamWinner = NULL;

		if ( !pfnFindTeamWinner )
			pfnFindTeamWinner = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.FindTeamWinner" );

		ACCTeamInstanceGameInfo_execFindTeamWinner_Parms FindTeamWinner_Parms;
		FindTeamWinner_Parms.TeamID = TeamID;

		this->ProcessEvent( pfnFindTeamWinner, &FindTeamWinner_Parms, NULL );

		return FindTeamWinner_Parms.ReturnValue;
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.CheckEndGame" );

		ACCTeamInstanceGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	float NativeRatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnNativeRatePlayerStart = NULL;

		if ( !pfnNativeRatePlayerStart )
			pfnNativeRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.NativeRatePlayerStart" );

		ACCTeamInstanceGameInfo_execNativeRatePlayerStart_Parms NativeRatePlayerStart_Parms;
		NativeRatePlayerStart_Parms.P = P;
		NativeRatePlayerStart_Parms.Team = Team;
		NativeRatePlayerStart_Parms.Player = Player;

		pfnNativeRatePlayerStart->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeRatePlayerStart, &NativeRatePlayerStart_Parms, NULL );
		pfnNativeRatePlayerStart->FunctionFlags |= 0x400;

		return NativeRatePlayerStart_Parms.ReturnValue;
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer )
	{
		static UFunction* pfnCheckScore = NULL;

		if ( !pfnCheckScore )
			pfnCheckScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.CheckScore" );

		ACCTeamInstanceGameInfo_execCheckScore_Parms CheckScore_Parms;
		CheckScore_Parms.Scorer = Scorer;

		this->ProcessEvent( pfnCheckScore, &CheckScore_Parms, NULL );

		return CheckScore_Parms.ReturnValue;
	};

	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum )
	{
		static UFunction* pfnReduceDamage = NULL;

		if ( !pfnReduceDamage )
			pfnReduceDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.ReduceDamage" );

		ACCTeamInstanceGameInfo_execReduceDamage_Parms ReduceDamage_Parms;
		ReduceDamage_Parms.injured = injured;
		ReduceDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ReduceDamage_Parms.HitLocation, &HitLocation, 0xC );
		ReduceDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnReduceDamage, &ReduceDamage_Parms, NULL );

		if ( Damage )
			*Damage = ReduceDamage_Parms.Damage; // CPF_OutParm
		if ( Momentum )
			memcpy( Momentum, &ReduceDamage_Parms.Momentum, 0xC ); // CPF_OutParm
	};

	void SetFriendlyFireScale ( float FFS )
	{
		static UFunction* pfnSetFriendlyFireScale = NULL;

		if ( !pfnSetFriendlyFireScale )
			pfnSetFriendlyFireScale = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.SetFriendlyFireScale" );

		ACCTeamInstanceGameInfo_execSetFriendlyFireScale_Parms SetFriendlyFireScale_Parms;
		SetFriendlyFireScale_Parms.FFS = FFS;

		this->ProcessEvent( pfnSetFriendlyFireScale, &SetFriendlyFireScale_Parms, NULL );
	};

	unsigned char FindTeamForControllerOnGroup ( class ACCController* C )
	{
		static UFunction* pfnFindTeamForControllerOnGroup = NULL;

		if ( !pfnFindTeamForControllerOnGroup )
			pfnFindTeamForControllerOnGroup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.FindTeamForControllerOnGroup" );

		ACCTeamInstanceGameInfo_execFindTeamForControllerOnGroup_Parms FindTeamForControllerOnGroup_Parms;
		FindTeamForControllerOnGroup_Parms.C = C;

		this->ProcessEvent( pfnFindTeamForControllerOnGroup, &FindTeamForControllerOnGroup_Parms, NULL );

		return FindTeamForControllerOnGroup_Parms.ReturnValue;
	};

	unsigned char PickTeam ( unsigned char Num, class AController* C )
	{
		static UFunction* pfnPickTeam = NULL;

		if ( !pfnPickTeam )
			pfnPickTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.PickTeam" );

		ACCTeamInstanceGameInfo_execPickTeam_Parms PickTeam_Parms;
		PickTeam_Parms.Num = Num;
		PickTeam_Parms.C = C;

		this->ProcessEvent( pfnPickTeam, &PickTeam_Parms, NULL );

		return PickTeam_Parms.ReturnValue;
	};

	void SetTeam ( class AController* Other, class ACCTeamInfo* NewTeam, unsigned long bNewTeam )
	{
		static UFunction* pfnSetTeam = NULL;

		if ( !pfnSetTeam )
			pfnSetTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.SetTeam" );

		ACCTeamInstanceGameInfo_execSetTeam_Parms SetTeam_Parms;
		SetTeam_Parms.Other = Other;
		SetTeam_Parms.NewTeam = NewTeam;
		SetTeam_Parms.bNewTeam = bNewTeam;

		this->ProcessEvent( pfnSetTeam, &SetTeam_Parms, NULL );
	};

	bool ChangeTeam ( class AController* Other, int Num, unsigned long bNewTeam )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.ChangeTeam" );

		ACCTeamInstanceGameInfo_execChangeTeam_Parms ChangeTeam_Parms;
		ChangeTeam_Parms.Other = Other;
		ChangeTeam_Parms.Num = Num;
		ChangeTeam_Parms.bNewTeam = bNewTeam;

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );

		return ChangeTeam_Parms.ReturnValue;
	};

	void CreateTeam ( int TeamIndex )
	{
		static UFunction* pfnCreateTeam = NULL;

		if ( !pfnCreateTeam )
			pfnCreateTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.CreateTeam" );

		ACCTeamInstanceGameInfo_execCreateTeam_Parms CreateTeam_Parms;
		CreateTeam_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnCreateTeam, &CreateTeam_Parms, NULL );
	};

	void PreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.PreBeginPlay" );

		ACCTeamInstanceGameInfo_execPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	void Logout ( class AController* Exiting )
	{
		static UFunction* pfnLogout = NULL;

		if ( !pfnLogout )
			pfnLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.Logout" );

		ACCTeamInstanceGameInfo_execLogout_Parms Logout_Parms;
		Logout_Parms.Exiting = Exiting;

		this->ProcessEvent( pfnLogout, &Logout_Parms, NULL );
	};

	int RemoveSomeBotsFromTeam ( int Count, int Team )
	{
		static UFunction* pfnRemoveSomeBotsFromTeam = NULL;

		if ( !pfnRemoveSomeBotsFromTeam )
			pfnRemoveSomeBotsFromTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.RemoveSomeBotsFromTeam" );

		ACCTeamInstanceGameInfo_execRemoveSomeBotsFromTeam_Parms RemoveSomeBotsFromTeam_Parms;
		RemoveSomeBotsFromTeam_Parms.Count = Count;
		RemoveSomeBotsFromTeam_Parms.Team = Team;

		this->ProcessEvent( pfnRemoveSomeBotsFromTeam, &RemoveSomeBotsFromTeam_Parms, NULL );

		return RemoveSomeBotsFromTeam_Parms.ReturnValue;
	};

	int RemoveSomeBots ( int Count )
	{
		static UFunction* pfnRemoveSomeBots = NULL;

		if ( !pfnRemoveSomeBots )
			pfnRemoveSomeBots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.RemoveSomeBots" );

		ACCTeamInstanceGameInfo_execRemoveSomeBots_Parms RemoveSomeBots_Parms;
		RemoveSomeBots_Parms.Count = Count;

		this->ProcessEvent( pfnRemoveSomeBots, &RemoveSomeBots_Parms, NULL );

		return RemoveSomeBots_Parms.ReturnValue;
	};

	bool AddSomeBots ( int Count, int Team )
	{
		static UFunction* pfnAddSomeBots = NULL;

		if ( !pfnAddSomeBots )
			pfnAddSomeBots = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.AddSomeBots" );

		ACCTeamInstanceGameInfo_execAddSomeBots_Parms AddSomeBots_Parms;
		AddSomeBots_Parms.Count = Count;
		AddSomeBots_Parms.Team = Team;

		this->ProcessEvent( pfnAddSomeBots, &AddSomeBots_Parms, NULL );

		return AddSomeBots_Parms.ReturnValue;
	};

	void BalanceBotCount ( int forceDeltaCount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBalanceBotCount = NULL;

		if ( !pfnBalanceBotCount )
			pfnBalanceBotCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInstanceGameInfo.BalanceBotCount" );

		ACCTeamInstanceGameInfo_execBalanceBotCount_Parms BalanceBotCount_Parms;
		BalanceBotCount_Parms.forceDeltaCount = forceDeltaCount;

		this->ProcessEvent( pfnBalanceBotCount, &BalanceBotCount_Parms, NULL );
	};

};

UClass* ACCTeamInstanceGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif