/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCShield.h
// Date: 06/16/2011 @ 05:19:41.894
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCShield_eventTakeDamage_Parms
{
	int DamageAmount;
	class AController* EventInstigator;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCShield_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCShield_execShieldEquipped_Parms
{
};

struct ACCShield_execStartShieldEquip_Parms
{
};

struct ACCShield_execInitSkeletalMesh_Parms
{
};

struct ACCShield_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x3B8 - 0x3D4)
class ACCShield : public ACCPlaceableItem
{
public:
	int                                                MaxHP;                                       // 0x03B8 (0x0004)
	int                                                hp;                                          // 0x03BC (0x0004)
	class USkeletalMeshComponent*                      ShieldSkelMeshCmp;                           // 0x03C0 (0x0004)
	void*                                              BaseShieldNode;                              // 0x03C4 (0x0004)
	void*                                              EquipShieldNode;                             // 0x03C8 (0x0004)
	void*                                              StandShieldNode;                             // 0x03CC (0x0004)
	float                                              EquipTime;                                   // 0x03D0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCShield" );

		return ClassPointer;
	};

public:
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.TakeDamage" );

		ACCShield_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.DamageAmount = DamageAmount;
		TakeDamage_Parms.EventInstigator = EventInstigator;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.ExplodeInternal" );

		ACCShield_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

	void ShieldEquipped ()
	{
		static UFunction* pfnShieldEquipped = NULL;

		if ( !pfnShieldEquipped )
			pfnShieldEquipped = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.ShieldEquipped" );

		ACCShield_execShieldEquipped_Parms ShieldEquipped_Parms;

		this->ProcessEvent( pfnShieldEquipped, &ShieldEquipped_Parms, NULL );
	};

	void StartShieldEquip ()
	{
		static UFunction* pfnStartShieldEquip = NULL;

		if ( !pfnStartShieldEquip )
			pfnStartShieldEquip = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.StartShieldEquip" );

		ACCShield_execStartShieldEquip_Parms StartShieldEquip_Parms;

		this->ProcessEvent( pfnStartShieldEquip, &StartShieldEquip_Parms, NULL );
	};

	void InitSkeletalMesh ()
	{
		static UFunction* pfnInitSkeletalMesh = NULL;

		if ( !pfnInitSkeletalMesh )
			pfnInitSkeletalMesh = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.InitSkeletalMesh" );

		ACCShield_execInitSkeletalMesh_Parms InitSkeletalMesh_Parms;

		this->ProcessEvent( pfnInitSkeletalMesh, &InitSkeletalMesh_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCShield.PostBeginPlay" );

		ACCShield_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCShield::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif