/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_Squirt.h
// Date: 06/16/2011 @ 05:19:42.99
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_Squirt_execProjectileHurtRadius_Parms
{
	struct FVector HurtOrigin;
	struct FVector HitNormal;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

// (0x358 - 0x358)
class ACCProj_Squirt : public ACCProjectile
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_Squirt" );

		return ClassPointer;
	};

public:
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal )
	{
		static UFunction* pfnProjectileHurtRadius = NULL;

		if ( !pfnProjectileHurtRadius )
			pfnProjectileHurtRadius = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Squirt.ProjectileHurtRadius" );

		ACCProj_Squirt_execProjectileHurtRadius_Parms ProjectileHurtRadius_Parms;
		memcpy( &ProjectileHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
		memcpy( &ProjectileHurtRadius_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnProjectileHurtRadius, &ProjectileHurtRadius_Parms, NULL );

		return ProjectileHurtRadius_Parms.ReturnValue;
	};

};

UClass* ACCProj_Squirt::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif