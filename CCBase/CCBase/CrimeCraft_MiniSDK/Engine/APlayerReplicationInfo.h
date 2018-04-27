/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: APlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:39.564
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct APlayerReplicationInfo_execUnregisterPlayerFromSession_Parms
{
};

struct APlayerReplicationInfo_execRegisterPlayerWithSession_Parms
{
};

struct APlayerReplicationInfo_execSetPlayerAlias_Parms
{
	struct FString NewAlias;
};

struct APlayerReplicationInfo_execIsInvalidName_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerReplicationInfo_execSetUniqueId_Parms
{
	struct FUniqueNetId PlayerUniqueId;
};

struct APlayerReplicationInfo_execServerSetSplitscreenIndex_Parms
{
	unsigned char PlayerIndex;
};

struct APlayerReplicationInfo_execSetSplitscreenIndex_Parms
{
	unsigned char PlayerIndex;
};

struct APlayerReplicationInfo_execIsLocalPlayerPRI_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execBindPlayerOwnerDataProvider_Parms
{
};

struct APlayerReplicationInfo_execNotifyLocalPlayerTeamReceived_Parms
{
};

struct APlayerReplicationInfo_execUpdateTeamDataProvider_Parms
{
};

struct APlayerReplicationInfo_execUpdatePlayerDataProvider_Parms
{
	struct FName PropertyName;
};

struct APlayerReplicationInfo_execGetCurrentGameDS_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execSeamlessTravelTo_Parms
{
	class APlayerReplicationInfo* NewPRI;
};

struct APlayerReplicationInfo_execIncrementDeaths_Parms
{
	int Amt;
};

struct APlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct APlayerReplicationInfo_execOverrideWith_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct APlayerReplicationInfo_execDuplicate_Parms
{
	class APlayerReplicationInfo* ReturnValue; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execSetWaitingPlayer_Parms
{
	unsigned long B : 1;
};

struct APlayerReplicationInfo_eventSetPlayerName_Parms
{
	struct FString S;
};// FUNC_Event

struct APlayerReplicationInfo_eventTimer_Parms
{
};// FUNC_Event

struct APlayerReplicationInfo_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float YL; // CPF_OutParm
	float YPos; // CPF_OutParm
};

struct APlayerReplicationInfo_execUpdatePlayerLocation_Parms
{
};

struct APlayerReplicationInfo_execGetLocationName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execReset_Parms
{
};

struct APlayerReplicationInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct APlayerReplicationInfo_execShouldBroadCastWelcomeMessage_Parms
{
	unsigned long bExiting : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct APlayerReplicationInfo_execUpdatePing_Parms
{
	float TimeStamp;
};// FUNC_Final FUNC_Native

struct APlayerReplicationInfo_eventReplicatedDataBinding_Parms
{
	struct FName VarName;
};// FUNC_Event

struct APlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct APlayerReplicationInfo_execSetPlayerTeam_Parms
{
	class ATeamInfo* NewTeam;
};

struct APlayerReplicationInfo_execClientInitialize_Parms
{
	class AController* C;
};

struct APlayerReplicationInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct APlayerReplicationInfo_execGetPlayerAlias_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct APlayerReplicationInfo_execAreUniqueNetIdsEqual_Parms
{
	class APlayerReplicationInfo* OtherPRI;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

// (0x1BC - 0x260)
class APlayerReplicationInfo : public AReplicationInfo
{
public:
	float                                              Score;                                       // 0x01BC (0x0004)
	float                                              Deaths;                                      // 0x01C0 (0x0004)
	unsigned char                                      Ping;                                        // 0x01C4 (0x0001)
	unsigned char                                      TTSSpeaker;                                  // 0x01C5 (0x0001)
	unsigned char                                      PacketLoss;                                  // 0x01C6 (0x0001)
	class AActor*                                      PlayerLocationHint;                          // 0x01C8 (0x0004)
	int                                                NumLives;                                    // 0x01CC (0x0004)
	struct FString                                     PlayerName;                                  // 0x01D0 (0x000C)
	struct FString                                     PlayerAlias;                                 // 0x01DC (0x000C)
	struct FString                                     OldName;                                     // 0x01E8 (0x000C)
	int                                                PlayerID;                                    // 0x01F4 (0x0004)
	class ATeamInfo*                                   Team;                                        // 0x01F8 (0x0004)
	int                                                SplitscreenIndex;                            // 0x01FC (0x0004)
	unsigned long                                      bAdmin : 1;                                  // 0x0200 (0x0004) [0x00000001]
	unsigned long                                      bIsFemale : 1;                               // 0x0200 (0x0004) [0x00000002]
	unsigned long                                      bIsSpectator : 1;                            // 0x0200 (0x0004) [0x00000004]
	unsigned long                                      bOnlySpectator : 1;                          // 0x0200 (0x0004) [0x00000008]
	unsigned long                                      bWaitingPlayer : 1;                          // 0x0200 (0x0004) [0x00000010]
	unsigned long                                      bReadyToPlay : 1;                            // 0x0200 (0x0004) [0x00000020]
	unsigned long                                      bOutOfLives : 1;                             // 0x0200 (0x0004) [0x00000040]
	unsigned long                                      bBot : 1;                                    // 0x0200 (0x0004) [0x00000080]
	unsigned long                                      bHasFlag : 1;                                // 0x0200 (0x0004) [0x00000100]
	unsigned long                                      bHasBeenWelcomed : 1;                        // 0x0200 (0x0004) [0x00000200]
	unsigned long                                      bIsInactive : 1;                             // 0x0200 (0x0004) [0x00000400]
	unsigned long                                      bFromPreviousLevel : 1;                      // 0x0200 (0x0004) [0x00000800]
	unsigned long                                      bControllerVibrationAllowed : 1;             // 0x0200 (0x0004) [0x00001000]
	int                                                StartTime;                                   // 0x0204 (0x0004)
	struct FString                                     StringDead;                                  // 0x0208 (0x000C)
	struct FString                                     StringSpectating;                            // 0x0214 (0x000C)
	struct FString                                     StringUnknown;                               // 0x0220 (0x000C)
	int                                                Kills;                                       // 0x022C (0x0004)
	class UClass*                                      GameMessageClass;                            // 0x0230 (0x0004)
	float                                              ExactPing;                                   // 0x0234 (0x0004)
	struct FString                                     SavedNetworkAddress;                         // 0x0238 (0x000C)
	struct FUniqueNetId                                UniqueId;                                    // 0x0244 (0x0008)
	int                                                PlayerSkill;                                 // 0x024C (0x0004)
	struct FName                                       SessionName;                                 // 0x0250 (0x0008)
	struct FAutomatedTestingDatum                      AutomatedTestingData;                        // 0x0258 (0x0008)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.PlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void UnregisterPlayerFromSession ()
	{
		static UFunction* pfnUnregisterPlayerFromSession = NULL;

		if ( !pfnUnregisterPlayerFromSession )
			pfnUnregisterPlayerFromSession = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.UnregisterPlayerFromSession" );

		APlayerReplicationInfo_execUnregisterPlayerFromSession_Parms UnregisterPlayerFromSession_Parms;

		this->ProcessEvent( pfnUnregisterPlayerFromSession, &UnregisterPlayerFromSession_Parms, NULL );
	};

	void RegisterPlayerWithSession ()
	{
		static UFunction* pfnRegisterPlayerWithSession = NULL;

		if ( !pfnRegisterPlayerWithSession )
			pfnRegisterPlayerWithSession = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.RegisterPlayerWithSession" );

		APlayerReplicationInfo_execRegisterPlayerWithSession_Parms RegisterPlayerWithSession_Parms;

		this->ProcessEvent( pfnRegisterPlayerWithSession, &RegisterPlayerWithSession_Parms, NULL );
	};

	void SetPlayerAlias ( struct FString NewAlias )
	{
		static UFunction* pfnSetPlayerAlias = NULL;

		if ( !pfnSetPlayerAlias )
			pfnSetPlayerAlias = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetPlayerAlias" );

		APlayerReplicationInfo_execSetPlayerAlias_Parms SetPlayerAlias_Parms;
		memcpy( &SetPlayerAlias_Parms.NewAlias, &NewAlias, 0xC );

		this->ProcessEvent( pfnSetPlayerAlias, &SetPlayerAlias_Parms, NULL );
	};

	bool IsInvalidName ()
	{
		static UFunction* pfnIsInvalidName = NULL;

		if ( !pfnIsInvalidName )
			pfnIsInvalidName = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.IsInvalidName" );

		APlayerReplicationInfo_execIsInvalidName_Parms IsInvalidName_Parms;

		this->ProcessEvent( pfnIsInvalidName, &IsInvalidName_Parms, NULL );

		return IsInvalidName_Parms.ReturnValue;
	};

	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.GetTeamNum" );

		APlayerReplicationInfo_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	void SetUniqueId ( struct FUniqueNetId PlayerUniqueId )
	{
		static UFunction* pfnSetUniqueId = NULL;

		if ( !pfnSetUniqueId )
			pfnSetUniqueId = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetUniqueId" );

		APlayerReplicationInfo_execSetUniqueId_Parms SetUniqueId_Parms;
		memcpy( &SetUniqueId_Parms.PlayerUniqueId, &PlayerUniqueId, 0x8 );

		this->ProcessEvent( pfnSetUniqueId, &SetUniqueId_Parms, NULL );
	};

	void ServerSetSplitscreenIndex ( unsigned char PlayerIndex )
	{
		static UFunction* pfnServerSetSplitscreenIndex = NULL;

		if ( !pfnServerSetSplitscreenIndex )
			pfnServerSetSplitscreenIndex = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.ServerSetSplitscreenIndex" );

		APlayerReplicationInfo_execServerSetSplitscreenIndex_Parms ServerSetSplitscreenIndex_Parms;
		ServerSetSplitscreenIndex_Parms.PlayerIndex = PlayerIndex;

		this->ProcessEvent( pfnServerSetSplitscreenIndex, &ServerSetSplitscreenIndex_Parms, NULL );
	};

	void SetSplitscreenIndex ( unsigned char PlayerIndex )
	{
		static UFunction* pfnSetSplitscreenIndex = NULL;

		if ( !pfnSetSplitscreenIndex )
			pfnSetSplitscreenIndex = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetSplitscreenIndex" );

		APlayerReplicationInfo_execSetSplitscreenIndex_Parms SetSplitscreenIndex_Parms;
		SetSplitscreenIndex_Parms.PlayerIndex = PlayerIndex;

		this->ProcessEvent( pfnSetSplitscreenIndex, &SetSplitscreenIndex_Parms, NULL );
	};

	bool IsLocalPlayerPRI ()
	{
		static UFunction* pfnIsLocalPlayerPRI = NULL;

		if ( !pfnIsLocalPlayerPRI )
			pfnIsLocalPlayerPRI = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.IsLocalPlayerPRI" );

		APlayerReplicationInfo_execIsLocalPlayerPRI_Parms IsLocalPlayerPRI_Parms;

		this->ProcessEvent( pfnIsLocalPlayerPRI, &IsLocalPlayerPRI_Parms, NULL );

		return IsLocalPlayerPRI_Parms.ReturnValue;
	};

	void BindPlayerOwnerDataProvider ()
	{
		static UFunction* pfnBindPlayerOwnerDataProvider = NULL;

		if ( !pfnBindPlayerOwnerDataProvider )
			pfnBindPlayerOwnerDataProvider = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.BindPlayerOwnerDataProvider" );

		APlayerReplicationInfo_execBindPlayerOwnerDataProvider_Parms BindPlayerOwnerDataProvider_Parms;

		this->ProcessEvent( pfnBindPlayerOwnerDataProvider, &BindPlayerOwnerDataProvider_Parms, NULL );
	};

	void NotifyLocalPlayerTeamReceived ()
	{
		static UFunction* pfnNotifyLocalPlayerTeamReceived = NULL;

		if ( !pfnNotifyLocalPlayerTeamReceived )
			pfnNotifyLocalPlayerTeamReceived = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.NotifyLocalPlayerTeamReceived" );

		APlayerReplicationInfo_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

		this->ProcessEvent( pfnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
	};

	void UpdateTeamDataProvider ()
	{
		static UFunction* pfnUpdateTeamDataProvider = NULL;

		if ( !pfnUpdateTeamDataProvider )
			pfnUpdateTeamDataProvider = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.UpdateTeamDataProvider" );

		APlayerReplicationInfo_execUpdateTeamDataProvider_Parms UpdateTeamDataProvider_Parms;

		this->ProcessEvent( pfnUpdateTeamDataProvider, &UpdateTeamDataProvider_Parms, NULL );
	};

	void UpdatePlayerDataProvider ( struct FName PropertyName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnUpdatePlayerDataProvider = NULL;

		if ( !pfnUpdatePlayerDataProvider )
			pfnUpdatePlayerDataProvider = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.UpdatePlayerDataProvider" );

		APlayerReplicationInfo_execUpdatePlayerDataProvider_Parms UpdatePlayerDataProvider_Parms;
		memcpy( &UpdatePlayerDataProvider_Parms.PropertyName, &PropertyName, 0x8 );

		this->ProcessEvent( pfnUpdatePlayerDataProvider, &UpdatePlayerDataProvider_Parms, NULL );
	};

	void* GetCurrentGameDS ()
	{
		static UFunction* pfnGetCurrentGameDS = NULL;

		if ( !pfnGetCurrentGameDS )
			pfnGetCurrentGameDS = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.GetCurrentGameDS" );

		APlayerReplicationInfo_execGetCurrentGameDS_Parms GetCurrentGameDS_Parms;

		this->ProcessEvent( pfnGetCurrentGameDS, &GetCurrentGameDS_Parms, NULL );

		return GetCurrentGameDS_Parms.ReturnValue;
	};

	void SeamlessTravelTo ( class APlayerReplicationInfo* NewPRI )
	{
		static UFunction* pfnSeamlessTravelTo = NULL;

		if ( !pfnSeamlessTravelTo )
			pfnSeamlessTravelTo = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SeamlessTravelTo" );

		APlayerReplicationInfo_execSeamlessTravelTo_Parms SeamlessTravelTo_Parms;
		SeamlessTravelTo_Parms.NewPRI = NewPRI;

		this->ProcessEvent( pfnSeamlessTravelTo, &SeamlessTravelTo_Parms, NULL );
	};

	void IncrementDeaths ( int Amt/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIncrementDeaths = NULL;

		if ( !pfnIncrementDeaths )
			pfnIncrementDeaths = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.IncrementDeaths" );

		APlayerReplicationInfo_execIncrementDeaths_Parms IncrementDeaths_Parms;
		IncrementDeaths_Parms.Amt = Amt;

		this->ProcessEvent( pfnIncrementDeaths, &IncrementDeaths_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.CopyProperties" );

		APlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

	void OverrideWith ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnOverrideWith = NULL;

		if ( !pfnOverrideWith )
			pfnOverrideWith = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.OverrideWith" );

		APlayerReplicationInfo_execOverrideWith_Parms OverrideWith_Parms;
		OverrideWith_Parms.PRI = PRI;

		this->ProcessEvent( pfnOverrideWith, &OverrideWith_Parms, NULL );
	};

	class APlayerReplicationInfo* Duplicate ()
	{
		static UFunction* pfnDuplicate = NULL;

		if ( !pfnDuplicate )
			pfnDuplicate = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.Duplicate" );

		APlayerReplicationInfo_execDuplicate_Parms Duplicate_Parms;

		this->ProcessEvent( pfnDuplicate, &Duplicate_Parms, NULL );

		return Duplicate_Parms.ReturnValue;
	};

	void SetWaitingPlayer ( unsigned long B )
	{
		static UFunction* pfnSetWaitingPlayer = NULL;

		if ( !pfnSetWaitingPlayer )
			pfnSetWaitingPlayer = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetWaitingPlayer" );

		APlayerReplicationInfo_execSetWaitingPlayer_Parms SetWaitingPlayer_Parms;
		SetWaitingPlayer_Parms.B = B;

		this->ProcessEvent( pfnSetWaitingPlayer, &SetWaitingPlayer_Parms, NULL );
	};

	void eventSetPlayerName ( struct FString S )
	{
		static UFunction* pfnSetPlayerName = NULL;

		if ( !pfnSetPlayerName )
			pfnSetPlayerName = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetPlayerName" );

		APlayerReplicationInfo_eventSetPlayerName_Parms SetPlayerName_Parms;
		memcpy( &SetPlayerName_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnSetPlayerName, &SetPlayerName_Parms, NULL );
	};

	void eventTimer ()
	{
		static UFunction* pfnTimer = NULL;

		if ( !pfnTimer )
			pfnTimer = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.Timer" );

		APlayerReplicationInfo_eventTimer_Parms Timer_Parms;

		this->ProcessEvent( pfnTimer, &Timer_Parms, NULL );
	};

	void DisplayDebug ( class AHUD* HUD, float* YL, float* YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.DisplayDebug" );

		APlayerReplicationInfo_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( YL )
			*YL = DisplayDebug_Parms.YL; // CPF_OutParm
		if ( YPos )
			*YPos = DisplayDebug_Parms.YPos; // CPF_OutParm
	};

	void UpdatePlayerLocation ()
	{
		static UFunction* pfnUpdatePlayerLocation = NULL;

		if ( !pfnUpdatePlayerLocation )
			pfnUpdatePlayerLocation = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.UpdatePlayerLocation" );

		APlayerReplicationInfo_execUpdatePlayerLocation_Parms UpdatePlayerLocation_Parms;

		this->ProcessEvent( pfnUpdatePlayerLocation, &UpdatePlayerLocation_Parms, NULL );
	};

	struct FString GetLocationName ()
	{
		static UFunction* pfnGetLocationName = NULL;

		if ( !pfnGetLocationName )
			pfnGetLocationName = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.GetLocationName" );

		APlayerReplicationInfo_execGetLocationName_Parms GetLocationName_Parms;

		this->ProcessEvent( pfnGetLocationName, &GetLocationName_Parms, NULL );

		return GetLocationName_Parms.ReturnValue;
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.GetHumanReadableName" );

		APlayerReplicationInfo_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.Reset" );

		APlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.Destroyed" );

		APlayerReplicationInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	bool ShouldBroadCastWelcomeMessage ( unsigned long bExiting/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnShouldBroadCastWelcomeMessage = NULL;

		if ( !pfnShouldBroadCastWelcomeMessage )
			pfnShouldBroadCastWelcomeMessage = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.ShouldBroadCastWelcomeMessage" );

		APlayerReplicationInfo_execShouldBroadCastWelcomeMessage_Parms ShouldBroadCastWelcomeMessage_Parms;
		ShouldBroadCastWelcomeMessage_Parms.bExiting = bExiting;

		this->ProcessEvent( pfnShouldBroadCastWelcomeMessage, &ShouldBroadCastWelcomeMessage_Parms, NULL );

		return ShouldBroadCastWelcomeMessage_Parms.ReturnValue;
	};

	void UpdatePing ( float TimeStamp )
	{
		static UFunction* pfnUpdatePing = NULL;

		if ( !pfnUpdatePing )
			pfnUpdatePing = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.UpdatePing" );

		APlayerReplicationInfo_execUpdatePing_Parms UpdatePing_Parms;
		UpdatePing_Parms.TimeStamp = TimeStamp;

		pfnUpdatePing->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdatePing, &UpdatePing_Parms, NULL );
		pfnUpdatePing->FunctionFlags |= 0x400;
	};

	void eventReplicatedDataBinding ( struct FName VarName )
	{
		static UFunction* pfnReplicatedDataBinding = NULL;

		if ( !pfnReplicatedDataBinding )
			pfnReplicatedDataBinding = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.ReplicatedDataBinding" );

		APlayerReplicationInfo_eventReplicatedDataBinding_Parms ReplicatedDataBinding_Parms;
		memcpy( &ReplicatedDataBinding_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedDataBinding, &ReplicatedDataBinding_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.ReplicatedEvent" );

		APlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void SetPlayerTeam ( class ATeamInfo* NewTeam )
	{
		static UFunction* pfnSetPlayerTeam = NULL;

		if ( !pfnSetPlayerTeam )
			pfnSetPlayerTeam = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.SetPlayerTeam" );

		APlayerReplicationInfo_execSetPlayerTeam_Parms SetPlayerTeam_Parms;
		SetPlayerTeam_Parms.NewTeam = NewTeam;

		this->ProcessEvent( pfnSetPlayerTeam, &SetPlayerTeam_Parms, NULL );
	};

	void ClientInitialize ( class AController* C )
	{
		static UFunction* pfnClientInitialize = NULL;

		if ( !pfnClientInitialize )
			pfnClientInitialize = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.ClientInitialize" );

		APlayerReplicationInfo_execClientInitialize_Parms ClientInitialize_Parms;
		ClientInitialize_Parms.C = C;

		this->ProcessEvent( pfnClientInitialize, &ClientInitialize_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.PostBeginPlay" );

		APlayerReplicationInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	struct FString GetPlayerAlias ()
	{
		static UFunction* pfnGetPlayerAlias = NULL;

		if ( !pfnGetPlayerAlias )
			pfnGetPlayerAlias = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.GetPlayerAlias" );

		APlayerReplicationInfo_execGetPlayerAlias_Parms GetPlayerAlias_Parms;

		pfnGetPlayerAlias->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetPlayerAlias, &GetPlayerAlias_Parms, NULL );
		pfnGetPlayerAlias->FunctionFlags |= 0x400;

		return GetPlayerAlias_Parms.ReturnValue;
	};

	bool AreUniqueNetIdsEqual ( class APlayerReplicationInfo* OtherPRI )
	{
		static UFunction* pfnAreUniqueNetIdsEqual = NULL;

		if ( !pfnAreUniqueNetIdsEqual )
			pfnAreUniqueNetIdsEqual = UObject::FindObject< UFunction >( "Function Engine.PlayerReplicationInfo.AreUniqueNetIdsEqual" );

		APlayerReplicationInfo_execAreUniqueNetIdsEqual_Parms AreUniqueNetIdsEqual_Parms;
		AreUniqueNetIdsEqual_Parms.OtherPRI = OtherPRI;

		pfnAreUniqueNetIdsEqual->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAreUniqueNetIdsEqual, &AreUniqueNetIdsEqual_Parms, NULL );
		pfnAreUniqueNetIdsEqual->FunctionFlags |= 0x400;

		return AreUniqueNetIdsEqual_Parms.ReturnValue;
	};

};

UClass* APlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif