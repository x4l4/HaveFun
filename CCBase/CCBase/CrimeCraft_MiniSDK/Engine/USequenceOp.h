/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USequenceOp.h
// Date: 06/16/2011 @ 05:19:40.13
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct USequenceOp_execForceActivateInput_Parms
{
	int InputIdx;
};// FUNC_Final FUNC_Native

struct USequenceOp_execGetController_Parms
{
	class AActor* TheActor;
	class AController* ReturnValue; // CPF_ReturnParm
};

struct USequenceOp_execGetPawn_Parms
{
	class AActor* TheActor;
	class APawn* ReturnValue; // CPF_ReturnParm
};

struct USequenceOp_execReset_Parms
{
};

struct USequenceOp_execPublishLinkedVariableValues_Parms
{
};// FUNC_Final FUNC_Native

struct USequenceOp_execPopulateLinkedVariableValues_Parms
{
};// FUNC_Final FUNC_Native

struct USequenceOp_eventVersionUpdated_Parms
{
	int OldVersion;
	int NewVersion;
};// FUNC_Event

struct USequenceOp_eventDeactivated_Parms
{
};// FUNC_Event

struct USequenceOp_eventActivated_Parms
{
};// FUNC_Event

struct USequenceOp_execActivateNamedOutputLink_Parms
{
	struct FString LinkDesc;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USequenceOp_execActivateOutputLink_Parms
{
	int OutputIdx;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USequenceOp_execLinkedVariables_Parms
{
	class UClass* VarClass;
	void* OutVariable; // CPF_OutParm
	struct FString inDesc;
};// FUNC_Final FUNC_Native

struct USequenceOp_execGetBoolVars_Parms
{
	TArray< unsigned char > boolVars; // CPF_OutParm
	struct FString inDesc;
};// FUNC_Final FUNC_Native

struct USequenceOp_execGetInterpDataVars_Parms
{
	TArray< void* > outIData; // CPF_OutParm
	struct FString inDesc;
};// FUNC_Final FUNC_Native

struct USequenceOp_execGetObjectVars_Parms
{
	TArray< class UObject* > objVars; // CPF_OutParm
	struct FString inDesc;
};// FUNC_Final FUNC_Native

struct USequenceOp_execGetLinkedObjects_Parms
{
	TArray< class USequenceObject* > out_Objects; // CPF_OutParm
	class UClass* ObjectType;
	unsigned long bRecurse : 1;
};// FUNC_Final FUNC_Native

struct USequenceOp_execHasLinkedOps_Parms
{
	unsigned long bConsiderInputLinks : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

// (0x8C - 0xD0)
class USequenceOp : public USequenceObject
{
public:
	unsigned long                                      bActive : 1;                                 // 0x008C (0x0004) [0x00000001]
	unsigned long                                      bLatentExecution : 1;                        // 0x008C (0x0004) [0x00000002]
	unsigned long                                      bAutoActivateOutputLinks : 1;                // 0x008C (0x0004) [0x00000004]
	TArray< struct FSeqOpInputLink >                   InputLinks;                                  // 0x0090 (0x000C)
	TArray< struct FSeqOpOutputLink >                  OutputLinks;                                 // 0x009C (0x000C)
	TArray< struct FSeqVarLink >                       VariableLinks;                               // 0x00A8 (0x000C)
	TArray< struct FSeqEventLink >                     EventLinks;                                  // 0x00B4 (0x000C)
	int                                                PlayerIndex;                                 // 0x00C0 (0x0004)
	unsigned char                                      GamepadID;                                   // 0x00C4 (0x0001)
	int                                                ActivateCount;                               // 0x00C8 (0x0004)
	int                                                SearchTag;                                   // 0x00CC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SequenceOp" );

		return ClassPointer;
	};

public:
	void ForceActivateInput ( int InputIdx )
	{
		static UFunction* pfnForceActivateInput = NULL;

		if ( !pfnForceActivateInput )
			pfnForceActivateInput = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.ForceActivateInput" );

		USequenceOp_execForceActivateInput_Parms ForceActivateInput_Parms;
		ForceActivateInput_Parms.InputIdx = InputIdx;

		pfnForceActivateInput->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceActivateInput, &ForceActivateInput_Parms, NULL );
		pfnForceActivateInput->FunctionFlags |= 0x400;
	};

	class AController* GetController ( class AActor* TheActor )
	{
		static UFunction* pfnGetController = NULL;

		if ( !pfnGetController )
			pfnGetController = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetController" );

		USequenceOp_execGetController_Parms GetController_Parms;
		GetController_Parms.TheActor = TheActor;

		this->ProcessEvent( pfnGetController, &GetController_Parms, NULL );

		return GetController_Parms.ReturnValue;
	};

	class APawn* GetPawn ( class AActor* TheActor )
	{
		static UFunction* pfnGetPawn = NULL;

		if ( !pfnGetPawn )
			pfnGetPawn = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetPawn" );

		USequenceOp_execGetPawn_Parms GetPawn_Parms;
		GetPawn_Parms.TheActor = TheActor;

		this->ProcessEvent( pfnGetPawn, &GetPawn_Parms, NULL );

		return GetPawn_Parms.ReturnValue;
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.Reset" );

		USequenceOp_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void PublishLinkedVariableValues ()
	{
		static UFunction* pfnPublishLinkedVariableValues = NULL;

		if ( !pfnPublishLinkedVariableValues )
			pfnPublishLinkedVariableValues = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.PublishLinkedVariableValues" );

		USequenceOp_execPublishLinkedVariableValues_Parms PublishLinkedVariableValues_Parms;

		pfnPublishLinkedVariableValues->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPublishLinkedVariableValues, &PublishLinkedVariableValues_Parms, NULL );
		pfnPublishLinkedVariableValues->FunctionFlags |= 0x400;
	};

	void PopulateLinkedVariableValues ()
	{
		static UFunction* pfnPopulateLinkedVariableValues = NULL;

		if ( !pfnPopulateLinkedVariableValues )
			pfnPopulateLinkedVariableValues = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.PopulateLinkedVariableValues" );

		USequenceOp_execPopulateLinkedVariableValues_Parms PopulateLinkedVariableValues_Parms;

		pfnPopulateLinkedVariableValues->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPopulateLinkedVariableValues, &PopulateLinkedVariableValues_Parms, NULL );
		pfnPopulateLinkedVariableValues->FunctionFlags |= 0x400;
	};

	void eventVersionUpdated ( int OldVersion, int NewVersion )
	{
		static UFunction* pfnVersionUpdated = NULL;

		if ( !pfnVersionUpdated )
			pfnVersionUpdated = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.VersionUpdated" );

		USequenceOp_eventVersionUpdated_Parms VersionUpdated_Parms;
		VersionUpdated_Parms.OldVersion = OldVersion;
		VersionUpdated_Parms.NewVersion = NewVersion;

		this->ProcessEvent( pfnVersionUpdated, &VersionUpdated_Parms, NULL );
	};

	void eventDeactivated ()
	{
		static UFunction* pfnDeactivated = NULL;

		if ( !pfnDeactivated )
			pfnDeactivated = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.Deactivated" );

		USequenceOp_eventDeactivated_Parms Deactivated_Parms;

		this->ProcessEvent( pfnDeactivated, &Deactivated_Parms, NULL );
	};

	void eventActivated ()
	{
		static UFunction* pfnActivated = NULL;

		if ( !pfnActivated )
			pfnActivated = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.Activated" );

		USequenceOp_eventActivated_Parms Activated_Parms;

		this->ProcessEvent( pfnActivated, &Activated_Parms, NULL );
	};

	bool ActivateNamedOutputLink ( struct FString LinkDesc )
	{
		static UFunction* pfnActivateNamedOutputLink = NULL;

		if ( !pfnActivateNamedOutputLink )
			pfnActivateNamedOutputLink = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.ActivateNamedOutputLink" );

		USequenceOp_execActivateNamedOutputLink_Parms ActivateNamedOutputLink_Parms;
		memcpy( &ActivateNamedOutputLink_Parms.LinkDesc, &LinkDesc, 0xC );

		pfnActivateNamedOutputLink->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnActivateNamedOutputLink, &ActivateNamedOutputLink_Parms, NULL );
		pfnActivateNamedOutputLink->FunctionFlags |= 0x400;

		return ActivateNamedOutputLink_Parms.ReturnValue;
	};

	bool ActivateOutputLink ( int OutputIdx )
	{
		static UFunction* pfnActivateOutputLink = NULL;

		if ( !pfnActivateOutputLink )
			pfnActivateOutputLink = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.ActivateOutputLink" );

		USequenceOp_execActivateOutputLink_Parms ActivateOutputLink_Parms;
		ActivateOutputLink_Parms.OutputIdx = OutputIdx;

		pfnActivateOutputLink->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnActivateOutputLink, &ActivateOutputLink_Parms, NULL );
		pfnActivateOutputLink->FunctionFlags |= 0x400;

		return ActivateOutputLink_Parms.ReturnValue;
	};

	void LinkedVariables ( class UClass* VarClass, struct FString inDesc/*CPF_OptionalParm*/, void** OutVariable )
	{
		static UFunction* pfnLinkedVariables = NULL;

		if ( !pfnLinkedVariables )
			pfnLinkedVariables = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.LinkedVariables" );

		USequenceOp_execLinkedVariables_Parms LinkedVariables_Parms;
		LinkedVariables_Parms.VarClass = VarClass;
		memcpy( &LinkedVariables_Parms.inDesc, &inDesc, 0xC );

		pfnLinkedVariables->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnLinkedVariables, &LinkedVariables_Parms, NULL );
		pfnLinkedVariables->FunctionFlags |= 0x400;

		if ( OutVariable )
			*OutVariable = LinkedVariables_Parms.OutVariable; // CPF_OutParm
	};

	void GetBoolVars ( struct FString inDesc/*CPF_OptionalParm*/, TArray< unsigned char >* boolVars )
	{
		static UFunction* pfnGetBoolVars = NULL;

		if ( !pfnGetBoolVars )
			pfnGetBoolVars = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetBoolVars" );

		USequenceOp_execGetBoolVars_Parms GetBoolVars_Parms;
		memcpy( &GetBoolVars_Parms.inDesc, &inDesc, 0xC );

		pfnGetBoolVars->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoolVars, &GetBoolVars_Parms, NULL );
		pfnGetBoolVars->FunctionFlags |= 0x400;

		if ( boolVars )
			*boolVars = GetBoolVars_Parms.boolVars; // CPF_OutParm
	};

	void GetInterpDataVars ( struct FString inDesc/*CPF_OptionalParm*/, TArray< void* >* outIData )
	{
		static UFunction* pfnGetInterpDataVars = NULL;

		if ( !pfnGetInterpDataVars )
			pfnGetInterpDataVars = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetInterpDataVars" );

		USequenceOp_execGetInterpDataVars_Parms GetInterpDataVars_Parms;
		memcpy( &GetInterpDataVars_Parms.inDesc, &inDesc, 0xC );

		pfnGetInterpDataVars->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetInterpDataVars, &GetInterpDataVars_Parms, NULL );
		pfnGetInterpDataVars->FunctionFlags |= 0x400;

		if ( outIData )
			*outIData = GetInterpDataVars_Parms.outIData; // CPF_OutParm
	};

	void GetObjectVars ( struct FString inDesc/*CPF_OptionalParm*/, TArray< class UObject* >* objVars )
	{
		static UFunction* pfnGetObjectVars = NULL;

		if ( !pfnGetObjectVars )
			pfnGetObjectVars = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetObjectVars" );

		USequenceOp_execGetObjectVars_Parms GetObjectVars_Parms;
		memcpy( &GetObjectVars_Parms.inDesc, &inDesc, 0xC );

		pfnGetObjectVars->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetObjectVars, &GetObjectVars_Parms, NULL );
		pfnGetObjectVars->FunctionFlags |= 0x400;

		if ( objVars )
			*objVars = GetObjectVars_Parms.objVars; // CPF_OutParm
	};

	void GetLinkedObjects ( class UClass* ObjectType/*CPF_OptionalParm*/, unsigned long bRecurse/*CPF_OptionalParm*/, TArray< class USequenceObject* >* out_Objects )
	{
		static UFunction* pfnGetLinkedObjects = NULL;

		if ( !pfnGetLinkedObjects )
			pfnGetLinkedObjects = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.GetLinkedObjects" );

		USequenceOp_execGetLinkedObjects_Parms GetLinkedObjects_Parms;
		GetLinkedObjects_Parms.ObjectType = ObjectType;
		GetLinkedObjects_Parms.bRecurse = bRecurse;

		pfnGetLinkedObjects->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetLinkedObjects, &GetLinkedObjects_Parms, NULL );
		pfnGetLinkedObjects->FunctionFlags |= 0x400;

		if ( out_Objects )
			*out_Objects = GetLinkedObjects_Parms.out_Objects; // CPF_OutParm
	};

	bool HasLinkedOps ( unsigned long bConsiderInputLinks/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHasLinkedOps = NULL;

		if ( !pfnHasLinkedOps )
			pfnHasLinkedOps = UObject::FindObject< UFunction >( "Function Engine.SequenceOp.HasLinkedOps" );

		USequenceOp_execHasLinkedOps_Parms HasLinkedOps_Parms;
		HasLinkedOps_Parms.bConsiderInputLinks = bConsiderInputLinks;

		pfnHasLinkedOps->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnHasLinkedOps, &HasLinkedOps_Parms, NULL );
		pfnHasLinkedOps->FunctionFlags |= 0x400;

		return HasLinkedOps_Parms.ReturnValue;
	};

};

UClass* USequenceOp::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif