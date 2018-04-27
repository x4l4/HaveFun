/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCEditorController.h
// Date: 06/16/2011 @ 05:19:41.908
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x5B4 - 0x5E0)
class ACCEditorController : public AGamePlayerController
{
public:
	unsigned char                                      unknown_data16[ 44 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraftEd.CCEditorController" );

		return ClassPointer;
	};

public:
};

UClass* ACCEditorController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif