/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTPGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.978
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x644 - 0x650)
class ACCCTPGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                PointsCapturedRed;                           // 0x0644 (0x0004)
	int                                                PointsCapturedBlue;                          // 0x0648 (0x0004)
	int                                                AllPoints;                                   // 0x064C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTPGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCCTPGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif