/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UState.h
// Date: 06/16/2011 @ 05:19:38.905
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x90 - 0xE4)
class UState : public UStruct
{
public:
	unsigned char                                      unknown_data03[ 84 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.State" );

		return ClassPointer;
	};

public:
};

UClass* UState::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif