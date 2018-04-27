/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_IGGrenade.h
// Date: 06/16/2011 @ 05:19:41.911
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_IGGrenade_execPerformExplosion_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_IGGrenade_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

// (0x44C - 0x454)
class ACCProj_IGGrenade : public ACCProj_Grenade
{
public:
	struct FName                                       AbilityName;                                 // 0x044C (0x0008)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_IGGrenade" );

		return ClassPointer;
	};

public:
	void PerformExplosion ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnPerformExplosion = NULL;

		if ( !pfnPerformExplosion )
			pfnPerformExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_IGGrenade.PerformExplosion" );

		ACCProj_IGGrenade_execPerformExplosion_Parms PerformExplosion_Parms;
		memcpy( &PerformExplosion_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PerformExplosion_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPerformExplosion, &PerformExplosion_Parms, NULL );
	};

	void CustomInit ( struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnCustomInit = NULL;

		if ( !pfnCustomInit )
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_IGGrenade.CustomInit" );

		ACCProj_IGGrenade_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

};

UClass* ACCProj_IGGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif