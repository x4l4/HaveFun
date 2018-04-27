/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UInteraction.h
// Date: 06/16/2011 @ 05:19:40.30
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UInteraction_execNotifyPlayerRemoved_Parms
{
	int PlayerIndex;
	void* RemovedPlayer;
};

struct UInteraction_execNotifyPlayerAdded_Parms
{
	int PlayerIndex;
	void* AddedPlayer;
};

struct UInteraction_execNotifyGameSessionEnded_Parms
{
};

struct UInteraction_execInitialized_Parms
{
};

struct UInteraction_execOnInitialize_Parms
{
};

struct UInteraction_execInit_Parms
{
};// FUNC_Final FUNC_Native

struct UInteraction_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct UInteraction_execOnReceivedNativeInputChar_Parms
{
	int ControllerId;
	struct FString Unicode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UInteraction_execOnReceivedNativeInputAxis_Parms
{
	int ControllerId;
	struct FName Key;
	float Delta;
	float DeltaTime;
	unsigned long bGamepad : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UInteraction_execOnReceivedNativeInputKey_Parms
{
	int ControllerId;
	struct FName Key;
	unsigned char EventType;
	float AmountDepressed;
	unsigned long bGamepad : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

// (0x3C - 0x6C)
class UInteraction : public UUIRoot
{
public:
	struct FScriptDelegate                             __OnReceivedNativeInputKey__Delegate;        // 0x003C (0x000C)
	struct FScriptDelegate                             __OnReceivedNativeInputAxis__Delegate;       // 0x0048 (0x000C)
	struct FScriptDelegate                             __OnReceivedNativeInputChar__Delegate;       // 0x0054 (0x000C)
	struct FScriptDelegate                             __OnInitialize__Delegate;                    // 0x0060 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Interaction" );

		return ClassPointer;
	};

public:
	void NotifyPlayerRemoved ( int PlayerIndex, void* RemovedPlayer )
	{
		static UFunction* pfnNotifyPlayerRemoved = NULL;

		if ( !pfnNotifyPlayerRemoved )
			pfnNotifyPlayerRemoved = UObject::FindObject< UFunction >( "Function Engine.Interaction.NotifyPlayerRemoved" );

		UInteraction_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;
		NotifyPlayerRemoved_Parms.PlayerIndex = PlayerIndex;
		NotifyPlayerRemoved_Parms.RemovedPlayer = RemovedPlayer;

		this->ProcessEvent( pfnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, NULL );
	};

	void NotifyPlayerAdded ( int PlayerIndex, void* AddedPlayer )
	{
		static UFunction* pfnNotifyPlayerAdded = NULL;

		if ( !pfnNotifyPlayerAdded )
			pfnNotifyPlayerAdded = UObject::FindObject< UFunction >( "Function Engine.Interaction.NotifyPlayerAdded" );

		UInteraction_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;
		NotifyPlayerAdded_Parms.PlayerIndex = PlayerIndex;
		NotifyPlayerAdded_Parms.AddedPlayer = AddedPlayer;

		this->ProcessEvent( pfnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, NULL );
	};

	void NotifyGameSessionEnded ()
	{
		static UFunction* pfnNotifyGameSessionEnded = NULL;

		if ( !pfnNotifyGameSessionEnded )
			pfnNotifyGameSessionEnded = UObject::FindObject< UFunction >( "Function Engine.Interaction.NotifyGameSessionEnded" );

		UInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

		this->ProcessEvent( pfnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );
	};

	void Initialized ()
	{
		static UFunction* pfnInitialized = NULL;

		if ( !pfnInitialized )
			pfnInitialized = UObject::FindObject< UFunction >( "Function Engine.Interaction.Initialized" );

		UInteraction_execInitialized_Parms Initialized_Parms;

		this->ProcessEvent( pfnInitialized, &Initialized_Parms, NULL );
	};

	void OnInitialize ()
	{
		static UFunction* pfnOnInitialize = NULL;

		if ( !pfnOnInitialize )
			pfnOnInitialize = UObject::FindObject< UFunction >( "Function Engine.Interaction.OnInitialize" );

		UInteraction_execOnInitialize_Parms OnInitialize_Parms;

		this->ProcessEvent( pfnOnInitialize, &OnInitialize_Parms, NULL );
	};

	void Init ()
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function Engine.Interaction.Init" );

		UInteraction_execInit_Parms Init_Parms;

		pfnInit->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInit, &Init_Parms, NULL );
		pfnInit->FunctionFlags |= 0x400;
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function Engine.Interaction.Tick" );

		UInteraction_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	bool OnReceivedNativeInputChar ( int ControllerId, struct FString Unicode )
	{
		static UFunction* pfnOnReceivedNativeInputChar = NULL;

		if ( !pfnOnReceivedNativeInputChar )
			pfnOnReceivedNativeInputChar = UObject::FindObject< UFunction >( "Function Engine.Interaction.OnReceivedNativeInputChar" );

		UInteraction_execOnReceivedNativeInputChar_Parms OnReceivedNativeInputChar_Parms;
		OnReceivedNativeInputChar_Parms.ControllerId = ControllerId;
		memcpy( &OnReceivedNativeInputChar_Parms.Unicode, &Unicode, 0xC );

		this->ProcessEvent( pfnOnReceivedNativeInputChar, &OnReceivedNativeInputChar_Parms, NULL );

		return OnReceivedNativeInputChar_Parms.ReturnValue;
	};

	bool OnReceivedNativeInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime, unsigned long bGamepad/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnOnReceivedNativeInputAxis = NULL;

		if ( !pfnOnReceivedNativeInputAxis )
			pfnOnReceivedNativeInputAxis = UObject::FindObject< UFunction >( "Function Engine.Interaction.OnReceivedNativeInputAxis" );

		UInteraction_execOnReceivedNativeInputAxis_Parms OnReceivedNativeInputAxis_Parms;
		OnReceivedNativeInputAxis_Parms.ControllerId = ControllerId;
		memcpy( &OnReceivedNativeInputAxis_Parms.Key, &Key, 0x8 );
		OnReceivedNativeInputAxis_Parms.Delta = Delta;
		OnReceivedNativeInputAxis_Parms.DeltaTime = DeltaTime;
		OnReceivedNativeInputAxis_Parms.bGamepad = bGamepad;

		this->ProcessEvent( pfnOnReceivedNativeInputAxis, &OnReceivedNativeInputAxis_Parms, NULL );

		return OnReceivedNativeInputAxis_Parms.ReturnValue;
	};

	bool OnReceivedNativeInputKey ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed/*CPF_OptionalParm*/, unsigned long bGamepad/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnOnReceivedNativeInputKey = NULL;

		if ( !pfnOnReceivedNativeInputKey )
			pfnOnReceivedNativeInputKey = UObject::FindObject< UFunction >( "Function Engine.Interaction.OnReceivedNativeInputKey" );

		UInteraction_execOnReceivedNativeInputKey_Parms OnReceivedNativeInputKey_Parms;
		OnReceivedNativeInputKey_Parms.ControllerId = ControllerId;
		memcpy( &OnReceivedNativeInputKey_Parms.Key, &Key, 0x8 );
		OnReceivedNativeInputKey_Parms.EventType = EventType;
		OnReceivedNativeInputKey_Parms.AmountDepressed = AmountDepressed;
		OnReceivedNativeInputKey_Parms.bGamepad = bGamepad;

		this->ProcessEvent( pfnOnReceivedNativeInputKey, &OnReceivedNativeInputKey_Parms, NULL );

		return OnReceivedNativeInputKey_Parms.ReturnValue;
	};

};

UClass* UInteraction::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif