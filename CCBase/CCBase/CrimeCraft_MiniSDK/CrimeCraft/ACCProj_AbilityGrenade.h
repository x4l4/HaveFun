/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_AbilityGrenade.h
// Date: 06/16/2011 @ 05:19:42.106
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_AbilityGrenade_execProcessRadiusDamage_Parms
{
	class AActor* Victim;
	class AController* InstigatedBy;
	struct FVector HurtOrigin;
	unsigned long bHit : 1;
};

struct ACCProj_AbilityGrenade_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

struct ACCProj_AbilityGrenade_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

// (0x44C - 0x474)
class ACCProj_AbilityGrenade : public ACCProj_Grenade
{
public:
	struct FName                                       AbilityName;                                 // 0x044C (0x0008)
	unsigned long                                      bCanBeBlocked : 1;                           // 0x0454 (0x0004) [0x00000001]
	struct FCCAbilityZoneDesc                          AbilityZoneDesc;                             // 0x0458 (0x001C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_AbilityGrenade" );

		return ClassPointer;
	};

public:
	void ProcessRadiusDamage ( class AActor* Victim, class AController* InstigatedBy, struct FVector HurtOrigin, unsigned long bHit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessRadiusDamage = NULL;

		if ( !pfnProcessRadiusDamage )
			pfnProcessRadiusDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_AbilityGrenade.ProcessRadiusDamage" );

		ACCProj_AbilityGrenade_execProcessRadiusDamage_Parms ProcessRadiusDamage_Parms;
		ProcessRadiusDamage_Parms.Victim = Victim;
		ProcessRadiusDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ProcessRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
		ProcessRadiusDamage_Parms.bHit = bHit;

		this->ProcessEvent( pfnProcessRadiusDamage, &ProcessRadiusDamage_Parms, NULL );
	};

	void CustomInit ( struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnCustomInit = NULL;

		if ( !pfnCustomInit )
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_AbilityGrenade.CustomInit" );

		ACCProj_AbilityGrenade_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_AbilityGrenade.ExplodeInternal" );

		ACCProj_AbilityGrenade_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

};

UClass* ACCProj_AbilityGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif