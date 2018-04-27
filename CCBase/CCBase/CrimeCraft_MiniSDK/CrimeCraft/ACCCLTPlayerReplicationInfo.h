/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCLTPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.13
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCLTPlayerReplicationInfo_execReset_Parms
{
};

struct ACCCLTPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

// (0x4A0 - 0x4B0)
class ACCCLTPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	unsigned long                                      CapturingPoint : 1;                          // 0x04A0 (0x0004) [0x00000001]
	int                                                CaptureScore;                                // 0x04A4 (0x0004)
	int                                                DefendKillScore;                             // 0x04A8 (0x0004)
	int                                                CaptureKillScore;                            // 0x04AC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCLTPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPlayerReplicationInfo.Reset" );

		ACCCLTPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPlayerReplicationInfo.CopyProperties" );

		ACCCLTPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

};

UClass* ACCCLTPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif