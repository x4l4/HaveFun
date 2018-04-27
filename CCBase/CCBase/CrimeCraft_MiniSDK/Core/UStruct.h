/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UStruct.h
// Date: 06/16/2011 @ 05:19:38.904
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x44 - 0x90)
class UStruct : public UField
{
public:
	unsigned char                                      unknown_data00[ 12 ];
	DWORD                                              PropertiesSize;
	unsigned char                                      unknown_data01[ 8 ];
	TArray< unsigned char >                            Script;
	unsigned char                                      unknown_data02[ 40 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Struct" );

		return ClassPointer;
	};

public:
};

UClass* UStruct::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif