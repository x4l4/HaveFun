/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AGamePlayerController.h
// Date: 06/16/2011 @ 05:19:41.908
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x5B4 - 0x5B4)
class AGamePlayerController : public APlayerController
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class GameFramework.GamePlayerController" );

		return ClassPointer;
	};

public:
};

UClass* AGamePlayerController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif