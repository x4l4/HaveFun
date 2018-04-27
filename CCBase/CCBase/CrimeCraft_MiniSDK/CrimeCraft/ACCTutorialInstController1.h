/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorialInstController1.h
// Date: 06/16/2011 @ 05:19:42.145
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_AmmoCountNeeded                      0.33
#define Const_SHOOTING_DELAY                       3
#define Const_NEED_TO_KILL_FOR_STEP3               3

enum EStepIds1
{
	ESI1_Movement = 0,
	ESI1_Shooting = 1,
	ESI1_Reloading = 2,
	ESI1_Aiming = 3,
	ESI1_MAX = 4
};

struct ACCTutorialInstController1_execPlayerReloadedAmmo_Parms
{
	unsigned char Slot;
};

struct ACCTutorialInstController1_execPlayerMadeDamage_Parms
{
	float Damage;
	unsigned long isZoomed : 1;
};

struct ACCTutorialInstController1_execPlayerMoved_Parms
{
};

struct ACCTutorialInstController1_execPlayerKilledEnemy_Parms
{
	unsigned char pweapon;
	class ACCPlayerReplicationInfo* enemyKilled;
};

struct ACCTutorialInstController1_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

// (0xF68 - 0xF74)
class ACCTutorialInstController1 : public ACCTutorialInstController
{
public:
	int                                                Step3KilledCount;                            // 0x0F68 (0x0004)
	float                                              PopupDelay1;                                 // 0x0F6C (0x0004)
	float                                              PopupDelay2;                                 // 0x0F70 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorialInstController1" );

		return ClassPointer;
	};

public:
	void PlayerReloadedAmmo ( unsigned char Slot )
	{
		static UFunction* pfnPlayerReloadedAmmo = NULL;

		if ( !pfnPlayerReloadedAmmo )
			pfnPlayerReloadedAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController1.PlayerReloadedAmmo" );

		ACCTutorialInstController1_execPlayerReloadedAmmo_Parms PlayerReloadedAmmo_Parms;
		PlayerReloadedAmmo_Parms.Slot = Slot;

		this->ProcessEvent( pfnPlayerReloadedAmmo, &PlayerReloadedAmmo_Parms, NULL );
	};

	void PlayerMadeDamage ( float Damage, unsigned long isZoomed )
	{
		static UFunction* pfnPlayerMadeDamage = NULL;

		if ( !pfnPlayerMadeDamage )
			pfnPlayerMadeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController1.PlayerMadeDamage" );

		ACCTutorialInstController1_execPlayerMadeDamage_Parms PlayerMadeDamage_Parms;
		PlayerMadeDamage_Parms.Damage = Damage;
		PlayerMadeDamage_Parms.isZoomed = isZoomed;

		this->ProcessEvent( pfnPlayerMadeDamage, &PlayerMadeDamage_Parms, NULL );
	};

	void PlayerMoved ()
	{
		static UFunction* pfnPlayerMoved = NULL;

		if ( !pfnPlayerMoved )
			pfnPlayerMoved = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController1.PlayerMoved" );

		ACCTutorialInstController1_execPlayerMoved_Parms PlayerMoved_Parms;

		this->ProcessEvent( pfnPlayerMoved, &PlayerMoved_Parms, NULL );
	};

	void PlayerKilledEnemy ( unsigned char pweapon, class ACCPlayerReplicationInfo* enemyKilled )
	{
		static UFunction* pfnPlayerKilledEnemy = NULL;

		if ( !pfnPlayerKilledEnemy )
			pfnPlayerKilledEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController1.PlayerKilledEnemy" );

		ACCTutorialInstController1_execPlayerKilledEnemy_Parms PlayerKilledEnemy_Parms;
		PlayerKilledEnemy_Parms.pweapon = pweapon;
		PlayerKilledEnemy_Parms.enemyKilled = enemyKilled;

		this->ProcessEvent( pfnPlayerKilledEnemy, &PlayerKilledEnemy_Parms, NULL );
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialInstController1.PlayerTick" );

		ACCTutorialInstController1_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

};

UClass* ACCTutorialInstController1::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif