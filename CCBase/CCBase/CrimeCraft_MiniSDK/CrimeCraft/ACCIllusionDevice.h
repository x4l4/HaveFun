/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCIllusionDevice.h
// Date: 06/16/2011 @ 05:19:41.650
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCIllusionDevice_execDestroyed_Parms
{
};

struct ACCIllusionDevice_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x3B8 - 0x3BC)
class ACCIllusionDevice : public ACCPlaceableItem
{
public:
	void*                                              IllusionBot;                                 // 0x03B8 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCIllusionDevice" );

		return ClassPointer;
	};

public:
	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCIllusionDevice.Destroyed" );

		ACCIllusionDevice_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCIllusionDevice.PostBeginPlay" );

		ACCIllusionDevice_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCIllusionDevice::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif