/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocket.h
// Date: 06/16/2011 @ 05:19:41.836
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocket_eventRePeekEnemyTimerInternal_Parms
{
};// FUNC_Event

struct ACCProj_SpiralRocket_execRePeekEnemyTimerNative_Parms
{
};// FUNC_Native

struct ACCProj_SpiralRocket_eventPeekEnemyTimerInternal_Parms
{
};// FUNC_Event

struct ACCProj_SpiralRocket_execPeekEnemyTimerNative_Parms
{
};// FUNC_Native

struct ACCProj_SpiralRocket_execGetMainHomingAI_Parms
{
	class ACCProj_SpiralRocketAI_Homing* ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocket_execEnterRocketState_Parms
{
};

struct ACCProj_SpiralRocket_execGetAllSimulationReceivers_Parms
{
	TArray< class ACCProj_SpiralRocketSimulationReceiver* > List; // CPF_OutParm
};

struct ACCProj_SpiralRocket_execDestroyed_Parms
{
};

struct ACCProj_SpiralRocket_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCProj_SpiralRocket_execClientSetUniqID_Parms
{
	int SimulationReceiverUniqID;
};

struct ACCProj_SpiralRocket_execSetUniqID_Parms
{
	int ClientRulerUniqID;
	int SimulationSenderUniqID;
};

struct ACCProj_SpiralRocket_execInitByWeapon_Parms
{
	class ACCWeapon* Wpn;
};

struct ACCProj_SpiralRocket_execPostBeginPlay_Parms
{
};

// (0x3D0 - 0x3E4)
class ACCProj_SpiralRocket : public ACCProj_SpiralRocketBase
{
public:
	class ACCProj_SpiralRocketSimulationSender*        SimulationSender;                            // 0x03D0 (0x0004)
	class ACCProj_SpiralRocketSimulationReceiver*      SimulationReceiver;                          // 0x03D4 (0x0004)
	int                                                NetworkSimulationID;                         // 0x03D8 (0x0004)
	class ACCProj_SpiralRocketSimulationReceiver*      FromClientRuler;                             // 0x03DC (0x0004)
	class ACCProj_SpiralRocketAI_Homing*               HomingAI;                                    // 0x03E0 (0x0004)

	// ClientSimulation
	// HomingAIRuled
	// RuledByClient

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocket" );

		return ClassPointer;
	};

public:
	void eventRePeekEnemyTimerInternal ()
	{
		static UFunction* pfnRePeekEnemyTimerInternal = NULL;

		if ( !pfnRePeekEnemyTimerInternal )
			pfnRePeekEnemyTimerInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.RePeekEnemyTimerInternal" );

		ACCProj_SpiralRocket_eventRePeekEnemyTimerInternal_Parms RePeekEnemyTimerInternal_Parms;

		this->ProcessEvent( pfnRePeekEnemyTimerInternal, &RePeekEnemyTimerInternal_Parms, NULL );
	};

	void RePeekEnemyTimerNative ()
	{
		static UFunction* pfnRePeekEnemyTimerNative = NULL;

		if ( !pfnRePeekEnemyTimerNative )
			pfnRePeekEnemyTimerNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.RePeekEnemyTimerNative" );

		ACCProj_SpiralRocket_execRePeekEnemyTimerNative_Parms RePeekEnemyTimerNative_Parms;

		pfnRePeekEnemyTimerNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRePeekEnemyTimerNative, &RePeekEnemyTimerNative_Parms, NULL );
		pfnRePeekEnemyTimerNative->FunctionFlags |= 0x400;
	};

	void eventPeekEnemyTimerInternal ()
	{
		static UFunction* pfnPeekEnemyTimerInternal = NULL;

		if ( !pfnPeekEnemyTimerInternal )
			pfnPeekEnemyTimerInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.PeekEnemyTimerInternal" );

		ACCProj_SpiralRocket_eventPeekEnemyTimerInternal_Parms PeekEnemyTimerInternal_Parms;

		this->ProcessEvent( pfnPeekEnemyTimerInternal, &PeekEnemyTimerInternal_Parms, NULL );
	};

	void PeekEnemyTimerNative ()
	{
		static UFunction* pfnPeekEnemyTimerNative = NULL;

		if ( !pfnPeekEnemyTimerNative )
			pfnPeekEnemyTimerNative = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.PeekEnemyTimerNative" );

		ACCProj_SpiralRocket_execPeekEnemyTimerNative_Parms PeekEnemyTimerNative_Parms;

		pfnPeekEnemyTimerNative->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPeekEnemyTimerNative, &PeekEnemyTimerNative_Parms, NULL );
		pfnPeekEnemyTimerNative->FunctionFlags |= 0x400;
	};

	class ACCProj_SpiralRocketAI_Homing* GetMainHomingAI ()
	{
		static UFunction* pfnGetMainHomingAI = NULL;

		if ( !pfnGetMainHomingAI )
			pfnGetMainHomingAI = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.GetMainHomingAI" );

		ACCProj_SpiralRocket_execGetMainHomingAI_Parms GetMainHomingAI_Parms;

		this->ProcessEvent( pfnGetMainHomingAI, &GetMainHomingAI_Parms, NULL );

		return GetMainHomingAI_Parms.ReturnValue;
	};

	void EnterRocketState ()
	{
		static UFunction* pfnEnterRocketState = NULL;

		if ( !pfnEnterRocketState )
			pfnEnterRocketState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.EnterRocketState" );

		ACCProj_SpiralRocket_execEnterRocketState_Parms EnterRocketState_Parms;

		this->ProcessEvent( pfnEnterRocketState, &EnterRocketState_Parms, NULL );
	};

	void GetAllSimulationReceivers ( TArray< class ACCProj_SpiralRocketSimulationReceiver* >* List )
	{
		static UFunction* pfnGetAllSimulationReceivers = NULL;

		if ( !pfnGetAllSimulationReceivers )
			pfnGetAllSimulationReceivers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.GetAllSimulationReceivers" );

		ACCProj_SpiralRocket_execGetAllSimulationReceivers_Parms GetAllSimulationReceivers_Parms;

		this->ProcessEvent( pfnGetAllSimulationReceivers, &GetAllSimulationReceivers_Parms, NULL );

		if ( List )
			*List = GetAllSimulationReceivers_Parms.List; // CPF_OutParm
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.Destroyed" );

		ACCProj_SpiralRocket_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.ReplicatedEvent" );

		ACCProj_SpiralRocket_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void ClientSetUniqID ( int SimulationReceiverUniqID )
	{
		static UFunction* pfnClientSetUniqID = NULL;

		if ( !pfnClientSetUniqID )
			pfnClientSetUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.ClientSetUniqID" );

		ACCProj_SpiralRocket_execClientSetUniqID_Parms ClientSetUniqID_Parms;
		ClientSetUniqID_Parms.SimulationReceiverUniqID = SimulationReceiverUniqID;

		this->ProcessEvent( pfnClientSetUniqID, &ClientSetUniqID_Parms, NULL );
	};

	void SetUniqID ( int ClientRulerUniqID, int SimulationSenderUniqID )
	{
		static UFunction* pfnSetUniqID = NULL;

		if ( !pfnSetUniqID )
			pfnSetUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.SetUniqID" );

		ACCProj_SpiralRocket_execSetUniqID_Parms SetUniqID_Parms;
		SetUniqID_Parms.ClientRulerUniqID = ClientRulerUniqID;
		SetUniqID_Parms.SimulationSenderUniqID = SimulationSenderUniqID;

		this->ProcessEvent( pfnSetUniqID, &SetUniqID_Parms, NULL );
	};

	void InitByWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnInitByWeapon = NULL;

		if ( !pfnInitByWeapon )
			pfnInitByWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.InitByWeapon" );

		ACCProj_SpiralRocket_execInitByWeapon_Parms InitByWeapon_Parms;
		InitByWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnInitByWeapon, &InitByWeapon_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket.PostBeginPlay" );

		ACCProj_SpiralRocket_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocket::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif