/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTTGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.385
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_NUM_ZONES                        32

struct ACCCTTGameReplicationInfo_execReset_Parms
{
};

// (0x644 - 0x760)
class ACCCTTGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                NumZones;                                    // 0x0644 (0x0004)
	int                                                numRounds;                                   // 0x0648 (0x0004)
	int                                                CurRound;                                    // 0x064C (0x0004)
	int                                                RedsScore;                                   // 0x0650 (0x0004)
	int                                                BluesScore;                                  // 0x0654 (0x0004)
	int                                                RedsTotalScore;                              // 0x0658 (0x0004)
	int                                                BluesTotalScore;                             // 0x065C (0x0004)
	int                                                NumRedsInZone[ 32 ];                         // 0x0660 (0x0080)
	int                                                NumBluesInZone[ 32 ];                        // 0x06E0 (0x0080)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTTGameReplicationInfo" );

		return ClassPointer;
	};

public:
	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTGameReplicationInfo.Reset" );

		ACCCTTGameReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

};

UClass* ACCCTTGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif