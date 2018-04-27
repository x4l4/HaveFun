/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTeamInfo.h
// Date: 06/16/2011 @ 05:19:41.898
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTeamInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCTeamInfo_execSetBotOrders_Parms
{
	void* NewBot;
	void* rosterEntry;
};

struct ACCTeamInfo_execAddToTeam_Parms
{
	class AController* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCTeamInfo_execNativeAddToTeam_Parms
{
	class AController* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x1D8 - 0x1E0)
class ACCTeamInfo : public ATeamInfo
{
public:
	void*                                              AI;                                          // 0x01D8 (0x0004)
	class ACCGameObjective*                            HomeBase;                                    // 0x01DC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTeamInfo" );

		return ClassPointer;
	};

public:
	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInfo.Destroyed" );

		ACCTeamInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void SetBotOrders ( void* NewBot, void* rosterEntry/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetBotOrders = NULL;

		if ( !pfnSetBotOrders )
			pfnSetBotOrders = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInfo.SetBotOrders" );

		ACCTeamInfo_execSetBotOrders_Parms SetBotOrders_Parms;
		SetBotOrders_Parms.NewBot = NewBot;
		SetBotOrders_Parms.rosterEntry = rosterEntry;

		this->ProcessEvent( pfnSetBotOrders, &SetBotOrders_Parms, NULL );
	};

	bool AddToTeam ( class AController* Other )
	{
		static UFunction* pfnAddToTeam = NULL;

		if ( !pfnAddToTeam )
			pfnAddToTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInfo.AddToTeam" );

		ACCTeamInfo_execAddToTeam_Parms AddToTeam_Parms;
		AddToTeam_Parms.Other = Other;

		this->ProcessEvent( pfnAddToTeam, &AddToTeam_Parms, NULL );

		return AddToTeam_Parms.ReturnValue;
	};

	bool NativeAddToTeam ( class AController* Other )
	{
		static UFunction* pfnNativeAddToTeam = NULL;

		if ( !pfnNativeAddToTeam )
			pfnNativeAddToTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTeamInfo.NativeAddToTeam" );

		ACCTeamInfo_execNativeAddToTeam_Parms NativeAddToTeam_Parms;
		NativeAddToTeam_Parms.Other = Other;

		pfnNativeAddToTeam->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNativeAddToTeam, &NativeAddToTeam_Parms, NULL );
		pfnNativeAddToTeam->FunctionFlags |= 0x400;

		return NativeAddToTeam_Parms.ReturnValue;
	};

};

UClass* ACCTeamInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif