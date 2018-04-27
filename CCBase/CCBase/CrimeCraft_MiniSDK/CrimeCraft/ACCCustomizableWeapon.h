/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCustomizableWeapon.h
// Date: 06/16/2011 @ 05:19:41.483
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCustomizableWeapon_execComputeMeleeDamage_Parms
{
	class ACCInstancePawn* Sender;
	int BeatMode;
	float BaseDamage;
	class AActor* Victim;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execPassBeginReloadEventToAbilitySystem_Parms
{
};// FUNC_Final

struct ACCCustomizableWeapon_execGetGrenadeAmmo_Parms
{
};

struct ACCCustomizableWeapon_execGetAmmo_Parms
{
	int Limit;
};

struct ACCCustomizableWeapon_execConditionalAutoReload_Parms
{
};

struct ACCCustomizableWeapon_execGetHowManyBulletsCanArm_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execCheckIfCanReload_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execOldWeaponCleared_Parms
{
};

struct ACCCustomizableWeapon_execReloadAmmoConsumptionControl_ConsumeAmmo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_eventReloadAmmoConsumptionControl_RevokeRequest_Parms
{
	struct FString Id;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCCustomizableWeapon_eventReloadAmmoConsumptionControl_PostRequest_Parms
{
	struct FString Id;
};// FUNC_Event

struct ACCCustomizableWeapon_execFireAmmoConsumptionControl_ConsumeAmmo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_eventFireAmmoConsumptionControl_RevokeRequest_Parms
{
	struct FString Id;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCCustomizableWeapon_eventFireAmmoConsumptionControl_PostRequest_Parms
{
	struct FString Id;
};// FUNC_Event

struct ACCCustomizableWeapon_execGrenadeConsumptionControl_ConsumeGrenades_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_eventGrenadeConsumptionControl_RevokeRequest_Parms
{
	struct FString Id;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCCustomizableWeapon_eventGrenadeConsumptionControl_PostRequest_Parms
{
	struct FString Id;
};// FUNC_Event

struct ACCCustomizableWeapon_execAbilityShot_GetActiveRequest_Parms
{
	struct FAbilityShotDesc Desc; // CPF_OutParm
};

struct ACCCustomizableWeapon_execAbilityShot_HavePendingRequest_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execAbilityShot_RevokeRequest_Parms
{
	struct FString Id;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execAbilityShot_PostRequest_Parms
{
	struct FString Id;
	struct FAbilityShotDesc Desc; // CPF_OutParm
};

struct ACCCustomizableWeapon_execHasAnyAmmo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execHasAmmo_Parms
{
	unsigned char FireModeNum;
	int Amount;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execPassAfterAmmoConsumeEventToTheAbilitySystem_Parms
{
	int UnitsConsumed;
};// FUNC_Final

struct ACCCustomizableWeapon_execConsumeAmmo_Parms
{
	unsigned char FireModeNum;
};

struct ACCCustomizableWeapon_execClientSyncAmmoCount_Parms
{
	float FireTimeStamp;
	float AmmoCountFromServer;
};

struct ACCCustomizableWeapon_eventCallClientSyncAmmoCount_Parms
{
	float FireTimeStamp;
};// FUNC_Event

struct ACCCustomizableWeapon_execPredictAddAmmo_Parms
{
	int Amount;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execSetInstantHitDamageType_Parms
{
	unsigned char FiringMode;
};

struct ACCCustomizableWeapon_execPreProcessInstantHit_Parms
{
	unsigned char FiringMode;
	struct FImpactInfo Impact;
};

struct ACCCustomizableWeapon_execGetBaseDamage_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execImpactNeedsToBeProcessed_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execCheckForCriticalDamage_Parms
{
	struct FImpactInfo Impact;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCustomizableWeapon_execGetAvatar_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

// (0x678 - 0x6AC)
class ACCCustomizableWeapon : public ACCWeapon
{
public:
	TArray< struct FAbilityShot_Request >              AbilityShot_Requests;                        // 0x0678 (0x000C)
	TArray< struct FGrenadeConsumptionControl_Request > GrenadeConsumptionControl_Requests;         // 0x0684 (0x000C)
	TArray< struct FFireAmmoConsumptionControl_Request > FireAmmoConsumptionControl_Requests;       // 0x0690 (0x000C)
	unsigned long                                      FireAmmoConsumptionControl_IsConsuming : 1;  // 0x069C (0x0004) [0x00000001]
	TArray< struct FReloadAmmoConsumptionControl_Request > ReloadAmmoConsumptionControl_Requests;   // 0x06A0 (0x000C)

	// Melee
	// Reloading

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCustomizableWeapon" );

		return ClassPointer;
	};

public:
	float ComputeMeleeDamage ( class ACCInstancePawn* Sender, int BeatMode, float BaseDamage, class AActor* Victim )
	{
		static UFunction* pfnComputeMeleeDamage = NULL;

		if ( !pfnComputeMeleeDamage )
			pfnComputeMeleeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ComputeMeleeDamage" );

		ACCCustomizableWeapon_execComputeMeleeDamage_Parms ComputeMeleeDamage_Parms;
		ComputeMeleeDamage_Parms.Sender = Sender;
		ComputeMeleeDamage_Parms.BeatMode = BeatMode;
		ComputeMeleeDamage_Parms.BaseDamage = BaseDamage;
		ComputeMeleeDamage_Parms.Victim = Victim;

		this->ProcessEvent( pfnComputeMeleeDamage, &ComputeMeleeDamage_Parms, NULL );

		return ComputeMeleeDamage_Parms.ReturnValue;
	};

	void PassBeginReloadEventToAbilitySystem ()
	{
		static UFunction* pfnPassBeginReloadEventToAbilitySystem = NULL;

		if ( !pfnPassBeginReloadEventToAbilitySystem )
			pfnPassBeginReloadEventToAbilitySystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.PassBeginReloadEventToAbilitySystem" );

		ACCCustomizableWeapon_execPassBeginReloadEventToAbilitySystem_Parms PassBeginReloadEventToAbilitySystem_Parms;

		this->ProcessEvent( pfnPassBeginReloadEventToAbilitySystem, &PassBeginReloadEventToAbilitySystem_Parms, NULL );
	};

	void GetGrenadeAmmo ()
	{
		static UFunction* pfnGetGrenadeAmmo = NULL;

		if ( !pfnGetGrenadeAmmo )
			pfnGetGrenadeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GetGrenadeAmmo" );

		ACCCustomizableWeapon_execGetGrenadeAmmo_Parms GetGrenadeAmmo_Parms;

		this->ProcessEvent( pfnGetGrenadeAmmo, &GetGrenadeAmmo_Parms, NULL );
	};

	void GetAmmo ( int Limit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetAmmo = NULL;

		if ( !pfnGetAmmo )
			pfnGetAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GetAmmo" );

		ACCCustomizableWeapon_execGetAmmo_Parms GetAmmo_Parms;
		GetAmmo_Parms.Limit = Limit;

		this->ProcessEvent( pfnGetAmmo, &GetAmmo_Parms, NULL );
	};

	void ConditionalAutoReload ()
	{
		static UFunction* pfnConditionalAutoReload = NULL;

		if ( !pfnConditionalAutoReload )
			pfnConditionalAutoReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ConditionalAutoReload" );

		ACCCustomizableWeapon_execConditionalAutoReload_Parms ConditionalAutoReload_Parms;

		this->ProcessEvent( pfnConditionalAutoReload, &ConditionalAutoReload_Parms, NULL );
	};

	int GetHowManyBulletsCanArm ()
	{
		static UFunction* pfnGetHowManyBulletsCanArm = NULL;

		if ( !pfnGetHowManyBulletsCanArm )
			pfnGetHowManyBulletsCanArm = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GetHowManyBulletsCanArm" );

		ACCCustomizableWeapon_execGetHowManyBulletsCanArm_Parms GetHowManyBulletsCanArm_Parms;

		this->ProcessEvent( pfnGetHowManyBulletsCanArm, &GetHowManyBulletsCanArm_Parms, NULL );

		return GetHowManyBulletsCanArm_Parms.ReturnValue;
	};

	bool CheckIfCanReload ()
	{
		static UFunction* pfnCheckIfCanReload = NULL;

		if ( !pfnCheckIfCanReload )
			pfnCheckIfCanReload = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.CheckIfCanReload" );

		ACCCustomizableWeapon_execCheckIfCanReload_Parms CheckIfCanReload_Parms;

		this->ProcessEvent( pfnCheckIfCanReload, &CheckIfCanReload_Parms, NULL );

		return CheckIfCanReload_Parms.ReturnValue;
	};

	void OldWeaponCleared ()
	{
		static UFunction* pfnOldWeaponCleared = NULL;

		if ( !pfnOldWeaponCleared )
			pfnOldWeaponCleared = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.OldWeaponCleared" );

		ACCCustomizableWeapon_execOldWeaponCleared_Parms OldWeaponCleared_Parms;

		this->ProcessEvent( pfnOldWeaponCleared, &OldWeaponCleared_Parms, NULL );
	};

	bool ReloadAmmoConsumptionControl_ConsumeAmmo ()
	{
		static UFunction* pfnReloadAmmoConsumptionControl_ConsumeAmmo = NULL;

		if ( !pfnReloadAmmoConsumptionControl_ConsumeAmmo )
			pfnReloadAmmoConsumptionControl_ConsumeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ReloadAmmoConsumptionControl_ConsumeAmmo" );

		ACCCustomizableWeapon_execReloadAmmoConsumptionControl_ConsumeAmmo_Parms ReloadAmmoConsumptionControl_ConsumeAmmo_Parms;

		this->ProcessEvent( pfnReloadAmmoConsumptionControl_ConsumeAmmo, &ReloadAmmoConsumptionControl_ConsumeAmmo_Parms, NULL );

		return ReloadAmmoConsumptionControl_ConsumeAmmo_Parms.ReturnValue;
	};

	bool eventReloadAmmoConsumptionControl_RevokeRequest ( struct FString Id )
	{
		static UFunction* pfnReloadAmmoConsumptionControl_RevokeRequest = NULL;

		if ( !pfnReloadAmmoConsumptionControl_RevokeRequest )
			pfnReloadAmmoConsumptionControl_RevokeRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ReloadAmmoConsumptionControl_RevokeRequest" );

		ACCCustomizableWeapon_eventReloadAmmoConsumptionControl_RevokeRequest_Parms ReloadAmmoConsumptionControl_RevokeRequest_Parms;
		memcpy( &ReloadAmmoConsumptionControl_RevokeRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnReloadAmmoConsumptionControl_RevokeRequest, &ReloadAmmoConsumptionControl_RevokeRequest_Parms, NULL );

		return ReloadAmmoConsumptionControl_RevokeRequest_Parms.ReturnValue;
	};

	void eventReloadAmmoConsumptionControl_PostRequest ( struct FString Id )
	{
		static UFunction* pfnReloadAmmoConsumptionControl_PostRequest = NULL;

		if ( !pfnReloadAmmoConsumptionControl_PostRequest )
			pfnReloadAmmoConsumptionControl_PostRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ReloadAmmoConsumptionControl_PostRequest" );

		ACCCustomizableWeapon_eventReloadAmmoConsumptionControl_PostRequest_Parms ReloadAmmoConsumptionControl_PostRequest_Parms;
		memcpy( &ReloadAmmoConsumptionControl_PostRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnReloadAmmoConsumptionControl_PostRequest, &ReloadAmmoConsumptionControl_PostRequest_Parms, NULL );
	};

	bool FireAmmoConsumptionControl_ConsumeAmmo ()
	{
		static UFunction* pfnFireAmmoConsumptionControl_ConsumeAmmo = NULL;

		if ( !pfnFireAmmoConsumptionControl_ConsumeAmmo )
			pfnFireAmmoConsumptionControl_ConsumeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.FireAmmoConsumptionControl_ConsumeAmmo" );

		ACCCustomizableWeapon_execFireAmmoConsumptionControl_ConsumeAmmo_Parms FireAmmoConsumptionControl_ConsumeAmmo_Parms;

		this->ProcessEvent( pfnFireAmmoConsumptionControl_ConsumeAmmo, &FireAmmoConsumptionControl_ConsumeAmmo_Parms, NULL );

		return FireAmmoConsumptionControl_ConsumeAmmo_Parms.ReturnValue;
	};

	bool eventFireAmmoConsumptionControl_RevokeRequest ( struct FString Id )
	{
		static UFunction* pfnFireAmmoConsumptionControl_RevokeRequest = NULL;

		if ( !pfnFireAmmoConsumptionControl_RevokeRequest )
			pfnFireAmmoConsumptionControl_RevokeRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.FireAmmoConsumptionControl_RevokeRequest" );

		ACCCustomizableWeapon_eventFireAmmoConsumptionControl_RevokeRequest_Parms FireAmmoConsumptionControl_RevokeRequest_Parms;
		memcpy( &FireAmmoConsumptionControl_RevokeRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnFireAmmoConsumptionControl_RevokeRequest, &FireAmmoConsumptionControl_RevokeRequest_Parms, NULL );

		return FireAmmoConsumptionControl_RevokeRequest_Parms.ReturnValue;
	};

	void eventFireAmmoConsumptionControl_PostRequest ( struct FString Id )
	{
		static UFunction* pfnFireAmmoConsumptionControl_PostRequest = NULL;

		if ( !pfnFireAmmoConsumptionControl_PostRequest )
			pfnFireAmmoConsumptionControl_PostRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.FireAmmoConsumptionControl_PostRequest" );

		ACCCustomizableWeapon_eventFireAmmoConsumptionControl_PostRequest_Parms FireAmmoConsumptionControl_PostRequest_Parms;
		memcpy( &FireAmmoConsumptionControl_PostRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnFireAmmoConsumptionControl_PostRequest, &FireAmmoConsumptionControl_PostRequest_Parms, NULL );
	};

	bool GrenadeConsumptionControl_ConsumeGrenades ()
	{
		static UFunction* pfnGrenadeConsumptionControl_ConsumeGrenades = NULL;

		if ( !pfnGrenadeConsumptionControl_ConsumeGrenades )
			pfnGrenadeConsumptionControl_ConsumeGrenades = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GrenadeConsumptionControl_ConsumeGrenades" );

		ACCCustomizableWeapon_execGrenadeConsumptionControl_ConsumeGrenades_Parms GrenadeConsumptionControl_ConsumeGrenades_Parms;

		this->ProcessEvent( pfnGrenadeConsumptionControl_ConsumeGrenades, &GrenadeConsumptionControl_ConsumeGrenades_Parms, NULL );

		return GrenadeConsumptionControl_ConsumeGrenades_Parms.ReturnValue;
	};

	bool eventGrenadeConsumptionControl_RevokeRequest ( struct FString Id )
	{
		static UFunction* pfnGrenadeConsumptionControl_RevokeRequest = NULL;

		if ( !pfnGrenadeConsumptionControl_RevokeRequest )
			pfnGrenadeConsumptionControl_RevokeRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GrenadeConsumptionControl_RevokeRequest" );

		ACCCustomizableWeapon_eventGrenadeConsumptionControl_RevokeRequest_Parms GrenadeConsumptionControl_RevokeRequest_Parms;
		memcpy( &GrenadeConsumptionControl_RevokeRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnGrenadeConsumptionControl_RevokeRequest, &GrenadeConsumptionControl_RevokeRequest_Parms, NULL );

		return GrenadeConsumptionControl_RevokeRequest_Parms.ReturnValue;
	};

	void eventGrenadeConsumptionControl_PostRequest ( struct FString Id )
	{
		static UFunction* pfnGrenadeConsumptionControl_PostRequest = NULL;

		if ( !pfnGrenadeConsumptionControl_PostRequest )
			pfnGrenadeConsumptionControl_PostRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GrenadeConsumptionControl_PostRequest" );

		ACCCustomizableWeapon_eventGrenadeConsumptionControl_PostRequest_Parms GrenadeConsumptionControl_PostRequest_Parms;
		memcpy( &GrenadeConsumptionControl_PostRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnGrenadeConsumptionControl_PostRequest, &GrenadeConsumptionControl_PostRequest_Parms, NULL );
	};

	void AbilityShot_GetActiveRequest ( struct FAbilityShotDesc* Desc )
	{
		static UFunction* pfnAbilityShot_GetActiveRequest = NULL;

		if ( !pfnAbilityShot_GetActiveRequest )
			pfnAbilityShot_GetActiveRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.AbilityShot_GetActiveRequest" );

		ACCCustomizableWeapon_execAbilityShot_GetActiveRequest_Parms AbilityShot_GetActiveRequest_Parms;

		this->ProcessEvent( pfnAbilityShot_GetActiveRequest, &AbilityShot_GetActiveRequest_Parms, NULL );

		if ( Desc )
			memcpy( Desc, &AbilityShot_GetActiveRequest_Parms.Desc, 0x14 ); // CPF_OutParm
	};

	bool AbilityShot_HavePendingRequest ()
	{
		static UFunction* pfnAbilityShot_HavePendingRequest = NULL;

		if ( !pfnAbilityShot_HavePendingRequest )
			pfnAbilityShot_HavePendingRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.AbilityShot_HavePendingRequest" );

		ACCCustomizableWeapon_execAbilityShot_HavePendingRequest_Parms AbilityShot_HavePendingRequest_Parms;

		this->ProcessEvent( pfnAbilityShot_HavePendingRequest, &AbilityShot_HavePendingRequest_Parms, NULL );

		return AbilityShot_HavePendingRequest_Parms.ReturnValue;
	};

	bool AbilityShot_RevokeRequest ( struct FString Id )
	{
		static UFunction* pfnAbilityShot_RevokeRequest = NULL;

		if ( !pfnAbilityShot_RevokeRequest )
			pfnAbilityShot_RevokeRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.AbilityShot_RevokeRequest" );

		ACCCustomizableWeapon_execAbilityShot_RevokeRequest_Parms AbilityShot_RevokeRequest_Parms;
		memcpy( &AbilityShot_RevokeRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnAbilityShot_RevokeRequest, &AbilityShot_RevokeRequest_Parms, NULL );

		return AbilityShot_RevokeRequest_Parms.ReturnValue;
	};

	void AbilityShot_PostRequest ( struct FString Id, struct FAbilityShotDesc* Desc )
	{
		static UFunction* pfnAbilityShot_PostRequest = NULL;

		if ( !pfnAbilityShot_PostRequest )
			pfnAbilityShot_PostRequest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.AbilityShot_PostRequest" );

		ACCCustomizableWeapon_execAbilityShot_PostRequest_Parms AbilityShot_PostRequest_Parms;
		memcpy( &AbilityShot_PostRequest_Parms.Id, &Id, 0xC );

		this->ProcessEvent( pfnAbilityShot_PostRequest, &AbilityShot_PostRequest_Parms, NULL );

		if ( Desc )
			memcpy( Desc, &AbilityShot_PostRequest_Parms.Desc, 0x14 ); // CPF_OutParm
	};

	bool HasAnyAmmo ()
	{
		static UFunction* pfnHasAnyAmmo = NULL;

		if ( !pfnHasAnyAmmo )
			pfnHasAnyAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.HasAnyAmmo" );

		ACCCustomizableWeapon_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

		this->ProcessEvent( pfnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );

		return HasAnyAmmo_Parms.ReturnValue;
	};

	bool HasAmmo ( unsigned char FireModeNum, int Amount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHasAmmo = NULL;

		if ( !pfnHasAmmo )
			pfnHasAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.HasAmmo" );

		ACCCustomizableWeapon_execHasAmmo_Parms HasAmmo_Parms;
		HasAmmo_Parms.FireModeNum = FireModeNum;
		HasAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnHasAmmo, &HasAmmo_Parms, NULL );

		return HasAmmo_Parms.ReturnValue;
	};

	void PassAfterAmmoConsumeEventToTheAbilitySystem ( int UnitsConsumed )
	{
		static UFunction* pfnPassAfterAmmoConsumeEventToTheAbilitySystem = NULL;

		if ( !pfnPassAfterAmmoConsumeEventToTheAbilitySystem )
			pfnPassAfterAmmoConsumeEventToTheAbilitySystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.PassAfterAmmoConsumeEventToTheAbilitySystem" );

		ACCCustomizableWeapon_execPassAfterAmmoConsumeEventToTheAbilitySystem_Parms PassAfterAmmoConsumeEventToTheAbilitySystem_Parms;
		PassAfterAmmoConsumeEventToTheAbilitySystem_Parms.UnitsConsumed = UnitsConsumed;

		this->ProcessEvent( pfnPassAfterAmmoConsumeEventToTheAbilitySystem, &PassAfterAmmoConsumeEventToTheAbilitySystem_Parms, NULL );
	};

	void ConsumeAmmo ( unsigned char FireModeNum )
	{
		static UFunction* pfnConsumeAmmo = NULL;

		if ( !pfnConsumeAmmo )
			pfnConsumeAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ConsumeAmmo" );

		ACCCustomizableWeapon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
		ConsumeAmmo_Parms.FireModeNum = FireModeNum;

		this->ProcessEvent( pfnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
	};

	void ClientSyncAmmoCount ( float FireTimeStamp, float AmmoCountFromServer )
	{
		static UFunction* pfnClientSyncAmmoCount = NULL;

		if ( !pfnClientSyncAmmoCount )
			pfnClientSyncAmmoCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ClientSyncAmmoCount" );

		ACCCustomizableWeapon_execClientSyncAmmoCount_Parms ClientSyncAmmoCount_Parms;
		ClientSyncAmmoCount_Parms.FireTimeStamp = FireTimeStamp;
		ClientSyncAmmoCount_Parms.AmmoCountFromServer = AmmoCountFromServer;

		this->ProcessEvent( pfnClientSyncAmmoCount, &ClientSyncAmmoCount_Parms, NULL );
	};

	void eventCallClientSyncAmmoCount ( float FireTimeStamp )
	{
		static UFunction* pfnCallClientSyncAmmoCount = NULL;

		if ( !pfnCallClientSyncAmmoCount )
			pfnCallClientSyncAmmoCount = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.CallClientSyncAmmoCount" );

		ACCCustomizableWeapon_eventCallClientSyncAmmoCount_Parms CallClientSyncAmmoCount_Parms;
		CallClientSyncAmmoCount_Parms.FireTimeStamp = FireTimeStamp;

		this->ProcessEvent( pfnCallClientSyncAmmoCount, &CallClientSyncAmmoCount_Parms, NULL );
	};

	int PredictAddAmmo ( int Amount )
	{
		static UFunction* pfnPredictAddAmmo = NULL;

		if ( !pfnPredictAddAmmo )
			pfnPredictAddAmmo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.PredictAddAmmo" );

		ACCCustomizableWeapon_execPredictAddAmmo_Parms PredictAddAmmo_Parms;
		PredictAddAmmo_Parms.Amount = Amount;

		this->ProcessEvent( pfnPredictAddAmmo, &PredictAddAmmo_Parms, NULL );

		return PredictAddAmmo_Parms.ReturnValue;
	};

	void SetInstantHitDamageType ( unsigned char FiringMode )
	{
		static UFunction* pfnSetInstantHitDamageType = NULL;

		if ( !pfnSetInstantHitDamageType )
			pfnSetInstantHitDamageType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.SetInstantHitDamageType" );

		ACCCustomizableWeapon_execSetInstantHitDamageType_Parms SetInstantHitDamageType_Parms;
		SetInstantHitDamageType_Parms.FiringMode = FiringMode;

		this->ProcessEvent( pfnSetInstantHitDamageType, &SetInstantHitDamageType_Parms, NULL );
	};

	void PreProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact )
	{
		static UFunction* pfnPreProcessInstantHit = NULL;

		if ( !pfnPreProcessInstantHit )
			pfnPreProcessInstantHit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.PreProcessInstantHit" );

		ACCCustomizableWeapon_execPreProcessInstantHit_Parms PreProcessInstantHit_Parms;
		PreProcessInstantHit_Parms.FiringMode = FiringMode;
		memcpy( &PreProcessInstantHit_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnPreProcessInstantHit, &PreProcessInstantHit_Parms, NULL );
	};

	float GetBaseDamage ()
	{
		static UFunction* pfnGetBaseDamage = NULL;

		if ( !pfnGetBaseDamage )
			pfnGetBaseDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GetBaseDamage" );

		ACCCustomizableWeapon_execGetBaseDamage_Parms GetBaseDamage_Parms;

		this->ProcessEvent( pfnGetBaseDamage, &GetBaseDamage_Parms, NULL );

		return GetBaseDamage_Parms.ReturnValue;
	};

	bool ImpactNeedsToBeProcessed ( struct FImpactInfo Impact )
	{
		static UFunction* pfnImpactNeedsToBeProcessed = NULL;

		if ( !pfnImpactNeedsToBeProcessed )
			pfnImpactNeedsToBeProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.ImpactNeedsToBeProcessed" );

		ACCCustomizableWeapon_execImpactNeedsToBeProcessed_Parms ImpactNeedsToBeProcessed_Parms;
		memcpy( &ImpactNeedsToBeProcessed_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnImpactNeedsToBeProcessed, &ImpactNeedsToBeProcessed_Parms, NULL );

		return ImpactNeedsToBeProcessed_Parms.ReturnValue;
	};

	bool CheckForCriticalDamage ( struct FImpactInfo Impact )
	{
		static UFunction* pfnCheckForCriticalDamage = NULL;

		if ( !pfnCheckForCriticalDamage )
			pfnCheckForCriticalDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.CheckForCriticalDamage" );

		ACCCustomizableWeapon_execCheckForCriticalDamage_Parms CheckForCriticalDamage_Parms;
		memcpy( &CheckForCriticalDamage_Parms.Impact, &Impact, 0x60 );

		this->ProcessEvent( pfnCheckForCriticalDamage, &CheckForCriticalDamage_Parms, NULL );

		return CheckForCriticalDamage_Parms.ReturnValue;
	};

	void* GetAvatar ()
	{
		static UFunction* pfnGetAvatar = NULL;

		if ( !pfnGetAvatar )
			pfnGetAvatar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCustomizableWeapon.GetAvatar" );

		ACCCustomizableWeapon_execGetAvatar_Parms GetAvatar_Parms;

		this->ProcessEvent( pfnGetAvatar, &GetAvatar_Parms, NULL );

		return GetAvatar_Parms.ReturnValue;
	};

};

UClass* ACCCustomizableWeapon::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif