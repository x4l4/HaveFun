/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AScout.h
// Date: 06/16/2011 @ 05:19:39.581
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AScout_eventPreBeginPlay_Parms
{
};// FUNC_Event

// (0x3D8 - 0x400)
class AScout : public APawn
{
public:
	TArray< struct FPathSizeInfo >                     PathSizes;                                   // 0x03D8 (0x000C)
	float                                              TestJumpZ;                                   // 0x03E4 (0x0004)
	float                                              TestGroundSpeed;                             // 0x03E8 (0x0004)
	float                                              TestMaxFallSpeed;                            // 0x03EC (0x0004)
	float                                              TestFallSpeed;                               // 0x03F0 (0x0004)
	float                                              MaxLandingVelocity;                          // 0x03F4 (0x0004)
	int                                                MinNumPlayerStarts;                          // 0x03F8 (0x0004)
	class UClass*                                      DefaultReachSpecClass;                       // 0x03FC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Scout" );

		return ClassPointer;
	};

public:
	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Scout.PreBeginPlay" );

		AScout_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

};

UClass* AScout::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif