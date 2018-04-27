/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCFFAPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:42.74
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCFFAPlayerReplicationInfo_execResetFFAKill_Parms
{
};

struct ACCFFAPlayerReplicationInfo_execGetPlayerStat_Parms
{
	unsigned char PST;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCFFAPlayerReplicationInfo_execReset_Parms
{
};

struct ACCFFAPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

// (0x4A0 - 0x4B0)
class ACCFFAPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                FFAKill[ 4 ];                                // 0x04A0 (0x0010)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCFFAPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void ResetFFAKill ()
	{
		static UFunction* pfnResetFFAKill = NULL;

		if ( !pfnResetFFAKill )
			pfnResetFFAKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAPlayerReplicationInfo.ResetFFAKill" );

		ACCFFAPlayerReplicationInfo_execResetFFAKill_Parms ResetFFAKill_Parms;

		this->ProcessEvent( pfnResetFFAKill, &ResetFFAKill_Parms, NULL );
	};

	int GetPlayerStat ( unsigned char PST )
	{
		static UFunction* pfnGetPlayerStat = NULL;

		if ( !pfnGetPlayerStat )
			pfnGetPlayerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAPlayerReplicationInfo.GetPlayerStat" );

		ACCFFAPlayerReplicationInfo_execGetPlayerStat_Parms GetPlayerStat_Parms;
		GetPlayerStat_Parms.PST = PST;

		this->ProcessEvent( pfnGetPlayerStat, &GetPlayerStat_Parms, NULL );

		return GetPlayerStat_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAPlayerReplicationInfo.Reset" );

		ACCFFAPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFFAPlayerReplicationInfo.CopyProperties" );

		ACCFFAPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

};

UClass* ACCFFAPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif