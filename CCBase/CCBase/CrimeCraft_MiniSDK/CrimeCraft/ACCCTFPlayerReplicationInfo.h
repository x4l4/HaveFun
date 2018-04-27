/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTFPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.299
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTFPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

// (0x4A0 - 0x4A4)
class ACCCTFPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                FlagsScored;                                 // 0x04A0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTFPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFPlayerReplicationInfo.CopyProperties" );

		ACCCTFPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

};

UClass* ACCCTFPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif