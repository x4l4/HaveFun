/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPTBGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.851
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPTBGameReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x644 - 0x680)
class ACCPTBGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                MineTeam;                                    // 0x0644 (0x0004)
	int                                                RedMined;                                    // 0x0648 (0x0004)
	int                                                RedDemined;                                  // 0x064C (0x0004)
	int                                                BlueMined;                                   // 0x0650 (0x0004)
	int                                                BlueDemined;                                 // 0x0654 (0x0004)
	int                                                RedRoundScored;                              // 0x0658 (0x0004)
	int                                                BlueRoundScored;                             // 0x065C (0x0004)
	int                                                CurrRound;                                   // 0x0660 (0x0004)
	int                                                numRounds;                                   // 0x0664 (0x0004)
	float                                              MineStart;                                   // 0x0668 (0x0004)
	float                                              BlastStart;                                  // 0x066C (0x0004)
	unsigned long                                      bMined : 1;                                  // 0x0670 (0x0004) [0x00000001]
	float                                              MineTime;                                    // 0x0674 (0x0004)
	float                                              DemineTime;                                  // 0x0678 (0x0004)
	float                                              BlastTime;                                   // 0x067C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPTBGameReplicationInfo" );

		return ClassPointer;
	};

public:
	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBGameReplicationInfo.ReplicatedEvent" );

		ACCPTBGameReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ACCPTBGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif