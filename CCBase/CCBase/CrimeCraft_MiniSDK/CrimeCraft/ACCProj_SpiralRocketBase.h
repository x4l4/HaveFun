/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketBase.h
// Date: 06/16/2011 @ 05:19:41.834
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketBase_execIsSameTeamWith_Parms
{
	class AActor* A;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketBase_eventGetShouldTracePawn_Parms
{
	class ACCInstancePawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCProj_SpiralRocketBase_execGetMainHomingAI_Parms
{
	class ACCProj_SpiralRocketAI_Homing* ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketBase_execGetAllSimulationReceivers_Parms
{
	TArray< class ACCProj_SpiralRocketSimulationReceiver* > List; // CPF_OutParm
};

struct ACCProj_SpiralRocketBase_execResolveSimulationReceiver_Parms
{
	int UniqID;
	class ACCProj_SpiralRocketSimulationReceiver* ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketBase_execEnterRocketState_Parms
{
};

struct ACCProj_SpiralRocketBase_execOnUserMyVelocityPhysicsStarted_Parms
{
};

struct ACCProj_SpiralRocketBase_execInitByWeapon_Parms
{
	class ACCWeapon* Wpn;
};

struct ACCProj_SpiralRocketBase_execPostBeginPlay_Parms
{
};

// (0x3C0 - 0x3D0)
class ACCProj_SpiralRocketBase : public ACCProj_Rocket
{
public:
	TArray< class ACCProj_SpiralRocket* >              MyFriends;                                   // 0x03C0 (0x000C)
	unsigned long                                      bTraceIgnoreOtherTeamPawns : 1;              // 0x03CC (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketBase" );

		return ClassPointer;
	};

public:
	bool IsSameTeamWith ( class AActor* A )
	{
		static UFunction* pfnIsSameTeamWith = NULL;

		if ( !pfnIsSameTeamWith )
			pfnIsSameTeamWith = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.IsSameTeamWith" );

		ACCProj_SpiralRocketBase_execIsSameTeamWith_Parms IsSameTeamWith_Parms;
		IsSameTeamWith_Parms.A = A;

		this->ProcessEvent( pfnIsSameTeamWith, &IsSameTeamWith_Parms, NULL );

		return IsSameTeamWith_Parms.ReturnValue;
	};

	bool eventGetShouldTracePawn ( class ACCInstancePawn* P )
	{
		static UFunction* pfnGetShouldTracePawn = NULL;

		if ( !pfnGetShouldTracePawn )
			pfnGetShouldTracePawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.GetShouldTracePawn" );

		ACCProj_SpiralRocketBase_eventGetShouldTracePawn_Parms GetShouldTracePawn_Parms;
		GetShouldTracePawn_Parms.P = P;

		this->ProcessEvent( pfnGetShouldTracePawn, &GetShouldTracePawn_Parms, NULL );

		return GetShouldTracePawn_Parms.ReturnValue;
	};

	class ACCProj_SpiralRocketAI_Homing* GetMainHomingAI ()
	{
		static UFunction* pfnGetMainHomingAI = NULL;

		if ( !pfnGetMainHomingAI )
			pfnGetMainHomingAI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.GetMainHomingAI" );

		ACCProj_SpiralRocketBase_execGetMainHomingAI_Parms GetMainHomingAI_Parms;

		this->ProcessEvent( pfnGetMainHomingAI, &GetMainHomingAI_Parms, NULL );

		return GetMainHomingAI_Parms.ReturnValue;
	};

	void GetAllSimulationReceivers ( TArray< class ACCProj_SpiralRocketSimulationReceiver* >* List )
	{
		static UFunction* pfnGetAllSimulationReceivers = NULL;

		if ( !pfnGetAllSimulationReceivers )
			pfnGetAllSimulationReceivers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.GetAllSimulationReceivers" );

		ACCProj_SpiralRocketBase_execGetAllSimulationReceivers_Parms GetAllSimulationReceivers_Parms;

		this->ProcessEvent( pfnGetAllSimulationReceivers, &GetAllSimulationReceivers_Parms, NULL );

		if ( List )
			*List = GetAllSimulationReceivers_Parms.List; // CPF_OutParm
	};

	class ACCProj_SpiralRocketSimulationReceiver* ResolveSimulationReceiver ( int UniqID )
	{
		static UFunction* pfnResolveSimulationReceiver = NULL;

		if ( !pfnResolveSimulationReceiver )
			pfnResolveSimulationReceiver = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.ResolveSimulationReceiver" );

		ACCProj_SpiralRocketBase_execResolveSimulationReceiver_Parms ResolveSimulationReceiver_Parms;
		ResolveSimulationReceiver_Parms.UniqID = UniqID;

		this->ProcessEvent( pfnResolveSimulationReceiver, &ResolveSimulationReceiver_Parms, NULL );

		return ResolveSimulationReceiver_Parms.ReturnValue;
	};

	void EnterRocketState ()
	{
		static UFunction* pfnEnterRocketState = NULL;

		if ( !pfnEnterRocketState )
			pfnEnterRocketState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.EnterRocketState" );

		ACCProj_SpiralRocketBase_execEnterRocketState_Parms EnterRocketState_Parms;

		this->ProcessEvent( pfnEnterRocketState, &EnterRocketState_Parms, NULL );
	};

	void OnUserMyVelocityPhysicsStarted ()
	{
		static UFunction* pfnOnUserMyVelocityPhysicsStarted = NULL;

		if ( !pfnOnUserMyVelocityPhysicsStarted )
			pfnOnUserMyVelocityPhysicsStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.OnUserMyVelocityPhysicsStarted" );

		ACCProj_SpiralRocketBase_execOnUserMyVelocityPhysicsStarted_Parms OnUserMyVelocityPhysicsStarted_Parms;

		this->ProcessEvent( pfnOnUserMyVelocityPhysicsStarted, &OnUserMyVelocityPhysicsStarted_Parms, NULL );
	};

	void InitByWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnInitByWeapon = NULL;

		if ( !pfnInitByWeapon )
			pfnInitByWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.InitByWeapon" );

		ACCProj_SpiralRocketBase_execInitByWeapon_Parms InitByWeapon_Parms;
		InitByWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnInitByWeapon, &InitByWeapon_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketBase.PostBeginPlay" );

		ACCProj_SpiralRocketBase_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif