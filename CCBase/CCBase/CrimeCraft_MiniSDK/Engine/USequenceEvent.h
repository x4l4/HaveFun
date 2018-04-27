/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USequenceEvent.h
// Date: 06/16/2011 @ 05:19:40.18
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct USequenceEvent_eventToggled_Parms
{
};// FUNC_Event

struct USequenceEvent_execReset_Parms
{
};

struct USequenceEvent_execCheckActivate_Parms
{
	class AActor* InOriginator;
	class AActor* InInstigator;
	unsigned long bTest : 1;
	TArray< int > ActivateIndices; // CPF_OutParm
	unsigned long bPushTop : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USequenceEvent_eventRegisterEvent_Parms
{
};// FUNC_Event

// (0xD0 - 0x100)
class USequenceEvent : public USequenceOp
{
public:
	TArray< class USequenceEvent* >                    DuplicateEvts;                               // 0x00D0 (0x000C)
	class AActor*                                      Originator;                                  // 0x00DC (0x0004)
	class AActor*                                      Instigator;                                  // 0x00E0 (0x0004)
	float                                              ActivationTime;                              // 0x00E4 (0x0004)
	int                                                TriggerCount;                                // 0x00E8 (0x0004)
	int                                                MaxTriggerCount;                             // 0x00EC (0x0004)
	float                                              ReTriggerDelay;                              // 0x00F0 (0x0004)
	unsigned long                                      bEnabled : 1;                                // 0x00F4 (0x0004) [0x00000001]
	unsigned long                                      bPlayerOnly : 1;                             // 0x00F4 (0x0004) [0x00000002]
	unsigned long                                      bRegistered : 1;                             // 0x00F4 (0x0004) [0x00000004]
	unsigned long                                      bClientSideOnly : 1;                         // 0x00F4 (0x0004) [0x00000008]
	unsigned char                                      Priority;                                    // 0x00F8 (0x0001)
	int                                                MaxWidth;                                    // 0x00FC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SequenceEvent" );

		return ClassPointer;
	};

public:
	void eventToggled ()
	{
		static UFunction* pfnToggled = NULL;

		if ( !pfnToggled )
			pfnToggled = UObject::FindObject< UFunction >( "Function Engine.SequenceEvent.Toggled" );

		USequenceEvent_eventToggled_Parms Toggled_Parms;

		this->ProcessEvent( pfnToggled, &Toggled_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.SequenceEvent.Reset" );

		USequenceEvent_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	bool CheckActivate ( class AActor* InOriginator, class AActor* InInstigator, unsigned long bTest/*CPF_OptionalParm*/, unsigned long bPushTop/*CPF_OptionalParm*/, TArray< int >* ActivateIndices )
	{
		static UFunction* pfnCheckActivate = NULL;

		if ( !pfnCheckActivate )
			pfnCheckActivate = UObject::FindObject< UFunction >( "Function Engine.SequenceEvent.CheckActivate" );

		USequenceEvent_execCheckActivate_Parms CheckActivate_Parms;
		CheckActivate_Parms.InOriginator = InOriginator;
		CheckActivate_Parms.InInstigator = InInstigator;
		CheckActivate_Parms.bTest = bTest;
		CheckActivate_Parms.bPushTop = bPushTop;

		pfnCheckActivate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCheckActivate, &CheckActivate_Parms, NULL );
		pfnCheckActivate->FunctionFlags |= 0x400;

		if ( ActivateIndices )
			*ActivateIndices = CheckActivate_Parms.ActivateIndices; // CPF_OutParm

		return CheckActivate_Parms.ReturnValue;
	};

	void eventRegisterEvent ()
	{
		static UFunction* pfnRegisterEvent = NULL;

		if ( !pfnRegisterEvent )
			pfnRegisterEvent = UObject::FindObject< UFunction >( "Function Engine.SequenceEvent.RegisterEvent" );

		USequenceEvent_eventRegisterEvent_Parms RegisterEvent_Parms;

		this->ProcessEvent( pfnRegisterEvent, &RegisterEvent_Parms, NULL );
	};

};

UClass* USequenceEvent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif