/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_Ability.h
// Date: 06/16/2011 @ 05:19:41.910
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_Ability_execProcessRadiusDamage_Parms
{
	class AActor* Victim;
	class AController* InstigatedBy;
	struct FVector HurtOrigin;
	unsigned long bHit : 1;
};

struct ACCProj_Ability_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

// (0x358 - 0x360)
class ACCProj_Ability : public ACCProjectile
{
public:
	struct FName                                       AbilityName;                                 // 0x0358 (0x0008)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_Ability" );

		return ClassPointer;
	};

public:
	void ProcessRadiusDamage ( class AActor* Victim, class AController* InstigatedBy, struct FVector HurtOrigin, unsigned long bHit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessRadiusDamage = NULL;

		if ( !pfnProcessRadiusDamage )
			pfnProcessRadiusDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Ability.ProcessRadiusDamage" );

		ACCProj_Ability_execProcessRadiusDamage_Parms ProcessRadiusDamage_Parms;
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
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Ability.CustomInit" );

		ACCProj_Ability_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

};

UClass* ACCProj_Ability::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif