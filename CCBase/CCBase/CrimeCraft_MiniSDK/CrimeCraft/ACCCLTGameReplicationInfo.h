/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCLTGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:42.73
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x644 - 0x650)
class ACCCLTGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                PointsCapturedRed;                           // 0x0644 (0x0004)
	int                                                PointsCapturedBlue;                          // 0x0648 (0x0004)
	class ACCCLTPoint*                                 CurrPoint;                                   // 0x064C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCLTGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCCLTGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif