/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_VacuumBomb.h
// Date: 06/16/2011 @ 05:19:42.125
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x44C - 0x44C)
class ACCProj_VacuumBomb : public ACCProj_Grenade
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_VacuumBomb" );

		return ClassPointer;
	};

public:
};

UClass* ACCProj_VacuumBomb::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif