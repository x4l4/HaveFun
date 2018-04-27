/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCFFAGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:42.73
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x644 - 0x650)
class ACCFFAGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	class APlayerReplicationInfo*                      PlayerLead;                                  // 0x0644 (0x0004)
	class APlayerReplicationInfo*                      PlayerSecond;                                // 0x0648 (0x0004)
	int                                                FFAScoreIncrement;                           // 0x064C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCFFAGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCFFAGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif