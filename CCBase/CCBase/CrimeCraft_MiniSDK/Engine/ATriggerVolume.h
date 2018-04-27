/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ATriggerVolume.h
// Date: 06/16/2011 @ 05:19:39.806
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ATriggerVolume_execStopsProjectile_Parms
{
	class AProjectile* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ATriggerVolume_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x1F8 - 0x1F8)
class ATriggerVolume : public AVolume
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.TriggerVolume" );

		return ClassPointer;
	};

public:
	bool StopsProjectile ( class AProjectile* P )
	{
		static UFunction* pfnStopsProjectile = NULL;

		if ( !pfnStopsProjectile )
			pfnStopsProjectile = UObject::FindObject< UFunction >( "Function Engine.TriggerVolume.StopsProjectile" );

		ATriggerVolume_execStopsProjectile_Parms StopsProjectile_Parms;
		StopsProjectile_Parms.P = P;

		this->ProcessEvent( pfnStopsProjectile, &StopsProjectile_Parms, NULL );

		return StopsProjectile_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.TriggerVolume.PostBeginPlay" );

		ATriggerVolume_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ATriggerVolume::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif