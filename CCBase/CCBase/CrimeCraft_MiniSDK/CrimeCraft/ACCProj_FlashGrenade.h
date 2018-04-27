/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_FlashGrenade.h
// Date: 06/16/2011 @ 05:19:42.108
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_FlashGrenade_execProcessRadiusDamage_Parms
{
	class AActor* Victim;
	class AController* InstigatedBy;
	struct FVector HurtOrigin;
	unsigned long bHit : 1;
};

// (0x44C - 0x45C)
class ACCProj_FlashGrenade : public ACCProj_Grenade
{
public:
	float                                              TimeCoef;                                    // 0x044C (0x0004)
	float                                              PowerCoef;                                   // 0x0450 (0x0004)
	float                                              BlindnessFalloffDegree;                      // 0x0454 (0x0004)
	float                                              BlindnessClampDegree;                        // 0x0458 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_FlashGrenade" );

		return ClassPointer;
	};

public:
	void ProcessRadiusDamage ( class AActor* Victim, class AController* InstigatedBy, struct FVector HurtOrigin, unsigned long bHit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnProcessRadiusDamage = NULL;

		if ( !pfnProcessRadiusDamage )
			pfnProcessRadiusDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_FlashGrenade.ProcessRadiusDamage" );

		ACCProj_FlashGrenade_execProcessRadiusDamage_Parms ProcessRadiusDamage_Parms;
		ProcessRadiusDamage_Parms.Victim = Victim;
		ProcessRadiusDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &ProcessRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
		ProcessRadiusDamage_Parms.bHit = bHit;

		this->ProcessEvent( pfnProcessRadiusDamage, &ProcessRadiusDamage_Parms, NULL );
	};

};

UClass* ACCProj_FlashGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif