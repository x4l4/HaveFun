/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTPPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.333
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ECTP_PlayerState
{
	ECTP_StateNone = 0,
	ECTP_StateCapturing = 1,
	ECTP_StateDefending = 2,
	ECTP_MAX = 3
};

struct ACCCTPPlayerReplicationInfo_execGetPlayerStat_Parms
{
	unsigned char PST;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCCTPPlayerReplicationInfo_execReset_Parms
{
};

struct ACCCTPPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCCTPPlayerReplicationInfo_execUpdateHUD_Parms
{
};

struct ACCCTPPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x4A0 - 0x4B4)
class ACCCTPPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	unsigned char                                      CTPPlayerState;                              // 0x04A0 (0x0001)
	int                                                Capture;                                     // 0x04A4 (0x0004)
	int                                                DefendKill;                                  // 0x04A8 (0x0004)
	int                                                CaptureKill;                                 // 0x04AC (0x0004)
	class ACCCapturePoint*                             CurrPoint;                                   // 0x04B0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTPPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	int GetPlayerStat ( unsigned char PST )
	{
		static UFunction* pfnGetPlayerStat = NULL;

		if ( !pfnGetPlayerStat )
			pfnGetPlayerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPPlayerReplicationInfo.GetPlayerStat" );

		ACCCTPPlayerReplicationInfo_execGetPlayerStat_Parms GetPlayerStat_Parms;
		GetPlayerStat_Parms.PST = PST;

		this->ProcessEvent( pfnGetPlayerStat, &GetPlayerStat_Parms, NULL );

		return GetPlayerStat_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPPlayerReplicationInfo.Reset" );

		ACCCTPPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPPlayerReplicationInfo.CopyProperties" );

		ACCCTPPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

	void UpdateHUD ()
	{
		static UFunction* pfnUpdateHUD = NULL;

		if ( !pfnUpdateHUD )
			pfnUpdateHUD = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPPlayerReplicationInfo.UpdateHUD" );

		ACCCTPPlayerReplicationInfo_execUpdateHUD_Parms UpdateHUD_Parms;

		this->ProcessEvent( pfnUpdateHUD, &UpdateHUD_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTPPlayerReplicationInfo.ReplicatedEvent" );

		ACCCTPPlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ACCCTPPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif