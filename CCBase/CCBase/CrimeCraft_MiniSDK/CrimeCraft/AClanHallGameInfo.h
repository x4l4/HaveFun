/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AClanHallGameInfo.h
// Date: 06/16/2011 @ 05:19:41.905
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AClanHallGameInfo_execRefreshVisualUpgrades_Parms
{
};

struct AClanHallGameInfo_execOnRealmEvent_Parms
{
	unsigned char EventId;
	void* InExtendedParams;
};

struct AClanHallGameInfo_execOnClanLogoChanged_Parms
{
	unsigned char EventId;
	void* InExtendedParams;
};

struct AClanHallGameInfo_eventGameEnding_Parms
{
};// FUNC_Event

struct AClanHallGameInfo_execStartMatch_Parms
{
};

struct AClanHallGameInfo_eventGetPresetsManager_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AClanHallGameInfo_execUpdateClanLogo_Parms
{
};// FUNC_Native

struct AClanHallGameInfo_execInitContent_Parms
{
};// FUNC_Native

struct AClanHallGameInfo_execSendEnterLobby_Parms
{
};// FUNC_Native

struct AClanHallGameInfo_execPlacePlayer_Parms
{
};// FUNC_Native

struct AClanHallGameInfo_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

// (0x3A0 - 0x434)
class AClanHallGameInfo : public ALobbyGameInfo
{
public:
	void*                                              PresetsManager;                              // 0x03A0 (0x0004)
	struct FName                                       ClanLogoTextureParam;                        // 0x03A4 (0x0008)
	struct FName                                       ClanLogoColorParam;                          // 0x03AC (0x0008)
	struct FName                                       ClanHallStaticMeshName;                      // 0x03B4 (0x0008)
	void*                                              Mtl;                                         // 0x03BC (0x0004)
	int                                                LogoId;                                      // 0x03C0 (0x0004)
	int                                                LogoColorId;                                 // 0x03C4 (0x0004)
	struct FString                                     ClanSecretaryName;                           // 0x03C8 (0x000C)
	struct FString                                     ClanVendorName;                              // 0x03D4 (0x000C)
	struct FString                                     ClanMailBoxName;                             // 0x03E0 (0x000C)
	struct FString                                     ClanPorterName;                              // 0x03EC (0x000C)
	struct FString                                     ClanBankName;                                // 0x03F8 (0x000C)
	struct FString                                     ClanEventBoardName;                          // 0x0404 (0x000C)
	struct FString                                     ClanClubPorterName;                          // 0x0410 (0x000C)
	struct FScriptDelegate                             __OnClanLogoChanged__Delegate;               // 0x041C (0x000C)
	struct FScriptDelegate                             __OnRealmEvent__Delegate;                    // 0x0428 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.ClanHallGameInfo" );

		return ClassPointer;
	};

public:
	void RefreshVisualUpgrades ()
	{
		static UFunction* pfnRefreshVisualUpgrades = NULL;

		if ( !pfnRefreshVisualUpgrades )
			pfnRefreshVisualUpgrades = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.RefreshVisualUpgrades" );

		AClanHallGameInfo_execRefreshVisualUpgrades_Parms RefreshVisualUpgrades_Parms;

		this->ProcessEvent( pfnRefreshVisualUpgrades, &RefreshVisualUpgrades_Parms, NULL );
	};

	void OnRealmEvent ( unsigned char EventId, void* InExtendedParams )
	{
		static UFunction* pfnOnRealmEvent = NULL;

		if ( !pfnOnRealmEvent )
			pfnOnRealmEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.OnRealmEvent" );

		AClanHallGameInfo_execOnRealmEvent_Parms OnRealmEvent_Parms;
		OnRealmEvent_Parms.EventId = EventId;
		OnRealmEvent_Parms.InExtendedParams = InExtendedParams;

		this->ProcessEvent( pfnOnRealmEvent, &OnRealmEvent_Parms, NULL );
	};

	void OnClanLogoChanged ( unsigned char EventId, void* InExtendedParams )
	{
		static UFunction* pfnOnClanLogoChanged = NULL;

		if ( !pfnOnClanLogoChanged )
			pfnOnClanLogoChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.OnClanLogoChanged" );

		AClanHallGameInfo_execOnClanLogoChanged_Parms OnClanLogoChanged_Parms;
		OnClanLogoChanged_Parms.EventId = EventId;
		OnClanLogoChanged_Parms.InExtendedParams = InExtendedParams;

		this->ProcessEvent( pfnOnClanLogoChanged, &OnClanLogoChanged_Parms, NULL );
	};

	void eventGameEnding ()
	{
		static UFunction* pfnGameEnding = NULL;

		if ( !pfnGameEnding )
			pfnGameEnding = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.GameEnding" );

		AClanHallGameInfo_eventGameEnding_Parms GameEnding_Parms;

		this->ProcessEvent( pfnGameEnding, &GameEnding_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.StartMatch" );

		AClanHallGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void* eventGetPresetsManager ()
	{
		static UFunction* pfnGetPresetsManager = NULL;

		if ( !pfnGetPresetsManager )
			pfnGetPresetsManager = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.GetPresetsManager" );

		AClanHallGameInfo_eventGetPresetsManager_Parms GetPresetsManager_Parms;

		this->ProcessEvent( pfnGetPresetsManager, &GetPresetsManager_Parms, NULL );

		return GetPresetsManager_Parms.ReturnValue;
	};

	void UpdateClanLogo ()
	{
		static UFunction* pfnUpdateClanLogo = NULL;

		if ( !pfnUpdateClanLogo )
			pfnUpdateClanLogo = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.UpdateClanLogo" );

		AClanHallGameInfo_execUpdateClanLogo_Parms UpdateClanLogo_Parms;

		pfnUpdateClanLogo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateClanLogo, &UpdateClanLogo_Parms, NULL );
		pfnUpdateClanLogo->FunctionFlags |= 0x400;
	};

	void InitContent ()
	{
		static UFunction* pfnInitContent = NULL;

		if ( !pfnInitContent )
			pfnInitContent = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.InitContent" );

		AClanHallGameInfo_execInitContent_Parms InitContent_Parms;

		pfnInitContent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitContent, &InitContent_Parms, NULL );
		pfnInitContent->FunctionFlags |= 0x400;
	};

	void SendEnterLobby ()
	{
		static UFunction* pfnSendEnterLobby = NULL;

		if ( !pfnSendEnterLobby )
			pfnSendEnterLobby = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.SendEnterLobby" );

		AClanHallGameInfo_execSendEnterLobby_Parms SendEnterLobby_Parms;

		pfnSendEnterLobby->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSendEnterLobby, &SendEnterLobby_Parms, NULL );
		pfnSendEnterLobby->FunctionFlags |= 0x400;
	};

	void PlacePlayer ()
	{
		static UFunction* pfnPlacePlayer = NULL;

		if ( !pfnPlacePlayer )
			pfnPlacePlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.PlacePlayer" );

		AClanHallGameInfo_execPlacePlayer_Parms PlacePlayer_Parms;

		pfnPlacePlayer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlacePlayer, &PlacePlayer_Parms, NULL );
		pfnPlacePlayer->FunctionFlags |= 0x400;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.ClanHallGameInfo.RatePlayerStart" );

		AClanHallGameInfo_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

};

UClass* AClanHallGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif