/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCTFGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.965
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EFlagState
{
	FLAG_Home = 0,
	FLAG_HeldFriendly = 1,
	FLAG_HeldEnemy = 2,
	FLAG_Down = 3,
	FLAG_MAX = 4
};

struct ACCCTFGameReplicationInfo_execFlagIsDown_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameReplicationInfo_execSetFlagDown_Parms
{
	int TeamIndex;
};

struct ACCCTFGameReplicationInfo_execFlagIsHeldEnemy_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameReplicationInfo_execSetFlagHeldEnemy_Parms
{
	int TeamIndex;
};

struct ACCCTFGameReplicationInfo_execFlagIsHeldFriendly_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameReplicationInfo_execSetFlagHeldFriendly_Parms
{
	int TeamIndex;
};

struct ACCCTFGameReplicationInfo_execFlagsAreHome_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameReplicationInfo_execFlagIsHome_Parms
{
	int TeamIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCCTFGameReplicationInfo_execSetFlagHome_Parms
{
	int TeamIndex;
};

// (0x644 - 0x650)
class ACCCTFGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	unsigned char                                      FlagState[ 2 ];                              // 0x0644 (0x0002)
	int                                                RedFlags;                                    // 0x0648 (0x0004)
	int                                                BlueFlags;                                   // 0x064C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCTFGameReplicationInfo" );

		return ClassPointer;
	};

public:
	bool FlagIsDown ( int TeamIndex )
	{
		static UFunction* pfnFlagIsDown = NULL;

		if ( !pfnFlagIsDown )
			pfnFlagIsDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.FlagIsDown" );

		ACCCTFGameReplicationInfo_execFlagIsDown_Parms FlagIsDown_Parms;
		FlagIsDown_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnFlagIsDown, &FlagIsDown_Parms, NULL );

		return FlagIsDown_Parms.ReturnValue;
	};

	void SetFlagDown ( int TeamIndex )
	{
		static UFunction* pfnSetFlagDown = NULL;

		if ( !pfnSetFlagDown )
			pfnSetFlagDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.SetFlagDown" );

		ACCCTFGameReplicationInfo_execSetFlagDown_Parms SetFlagDown_Parms;
		SetFlagDown_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSetFlagDown, &SetFlagDown_Parms, NULL );
	};

	bool FlagIsHeldEnemy ( int TeamIndex )
	{
		static UFunction* pfnFlagIsHeldEnemy = NULL;

		if ( !pfnFlagIsHeldEnemy )
			pfnFlagIsHeldEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.FlagIsHeldEnemy" );

		ACCCTFGameReplicationInfo_execFlagIsHeldEnemy_Parms FlagIsHeldEnemy_Parms;
		FlagIsHeldEnemy_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnFlagIsHeldEnemy, &FlagIsHeldEnemy_Parms, NULL );

		return FlagIsHeldEnemy_Parms.ReturnValue;
	};

	void SetFlagHeldEnemy ( int TeamIndex )
	{
		static UFunction* pfnSetFlagHeldEnemy = NULL;

		if ( !pfnSetFlagHeldEnemy )
			pfnSetFlagHeldEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.SetFlagHeldEnemy" );

		ACCCTFGameReplicationInfo_execSetFlagHeldEnemy_Parms SetFlagHeldEnemy_Parms;
		SetFlagHeldEnemy_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSetFlagHeldEnemy, &SetFlagHeldEnemy_Parms, NULL );
	};

	bool FlagIsHeldFriendly ( int TeamIndex )
	{
		static UFunction* pfnFlagIsHeldFriendly = NULL;

		if ( !pfnFlagIsHeldFriendly )
			pfnFlagIsHeldFriendly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.FlagIsHeldFriendly" );

		ACCCTFGameReplicationInfo_execFlagIsHeldFriendly_Parms FlagIsHeldFriendly_Parms;
		FlagIsHeldFriendly_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnFlagIsHeldFriendly, &FlagIsHeldFriendly_Parms, NULL );

		return FlagIsHeldFriendly_Parms.ReturnValue;
	};

	void SetFlagHeldFriendly ( int TeamIndex )
	{
		static UFunction* pfnSetFlagHeldFriendly = NULL;

		if ( !pfnSetFlagHeldFriendly )
			pfnSetFlagHeldFriendly = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.SetFlagHeldFriendly" );

		ACCCTFGameReplicationInfo_execSetFlagHeldFriendly_Parms SetFlagHeldFriendly_Parms;
		SetFlagHeldFriendly_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSetFlagHeldFriendly, &SetFlagHeldFriendly_Parms, NULL );
	};

	bool FlagsAreHome ()
	{
		static UFunction* pfnFlagsAreHome = NULL;

		if ( !pfnFlagsAreHome )
			pfnFlagsAreHome = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.FlagsAreHome" );

		ACCCTFGameReplicationInfo_execFlagsAreHome_Parms FlagsAreHome_Parms;

		this->ProcessEvent( pfnFlagsAreHome, &FlagsAreHome_Parms, NULL );

		return FlagsAreHome_Parms.ReturnValue;
	};

	bool FlagIsHome ( int TeamIndex )
	{
		static UFunction* pfnFlagIsHome = NULL;

		if ( !pfnFlagIsHome )
			pfnFlagIsHome = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.FlagIsHome" );

		ACCCTFGameReplicationInfo_execFlagIsHome_Parms FlagIsHome_Parms;
		FlagIsHome_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnFlagIsHome, &FlagIsHome_Parms, NULL );

		return FlagIsHome_Parms.ReturnValue;
	};

	void SetFlagHome ( int TeamIndex )
	{
		static UFunction* pfnSetFlagHome = NULL;

		if ( !pfnSetFlagHome )
			pfnSetFlagHome = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCTFGameReplicationInfo.SetFlagHome" );

		ACCCTFGameReplicationInfo_execSetFlagHome_Parms SetFlagHome_Parms;
		SetFlagHome_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnSetFlagHome, &SetFlagHome_Parms, NULL );
	};

};

UClass* ACCCTFGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif