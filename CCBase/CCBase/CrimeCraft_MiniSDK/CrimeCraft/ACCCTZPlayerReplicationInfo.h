/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTZPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:42.70
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x4A0 - 0x4A8)
class ACCCTZPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                PointBeingCaptured;                          // 0x04A0 (0x0004)
	int                                                TimeDefending;                               // 0x04A4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTZPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCCTZPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif