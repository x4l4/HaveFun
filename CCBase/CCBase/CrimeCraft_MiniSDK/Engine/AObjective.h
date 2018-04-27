/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AObjective.h
// Date: 06/16/2011 @ 05:19:40.496
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x2A8 - 0x2A8)
class AObjective : public ANavigationPoint
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Objective" );

		return ClassPointer;
	};

public:
};

UClass* AObjective::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif