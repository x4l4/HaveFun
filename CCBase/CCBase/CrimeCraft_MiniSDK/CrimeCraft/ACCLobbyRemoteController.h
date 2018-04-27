/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCLobbyRemoteController.h
// Date: 06/16/2011 @ 05:19:41.799
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ENPCQuestTrackingState
{
	ENPCQTS_None = 0,
	ENPCQTS_Tracked = 1,
	ENPCQTS_TutorialTracked = 2,
	ENPCQTS_MAX = 3
};

enum ENPCQuestState
{
	ENPCQS_None = 0,
	ENPCQS_QuestChallenges = 1,
	ENPCQS_CanGiveNewQuest = 2,
	ENPCQS_CanTakeCompletedQuest = 3,
	ENPCQS_WaitsForCompletingQuest = 4,
	ENPCQS_MAX = 5
};

enum ENPCFunctionalitySubType
{
	ENPCFST_Weapon = 0,
	ENPCFST_Clothes = 1,
	ENPCFST_Chemical = 2,
	ENPCFST_Engeneer = 3,
	ENPCFST_MAX = 4
};

struct ACCLobbyRemoteController_execCheckCameraDistance_Parms
{
};

struct ACCLobbyRemoteController_eventGetPlayerViewPoint_Parms
{
	struct FVector POVLocation; // CPF_OutParm
	struct FRotator POVRotation; // CPF_OutParm
};// FUNC_Event

struct ACCLobbyRemoteController_eventPlayerTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCLobbyRemoteController_execGetClanName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCLobbyRemoteController_eventGetName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCLobbyRemoteController_eventNotifyMovement_Parms
{
	float Time;
	struct FCharacterPosition pos;
	float velocityX;
	float velocityY;
	float velocityZ;
};// FUNC_Event

struct ACCLobbyRemoteController_execPostBeginPlay_Parms
{
};

struct ACCLobbyRemoteController_execIsEnableFunctionality_Parms
{
	void* InOwnerTutorialInst;
	unsigned char FunctionalityType;
	unsigned char SubType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyRemoteController_execInstanceType_Parms
{
	unsigned char IType; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyRemoteController_execQuestState_Parms
{
	unsigned char QState; // CPF_OutParm
	unsigned char QTState; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyRemoteController_execBaseFunctionality_Parms
{
	int Type; // CPF_OutParm
	unsigned char SubType; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyRemoteController_execMinorFunctionality_Parms
{
	int Type; // CPF_OutParm
	unsigned char SubType; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCLobbyRemoteController_execProvidesService_Parms
{
	unsigned char stype;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x7F4 - 0x810)
class ACCLobbyRemoteController : public ACCLobbyController
{
public:
	unsigned long                                      IsNPC : 1;                                   // 0x07F4 (0x0004) [0x00000001]
	unsigned long                                      bFakeMovement : 1;                           // 0x07F4 (0x0004) [0x00000002]
	TArray< struct FFunctionalityNPC >                 Functionality;                               // 0x07F8 (0x000C)
	void*                                              RemoteMover;                                 // 0x0804 (0x0004)
	struct FLobbySensorInfo                            SensorInfo;                                  // 0x0808 (0x0008)

	// PlayerWaiting
	// PlayerWalking

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCLobbyRemoteController" );

		return ClassPointer;
	};

public:
	void CheckCameraDistance ()
	{
		static UFunction* pfnCheckCameraDistance = NULL;

		if ( !pfnCheckCameraDistance )
			pfnCheckCameraDistance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.CheckCameraDistance" );

		ACCLobbyRemoteController_execCheckCameraDistance_Parms CheckCameraDistance_Parms;

		this->ProcessEvent( pfnCheckCameraDistance, &CheckCameraDistance_Parms, NULL );
	};

	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation )
	{
		static UFunction* pfnGetPlayerViewPoint = NULL;

		if ( !pfnGetPlayerViewPoint )
			pfnGetPlayerViewPoint = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.GetPlayerViewPoint" );

		ACCLobbyRemoteController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

		this->ProcessEvent( pfnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

		if ( POVLocation )
			memcpy( POVLocation, &GetPlayerViewPoint_Parms.POVLocation, 0xC ); // CPF_OutParm
		if ( POVRotation )
			memcpy( POVRotation, &GetPlayerViewPoint_Parms.POVRotation, 0xC ); // CPF_OutParm
	};

	void eventPlayerTick ( float DeltaTime )
	{
		static UFunction* pfnPlayerTick = NULL;

		if ( !pfnPlayerTick )
			pfnPlayerTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.PlayerTick" );

		ACCLobbyRemoteController_eventPlayerTick_Parms PlayerTick_Parms;
		PlayerTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerTick, &PlayerTick_Parms, NULL );
	};

	struct FString GetClanName ()
	{
		static UFunction* pfnGetClanName = NULL;

		if ( !pfnGetClanName )
			pfnGetClanName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.GetClanName" );

		ACCLobbyRemoteController_execGetClanName_Parms GetClanName_Parms;

		this->ProcessEvent( pfnGetClanName, &GetClanName_Parms, NULL );

		return GetClanName_Parms.ReturnValue;
	};

	struct FString eventGetName ()
	{
		static UFunction* pfnGetName = NULL;

		if ( !pfnGetName )
			pfnGetName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.GetName" );

		ACCLobbyRemoteController_eventGetName_Parms GetName_Parms;

		this->ProcessEvent( pfnGetName, &GetName_Parms, NULL );

		return GetName_Parms.ReturnValue;
	};

	void eventNotifyMovement ( float Time, struct FCharacterPosition pos, float velocityX, float velocityY, float velocityZ )
	{
		static UFunction* pfnNotifyMovement = NULL;

		if ( !pfnNotifyMovement )
			pfnNotifyMovement = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.NotifyMovement" );

		ACCLobbyRemoteController_eventNotifyMovement_Parms NotifyMovement_Parms;
		NotifyMovement_Parms.Time = Time;
		memcpy( &NotifyMovement_Parms.pos, &pos, 0x10 );
		NotifyMovement_Parms.velocityX = velocityX;
		NotifyMovement_Parms.velocityY = velocityY;
		NotifyMovement_Parms.velocityZ = velocityZ;

		this->ProcessEvent( pfnNotifyMovement, &NotifyMovement_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.PostBeginPlay" );

		ACCLobbyRemoteController_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool IsEnableFunctionality ( void* InOwnerTutorialInst, unsigned char FunctionalityType, unsigned char SubType )
	{
		static UFunction* pfnIsEnableFunctionality = NULL;

		if ( !pfnIsEnableFunctionality )
			pfnIsEnableFunctionality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.IsEnableFunctionality" );

		ACCLobbyRemoteController_execIsEnableFunctionality_Parms IsEnableFunctionality_Parms;
		IsEnableFunctionality_Parms.InOwnerTutorialInst = InOwnerTutorialInst;
		IsEnableFunctionality_Parms.FunctionalityType = FunctionalityType;
		IsEnableFunctionality_Parms.SubType = SubType;

		pfnIsEnableFunctionality->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsEnableFunctionality, &IsEnableFunctionality_Parms, NULL );
		pfnIsEnableFunctionality->FunctionFlags |= 0x400;

		return IsEnableFunctionality_Parms.ReturnValue;
	};

	bool InstanceType ( unsigned char* IType )
	{
		static UFunction* pfnInstanceType = NULL;

		if ( !pfnInstanceType )
			pfnInstanceType = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.InstanceType" );

		ACCLobbyRemoteController_execInstanceType_Parms InstanceType_Parms;

		pfnInstanceType->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInstanceType, &InstanceType_Parms, NULL );
		pfnInstanceType->FunctionFlags |= 0x400;

		if ( IType )
			*IType = InstanceType_Parms.IType; // CPF_OutParm

		return InstanceType_Parms.ReturnValue;
	};

	bool QuestState ( unsigned char* QState, unsigned char* QTState )
	{
		static UFunction* pfnQuestState = NULL;

		if ( !pfnQuestState )
			pfnQuestState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.QuestState" );

		ACCLobbyRemoteController_execQuestState_Parms QuestState_Parms;

		pfnQuestState->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnQuestState, &QuestState_Parms, NULL );
		pfnQuestState->FunctionFlags |= 0x400;

		if ( QState )
			*QState = QuestState_Parms.QState; // CPF_OutParm
		if ( QTState )
			*QTState = QuestState_Parms.QTState; // CPF_OutParm

		return QuestState_Parms.ReturnValue;
	};

	bool BaseFunctionality ( int* Type, unsigned char* SubType )
	{
		static UFunction* pfnBaseFunctionality = NULL;

		if ( !pfnBaseFunctionality )
			pfnBaseFunctionality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.BaseFunctionality" );

		ACCLobbyRemoteController_execBaseFunctionality_Parms BaseFunctionality_Parms;

		pfnBaseFunctionality->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBaseFunctionality, &BaseFunctionality_Parms, NULL );
		pfnBaseFunctionality->FunctionFlags |= 0x400;

		if ( Type )
			*Type = BaseFunctionality_Parms.Type; // CPF_OutParm
		if ( SubType )
			*SubType = BaseFunctionality_Parms.SubType; // CPF_OutParm

		return BaseFunctionality_Parms.ReturnValue;
	};

	bool MinorFunctionality ( int* Type, unsigned char* SubType )
	{
		static UFunction* pfnMinorFunctionality = NULL;

		if ( !pfnMinorFunctionality )
			pfnMinorFunctionality = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.MinorFunctionality" );

		ACCLobbyRemoteController_execMinorFunctionality_Parms MinorFunctionality_Parms;

		pfnMinorFunctionality->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMinorFunctionality, &MinorFunctionality_Parms, NULL );
		pfnMinorFunctionality->FunctionFlags |= 0x400;

		if ( Type )
			*Type = MinorFunctionality_Parms.Type; // CPF_OutParm
		if ( SubType )
			*SubType = MinorFunctionality_Parms.SubType; // CPF_OutParm

		return MinorFunctionality_Parms.ReturnValue;
	};

	bool ProvidesService ( unsigned char stype )
	{
		static UFunction* pfnProvidesService = NULL;

		if ( !pfnProvidesService )
			pfnProvidesService = UObject::FindObject< UFunction >( "Function CrimeCraft.CCLobbyRemoteController.ProvidesService" );

		ACCLobbyRemoteController_execProvidesService_Parms ProvidesService_Parms;
		ProvidesService_Parms.stype = stype;

		pfnProvidesService->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnProvidesService, &ProvidesService_Parms, NULL );
		pfnProvidesService->FunctionFlags |= 0x400;

		return ProvidesService_Parms.ReturnValue;
	};

};

UClass* ACCLobbyRemoteController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif