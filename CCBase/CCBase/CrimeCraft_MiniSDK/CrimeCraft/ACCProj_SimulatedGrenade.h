/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SimulatedGrenade.h
// Date: 06/16/2011 @ 05:19:41.830
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SimulatedGrenade_execResetSimulation_Parms
{
	struct FVector SimulationInitialLocation;
	struct FVector SimulationInitialVelocity;
};

struct ACCProj_SimulatedGrenade_execSpawnAvoidMarker_Parms
{
};

struct ACCProj_SimulatedGrenade_execPlayReflectionEffects_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_SimulatedGrenade_execInitVisualPart_Parms
{
	void* AttachmentPreset;
};

struct ACCProj_SimulatedGrenade_execHitWall_PreProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SimulatedGrenade_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

// (0x44C - 0x450)
class ACCProj_SimulatedGrenade : public ACCProj_Grenade
{
public:
	unsigned long                                      bHasTouch : 1;                               // 0x044C (0x0004) [0x00000001]
	unsigned long                                      bHasReflection : 1;                          // 0x044C (0x0004) [0x00000002]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SimulatedGrenade" );

		return ClassPointer;
	};

public:
	void ResetSimulation ( struct FVector SimulationInitialLocation, struct FVector SimulationInitialVelocity )
	{
		static UFunction* pfnResetSimulation = NULL;

		if ( !pfnResetSimulation )
			pfnResetSimulation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.ResetSimulation" );

		ACCProj_SimulatedGrenade_execResetSimulation_Parms ResetSimulation_Parms;
		memcpy( &ResetSimulation_Parms.SimulationInitialLocation, &SimulationInitialLocation, 0xC );
		memcpy( &ResetSimulation_Parms.SimulationInitialVelocity, &SimulationInitialVelocity, 0xC );

		this->ProcessEvent( pfnResetSimulation, &ResetSimulation_Parms, NULL );
	};

	void SpawnAvoidMarker ()
	{
		static UFunction* pfnSpawnAvoidMarker = NULL;

		if ( !pfnSpawnAvoidMarker )
			pfnSpawnAvoidMarker = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.SpawnAvoidMarker" );

		ACCProj_SimulatedGrenade_execSpawnAvoidMarker_Parms SpawnAvoidMarker_Parms;

		this->ProcessEvent( pfnSpawnAvoidMarker, &SpawnAvoidMarker_Parms, NULL );
	};

	void PlayReflectionEffects ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnPlayReflectionEffects = NULL;

		if ( !pfnPlayReflectionEffects )
			pfnPlayReflectionEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.PlayReflectionEffects" );

		ACCProj_SimulatedGrenade_execPlayReflectionEffects_Parms PlayReflectionEffects_Parms;
		memcpy( &PlayReflectionEffects_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &PlayReflectionEffects_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnPlayReflectionEffects, &PlayReflectionEffects_Parms, NULL );
	};

	void InitVisualPart ( void* AttachmentPreset )
	{
		static UFunction* pfnInitVisualPart = NULL;

		if ( !pfnInitVisualPart )
			pfnInitVisualPart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.InitVisualPart" );

		ACCProj_SimulatedGrenade_execInitVisualPart_Parms InitVisualPart_Parms;
		InitVisualPart_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnInitVisualPart, &InitVisualPart_Parms, NULL );
	};

	bool HitWall_PreProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PreProcessed = NULL;

		if ( !pfnHitWall_PreProcessed )
			pfnHitWall_PreProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.HitWall_PreProcessed" );

		ACCProj_SimulatedGrenade_execHitWall_PreProcessed_Parms HitWall_PreProcessed_Parms;
		memcpy( &HitWall_PreProcessed_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_PreProcessed_Parms.Wall = Wall;
		HitWall_PreProcessed_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_PreProcessed, &HitWall_PreProcessed_Parms, NULL );

		return HitWall_PreProcessed_Parms.ReturnValue;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SimulatedGrenade.Touch" );

		ACCProj_SimulatedGrenade_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

};

UClass* ACCProj_SimulatedGrenade::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif