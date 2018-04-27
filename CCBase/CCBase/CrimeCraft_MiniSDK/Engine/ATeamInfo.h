/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ATeamInfo.h
// Date: 06/16/2011 @ 05:19:39.799
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ATeamInfo_execGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ATeamInfo_execGetTextColor_Parms
{
	struct FColor ReturnValue; // CPF_ReturnParm
};

struct ATeamInfo_execGetHUDColor_Parms
{
	struct FColor ReturnValue; // CPF_ReturnParm
};

struct ATeamInfo_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ATeamInfo_execRemoveFromTeam_Parms
{
	class AController* Other;
};

struct ATeamInfo_execAddToTeam_Parms
{
	class AController* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ATeamInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct ATeamInfo_execUnbindTeamDataProvider_Parms
{
};

struct ATeamInfo_execGetCurrentGameDS_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ATeamInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x1BC - 0x1D8)
class ATeamInfo : public AReplicationInfo
{
public:
	struct FString                                     TeamName;                                    // 0x01BC (0x000C)
	int                                                Size;                                        // 0x01C8 (0x0004)
	float                                              Score;                                       // 0x01CC (0x0004)
	int                                                TeamIndex;                                   // 0x01D0 (0x0004)
	struct FColor                                      TeamColor;                                   // 0x01D4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.TeamInfo" );

		return ClassPointer;
	};

public:
	unsigned char GetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.GetTeamNum" );

		ATeamInfo_execGetTeamNum_Parms GetTeamNum_Parms;

		pfnGetTeamNum->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );
		pfnGetTeamNum->FunctionFlags |= 0x400;

		return GetTeamNum_Parms.ReturnValue;
	};

	struct FColor GetTextColor ()
	{
		static UFunction* pfnGetTextColor = NULL;

		if ( !pfnGetTextColor )
			pfnGetTextColor = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.GetTextColor" );

		ATeamInfo_execGetTextColor_Parms GetTextColor_Parms;

		this->ProcessEvent( pfnGetTextColor, &GetTextColor_Parms, NULL );

		return GetTextColor_Parms.ReturnValue;
	};

	struct FColor GetHUDColor ()
	{
		static UFunction* pfnGetHUDColor = NULL;

		if ( !pfnGetHUDColor )
			pfnGetHUDColor = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.GetHUDColor" );

		ATeamInfo_execGetHUDColor_Parms GetHUDColor_Parms;

		this->ProcessEvent( pfnGetHUDColor, &GetHUDColor_Parms, NULL );

		return GetHUDColor_Parms.ReturnValue;
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.GetHumanReadableName" );

		ATeamInfo_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	void RemoveFromTeam ( class AController* Other )
	{
		static UFunction* pfnRemoveFromTeam = NULL;

		if ( !pfnRemoveFromTeam )
			pfnRemoveFromTeam = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.RemoveFromTeam" );

		ATeamInfo_execRemoveFromTeam_Parms RemoveFromTeam_Parms;
		RemoveFromTeam_Parms.Other = Other;

		this->ProcessEvent( pfnRemoveFromTeam, &RemoveFromTeam_Parms, NULL );
	};

	bool AddToTeam ( class AController* Other )
	{
		static UFunction* pfnAddToTeam = NULL;

		if ( !pfnAddToTeam )
			pfnAddToTeam = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.AddToTeam" );

		ATeamInfo_execAddToTeam_Parms AddToTeam_Parms;
		AddToTeam_Parms.Other = Other;

		this->ProcessEvent( pfnAddToTeam, &AddToTeam_Parms, NULL );

		return AddToTeam_Parms.ReturnValue;
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.Destroyed" );

		ATeamInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void UnbindTeamDataProvider ()
	{
		static UFunction* pfnUnbindTeamDataProvider = NULL;

		if ( !pfnUnbindTeamDataProvider )
			pfnUnbindTeamDataProvider = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.UnbindTeamDataProvider" );

		ATeamInfo_execUnbindTeamDataProvider_Parms UnbindTeamDataProvider_Parms;

		this->ProcessEvent( pfnUnbindTeamDataProvider, &UnbindTeamDataProvider_Parms, NULL );
	};

	void* GetCurrentGameDS ()
	{
		static UFunction* pfnGetCurrentGameDS = NULL;

		if ( !pfnGetCurrentGameDS )
			pfnGetCurrentGameDS = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.GetCurrentGameDS" );

		ATeamInfo_execGetCurrentGameDS_Parms GetCurrentGameDS_Parms;

		this->ProcessEvent( pfnGetCurrentGameDS, &GetCurrentGameDS_Parms, NULL );

		return GetCurrentGameDS_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.TeamInfo.ReplicatedEvent" );

		ATeamInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ATeamInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif