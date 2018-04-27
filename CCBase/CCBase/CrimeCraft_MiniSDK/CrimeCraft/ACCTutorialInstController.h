/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorialInstController.h
// Date: 06/16/2011 @ 05:19:41.915
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTutorialInstController_execIsPopupWaitsDeactivation_Parms
{
	int Index;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTutorialInstController_execIsPopupWaitsActivation_Parms
{
	int Index;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTutorialInstController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCTutorialInstController_execHidePopup_Parms
{
};

struct ACCTutorialInstController_execShowPopup_Parms
{
	int Index;
};

struct ACCTutorialInstController_execIsPopupActive_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTutorialInstController_execNotifyAbilityUsed_Parms
{
	int AbilitySlot;
};

struct ACCTutorialInstController_execOnReloadPressed_Parms
{
};// FUNC_Exec

struct ACCTutorialInstController_execTEST_GetAmmoCountPrecentage_Parms
{
};// FUNC_Exec

struct ACCTutorialInstController_execGetAmmoCountPrecentage_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCTutorialInstController_execTEST_GetShootingDelay_Parms
{
};// FUNC_Exec

struct ACCTutorialInstController_execGetShootingDelay_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCTutorialInstController_execPlayerPickupedContainer_Parms
{
};

struct ACCTutorialInstController_execPlayerSwitchedWeapon_Parms
{
	unsigned char new_weapon;
};

struct ACCTutorialInstController_execPlayerUsedAbility_Parms
{
	int AbilitySlot;
};

struct ACCTutorialInstController_execPlayerCrouched_Parms
{
};

struct ACCTutorialInstController_execPlayerSprinted_Parms
{
};

struct ACCTutorialInstController_execPlayerRolled_Parms
{
};

struct ACCTutorialInstController_execPlayerReloadedAmmo_Parms
{
	unsigned char Slot;
};

struct ACCTutorialInstController_execPlayerTookDamage_Parms
{
	float Damage;
};

struct ACCTutorialInstController_execPlayerMadeDamage_Parms
{
	float Damage;
	unsigned long isZoomed : 1;
};

struct ACCTutorialInstController_execPlayerKilledEnemy_Parms
{
	unsigned char Weapon;
	class ACCPlayerReplicationInfo* enemyKilled;
};

struct ACCTutorialInstController_execPlayerMoved_Parms
{
};

struct ACCTutorialInstController_execClientPosses_Parms
{
};

struct ACCTutorialInstController_execIsEnabled_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

// (0xF50 - 0xF68)
class ACCTutorialInstController : public ACCInstanceController
{
public:
	TArray< struct FString >                           Popups;                                      // 0x0F50 (0x000C)
	int                                                CurrentPopup;                                // 0x0F5C (0x0004)
	float                                              OverallTime;                                 // 0x0F60 (0x0004)
	unsigned long                                      bEnabled : 1;                                // 0x0F64 (0x0004) [0x00000001]
	unsigned long                                      bPopupActive : 1;                            // 0x0F64 (0x0004) [0x00000002]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorialInstController" );

		return ClassPointer;
	};

public:
	bool IsPopupWaitsDeactivation ( int Index )
	{
		static UFunction* pfnIsPopupWaitsDeactivation = NULL;

		if ( !pfnIsPopupWaitsDeactivation )
			pfnIsPopupWaitsDeactivation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.IsPopupWaitsDeactivation" );

		ACCTutorialInstController_execIsPopupWaitsDeactivation_Parms IsPopupWaitsDeactivation_Parms;
		IsPopupWaitsDeactivation_Parms.Index = Index;

		this->ProcessEvent( pfnIsPopupWaitsDeactivation, &IsPopupWaitsDeactivation_Parms, NULL );

		return IsPopupWaitsDeactivation_Parms.ReturnValue;
	};

	bool IsPopupWaitsActivation ( int Index )
	{
		static UFunction* pfnIsPopupWaitsActivation = NULL;

		if ( !pfnIsPopupWaitsActivation )
			pfnIsPopupWaitsActivation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.IsPopupWaitsActivation" );

		ACCTutorialInstController_execIsPopupWaitsActivation_Parms IsPopupWaitsActivation_Parms;
		IsPopupWaitsActivation_Parms.Index = Index;

		this->ProcessEvent( pfnIsPopupWaitsActivation, &IsPopupWaitsActivation_Parms, NULL );

		return IsPopupWaitsActivation_Parms.ReturnValue;
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerTick" );

		ACCTutorialInstController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void HidePopup ()
	{
		static UFunction* pfnHidePopup = NULL;

		if ( !pfnHidePopup )
			pfnHidePopup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.HidePopup" );

		ACCTutorialInstController_execHidePopup_Parms HidePopup_Parms;

		this->ProcessEvent( pfnHidePopup, &HidePopup_Parms, NULL );
	};

	void ShowPopup ( int Index )
	{
		static UFunction* pfnShowPopup = NULL;

		if ( !pfnShowPopup )
			pfnShowPopup = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.ShowPopup" );

		ACCTutorialInstController_execShowPopup_Parms ShowPopup_Parms;
		ShowPopup_Parms.Index = Index;

		this->ProcessEvent( pfnShowPopup, &ShowPopup_Parms, NULL );
	};

	bool IsPopupActive ()
	{
		static UFunction* pfnIsPopupActive = NULL;

		if ( !pfnIsPopupActive )
			pfnIsPopupActive = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.IsPopupActive" );

		ACCTutorialInstController_execIsPopupActive_Parms IsPopupActive_Parms;

		this->ProcessEvent( pfnIsPopupActive, &IsPopupActive_Parms, NULL );

		return IsPopupActive_Parms.ReturnValue;
	};

	void NotifyAbilityUsed ( int AbilitySlot )
	{
		static UFunction* pfnNotifyAbilityUsed = NULL;

		if ( !pfnNotifyAbilityUsed )
			pfnNotifyAbilityUsed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.NotifyAbilityUsed" );

		ACCTutorialInstController_execNotifyAbilityUsed_Parms NotifyAbilityUsed_Parms;
		NotifyAbilityUsed_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnNotifyAbilityUsed, &NotifyAbilityUsed_Parms, NULL );
	};

	void OnReloadPressed ()
	{
		static UFunction* pfnOnReloadPressed = NULL;

		if ( !pfnOnReloadPressed )
			pfnOnReloadPressed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.OnReloadPressed" );

		ACCTutorialInstController_execOnReloadPressed_Parms OnReloadPressed_Parms;

		this->ProcessEvent( pfnOnReloadPressed, &OnReloadPressed_Parms, NULL );
	};

	void TEST_GetAmmoCountPrecentage ()
	{
		static UFunction* pfnTEST_GetAmmoCountPrecentage = NULL;

		if ( !pfnTEST_GetAmmoCountPrecentage )
			pfnTEST_GetAmmoCountPrecentage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.TEST_GetAmmoCountPrecentage" );

		ACCTutorialInstController_execTEST_GetAmmoCountPrecentage_Parms TEST_GetAmmoCountPrecentage_Parms;

		this->ProcessEvent( pfnTEST_GetAmmoCountPrecentage, &TEST_GetAmmoCountPrecentage_Parms, NULL );
	};

	float GetAmmoCountPrecentage ()
	{
		static UFunction* pfnGetAmmoCountPrecentage = NULL;

		if ( !pfnGetAmmoCountPrecentage )
			pfnGetAmmoCountPrecentage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.GetAmmoCountPrecentage" );

		ACCTutorialInstController_execGetAmmoCountPrecentage_Parms GetAmmoCountPrecentage_Parms;

		this->ProcessEvent( pfnGetAmmoCountPrecentage, &GetAmmoCountPrecentage_Parms, NULL );

		return GetAmmoCountPrecentage_Parms.ReturnValue;
	};

	void TEST_GetShootingDelay ()
	{
		static UFunction* pfnTEST_GetShootingDelay = NULL;

		if ( !pfnTEST_GetShootingDelay )
			pfnTEST_GetShootingDelay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.TEST_GetShootingDelay" );

		ACCTutorialInstController_execTEST_GetShootingDelay_Parms TEST_GetShootingDelay_Parms;

		this->ProcessEvent( pfnTEST_GetShootingDelay, &TEST_GetShootingDelay_Parms, NULL );
	};

	float GetShootingDelay ()
	{
		static UFunction* pfnGetShootingDelay = NULL;

		if ( !pfnGetShootingDelay )
			pfnGetShootingDelay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.GetShootingDelay" );

		ACCTutorialInstController_execGetShootingDelay_Parms GetShootingDelay_Parms;

		this->ProcessEvent( pfnGetShootingDelay, &GetShootingDelay_Parms, NULL );

		return GetShootingDelay_Parms.ReturnValue;
	};

	void PlayerPickupedContainer ()
	{
		static UFunction* pfnPlayerPickupedContainer = NULL;

		if ( !pfnPlayerPickupedContainer )
			pfnPlayerPickupedContainer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerPickupedContainer" );

		ACCTutorialInstController_execPlayerPickupedContainer_Parms PlayerPickupedContainer_Parms;

		this->ProcessEvent( pfnPlayerPickupedContainer, &PlayerPickupedContainer_Parms, NULL );
	};

	void PlayerSwitchedWeapon ( unsigned char new_weapon )
	{
		static UFunction* pfnPlayerSwitchedWeapon = NULL;

		if ( !pfnPlayerSwitchedWeapon )
			pfnPlayerSwitchedWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerSwitchedWeapon" );

		ACCTutorialInstController_execPlayerSwitchedWeapon_Parms PlayerSwitchedWeapon_Parms;
		PlayerSwitchedWeapon_Parms.new_weapon = new_weapon;

		this->ProcessEvent( pfnPlayerSwitchedWeapon, &PlayerSwitchedWeapon_Parms, NULL );
	};

	void PlayerUsedAbility ( int AbilitySlot )
	{
		static UFunction* pfnPlayerUsedAbility = NULL;

		if ( !pfnPlayerUsedAbility )
			pfnPlayerUsedAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerUsedAbility" );

		ACCTutorialInstController_execPlayerUsedAbility_Parms PlayerUsedAbility_Parms;
		PlayerUsedAbility_Parms.AbilitySlot = AbilitySlot;

		this->ProcessEvent( pfnPlayerUsedAbility, &PlayerUsedAbility_Parms, NULL );
	};

	void PlayerCrouched ()
	{
		static UFunction* pfnPlayerCrouched = NULL;

		if ( !pfnPlayerCrouched )
			pfnPlayerCrouched = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerCrouched" );

		ACCTutorialInstController_execPlayerCrouched_Parms PlayerCrouched_Parms;

		this->ProcessEvent( pfnPlayerCrouched, &PlayerCrouched_Parms, NULL );
	};

	void PlayerSprinted ()
	{
		static UFunction* pfnPlayerSprinted = NULL;

		if ( !pfnPlayerSprinted )
			pfnPlayerSprinted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerSprinted" );

		ACCTutorialInstController_execPlayerSprinted_Parms PlayerSprinted_Parms;

		this->ProcessEvent( pfnPlayerSprinted, &PlayerSprinted_Parms, NULL );
	};

	void PlayerRolled ()
	{
		static UFunction* pfnPlayerRolled = NULL;

		if ( !pfnPlayerRolled )
			pfnPlayerRolled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerRolled" );

		ACCTutorialInstController_execPlayerRolled_Parms PlayerRolled_Parms;

		this->ProcessEvent( pfnPlayerRolled, &PlayerRolled_Parms, NULL );
	};

	void PlayerReloadedAmmo ( unsigned char Slot )
	{
		static UFunction* pfnPlayerReloadedAmmo = NULL;

		if ( !pfnPlayerReloadedAmmo )
			pfnPlayerReloadedAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerReloadedAmmo" );

		ACCTutorialInstController_execPlayerReloadedAmmo_Parms PlayerReloadedAmmo_Parms;
		PlayerReloadedAmmo_Parms.Slot = Slot;

		this->ProcessEvent( pfnPlayerReloadedAmmo, &PlayerReloadedAmmo_Parms, NULL );
	};

	void PlayerTookDamage ( float Damage )
	{
		static UFunction* pfnPlayerTookDamage = NULL;

		if ( !pfnPlayerTookDamage )
			pfnPlayerTookDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerTookDamage" );

		ACCTutorialInstController_execPlayerTookDamage_Parms PlayerTookDamage_Parms;
		PlayerTookDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPlayerTookDamage, &PlayerTookDamage_Parms, NULL );
	};

	void PlayerMadeDamage ( float Damage, unsigned long isZoomed )
	{
		static UFunction* pfnPlayerMadeDamage = NULL;

		if ( !pfnPlayerMadeDamage )
			pfnPlayerMadeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerMadeDamage" );

		ACCTutorialInstController_execPlayerMadeDamage_Parms PlayerMadeDamage_Parms;
		PlayerMadeDamage_Parms.Damage = Damage;
		PlayerMadeDamage_Parms.isZoomed = isZoomed;

		this->ProcessEvent( pfnPlayerMadeDamage, &PlayerMadeDamage_Parms, NULL );
	};

	void PlayerKilledEnemy ( unsigned char Weapon, class ACCPlayerReplicationInfo* enemyKilled )
	{
		static UFunction* pfnPlayerKilledEnemy = NULL;

		if ( !pfnPlayerKilledEnemy )
			pfnPlayerKilledEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerKilledEnemy" );

		ACCTutorialInstController_execPlayerKilledEnemy_Parms PlayerKilledEnemy_Parms;
		PlayerKilledEnemy_Parms.Weapon = Weapon;
		PlayerKilledEnemy_Parms.enemyKilled = enemyKilled;

		this->ProcessEvent( pfnPlayerKilledEnemy, &PlayerKilledEnemy_Parms, NULL );
	};

	void PlayerMoved ()
	{
		static UFunction* pfnPlayerMoved = NULL;

		if ( !pfnPlayerMoved )
			pfnPlayerMoved = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.PlayerMoved" );

		ACCTutorialInstController_execPlayerMoved_Parms PlayerMoved_Parms;

		this->ProcessEvent( pfnPlayerMoved, &PlayerMoved_Parms, NULL );
	};

	void ClientPosses ()
	{
		static UFunction* pfnClientPosses = NULL;

		if ( !pfnClientPosses )
			pfnClientPosses = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.ClientPosses" );

		ACCTutorialInstController_execClientPosses_Parms ClientPosses_Parms;

		this->ProcessEvent( pfnClientPosses, &ClientPosses_Parms, NULL );
	};

	bool IsEnabled ()
	{
		static UFunction* pfnIsEnabled = NULL;

		if ( !pfnIsEnabled )
			pfnIsEnabled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController.IsEnabled" );

		ACCTutorialInstController_execIsEnabled_Parms IsEnabled_Parms;

		this->ProcessEvent( pfnIsEnabled, &IsEnabled_Parms, NULL );

		return IsEnabled_Parms.ReturnValue;
	};

};

UClass* ACCTutorialInstController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif