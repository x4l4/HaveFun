/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCMine.h
// Date: 06/16/2011 @ 05:19:41.806
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCMine_execOnUnblockPlayer_Parms
{
};

struct ACCMine_execMatchStarting_Parms
{
};

struct ACCMine_execGetScaledRadiusMin_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCMine_execGetScaledRadius_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCMine_execOnExplosionTimer_Parms
{
};

struct ACCMine_execActivate_Parms
{
};

struct ACCMine_eventTakeDamage_Parms
{
	int DamageAmount;
	class AController* EventInstigator;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCMine_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

struct ACCMine_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCMine_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x3B8 - 0x3DC)
class ACCMine : public ACCPlaceableItem
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x03B8 (0x0004)
	int                                                DamageProxy;                                 // 0x03BC (0x0004)
	float                                              MomentumTransferProxy;                       // 0x03C0 (0x0004)
	float                                              Radius;                                      // 0x03C4 (0x0004)
	float                                              RadiusMin;                                   // 0x03C8 (0x0004)
	float                                              Coef;                                        // 0x03CC (0x0004)
	void*                                              ActivationSound;                             // 0x03D0 (0x0004)
	float                                              ExplosionTimeout;                            // 0x03D4 (0x0004)
	unsigned long                                      bGoingToExplode : 1;                         // 0x03D8 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCMine" );

		return ClassPointer;
	};

public:
	void OnUnblockPlayer ()
	{
		static UFunction* pfnOnUnblockPlayer = NULL;

		if ( !pfnOnUnblockPlayer )
			pfnOnUnblockPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.OnUnblockPlayer" );

		ACCMine_execOnUnblockPlayer_Parms OnUnblockPlayer_Parms;

		this->ProcessEvent( pfnOnUnblockPlayer, &OnUnblockPlayer_Parms, NULL );
	};

	void MatchStarting ()
	{
		static UFunction* pfnMatchStarting = NULL;

		if ( !pfnMatchStarting )
			pfnMatchStarting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.MatchStarting" );

		ACCMine_execMatchStarting_Parms MatchStarting_Parms;

		this->ProcessEvent( pfnMatchStarting, &MatchStarting_Parms, NULL );
	};

	float GetScaledRadiusMin ()
	{
		static UFunction* pfnGetScaledRadiusMin = NULL;

		if ( !pfnGetScaledRadiusMin )
			pfnGetScaledRadiusMin = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.GetScaledRadiusMin" );

		ACCMine_execGetScaledRadiusMin_Parms GetScaledRadiusMin_Parms;

		this->ProcessEvent( pfnGetScaledRadiusMin, &GetScaledRadiusMin_Parms, NULL );

		return GetScaledRadiusMin_Parms.ReturnValue;
	};

	float GetScaledRadius ()
	{
		static UFunction* pfnGetScaledRadius = NULL;

		if ( !pfnGetScaledRadius )
			pfnGetScaledRadius = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.GetScaledRadius" );

		ACCMine_execGetScaledRadius_Parms GetScaledRadius_Parms;

		this->ProcessEvent( pfnGetScaledRadius, &GetScaledRadius_Parms, NULL );

		return GetScaledRadius_Parms.ReturnValue;
	};

	void OnExplosionTimer ()
	{
		static UFunction* pfnOnExplosionTimer = NULL;

		if ( !pfnOnExplosionTimer )
			pfnOnExplosionTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.OnExplosionTimer" );

		ACCMine_execOnExplosionTimer_Parms OnExplosionTimer_Parms;

		this->ProcessEvent( pfnOnExplosionTimer, &OnExplosionTimer_Parms, NULL );
	};

	void Activate ()
	{
		static UFunction* pfnActivate = NULL;

		if ( !pfnActivate )
			pfnActivate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.Activate" );

		ACCMine_execActivate_Parms Activate_Parms;

		this->ProcessEvent( pfnActivate, &Activate_Parms, NULL );
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.TakeDamage" );

		ACCMine_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.DamageAmount = DamageAmount;
		TakeDamage_Parms.EventInstigator = EventInstigator;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.Touch" );

		ACCMine_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.PostBeginPlay" );

		ACCMine_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCMine.UpdateRadarPresentation" );

		ACCMine_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCMine::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif