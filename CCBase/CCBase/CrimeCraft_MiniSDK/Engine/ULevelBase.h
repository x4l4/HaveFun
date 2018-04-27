/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ULevelBase.h
// Date: 06/16/2011 @ 05:19:39.450
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x3C - 0x90)
class ULevelBase : public UObject
{
public:
	TArray< AActor* >                                  Actors;
	unsigned char                                      unknown_data09[ 72 ];

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.LevelBase" );

		return ClassPointer;
	};

public:
};

UClass* ULevelBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif