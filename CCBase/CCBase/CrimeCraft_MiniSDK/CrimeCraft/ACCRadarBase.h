/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCRadarBase.h
// Date: 06/16/2011 @ 05:19:41.878
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ERadarEffectType
{
	ERadarEffectType_None = 0,
	ERadarEffectType_Sphere = 1,
	ERadarEffectType_ParticleSystem = 2,
	ERadarEffectType_MAX = 3
};

struct ACCRadarBase_execStopsProjectile_Parms
{
	class AProjectile* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCRadarBase_eventUnTouch_Parms
{
	class AActor* Other;
};// FUNC_Event

struct ACCRadarBase_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCRadarBase_eventUnTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCRadarBase_eventTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCRadarBase_execOnPawnRestarted_Parms
{
	class ACCInstancePawn* Pawn;
};

struct ACCRadarBase_execClientDoMissExplosion_Parms
{
};

struct ACCRadarBase_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCRadarBase_execGetRadarPlain_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCRadarBase_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x3B8 - 0x3D0)
class ACCRadarBase : public ACCPlaceableItem
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x03B8 (0x0004)
	float                                              Lifetime;                                    // 0x03BC (0x0004)
	unsigned char                                      RadarEffectType;                             // 0x03C0 (0x0001)
	void*                                              SphereComponent;                             // 0x03C4 (0x0004)
	void*                                              PSComponent;                                 // 0x03C8 (0x0004)
	void*                                              SpawnedEmitter;                              // 0x03CC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCRadarBase" );

		return ClassPointer;
	};

public:
	bool StopsProjectile ( class AProjectile* P )
	{
		static UFunction* pfnStopsProjectile = NULL;

		if ( !pfnStopsProjectile )
			pfnStopsProjectile = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.StopsProjectile" );

		ACCRadarBase_execStopsProjectile_Parms StopsProjectile_Parms;
		StopsProjectile_Parms.P = P;

		this->ProcessEvent( pfnStopsProjectile, &StopsProjectile_Parms, NULL );

		return StopsProjectile_Parms.ReturnValue;
	};

	void eventUnTouch ( class AActor* Other )
	{
		static UFunction* pfnUnTouch = NULL;

		if ( !pfnUnTouch )
			pfnUnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.UnTouch" );

		ACCRadarBase_eventUnTouch_Parms UnTouch_Parms;
		UnTouch_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouch, &UnTouch_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.Touch" );

		ACCRadarBase_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void eventUnTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnUnTouchPawn = NULL;

		if ( !pfnUnTouchPawn )
			pfnUnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.UnTouchPawn" );

		ACCRadarBase_eventUnTouchPawn_Parms UnTouchPawn_Parms;
		UnTouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouchPawn, &UnTouchPawn_Parms, NULL );
	};

	void eventTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnTouchPawn = NULL;

		if ( !pfnTouchPawn )
			pfnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.TouchPawn" );

		ACCRadarBase_eventTouchPawn_Parms TouchPawn_Parms;
		TouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnTouchPawn, &TouchPawn_Parms, NULL );
	};

	void OnPawnRestarted ( class ACCInstancePawn* Pawn )
	{
		static UFunction* pfnOnPawnRestarted = NULL;

		if ( !pfnOnPawnRestarted )
			pfnOnPawnRestarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.OnPawnRestarted" );

		ACCRadarBase_execOnPawnRestarted_Parms OnPawnRestarted_Parms;
		OnPawnRestarted_Parms.Pawn = Pawn;

		this->ProcessEvent( pfnOnPawnRestarted, &OnPawnRestarted_Parms, NULL );
	};

	void ClientDoMissExplosion ()
	{
		static UFunction* pfnClientDoMissExplosion = NULL;

		if ( !pfnClientDoMissExplosion )
			pfnClientDoMissExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.ClientDoMissExplosion" );

		ACCRadarBase_execClientDoMissExplosion_Parms ClientDoMissExplosion_Parms;

		this->ProcessEvent( pfnClientDoMissExplosion, &ClientDoMissExplosion_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.PostBeginPlay" );

		ACCRadarBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	float GetRadarPlain ()
	{
		static UFunction* pfnGetRadarPlain = NULL;

		if ( !pfnGetRadarPlain )
			pfnGetRadarPlain = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.GetRadarPlain" );

		ACCRadarBase_execGetRadarPlain_Parms GetRadarPlain_Parms;

		pfnGetRadarPlain->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRadarPlain, &GetRadarPlain_Parms, NULL );
		pfnGetRadarPlain->FunctionFlags |= 0x400;

		return GetRadarPlain_Parms.ReturnValue;
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadarBase.UpdateRadarPresentation" );

		ACCRadarBase_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCRadarBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif