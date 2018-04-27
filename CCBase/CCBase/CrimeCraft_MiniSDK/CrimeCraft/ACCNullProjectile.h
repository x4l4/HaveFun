/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCNullProjectile.h
// Date: 06/16/2011 @ 05:19:42.106
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x358 - 0x358)
class ACCNullProjectile : public ACCProjectile
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCNullProjectile" );

		return ClassPointer;
	};

public:
};

UClass* ACCNullProjectile::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif