/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPTBPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.857
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EPTBPlayerState
{
	PTB_None = 0,
	PTB_Mine = 1,
	PTB_Demine = 2,
	PTB_MAX = 3
};

struct ACCPTBPlayerReplicationInfo_execReset_Parms
{
};

struct ACCPTBPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

// (0x4A0 - 0x4B0)
class ACCPTBPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                MineScore;                                   // 0x04A0 (0x0004)
	int                                                DemineScore;                                 // 0x04A4 (0x0004)
	unsigned char                                      PlayerState;                                 // 0x04A8 (0x0001)
	unsigned long                                      bCanMine : 1;                                // 0x04AC (0x0004) [0x00000001]
	unsigned long                                      bCanDemine : 1;                              // 0x04AC (0x0004) [0x00000002]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPTBPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBPlayerReplicationInfo.Reset" );

		ACCPTBPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBPlayerReplicationInfo.CopyProperties" );

		ACCPTBPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

};

UClass* ACCPTBPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif