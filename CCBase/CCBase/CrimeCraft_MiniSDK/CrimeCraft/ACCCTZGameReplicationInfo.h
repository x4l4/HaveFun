/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTZGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.390
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_NUM_ZONES                        32

// (0x644 - 0x7E8)
class ACCCTZGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                RedsScore;                                   // 0x0644 (0x0004)
	int                                                BluesScore;                                  // 0x0648 (0x0004)
	float                                              RedsScoreIncrement;                          // 0x064C (0x0004)
	float                                              BluesScoreIncrement;                         // 0x0650 (0x0004)
	int                                                NumZones;                                    // 0x0654 (0x0004)
	int                                                NumRedsInZone[ 32 ];                         // 0x0658 (0x0080)
	int                                                NumBluesInZone[ 32 ];                        // 0x06D8 (0x0080)
	float                                              ZoneState[ 32 ];                             // 0x0758 (0x0080)
	int                                                numRounds;                                   // 0x07D8 (0x0004)
	int                                                CurRound;                                    // 0x07DC (0x0004)
	int                                                RedsTotalScore;                              // 0x07E0 (0x0004)
	int                                                BluesTotalScore;                             // 0x07E4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTZGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCCTZGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif