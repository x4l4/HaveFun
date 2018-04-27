/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCBaseController.h
// Date: 06/16/2011 @ 05:19:40.47
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCBaseController_execclient_ShowLocalizedMessage_Parms
{
	struct FString msgId;
	unsigned char MsgType;
	float flLifetime;
};

struct ACCBaseController_execserver_ShowLocalizedMessage_Parms
{
	struct FString msgId;
	unsigned char MsgType;
	float flLifetime;
};

struct ACCBaseController_execClientHideGamePanel_Parms
{
};

struct ACCBaseController_execServerHideGamePanel_Parms
{
};

struct ACCBaseController_execClientQueueMessage_Parms
{
	struct FString Message;
	struct FString Caption;
};

struct ACCBaseController_execServerQueueMessage_Parms
{
	struct FString Value;
	struct FString Caption;
};

struct ACCBaseController_execClientSetLabelMissionValue_Parms
{
	struct FString Value;
	int iVal;
	int MaxVal;
};

struct ACCBaseController_execServerSetLabelMissionValue_Parms
{
	struct FString Value;
	int iVal;
	int MaxVal;
};

struct ACCBaseController_execClientToggleReminder_Parms
{
	struct FString Value;
};

struct ACCBaseController_execServerToggleReminder_Parms
{
	struct FString Value;
};

struct ACCBaseController_eventOnSwitchGame_Parms
{
};// FUNC_Event

struct ACCBaseController_execShowMyPawn_Parms
{
};// FUNC_Exec

struct ACCBaseController_execHideMyPawn_Parms
{
};// FUNC_Exec

struct ACCBaseController_execEnableCheats_Parms
{
};// FUNC_Exec

struct ACCBaseController_execTestTestTest_Parms
{
};// FUNC_Exec

struct ACCBaseController_execRetrieveAbilityInfoPersistent_Parms
{
	int AbilityId;
	void* _AbilityManager;
	struct FCCAbilityDesc ReturnValue; // CPF_ReturnParm
};

struct ACCBaseController_execIsAbilityPassive_Parms
{
	struct FCCAbilityDesc Desc; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCBaseController_execViewNextBot_Parms
{
	int Dir;
};

struct ACCBaseController_execEndSpectator_Parms
{
};

struct ACCBaseController_execStartSpectator_Parms
{
};

struct ACCBaseController_execDoToggleSpectator_Parms
{
};

struct ACCBaseController_execServerDoToggleSpectator_Parms
{
};

struct ACCBaseController_execToggleSpectator_Parms
{
};// FUNC_Exec

struct ACCBaseController_execclient_sleep_Parms
{
	int miliseconds;
};// FUNC_Exec

struct ACCBaseController_execMakeClientSleep_Parms
{
	int miliseconds;
};// FUNC_Native

struct ACCBaseController_execDoGod_Parms
{
};

struct ACCBaseController_execServerDoGod_Parms
{
};

struct ACCBaseController_execttGod_Parms
{
};// FUNC_Exec

struct ACCBaseController_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCBaseController_execReceiveMailUpdate_Parms
{
	int NumberOfMessages;
};// FUNC_Exec FUNC_Native

struct ACCBaseController_execReceiveMailInit_Parms
{
	int NumberOfMessages;
};// FUNC_Exec FUNC_Native

struct ACCBaseController_execSetNewMap_Parms
{
};// FUNC_Exec

struct ACCBaseController_execServerSetNewMap_Parms
{
};

struct ACCBaseController_execReceiveChat_Parms
{
	int NumberOfMessages;
	int InSleep;
};// FUNC_Exec FUNC_Native

struct ACCBaseController_execPerformGC_Parms
{
};// FUNC_Exec FUNC_Native

struct ACCBaseController_execSendChatMessage_Parms
{
	struct FString ChatMessage;
};

struct ACCBaseController_execSendRemoteEvent_Parms
{
	struct FName EventName;
};// FUNC_Exec

struct ACCBaseController_execPreBeginPlay_Parms
{
};

struct ACCBaseController_execStartLoadingProcess_Parms
{
	unsigned long bStart : 1;
};

struct ACCBaseController_eventStartLoadingLevel_Parms
{
	struct FString MapName;
	int GameType;
	int InId;
	struct FString LoadingScreen;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCBaseController_execSetResolution_Parms
{
	int X;
	int Y;
};// FUNC_Exec

struct ACCBaseController_execSetGeneralQuality_Parms
{
	int QL;
};// FUNC_Exec

struct ACCBaseController_execSetDebugConditions_Parms
{
	int Value;
};// FUNC_Exec

struct ACCBaseController_execCloseOptionsMenu_Parms
{
};

struct ACCBaseController_execOpenOptionsMenu_Parms
{
};

struct ACCBaseController_eventReopenMenu_Parms
{
	void* MenuInstance;
	unsigned long bSkipAnimation : 1;
};// FUNC_Event

struct ACCBaseController_eventCloseMenu_Parms
{
	void* MenuInstance;
	unsigned long bSkipAnimation : 1;
};// FUNC_Event

struct ACCBaseController_eventOpenMenu_Parms
{
	void* MenuTemplate;
	unsigned long bSkipAnimation : 1;
	unsigned char ForcedPriority;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCBaseController_execOpenUIMenu_Parms
{
	struct FString MenuPath;
};// FUNC_Exec

struct ACCBaseController_execHideStandaloneMenu_Parms
{
	void* MenuTemplate;
};

struct ACCBaseController_execShowStandaloneMenu_Parms
{
	void* MenuTemplate;
};

struct ACCBaseController_execOnLogoutConfirmed_Parms
{
	unsigned char Result;
};

struct ACCBaseController_eventRequestLogout_Parms
{
};// FUNC_Event

struct ACCBaseController_execOnDisconnectConfirmed_Parms
{
	unsigned char Result;
};

struct ACCBaseController_eventRequestDisconnect_Parms
{
};// FUNC_Event

struct ACCBaseController_execOnSwitchConfirmed_Parms
{
	unsigned char Result;
};

struct ACCBaseController_eventRequestSwitchApplication_Parms
{
};// FUNC_Event

struct ACCBaseController_execOnExitConfirmed_Parms
{
	unsigned char Result;
};

struct ACCBaseController_eventRequestExitGame_Parms
{
};// FUNC_Event

struct ACCBaseController_execCloseMessageBox_Parms
{
};

struct ACCBaseController_execMessageBoxConfirm_Parms
{
	unsigned char Result;
};

struct ACCBaseController_eventShowMessageBoxSys_Parms
{
	struct FString Message;
	struct FString Title;
	unsigned char Type;
};// FUNC_Final FUNC_Event

struct ACCBaseController_execCloseAllNotifies_Parms
{
};

struct ACCBaseController_execShowMessageBox_Parms
{
	struct FString Message;
	struct FString Title;
	unsigned char Type;
	struct FScriptDelegate CloseMethod;
	unsigned char align;
	unsigned long bHideActiveMenus : 1;
	float AutoCloseTime;
};

struct ACCBaseController_execShowNotifyAtCoords_Parms
{
	struct FString Message;
	float X;
	float Y;
	unsigned long bForceFlip : 1;
	float DelayTime;
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCBaseController_execExit_Parms
{
	unsigned char MsgResult;
};

struct ACCBaseController_execOpenEntryLevel_Parms
{
	unsigned char MsgResult;
};

struct ACCBaseController_eventOnDisconnectFromServer_Parms
{
};// FUNC_Event

struct ACCBaseController_execIsActiveInternetConnection_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCBaseController_execLogoutToCharacterList_Parms
{
};// FUNC_Native

struct ACCBaseController_execDisconnectFromServer_Parms
{
};// FUNC_Native

struct ACCBaseController_execLoginToServer_Parms
{
	struct FString LoginName;
	struct FString Password;
	struct FString InServerAddressOverride;
	int InPortOverride;
};// FUNC_Native

// (0x5B4 - 0x64C)
class ACCBaseController : public APlayerController
{
public:
	void*                                              PersistentAbilityManager;                    // 0x05B4 (0x0004)
	void*                                              NetworkConfig;                               // 0x05B8 (0x0004)
	void*                                              UserNetworkConfig;                           // 0x05BC (0x0004)
	void*                                              UIConfig;                                    // 0x05C0 (0x0004)
	TArray< void* >                                    ActiveMessageBoxes;                          // 0x05C4 (0x000C)
	void*                                              MessageBoxOkTemplate;                        // 0x05D0 (0x0004)
	void*                                              MessageBoxYesNoTemplate;                     // 0x05D4 (0x0004)
	void*                                              MessageBoxYesNoCancelTemplate;               // 0x05D8 (0x0004)
	void*                                              Entry_MessageBoxOkTemplate;                  // 0x05DC (0x0004)
	void*                                              Entry_MessageBoxYesNoTemplate;               // 0x05E0 (0x0004)
	void*                                              Entry_MessageBoxYesNoCancelTemplate;         // 0x05E4 (0x0004)
	void*                                              MessageBoxNotify;                            // 0x05E8 (0x0004)
	void*                                              MessageBox_Handicap;                         // 0x05EC (0x0004)
	void*                                              LoadingScreenMenu;                           // 0x05F0 (0x0004)
	unsigned long                                      bLoadingProgress : 1;                        // 0x05F4 (0x0004) [0x00000001]
	unsigned long                                      bQueryExit : 1;                              // 0x05F4 (0x0004) [0x00000002]
	void*                                              ContextMenuInstance;                         // 0x05F8 (0x0004)
	void*                                              ContextMenuTemplate;                         // 0x05FC (0x0004)
	void*                                              OptionsSceneTemplate;                        // 0x0600 (0x0004)
	void*                                              OptionsScene;                                // 0x0604 (0x0004)
	struct FString                                     ServerNotRespondingMsg;                      // 0x0608 (0x000C)
	struct FString                                     ServerNotRespondingTitle;                    // 0x0614 (0x000C)
	struct FString                                     ConnectionLostMsg;                           // 0x0620 (0x000C)
	struct FString                                     ConnectionLostTitle;                         // 0x062C (0x000C)
	struct FName                                       LastState;                                   // 0x0638 (0x0008)
	class APawn*                                       LastPawn;                                    // 0x0640 (0x0004)
	void*                                              TutorialSystemInst;                          // 0x0644 (0x0004)
	void*                                              TutorialSystemTemplate;                      // 0x0648 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCBaseController" );

		return ClassPointer;
	};

public:
	void client_ShowLocalizedMessage ( struct FString msgId, unsigned char MsgType, float flLifetime )
	{
		static UFunction* pfnclient_ShowLocalizedMessage = NULL;

		if ( !pfnclient_ShowLocalizedMessage )
			pfnclient_ShowLocalizedMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.client_ShowLocalizedMessage" );

		ACCBaseController_execclient_ShowLocalizedMessage_Parms client_ShowLocalizedMessage_Parms;
		memcpy( &client_ShowLocalizedMessage_Parms.msgId, &msgId, 0xC );
		client_ShowLocalizedMessage_Parms.MsgType = MsgType;
		client_ShowLocalizedMessage_Parms.flLifetime = flLifetime;

		this->ProcessEvent( pfnclient_ShowLocalizedMessage, &client_ShowLocalizedMessage_Parms, NULL );
	};

	void server_ShowLocalizedMessage ( struct FString msgId, unsigned char MsgType, float flLifetime )
	{
		static UFunction* pfnserver_ShowLocalizedMessage = NULL;

		if ( !pfnserver_ShowLocalizedMessage )
			pfnserver_ShowLocalizedMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.server_ShowLocalizedMessage" );

		ACCBaseController_execserver_ShowLocalizedMessage_Parms server_ShowLocalizedMessage_Parms;
		memcpy( &server_ShowLocalizedMessage_Parms.msgId, &msgId, 0xC );
		server_ShowLocalizedMessage_Parms.MsgType = MsgType;
		server_ShowLocalizedMessage_Parms.flLifetime = flLifetime;

		this->ProcessEvent( pfnserver_ShowLocalizedMessage, &server_ShowLocalizedMessage_Parms, NULL );
	};

	void ClientHideGamePanel ()
	{
		static UFunction* pfnClientHideGamePanel = NULL;

		if ( !pfnClientHideGamePanel )
			pfnClientHideGamePanel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ClientHideGamePanel" );

		ACCBaseController_execClientHideGamePanel_Parms ClientHideGamePanel_Parms;

		this->ProcessEvent( pfnClientHideGamePanel, &ClientHideGamePanel_Parms, NULL );
	};

	void ServerHideGamePanel ()
	{
		static UFunction* pfnServerHideGamePanel = NULL;

		if ( !pfnServerHideGamePanel )
			pfnServerHideGamePanel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerHideGamePanel" );

		ACCBaseController_execServerHideGamePanel_Parms ServerHideGamePanel_Parms;

		this->ProcessEvent( pfnServerHideGamePanel, &ServerHideGamePanel_Parms, NULL );
	};

	void ClientQueueMessage ( struct FString Message/*CPF_OptionalParm*/, struct FString Caption/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnClientQueueMessage = NULL;

		if ( !pfnClientQueueMessage )
			pfnClientQueueMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ClientQueueMessage" );

		ACCBaseController_execClientQueueMessage_Parms ClientQueueMessage_Parms;
		memcpy( &ClientQueueMessage_Parms.Message, &Message, 0xC );
		memcpy( &ClientQueueMessage_Parms.Caption, &Caption, 0xC );

		this->ProcessEvent( pfnClientQueueMessage, &ClientQueueMessage_Parms, NULL );
	};

	void ServerQueueMessage ( struct FString Value, struct FString Caption/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerQueueMessage = NULL;

		if ( !pfnServerQueueMessage )
			pfnServerQueueMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerQueueMessage" );

		ACCBaseController_execServerQueueMessage_Parms ServerQueueMessage_Parms;
		memcpy( &ServerQueueMessage_Parms.Value, &Value, 0xC );
		memcpy( &ServerQueueMessage_Parms.Caption, &Caption, 0xC );

		this->ProcessEvent( pfnServerQueueMessage, &ServerQueueMessage_Parms, NULL );
	};

	void ClientSetLabelMissionValue ( struct FString Value, int iVal, int MaxVal )
	{
		static UFunction* pfnClientSetLabelMissionValue = NULL;

		if ( !pfnClientSetLabelMissionValue )
			pfnClientSetLabelMissionValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ClientSetLabelMissionValue" );

		ACCBaseController_execClientSetLabelMissionValue_Parms ClientSetLabelMissionValue_Parms;
		memcpy( &ClientSetLabelMissionValue_Parms.Value, &Value, 0xC );
		ClientSetLabelMissionValue_Parms.iVal = iVal;
		ClientSetLabelMissionValue_Parms.MaxVal = MaxVal;

		this->ProcessEvent( pfnClientSetLabelMissionValue, &ClientSetLabelMissionValue_Parms, NULL );
	};

	void ServerSetLabelMissionValue ( struct FString Value, int iVal, int MaxVal )
	{
		static UFunction* pfnServerSetLabelMissionValue = NULL;

		if ( !pfnServerSetLabelMissionValue )
			pfnServerSetLabelMissionValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerSetLabelMissionValue" );

		ACCBaseController_execServerSetLabelMissionValue_Parms ServerSetLabelMissionValue_Parms;
		memcpy( &ServerSetLabelMissionValue_Parms.Value, &Value, 0xC );
		ServerSetLabelMissionValue_Parms.iVal = iVal;
		ServerSetLabelMissionValue_Parms.MaxVal = MaxVal;

		this->ProcessEvent( pfnServerSetLabelMissionValue, &ServerSetLabelMissionValue_Parms, NULL );
	};

	void ClientToggleReminder ( struct FString Value )
	{
		static UFunction* pfnClientToggleReminder = NULL;

		if ( !pfnClientToggleReminder )
			pfnClientToggleReminder = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ClientToggleReminder" );

		ACCBaseController_execClientToggleReminder_Parms ClientToggleReminder_Parms;
		memcpy( &ClientToggleReminder_Parms.Value, &Value, 0xC );

		this->ProcessEvent( pfnClientToggleReminder, &ClientToggleReminder_Parms, NULL );
	};

	void ServerToggleReminder ( struct FString Value )
	{
		static UFunction* pfnServerToggleReminder = NULL;

		if ( !pfnServerToggleReminder )
			pfnServerToggleReminder = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerToggleReminder" );

		ACCBaseController_execServerToggleReminder_Parms ServerToggleReminder_Parms;
		memcpy( &ServerToggleReminder_Parms.Value, &Value, 0xC );

		this->ProcessEvent( pfnServerToggleReminder, &ServerToggleReminder_Parms, NULL );
	};

	void eventOnSwitchGame ()
	{
		static UFunction* pfnOnSwitchGame = NULL;

		if ( !pfnOnSwitchGame )
			pfnOnSwitchGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnSwitchGame" );

		ACCBaseController_eventOnSwitchGame_Parms OnSwitchGame_Parms;

		this->ProcessEvent( pfnOnSwitchGame, &OnSwitchGame_Parms, NULL );
	};

	void ShowMyPawn ()
	{
		static UFunction* pfnShowMyPawn = NULL;

		if ( !pfnShowMyPawn )
			pfnShowMyPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ShowMyPawn" );

		ACCBaseController_execShowMyPawn_Parms ShowMyPawn_Parms;

		this->ProcessEvent( pfnShowMyPawn, &ShowMyPawn_Parms, NULL );
	};

	void HideMyPawn ()
	{
		static UFunction* pfnHideMyPawn = NULL;

		if ( !pfnHideMyPawn )
			pfnHideMyPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.HideMyPawn" );

		ACCBaseController_execHideMyPawn_Parms HideMyPawn_Parms;

		this->ProcessEvent( pfnHideMyPawn, &HideMyPawn_Parms, NULL );
	};

	void EnableCheats ()
	{
		static UFunction* pfnEnableCheats = NULL;

		if ( !pfnEnableCheats )
			pfnEnableCheats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.EnableCheats" );

		ACCBaseController_execEnableCheats_Parms EnableCheats_Parms;

		this->ProcessEvent( pfnEnableCheats, &EnableCheats_Parms, NULL );
	};

	void TestTestTest ()
	{
		static UFunction* pfnTestTestTest = NULL;

		if ( !pfnTestTestTest )
			pfnTestTestTest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.TestTestTest" );

		ACCBaseController_execTestTestTest_Parms TestTestTest_Parms;

		this->ProcessEvent( pfnTestTestTest, &TestTestTest_Parms, NULL );
	};

	struct FCCAbilityDesc RetrieveAbilityInfoPersistent ( int AbilityId, void* _AbilityManager )
	{
		static UFunction* pfnRetrieveAbilityInfoPersistent = NULL;

		if ( !pfnRetrieveAbilityInfoPersistent )
			pfnRetrieveAbilityInfoPersistent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.RetrieveAbilityInfoPersistent" );

		ACCBaseController_execRetrieveAbilityInfoPersistent_Parms RetrieveAbilityInfoPersistent_Parms;
		RetrieveAbilityInfoPersistent_Parms.AbilityId = AbilityId;
		RetrieveAbilityInfoPersistent_Parms._AbilityManager = _AbilityManager;

		this->ProcessEvent( pfnRetrieveAbilityInfoPersistent, &RetrieveAbilityInfoPersistent_Parms, NULL );

		return RetrieveAbilityInfoPersistent_Parms.ReturnValue;
	};

	bool IsAbilityPassive ( struct FCCAbilityDesc* Desc )
	{
		static UFunction* pfnIsAbilityPassive = NULL;

		if ( !pfnIsAbilityPassive )
			pfnIsAbilityPassive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.IsAbilityPassive" );

		ACCBaseController_execIsAbilityPassive_Parms IsAbilityPassive_Parms;

		this->ProcessEvent( pfnIsAbilityPassive, &IsAbilityPassive_Parms, NULL );

		if ( Desc )
			memcpy( Desc, &IsAbilityPassive_Parms.Desc, 0x11C ); // CPF_OutParm

		return IsAbilityPassive_Parms.ReturnValue;
	};

	void ViewNextBot ( int Dir )
	{
		static UFunction* pfnViewNextBot = NULL;

		if ( !pfnViewNextBot )
			pfnViewNextBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ViewNextBot" );

		ACCBaseController_execViewNextBot_Parms ViewNextBot_Parms;
		ViewNextBot_Parms.Dir = Dir;

		this->ProcessEvent( pfnViewNextBot, &ViewNextBot_Parms, NULL );
	};

	void EndSpectator ()
	{
		static UFunction* pfnEndSpectator = NULL;

		if ( !pfnEndSpectator )
			pfnEndSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.EndSpectator" );

		ACCBaseController_execEndSpectator_Parms EndSpectator_Parms;

		this->ProcessEvent( pfnEndSpectator, &EndSpectator_Parms, NULL );
	};

	void StartSpectator ()
	{
		static UFunction* pfnStartSpectator = NULL;

		if ( !pfnStartSpectator )
			pfnStartSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.StartSpectator" );

		ACCBaseController_execStartSpectator_Parms StartSpectator_Parms;

		this->ProcessEvent( pfnStartSpectator, &StartSpectator_Parms, NULL );
	};

	void DoToggleSpectator ()
	{
		static UFunction* pfnDoToggleSpectator = NULL;

		if ( !pfnDoToggleSpectator )
			pfnDoToggleSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.DoToggleSpectator" );

		ACCBaseController_execDoToggleSpectator_Parms DoToggleSpectator_Parms;

		this->ProcessEvent( pfnDoToggleSpectator, &DoToggleSpectator_Parms, NULL );
	};

	void ServerDoToggleSpectator ()
	{
		static UFunction* pfnServerDoToggleSpectator = NULL;

		if ( !pfnServerDoToggleSpectator )
			pfnServerDoToggleSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerDoToggleSpectator" );

		ACCBaseController_execServerDoToggleSpectator_Parms ServerDoToggleSpectator_Parms;

		this->ProcessEvent( pfnServerDoToggleSpectator, &ServerDoToggleSpectator_Parms, NULL );
	};

	void ToggleSpectator ()
	{
		static UFunction* pfnToggleSpectator = NULL;

		if ( !pfnToggleSpectator )
			pfnToggleSpectator = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ToggleSpectator" );

		ACCBaseController_execToggleSpectator_Parms ToggleSpectator_Parms;

		this->ProcessEvent( pfnToggleSpectator, &ToggleSpectator_Parms, NULL );
	};

	void client_sleep ( int miliseconds )
	{
		static UFunction* pfnclient_sleep = NULL;

		if ( !pfnclient_sleep )
			pfnclient_sleep = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.client_sleep" );

		ACCBaseController_execclient_sleep_Parms client_sleep_Parms;
		client_sleep_Parms.miliseconds = miliseconds;

		this->ProcessEvent( pfnclient_sleep, &client_sleep_Parms, NULL );
	};

	void MakeClientSleep ( int miliseconds )
	{
		static UFunction* pfnMakeClientSleep = NULL;

		if ( !pfnMakeClientSleep )
			pfnMakeClientSleep = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.MakeClientSleep" );

		ACCBaseController_execMakeClientSleep_Parms MakeClientSleep_Parms;
		MakeClientSleep_Parms.miliseconds = miliseconds;

		pfnMakeClientSleep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMakeClientSleep, &MakeClientSleep_Parms, NULL );
		pfnMakeClientSleep->FunctionFlags |= 0x400;
	};

	void DoGod ()
	{
		static UFunction* pfnDoGod = NULL;

		if ( !pfnDoGod )
			pfnDoGod = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.DoGod" );

		ACCBaseController_execDoGod_Parms DoGod_Parms;

		this->ProcessEvent( pfnDoGod, &DoGod_Parms, NULL );
	};

	void ServerDoGod ()
	{
		static UFunction* pfnServerDoGod = NULL;

		if ( !pfnServerDoGod )
			pfnServerDoGod = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerDoGod" );

		ACCBaseController_execServerDoGod_Parms ServerDoGod_Parms;

		this->ProcessEvent( pfnServerDoGod, &ServerDoGod_Parms, NULL );
	};

	void ttGod ()
	{
		static UFunction* pfnttGod = NULL;

		if ( !pfnttGod )
			pfnttGod = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ttGod" );

		ACCBaseController_execttGod_Parms ttGod_Parms;

		this->ProcessEvent( pfnttGod, &ttGod_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.Destroyed" );

		ACCBaseController_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void ReceiveMailUpdate ( int NumberOfMessages )
	{
		static UFunction* pfnReceiveMailUpdate = NULL;

		if ( !pfnReceiveMailUpdate )
			pfnReceiveMailUpdate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ReceiveMailUpdate" );

		ACCBaseController_execReceiveMailUpdate_Parms ReceiveMailUpdate_Parms;
		ReceiveMailUpdate_Parms.NumberOfMessages = NumberOfMessages;

		pfnReceiveMailUpdate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReceiveMailUpdate, &ReceiveMailUpdate_Parms, NULL );
		pfnReceiveMailUpdate->FunctionFlags |= 0x400;
	};

	void ReceiveMailInit ( int NumberOfMessages )
	{
		static UFunction* pfnReceiveMailInit = NULL;

		if ( !pfnReceiveMailInit )
			pfnReceiveMailInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ReceiveMailInit" );

		ACCBaseController_execReceiveMailInit_Parms ReceiveMailInit_Parms;
		ReceiveMailInit_Parms.NumberOfMessages = NumberOfMessages;

		pfnReceiveMailInit->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReceiveMailInit, &ReceiveMailInit_Parms, NULL );
		pfnReceiveMailInit->FunctionFlags |= 0x400;
	};

	void SetNewMap ()
	{
		static UFunction* pfnSetNewMap = NULL;

		if ( !pfnSetNewMap )
			pfnSetNewMap = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SetNewMap" );

		ACCBaseController_execSetNewMap_Parms SetNewMap_Parms;

		this->ProcessEvent( pfnSetNewMap, &SetNewMap_Parms, NULL );
	};

	void ServerSetNewMap ()
	{
		static UFunction* pfnServerSetNewMap = NULL;

		if ( !pfnServerSetNewMap )
			pfnServerSetNewMap = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ServerSetNewMap" );

		ACCBaseController_execServerSetNewMap_Parms ServerSetNewMap_Parms;

		this->ProcessEvent( pfnServerSetNewMap, &ServerSetNewMap_Parms, NULL );
	};

	void ReceiveChat ( int NumberOfMessages, int InSleep )
	{
		static UFunction* pfnReceiveChat = NULL;

		if ( !pfnReceiveChat )
			pfnReceiveChat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ReceiveChat" );

		ACCBaseController_execReceiveChat_Parms ReceiveChat_Parms;
		ReceiveChat_Parms.NumberOfMessages = NumberOfMessages;
		ReceiveChat_Parms.InSleep = InSleep;

		pfnReceiveChat->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReceiveChat, &ReceiveChat_Parms, NULL );
		pfnReceiveChat->FunctionFlags |= 0x400;
	};

	void PerformGC ()
	{
		static UFunction* pfnPerformGC = NULL;

		if ( !pfnPerformGC )
			pfnPerformGC = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.PerformGC" );

		ACCBaseController_execPerformGC_Parms PerformGC_Parms;

		pfnPerformGC->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPerformGC, &PerformGC_Parms, NULL );
		pfnPerformGC->FunctionFlags |= 0x400;
	};

	void SendChatMessage ( struct FString ChatMessage )
	{
		static UFunction* pfnSendChatMessage = NULL;

		if ( !pfnSendChatMessage )
			pfnSendChatMessage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SendChatMessage" );

		ACCBaseController_execSendChatMessage_Parms SendChatMessage_Parms;
		memcpy( &SendChatMessage_Parms.ChatMessage, &ChatMessage, 0xC );

		this->ProcessEvent( pfnSendChatMessage, &SendChatMessage_Parms, NULL );
	};

	void SendRemoteEvent ( struct FName EventName )
	{
		static UFunction* pfnSendRemoteEvent = NULL;

		if ( !pfnSendRemoteEvent )
			pfnSendRemoteEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SendRemoteEvent" );

		ACCBaseController_execSendRemoteEvent_Parms SendRemoteEvent_Parms;
		memcpy( &SendRemoteEvent_Parms.EventName, &EventName, 0x8 );

		this->ProcessEvent( pfnSendRemoteEvent, &SendRemoteEvent_Parms, NULL );
	};

	void PreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.PreBeginPlay" );

		ACCBaseController_execPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	void StartLoadingProcess ( unsigned long bStart )
	{
		static UFunction* pfnStartLoadingProcess = NULL;

		if ( !pfnStartLoadingProcess )
			pfnStartLoadingProcess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.StartLoadingProcess" );

		ACCBaseController_execStartLoadingProcess_Parms StartLoadingProcess_Parms;
		StartLoadingProcess_Parms.bStart = bStart;

		this->ProcessEvent( pfnStartLoadingProcess, &StartLoadingProcess_Parms, NULL );
	};

	void* eventStartLoadingLevel ( struct FString MapName, int GameType, int InId, struct FString LoadingScreen )
	{
		static UFunction* pfnStartLoadingLevel = NULL;

		if ( !pfnStartLoadingLevel )
			pfnStartLoadingLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.StartLoadingLevel" );

		ACCBaseController_eventStartLoadingLevel_Parms StartLoadingLevel_Parms;
		memcpy( &StartLoadingLevel_Parms.MapName, &MapName, 0xC );
		StartLoadingLevel_Parms.GameType = GameType;
		StartLoadingLevel_Parms.InId = InId;
		memcpy( &StartLoadingLevel_Parms.LoadingScreen, &LoadingScreen, 0xC );

		this->ProcessEvent( pfnStartLoadingLevel, &StartLoadingLevel_Parms, NULL );

		return StartLoadingLevel_Parms.ReturnValue;
	};

	void SetResolution ( int X, int Y )
	{
		static UFunction* pfnSetResolution = NULL;

		if ( !pfnSetResolution )
			pfnSetResolution = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SetResolution" );

		ACCBaseController_execSetResolution_Parms SetResolution_Parms;
		SetResolution_Parms.X = X;
		SetResolution_Parms.Y = Y;

		this->ProcessEvent( pfnSetResolution, &SetResolution_Parms, NULL );
	};

	void SetGeneralQuality ( int QL )
	{
		static UFunction* pfnSetGeneralQuality = NULL;

		if ( !pfnSetGeneralQuality )
			pfnSetGeneralQuality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SetGeneralQuality" );

		ACCBaseController_execSetGeneralQuality_Parms SetGeneralQuality_Parms;
		SetGeneralQuality_Parms.QL = QL;

		this->ProcessEvent( pfnSetGeneralQuality, &SetGeneralQuality_Parms, NULL );
	};

	void SetDebugConditions ( int Value )
	{
		static UFunction* pfnSetDebugConditions = NULL;

		if ( !pfnSetDebugConditions )
			pfnSetDebugConditions = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.SetDebugConditions" );

		ACCBaseController_execSetDebugConditions_Parms SetDebugConditions_Parms;
		SetDebugConditions_Parms.Value = Value;

		this->ProcessEvent( pfnSetDebugConditions, &SetDebugConditions_Parms, NULL );
	};

	void CloseOptionsMenu ()
	{
		static UFunction* pfnCloseOptionsMenu = NULL;

		if ( !pfnCloseOptionsMenu )
			pfnCloseOptionsMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.CloseOptionsMenu" );

		ACCBaseController_execCloseOptionsMenu_Parms CloseOptionsMenu_Parms;

		this->ProcessEvent( pfnCloseOptionsMenu, &CloseOptionsMenu_Parms, NULL );
	};

	void OpenOptionsMenu ()
	{
		static UFunction* pfnOpenOptionsMenu = NULL;

		if ( !pfnOpenOptionsMenu )
			pfnOpenOptionsMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OpenOptionsMenu" );

		ACCBaseController_execOpenOptionsMenu_Parms OpenOptionsMenu_Parms;

		this->ProcessEvent( pfnOpenOptionsMenu, &OpenOptionsMenu_Parms, NULL );
	};

	void eventReopenMenu ( void* MenuInstance, unsigned long bSkipAnimation/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnReopenMenu = NULL;

		if ( !pfnReopenMenu )
			pfnReopenMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ReopenMenu" );

		ACCBaseController_eventReopenMenu_Parms ReopenMenu_Parms;
		ReopenMenu_Parms.MenuInstance = MenuInstance;
		ReopenMenu_Parms.bSkipAnimation = bSkipAnimation;

		this->ProcessEvent( pfnReopenMenu, &ReopenMenu_Parms, NULL );
	};

	void eventCloseMenu ( void* MenuInstance, unsigned long bSkipAnimation/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCloseMenu = NULL;

		if ( !pfnCloseMenu )
			pfnCloseMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.CloseMenu" );

		ACCBaseController_eventCloseMenu_Parms CloseMenu_Parms;
		CloseMenu_Parms.MenuInstance = MenuInstance;
		CloseMenu_Parms.bSkipAnimation = bSkipAnimation;

		this->ProcessEvent( pfnCloseMenu, &CloseMenu_Parms, NULL );
	};

	void* eventOpenMenu ( void* MenuTemplate, unsigned long bSkipAnimation/*CPF_OptionalParm*/, unsigned char ForcedPriority/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnOpenMenu = NULL;

		if ( !pfnOpenMenu )
			pfnOpenMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OpenMenu" );

		ACCBaseController_eventOpenMenu_Parms OpenMenu_Parms;
		OpenMenu_Parms.MenuTemplate = MenuTemplate;
		OpenMenu_Parms.bSkipAnimation = bSkipAnimation;
		OpenMenu_Parms.ForcedPriority = ForcedPriority;

		this->ProcessEvent( pfnOpenMenu, &OpenMenu_Parms, NULL );

		return OpenMenu_Parms.ReturnValue;
	};

	void OpenUIMenu ( struct FString MenuPath )
	{
		static UFunction* pfnOpenUIMenu = NULL;

		if ( !pfnOpenUIMenu )
			pfnOpenUIMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OpenUIMenu" );

		ACCBaseController_execOpenUIMenu_Parms OpenUIMenu_Parms;
		memcpy( &OpenUIMenu_Parms.MenuPath, &MenuPath, 0xC );

		this->ProcessEvent( pfnOpenUIMenu, &OpenUIMenu_Parms, NULL );
	};

	void HideStandaloneMenu ( void* MenuTemplate )
	{
		static UFunction* pfnHideStandaloneMenu = NULL;

		if ( !pfnHideStandaloneMenu )
			pfnHideStandaloneMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.HideStandaloneMenu" );

		ACCBaseController_execHideStandaloneMenu_Parms HideStandaloneMenu_Parms;
		HideStandaloneMenu_Parms.MenuTemplate = MenuTemplate;

		this->ProcessEvent( pfnHideStandaloneMenu, &HideStandaloneMenu_Parms, NULL );
	};

	void ShowStandaloneMenu ( void* MenuTemplate )
	{
		static UFunction* pfnShowStandaloneMenu = NULL;

		if ( !pfnShowStandaloneMenu )
			pfnShowStandaloneMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ShowStandaloneMenu" );

		ACCBaseController_execShowStandaloneMenu_Parms ShowStandaloneMenu_Parms;
		ShowStandaloneMenu_Parms.MenuTemplate = MenuTemplate;

		this->ProcessEvent( pfnShowStandaloneMenu, &ShowStandaloneMenu_Parms, NULL );
	};

	void OnLogoutConfirmed ( unsigned char Result )
	{
		static UFunction* pfnOnLogoutConfirmed = NULL;

		if ( !pfnOnLogoutConfirmed )
			pfnOnLogoutConfirmed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnLogoutConfirmed" );

		ACCBaseController_execOnLogoutConfirmed_Parms OnLogoutConfirmed_Parms;
		OnLogoutConfirmed_Parms.Result = Result;

		this->ProcessEvent( pfnOnLogoutConfirmed, &OnLogoutConfirmed_Parms, NULL );
	};

	void eventRequestLogout ()
	{
		static UFunction* pfnRequestLogout = NULL;

		if ( !pfnRequestLogout )
			pfnRequestLogout = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.RequestLogout" );

		ACCBaseController_eventRequestLogout_Parms RequestLogout_Parms;

		this->ProcessEvent( pfnRequestLogout, &RequestLogout_Parms, NULL );
	};

	void OnDisconnectConfirmed ( unsigned char Result )
	{
		static UFunction* pfnOnDisconnectConfirmed = NULL;

		if ( !pfnOnDisconnectConfirmed )
			pfnOnDisconnectConfirmed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnDisconnectConfirmed" );

		ACCBaseController_execOnDisconnectConfirmed_Parms OnDisconnectConfirmed_Parms;
		OnDisconnectConfirmed_Parms.Result = Result;

		this->ProcessEvent( pfnOnDisconnectConfirmed, &OnDisconnectConfirmed_Parms, NULL );
	};

	void eventRequestDisconnect ()
	{
		static UFunction* pfnRequestDisconnect = NULL;

		if ( !pfnRequestDisconnect )
			pfnRequestDisconnect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.RequestDisconnect" );

		ACCBaseController_eventRequestDisconnect_Parms RequestDisconnect_Parms;

		this->ProcessEvent( pfnRequestDisconnect, &RequestDisconnect_Parms, NULL );
	};

	void OnSwitchConfirmed ( unsigned char Result )
	{
		static UFunction* pfnOnSwitchConfirmed = NULL;

		if ( !pfnOnSwitchConfirmed )
			pfnOnSwitchConfirmed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnSwitchConfirmed" );

		ACCBaseController_execOnSwitchConfirmed_Parms OnSwitchConfirmed_Parms;
		OnSwitchConfirmed_Parms.Result = Result;

		this->ProcessEvent( pfnOnSwitchConfirmed, &OnSwitchConfirmed_Parms, NULL );
	};

	void eventRequestSwitchApplication ()
	{
		static UFunction* pfnRequestSwitchApplication = NULL;

		if ( !pfnRequestSwitchApplication )
			pfnRequestSwitchApplication = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.RequestSwitchApplication" );

		ACCBaseController_eventRequestSwitchApplication_Parms RequestSwitchApplication_Parms;

		this->ProcessEvent( pfnRequestSwitchApplication, &RequestSwitchApplication_Parms, NULL );
	};

	void OnExitConfirmed ( unsigned char Result )
	{
		static UFunction* pfnOnExitConfirmed = NULL;

		if ( !pfnOnExitConfirmed )
			pfnOnExitConfirmed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnExitConfirmed" );

		ACCBaseController_execOnExitConfirmed_Parms OnExitConfirmed_Parms;
		OnExitConfirmed_Parms.Result = Result;

		this->ProcessEvent( pfnOnExitConfirmed, &OnExitConfirmed_Parms, NULL );
	};

	void eventRequestExitGame ()
	{
		static UFunction* pfnRequestExitGame = NULL;

		if ( !pfnRequestExitGame )
			pfnRequestExitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.RequestExitGame" );

		ACCBaseController_eventRequestExitGame_Parms RequestExitGame_Parms;

		this->ProcessEvent( pfnRequestExitGame, &RequestExitGame_Parms, NULL );
	};

	void CloseMessageBox ()
	{
		static UFunction* pfnCloseMessageBox = NULL;

		if ( !pfnCloseMessageBox )
			pfnCloseMessageBox = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.CloseMessageBox" );

		ACCBaseController_execCloseMessageBox_Parms CloseMessageBox_Parms;

		this->ProcessEvent( pfnCloseMessageBox, &CloseMessageBox_Parms, NULL );
	};

	void MessageBoxConfirm ( unsigned char Result )
	{
		static UFunction* pfnMessageBoxConfirm = NULL;

		if ( !pfnMessageBoxConfirm )
			pfnMessageBoxConfirm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.MessageBoxConfirm" );

		ACCBaseController_execMessageBoxConfirm_Parms MessageBoxConfirm_Parms;
		MessageBoxConfirm_Parms.Result = Result;

		this->ProcessEvent( pfnMessageBoxConfirm, &MessageBoxConfirm_Parms, NULL );
	};

	void eventShowMessageBoxSys ( struct FString Message, struct FString Title, unsigned char Type )
	{
		static UFunction* pfnShowMessageBoxSys = NULL;

		if ( !pfnShowMessageBoxSys )
			pfnShowMessageBoxSys = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ShowMessageBoxSys" );

		ACCBaseController_eventShowMessageBoxSys_Parms ShowMessageBoxSys_Parms;
		memcpy( &ShowMessageBoxSys_Parms.Message, &Message, 0xC );
		memcpy( &ShowMessageBoxSys_Parms.Title, &Title, 0xC );
		ShowMessageBoxSys_Parms.Type = Type;

		this->ProcessEvent( pfnShowMessageBoxSys, &ShowMessageBoxSys_Parms, NULL );
	};

	void CloseAllNotifies ()
	{
		static UFunction* pfnCloseAllNotifies = NULL;

		if ( !pfnCloseAllNotifies )
			pfnCloseAllNotifies = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.CloseAllNotifies" );

		ACCBaseController_execCloseAllNotifies_Parms CloseAllNotifies_Parms;

		this->ProcessEvent( pfnCloseAllNotifies, &CloseAllNotifies_Parms, NULL );
	};

	void ShowMessageBox ( struct FString Message, struct FString Title, unsigned char Type/*CPF_OptionalParm*/, struct FScriptDelegate CloseMethod/*CPF_OptionalParm*/, unsigned char align/*CPF_OptionalParm*/, unsigned long bHideActiveMenus/*CPF_OptionalParm*/, float AutoCloseTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnShowMessageBox = NULL;

		if ( !pfnShowMessageBox )
			pfnShowMessageBox = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ShowMessageBox" );

		ACCBaseController_execShowMessageBox_Parms ShowMessageBox_Parms;
		memcpy( &ShowMessageBox_Parms.Message, &Message, 0xC );
		memcpy( &ShowMessageBox_Parms.Title, &Title, 0xC );
		ShowMessageBox_Parms.Type = Type;
		memcpy( &ShowMessageBox_Parms.CloseMethod, &CloseMethod, 0xC );
		ShowMessageBox_Parms.align = align;
		ShowMessageBox_Parms.bHideActiveMenus = bHideActiveMenus;
		ShowMessageBox_Parms.AutoCloseTime = AutoCloseTime;

		this->ProcessEvent( pfnShowMessageBox, &ShowMessageBox_Parms, NULL );
	};

	void* ShowNotifyAtCoords ( struct FString Message, float X, float Y, unsigned long bForceFlip/*CPF_OptionalParm*/, float DelayTime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnShowNotifyAtCoords = NULL;

		if ( !pfnShowNotifyAtCoords )
			pfnShowNotifyAtCoords = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.ShowNotifyAtCoords" );

		ACCBaseController_execShowNotifyAtCoords_Parms ShowNotifyAtCoords_Parms;
		memcpy( &ShowNotifyAtCoords_Parms.Message, &Message, 0xC );
		ShowNotifyAtCoords_Parms.X = X;
		ShowNotifyAtCoords_Parms.Y = Y;
		ShowNotifyAtCoords_Parms.bForceFlip = bForceFlip;
		ShowNotifyAtCoords_Parms.DelayTime = DelayTime;

		this->ProcessEvent( pfnShowNotifyAtCoords, &ShowNotifyAtCoords_Parms, NULL );

		return ShowNotifyAtCoords_Parms.ReturnValue;
	};

	void Exit ( unsigned char MsgResult )
	{
		static UFunction* pfnExit = NULL;

		if ( !pfnExit )
			pfnExit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.Exit" );

		ACCBaseController_execExit_Parms Exit_Parms;
		Exit_Parms.MsgResult = MsgResult;

		this->ProcessEvent( pfnExit, &Exit_Parms, NULL );
	};

	void OpenEntryLevel ( unsigned char MsgResult )
	{
		static UFunction* pfnOpenEntryLevel = NULL;

		if ( !pfnOpenEntryLevel )
			pfnOpenEntryLevel = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OpenEntryLevel" );

		ACCBaseController_execOpenEntryLevel_Parms OpenEntryLevel_Parms;
		OpenEntryLevel_Parms.MsgResult = MsgResult;

		this->ProcessEvent( pfnOpenEntryLevel, &OpenEntryLevel_Parms, NULL );
	};

	void eventOnDisconnectFromServer ()
	{
		static UFunction* pfnOnDisconnectFromServer = NULL;

		if ( !pfnOnDisconnectFromServer )
			pfnOnDisconnectFromServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.OnDisconnectFromServer" );

		ACCBaseController_eventOnDisconnectFromServer_Parms OnDisconnectFromServer_Parms;

		this->ProcessEvent( pfnOnDisconnectFromServer, &OnDisconnectFromServer_Parms, NULL );
	};

	bool IsActiveInternetConnection ()
	{
		static UFunction* pfnIsActiveInternetConnection = NULL;

		if ( !pfnIsActiveInternetConnection )
			pfnIsActiveInternetConnection = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.IsActiveInternetConnection" );

		ACCBaseController_execIsActiveInternetConnection_Parms IsActiveInternetConnection_Parms;

		pfnIsActiveInternetConnection->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsActiveInternetConnection, &IsActiveInternetConnection_Parms, NULL );
		pfnIsActiveInternetConnection->FunctionFlags |= 0x400;

		return IsActiveInternetConnection_Parms.ReturnValue;
	};

	void LogoutToCharacterList ()
	{
		static UFunction* pfnLogoutToCharacterList = NULL;

		if ( !pfnLogoutToCharacterList )
			pfnLogoutToCharacterList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.LogoutToCharacterList" );

		ACCBaseController_execLogoutToCharacterList_Parms LogoutToCharacterList_Parms;

		pfnLogoutToCharacterList->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLogoutToCharacterList, &LogoutToCharacterList_Parms, NULL );
		pfnLogoutToCharacterList->FunctionFlags |= 0x400;
	};

	void DisconnectFromServer ()
	{
		static UFunction* pfnDisconnectFromServer = NULL;

		if ( !pfnDisconnectFromServer )
			pfnDisconnectFromServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.DisconnectFromServer" );

		ACCBaseController_execDisconnectFromServer_Parms DisconnectFromServer_Parms;

		pfnDisconnectFromServer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDisconnectFromServer, &DisconnectFromServer_Parms, NULL );
		pfnDisconnectFromServer->FunctionFlags |= 0x400;
	};

	void LoginToServer ( struct FString LoginName, struct FString Password, struct FString InServerAddressOverride/*CPF_OptionalParm*/, int InPortOverride/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnLoginToServer = NULL;

		if ( !pfnLoginToServer )
			pfnLoginToServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBaseController.LoginToServer" );

		ACCBaseController_execLoginToServer_Parms LoginToServer_Parms;
		memcpy( &LoginToServer_Parms.LoginName, &LoginName, 0xC );
		memcpy( &LoginToServer_Parms.Password, &Password, 0xC );
		memcpy( &LoginToServer_Parms.InServerAddressOverride, &InServerAddressOverride, 0xC );
		LoginToServer_Parms.InPortOverride = InPortOverride;

		pfnLoginToServer->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLoginToServer, &LoginToServer_Parms, NULL );
		pfnLoginToServer->FunctionFlags |= 0x400;
	};

};

UClass* ACCBaseController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif