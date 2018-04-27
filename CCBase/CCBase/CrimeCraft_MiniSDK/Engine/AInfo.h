/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AInfo.h
// Date: 06/16/2011 @ 05:19:39.257
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x1BC - 0x1BC)
class AInfo : public AActor
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Info" );

		return ClassPointer;
	};

public:
};

UClass* AInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif