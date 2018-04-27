/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AGameProjectile.h
// Date: 06/16/2011 @ 05:19:40.45
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x1F8 - 0x1F8)
class AGameProjectile : public AProjectile
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class GameFramework.GameProjectile" );

		return ClassPointer;
	};

public:
};

UClass* AGameProjectile::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif