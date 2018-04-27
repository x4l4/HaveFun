/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ALobbyGameInfo.h
// Date: 06/16/2011 @ 05:19:41.903
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ALobbyGameInfo_execSetPlayerDefaults_Parms
{
	class APawn* PlayerPawn;
};

struct ALobbyGameInfo_execTick_Parms
{
	float DeltaTime;
};

struct ALobbyGameInfo_execStartMatch_Parms
{
};

struct ALobbyGameInfo_execLocalPlayerController_Parms
{
	class ACCLobbyController* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ALobbyGameInfo_execGetLevelById_Parms
{
	int LevelId;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ALobbyGameInfo_execUpdateLogic_Parms
{
	float DeltaTime;
};// FUNC_Native

struct ALobbyGameInfo_execPlacePlayer_Parms
{
};// FUNC_Native

struct ALobbyGameInfo_execSendEnterLobby_Parms
{
};// FUNC_Native

// (0x394 - 0x3A0)
class ALobbyGameInfo : public AGameInfo
{
public:
	int                                                OnlyOneLobbyNPC;                             // 0x0394 (0x0004)
	unsigned long                                      DrawNPCPath : 1;                             // 0x0398 (0x0004) [0x00000001]
	int                                                DrawPathFor;                                 // 0x039C (0x0004)

	// PendingMatch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.LobbyGameInfo" );

		return ClassPointer;
	};

public:
	void SetPlayerDefaults ( class APawn* PlayerPawn )
	{
		static UFunction* pfnSetPlayerDefaults = NULL;

		if ( !pfnSetPlayerDefaults )
			pfnSetPlayerDefaults = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.SetPlayerDefaults" );

		ALobbyGameInfo_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;
		SetPlayerDefaults_Parms.PlayerPawn = PlayerPawn;

		this->ProcessEvent( pfnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.Tick" );

		ALobbyGameInfo_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.StartMatch" );

		ALobbyGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	class ACCLobbyController* LocalPlayerController ()
	{
		static UFunction* pfnLocalPlayerController = NULL;

		if ( !pfnLocalPlayerController )
			pfnLocalPlayerController = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.LocalPlayerController" );

		ALobbyGameInfo_execLocalPlayerController_Parms LocalPlayerController_Parms;

		pfnLocalPlayerController->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLocalPlayerController, &LocalPlayerController_Parms, NULL );
		pfnLocalPlayerController->FunctionFlags |= 0x400;

		return LocalPlayerController_Parms.ReturnValue;
	};

	struct FString GetLevelById ( int LevelId )
	{
		static UFunction* pfnGetLevelById = NULL;

		if ( !pfnGetLevelById )
			pfnGetLevelById = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.GetLevelById" );

		ALobbyGameInfo_execGetLevelById_Parms GetLevelById_Parms;
		GetLevelById_Parms.LevelId = LevelId;

		pfnGetLevelById->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetLevelById, &GetLevelById_Parms, NULL );
		pfnGetLevelById->FunctionFlags |= 0x400;

		return GetLevelById_Parms.ReturnValue;
	};

	void UpdateLogic ( float DeltaTime )
	{
		static UFunction* pfnUpdateLogic = NULL;

		if ( !pfnUpdateLogic )
			pfnUpdateLogic = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.UpdateLogic" );

		ALobbyGameInfo_execUpdateLogic_Parms UpdateLogic_Parms;
		UpdateLogic_Parms.DeltaTime = DeltaTime;

		pfnUpdateLogic->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateLogic, &UpdateLogic_Parms, NULL );
		pfnUpdateLogic->FunctionFlags |= 0x400;
	};

	void PlacePlayer ()
	{
		static UFunction* pfnPlacePlayer = NULL;

		if ( !pfnPlacePlayer )
			pfnPlacePlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.PlacePlayer" );

		ALobbyGameInfo_execPlacePlayer_Parms PlacePlayer_Parms;

		pfnPlacePlayer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlacePlayer, &PlacePlayer_Parms, NULL );
		pfnPlacePlayer->FunctionFlags |= 0x400;
	};

	void SendEnterLobby ()
	{
		static UFunction* pfnSendEnterLobby = NULL;

		if ( !pfnSendEnterLobby )
			pfnSendEnterLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.LobbyGameInfo.SendEnterLobby" );

		ALobbyGameInfo_execSendEnterLobby_Parms SendEnterLobby_Parms;

		pfnSendEnterLobby->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSendEnterLobby, &SendEnterLobby_Parms, NULL );
		pfnSendEnterLobby->FunctionFlags |= 0x400;
	};

};

UClass* ALobbyGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif