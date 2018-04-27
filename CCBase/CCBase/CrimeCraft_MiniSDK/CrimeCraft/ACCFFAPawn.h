/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCFFAPawn.h
// Date: 06/16/2011 @ 05:19:42.74
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCFFAPawn_eventPreBeginPlay_Parms
{
};// FUNC_Event

// (0x1AC0 - 0x1AC4)
class ACCFFAPawn : public ACCInstancePawn
{
public:
	float                                              FFAInvulnerabilityTime;                      // 0x1AC0 (0x0004)

	// FeigningDeath

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCFFAPawn" );

		return ClassPointer;
	};

public:
	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAPawn.PreBeginPlay" );

		ACCFFAPawn_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

};

UClass* ACCFFAPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif