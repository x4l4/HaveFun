/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_VacuumRocket.h
// Date: 06/16/2011 @ 05:19:41.931
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_VacuumRocket_execSpawnVacuumBombs_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_VacuumRocket_execSplash_Parms
{
	struct FVector HurtOrigin;
	float Radius;
	float BlindeTime;
	struct FName EffectName;
};

struct ACCProj_VacuumRocket_execPerformExplosion_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_VacuumRocket_execCustomInit_Parms
{
	struct FVector Direction;
	struct FCustomProjectileFire SourceInfo;
};

// (0x3C0 - 0x42C)
class ACCProj_VacuumRocket : public ACCProj_Rocket
{
public:
	struct FString                                     RocketPreset;                                // 0x03C0 (0x000C)
	float                                              RocketDamage;                                // 0x03CC (0x0004)
	float                                              RocketDamageRadius;                          // 0x03D0 (0x0004)
	float                                              RocketMomentumTransfer;                      // 0x03D4 (0x0004)
	float                                              BombSpeed;                                   // 0x03D8 (0x0004)
	float                                              BombReflectionDamage;                        // 0x03DC (0x0004)
	float                                              BombReflectionMomentum;                      // 0x03E0 (0x0004)
	float                                              BombDamage;                                  // 0x03E4 (0x0004)
	float                                              BombDamageRadius;                            // 0x03E8 (0x0004)
	float                                              BombMomentumTransfer;                        // 0x03EC (0x0004)
	float                                              BombDamageRadiusKoeficient;                  // 0x03F0 (0x0004)
	float                                              BombImpulseKoeficient;                       // 0x03F4 (0x0004)
	struct FName                                       BombWeaponAttachmentID;                      // 0x03F8 (0x0008)
	float                                              BombFlyingAwayRadius;                        // 0x0400 (0x0004)
	int                                                NumOfBombs;                                  // 0x0404 (0x0004)
	struct FString                                     BombPreset;                                  // 0x0408 (0x000C)
	float                                              VerticalRandMin;                             // 0x0414 (0x0004)
	float                                              VerticalRandMax;                             // 0x0418 (0x0004)
	float                                              GorisontalRandMin;                           // 0x041C (0x0004)
	float                                              GorisontalRandMax;                           // 0x0420 (0x0004)
	float                                              LifeTimeRandMin;                             // 0x0424 (0x0004)
	float                                              LifeTimeRandMax;                             // 0x0428 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_VacuumRocket" );

		return ClassPointer;
	};

public:
	void SpawnVacuumBombs ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnSpawnVacuumBombs = NULL;

		if ( !pfnSpawnVacuumBombs )
			pfnSpawnVacuumBombs = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumRocket.SpawnVacuumBombs" );

		ACCProj_VacuumRocket_execSpawnVacuumBombs_Parms SpawnVacuumBombs_Parms;
		memcpy( &SpawnVacuumBombs_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &SpawnVacuumBombs_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnSpawnVacuumBombs, &SpawnVacuumBombs_Parms, NULL );
	};

	void Splash ( struct FVector HurtOrigin, float Radius, float BlindeTime, struct FName EffectName )
	{
		static UFunction* pfnSplash = NULL;

		if ( !pfnSplash )
			pfnSplash = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumRocket.Splash" );

		ACCProj_VacuumRocket_execSplash_Parms Splash_Parms;
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
			pfnPerformExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumRocket.PerformExplosion" );

		ACCProj_VacuumRocket_execPerformExplosion_Parms PerformExplosion_Parms;
		memcpy( &PerformExplosion_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PerformExplosion_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPerformExplosion, &PerformExplosion_Parms, NULL );
	};

	void CustomInit ( struct FVector Direction, struct FCustomProjectileFire SourceInfo )
	{
		static UFunction* pfnCustomInit = NULL;

		if ( !pfnCustomInit )
			pfnCustomInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_VacuumRocket.CustomInit" );

		ACCProj_VacuumRocket_execCustomInit_Parms CustomInit_Parms;
		memcpy( &CustomInit_Parms.Direction, &Direction, 0xC );
		memcpy( &CustomInit_Parms.SourceInfo, &SourceInfo, 0x6C );

		this->ProcessEvent( pfnCustomInit, &CustomInit_Parms, NULL );
	};

};

UClass* ACCProj_VacuumRocket::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif