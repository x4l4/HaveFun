/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketRuler.h
// Date: 06/16/2011 @ 05:19:42.75
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketRuler_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProj_SpiralRocketRuler_execInitVisualPart_Parms
{
	void* AttachmentPreset;
};

struct ACCProj_SpiralRocketRuler_execEnterRocketState_Parms
{
};

struct ACCProj_SpiralRocketRuler_execDestroyed_Parms
{
};

struct ACCProj_SpiralRocketRuler_execInitByWeapon_Parms
{
	class ACCWeapon* Wpn;
};

struct ACCProj_SpiralRocketRuler_execSetUniqID_Parms
{
	int RulerUniqID;
};

struct ACCProj_SpiralRocketRuler_execPostBeginPlay_Parms
{
};

// (0x3D0 - 0x3D8)
class ACCProj_SpiralRocketRuler : public ACCProj_SpiralRocketBase
{
public:
	class ACCProj_SpiralRocketSimulationSender*        RulerSender;                                 // 0x03D0 (0x0004)
	class ACCProj_SpiralRocketAI_Geometry*             GeometryAI;                                  // 0x03D4 (0x0004)

	// GeometryFlying

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketRuler" );

		return ClassPointer;
	};

public:
	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.ExplodeInternal" );

		ACCProj_SpiralRocketRuler_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

	void InitVisualPart ( void* AttachmentPreset )
	{
		static UFunction* pfnInitVisualPart = NULL;

		if ( !pfnInitVisualPart )
			pfnInitVisualPart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.InitVisualPart" );

		ACCProj_SpiralRocketRuler_execInitVisualPart_Parms InitVisualPart_Parms;
		InitVisualPart_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnInitVisualPart, &InitVisualPart_Parms, NULL );
	};

	void EnterRocketState ()
	{
		static UFunction* pfnEnterRocketState = NULL;

		if ( !pfnEnterRocketState )
			pfnEnterRocketState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.EnterRocketState" );

		ACCProj_SpiralRocketRuler_execEnterRocketState_Parms EnterRocketState_Parms;

		this->ProcessEvent( pfnEnterRocketState, &EnterRocketState_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.Destroyed" );

		ACCProj_SpiralRocketRuler_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void InitByWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnInitByWeapon = NULL;

		if ( !pfnInitByWeapon )
			pfnInitByWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.InitByWeapon" );

		ACCProj_SpiralRocketRuler_execInitByWeapon_Parms InitByWeapon_Parms;
		InitByWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnInitByWeapon, &InitByWeapon_Parms, NULL );
	};

	void SetUniqID ( int RulerUniqID )
	{
		static UFunction* pfnSetUniqID = NULL;

		if ( !pfnSetUniqID )
			pfnSetUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.SetUniqID" );

		ACCProj_SpiralRocketRuler_execSetUniqID_Parms SetUniqID_Parms;
		SetUniqID_Parms.RulerUniqID = RulerUniqID;

		this->ProcessEvent( pfnSetUniqID, &SetUniqID_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketRuler.PostBeginPlay" );

		ACCProj_SpiralRocketRuler_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketRuler::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif