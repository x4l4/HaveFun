/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCROBPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.892
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EROBPlayerState
{
	ROB_None = 0,
	ROB_Robbering = 1,
	ROB_Depositing = 2,
	ROB_MAX = 3
};

struct ACCROBPlayerReplicationInfo_execGetPlayerStat_Parms
{
	unsigned char PST;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCROBPlayerReplicationInfo_execReset_Parms
{
};

struct ACCROBPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCROBPlayerReplicationInfo_execUpdateRobStatus_Parms
{
	int NewCarryScore;
};

struct ACCROBPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x4A0 - 0x4B8)
class ACCROBPlayerReplicationInfo : public ACCPlayerReplicationInfo
{
public:
	int                                                RobberyScore;                                // 0x04A0 (0x0004)
	int                                                DepositScore;                                // 0x04A4 (0x0004)
	int                                                ReturnedScore;                               // 0x04A8 (0x0004)
	int                                                CarryScore;                                  // 0x04AC (0x0004)
	unsigned char                                      PlayerState;                                 // 0x04B0 (0x0001)
	float                                              BufferScore;                                 // 0x04B4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCROBPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	int GetPlayerStat ( unsigned char PST )
	{
		static UFunction* pfnGetPlayerStat = NULL;

		if ( !pfnGetPlayerStat )
			pfnGetPlayerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBPlayerReplicationInfo.GetPlayerStat" );

		ACCROBPlayerReplicationInfo_execGetPlayerStat_Parms GetPlayerStat_Parms;
		GetPlayerStat_Parms.PST = PST;

		this->ProcessEvent( pfnGetPlayerStat, &GetPlayerStat_Parms, NULL );

		return GetPlayerStat_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBPlayerReplicationInfo.Reset" );

		ACCROBPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBPlayerReplicationInfo.CopyProperties" );

		ACCROBPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

	void UpdateRobStatus ( int NewCarryScore )
	{
		static UFunction* pfnUpdateRobStatus = NULL;

		if ( !pfnUpdateRobStatus )
			pfnUpdateRobStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBPlayerReplicationInfo.UpdateRobStatus" );

		ACCROBPlayerReplicationInfo_execUpdateRobStatus_Parms UpdateRobStatus_Parms;
		UpdateRobStatus_Parms.NewCarryScore = NewCarryScore;

		this->ProcessEvent( pfnUpdateRobStatus, &UpdateRobStatus_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCROBPlayerReplicationInfo.ReplicatedEvent" );

		ACCROBPlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ACCROBPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif