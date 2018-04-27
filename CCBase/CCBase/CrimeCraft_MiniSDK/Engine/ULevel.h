/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ULevel.h
// Date: 06/16/2011 @ 05:19:39.460
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x90 - 0x234)
class ULevel : public ULevelBase
{
public:
	unsigned char                                      unknown_data10[ 420 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Level" );

		return ClassPointer;
	};

public:
};

UClass* ULevel::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif