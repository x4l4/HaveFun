/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UClass.h
// Date: 06/16/2011 @ 05:19:38.905
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0xE4 - 0x200)
class UClass : public UState
{
public:
	unsigned char                                      unknown_data04[ 284 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Class" );

		return ClassPointer;
	};

public:
};

UClass* UClass::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif