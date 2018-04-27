/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_VacuumGrenade.h
// Date: 06/16/2011 @ 05:19:41.951
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_VacuumGrenade_execSpawnVacuumBombs_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_VacuumGrenade_execSplash_Parms
{
	struct FVector HurtOrigin;
	float Radius;
	float BlindeTime;
	struct FName EffectName;
};

struct ACCProj_VacuumGrenade_execPerformExplosion_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_VacuumGrenade_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

// (0x44C - 0x4B8)
class ACCProj_VacuumGrenade : public ACCProj_Grenade
{
public:
	struct FString                                     GrenadePreset;                               // 0x044C (0x000C)
	float                                              GrenadeDamage;                               // 0x0458 (0x0004)
	float                                              GrenadeDamageRadius;                         // 0x045C (0x0004)
	float                                              GrenadeMomentumTransfer;                     // 0x0460 (0x0004)
	float                                              BombSpeed;                                   // 0x0464 (0x0004)
	float                                              BombReflectionDamage;                        // 0x0468 (0x0004)
	float                                              BombReflectionMomentum;                      // 0x046C (0x0004)
	float                                              BombDamage;                                  // 0x0470 (0x0004)
	float                                              BombDamageRadius;                            // 0x0474 (0x0004)
	float                                              BombMomentumTransfer;                        // 0x0478 (0x0004)
	float                                              BombDamageRadiusKoeficient;                  // 0x047C (0x0004)
	float                                              BombImpulseKoeficient;                       // 0x0480 (0x0004)
	struct FName                                       BombWeaponAttachmentID;                      // 0x0484 (0x0008)
	float                                              BombFlyingAwayRadius;                        // 0x048C (0x0004)
	int                                                NumOfBombs;                                  // 0x0490 (0x0004)
	struct FString                                     BombPreset;                                  // 0x0494 (0x000C)
	float                                              VerticalRandMin;                             // 0x04A0 (0x0004)
	float                                              VerticalRandMax;                             // 0x04A4 (0x0004)
	float                                              GorisontalRandMin;                           // 0x04A8 (0x0004)
	float                                              GorisontalRandMax;                           // 0x04AC (0x0004)
	float                                              LifeTimeRandMin;                             // 0x04B0 (0x0004)
	float                                              LifeTimeRandMax;                             // 0x04B4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_VacuumGrenade" );

		return ClassPointer;
	};

public:
	void SpawnVacuumBombs ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnSpawnVacuumBombs = NULL;

		if ( !pfnSpawnVacuumBombs )
			pfnSpawnVacuumBombs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumGrenade.SpawnVacuumBombs" );

		ACCProj_VacuumGrenade_execSpawnVacuumBombs_Parms SpawnVacuumBombs_Parms;
		memcpy( &SpawnVacuumBombs_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SpawnVacuumBombs_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnSpawnVacuumBombs, &SpawnVacuumBombs_Parms, NULL );
	};

	void Splash ( struct FVector HurtOrigin, float Radius, float BlindeTime, struct FName EffectName )
	{
		static UFunction* pfnSplash = NULL;

		if ( !pfnSplash )
			pfnSplash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumGrenade.Splash" );

		ACCProj_VacuumGrenade_execSplash_Parms Splash_Parms;
		memcpy( &Splash_Parms.HurtOrigin, &HurtOrigin, 0xC );
		Splash_Parms.Radius = Radius;
		Splash_Parms.BlindeTime = BlindeTime;
		memcpy( &Splash_Parms.EffectName, &EffectName, 0x8 );

		this->ProcessEvent( pfnSplash, &Splash_Parms, NULL );
	};

	void PerformExplosion ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnPerformExplosion = NULL;

		if ( !pfnPerformExplosion )
			pfnPerformExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumGrenade.PerformExplosion" );

		ACCProj_VacuumGrenade_execPerformExplosion_Parms PerformExplosion_Parms;
		memcpy( &PerformExplosion_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PerformExplosion_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPerformExplosion, &PerformExplosion_Parms, NULL );
	};

	void CustomInit ( struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnCustomInit = NULL;

		if ( !pfnCustomInit )
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumGrenade.CustomInit" );

		ACCProj_VacuumGrenade_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

};

UClass* ACCProj_VacuumGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif