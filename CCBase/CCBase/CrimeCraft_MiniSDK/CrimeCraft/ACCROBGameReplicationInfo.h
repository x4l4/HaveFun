/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCROBGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.892
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x644 - 0x660)
class ACCROBGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                RedScore;                                    // 0x0644 (0x0004)
	int                                                BlueScore;                                   // 0x0648 (0x0004)
	int                                                NeutralScore;                                // 0x064C (0x0004)
	int                                                FullScore;                                   // 0x0650 (0x0004)
	int                                                RobberySpeed;                                // 0x0654 (0x0004)
	int                                                DepositSpeed;                                // 0x0658 (0x0004)
	int                                                MaxCarry;                                    // 0x065C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCROBGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCROBGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif