/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorialInstController5.h
// Date: 06/16/2011 @ 05:19:42.148
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EStepIds5
{
	ESI5_MeleeKill = 0,
	ESI5_LootContainer = 1,
	ESI5_MAX = 2
};

struct ACCTutorialInstController5_execHidePopup2_Parms
{
};

struct ACCTutorialInstController5_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCTutorialInstController5_execPlayerPickupedContainer_Parms
{
};

struct ACCTutorialInstController5_execPlayerKilledEnemy_Parms
{
	unsigned char pweapon;
	class ACCPlayerReplicationInfo* enemyKilled;
};

struct ACCTutorialInstController5_execPlayerTookDamage_Parms
{
	float Damage;
};

// (0xF68 - 0xF70)
class ACCTutorialInstController5 : public ACCTutorialInstController
{
public:
	unsigned long                                      bAlreadyPickupedContainer : 1;               // 0x0F68 (0x0004) [0x00000001]
	float                                              Popup2Timeout;                               // 0x0F6C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorialInstController5" );

		return ClassPointer;
	};

public:
	void HidePopup2 ()
	{
		static UFunction* pfnHidePopup2 = NULL;

		if ( !pfnHidePopup2 )
			pfnHidePopup2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController5.HidePopup2" );

		ACCTutorialInstController5_execHidePopup2_Parms HidePopup2_Parms;

		this->ProcessEvent( pfnHidePopup2, &HidePopup2_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController5.PlayerTick" );

		ACCTutorialInstController5_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	void PlayerPickupedContainer ()
	{
		static UFunction* pfnPlayerPickupedContainer = NULL;

		if ( !pfnPlayerPickupedContainer )
			pfnPlayerPickupedContainer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController5.PlayerPickupedContainer" );

		ACCTutorialInstController5_execPlayerPickupedContainer_Parms PlayerPickupedContainer_Parms;

		this->ProcessEvent( pfnPlayerPickupedContainer, &PlayerPickupedContainer_Parms, NULL );
	};

	void PlayerKilledEnemy ( unsigned char pweapon, class ACCPlayerReplicationInfo* enemyKilled )
	{
		static UFunction* pfnPlayerKilledEnemy = NULL;

		if ( !pfnPlayerKilledEnemy )
			pfnPlayerKilledEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController5.PlayerKilledEnemy" );

		ACCTutorialInstController5_execPlayerKilledEnemy_Parms PlayerKilledEnemy_Parms;
		PlayerKilledEnemy_Parms.pweapon = pweapon;
		PlayerKilledEnemy_Parms.enemyKilled = enemyKilled;

		this->ProcessEvent( pfnPlayerKilledEnemy, &PlayerKilledEnemy_Parms, NULL );
	};

	void PlayerTookDamage ( float Damage )
	{
		static UFunction* pfnPlayerTookDamage = NULL;

		if ( !pfnPlayerTookDamage )
			pfnPlayerTookDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController5.PlayerTookDamage" );

		ACCTutorialInstController5_execPlayerTookDamage_Parms PlayerTookDamage_Parms;
		PlayerTookDamage_Parms.Damage = Damage;

		this->ProcessEvent( pfnPlayerTookDamage, &PlayerTookDamage_Parms, NULL );
	};

};

UClass* ACCTutorialInstController5::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif