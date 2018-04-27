/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UOnlineSubsystem.h
// Date: 06/16/2011 @ 05:19:39.481
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EOnlineNewsType
{
	ONT_Unknown = 0,
	ONT_GameNews = 1,
	ONT_ContentAnnouncements = 2,
	ONT_Misc = 3,
	ONT_MAX = 4
};

enum EOnlineAccountCreateStatus
{
	OACS_CreateSuccessful = 0,
	OACS_UnknownError = 1,
	OACS_InvalidUserName = 2,
	OACS_InvalidPassword = 3,
	OACS_InvalidUniqueUserName = 4,
	OACS_UniqueUserNameInUse = 5,
	OACS_ServiceUnavailable = 6,
	OACS_MAX = 7
};

enum ELanBeaconState
{
	LANB_NotUsingLanBeacon = 0,
	LANB_Hosting = 1,
	LANB_Searching = 2,
	LANB_MAX = 3
};

enum ENATType
{
	NAT_Unknown = 0,
	NAT_Open = 1,
	NAT_Moderate = 2,
	NAT_Strict = 3,
	NAT_MAX = 4
};

enum EOnlineServerConnectionStatus
{
	OSCS_NotConnected = 0,
	OSCS_Connected = 1,
	OSCS_ConnectionDropped = 2,
	OSCS_NoNetworkConnection = 3,
	OSCS_ServiceUnavailable = 4,
	OSCS_UpdateRequired = 5,
	OSCS_ServersTooBusy = 6,
	OSCS_DuplicateLoginDetected = 7,
	OSCS_InvalidUser = 8,
	OSCS_MAX = 9
};

enum EOnlineFriendState
{
	OFS_Offline = 0,
	OFS_Online = 1,
	OFS_Away = 2,
	OFS_Busy = 3,
	OFS_MAX = 4
};

enum EOnlineEnumerationReadState
{
	OERS_NotStarted = 0,
	OERS_InProgress = 1,
	OERS_Done = 2,
	OERS_Failed = 3,
	OERS_MAX = 4
};

enum EOnlineGameState
{
	OGS_NoSession = 0,
	OGS_Pending = 1,
	OGS_Starting = 2,
	OGS_InProgress = 3,
	OGS_Ending = 4,
	OGS_Ended = 5,
	OGS_MAX = 6
};

enum ENetworkNotificationPosition
{
	NNP_TopLeft = 0,
	NNP_TopCenter = 1,
	NNP_TopRight = 2,
	NNP_CenterLeft = 3,
	NNP_Center = 4,
	NNP_CenterRight = 5,
	NNP_BottomLeft = 6,
	NNP_BottomCenter = 7,
	NNP_BottomRight = 8,
	NNP_MAX = 9
};

enum EFeaturePrivilegeLevel
{
	FPL_Disabled = 0,
	FPL_EnabledFriendsOnly = 1,
	FPL_Enabled = 2,
	FPL_MAX = 3
};

enum ELoginStatus
{
	LS_NotLoggedIn = 0,
	LS_UsingLocalProfile = 1,
	LS_LoggedIn = 2,
	LS_MAX = 3
};

struct UOnlineSubsystem_execSetDebugSpewLevel_Parms
{
	int DebugSpewLevel;
};

struct UOnlineSubsystem_execDumpVoiceRegistration_Parms
{
};

struct UOnlineSubsystem_execDumpSessionState_Parms
{
};

struct UOnlineSubsystem_execGetBuildUniqueId_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UOnlineSubsystem_execAreUniqueNetIdsEqual_Parms
{
	struct FUniqueNetId NetIdA; // CPF_OutParm
	struct FUniqueNetId NetIdB; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UOnlineSubsystem_execStringToUniqueNetId_Parms
{
	struct FString UniqueNetIdString;
	struct FUniqueNetId out_UniqueId; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UOnlineSubsystem_execUniqueNetIdToString_Parms
{
	struct FUniqueNetId IdToConvert; // CPF_OutParm
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UOnlineSubsystem_eventGetNamedInterface_Parms
{
	struct FName InterfaceName;
	class UObject* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetNamedInterface_Parms
{
	struct FName InterfaceName;
	class UObject* NewInterface;
};// FUNC_Event

struct UOnlineSubsystem_eventSetNewsInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetStatsInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetVoiceInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetContentInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetGameInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetSystemInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetPlayerInterfaceEx_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetPlayerInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventSetAccountInterface_Parms
{
	class UObject* NewInterface;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventExit_Parms
{
};// FUNC_Event

struct UOnlineSubsystem_eventPostInit_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystem_eventInit_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event FUNC_Native

// (0x3C - 0xC4)
class UOnlineSubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                     // 0x003C (0x0004)
	unsigned char                                      unknown_data12[ 72 ];                        // 0x0040 (0x0048)
	TArray< struct FNamedInterface >                   NamedInterfaces;                             // 0x0088 (0x000C)
	TArray< struct FNamedInterfaceDef >                NamedInterfaceDefs;                          // 0x0094 (0x000C)
	TArray< struct FNamedSession >                     Sessions;                                    // 0x00A0 (0x000C)
	unsigned long                                      bUseBuildIdOverride : 1;                     // 0x00AC (0x0004) [0x00000001]
	int                                                BuildIdOverride;                             // 0x00B0 (0x0004)
	struct FString                                     IniLocPatcherClassName;                      // 0x00B4 (0x000C)
	void*                                              Patcher;                                     // 0x00C0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.OnlineSubsystem" );

		return ClassPointer;
	};

public:
	void SetDebugSpewLevel ( int DebugSpewLevel )
	{
		static UFunction* pfnSetDebugSpewLevel = NULL;

		if ( !pfnSetDebugSpewLevel )
			pfnSetDebugSpewLevel = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetDebugSpewLevel" );

		UOnlineSubsystem_execSetDebugSpewLevel_Parms SetDebugSpewLevel_Parms;
		SetDebugSpewLevel_Parms.DebugSpewLevel = DebugSpewLevel;

		this->ProcessEvent( pfnSetDebugSpewLevel, &SetDebugSpewLevel_Parms, NULL );
	};

	void DumpVoiceRegistration ()
	{
		static UFunction* pfnDumpVoiceRegistration = NULL;

		if ( !pfnDumpVoiceRegistration )
			pfnDumpVoiceRegistration = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.DumpVoiceRegistration" );

		UOnlineSubsystem_execDumpVoiceRegistration_Parms DumpVoiceRegistration_Parms;

		this->ProcessEvent( pfnDumpVoiceRegistration, &DumpVoiceRegistration_Parms, NULL );
	};

	void DumpSessionState ()
	{
		static UFunction* pfnDumpSessionState = NULL;

		if ( !pfnDumpSessionState )
			pfnDumpSessionState = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.DumpSessionState" );

		UOnlineSubsystem_execDumpSessionState_Parms DumpSessionState_Parms;

		this->ProcessEvent( pfnDumpSessionState, &DumpSessionState_Parms, NULL );
	};

	int GetBuildUniqueId ()
	{
		static UFunction* pfnGetBuildUniqueId = NULL;

		if ( !pfnGetBuildUniqueId )
			pfnGetBuildUniqueId = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.GetBuildUniqueId" );

		UOnlineSubsystem_execGetBuildUniqueId_Parms GetBuildUniqueId_Parms;

		pfnGetBuildUniqueId->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBuildUniqueId, &GetBuildUniqueId_Parms, NULL );
		pfnGetBuildUniqueId->FunctionFlags |= 0x400;

		return GetBuildUniqueId_Parms.ReturnValue;
	};

	bool AreUniqueNetIdsEqual ( struct FUniqueNetId* NetIdA, struct FUniqueNetId* NetIdB )
	{
		static UFunction* pfnAreUniqueNetIdsEqual = NULL;

		if ( !pfnAreUniqueNetIdsEqual )
			pfnAreUniqueNetIdsEqual = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.AreUniqueNetIdsEqual" );

		UOnlineSubsystem_execAreUniqueNetIdsEqual_Parms AreUniqueNetIdsEqual_Parms;

		pfnAreUniqueNetIdsEqual->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAreUniqueNetIdsEqual, &AreUniqueNetIdsEqual_Parms, NULL );
		pfnAreUniqueNetIdsEqual->FunctionFlags |= 0x400;

		if ( NetIdA )
			memcpy( NetIdA, &AreUniqueNetIdsEqual_Parms.NetIdA, 0x8 ); // CPF_OutParm
		if ( NetIdB )
			memcpy( NetIdB, &AreUniqueNetIdsEqual_Parms.NetIdB, 0x8 ); // CPF_OutParm

		return AreUniqueNetIdsEqual_Parms.ReturnValue;
	};

	bool StringToUniqueNetId ( struct FString UniqueNetIdString, struct FUniqueNetId* out_UniqueId )
	{
		static UFunction* pfnStringToUniqueNetId = NULL;

		if ( !pfnStringToUniqueNetId )
			pfnStringToUniqueNetId = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.StringToUniqueNetId" );

		UOnlineSubsystem_execStringToUniqueNetId_Parms StringToUniqueNetId_Parms;
		memcpy( &StringToUniqueNetId_Parms.UniqueNetIdString, &UniqueNetIdString, 0xC );

		pfnStringToUniqueNetId->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStringToUniqueNetId, &StringToUniqueNetId_Parms, NULL );
		pfnStringToUniqueNetId->FunctionFlags |= 0x400;

		if ( out_UniqueId )
			memcpy( out_UniqueId, &StringToUniqueNetId_Parms.out_UniqueId, 0x8 ); // CPF_OutParm

		return StringToUniqueNetId_Parms.ReturnValue;
	};

	struct FString UniqueNetIdToString ( struct FUniqueNetId* IdToConvert )
	{
		static UFunction* pfnUniqueNetIdToString = NULL;

		if ( !pfnUniqueNetIdToString )
			pfnUniqueNetIdToString = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.UniqueNetIdToString" );

		UOnlineSubsystem_execUniqueNetIdToString_Parms UniqueNetIdToString_Parms;

		pfnUniqueNetIdToString->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUniqueNetIdToString, &UniqueNetIdToString_Parms, NULL );
		pfnUniqueNetIdToString->FunctionFlags |= 0x400;

		if ( IdToConvert )
			memcpy( IdToConvert, &UniqueNetIdToString_Parms.IdToConvert, 0x8 ); // CPF_OutParm

		return UniqueNetIdToString_Parms.ReturnValue;
	};

	class UObject* eventGetNamedInterface ( struct FName InterfaceName )
	{
		static UFunction* pfnGetNamedInterface = NULL;

		if ( !pfnGetNamedInterface )
			pfnGetNamedInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.GetNamedInterface" );

		UOnlineSubsystem_eventGetNamedInterface_Parms GetNamedInterface_Parms;
		memcpy( &GetNamedInterface_Parms.InterfaceName, &InterfaceName, 0x8 );

		this->ProcessEvent( pfnGetNamedInterface, &GetNamedInterface_Parms, NULL );

		return GetNamedInterface_Parms.ReturnValue;
	};

	void eventSetNamedInterface ( struct FName InterfaceName, class UObject* NewInterface )
	{
		static UFunction* pfnSetNamedInterface = NULL;

		if ( !pfnSetNamedInterface )
			pfnSetNamedInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetNamedInterface" );

		UOnlineSubsystem_eventSetNamedInterface_Parms SetNamedInterface_Parms;
		memcpy( &SetNamedInterface_Parms.InterfaceName, &InterfaceName, 0x8 );
		SetNamedInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetNamedInterface, &SetNamedInterface_Parms, NULL );
	};

	bool eventSetNewsInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetNewsInterface = NULL;

		if ( !pfnSetNewsInterface )
			pfnSetNewsInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetNewsInterface" );

		UOnlineSubsystem_eventSetNewsInterface_Parms SetNewsInterface_Parms;
		SetNewsInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetNewsInterface, &SetNewsInterface_Parms, NULL );

		return SetNewsInterface_Parms.ReturnValue;
	};

	bool eventSetStatsInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetStatsInterface = NULL;

		if ( !pfnSetStatsInterface )
			pfnSetStatsInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetStatsInterface" );

		UOnlineSubsystem_eventSetStatsInterface_Parms SetStatsInterface_Parms;
		SetStatsInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetStatsInterface, &SetStatsInterface_Parms, NULL );

		return SetStatsInterface_Parms.ReturnValue;
	};

	bool eventSetVoiceInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetVoiceInterface = NULL;

		if ( !pfnSetVoiceInterface )
			pfnSetVoiceInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetVoiceInterface" );

		UOnlineSubsystem_eventSetVoiceInterface_Parms SetVoiceInterface_Parms;
		SetVoiceInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetVoiceInterface, &SetVoiceInterface_Parms, NULL );

		return SetVoiceInterface_Parms.ReturnValue;
	};

	bool eventSetContentInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetContentInterface = NULL;

		if ( !pfnSetContentInterface )
			pfnSetContentInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetContentInterface" );

		UOnlineSubsystem_eventSetContentInterface_Parms SetContentInterface_Parms;
		SetContentInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetContentInterface, &SetContentInterface_Parms, NULL );

		return SetContentInterface_Parms.ReturnValue;
	};

	bool eventSetGameInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetGameInterface = NULL;

		if ( !pfnSetGameInterface )
			pfnSetGameInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetGameInterface" );

		UOnlineSubsystem_eventSetGameInterface_Parms SetGameInterface_Parms;
		SetGameInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetGameInterface, &SetGameInterface_Parms, NULL );

		return SetGameInterface_Parms.ReturnValue;
	};

	bool eventSetSystemInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetSystemInterface = NULL;

		if ( !pfnSetSystemInterface )
			pfnSetSystemInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetSystemInterface" );

		UOnlineSubsystem_eventSetSystemInterface_Parms SetSystemInterface_Parms;
		SetSystemInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetSystemInterface, &SetSystemInterface_Parms, NULL );

		return SetSystemInterface_Parms.ReturnValue;
	};

	bool eventSetPlayerInterfaceEx ( class UObject* NewInterface )
	{
		static UFunction* pfnSetPlayerInterfaceEx = NULL;

		if ( !pfnSetPlayerInterfaceEx )
			pfnSetPlayerInterfaceEx = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetPlayerInterfaceEx" );

		UOnlineSubsystem_eventSetPlayerInterfaceEx_Parms SetPlayerInterfaceEx_Parms;
		SetPlayerInterfaceEx_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetPlayerInterfaceEx, &SetPlayerInterfaceEx_Parms, NULL );

		return SetPlayerInterfaceEx_Parms.ReturnValue;
	};

	bool eventSetPlayerInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetPlayerInterface = NULL;

		if ( !pfnSetPlayerInterface )
			pfnSetPlayerInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetPlayerInterface" );

		UOnlineSubsystem_eventSetPlayerInterface_Parms SetPlayerInterface_Parms;
		SetPlayerInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetPlayerInterface, &SetPlayerInterface_Parms, NULL );

		return SetPlayerInterface_Parms.ReturnValue;
	};

	bool eventSetAccountInterface ( class UObject* NewInterface )
	{
		static UFunction* pfnSetAccountInterface = NULL;

		if ( !pfnSetAccountInterface )
			pfnSetAccountInterface = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.SetAccountInterface" );

		UOnlineSubsystem_eventSetAccountInterface_Parms SetAccountInterface_Parms;
		SetAccountInterface_Parms.NewInterface = NewInterface;

		this->ProcessEvent( pfnSetAccountInterface, &SetAccountInterface_Parms, NULL );

		return SetAccountInterface_Parms.ReturnValue;
	};

	void eventExit ()
	{
		static UFunction* pfnExit = NULL;

		if ( !pfnExit )
			pfnExit = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.Exit" );

		UOnlineSubsystem_eventExit_Parms Exit_Parms;

		this->ProcessEvent( pfnExit, &Exit_Parms, NULL );
	};

	bool eventPostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.PostInit" );

		UOnlineSubsystem_eventPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );

		return PostInit_Parms.ReturnValue;
	};

	bool eventInit ()
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function Engine.OnlineSubsystem.Init" );

		UOnlineSubsystem_eventInit_Parms Init_Parms;

		pfnInit->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInit, &Init_Parms, NULL );
		pfnInit->FunctionFlags |= 0x400;

		return Init_Parms.ReturnValue;
	};

};

UClass* UOnlineSubsystem::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif