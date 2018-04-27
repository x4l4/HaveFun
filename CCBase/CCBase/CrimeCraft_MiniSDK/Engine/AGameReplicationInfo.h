/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:39.415
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AGameReplicationInfo_eventShouldShowGore_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AGameReplicationInfo_execIsCoopMultiplayerGame_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameReplicationInfo_execIsMultiplayerGame_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameReplicationInfo_execEndGame_Parms
{
};

struct AGameReplicationInfo_execStartMatch_Parms
{
};

struct AGameReplicationInfo_execCleanupGameDataStore_Parms
{
};

struct AGameReplicationInfo_execInitializeGameDataStore_Parms
{
};

struct AGameReplicationInfo_eventReplicatedDataBinding_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AGameReplicationInfo_execSortPRIArray_Parms
{
};

struct AGameReplicationInfo_execInOrder_Parms
{
	class APlayerReplicationInfo* P1;
	class APlayerReplicationInfo* P2;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AGameReplicationInfo_execGetPRIArray_Parms
{
	TArray< class APlayerReplicationInfo* > pris; // CPF_OutParm
};

struct AGameReplicationInfo_execSetTeam_Parms
{
	int Index;
	class ATeamInfo* TI;
};

struct AGameReplicationInfo_execRemovePRI_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct AGameReplicationInfo_execAddPRI_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct AGameReplicationInfo_execFindPlayerByID_Parms
{
	int PlayerID;
	class APlayerReplicationInfo* ReturnValue; // CPF_ReturnParm
};

struct AGameReplicationInfo_execOnSameTeam_Parms
{
	class AActor* A;
	class AActor* B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct AGameReplicationInfo_eventTimer_Parms
{
};// FUNC_Event

struct AGameReplicationInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct AGameReplicationInfo_execReset_Parms
{
};

struct AGameReplicationInfo_execReceivedGameClass_Parms
{
};

struct AGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AGameReplicationInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x1BC - 0x250)
class AGameReplicationInfo : public AReplicationInfo
{
public:
	class UClass*                                      GameClass;                                   // 0x01BC (0x0004)
	void*                                              CurrentGameData;                             // 0x01C0 (0x0004)
	unsigned long                                      bStopCountDown : 1;                          // 0x01C4 (0x0004) [0x00000001]
	unsigned long                                      bMatchHasBegun : 1;                          // 0x01C4 (0x0004) [0x00000002]
	unsigned long                                      bMatchIsOver : 1;                            // 0x01C4 (0x0004) [0x00000004]
	unsigned long                                      bNeedsOnlineCleanup : 1;                     // 0x01C4 (0x0004) [0x00000008]
	unsigned long                                      bIsArbitrated : 1;                           // 0x01C4 (0x0004) [0x00000010]
	unsigned long                                      bTrackStats : 1;                             // 0x01C4 (0x0004) [0x00000020]
	int                                                RemainingTime;                               // 0x01C8 (0x0004)
	int                                                ElapsedTime;                                 // 0x01CC (0x0004)
	int                                                RemainingMinute;                             // 0x01D0 (0x0004)
	float                                              SecondCount;                                 // 0x01D4 (0x0004)
	int                                                GoalScore;                                   // 0x01D8 (0x0004)
	int                                                TimeLimit;                                   // 0x01DC (0x0004)
	int                                                MaxLives;                                    // 0x01E0 (0x0004)
	TArray< class ATeamInfo* >                         Teams;                                       // 0x01E4 (0x000C)
	struct FString                                     ServerName;                                  // 0x01F0 (0x000C)
	struct FString                                     ShortName;                                   // 0x01FC (0x000C)
	struct FString                                     AdminName;                                   // 0x0208 (0x000C)
	struct FString                                     AdminEmail;                                  // 0x0214 (0x000C)
	int                                                ServerRegion;                                // 0x0220 (0x0004)
	struct FString                                     MessageOfTheDay;                             // 0x0224 (0x000C)
	class AActor*                                      Winner;                                      // 0x0230 (0x0004)
	TArray< class APlayerReplicationInfo* >            PRIArray;                                    // 0x0234 (0x000C)
	TArray< class APlayerReplicationInfo* >            InactivePRIArray;                            // 0x0240 (0x000C)
	int                                                MatchID;                                     // 0x024C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.GameReplicationInfo" );

		return ClassPointer;
	};

public:
	bool eventShouldShowGore ()
	{
		static UFunction* pfnShouldShowGore = NULL;

		if ( !pfnShouldShowGore )
			pfnShouldShowGore = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.ShouldShowGore" );

		AGameReplicationInfo_eventShouldShowGore_Parms ShouldShowGore_Parms;

		this->ProcessEvent( pfnShouldShowGore, &ShouldShowGore_Parms, NULL );

		return ShouldShowGore_Parms.ReturnValue;
	};

	bool IsCoopMultiplayerGame ()
	{
		static UFunction* pfnIsCoopMultiplayerGame = NULL;

		if ( !pfnIsCoopMultiplayerGame )
			pfnIsCoopMultiplayerGame = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.IsCoopMultiplayerGame" );

		AGameReplicationInfo_execIsCoopMultiplayerGame_Parms IsCoopMultiplayerGame_Parms;

		this->ProcessEvent( pfnIsCoopMultiplayerGame, &IsCoopMultiplayerGame_Parms, NULL );

		return IsCoopMultiplayerGame_Parms.ReturnValue;
	};

	bool IsMultiplayerGame ()
	{
		static UFunction* pfnIsMultiplayerGame = NULL;

		if ( !pfnIsMultiplayerGame )
			pfnIsMultiplayerGame = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.IsMultiplayerGame" );

		AGameReplicationInfo_execIsMultiplayerGame_Parms IsMultiplayerGame_Parms;

		this->ProcessEvent( pfnIsMultiplayerGame, &IsMultiplayerGame_Parms, NULL );

		return IsMultiplayerGame_Parms.ReturnValue;
	};

	void EndGame ()
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.EndGame" );

		AGameReplicationInfo_execEndGame_Parms EndGame_Parms;

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.StartMatch" );

		AGameReplicationInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void CleanupGameDataStore ()
	{
		static UFunction* pfnCleanupGameDataStore = NULL;

		if ( !pfnCleanupGameDataStore )
			pfnCleanupGameDataStore = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.CleanupGameDataStore" );

		AGameReplicationInfo_execCleanupGameDataStore_Parms CleanupGameDataStore_Parms;

		this->ProcessEvent( pfnCleanupGameDataStore, &CleanupGameDataStore_Parms, NULL );
	};

	void InitializeGameDataStore ()
	{
		static UFunction* pfnInitializeGameDataStore = NULL;

		if ( !pfnInitializeGameDataStore )
			pfnInitializeGameDataStore = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.InitializeGameDataStore" );

		AGameReplicationInfo_execInitializeGameDataStore_Parms InitializeGameDataStore_Parms;

		this->ProcessEvent( pfnInitializeGameDataStore, &InitializeGameDataStore_Parms, NULL );
	};

	void eventReplicatedDataBinding ( struct FName VarName )
	{
		static UFunction* pfnReplicatedDataBinding = NULL;

		if ( !pfnReplicatedDataBinding )
			pfnReplicatedDataBinding = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.ReplicatedDataBinding" );

		AGameReplicationInfo_eventReplicatedDataBinding_Parms ReplicatedDataBinding_Parms;
		memcpy( &ReplicatedDataBinding_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedDataBinding, &ReplicatedDataBinding_Parms, NULL );
	};

	void SortPRIArray ()
	{
		static UFunction* pfnSortPRIArray = NULL;

		if ( !pfnSortPRIArray )
			pfnSortPRIArray = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.SortPRIArray" );

		AGameReplicationInfo_execSortPRIArray_Parms SortPRIArray_Parms;

		this->ProcessEvent( pfnSortPRIArray, &SortPRIArray_Parms, NULL );
	};

	bool InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 )
	{
		static UFunction* pfnInOrder = NULL;

		if ( !pfnInOrder )
			pfnInOrder = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.InOrder" );

		AGameReplicationInfo_execInOrder_Parms InOrder_Parms;
		InOrder_Parms.P1 = P1;
		InOrder_Parms.P2 = P2;

		this->ProcessEvent( pfnInOrder, &InOrder_Parms, NULL );

		return InOrder_Parms.ReturnValue;
	};

	void GetPRIArray ( TArray< class APlayerReplicationInfo* >* pris )
	{
		static UFunction* pfnGetPRIArray = NULL;

		if ( !pfnGetPRIArray )
			pfnGetPRIArray = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.GetPRIArray" );

		AGameReplicationInfo_execGetPRIArray_Parms GetPRIArray_Parms;

		this->ProcessEvent( pfnGetPRIArray, &GetPRIArray_Parms, NULL );

		if ( pris )
			*pris = GetPRIArray_Parms.pris; // CPF_OutParm
	};

	void SetTeam ( int Index, class ATeamInfo* TI )
	{
		static UFunction* pfnSetTeam = NULL;

		if ( !pfnSetTeam )
			pfnSetTeam = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.SetTeam" );

		AGameReplicationInfo_execSetTeam_Parms SetTeam_Parms;
		SetTeam_Parms.Index = Index;
		SetTeam_Parms.TI = TI;

		this->ProcessEvent( pfnSetTeam, &SetTeam_Parms, NULL );
	};

	void RemovePRI ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnRemovePRI = NULL;

		if ( !pfnRemovePRI )
			pfnRemovePRI = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.RemovePRI" );

		AGameReplicationInfo_execRemovePRI_Parms RemovePRI_Parms;
		RemovePRI_Parms.PRI = PRI;

		this->ProcessEvent( pfnRemovePRI, &RemovePRI_Parms, NULL );
	};

	void AddPRI ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnAddPRI = NULL;

		if ( !pfnAddPRI )
			pfnAddPRI = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.AddPRI" );

		AGameReplicationInfo_execAddPRI_Parms AddPRI_Parms;
		AddPRI_Parms.PRI = PRI;

		this->ProcessEvent( pfnAddPRI, &AddPRI_Parms, NULL );
	};

	class APlayerReplicationInfo* FindPlayerByID ( int PlayerID )
	{
		static UFunction* pfnFindPlayerByID = NULL;

		if ( !pfnFindPlayerByID )
			pfnFindPlayerByID = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.FindPlayerByID" );

		AGameReplicationInfo_execFindPlayerByID_Parms FindPlayerByID_Parms;
		FindPlayerByID_Parms.PlayerID = PlayerID;

		this->ProcessEvent( pfnFindPlayerByID, &FindPlayerByID_Parms, NULL );

		return FindPlayerByID_Parms.ReturnValue;
	};

	bool OnSameTeam ( class AActor* A, class AActor* B )
	{
		static UFunction* pfnOnSameTeam = NULL;

		if ( !pfnOnSameTeam )
			pfnOnSameTeam = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.OnSameTeam" );

		AGameReplicationInfo_execOnSameTeam_Parms OnSameTeam_Parms;
		OnSameTeam_Parms.A = A;
		OnSameTeam_Parms.B = B;

		pfnOnSameTeam->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOnSameTeam, &OnSameTeam_Parms, NULL );
		pfnOnSameTeam->FunctionFlags |= 0x400;

		return OnSameTeam_Parms.ReturnValue;
	};

	void eventTimer ()
	{
		static UFunction* pfnTimer = NULL;

		if ( !pfnTimer )
			pfnTimer = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.Timer" );

		AGameReplicationInfo_eventTimer_Parms Timer_Parms;

		this->ProcessEvent( pfnTimer, &Timer_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.Destroyed" );

		AGameReplicationInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.Reset" );

		AGameReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void ReceivedGameClass ()
	{
		static UFunction* pfnReceivedGameClass = NULL;

		if ( !pfnReceivedGameClass )
			pfnReceivedGameClass = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.ReceivedGameClass" );

		AGameReplicationInfo_execReceivedGameClass_Parms ReceivedGameClass_Parms;

		this->ProcessEvent( pfnReceivedGameClass, &ReceivedGameClass_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.ReplicatedEvent" );

		AGameReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.GameReplicationInfo.PostBeginPlay" );

		AGameReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* AGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif