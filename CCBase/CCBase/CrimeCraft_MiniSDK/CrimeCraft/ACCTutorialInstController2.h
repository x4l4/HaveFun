/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorialInstController2.h
// Date: 06/16/2011 @ 05:19:42.146
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EStepIds2
{
	ESI2_Rolling = 0,
	ESI2_Sprinting = 1,
	ESI2_Crouching = 2,
	ESI2_MAX = 3
};

struct ACCTutorialInstController2_execPlayerCrouched_Parms
{
};

struct ACCTutorialInstController2_execPlayerSprinted_Parms
{
};

struct ACCTutorialInstController2_execPlayerRolled_Parms
{
};

struct ACCTutorialInstController2_execHidePopup2_Parms
{
};

struct ACCTutorialInstController2_execShowNextPopup_Parms
{
};

struct ACCTutorialInstController2_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

// (0xF68 - 0xF88)
class ACCTutorialInstController2 : public ACCTutorialInstController
{
public:
	int                                                PopupStatus[ 3 ];                            // 0x0F68 (0x000C)
	float                                              Timeouts[ 3 ];                               // 0x0F74 (0x000C)
	unsigned long                                      bAllDisabled : 1;                            // 0x0F80 (0x0004) [0x00000001]
	float                                              Popup1Delay;                                 // 0x0F84 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorialInstController2" );

		return ClassPointer;
	};

public:
	void PlayerCrouched ()
	{
		static UFunction* pfnPlayerCrouched = NULL;

		if ( !pfnPlayerCrouched )
			pfnPlayerCrouched = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.PlayerCrouched" );

		ACCTutorialInstController2_execPlayerCrouched_Parms PlayerCrouched_Parms;

		this->ProcessEvent( pfnPlayerCrouched, &PlayerCrouched_Parms, NULL );
	};

	void PlayerSprinted ()
	{
		static UFunction* pfnPlayerSprinted = NULL;

		if ( !pfnPlayerSprinted )
			pfnPlayerSprinted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.PlayerSprinted" );

		ACCTutorialInstController2_execPlayerSprinted_Parms PlayerSprinted_Parms;

		this->ProcessEvent( pfnPlayerSprinted, &PlayerSprinted_Parms, NULL );
	};

	void PlayerRolled ()
	{
		static UFunction* pfnPlayerRolled = NULL;

		if ( !pfnPlayerRolled )
			pfnPlayerRolled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.PlayerRolled" );

		ACCTutorialInstController2_execPlayerRolled_Parms PlayerRolled_Parms;

		this->ProcessEvent( pfnPlayerRolled, &PlayerRolled_Parms, NULL );
	};

	void HidePopup2 ()
	{
		static UFunction* pfnHidePopup2 = NULL;

		if ( !pfnHidePopup2 )
			pfnHidePopup2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.HidePopup2" );

		ACCTutorialInstController2_execHidePopup2_Parms HidePopup2_Parms;

		this->ProcessEvent( pfnHidePopup2, &HidePopup2_Parms, NULL );
	};

	void ShowNextPopup ()
	{
		static UFunction* pfnShowNextPopup = NULL;

		if ( !pfnShowNextPopup )
			pfnShowNextPopup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.ShowNextPopup" );

		ACCTutorialInstController2_execShowNextPopup_Parms ShowNextPopup_Parms;

		this->ProcessEvent( pfnShowNextPopup, &ShowNextPopup_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController2.PlayerTick" );

		ACCTutorialInstController2_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

};

UClass* ACCTutorialInstController2::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif