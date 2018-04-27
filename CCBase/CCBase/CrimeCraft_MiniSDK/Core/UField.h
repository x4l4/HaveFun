/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UField.h
// Date: 06/16/2011 @ 05:19:38.904
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x3C - 0x44)
class UField : public UObject
{
public:
	class UField*                                      SuperField;
	class UField*                                      Next;

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Field" );

		return ClassPointer;
	};

public:
};

UClass* UField::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif