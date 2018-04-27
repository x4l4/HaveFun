/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCDemoController.h
// Date: 06/16/2011 @ 05:19:42.100
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCDemoController_execStop_Parms
{
};

struct ACCDemoController_execPlay_Parms
{
};

struct ACCDemoController_execPause_Parms
{
};

struct ACCDemoController_execff_Parms
{
};

struct ACCDemoController_execRewind_Parms
{
};

struct ACCDemoController_execOnTabPressed_Parms
{
};// FUNC_Exec

struct ACCDemoController_execUpdateSelfLocation_Parms
{
};

struct ACCDemoController_execGetWeaponAttachmentPresetStore_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCDemoController_execRefreshPlayerList_Parms
{
};// FUNC_Exec

struct ACCDemoController_execWatchPlayer_Parms
{
	struct FString PlayerName;
};// FUNC_Exec

struct ACCDemoController_execToggleDemoSmoothing_Parms
{
	unsigned long Enable : 1;
};// FUNC_Exec

struct ACCDemoController_eventGetPlayerViewPoint_Parms
{
	struct FVector out_Location; // CPF_OutParm
	struct FRotator out_Rotation; // CPF_OutParm
};// FUNC_Event

struct ACCDemoController_execHideControlsMenu_Parms
{
	void* menu;
};

struct ACCDemoController_eventCloseMenu_Parms
{
	void* MenuInstance;
	unsigned long bSkipAnimation : 1;
};// FUNC_Event

struct ACCDemoController_eventOpenMenu_Parms
{
	void* MenuTemplate;
	unsigned long bSkipAnimation : 1;
	unsigned char ForcedPriority;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCDemoController_eventPossess_Parms
{
	class APawn* aPawn;
	unsigned long bVehicleTransition : 1;
};// FUNC_Event

struct ACCDemoController_execSpawnDefaultHUD_Parms
{
};

struct ACCDemoController_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x5B4 - 0x5E8)
class ACCDemoController : public APlayerController
{
public:
	struct FString                                     CurrentPlayerName;                           // 0x05B4 (0x000C)
	class APawn*                                       WatchingPawn;                                // 0x05C0 (0x0004)
	void*                                              WeaponAttachmentPresetStore;                 // 0x05C4 (0x0004)
	unsigned long                                      UseSmoothing : 1;                            // 0x05C8 (0x0004) [0x00000001]
	unsigned long                                      DemoMenuOpened : 1;                          // 0x05C8 (0x0004) [0x00000002]
	struct FVector                                     Smoothing_CamLoc;                            // 0x05CC (0x000C)
	struct FRotator                                    Smoothing_CamRot;                            // 0x05D8 (0x000C)
	void*                                              ControlsMenu;                                // 0x05E4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCDemoController" );

		return ClassPointer;
	};

public:
	void Stop ()
	{
		static UFunction* pfnStop = NULL;

		if ( !pfnStop )
			pfnStop = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.Stop" );

		ACCDemoController_execStop_Parms Stop_Parms;

		this->ProcessEvent( pfnStop, &Stop_Parms, NULL );
	};

	void Play ()
	{
		static UFunction* pfnPlay = NULL;

		if ( !pfnPlay )
			pfnPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.Play" );

		ACCDemoController_execPlay_Parms Play_Parms;

		this->ProcessEvent( pfnPlay, &Play_Parms, NULL );
	};

	void Pause ()
	{
		static UFunction* pfnPause = NULL;

		if ( !pfnPause )
			pfnPause = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.Pause" );

		ACCDemoController_execPause_Parms Pause_Parms;

		this->ProcessEvent( pfnPause, &Pause_Parms, NULL );
	};

	void ff ()
	{
		static UFunction* pfnff = NULL;

		if ( !pfnff )
			pfnff = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.ff" );

		ACCDemoController_execff_Parms ff_Parms;

		this->ProcessEvent( pfnff, &ff_Parms, NULL );
	};

	void Rewind ()
	{
		static UFunction* pfnRewind = NULL;

		if ( !pfnRewind )
			pfnRewind = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.Rewind" );

		ACCDemoController_execRewind_Parms Rewind_Parms;

		this->ProcessEvent( pfnRewind, &Rewind_Parms, NULL );
	};

	void OnTabPressed ()
	{
		static UFunction* pfnOnTabPressed = NULL;

		if ( !pfnOnTabPressed )
			pfnOnTabPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.OnTabPressed" );

		ACCDemoController_execOnTabPressed_Parms OnTabPressed_Parms;

		this->ProcessEvent( pfnOnTabPressed, &OnTabPressed_Parms, NULL );
	};

	void UpdateSelfLocation ()
	{
		static UFunction* pfnUpdateSelfLocation = NULL;

		if ( !pfnUpdateSelfLocation )
			pfnUpdateSelfLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.UpdateSelfLocation" );

		ACCDemoController_execUpdateSelfLocation_Parms UpdateSelfLocation_Parms;

		this->ProcessEvent( pfnUpdateSelfLocation, &UpdateSelfLocation_Parms, NULL );
	};

	void* GetWeaponAttachmentPresetStore ()
	{
		static UFunction* pfnGetWeaponAttachmentPresetStore = NULL;

		if ( !pfnGetWeaponAttachmentPresetStore )
			pfnGetWeaponAttachmentPresetStore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.GetWeaponAttachmentPresetStore" );

		ACCDemoController_execGetWeaponAttachmentPresetStore_Parms GetWeaponAttachmentPresetStore_Parms;

		this->ProcessEvent( pfnGetWeaponAttachmentPresetStore, &GetWeaponAttachmentPresetStore_Parms, NULL );

		return GetWeaponAttachmentPresetStore_Parms.ReturnValue;
	};

	void RefreshPlayerList ()
	{
		static UFunction* pfnRefreshPlayerList = NULL;

		if ( !pfnRefreshPlayerList )
			pfnRefreshPlayerList = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.RefreshPlayerList" );

		ACCDemoController_execRefreshPlayerList_Parms RefreshPlayerList_Parms;

		this->ProcessEvent( pfnRefreshPlayerList, &RefreshPlayerList_Parms, NULL );
	};

	void WatchPlayer ( struct FString PlayerName )
	{
		static UFunction* pfnWatchPlayer = NULL;

		if ( !pfnWatchPlayer )
			pfnWatchPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.WatchPlayer" );

		ACCDemoController_execWatchPlayer_Parms WatchPlayer_Parms;
		memcpy( &WatchPlayer_Parms.PlayerName, &PlayerName, 0xC );

		this->ProcessEvent( pfnWatchPlayer, &WatchPlayer_Parms, NULL );
	};

	void ToggleDemoSmoothing ( unsigned long Enable )
	{
		static UFunction* pfnToggleDemoSmoothing = NULL;

		if ( !pfnToggleDemoSmoothing )
			pfnToggleDemoSmoothing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.ToggleDemoSmoothing" );

		ACCDemoController_execToggleDemoSmoothing_Parms ToggleDemoSmoothing_Parms;
		ToggleDemoSmoothing_Parms.Enable = Enable;

		this->ProcessEvent( pfnToggleDemoSmoothing, &ToggleDemoSmoothing_Parms, NULL );
	};

	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
	{
		static UFunction* pfnGetPlayerViewPoint = NULL;

		if ( !pfnGetPlayerViewPoint )
			pfnGetPlayerViewPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.GetPlayerViewPoint" );

		ACCDemoController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

		this->ProcessEvent( pfnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

		if ( out_Location )
			memcpy( out_Location, &GetPlayerViewPoint_Parms.out_Location, 0xC ); // CPF_OutParm
		if ( out_Rotation )
			memcpy( out_Rotation, &GetPlayerViewPoint_Parms.out_Rotation, 0xC ); // CPF_OutParm
	};

	void HideControlsMenu ( void* menu )
	{
		static UFunction* pfnHideControlsMenu = NULL;

		if ( !pfnHideControlsMenu )
			pfnHideControlsMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.HideControlsMenu" );

		ACCDemoController_execHideControlsMenu_Parms HideControlsMenu_Parms;
		HideControlsMenu_Parms.menu = menu;

		this->ProcessEvent( pfnHideControlsMenu, &HideControlsMenu_Parms, NULL );
	};

	void eventCloseMenu ( void* MenuInstance, unsigned long bSkipAnimation/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCloseMenu = NULL;

		if ( !pfnCloseMenu )
			pfnCloseMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.CloseMenu" );

		ACCDemoController_eventCloseMenu_Parms CloseMenu_Parms;
		CloseMenu_Parms.MenuInstance = MenuInstance;
		CloseMenu_Parms.bSkipAnimation = bSkipAnimation;

		this->ProcessEvent( pfnCloseMenu, &CloseMenu_Parms, NULL );
	};

	void* eventOpenMenu ( void* MenuTemplate, unsigned long bSkipAnimation/*CPF_OptionalParm*/, unsigned char ForcedPriority/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnOpenMenu = NULL;

		if ( !pfnOpenMenu )
			pfnOpenMenu = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.OpenMenu" );

		ACCDemoController_eventOpenMenu_Parms OpenMenu_Parms;
		OpenMenu_Parms.MenuTemplate = MenuTemplate;
		OpenMenu_Parms.bSkipAnimation = bSkipAnimation;
		OpenMenu_Parms.ForcedPriority = ForcedPriority;

		this->ProcessEvent( pfnOpenMenu, &OpenMenu_Parms, NULL );

		return OpenMenu_Parms.ReturnValue;
	};

	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossess = NULL;

		if ( !pfnPossess )
			pfnPossess = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.Possess" );

		ACCDemoController_eventPossess_Parms Possess_Parms;
		Possess_Parms.aPawn = aPawn;
		Possess_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossess, &Possess_Parms, NULL );
	};

	void SpawnDefaultHUD ()
	{
		static UFunction* pfnSpawnDefaultHUD = NULL;

		if ( !pfnSpawnDefaultHUD )
			pfnSpawnDefaultHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.SpawnDefaultHUD" );

		ACCDemoController_execSpawnDefaultHUD_Parms SpawnDefaultHUD_Parms;

		this->ProcessEvent( pfnSpawnDefaultHUD, &SpawnDefaultHUD_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDemoController.PostBeginPlay" );

		ACCDemoController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCDemoController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif