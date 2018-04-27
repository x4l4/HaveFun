/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCLobbyNPCPawn.h
// Date: 06/16/2011 @ 05:19:41.798
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ENPCCondition
{
	ENPCC_Stay = 0,
	ENPCC_Walking = 1,
	ENPCC_MAX = 2
};

struct ACCLobbyNPCPawn_execUpdateCollisionMode_Parms
{
	unsigned long bEffectMode : 1;
};

struct ACCLobbyNPCPawn_execTick_Parms
{
	float DeltaTime;
};

struct ACCLobbyNPCPawn_eventPlayFootStepSound_Parms
{
	int FootStep;
};// FUNC_Event

struct ACCLobbyNPCPawn_execUpdateAimOffsetData_Parms
{
	float DeltaTime;
};

struct ACCLobbyNPCPawn_eventOnAnimEnd_Parms
{
	void* SeqNode;
	float PlayedTime;
	float ExcessTime;
};// FUNC_Event FUNC_Native

struct ACCLobbyNPCPawn_eventStartNewStayAdditionalAmination_Parms
{
};// FUNC_Event FUNC_Native

// (0x7C0 - 0x804)
class ACCLobbyNPCPawn : public ACCLobbyPawn
{
public:
	unsigned char                                      Condition;                                   // 0x07C0 (0x0001)
	int                                                CurrPathID;                                  // 0x07C4 (0x0004)
	int                                                CurrLinkID;                                  // 0x07C8 (0x0004)
	int                                                CurrPathIndex;                               // 0x07CC (0x0004)
	float                                              LinkRest;                                    // 0x07D0 (0x0004)
	int                                                TargetLink;                                  // 0x07D4 (0x0004)
	struct FVector                                     TargetPoint;                                 // 0x07D8 (0x000C)
	int                                                TargetYaw;                                   // 0x07E4 (0x0004)
	int                                                StayYaw;                                     // 0x07E8 (0x0004)
	int                                                CurrentIdleAnimIndex;                        // 0x07EC (0x0004)
	int                                                RndZ;                                        // 0x07F0 (0x0004)
	int                                                RndW;                                        // 0x07F4 (0x0004)
	struct FDouble                                     SetPathTime;                                 // 0x07F8 (0x0008)
	void*                                              VisLine;                                     // 0x0800 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCLobbyNPCPawn" );

		return ClassPointer;
	};

public:
	void UpdateCollisionMode ( unsigned long bEffectMode )
	{
		static UFunction* pfnUpdateCollisionMode = NULL;

		if ( !pfnUpdateCollisionMode )
			pfnUpdateCollisionMode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.UpdateCollisionMode" );

		ACCLobbyNPCPawn_execUpdateCollisionMode_Parms UpdateCollisionMode_Parms;
		UpdateCollisionMode_Parms.bEffectMode = bEffectMode;

		this->ProcessEvent( pfnUpdateCollisionMode, &UpdateCollisionMode_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.Tick" );

		ACCLobbyNPCPawn_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void eventPlayFootStepSound ( int FootStep )
	{
		static UFunction* pfnPlayFootStepSound = NULL;

		if ( !pfnPlayFootStepSound )
			pfnPlayFootStepSound = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.PlayFootStepSound" );

		ACCLobbyNPCPawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
		PlayFootStepSound_Parms.FootStep = FootStep;

		this->ProcessEvent( pfnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
	};

	void UpdateAimOffsetData ( float DeltaTime )
	{
		static UFunction* pfnUpdateAimOffsetData = NULL;

		if ( !pfnUpdateAimOffsetData )
			pfnUpdateAimOffsetData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.UpdateAimOffsetData" );

		ACCLobbyNPCPawn_execUpdateAimOffsetData_Parms UpdateAimOffsetData_Parms;
		UpdateAimOffsetData_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateAimOffsetData, &UpdateAimOffsetData_Parms, NULL );
	};

	void eventOnAnimEnd ( void* SeqNode, float PlayedTime, float ExcessTime )
	{
		static UFunction* pfnOnAnimEnd = NULL;

		if ( !pfnOnAnimEnd )
			pfnOnAnimEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.OnAnimEnd" );

		ACCLobbyNPCPawn_eventOnAnimEnd_Parms OnAnimEnd_Parms;
		OnAnimEnd_Parms.SeqNode = SeqNode;
		OnAnimEnd_Parms.PlayedTime = PlayedTime;
		OnAnimEnd_Parms.ExcessTime = ExcessTime;

		pfnOnAnimEnd->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOnAnimEnd, &OnAnimEnd_Parms, NULL );
		pfnOnAnimEnd->FunctionFlags |= 0x400;
	};

	void eventStartNewStayAdditionalAmination ()
	{
		static UFunction* pfnStartNewStayAdditionalAmination = NULL;

		if ( !pfnStartNewStayAdditionalAmination )
			pfnStartNewStayAdditionalAmination = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyNPCPawn.StartNewStayAdditionalAmination" );

		ACCLobbyNPCPawn_eventStartNewStayAdditionalAmination_Parms StartNewStayAdditionalAmination_Parms;

		pfnStartNewStayAdditionalAmination->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStartNewStayAdditionalAmination, &StartNewStayAdditionalAmination_Parms, NULL );
		pfnStartNewStayAdditionalAmination->FunctionFlags |= 0x400;
	};

};

UClass* ACCLobbyNPCPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif