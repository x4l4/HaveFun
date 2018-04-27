/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCEntryController.h
// Date: 06/16/2011 @ 05:19:41.494
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EEntryLoginStage
{
	ELS_Login = 0,
	ELS_RealmList = 1,
	ELS_CharacterList = 2,
	ELS_CharacterCreation = 3,
	ELS_CharacterCustomization = 4,
	ELS_WaitingRealmList = 5,
	ELS_WaitingCharacterList = 6,
	ELS_MAX = 7
};

struct ACCEntryController_execOnRealmSelected_Parms
{
};

struct ACCEntryController_execSetLMenuMode_Parms
{
	int Mode;
};

struct ACCEntryController_execHideLMenu_Parms
{
	unsigned long bHide : 1;
};

struct ACCEntryController_execGetLoginMenuMode_Parms
{
	unsigned char stg;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCEntryController_execSetLoginStage_Parms
{
	unsigned char stg;
};

struct ACCEntryController_execScheduleStage_Parms
{
	unsigned char stg;
};

struct ACCEntryController_execUpdateSceneCaptureCameraPosition_Parms
{
};

struct ACCEntryController_execCreateCharacter_Parms
{
	struct FString CharName;
	unsigned char CharClass;
	struct FCharacterVisualDescription Appearance;
};

struct ACCEntryController_execDeleteCharacter_Parms
{
	int InCharacterId;
};

struct ACCEntryController_execDeleteCharacterByName_Parms
{
	struct FString CharacterName;
};

struct ACCEntryController_execOnConnectionRequested_Parms
{
};

struct ACCEntryController_execSelectCharacter_Parms
{
	int InCharacterId;
};

struct ACCEntryController_execSelectCharacterByName_Parms
{
	struct FString CharacterName;
};

struct ACCEntryController_execOnLoginRequested_Parms
{
};

struct ACCEntryController_execLoginToServer_Parms
{
	struct FString LoginName;
	struct FString Password;
	struct FString InServerAddressOverride;
	int InPortOverride;
};

struct ACCEntryController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCEntryController_execTV_SwitchAnimation_Parms
{
	void* TV_Material;
	struct FName DelegateName;
};

struct ACCEntryController_execSetBillboardSequence_Parms
{
	void* MaterialInst;
};

struct ACCEntryController_execGoTo_FromClassSelectToStart_Parms
{
};

struct ACCEntryController_execGoTo_FromStartToClassSelect_Parms
{
};

struct ACCEntryController_execCloseTimeoutMenu_Parms
{
};

struct ACCEntryController_execOpenTimeoutMenu_Parms
{
	struct FString Title;
};

struct ACCEntryController_execEntryMessageBoxConfirm_Parms
{
	unsigned char MsgResult;
};

struct ACCEntryController_execCloseCharacterCustomizationMenu_Parms
{
};

struct ACCEntryController_execOpenCharacterCustomizationMenu_Parms
{
};

struct ACCEntryController_execCloseCharacterCreationMenu_Parms
{
};

struct ACCEntryController_execOpenCharacterCreationMenu_Special_Parms
{
};

struct ACCEntryController_execOpenNewCharacterCreationMenu_Animated_Parms
{
};

struct ACCEntryController_execOpenCharacterCreationMenu_Animated_Parms
{
};

struct ACCEntryController_execOpenCharacterCreationMenu_Parms
{
};

struct ACCEntryController_execCloseCharacterListMenu_Animated_Parms
{
};

struct ACCEntryController_execCloseCharacterListMenu_Parms
{
};

struct ACCEntryController_execOpenCharacterListMenu_Animated_Parms
{
};

struct ACCEntryController_execonLoginMenuCreated_Parms
{
	void* loginM;
};

struct ACCEntryController_execOpenCharacterListMenu_Parms
{
};

struct ACCEntryController_execCloseESRBMenu_Parms
{
};

struct ACCEntryController_execOpenESRBMenu_Parms
{
};

struct ACCEntryController_execOpenLoginMenu_Parms
{
};

struct ACCEntryController_execEnsureLoginMenu_Parms
{
};

struct ACCEntryController_execLoginToRealmSelector_Parms
{
	struct FString strAccountName;
	struct FString strAccountPassword;
};

struct ACCEntryController_execDisconnectFromGameServer_Parms
{
};

struct ACCEntryController_execBackFromCharacterCustomizationMenu_Parms
{
};

struct ACCEntryController_execBackFromCharacterCreationMenu_Parms
{
};

struct ACCEntryController_execBackFromCharacterListMenu_Parms
{
};

struct ACCEntryController_execBackToLoginMenu_Parms
{
};

struct ACCEntryController_execAbortTimeOut_Parms
{
};

struct ACCEntryController_execonTimeOut_Parms
{
};

struct ACCEntryController_eventOnCharacterSelectionError_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnCharacterSelectionConfirm_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnIncorrectVersion_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnAlreadyInGame_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnLoginRefusedUnknownReason_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnLoginRefusedAccessDenied_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnLoginRefusedIncorrectEMail_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnLoginRefusedGAServiceNotAvailable_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnLoginRefusedIncorrectPassword_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnNoFreeConnections_Parms
{
};// FUNC_Event

struct ACCEntryController_execOnLoginRefusedReason_Parms
{
	struct FString ErrorMessage;
};

struct ACCEntryController_eventOnConnectionErrorResponse_Parms
{
	int Result;
	int pSwitch;
};// FUNC_Event

struct ACCEntryController_eventOnRealmListReceived_Parms
{
};// FUNC_Event

struct ACCEntryController_eventOnCharacterListReceived_Parms
{
};// FUNC_Event

struct ACCEntryController_execPlayAmbientSound_Parms
{
};

struct ACCEntryController_execStopAmbientSound_Parms
{
};

struct ACCEntryController_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCEntryController_eventInitInputSystem_Parms
{
};// FUNC_Event

struct ACCEntryController_execValidateCharacterName_Parms
{
	struct FString InCharacterName;
	struct FString OutValidatedName; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCEntryController_execToggleCharacterCreationMenu_Parms
{
};// FUNC_Exec

// (0x64C - 0x6DC)
class ACCEntryController : public ACCBaseController
{
public:
	void*                                              LoginMenuTemplate;                           // 0x064C (0x0004)
	void*                                              LoginMenu;                                   // 0x0650 (0x0004)
	void*                                              ConnectionMenuTemplate;                      // 0x0654 (0x0004)
	void*                                              ConnectionMenu;                              // 0x0658 (0x0004)
	void*                                              CharacterListMenuTemplate;                   // 0x065C (0x0004)
	void*                                              CharacterListMenu;                           // 0x0660 (0x0004)
	void*                                              NewCharacterCreationMenuTemplate;            // 0x0664 (0x0004)
	void*                                              CharacterCreationMenuTemplate;               // 0x0668 (0x0004)
	void*                                              CharacterCreationMenu;                       // 0x066C (0x0004)
	void*                                              CharacterCustomizationMenuTemplate;          // 0x0670 (0x0004)
	void*                                              CharacterCustomizationMenu;                  // 0x0674 (0x0004)
	void*                                              RealmChooserTemplate;                        // 0x0678 (0x0004)
	void*                                              RealmChooserMenu;                            // 0x067C (0x0004)
	void*                                              BillboardMesh;                               // 0x0680 (0x0004)
	void*                                              MainCamera;                                  // 0x0684 (0x0004)
	void*                                              PositionPreset0;                             // 0x0688 (0x0004)
	void*                                              PositionPreset1;                             // 0x068C (0x0004)
	void*                                              CaptureActor;                                // 0x0690 (0x0004)
	void*                                              AmbientActor;                                // 0x0694 (0x0004)
	void*                                              TV_Splash_Seq;                               // 0x0698 (0x0004)
	void*                                              TV_Connection_Seq;                           // 0x069C (0x0004)
	void*                                              TV_CharacterCreation_Seq;                    // 0x06A0 (0x0004)
	void*                                              TV_CharacterList_Seq;                        // 0x06A4 (0x0004)
	void*                                              TV_Interference;                             // 0x06A8 (0x0004)
	void*                                              TV_Target_Material;                          // 0x06AC (0x0004)
	struct FName                                       TV_Target_Delegate;                          // 0x06B0 (0x0008)
	float                                              TV_DeltaAnim;                                // 0x06B8 (0x0004)
	float                                              TV_AnimDirection;                            // 0x06BC (0x0004)
	void*                                              ESRBMenuTemplate;                            // 0x06C0 (0x0004)
	void*                                              ESRBMenu;                                    // 0x06C4 (0x0004)
	unsigned char                                      CurrentStage;                                // 0x06C8 (0x0001)
	TArray< unsigned char >                            SheduledStages;                              // 0x06CC (0x000C)
	unsigned long                                      bUseNewCharacterCreationMenu : 1;            // 0x06D8 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCEntryController" );

		return ClassPointer;
	};

public:
	void OnRealmSelected ()
	{
		static UFunction* pfnOnRealmSelected = NULL;

		if ( !pfnOnRealmSelected )
			pfnOnRealmSelected = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnRealmSelected" );

		ACCEntryController_execOnRealmSelected_Parms OnRealmSelected_Parms;

		this->ProcessEvent( pfnOnRealmSelected, &OnRealmSelected_Parms, NULL );
	};

	void SetLMenuMode ( int Mode )
	{
		static UFunction* pfnSetLMenuMode = NULL;

		if ( !pfnSetLMenuMode )
			pfnSetLMenuMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.SetLMenuMode" );

		ACCEntryController_execSetLMenuMode_Parms SetLMenuMode_Parms;
		SetLMenuMode_Parms.Mode = Mode;

		this->ProcessEvent( pfnSetLMenuMode, &SetLMenuMode_Parms, NULL );
	};

	void HideLMenu ( unsigned long bHide )
	{
		static UFunction* pfnHideLMenu = NULL;

		if ( !pfnHideLMenu )
			pfnHideLMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.HideLMenu" );

		ACCEntryController_execHideLMenu_Parms HideLMenu_Parms;
		HideLMenu_Parms.bHide = bHide;

		this->ProcessEvent( pfnHideLMenu, &HideLMenu_Parms, NULL );
	};

	int GetLoginMenuMode ( unsigned char stg )
	{
		static UFunction* pfnGetLoginMenuMode = NULL;

		if ( !pfnGetLoginMenuMode )
			pfnGetLoginMenuMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.GetLoginMenuMode" );

		ACCEntryController_execGetLoginMenuMode_Parms GetLoginMenuMode_Parms;
		GetLoginMenuMode_Parms.stg = stg;

		this->ProcessEvent( pfnGetLoginMenuMode, &GetLoginMenuMode_Parms, NULL );

		return GetLoginMenuMode_Parms.ReturnValue;
	};

	void SetLoginStage ( unsigned char stg )
	{
		static UFunction* pfnSetLoginStage = NULL;

		if ( !pfnSetLoginStage )
			pfnSetLoginStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.SetLoginStage" );

		ACCEntryController_execSetLoginStage_Parms SetLoginStage_Parms;
		SetLoginStage_Parms.stg = stg;

		this->ProcessEvent( pfnSetLoginStage, &SetLoginStage_Parms, NULL );
	};

	void ScheduleStage ( unsigned char stg )
	{
		static UFunction* pfnScheduleStage = NULL;

		if ( !pfnScheduleStage )
			pfnScheduleStage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.ScheduleStage" );

		ACCEntryController_execScheduleStage_Parms ScheduleStage_Parms;
		ScheduleStage_Parms.stg = stg;

		this->ProcessEvent( pfnScheduleStage, &ScheduleStage_Parms, NULL );
	};

	void UpdateSceneCaptureCameraPosition ()
	{
		static UFunction* pfnUpdateSceneCaptureCameraPosition = NULL;

		if ( !pfnUpdateSceneCaptureCameraPosition )
			pfnUpdateSceneCaptureCameraPosition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.UpdateSceneCaptureCameraPosition" );

		ACCEntryController_execUpdateSceneCaptureCameraPosition_Parms UpdateSceneCaptureCameraPosition_Parms;

		this->ProcessEvent( pfnUpdateSceneCaptureCameraPosition, &UpdateSceneCaptureCameraPosition_Parms, NULL );
	};

	void CreateCharacter ( struct FString CharName, unsigned char CharClass, struct FCharacterVisualDescription Appearance )
	{
		static UFunction* pfnCreateCharacter = NULL;

		if ( !pfnCreateCharacter )
			pfnCreateCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CreateCharacter" );

		ACCEntryController_execCreateCharacter_Parms CreateCharacter_Parms;
		memcpy( &CreateCharacter_Parms.CharName, &CharName, 0xC );
		CreateCharacter_Parms.CharClass = CharClass;
		memcpy( &CreateCharacter_Parms.Appearance, &Appearance, 0x48 );

		this->ProcessEvent( pfnCreateCharacter, &CreateCharacter_Parms, NULL );
	};

	void DeleteCharacter ( int InCharacterId )
	{
		static UFunction* pfnDeleteCharacter = NULL;

		if ( !pfnDeleteCharacter )
			pfnDeleteCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.DeleteCharacter" );

		ACCEntryController_execDeleteCharacter_Parms DeleteCharacter_Parms;
		DeleteCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnDeleteCharacter, &DeleteCharacter_Parms, NULL );
	};

	void DeleteCharacterByName ( struct FString CharacterName )
	{
		static UFunction* pfnDeleteCharacterByName = NULL;

		if ( !pfnDeleteCharacterByName )
			pfnDeleteCharacterByName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.DeleteCharacterByName" );

		ACCEntryController_execDeleteCharacterByName_Parms DeleteCharacterByName_Parms;
		memcpy( &DeleteCharacterByName_Parms.CharacterName, &CharacterName, 0xC );

		this->ProcessEvent( pfnDeleteCharacterByName, &DeleteCharacterByName_Parms, NULL );
	};

	void OnConnectionRequested ()
	{
		static UFunction* pfnOnConnectionRequested = NULL;

		if ( !pfnOnConnectionRequested )
			pfnOnConnectionRequested = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnConnectionRequested" );

		ACCEntryController_execOnConnectionRequested_Parms OnConnectionRequested_Parms;

		this->ProcessEvent( pfnOnConnectionRequested, &OnConnectionRequested_Parms, NULL );
	};

	void SelectCharacter ( int InCharacterId )
	{
		static UFunction* pfnSelectCharacter = NULL;

		if ( !pfnSelectCharacter )
			pfnSelectCharacter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.SelectCharacter" );

		ACCEntryController_execSelectCharacter_Parms SelectCharacter_Parms;
		SelectCharacter_Parms.InCharacterId = InCharacterId;

		this->ProcessEvent( pfnSelectCharacter, &SelectCharacter_Parms, NULL );
	};

	void SelectCharacterByName ( struct FString CharacterName )
	{
		static UFunction* pfnSelectCharacterByName = NULL;

		if ( !pfnSelectCharacterByName )
			pfnSelectCharacterByName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.SelectCharacterByName" );

		ACCEntryController_execSelectCharacterByName_Parms SelectCharacterByName_Parms;
		memcpy( &SelectCharacterByName_Parms.CharacterName, &CharacterName, 0xC );

		this->ProcessEvent( pfnSelectCharacterByName, &SelectCharacterByName_Parms, NULL );
	};

	void OnLoginRequested ()
	{
		static UFunction* pfnOnLoginRequested = NULL;

		if ( !pfnOnLoginRequested )
			pfnOnLoginRequested = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRequested" );

		ACCEntryController_execOnLoginRequested_Parms OnLoginRequested_Parms;

		this->ProcessEvent( pfnOnLoginRequested, &OnLoginRequested_Parms, NULL );
	};

	void LoginToServer ( struct FString LoginName, struct FString Password, struct FString InServerAddressOverride/*CPF_OptionalParm*/, int InPortOverride/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnLoginToServer = NULL;

		if ( !pfnLoginToServer )
			pfnLoginToServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.LoginToServer" );

		ACCEntryController_execLoginToServer_Parms LoginToServer_Parms;
		memcpy( &LoginToServer_Parms.LoginName, &LoginName, 0xC );
		memcpy( &LoginToServer_Parms.Password, &Password, 0xC );
		memcpy( &LoginToServer_Parms.InServerAddressOverride, &InServerAddressOverride, 0xC );
		LoginToServer_Parms.InPortOverride = InPortOverride;

		this->ProcessEvent( pfnLoginToServer, &LoginToServer_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.PlayerTick" );

		ACCEntryController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void TV_SwitchAnimation ( void* TV_Material, struct FName DelegateName )
	{
		static UFunction* pfnTV_SwitchAnimation = NULL;

		if ( !pfnTV_SwitchAnimation )
			pfnTV_SwitchAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.TV_SwitchAnimation" );

		ACCEntryController_execTV_SwitchAnimation_Parms TV_SwitchAnimation_Parms;
		TV_SwitchAnimation_Parms.TV_Material = TV_Material;
		memcpy( &TV_SwitchAnimation_Parms.DelegateName, &DelegateName, 0x8 );

		this->ProcessEvent( pfnTV_SwitchAnimation, &TV_SwitchAnimation_Parms, NULL );
	};

	void SetBillboardSequence ( void* MaterialInst )
	{
		static UFunction* pfnSetBillboardSequence = NULL;

		if ( !pfnSetBillboardSequence )
			pfnSetBillboardSequence = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.SetBillboardSequence" );

		ACCEntryController_execSetBillboardSequence_Parms SetBillboardSequence_Parms;
		SetBillboardSequence_Parms.MaterialInst = MaterialInst;

		this->ProcessEvent( pfnSetBillboardSequence, &SetBillboardSequence_Parms, NULL );
	};

	void GoTo_FromClassSelectToStart ()
	{
		static UFunction* pfnGoTo_FromClassSelectToStart = NULL;

		if ( !pfnGoTo_FromClassSelectToStart )
			pfnGoTo_FromClassSelectToStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.GoTo_FromClassSelectToStart" );

		ACCEntryController_execGoTo_FromClassSelectToStart_Parms GoTo_FromClassSelectToStart_Parms;

		this->ProcessEvent( pfnGoTo_FromClassSelectToStart, &GoTo_FromClassSelectToStart_Parms, NULL );
	};

	void GoTo_FromStartToClassSelect ()
	{
		static UFunction* pfnGoTo_FromStartToClassSelect = NULL;

		if ( !pfnGoTo_FromStartToClassSelect )
			pfnGoTo_FromStartToClassSelect = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.GoTo_FromStartToClassSelect" );

		ACCEntryController_execGoTo_FromStartToClassSelect_Parms GoTo_FromStartToClassSelect_Parms;

		this->ProcessEvent( pfnGoTo_FromStartToClassSelect, &GoTo_FromStartToClassSelect_Parms, NULL );
	};

	void CloseTimeoutMenu ()
	{
		static UFunction* pfnCloseTimeoutMenu = NULL;

		if ( !pfnCloseTimeoutMenu )
			pfnCloseTimeoutMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseTimeoutMenu" );

		ACCEntryController_execCloseTimeoutMenu_Parms CloseTimeoutMenu_Parms;

		this->ProcessEvent( pfnCloseTimeoutMenu, &CloseTimeoutMenu_Parms, NULL );
	};

	void OpenTimeoutMenu ( struct FString Title )
	{
		static UFunction* pfnOpenTimeoutMenu = NULL;

		if ( !pfnOpenTimeoutMenu )
			pfnOpenTimeoutMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenTimeoutMenu" );

		ACCEntryController_execOpenTimeoutMenu_Parms OpenTimeoutMenu_Parms;
		memcpy( &OpenTimeoutMenu_Parms.Title, &Title, 0xC );

		this->ProcessEvent( pfnOpenTimeoutMenu, &OpenTimeoutMenu_Parms, NULL );
	};

	void EntryMessageBoxConfirm ( unsigned char MsgResult )
	{
		static UFunction* pfnEntryMessageBoxConfirm = NULL;

		if ( !pfnEntryMessageBoxConfirm )
			pfnEntryMessageBoxConfirm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.EntryMessageBoxConfirm" );

		ACCEntryController_execEntryMessageBoxConfirm_Parms EntryMessageBoxConfirm_Parms;
		EntryMessageBoxConfirm_Parms.MsgResult = MsgResult;

		this->ProcessEvent( pfnEntryMessageBoxConfirm, &EntryMessageBoxConfirm_Parms, NULL );
	};

	void CloseCharacterCustomizationMenu ()
	{
		static UFunction* pfnCloseCharacterCustomizationMenu = NULL;

		if ( !pfnCloseCharacterCustomizationMenu )
			pfnCloseCharacterCustomizationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseCharacterCustomizationMenu" );

		ACCEntryController_execCloseCharacterCustomizationMenu_Parms CloseCharacterCustomizationMenu_Parms;

		this->ProcessEvent( pfnCloseCharacterCustomizationMenu, &CloseCharacterCustomizationMenu_Parms, NULL );
	};

	void OpenCharacterCustomizationMenu ()
	{
		static UFunction* pfnOpenCharacterCustomizationMenu = NULL;

		if ( !pfnOpenCharacterCustomizationMenu )
			pfnOpenCharacterCustomizationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterCustomizationMenu" );

		ACCEntryController_execOpenCharacterCustomizationMenu_Parms OpenCharacterCustomizationMenu_Parms;

		this->ProcessEvent( pfnOpenCharacterCustomizationMenu, &OpenCharacterCustomizationMenu_Parms, NULL );
	};

	void CloseCharacterCreationMenu ()
	{
		static UFunction* pfnCloseCharacterCreationMenu = NULL;

		if ( !pfnCloseCharacterCreationMenu )
			pfnCloseCharacterCreationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseCharacterCreationMenu" );

		ACCEntryController_execCloseCharacterCreationMenu_Parms CloseCharacterCreationMenu_Parms;

		this->ProcessEvent( pfnCloseCharacterCreationMenu, &CloseCharacterCreationMenu_Parms, NULL );
	};

	void OpenCharacterCreationMenu_Special ()
	{
		static UFunction* pfnOpenCharacterCreationMenu_Special = NULL;

		if ( !pfnOpenCharacterCreationMenu_Special )
			pfnOpenCharacterCreationMenu_Special = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterCreationMenu_Special" );

		ACCEntryController_execOpenCharacterCreationMenu_Special_Parms OpenCharacterCreationMenu_Special_Parms;

		this->ProcessEvent( pfnOpenCharacterCreationMenu_Special, &OpenCharacterCreationMenu_Special_Parms, NULL );
	};

	void OpenNewCharacterCreationMenu_Animated ()
	{
		static UFunction* pfnOpenNewCharacterCreationMenu_Animated = NULL;

		if ( !pfnOpenNewCharacterCreationMenu_Animated )
			pfnOpenNewCharacterCreationMenu_Animated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenNewCharacterCreationMenu_Animated" );

		ACCEntryController_execOpenNewCharacterCreationMenu_Animated_Parms OpenNewCharacterCreationMenu_Animated_Parms;

		this->ProcessEvent( pfnOpenNewCharacterCreationMenu_Animated, &OpenNewCharacterCreationMenu_Animated_Parms, NULL );
	};

	void OpenCharacterCreationMenu_Animated ()
	{
		static UFunction* pfnOpenCharacterCreationMenu_Animated = NULL;

		if ( !pfnOpenCharacterCreationMenu_Animated )
			pfnOpenCharacterCreationMenu_Animated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterCreationMenu_Animated" );

		ACCEntryController_execOpenCharacterCreationMenu_Animated_Parms OpenCharacterCreationMenu_Animated_Parms;

		this->ProcessEvent( pfnOpenCharacterCreationMenu_Animated, &OpenCharacterCreationMenu_Animated_Parms, NULL );
	};

	void OpenCharacterCreationMenu ()
	{
		static UFunction* pfnOpenCharacterCreationMenu = NULL;

		if ( !pfnOpenCharacterCreationMenu )
			pfnOpenCharacterCreationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterCreationMenu" );

		ACCEntryController_execOpenCharacterCreationMenu_Parms OpenCharacterCreationMenu_Parms;

		this->ProcessEvent( pfnOpenCharacterCreationMenu, &OpenCharacterCreationMenu_Parms, NULL );
	};

	void CloseCharacterListMenu_Animated ()
	{
		static UFunction* pfnCloseCharacterListMenu_Animated = NULL;

		if ( !pfnCloseCharacterListMenu_Animated )
			pfnCloseCharacterListMenu_Animated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseCharacterListMenu_Animated" );

		ACCEntryController_execCloseCharacterListMenu_Animated_Parms CloseCharacterListMenu_Animated_Parms;

		this->ProcessEvent( pfnCloseCharacterListMenu_Animated, &CloseCharacterListMenu_Animated_Parms, NULL );
	};

	void CloseCharacterListMenu ()
	{
		static UFunction* pfnCloseCharacterListMenu = NULL;

		if ( !pfnCloseCharacterListMenu )
			pfnCloseCharacterListMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseCharacterListMenu" );

		ACCEntryController_execCloseCharacterListMenu_Parms CloseCharacterListMenu_Parms;

		this->ProcessEvent( pfnCloseCharacterListMenu, &CloseCharacterListMenu_Parms, NULL );
	};

	void OpenCharacterListMenu_Animated ()
	{
		static UFunction* pfnOpenCharacterListMenu_Animated = NULL;

		if ( !pfnOpenCharacterListMenu_Animated )
			pfnOpenCharacterListMenu_Animated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterListMenu_Animated" );

		ACCEntryController_execOpenCharacterListMenu_Animated_Parms OpenCharacterListMenu_Animated_Parms;

		this->ProcessEvent( pfnOpenCharacterListMenu_Animated, &OpenCharacterListMenu_Animated_Parms, NULL );
	};

	void onLoginMenuCreated ( void* loginM )
	{
		static UFunction* pfnonLoginMenuCreated = NULL;

		if ( !pfnonLoginMenuCreated )
			pfnonLoginMenuCreated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.onLoginMenuCreated" );

		ACCEntryController_execonLoginMenuCreated_Parms onLoginMenuCreated_Parms;
		onLoginMenuCreated_Parms.loginM = loginM;

		this->ProcessEvent( pfnonLoginMenuCreated, &onLoginMenuCreated_Parms, NULL );
	};

	void OpenCharacterListMenu ()
	{
		static UFunction* pfnOpenCharacterListMenu = NULL;

		if ( !pfnOpenCharacterListMenu )
			pfnOpenCharacterListMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenCharacterListMenu" );

		ACCEntryController_execOpenCharacterListMenu_Parms OpenCharacterListMenu_Parms;

		this->ProcessEvent( pfnOpenCharacterListMenu, &OpenCharacterListMenu_Parms, NULL );
	};

	void CloseESRBMenu ()
	{
		static UFunction* pfnCloseESRBMenu = NULL;

		if ( !pfnCloseESRBMenu )
			pfnCloseESRBMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.CloseESRBMenu" );

		ACCEntryController_execCloseESRBMenu_Parms CloseESRBMenu_Parms;

		this->ProcessEvent( pfnCloseESRBMenu, &CloseESRBMenu_Parms, NULL );
	};

	void OpenESRBMenu ()
	{
		static UFunction* pfnOpenESRBMenu = NULL;

		if ( !pfnOpenESRBMenu )
			pfnOpenESRBMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenESRBMenu" );

		ACCEntryController_execOpenESRBMenu_Parms OpenESRBMenu_Parms;

		this->ProcessEvent( pfnOpenESRBMenu, &OpenESRBMenu_Parms, NULL );
	};

	void OpenLoginMenu ()
	{
		static UFunction* pfnOpenLoginMenu = NULL;

		if ( !pfnOpenLoginMenu )
			pfnOpenLoginMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OpenLoginMenu" );

		ACCEntryController_execOpenLoginMenu_Parms OpenLoginMenu_Parms;

		this->ProcessEvent( pfnOpenLoginMenu, &OpenLoginMenu_Parms, NULL );
	};

	void EnsureLoginMenu ()
	{
		static UFunction* pfnEnsureLoginMenu = NULL;

		if ( !pfnEnsureLoginMenu )
			pfnEnsureLoginMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.EnsureLoginMenu" );

		ACCEntryController_execEnsureLoginMenu_Parms EnsureLoginMenu_Parms;

		this->ProcessEvent( pfnEnsureLoginMenu, &EnsureLoginMenu_Parms, NULL );
	};

	void LoginToRealmSelector ( struct FString strAccountName, struct FString strAccountPassword )
	{
		static UFunction* pfnLoginToRealmSelector = NULL;

		if ( !pfnLoginToRealmSelector )
			pfnLoginToRealmSelector = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.LoginToRealmSelector" );

		ACCEntryController_execLoginToRealmSelector_Parms LoginToRealmSelector_Parms;
		memcpy( &LoginToRealmSelector_Parms.strAccountName, &strAccountName, 0xC );
		memcpy( &LoginToRealmSelector_Parms.strAccountPassword, &strAccountPassword, 0xC );

		this->ProcessEvent( pfnLoginToRealmSelector, &LoginToRealmSelector_Parms, NULL );
	};

	void DisconnectFromGameServer ()
	{
		static UFunction* pfnDisconnectFromGameServer = NULL;

		if ( !pfnDisconnectFromGameServer )
			pfnDisconnectFromGameServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.DisconnectFromGameServer" );

		ACCEntryController_execDisconnectFromGameServer_Parms DisconnectFromGameServer_Parms;

		this->ProcessEvent( pfnDisconnectFromGameServer, &DisconnectFromGameServer_Parms, NULL );
	};

	void BackFromCharacterCustomizationMenu ()
	{
		static UFunction* pfnBackFromCharacterCustomizationMenu = NULL;

		if ( !pfnBackFromCharacterCustomizationMenu )
			pfnBackFromCharacterCustomizationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.BackFromCharacterCustomizationMenu" );

		ACCEntryController_execBackFromCharacterCustomizationMenu_Parms BackFromCharacterCustomizationMenu_Parms;

		this->ProcessEvent( pfnBackFromCharacterCustomizationMenu, &BackFromCharacterCustomizationMenu_Parms, NULL );
	};

	void BackFromCharacterCreationMenu ()
	{
		static UFunction* pfnBackFromCharacterCreationMenu = NULL;

		if ( !pfnBackFromCharacterCreationMenu )
			pfnBackFromCharacterCreationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.BackFromCharacterCreationMenu" );

		ACCEntryController_execBackFromCharacterCreationMenu_Parms BackFromCharacterCreationMenu_Parms;

		this->ProcessEvent( pfnBackFromCharacterCreationMenu, &BackFromCharacterCreationMenu_Parms, NULL );
	};

	void BackFromCharacterListMenu ()
	{
		static UFunction* pfnBackFromCharacterListMenu = NULL;

		if ( !pfnBackFromCharacterListMenu )
			pfnBackFromCharacterListMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.BackFromCharacterListMenu" );

		ACCEntryController_execBackFromCharacterListMenu_Parms BackFromCharacterListMenu_Parms;

		this->ProcessEvent( pfnBackFromCharacterListMenu, &BackFromCharacterListMenu_Parms, NULL );
	};

	void BackToLoginMenu ()
	{
		static UFunction* pfnBackToLoginMenu = NULL;

		if ( !pfnBackToLoginMenu )
			pfnBackToLoginMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.BackToLoginMenu" );

		ACCEntryController_execBackToLoginMenu_Parms BackToLoginMenu_Parms;

		this->ProcessEvent( pfnBackToLoginMenu, &BackToLoginMenu_Parms, NULL );
	};

	void AbortTimeOut ()
	{
		static UFunction* pfnAbortTimeOut = NULL;

		if ( !pfnAbortTimeOut )
			pfnAbortTimeOut = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.AbortTimeOut" );

		ACCEntryController_execAbortTimeOut_Parms AbortTimeOut_Parms;

		this->ProcessEvent( pfnAbortTimeOut, &AbortTimeOut_Parms, NULL );
	};

	void onTimeOut ()
	{
		static UFunction* pfnonTimeOut = NULL;

		if ( !pfnonTimeOut )
			pfnonTimeOut = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.onTimeOut" );

		ACCEntryController_execonTimeOut_Parms onTimeOut_Parms;

		this->ProcessEvent( pfnonTimeOut, &onTimeOut_Parms, NULL );
	};

	void eventOnCharacterSelectionError ()
	{
		static UFunction* pfnOnCharacterSelectionError = NULL;

		if ( !pfnOnCharacterSelectionError )
			pfnOnCharacterSelectionError = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnCharacterSelectionError" );

		ACCEntryController_eventOnCharacterSelectionError_Parms OnCharacterSelectionError_Parms;

		this->ProcessEvent( pfnOnCharacterSelectionError, &OnCharacterSelectionError_Parms, NULL );
	};

	void eventOnCharacterSelectionConfirm ()
	{
		static UFunction* pfnOnCharacterSelectionConfirm = NULL;

		if ( !pfnOnCharacterSelectionConfirm )
			pfnOnCharacterSelectionConfirm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnCharacterSelectionConfirm" );

		ACCEntryController_eventOnCharacterSelectionConfirm_Parms OnCharacterSelectionConfirm_Parms;

		this->ProcessEvent( pfnOnCharacterSelectionConfirm, &OnCharacterSelectionConfirm_Parms, NULL );
	};

	void eventOnIncorrectVersion ()
	{
		static UFunction* pfnOnIncorrectVersion = NULL;

		if ( !pfnOnIncorrectVersion )
			pfnOnIncorrectVersion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnIncorrectVersion" );

		ACCEntryController_eventOnIncorrectVersion_Parms OnIncorrectVersion_Parms;

		this->ProcessEvent( pfnOnIncorrectVersion, &OnIncorrectVersion_Parms, NULL );
	};

	void eventOnAlreadyInGame ()
	{
		static UFunction* pfnOnAlreadyInGame = NULL;

		if ( !pfnOnAlreadyInGame )
			pfnOnAlreadyInGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnAlreadyInGame" );

		ACCEntryController_eventOnAlreadyInGame_Parms OnAlreadyInGame_Parms;

		this->ProcessEvent( pfnOnAlreadyInGame, &OnAlreadyInGame_Parms, NULL );
	};

	void eventOnLoginRefusedUnknownReason ()
	{
		static UFunction* pfnOnLoginRefusedUnknownReason = NULL;

		if ( !pfnOnLoginRefusedUnknownReason )
			pfnOnLoginRefusedUnknownReason = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedUnknownReason" );

		ACCEntryController_eventOnLoginRefusedUnknownReason_Parms OnLoginRefusedUnknownReason_Parms;

		this->ProcessEvent( pfnOnLoginRefusedUnknownReason, &OnLoginRefusedUnknownReason_Parms, NULL );
	};

	void eventOnLoginRefusedAccessDenied ()
	{
		static UFunction* pfnOnLoginRefusedAccessDenied = NULL;

		if ( !pfnOnLoginRefusedAccessDenied )
			pfnOnLoginRefusedAccessDenied = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedAccessDenied" );

		ACCEntryController_eventOnLoginRefusedAccessDenied_Parms OnLoginRefusedAccessDenied_Parms;

		this->ProcessEvent( pfnOnLoginRefusedAccessDenied, &OnLoginRefusedAccessDenied_Parms, NULL );
	};

	void eventOnLoginRefusedIncorrectEMail ()
	{
		static UFunction* pfnOnLoginRefusedIncorrectEMail = NULL;

		if ( !pfnOnLoginRefusedIncorrectEMail )
			pfnOnLoginRefusedIncorrectEMail = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedIncorrectEMail" );

		ACCEntryController_eventOnLoginRefusedIncorrectEMail_Parms OnLoginRefusedIncorrectEMail_Parms;

		this->ProcessEvent( pfnOnLoginRefusedIncorrectEMail, &OnLoginRefusedIncorrectEMail_Parms, NULL );
	};

	void eventOnLoginRefusedGAServiceNotAvailable ()
	{
		static UFunction* pfnOnLoginRefusedGAServiceNotAvailable = NULL;

		if ( !pfnOnLoginRefusedGAServiceNotAvailable )
			pfnOnLoginRefusedGAServiceNotAvailable = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedGAServiceNotAvailable" );

		ACCEntryController_eventOnLoginRefusedGAServiceNotAvailable_Parms OnLoginRefusedGAServiceNotAvailable_Parms;

		this->ProcessEvent( pfnOnLoginRefusedGAServiceNotAvailable, &OnLoginRefusedGAServiceNotAvailable_Parms, NULL );
	};

	void eventOnLoginRefusedIncorrectPassword ()
	{
		static UFunction* pfnOnLoginRefusedIncorrectPassword = NULL;

		if ( !pfnOnLoginRefusedIncorrectPassword )
			pfnOnLoginRefusedIncorrectPassword = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedIncorrectPassword" );

		ACCEntryController_eventOnLoginRefusedIncorrectPassword_Parms OnLoginRefusedIncorrectPassword_Parms;

		this->ProcessEvent( pfnOnLoginRefusedIncorrectPassword, &OnLoginRefusedIncorrectPassword_Parms, NULL );
	};

	void eventOnNoFreeConnections ()
	{
		static UFunction* pfnOnNoFreeConnections = NULL;

		if ( !pfnOnNoFreeConnections )
			pfnOnNoFreeConnections = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnNoFreeConnections" );

		ACCEntryController_eventOnNoFreeConnections_Parms OnNoFreeConnections_Parms;

		this->ProcessEvent( pfnOnNoFreeConnections, &OnNoFreeConnections_Parms, NULL );
	};

	void OnLoginRefusedReason ( struct FString ErrorMessage )
	{
		static UFunction* pfnOnLoginRefusedReason = NULL;

		if ( !pfnOnLoginRefusedReason )
			pfnOnLoginRefusedReason = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnLoginRefusedReason" );

		ACCEntryController_execOnLoginRefusedReason_Parms OnLoginRefusedReason_Parms;
		memcpy( &OnLoginRefusedReason_Parms.ErrorMessage, &ErrorMessage, 0xC );

		this->ProcessEvent( pfnOnLoginRefusedReason, &OnLoginRefusedReason_Parms, NULL );
	};

	void eventOnConnectionErrorResponse ( int Result, int pSwitch/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnOnConnectionErrorResponse = NULL;

		if ( !pfnOnConnectionErrorResponse )
			pfnOnConnectionErrorResponse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnConnectionErrorResponse" );

		ACCEntryController_eventOnConnectionErrorResponse_Parms OnConnectionErrorResponse_Parms;
		OnConnectionErrorResponse_Parms.Result = Result;
		OnConnectionErrorResponse_Parms.pSwitch = pSwitch;

		this->ProcessEvent( pfnOnConnectionErrorResponse, &OnConnectionErrorResponse_Parms, NULL );
	};

	void eventOnRealmListReceived ()
	{
		static UFunction* pfnOnRealmListReceived = NULL;

		if ( !pfnOnRealmListReceived )
			pfnOnRealmListReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnRealmListReceived" );

		ACCEntryController_eventOnRealmListReceived_Parms OnRealmListReceived_Parms;

		this->ProcessEvent( pfnOnRealmListReceived, &OnRealmListReceived_Parms, NULL );
	};

	void eventOnCharacterListReceived ()
	{
		static UFunction* pfnOnCharacterListReceived = NULL;

		if ( !pfnOnCharacterListReceived )
			pfnOnCharacterListReceived = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.OnCharacterListReceived" );

		ACCEntryController_eventOnCharacterListReceived_Parms OnCharacterListReceived_Parms;

		this->ProcessEvent( pfnOnCharacterListReceived, &OnCharacterListReceived_Parms, NULL );
	};

	void PlayAmbientSound ()
	{
		static UFunction* pfnPlayAmbientSound = NULL;

		if ( !pfnPlayAmbientSound )
			pfnPlayAmbientSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.PlayAmbientSound" );

		ACCEntryController_execPlayAmbientSound_Parms PlayAmbientSound_Parms;

		this->ProcessEvent( pfnPlayAmbientSound, &PlayAmbientSound_Parms, NULL );
	};

	void StopAmbientSound ()
	{
		static UFunction* pfnStopAmbientSound = NULL;

		if ( !pfnStopAmbientSound )
			pfnStopAmbientSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.StopAmbientSound" );

		ACCEntryController_execStopAmbientSound_Parms StopAmbientSound_Parms;

		this->ProcessEvent( pfnStopAmbientSound, &StopAmbientSound_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.PostBeginPlay" );

		ACCEntryController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitInputSystem ()
	{
		static UFunction* pfnInitInputSystem = NULL;

		if ( !pfnInitInputSystem )
			pfnInitInputSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.InitInputSystem" );

		ACCEntryController_eventInitInputSystem_Parms InitInputSystem_Parms;

		this->ProcessEvent( pfnInitInputSystem, &InitInputSystem_Parms, NULL );
	};

	bool ValidateCharacterName ( struct FString InCharacterName, struct FString* OutValidatedName )
	{
		static UFunction* pfnValidateCharacterName = NULL;

		if ( !pfnValidateCharacterName )
			pfnValidateCharacterName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.ValidateCharacterName" );

		ACCEntryController_execValidateCharacterName_Parms ValidateCharacterName_Parms;
		memcpy( &ValidateCharacterName_Parms.InCharacterName, &InCharacterName, 0xC );

		pfnValidateCharacterName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnValidateCharacterName, &ValidateCharacterName_Parms, NULL );
		pfnValidateCharacterName->FunctionFlags |= 0x400;

		if ( OutValidatedName )
			memcpy( OutValidatedName, &ValidateCharacterName_Parms.OutValidatedName, 0xC ); // CPF_OutParm

		return ValidateCharacterName_Parms.ReturnValue;
	};

	void ToggleCharacterCreationMenu ()
	{
		static UFunction* pfnToggleCharacterCreationMenu = NULL;

		if ( !pfnToggleCharacterCreationMenu )
			pfnToggleCharacterCreationMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryController.ToggleCharacterCreationMenu" );

		ACCEntryController_execToggleCharacterCreationMenu_Parms ToggleCharacterCreationMenu_Parms;

		this->ProcessEvent( pfnToggleCharacterCreationMenu, &ToggleCharacterCreationMenu_Parms, NULL );
	};

};

UClass* ACCEntryController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif