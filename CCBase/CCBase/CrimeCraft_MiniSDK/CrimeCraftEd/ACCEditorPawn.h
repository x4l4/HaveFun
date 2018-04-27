/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCEditorPawn.h
// Date: 06/16/2011 @ 05:19:41.908
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x6BC - 0x6C4)
class ACCEditorPawn : public ACCPawn
{
public:
	unsigned char                                      unknown_data17[ 8 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraftEd.CCEditorPawn" );

		return ClassPointer;
	};

public:
};

UClass* ACCEditorPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif