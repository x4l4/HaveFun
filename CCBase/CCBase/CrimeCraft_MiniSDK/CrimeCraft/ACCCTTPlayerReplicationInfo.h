/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTTPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:42.70
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCCTTPlayerReplicationInfo_execReset_Parms
{
};

// (0x4A0 - 0x4A8)
class ACCCTTPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                PointBeingCaptured;                          // 0x04A0 (0x0004)
	float                                              ScoreTickTimeLeft;                           // 0x04A4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTTPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTTPlayerReplicationInfo.Reset" );

		ACCCTTPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

};

UClass* ACCCTTPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif