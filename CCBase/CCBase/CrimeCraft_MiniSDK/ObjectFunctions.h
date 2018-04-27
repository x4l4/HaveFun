/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ObjectFunctions.h
// Date: 06/16/2011 @ 01:19:42.928
/////////////////////////////////////////////////////////////////////////////

TArray< UObject* >* UObject::GObjObjects ()
{
	TArray< UObject* >* ObjectArray = ( TArray< UObject* >* )GObjects;
	return ObjectArray;
}

char* UObject::GetName ()
{
	static char NameBuffer[ 256 ];
	ZeroMemory( NameBuffer, 256 );

	sprintf( NameBuffer, "%s", this->Name.GetName() );
	return NameBuffer;
}

char* UObject::GetNameCPP ()
{
	static char ObjectName[ 256 ];

	if ( this->IsA( UClass::StaticClass() ) )
	{
		UClass* pClass = ( UClass* )this;
		while ( pClass )
		{
			if ( !strcmp( pClass->GetName(), "Actor" ) )
			{
				strcpy( ObjectName, "A" );
				break;
			}
			else if ( !strcmp( pClass->GetName(), "Object" ) )
			{
				strcpy( ObjectName, "U" );
				break;
			}

			pClass = ( UClass* )pClass->SuperField;
		}
	}
	else
		strcpy( ObjectName, "F" );

	strcat( ObjectName, this->GetName() );

	return ObjectName;
}

char* UObject::GetFullName ()
{
	if ( this->Class && this->Outer )
	{
		static char ObjectName[ 256 ];

		if ( this->Outer->Outer )
		{
			strcpy( ObjectName, this->Class->GetName() );
			strcat( ObjectName, " " );
			strcat( ObjectName, this->Outer->Outer->GetName() );
			strcat( ObjectName, "." );
			strcat( ObjectName, this->Outer->GetName() );
			strcat( ObjectName, "." );
			strcat( ObjectName, this->GetName() );
		}
		else
		{
			strcpy( ObjectName, this->Class->GetName() );
			strcat( ObjectName, " " );
			strcat( ObjectName, this->Outer->GetName() );
			strcat( ObjectName, "." );
			strcat( ObjectName, this->GetName() );
		}
		return ObjectName;
	}

	return "(null)";
}

template< class T > static T* UObject::FindObject ( char* ObjectName )
{
	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i )
	{
		UObject* Object = UObject::GObjObjects()->Data[ i ];
		if ( !Object || !Object->IsA( T::StaticClass() ) )
			continue;

		if ( !strcmp( Object->GetFullName(), ObjectName )
			|| !strcmp( Object->GetName(), ObjectName ) )
			return ( T* )Object;
	}

	return NULL;
}

UClass* UObject::FindClass ( char* ClassName )
{
	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i )
	{
		UObject* Object = UObject::GObjObjects()->Data[ i ];
		if ( !Object )
			continue;

		if ( !strcmp( Object->GetFullName(), ClassName )
			|| !strcmp( Object->GetName(), ClassName ) )
			return ( UClass* )Object;
	}

	return NULL;
}

bool UObject::IsA( UClass* pClass )
{
	for ( UClass* SuperClass = this->Class; SuperClass; SuperClass = ( UClass* )SuperClass->SuperField )
	{
		if ( SuperClass == pClass )
			return true;
	}

	return false;
}

struct FVector UObject::TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse/*CPF_OptionalParm*/ )
{
	static UFunction* pfnTransformVectorByRotation = NULL;

	if ( !pfnTransformVectorByRotation )
		pfnTransformVectorByRotation = UObject::FindObject< UFunction >( "Function Core.Object.TransformVectorByRotation" );

	UObject_execTransformVectorByRotation_Parms TransformVectorByRotation_Parms;
	memcpy( &TransformVectorByRotation_Parms.SourceRotation, &SourceRotation, 0xC );
	memcpy( &TransformVectorByRotation_Parms.SourceVector, &SourceVector, 0xC );
	TransformVectorByRotation_Parms.bInverse = bInverse;

	pfnTransformVectorByRotation->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnTransformVectorByRotation, &TransformVectorByRotation_Parms, NULL );
	pfnTransformVectorByRotation->FunctionFlags |= 0x400;

	return TransformVectorByRotation_Parms.ReturnValue;
};

struct FName UObject::GetPackageName ()
{
	static UFunction* pfnGetPackageName = NULL;

	if ( !pfnGetPackageName )
		pfnGetPackageName = UObject::FindObject< UFunction >( "Function Core.Object.GetPackageName" );

	UObject_execGetPackageName_Parms GetPackageName_Parms;

	this->ProcessEvent( pfnGetPackageName, &GetPackageName_Parms, NULL );

	return GetPackageName_Parms.ReturnValue;
};

bool UObject::IsPendingKill ()
{
	static UFunction* pfnIsPendingKill = NULL;

	if ( !pfnIsPendingKill )
		pfnIsPendingKill = UObject::FindObject< UFunction >( "Function Core.Object.IsPendingKill" );

	UObject_execIsPendingKill_Parms IsPendingKill_Parms;

	pfnIsPendingKill->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsPendingKill, &IsPendingKill_Parms, NULL );
	pfnIsPendingKill->FunctionFlags |= 0x400;

	return IsPendingKill_Parms.ReturnValue;
};

float UObject::ByteToFloat ( unsigned char inputByte, unsigned long bSigned/*CPF_OptionalParm*/ )
{
	static UFunction* pfnByteToFloat = NULL;

	if ( !pfnByteToFloat )
		pfnByteToFloat = UObject::FindObject< UFunction >( "Function Core.Object.ByteToFloat" );

	UObject_execByteToFloat_Parms ByteToFloat_Parms;
	ByteToFloat_Parms.inputByte = inputByte;
	ByteToFloat_Parms.bSigned = bSigned;

	this->ProcessEvent( pfnByteToFloat, &ByteToFloat_Parms, NULL );

	return ByteToFloat_Parms.ReturnValue;
};

unsigned char UObject::FloatToByte ( float inputFloat, unsigned long bSigned/*CPF_OptionalParm*/ )
{
	static UFunction* pfnFloatToByte = NULL;

	if ( !pfnFloatToByte )
		pfnFloatToByte = UObject::FindObject< UFunction >( "Function Core.Object.FloatToByte" );

	UObject_execFloatToByte_Parms FloatToByte_Parms;
	FloatToByte_Parms.inputFloat = inputFloat;
	FloatToByte_Parms.bSigned = bSigned;

	this->ProcessEvent( pfnFloatToByte, &FloatToByte_Parms, NULL );

	return FloatToByte_Parms.ReturnValue;
};

float UObject::UnwindHeading ( float A )
{
	static UFunction* pfnUnwindHeading = NULL;

	if ( !pfnUnwindHeading )
		pfnUnwindHeading = UObject::FindObject< UFunction >( "Function Core.Object.UnwindHeading" );

	UObject_execUnwindHeading_Parms UnwindHeading_Parms;
	UnwindHeading_Parms.A = A;

	this->ProcessEvent( pfnUnwindHeading, &UnwindHeading_Parms, NULL );

	return UnwindHeading_Parms.ReturnValue;
};

float UObject::FindDeltaAngle ( float A1, float A2 )
{
	static UFunction* pfnFindDeltaAngle = NULL;

	if ( !pfnFindDeltaAngle )
		pfnFindDeltaAngle = UObject::FindObject< UFunction >( "Function Core.Object.FindDeltaAngle" );

	UObject_execFindDeltaAngle_Parms FindDeltaAngle_Parms;
	FindDeltaAngle_Parms.A1 = A1;
	FindDeltaAngle_Parms.A2 = A2;

	this->ProcessEvent( pfnFindDeltaAngle, &FindDeltaAngle_Parms, NULL );

	return FindDeltaAngle_Parms.ReturnValue;
};

float UObject::GetHeadingAngle ( struct FVector Dir )
{
	static UFunction* pfnGetHeadingAngle = NULL;

	if ( !pfnGetHeadingAngle )
		pfnGetHeadingAngle = UObject::FindObject< UFunction >( "Function Core.Object.GetHeadingAngle" );

	UObject_execGetHeadingAngle_Parms GetHeadingAngle_Parms;
	memcpy( &GetHeadingAngle_Parms.Dir, &Dir, 0xC );

	this->ProcessEvent( pfnGetHeadingAngle, &GetHeadingAngle_Parms, NULL );

	return GetHeadingAngle_Parms.ReturnValue;
};

void UObject::GetAngularDegreesFromRadians ( struct FVector2D* OutFOV )
{
	static UFunction* pfnGetAngularDegreesFromRadians = NULL;

	if ( !pfnGetAngularDegreesFromRadians )
		pfnGetAngularDegreesFromRadians = UObject::FindObject< UFunction >( "Function Core.Object.GetAngularDegreesFromRadians" );

	UObject_execGetAngularDegreesFromRadians_Parms GetAngularDegreesFromRadians_Parms;

	this->ProcessEvent( pfnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Parms, NULL );

	if ( OutFOV )
		memcpy( OutFOV, &GetAngularDegreesFromRadians_Parms.OutFOV, 0x8 ); // CPF_OutParm
};

void UObject::GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist )
{
	static UFunction* pfnGetAngularFromDotDist = NULL;

	if ( !pfnGetAngularFromDotDist )
		pfnGetAngularFromDotDist = UObject::FindObject< UFunction >( "Function Core.Object.GetAngularFromDotDist" );

	UObject_execGetAngularFromDotDist_Parms GetAngularFromDotDist_Parms;
	memcpy( &GetAngularFromDotDist_Parms.DotDist, &DotDist, 0x8 );

	pfnGetAngularFromDotDist->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetAngularFromDotDist, &GetAngularFromDotDist_Parms, NULL );
	pfnGetAngularFromDotDist->FunctionFlags |= 0x400;

	if ( OutAngDist )
		memcpy( OutAngDist, &GetAngularFromDotDist_Parms.OutAngDist, 0x8 ); // CPF_OutParm
};

bool UObject::GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist )
{
	static UFunction* pfnGetAngularDistance = NULL;

	if ( !pfnGetAngularDistance )
		pfnGetAngularDistance = UObject::FindObject< UFunction >( "Function Core.Object.GetAngularDistance" );

	UObject_execGetAngularDistance_Parms GetAngularDistance_Parms;
	memcpy( &GetAngularDistance_Parms.Direction, &Direction, 0xC );
	memcpy( &GetAngularDistance_Parms.AxisX, &AxisX, 0xC );
	memcpy( &GetAngularDistance_Parms.AxisY, &AxisY, 0xC );
	memcpy( &GetAngularDistance_Parms.AxisZ, &AxisZ, 0xC );

	pfnGetAngularDistance->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetAngularDistance, &GetAngularDistance_Parms, NULL );
	pfnGetAngularDistance->FunctionFlags |= 0x400;

	if ( OutAngularDist )
		memcpy( OutAngularDist, &GetAngularDistance_Parms.OutAngularDist, 0x8 ); // CPF_OutParm

	return GetAngularDistance_Parms.ReturnValue;
};

bool UObject::GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist )
{
	static UFunction* pfnGetDotDistance = NULL;

	if ( !pfnGetDotDistance )
		pfnGetDotDistance = UObject::FindObject< UFunction >( "Function Core.Object.GetDotDistance" );

	UObject_execGetDotDistance_Parms GetDotDistance_Parms;
	memcpy( &GetDotDistance_Parms.Direction, &Direction, 0xC );
	memcpy( &GetDotDistance_Parms.AxisX, &AxisX, 0xC );
	memcpy( &GetDotDistance_Parms.AxisY, &AxisY, 0xC );
	memcpy( &GetDotDistance_Parms.AxisZ, &AxisZ, 0xC );

	pfnGetDotDistance->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetDotDistance, &GetDotDistance_Parms, NULL );
	pfnGetDotDistance->FunctionFlags |= 0x400;

	if ( OutDotDist )
		memcpy( OutDotDist, &GetDotDistance_Parms.OutDotDist, 0x8 ); // CPF_OutParm

	return GetDotDistance_Parms.ReturnValue;
};

bool UObject::PointInBox ( struct FVector Point, struct FVector Location, struct FVector Extent )
{
	static UFunction* pfnPointInBox = NULL;

	if ( !pfnPointInBox )
		pfnPointInBox = UObject::FindObject< UFunction >( "Function Core.Object.PointInBox" );

	UObject_execPointInBox_Parms PointInBox_Parms;
	memcpy( &PointInBox_Parms.Point, &Point, 0xC );
	memcpy( &PointInBox_Parms.Location, &Location, 0xC );
	memcpy( &PointInBox_Parms.Extent, &Extent, 0xC );

	this->ProcessEvent( pfnPointInBox, &PointInBox_Parms, NULL );

	return PointInBox_Parms.ReturnValue;
};

float UObject::PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint )
{
	static UFunction* pfnPointDistToPlane = NULL;

	if ( !pfnPointDistToPlane )
		pfnPointDistToPlane = UObject::FindObject< UFunction >( "Function Core.Object.PointDistToPlane" );

	UObject_execPointDistToPlane_Parms PointDistToPlane_Parms;
	memcpy( &PointDistToPlane_Parms.Point, &Point, 0xC );
	memcpy( &PointDistToPlane_Parms.Orientation, &Orientation, 0xC );
	memcpy( &PointDistToPlane_Parms.Origin, &Origin, 0xC );

	this->ProcessEvent( pfnPointDistToPlane, &PointDistToPlane_Parms, NULL );

	if ( out_ClosestPoint )
		memcpy( out_ClosestPoint, &PointDistToPlane_Parms.out_ClosestPoint, 0xC ); // CPF_OutParm

	return PointDistToPlane_Parms.ReturnValue;
};

float UObject::PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint )
{
	static UFunction* pfnPointDistToSegment = NULL;

	if ( !pfnPointDistToSegment )
		pfnPointDistToSegment = UObject::FindObject< UFunction >( "Function Core.Object.PointDistToSegment" );

	UObject_execPointDistToSegment_Parms PointDistToSegment_Parms;
	memcpy( &PointDistToSegment_Parms.Point, &Point, 0xC );
	memcpy( &PointDistToSegment_Parms.StartPoint, &StartPoint, 0xC );
	memcpy( &PointDistToSegment_Parms.EndPoint, &EndPoint, 0xC );

	pfnPointDistToSegment->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPointDistToSegment, &PointDistToSegment_Parms, NULL );
	pfnPointDistToSegment->FunctionFlags |= 0x400;

	if ( OutClosestPoint )
		memcpy( OutClosestPoint, &PointDistToSegment_Parms.OutClosestPoint, 0xC ); // CPF_OutParm

	return PointDistToSegment_Parms.ReturnValue;
};

float UObject::PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint )
{
	static UFunction* pfnPointDistToLine = NULL;

	if ( !pfnPointDistToLine )
		pfnPointDistToLine = UObject::FindObject< UFunction >( "Function Core.Object.PointDistToLine" );

	UObject_execPointDistToLine_Parms PointDistToLine_Parms;
	memcpy( &PointDistToLine_Parms.Point, &Point, 0xC );
	memcpy( &PointDistToLine_Parms.Line, &Line, 0xC );
	memcpy( &PointDistToLine_Parms.Origin, &Origin, 0xC );

	pfnPointDistToLine->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPointDistToLine, &PointDistToLine_Parms, NULL );
	pfnPointDistToLine->FunctionFlags |= 0x400;

	if ( OutClosestPoint )
		memcpy( OutClosestPoint, &PointDistToLine_Parms.OutClosestPoint, 0xC ); // CPF_OutParm

	return PointDistToLine_Parms.ReturnValue;
};

bool UObject::GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter/*CPF_OptionalParm*/, int MaxResults/*CPF_OptionalParm*/, TArray< struct FString >* out_SectionNames )
{
	static UFunction* pfnGetPerObjectConfigSections = NULL;

	if ( !pfnGetPerObjectConfigSections )
		pfnGetPerObjectConfigSections = UObject::FindObject< UFunction >( "Function Core.Object.GetPerObjectConfigSections" );

	UObject_execGetPerObjectConfigSections_Parms GetPerObjectConfigSections_Parms;
	GetPerObjectConfigSections_Parms.SearchClass = SearchClass;
	GetPerObjectConfigSections_Parms.ObjectOuter = ObjectOuter;
	GetPerObjectConfigSections_Parms.MaxResults = MaxResults;

	pfnGetPerObjectConfigSections->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetPerObjectConfigSections, &GetPerObjectConfigSections_Parms, NULL );
	pfnGetPerObjectConfigSections->FunctionFlags |= 0x400;

	if ( out_SectionNames )
		memcpy( out_SectionNames, &GetPerObjectConfigSections_Parms.out_SectionNames, 0xC ); // CPF_OutParm

	return GetPerObjectConfigSections_Parms.ReturnValue;
};

void UObject::StaticSaveConfig ()
{
	static UFunction* pfnStaticSaveConfig = NULL;

	if ( !pfnStaticSaveConfig )
		pfnStaticSaveConfig = UObject::FindObject< UFunction >( "Function Core.Object.StaticSaveConfig" );

	UObject_execStaticSaveConfig_Parms StaticSaveConfig_Parms;

	pfnStaticSaveConfig->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnStaticSaveConfig, &StaticSaveConfig_Parms, NULL );
	pfnStaticSaveConfig->FunctionFlags |= 0x400;
};

void UObject::SaveConfig ()
{
	static UFunction* pfnSaveConfig = NULL;

	if ( !pfnSaveConfig )
		pfnSaveConfig = UObject::FindObject< UFunction >( "Function Core.Object.SaveConfig" );

	UObject_execSaveConfig_Parms SaveConfig_Parms;

	WORD NativeIndex = pfnSaveConfig->iNative;
	pfnSaveConfig->iNative = 0;

	pfnSaveConfig->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSaveConfig, &SaveConfig_Parms, NULL );
	pfnSaveConfig->FunctionFlags |= 0x400;

	pfnSaveConfig->iNative = NativeIndex;
};

class UObject* UObject::FindObject ( struct FString ObjectName, class UClass* ObjectClass )
{
	static UFunction* pfnFindObject = NULL;

	if ( !pfnFindObject )
		pfnFindObject = UObject::FindObject< UFunction >( "Function Core.Object.FindObject" );

	UObject_execFindObject_Parms FindObject_Parms;
	memcpy( &FindObject_Parms.ObjectName, &ObjectName, 0xC );
	FindObject_Parms.ObjectClass = ObjectClass;

	pfnFindObject->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFindObject, &FindObject_Parms, NULL );
	pfnFindObject->FunctionFlags |= 0x400;

	return FindObject_Parms.ReturnValue;
};

class UObject* UObject::DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail/*CPF_OptionalParm*/ )
{
	static UFunction* pfnDynamicLoadObject = NULL;

	if ( !pfnDynamicLoadObject )
		pfnDynamicLoadObject = UObject::FindObject< UFunction >( "Function Core.Object.DynamicLoadObject" );

	UObject_execDynamicLoadObject_Parms DynamicLoadObject_Parms;
	memcpy( &DynamicLoadObject_Parms.ObjectName, &ObjectName, 0xC );
	DynamicLoadObject_Parms.ObjectClass = ObjectClass;
	DynamicLoadObject_Parms.MayFail = MayFail;

	pfnDynamicLoadObject->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDynamicLoadObject, &DynamicLoadObject_Parms, NULL );
	pfnDynamicLoadObject->FunctionFlags |= 0x400;

	return DynamicLoadObject_Parms.ReturnValue;
};

struct FName UObject::GetEnum ( class UObject* E, int I )
{
	static UFunction* pfnGetEnum = NULL;

	if ( !pfnGetEnum )
		pfnGetEnum = UObject::FindObject< UFunction >( "Function Core.Object.GetEnum" );

	UObject_execGetEnum_Parms GetEnum_Parms;
	GetEnum_Parms.E = E;
	GetEnum_Parms.I = I;

	pfnGetEnum->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetEnum, &GetEnum_Parms, NULL );
	pfnGetEnum->FunctionFlags |= 0x400;

	return GetEnum_Parms.ReturnValue;
};

void UObject::Disable ( struct FName ProbeFunc )
{
	static UFunction* pfnDisable = NULL;

	if ( !pfnDisable )
		pfnDisable = UObject::FindObject< UFunction >( "Function Core.Object.Disable" );

	UObject_execDisable_Parms Disable_Parms;
	memcpy( &Disable_Parms.ProbeFunc, &ProbeFunc, 0x8 );

	WORD NativeIndex = pfnDisable->iNative;
	pfnDisable->iNative = 0;

	pfnDisable->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDisable, &Disable_Parms, NULL );
	pfnDisable->FunctionFlags |= 0x400;

	pfnDisable->iNative = NativeIndex;
};

void UObject::Enable ( struct FName ProbeFunc )
{
	static UFunction* pfnEnable = NULL;

	if ( !pfnEnable )
		pfnEnable = UObject::FindObject< UFunction >( "Function Core.Object.Enable" );

	UObject_execEnable_Parms Enable_Parms;
	memcpy( &Enable_Parms.ProbeFunc, &ProbeFunc, 0x8 );

	WORD NativeIndex = pfnEnable->iNative;
	pfnEnable->iNative = 0;

	pfnEnable->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEnable, &Enable_Parms, NULL );
	pfnEnable->FunctionFlags |= 0x400;

	pfnEnable->iNative = NativeIndex;
};

void UObject::eventContinuedState ()
{
	static UFunction* pfnContinuedState = NULL;

	if ( !pfnContinuedState )
		pfnContinuedState = UObject::FindObject< UFunction >( "Function Core.Object.ContinuedState" );

	UObject_eventContinuedState_Parms ContinuedState_Parms;

	this->ProcessEvent( pfnContinuedState, &ContinuedState_Parms, NULL );
};

void UObject::eventPausedState ()
{
	static UFunction* pfnPausedState = NULL;

	if ( !pfnPausedState )
		pfnPausedState = UObject::FindObject< UFunction >( "Function Core.Object.PausedState" );

	UObject_eventPausedState_Parms PausedState_Parms;

	this->ProcessEvent( pfnPausedState, &PausedState_Parms, NULL );
};

void UObject::eventPoppedState ()
{
	static UFunction* pfnPoppedState = NULL;

	if ( !pfnPoppedState )
		pfnPoppedState = UObject::FindObject< UFunction >( "Function Core.Object.PoppedState" );

	UObject_eventPoppedState_Parms PoppedState_Parms;

	this->ProcessEvent( pfnPoppedState, &PoppedState_Parms, NULL );
};

void UObject::eventPushedState ()
{
	static UFunction* pfnPushedState = NULL;

	if ( !pfnPushedState )
		pfnPushedState = UObject::FindObject< UFunction >( "Function Core.Object.PushedState" );

	UObject_eventPushedState_Parms PushedState_Parms;

	this->ProcessEvent( pfnPushedState, &PushedState_Parms, NULL );
};

void UObject::eventEndState ( struct FName NextStateName )
{
	static UFunction* pfnEndState = NULL;

	if ( !pfnEndState )
		pfnEndState = UObject::FindObject< UFunction >( "Function Core.Object.EndState" );

	UObject_eventEndState_Parms EndState_Parms;
	memcpy( &EndState_Parms.NextStateName, &NextStateName, 0x8 );

	this->ProcessEvent( pfnEndState, &EndState_Parms, NULL );
};

void UObject::eventBeginState ( struct FName PreviousStateName )
{
	static UFunction* pfnBeginState = NULL;

	if ( !pfnBeginState )
		pfnBeginState = UObject::FindObject< UFunction >( "Function Core.Object.BeginState" );

	UObject_eventBeginState_Parms BeginState_Parms;
	memcpy( &BeginState_Parms.PreviousStateName, &PreviousStateName, 0x8 );

	this->ProcessEvent( pfnBeginState, &BeginState_Parms, NULL );
};

void UObject::DumpStateStack ()
{
	static UFunction* pfnDumpStateStack = NULL;

	if ( !pfnDumpStateStack )
		pfnDumpStateStack = UObject::FindObject< UFunction >( "Function Core.Object.DumpStateStack" );

	UObject_execDumpStateStack_Parms DumpStateStack_Parms;

	pfnDumpStateStack->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDumpStateStack, &DumpStateStack_Parms, NULL );
	pfnDumpStateStack->FunctionFlags |= 0x400;
};

void UObject::PopState ( unsigned long bPopAll/*CPF_OptionalParm*/ )
{
	static UFunction* pfnPopState = NULL;

	if ( !pfnPopState )
		pfnPopState = UObject::FindObject< UFunction >( "Function Core.Object.PopState" );

	UObject_execPopState_Parms PopState_Parms;
	PopState_Parms.bPopAll = bPopAll;

	pfnPopState->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPopState, &PopState_Parms, NULL );
	pfnPopState->FunctionFlags |= 0x400;
};

void UObject::PushState ( struct FName NewState, struct FName NewLabel/*CPF_OptionalParm*/ )
{
	static UFunction* pfnPushState = NULL;

	if ( !pfnPushState )
		pfnPushState = UObject::FindObject< UFunction >( "Function Core.Object.PushState" );

	UObject_execPushState_Parms PushState_Parms;
	memcpy( &PushState_Parms.NewState, &NewState, 0x8 );
	memcpy( &PushState_Parms.NewLabel, &NewLabel, 0x8 );

	pfnPushState->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPushState, &PushState_Parms, NULL );
	pfnPushState->FunctionFlags |= 0x400;
};

struct FName UObject::GetStateName ()
{
	static UFunction* pfnGetStateName = NULL;

	if ( !pfnGetStateName )
		pfnGetStateName = UObject::FindObject< UFunction >( "Function Core.Object.GetStateName" );

	UObject_execGetStateName_Parms GetStateName_Parms;

	WORD NativeIndex = pfnGetStateName->iNative;
	pfnGetStateName->iNative = 0;

	pfnGetStateName->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetStateName, &GetStateName_Parms, NULL );
	pfnGetStateName->FunctionFlags |= 0x400;

	pfnGetStateName->iNative = NativeIndex;

	return GetStateName_Parms.ReturnValue;
};

bool UObject::IsChildState ( struct FName TestState, struct FName TestParentState )
{
	static UFunction* pfnIsChildState = NULL;

	if ( !pfnIsChildState )
		pfnIsChildState = UObject::FindObject< UFunction >( "Function Core.Object.IsChildState" );

	UObject_execIsChildState_Parms IsChildState_Parms;
	memcpy( &IsChildState_Parms.TestState, &TestState, 0x8 );
	memcpy( &IsChildState_Parms.TestParentState, &TestParentState, 0x8 );

	pfnIsChildState->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsChildState, &IsChildState_Parms, NULL );
	pfnIsChildState->FunctionFlags |= 0x400;

	return IsChildState_Parms.ReturnValue;
};

bool UObject::IsInState ( struct FName TestState, unsigned long bTestStateStack/*CPF_OptionalParm*/ )
{
	static UFunction* pfnIsInState = NULL;

	if ( !pfnIsInState )
		pfnIsInState = UObject::FindObject< UFunction >( "Function Core.Object.IsInState" );

	UObject_execIsInState_Parms IsInState_Parms;
	memcpy( &IsInState_Parms.TestState, &TestState, 0x8 );
	IsInState_Parms.bTestStateStack = bTestStateStack;

	WORD NativeIndex = pfnIsInState->iNative;
	pfnIsInState->iNative = 0;

	pfnIsInState->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsInState, &IsInState_Parms, NULL );
	pfnIsInState->FunctionFlags |= 0x400;

	pfnIsInState->iNative = NativeIndex;

	return IsInState_Parms.ReturnValue;
};

void UObject::GotoState ( struct FName NewState/*CPF_OptionalParm*/, struct FName Label/*CPF_OptionalParm*/, unsigned long bForceEvents/*CPF_OptionalParm*/, unsigned long bKeepStack/*CPF_OptionalParm*/ )
{
	static UFunction* pfnGotoState = NULL;

	if ( !pfnGotoState )
		pfnGotoState = UObject::FindObject< UFunction >( "Function Core.Object.GotoState" );

	UObject_execGotoState_Parms GotoState_Parms;
	memcpy( &GotoState_Parms.NewState, &NewState, 0x8 );
	memcpy( &GotoState_Parms.Label, &Label, 0x8 );
	GotoState_Parms.bForceEvents = bForceEvents;
	GotoState_Parms.bKeepStack = bKeepStack;

	WORD NativeIndex = pfnGotoState->iNative;
	pfnGotoState->iNative = 0;

	pfnGotoState->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGotoState, &GotoState_Parms, NULL );
	pfnGotoState->FunctionFlags |= 0x400;

	pfnGotoState->iNative = NativeIndex;
};

bool UObject::IsUTracing ()
{
	static UFunction* pfnIsUTracing = NULL;

	if ( !pfnIsUTracing )
		pfnIsUTracing = UObject::FindObject< UFunction >( "Function Core.Object.IsUTracing" );

	UObject_execIsUTracing_Parms IsUTracing_Parms;

	pfnIsUTracing->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsUTracing, &IsUTracing_Parms, NULL );
	pfnIsUTracing->FunctionFlags |= 0x400;

	return IsUTracing_Parms.ReturnValue;
};

void UObject::SetUTracing ( unsigned long bShouldUTrace )
{
	static UFunction* pfnSetUTracing = NULL;

	if ( !pfnSetUTracing )
		pfnSetUTracing = UObject::FindObject< UFunction >( "Function Core.Object.SetUTracing" );

	UObject_execSetUTracing_Parms SetUTracing_Parms;
	SetUTracing_Parms.bShouldUTrace = bShouldUTrace;

	pfnSetUTracing->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSetUTracing, &SetUTracing_Parms, NULL );
	pfnSetUTracing->FunctionFlags |= 0x400;
};

struct FName UObject::GetFuncName ()
{
	static UFunction* pfnGetFuncName = NULL;

	if ( !pfnGetFuncName )
		pfnGetFuncName = UObject::FindObject< UFunction >( "Function Core.Object.GetFuncName" );

	UObject_execGetFuncName_Parms GetFuncName_Parms;

	pfnGetFuncName->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetFuncName, &GetFuncName_Parms, NULL );
	pfnGetFuncName->FunctionFlags |= 0x400;

	return GetFuncName_Parms.ReturnValue;
};

void UObject::DebugBreak ()
{
	static UFunction* pfnDebugBreak = NULL;

	if ( !pfnDebugBreak )
		pfnDebugBreak = UObject::FindObject< UFunction >( "Function Core.Object.DebugBreak" );

	UObject_execDebugBreak_Parms DebugBreak_Parms;

	pfnDebugBreak->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDebugBreak, &DebugBreak_Parms, NULL );
	pfnDebugBreak->FunctionFlags |= 0x400;
};

void UObject::ScriptTrace ()
{
	static UFunction* pfnScriptTrace = NULL;

	if ( !pfnScriptTrace )
		pfnScriptTrace = UObject::FindObject< UFunction >( "Function Core.Object.ScriptTrace" );

	UObject_execScriptTrace_Parms ScriptTrace_Parms;

	pfnScriptTrace->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnScriptTrace, &ScriptTrace_Parms, NULL );
	pfnScriptTrace->FunctionFlags |= 0x400;
};

struct FString UObject::Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName )
{
	static UFunction* pfnLocalize = NULL;

	if ( !pfnLocalize )
		pfnLocalize = UObject::FindObject< UFunction >( "Function Core.Object.Localize" );

	UObject_execLocalize_Parms Localize_Parms;
	memcpy( &Localize_Parms.SectionName, &SectionName, 0xC );
	memcpy( &Localize_Parms.KeyName, &KeyName, 0xC );
	memcpy( &Localize_Parms.PackageName, &PackageName, 0xC );

	pfnLocalize->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLocalize, &Localize_Parms, NULL );
	pfnLocalize->FunctionFlags |= 0x400;

	return Localize_Parms.ReturnValue;
};

void UObject::WarnInternal ( struct FString S )
{
	static UFunction* pfnWarnInternal = NULL;

	if ( !pfnWarnInternal )
		pfnWarnInternal = UObject::FindObject< UFunction >( "Function Core.Object.WarnInternal" );

	UObject_execWarnInternal_Parms WarnInternal_Parms;
	memcpy( &WarnInternal_Parms.S, &S, 0xC );

	WORD NativeIndex = pfnWarnInternal->iNative;
	pfnWarnInternal->iNative = 0;

	pfnWarnInternal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnWarnInternal, &WarnInternal_Parms, NULL );
	pfnWarnInternal->FunctionFlags |= 0x400;

	pfnWarnInternal->iNative = NativeIndex;
};

void UObject::LogInternal ( struct FString S, struct FName Tag/*CPF_OptionalParm*/ )
{
	static UFunction* pfnLogInternal = NULL;

	if ( !pfnLogInternal )
		pfnLogInternal = UObject::FindObject< UFunction >( "Function Core.Object.LogInternal" );

	UObject_execLogInternal_Parms LogInternal_Parms;
	memcpy( &LogInternal_Parms.S, &S, 0xC );
	memcpy( &LogInternal_Parms.Tag, &Tag, 0x8 );

	WORD NativeIndex = pfnLogInternal->iNative;
	pfnLogInternal->iNative = 0;

	pfnLogInternal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLogInternal, &LogInternal_Parms, NULL );
	pfnLogInternal->FunctionFlags |= 0x400;

	pfnLogInternal->iNative = NativeIndex;
};

struct FLinearColor UObject::Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B )
{
	static UFunction* pfnSubtract_LinearColorLinearColor = NULL;

	if ( !pfnSubtract_LinearColorLinearColor )
		pfnSubtract_LinearColorLinearColor = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_LinearColorLinearColor" );

	UObject_execSubtract_LinearColorLinearColor_Parms Subtract_LinearColorLinearColor_Parms;
	memcpy( &Subtract_LinearColorLinearColor_Parms.A, &A, 0x10 );
	memcpy( &Subtract_LinearColorLinearColor_Parms.B, &B, 0x10 );

	this->ProcessEvent( pfnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Parms, NULL );

	return Subtract_LinearColorLinearColor_Parms.ReturnValue;
};

struct FLinearColor UObject::Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult )
{
	static UFunction* pfnMultiply_LinearColorFloat = NULL;

	if ( !pfnMultiply_LinearColorFloat )
		pfnMultiply_LinearColorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_LinearColorFloat" );

	UObject_execMultiply_LinearColorFloat_Parms Multiply_LinearColorFloat_Parms;
	memcpy( &Multiply_LinearColorFloat_Parms.LC, &LC, 0x10 );
	Multiply_LinearColorFloat_Parms.Mult = Mult;

	this->ProcessEvent( pfnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Parms, NULL );

	return Multiply_LinearColorFloat_Parms.ReturnValue;
};

struct FLinearColor UObject::ColorToLinearColor ( struct FColor OldColor )
{
	static UFunction* pfnColorToLinearColor = NULL;

	if ( !pfnColorToLinearColor )
		pfnColorToLinearColor = UObject::FindObject< UFunction >( "Function Core.Object.ColorToLinearColor" );

	UObject_execColorToLinearColor_Parms ColorToLinearColor_Parms;
	memcpy( &ColorToLinearColor_Parms.OldColor, &OldColor, 0x4 );

	this->ProcessEvent( pfnColorToLinearColor, &ColorToLinearColor_Parms, NULL );

	return ColorToLinearColor_Parms.ReturnValue;
};

struct FLinearColor UObject::MakeLinearColor ( float R, float G, float B, float A )
{
	static UFunction* pfnMakeLinearColor = NULL;

	if ( !pfnMakeLinearColor )
		pfnMakeLinearColor = UObject::FindObject< UFunction >( "Function Core.Object.MakeLinearColor" );

	UObject_execMakeLinearColor_Parms MakeLinearColor_Parms;
	MakeLinearColor_Parms.R = R;
	MakeLinearColor_Parms.G = G;
	MakeLinearColor_Parms.B = B;
	MakeLinearColor_Parms.A = A;

	this->ProcessEvent( pfnMakeLinearColor, &MakeLinearColor_Parms, NULL );

	return MakeLinearColor_Parms.ReturnValue;
};

struct FColor UObject::MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A/*CPF_OptionalParm*/ )
{
	static UFunction* pfnMakeColor = NULL;

	if ( !pfnMakeColor )
		pfnMakeColor = UObject::FindObject< UFunction >( "Function Core.Object.MakeColor" );

	UObject_execMakeColor_Parms MakeColor_Parms;
	MakeColor_Parms.R = R;
	MakeColor_Parms.G = G;
	MakeColor_Parms.B = B;
	MakeColor_Parms.A = A;

	this->ProcessEvent( pfnMakeColor, &MakeColor_Parms, NULL );

	return MakeColor_Parms.ReturnValue;
};

struct FColor UObject::Add_ColorColor ( struct FColor A, struct FColor B )
{
	static UFunction* pfnAdd_ColorColor = NULL;

	if ( !pfnAdd_ColorColor )
		pfnAdd_ColorColor = UObject::FindObject< UFunction >( "Function Core.Object.Add_ColorColor" );

	UObject_execAdd_ColorColor_Parms Add_ColorColor_Parms;
	memcpy( &Add_ColorColor_Parms.A, &A, 0x4 );
	memcpy( &Add_ColorColor_Parms.B, &B, 0x4 );

	this->ProcessEvent( pfnAdd_ColorColor, &Add_ColorColor_Parms, NULL );

	return Add_ColorColor_Parms.ReturnValue;
};

struct FColor UObject::Multiply_ColorFloat ( struct FColor A, float B )
{
	static UFunction* pfnMultiply_ColorFloat = NULL;

	if ( !pfnMultiply_ColorFloat )
		pfnMultiply_ColorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_ColorFloat" );

	UObject_execMultiply_ColorFloat_Parms Multiply_ColorFloat_Parms;
	memcpy( &Multiply_ColorFloat_Parms.A, &A, 0x4 );
	Multiply_ColorFloat_Parms.B = B;

	this->ProcessEvent( pfnMultiply_ColorFloat, &Multiply_ColorFloat_Parms, NULL );

	return Multiply_ColorFloat_Parms.ReturnValue;
};

struct FColor UObject::Multiply_FloatColor ( float A, struct FColor B )
{
	static UFunction* pfnMultiply_FloatColor = NULL;

	if ( !pfnMultiply_FloatColor )
		pfnMultiply_FloatColor = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_FloatColor" );

	UObject_execMultiply_FloatColor_Parms Multiply_FloatColor_Parms;
	Multiply_FloatColor_Parms.A = A;
	memcpy( &Multiply_FloatColor_Parms.B, &B, 0x4 );

	this->ProcessEvent( pfnMultiply_FloatColor, &Multiply_FloatColor_Parms, NULL );

	return Multiply_FloatColor_Parms.ReturnValue;
};

struct FColor UObject::Subtract_ColorColor ( struct FColor A, struct FColor B )
{
	static UFunction* pfnSubtract_ColorColor = NULL;

	if ( !pfnSubtract_ColorColor )
		pfnSubtract_ColorColor = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_ColorColor" );

	UObject_execSubtract_ColorColor_Parms Subtract_ColorColor_Parms;
	memcpy( &Subtract_ColorColor_Parms.A, &A, 0x4 );
	memcpy( &Subtract_ColorColor_Parms.B, &B, 0x4 );

	this->ProcessEvent( pfnSubtract_ColorColor, &Subtract_ColorColor_Parms, NULL );

	return Subtract_ColorColor_Parms.ReturnValue;
};

struct FVector2D UObject::vect2d ( float InX, float InY )
{
	static UFunction* pfnvect2d = NULL;

	if ( !pfnvect2d )
		pfnvect2d = UObject::FindObject< UFunction >( "Function Core.Object.vect2d" );

	UObject_execvect2d_Parms vect2d_Parms;
	vect2d_Parms.InX = InX;
	vect2d_Parms.InY = InY;

	this->ProcessEvent( pfnvect2d, &vect2d_Parms, NULL );

	return vect2d_Parms.ReturnValue;
};

float UObject::GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value )
{
	static UFunction* pfnGetMappedRangeValue = NULL;

	if ( !pfnGetMappedRangeValue )
		pfnGetMappedRangeValue = UObject::FindObject< UFunction >( "Function Core.Object.GetMappedRangeValue" );

	UObject_execGetMappedRangeValue_Parms GetMappedRangeValue_Parms;
	memcpy( &GetMappedRangeValue_Parms.InputRange, &InputRange, 0x8 );
	memcpy( &GetMappedRangeValue_Parms.OutputRange, &OutputRange, 0x8 );
	GetMappedRangeValue_Parms.Value = Value;

	this->ProcessEvent( pfnGetMappedRangeValue, &GetMappedRangeValue_Parms, NULL );

	return GetMappedRangeValue_Parms.ReturnValue;
};

float UObject::GetRangePctByValue ( struct FVector2D Range, float Value )
{
	static UFunction* pfnGetRangePctByValue = NULL;

	if ( !pfnGetRangePctByValue )
		pfnGetRangePctByValue = UObject::FindObject< UFunction >( "Function Core.Object.GetRangePctByValue" );

	UObject_execGetRangePctByValue_Parms GetRangePctByValue_Parms;
	memcpy( &GetRangePctByValue_Parms.Range, &Range, 0x8 );
	GetRangePctByValue_Parms.Value = Value;

	this->ProcessEvent( pfnGetRangePctByValue, &GetRangePctByValue_Parms, NULL );

	return GetRangePctByValue_Parms.ReturnValue;
};

float UObject::GetRangeValueByPct ( struct FVector2D Range, float Pct )
{
	static UFunction* pfnGetRangeValueByPct = NULL;

	if ( !pfnGetRangeValueByPct )
		pfnGetRangeValueByPct = UObject::FindObject< UFunction >( "Function Core.Object.GetRangeValueByPct" );

	UObject_execGetRangeValueByPct_Parms GetRangeValueByPct_Parms;
	memcpy( &GetRangeValueByPct_Parms.Range, &Range, 0x8 );
	GetRangeValueByPct_Parms.Pct = Pct;

	this->ProcessEvent( pfnGetRangeValueByPct, &GetRangeValueByPct_Parms, NULL );

	return GetRangeValueByPct_Parms.ReturnValue;
};

struct FQuat UObject::Subtract_QuatQuat ( struct FQuat A, struct FQuat B )
{
	static UFunction* pfnSubtract_QuatQuat = NULL;

	if ( !pfnSubtract_QuatQuat )
		pfnSubtract_QuatQuat = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_QuatQuat" );

	UObject_execSubtract_QuatQuat_Parms Subtract_QuatQuat_Parms;
	memcpy( &Subtract_QuatQuat_Parms.A, &A, 0x10 );
	memcpy( &Subtract_QuatQuat_Parms.B, &B, 0x10 );

	WORD NativeIndex = pfnSubtract_QuatQuat->iNative;
	pfnSubtract_QuatQuat->iNative = 0;

	pfnSubtract_QuatQuat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_QuatQuat, &Subtract_QuatQuat_Parms, NULL );
	pfnSubtract_QuatQuat->FunctionFlags |= 0x400;

	pfnSubtract_QuatQuat->iNative = NativeIndex;

	return Subtract_QuatQuat_Parms.ReturnValue;
};

struct FQuat UObject::Add_QuatQuat ( struct FQuat A, struct FQuat B )
{
	static UFunction* pfnAdd_QuatQuat = NULL;

	if ( !pfnAdd_QuatQuat )
		pfnAdd_QuatQuat = UObject::FindObject< UFunction >( "Function Core.Object.Add_QuatQuat" );

	UObject_execAdd_QuatQuat_Parms Add_QuatQuat_Parms;
	memcpy( &Add_QuatQuat_Parms.A, &A, 0x10 );
	memcpy( &Add_QuatQuat_Parms.B, &B, 0x10 );

	WORD NativeIndex = pfnAdd_QuatQuat->iNative;
	pfnAdd_QuatQuat->iNative = 0;

	pfnAdd_QuatQuat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAdd_QuatQuat, &Add_QuatQuat_Parms, NULL );
	pfnAdd_QuatQuat->FunctionFlags |= 0x400;

	pfnAdd_QuatQuat->iNative = NativeIndex;

	return Add_QuatQuat_Parms.ReturnValue;
};

struct FQuat UObject::QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ )
{
	static UFunction* pfnQuatSlerp = NULL;

	if ( !pfnQuatSlerp )
		pfnQuatSlerp = UObject::FindObject< UFunction >( "Function Core.Object.QuatSlerp" );

	UObject_execQuatSlerp_Parms QuatSlerp_Parms;
	memcpy( &QuatSlerp_Parms.A, &A, 0x10 );
	memcpy( &QuatSlerp_Parms.B, &B, 0x10 );
	QuatSlerp_Parms.Alpha = Alpha;
	QuatSlerp_Parms.bShortestPath = bShortestPath;

	pfnQuatSlerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatSlerp, &QuatSlerp_Parms, NULL );
	pfnQuatSlerp->FunctionFlags |= 0x400;

	return QuatSlerp_Parms.ReturnValue;
};

struct FRotator UObject::QuatToRotator ( struct FQuat A )
{
	static UFunction* pfnQuatToRotator = NULL;

	if ( !pfnQuatToRotator )
		pfnQuatToRotator = UObject::FindObject< UFunction >( "Function Core.Object.QuatToRotator" );

	UObject_execQuatToRotator_Parms QuatToRotator_Parms;
	memcpy( &QuatToRotator_Parms.A, &A, 0x10 );

	pfnQuatToRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatToRotator, &QuatToRotator_Parms, NULL );
	pfnQuatToRotator->FunctionFlags |= 0x400;

	return QuatToRotator_Parms.ReturnValue;
};

struct FQuat UObject::QuatFromRotator ( struct FRotator A )
{
	static UFunction* pfnQuatFromRotator = NULL;

	if ( !pfnQuatFromRotator )
		pfnQuatFromRotator = UObject::FindObject< UFunction >( "Function Core.Object.QuatFromRotator" );

	UObject_execQuatFromRotator_Parms QuatFromRotator_Parms;
	memcpy( &QuatFromRotator_Parms.A, &A, 0xC );

	pfnQuatFromRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatFromRotator, &QuatFromRotator_Parms, NULL );
	pfnQuatFromRotator->FunctionFlags |= 0x400;

	return QuatFromRotator_Parms.ReturnValue;
};

struct FQuat UObject::QuatFromAxisAndAngle ( struct FVector Axis, float Angle )
{
	static UFunction* pfnQuatFromAxisAndAngle = NULL;

	if ( !pfnQuatFromAxisAndAngle )
		pfnQuatFromAxisAndAngle = UObject::FindObject< UFunction >( "Function Core.Object.QuatFromAxisAndAngle" );

	UObject_execQuatFromAxisAndAngle_Parms QuatFromAxisAndAngle_Parms;
	memcpy( &QuatFromAxisAndAngle_Parms.Axis, &Axis, 0xC );
	QuatFromAxisAndAngle_Parms.Angle = Angle;

	pfnQuatFromAxisAndAngle->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Parms, NULL );
	pfnQuatFromAxisAndAngle->FunctionFlags |= 0x400;

	return QuatFromAxisAndAngle_Parms.ReturnValue;
};

struct FQuat UObject::QuatFindBetween ( struct FVector A, struct FVector B )
{
	static UFunction* pfnQuatFindBetween = NULL;

	if ( !pfnQuatFindBetween )
		pfnQuatFindBetween = UObject::FindObject< UFunction >( "Function Core.Object.QuatFindBetween" );

	UObject_execQuatFindBetween_Parms QuatFindBetween_Parms;
	memcpy( &QuatFindBetween_Parms.A, &A, 0xC );
	memcpy( &QuatFindBetween_Parms.B, &B, 0xC );

	pfnQuatFindBetween->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatFindBetween, &QuatFindBetween_Parms, NULL );
	pfnQuatFindBetween->FunctionFlags |= 0x400;

	return QuatFindBetween_Parms.ReturnValue;
};

struct FVector UObject::QuatRotateVector ( struct FQuat A, struct FVector B )
{
	static UFunction* pfnQuatRotateVector = NULL;

	if ( !pfnQuatRotateVector )
		pfnQuatRotateVector = UObject::FindObject< UFunction >( "Function Core.Object.QuatRotateVector" );

	UObject_execQuatRotateVector_Parms QuatRotateVector_Parms;
	memcpy( &QuatRotateVector_Parms.A, &A, 0x10 );
	memcpy( &QuatRotateVector_Parms.B, &B, 0xC );

	pfnQuatRotateVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatRotateVector, &QuatRotateVector_Parms, NULL );
	pfnQuatRotateVector->FunctionFlags |= 0x400;

	return QuatRotateVector_Parms.ReturnValue;
};

struct FQuat UObject::QuatInvert ( struct FQuat A )
{
	static UFunction* pfnQuatInvert = NULL;

	if ( !pfnQuatInvert )
		pfnQuatInvert = UObject::FindObject< UFunction >( "Function Core.Object.QuatInvert" );

	UObject_execQuatInvert_Parms QuatInvert_Parms;
	memcpy( &QuatInvert_Parms.A, &A, 0x10 );

	pfnQuatInvert->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatInvert, &QuatInvert_Parms, NULL );
	pfnQuatInvert->FunctionFlags |= 0x400;

	return QuatInvert_Parms.ReturnValue;
};

float UObject::QuatDot ( struct FQuat A, struct FQuat B )
{
	static UFunction* pfnQuatDot = NULL;

	if ( !pfnQuatDot )
		pfnQuatDot = UObject::FindObject< UFunction >( "Function Core.Object.QuatDot" );

	UObject_execQuatDot_Parms QuatDot_Parms;
	memcpy( &QuatDot_Parms.A, &A, 0x10 );
	memcpy( &QuatDot_Parms.B, &B, 0x10 );

	pfnQuatDot->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatDot, &QuatDot_Parms, NULL );
	pfnQuatDot->FunctionFlags |= 0x400;

	return QuatDot_Parms.ReturnValue;
};

struct FQuat UObject::QuatProduct ( struct FQuat A, struct FQuat B )
{
	static UFunction* pfnQuatProduct = NULL;

	if ( !pfnQuatProduct )
		pfnQuatProduct = UObject::FindObject< UFunction >( "Function Core.Object.QuatProduct" );

	UObject_execQuatProduct_Parms QuatProduct_Parms;
	memcpy( &QuatProduct_Parms.A, &A, 0x10 );
	memcpy( &QuatProduct_Parms.B, &B, 0x10 );

	pfnQuatProduct->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnQuatProduct, &QuatProduct_Parms, NULL );
	pfnQuatProduct->FunctionFlags |= 0x400;

	return QuatProduct_Parms.ReturnValue;
};

struct FVector UObject::MatrixGetAxis ( struct FMatrix TM, unsigned char Axis )
{
	static UFunction* pfnMatrixGetAxis = NULL;

	if ( !pfnMatrixGetAxis )
		pfnMatrixGetAxis = UObject::FindObject< UFunction >( "Function Core.Object.MatrixGetAxis" );

	UObject_execMatrixGetAxis_Parms MatrixGetAxis_Parms;
	memcpy( &MatrixGetAxis_Parms.TM, &TM, 0x40 );
	MatrixGetAxis_Parms.Axis = Axis;

	pfnMatrixGetAxis->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMatrixGetAxis, &MatrixGetAxis_Parms, NULL );
	pfnMatrixGetAxis->FunctionFlags |= 0x400;

	return MatrixGetAxis_Parms.ReturnValue;
};

struct FVector UObject::MatrixGetOrigin ( struct FMatrix TM )
{
	static UFunction* pfnMatrixGetOrigin = NULL;

	if ( !pfnMatrixGetOrigin )
		pfnMatrixGetOrigin = UObject::FindObject< UFunction >( "Function Core.Object.MatrixGetOrigin" );

	UObject_execMatrixGetOrigin_Parms MatrixGetOrigin_Parms;
	memcpy( &MatrixGetOrigin_Parms.TM, &TM, 0x40 );

	pfnMatrixGetOrigin->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMatrixGetOrigin, &MatrixGetOrigin_Parms, NULL );
	pfnMatrixGetOrigin->FunctionFlags |= 0x400;

	return MatrixGetOrigin_Parms.ReturnValue;
};

struct FRotator UObject::MatrixGetRotator ( struct FMatrix TM )
{
	static UFunction* pfnMatrixGetRotator = NULL;

	if ( !pfnMatrixGetRotator )
		pfnMatrixGetRotator = UObject::FindObject< UFunction >( "Function Core.Object.MatrixGetRotator" );

	UObject_execMatrixGetRotator_Parms MatrixGetRotator_Parms;
	memcpy( &MatrixGetRotator_Parms.TM, &TM, 0x40 );

	pfnMatrixGetRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMatrixGetRotator, &MatrixGetRotator_Parms, NULL );
	pfnMatrixGetRotator->FunctionFlags |= 0x400;

	return MatrixGetRotator_Parms.ReturnValue;
};

struct FMatrix UObject::MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation )
{
	static UFunction* pfnMakeRotationTranslationMatrix = NULL;

	if ( !pfnMakeRotationTranslationMatrix )
		pfnMakeRotationTranslationMatrix = UObject::FindObject< UFunction >( "Function Core.Object.MakeRotationTranslationMatrix" );

	UObject_execMakeRotationTranslationMatrix_Parms MakeRotationTranslationMatrix_Parms;
	memcpy( &MakeRotationTranslationMatrix_Parms.Translation, &Translation, 0xC );
	memcpy( &MakeRotationTranslationMatrix_Parms.Rotation, &Rotation, 0xC );

	pfnMakeRotationTranslationMatrix->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Parms, NULL );
	pfnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;

	return MakeRotationTranslationMatrix_Parms.ReturnValue;
};

struct FVector UObject::InverseTransformNormal ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pfnInverseTransformNormal = NULL;

	if ( !pfnInverseTransformNormal )
		pfnInverseTransformNormal = UObject::FindObject< UFunction >( "Function Core.Object.InverseTransformNormal" );

	UObject_execInverseTransformNormal_Parms InverseTransformNormal_Parms;
	memcpy( &InverseTransformNormal_Parms.TM, &TM, 0x40 );
	memcpy( &InverseTransformNormal_Parms.A, &A, 0xC );

	pfnInverseTransformNormal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnInverseTransformNormal, &InverseTransformNormal_Parms, NULL );
	pfnInverseTransformNormal->FunctionFlags |= 0x400;

	return InverseTransformNormal_Parms.ReturnValue;
};

struct FVector UObject::TransformNormal ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pfnTransformNormal = NULL;

	if ( !pfnTransformNormal )
		pfnTransformNormal = UObject::FindObject< UFunction >( "Function Core.Object.TransformNormal" );

	UObject_execTransformNormal_Parms TransformNormal_Parms;
	memcpy( &TransformNormal_Parms.TM, &TM, 0x40 );
	memcpy( &TransformNormal_Parms.A, &A, 0xC );

	pfnTransformNormal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnTransformNormal, &TransformNormal_Parms, NULL );
	pfnTransformNormal->FunctionFlags |= 0x400;

	return TransformNormal_Parms.ReturnValue;
};

struct FVector UObject::InverseTransformVector ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pfnInverseTransformVector = NULL;

	if ( !pfnInverseTransformVector )
		pfnInverseTransformVector = UObject::FindObject< UFunction >( "Function Core.Object.InverseTransformVector" );

	UObject_execInverseTransformVector_Parms InverseTransformVector_Parms;
	memcpy( &InverseTransformVector_Parms.TM, &TM, 0x40 );
	memcpy( &InverseTransformVector_Parms.A, &A, 0xC );

	pfnInverseTransformVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnInverseTransformVector, &InverseTransformVector_Parms, NULL );
	pfnInverseTransformVector->FunctionFlags |= 0x400;

	return InverseTransformVector_Parms.ReturnValue;
};

struct FVector UObject::TransformVector ( struct FMatrix TM, struct FVector A )
{
	static UFunction* pfnTransformVector = NULL;

	if ( !pfnTransformVector )
		pfnTransformVector = UObject::FindObject< UFunction >( "Function Core.Object.TransformVector" );

	UObject_execTransformVector_Parms TransformVector_Parms;
	memcpy( &TransformVector_Parms.TM, &TM, 0x40 );
	memcpy( &TransformVector_Parms.A, &A, 0xC );

	pfnTransformVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnTransformVector, &TransformVector_Parms, NULL );
	pfnTransformVector->FunctionFlags |= 0x400;

	return TransformVector_Parms.ReturnValue;
};

struct FMatrix UObject::Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B )
{
	static UFunction* pfnMultiply_MatrixMatrix = NULL;

	if ( !pfnMultiply_MatrixMatrix )
		pfnMultiply_MatrixMatrix = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_MatrixMatrix" );

	UObject_execMultiply_MatrixMatrix_Parms Multiply_MatrixMatrix_Parms;
	memcpy( &Multiply_MatrixMatrix_Parms.A, &A, 0x40 );
	memcpy( &Multiply_MatrixMatrix_Parms.B, &B, 0x40 );

	pfnMultiply_MatrixMatrix->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Parms, NULL );
	pfnMultiply_MatrixMatrix->FunctionFlags |= 0x400;

	return Multiply_MatrixMatrix_Parms.ReturnValue;
};

bool UObject::NotEqual_NameName ( struct FName A, struct FName B )
{
	static UFunction* pfnNotEqual_NameName = NULL;

	if ( !pfnNotEqual_NameName )
		pfnNotEqual_NameName = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_NameName" );

	UObject_execNotEqual_NameName_Parms NotEqual_NameName_Parms;
	memcpy( &NotEqual_NameName_Parms.A, &A, 0x8 );
	memcpy( &NotEqual_NameName_Parms.B, &B, 0x8 );

	WORD NativeIndex = pfnNotEqual_NameName->iNative;
	pfnNotEqual_NameName->iNative = 0;

	pfnNotEqual_NameName->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_NameName, &NotEqual_NameName_Parms, NULL );
	pfnNotEqual_NameName->FunctionFlags |= 0x400;

	pfnNotEqual_NameName->iNative = NativeIndex;

	return NotEqual_NameName_Parms.ReturnValue;
};

bool UObject::EqualEqual_NameName ( struct FName A, struct FName B )
{
	static UFunction* pfnEqualEqual_NameName = NULL;

	if ( !pfnEqualEqual_NameName )
		pfnEqualEqual_NameName = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_NameName" );

	UObject_execEqualEqual_NameName_Parms EqualEqual_NameName_Parms;
	memcpy( &EqualEqual_NameName_Parms.A, &A, 0x8 );
	memcpy( &EqualEqual_NameName_Parms.B, &B, 0x8 );

	WORD NativeIndex = pfnEqualEqual_NameName->iNative;
	pfnEqualEqual_NameName->iNative = 0;

	pfnEqualEqual_NameName->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_NameName, &EqualEqual_NameName_Parms, NULL );
	pfnEqualEqual_NameName->FunctionFlags |= 0x400;

	pfnEqualEqual_NameName->iNative = NativeIndex;

	return EqualEqual_NameName_Parms.ReturnValue;
};

bool UObject::IsA ( struct FName ClassName )
{
	static UFunction* pfnIsA = NULL;

	if ( !pfnIsA )
		pfnIsA = UObject::FindObject< UFunction >( "Function Core.Object.IsA" );

	UObject_execIsA_Parms IsA_Parms;
	memcpy( &IsA_Parms.ClassName, &ClassName, 0x8 );

	WORD NativeIndex = pfnIsA->iNative;
	pfnIsA->iNative = 0;

	pfnIsA->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsA, &IsA_Parms, NULL );
	pfnIsA->FunctionFlags |= 0x400;

	pfnIsA->iNative = NativeIndex;

	return IsA_Parms.ReturnValue;
};

bool UObject::ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass )
{
	static UFunction* pfnClassIsChildOf = NULL;

	if ( !pfnClassIsChildOf )
		pfnClassIsChildOf = UObject::FindObject< UFunction >( "Function Core.Object.ClassIsChildOf" );

	UObject_execClassIsChildOf_Parms ClassIsChildOf_Parms;
	ClassIsChildOf_Parms.TestClass = TestClass;
	ClassIsChildOf_Parms.ParentClass = ParentClass;

	WORD NativeIndex = pfnClassIsChildOf->iNative;
	pfnClassIsChildOf->iNative = 0;

	pfnClassIsChildOf->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnClassIsChildOf, &ClassIsChildOf_Parms, NULL );
	pfnClassIsChildOf->FunctionFlags |= 0x400;

	pfnClassIsChildOf->iNative = NativeIndex;

	return ClassIsChildOf_Parms.ReturnValue;
};

bool UObject::NotEqual_InterfaceInterface ()
{
	static UFunction* pfnNotEqual_InterfaceInterface = NULL;

	if ( !pfnNotEqual_InterfaceInterface )
		pfnNotEqual_InterfaceInterface = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_InterfaceInterface" );

	UObject_execNotEqual_InterfaceInterface_Parms NotEqual_InterfaceInterface_Parms;

	pfnNotEqual_InterfaceInterface->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Parms, NULL );
	pfnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return NotEqual_InterfaceInterface_Parms.ReturnValue;
};

bool UObject::EqualEqual_InterfaceInterface ()
{
	static UFunction* pfnEqualEqual_InterfaceInterface = NULL;

	if ( !pfnEqualEqual_InterfaceInterface )
		pfnEqualEqual_InterfaceInterface = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_InterfaceInterface" );

	UObject_execEqualEqual_InterfaceInterface_Parms EqualEqual_InterfaceInterface_Parms;

	pfnEqualEqual_InterfaceInterface->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Parms, NULL );
	pfnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return EqualEqual_InterfaceInterface_Parms.ReturnValue;
};

bool UObject::NotEqual_ObjectObject ( class UObject* A, class UObject* B )
{
	static UFunction* pfnNotEqual_ObjectObject = NULL;

	if ( !pfnNotEqual_ObjectObject )
		pfnNotEqual_ObjectObject = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_ObjectObject" );

	UObject_execNotEqual_ObjectObject_Parms NotEqual_ObjectObject_Parms;
	NotEqual_ObjectObject_Parms.A = A;
	NotEqual_ObjectObject_Parms.B = B;

	WORD NativeIndex = pfnNotEqual_ObjectObject->iNative;
	pfnNotEqual_ObjectObject->iNative = 0;

	pfnNotEqual_ObjectObject->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_ObjectObject, &NotEqual_ObjectObject_Parms, NULL );
	pfnNotEqual_ObjectObject->FunctionFlags |= 0x400;

	pfnNotEqual_ObjectObject->iNative = NativeIndex;

	return NotEqual_ObjectObject_Parms.ReturnValue;
};

bool UObject::EqualEqual_ObjectObject ( class UObject* A, class UObject* B )
{
	static UFunction* pfnEqualEqual_ObjectObject = NULL;

	if ( !pfnEqualEqual_ObjectObject )
		pfnEqualEqual_ObjectObject = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_ObjectObject" );

	UObject_execEqualEqual_ObjectObject_Parms EqualEqual_ObjectObject_Parms;
	EqualEqual_ObjectObject_Parms.A = A;
	EqualEqual_ObjectObject_Parms.B = B;

	WORD NativeIndex = pfnEqualEqual_ObjectObject->iNative;
	pfnEqualEqual_ObjectObject->iNative = 0;

	pfnEqualEqual_ObjectObject->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Parms, NULL );
	pfnEqualEqual_ObjectObject->FunctionFlags |= 0x400;

	pfnEqualEqual_ObjectObject->iNative = NativeIndex;

	return EqualEqual_ObjectObject_Parms.ReturnValue;
};

struct FString UObject::PathName ( class UObject* CheckObject )
{
	static UFunction* pfnPathName = NULL;

	if ( !pfnPathName )
		pfnPathName = UObject::FindObject< UFunction >( "Function Core.Object.PathName" );

	UObject_execPathName_Parms PathName_Parms;
	PathName_Parms.CheckObject = CheckObject;

	pfnPathName->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPathName, &PathName_Parms, NULL );
	pfnPathName->FunctionFlags |= 0x400;

	return PathName_Parms.ReturnValue;
};

TArray< struct FString > UObject::SplitString ( struct FString Source, struct FString Delimiter/*CPF_OptionalParm*/, unsigned long bCullEmpty/*CPF_OptionalParm*/ )
{
	static UFunction* pfnSplitString = NULL;

	if ( !pfnSplitString )
		pfnSplitString = UObject::FindObject< UFunction >( "Function Core.Object.SplitString" );

	UObject_execSplitString_Parms SplitString_Parms;
	memcpy( &SplitString_Parms.Source, &Source, 0xC );
	memcpy( &SplitString_Parms.Delimiter, &Delimiter, 0xC );
	SplitString_Parms.bCullEmpty = bCullEmpty;

	this->ProcessEvent( pfnSplitString, &SplitString_Parms, NULL );

	return SplitString_Parms.ReturnValue;
};

void UObject::ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces )
{
	static UFunction* pfnParseStringIntoArray = NULL;

	if ( !pfnParseStringIntoArray )
		pfnParseStringIntoArray = UObject::FindObject< UFunction >( "Function Core.Object.ParseStringIntoArray" );

	UObject_execParseStringIntoArray_Parms ParseStringIntoArray_Parms;
	memcpy( &ParseStringIntoArray_Parms.BaseString, &BaseString, 0xC );
	memcpy( &ParseStringIntoArray_Parms.delim, &delim, 0xC );
	ParseStringIntoArray_Parms.bCullEmpty = bCullEmpty;

	pfnParseStringIntoArray->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnParseStringIntoArray, &ParseStringIntoArray_Parms, NULL );
	pfnParseStringIntoArray->FunctionFlags |= 0x400;

	if ( Pieces )
		memcpy( Pieces, &ParseStringIntoArray_Parms.Pieces, 0xC ); // CPF_OutParm
};

void UObject::JoinArray ( TArray< struct FString > StringArray, struct FString delim/*CPF_OptionalParm*/, unsigned long bIgnoreBlanks/*CPF_OptionalParm*/, struct FString* out_Result )
{
	static UFunction* pfnJoinArray = NULL;

	if ( !pfnJoinArray )
		pfnJoinArray = UObject::FindObject< UFunction >( "Function Core.Object.JoinArray" );

	UObject_execJoinArray_Parms JoinArray_Parms;
	memcpy( &JoinArray_Parms.StringArray, &StringArray, 0xC );
	memcpy( &JoinArray_Parms.delim, &delim, 0xC );
	JoinArray_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent( pfnJoinArray, &JoinArray_Parms, NULL );

	if ( out_Result )
		memcpy( out_Result, &JoinArray_Parms.out_Result, 0xC ); // CPF_OutParm
};

struct FString UObject::GetRightMost ( struct FString Text )
{
	static UFunction* pfnGetRightMost = NULL;

	if ( !pfnGetRightMost )
		pfnGetRightMost = UObject::FindObject< UFunction >( "Function Core.Object.GetRightMost" );

	UObject_execGetRightMost_Parms GetRightMost_Parms;
	memcpy( &GetRightMost_Parms.Text, &Text, 0xC );

	this->ProcessEvent( pfnGetRightMost, &GetRightMost_Parms, NULL );

	return GetRightMost_Parms.ReturnValue;
};

struct FString UObject::Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr/*CPF_OptionalParm*/ )
{
	static UFunction* pfnSplit = NULL;

	if ( !pfnSplit )
		pfnSplit = UObject::FindObject< UFunction >( "Function Core.Object.Split" );

	UObject_execSplit_Parms Split_Parms;
	memcpy( &Split_Parms.Text, &Text, 0xC );
	memcpy( &Split_Parms.SplitStr, &SplitStr, 0xC );
	Split_Parms.bOmitSplitStr = bOmitSplitStr;

	this->ProcessEvent( pfnSplit, &Split_Parms, NULL );

	return Split_Parms.ReturnValue;
};

struct FString UObject::Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive/*CPF_OptionalParm*/ )
{
	static UFunction* pfnRepl = NULL;

	if ( !pfnRepl )
		pfnRepl = UObject::FindObject< UFunction >( "Function Core.Object.Repl" );

	UObject_execRepl_Parms Repl_Parms;
	memcpy( &Repl_Parms.Src, &Src, 0xC );
	memcpy( &Repl_Parms.Match, &Match, 0xC );
	memcpy( &Repl_Parms.With, &With, 0xC );
	Repl_Parms.bCaseSensitive = bCaseSensitive;

	WORD NativeIndex = pfnRepl->iNative;
	pfnRepl->iNative = 0;

	pfnRepl->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRepl, &Repl_Parms, NULL );
	pfnRepl->FunctionFlags |= 0x400;

	pfnRepl->iNative = NativeIndex;

	return Repl_Parms.ReturnValue;
};

int UObject::Asc ( struct FString S )
{
	static UFunction* pfnAsc = NULL;

	if ( !pfnAsc )
		pfnAsc = UObject::FindObject< UFunction >( "Function Core.Object.Asc" );

	UObject_execAsc_Parms Asc_Parms;
	memcpy( &Asc_Parms.S, &S, 0xC );

	WORD NativeIndex = pfnAsc->iNative;
	pfnAsc->iNative = 0;

	pfnAsc->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAsc, &Asc_Parms, NULL );
	pfnAsc->FunctionFlags |= 0x400;

	pfnAsc->iNative = NativeIndex;

	return Asc_Parms.ReturnValue;
};

struct FString UObject::Chr ( int I )
{
	static UFunction* pfnChr = NULL;

	if ( !pfnChr )
		pfnChr = UObject::FindObject< UFunction >( "Function Core.Object.Chr" );

	UObject_execChr_Parms Chr_Parms;
	Chr_Parms.I = I;

	WORD NativeIndex = pfnChr->iNative;
	pfnChr->iNative = 0;

	pfnChr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnChr, &Chr_Parms, NULL );
	pfnChr->FunctionFlags |= 0x400;

	pfnChr->iNative = NativeIndex;

	return Chr_Parms.ReturnValue;
};

struct FString UObject::Locs ( struct FString S )
{
	static UFunction* pfnLocs = NULL;

	if ( !pfnLocs )
		pfnLocs = UObject::FindObject< UFunction >( "Function Core.Object.Locs" );

	UObject_execLocs_Parms Locs_Parms;
	memcpy( &Locs_Parms.S, &S, 0xC );

	WORD NativeIndex = pfnLocs->iNative;
	pfnLocs->iNative = 0;

	pfnLocs->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLocs, &Locs_Parms, NULL );
	pfnLocs->FunctionFlags |= 0x400;

	pfnLocs->iNative = NativeIndex;

	return Locs_Parms.ReturnValue;
};

struct FString UObject::Caps ( struct FString S )
{
	static UFunction* pfnCaps = NULL;

	if ( !pfnCaps )
		pfnCaps = UObject::FindObject< UFunction >( "Function Core.Object.Caps" );

	UObject_execCaps_Parms Caps_Parms;
	memcpy( &Caps_Parms.S, &S, 0xC );

	WORD NativeIndex = pfnCaps->iNative;
	pfnCaps->iNative = 0;

	pfnCaps->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnCaps, &Caps_Parms, NULL );
	pfnCaps->FunctionFlags |= 0x400;

	pfnCaps->iNative = NativeIndex;

	return Caps_Parms.ReturnValue;
};

struct FString UObject::Right ( struct FString S, int I )
{
	static UFunction* pfnRight = NULL;

	if ( !pfnRight )
		pfnRight = UObject::FindObject< UFunction >( "Function Core.Object.Right" );

	UObject_execRight_Parms Right_Parms;
	memcpy( &Right_Parms.S, &S, 0xC );
	Right_Parms.I = I;

	WORD NativeIndex = pfnRight->iNative;
	pfnRight->iNative = 0;

	pfnRight->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRight, &Right_Parms, NULL );
	pfnRight->FunctionFlags |= 0x400;

	pfnRight->iNative = NativeIndex;

	return Right_Parms.ReturnValue;
};

struct FString UObject::Left ( struct FString S, int I )
{
	static UFunction* pfnLeft = NULL;

	if ( !pfnLeft )
		pfnLeft = UObject::FindObject< UFunction >( "Function Core.Object.Left" );

	UObject_execLeft_Parms Left_Parms;
	memcpy( &Left_Parms.S, &S, 0xC );
	Left_Parms.I = I;

	WORD NativeIndex = pfnLeft->iNative;
	pfnLeft->iNative = 0;

	pfnLeft->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLeft, &Left_Parms, NULL );
	pfnLeft->FunctionFlags |= 0x400;

	pfnLeft->iNative = NativeIndex;

	return Left_Parms.ReturnValue;
};

struct FString UObject::Mid ( struct FString S, int I, int J/*CPF_OptionalParm*/ )
{
	static UFunction* pfnMid = NULL;

	if ( !pfnMid )
		pfnMid = UObject::FindObject< UFunction >( "Function Core.Object.Mid" );

	UObject_execMid_Parms Mid_Parms;
	memcpy( &Mid_Parms.S, &S, 0xC );
	Mid_Parms.I = I;
	Mid_Parms.J = J;

	WORD NativeIndex = pfnMid->iNative;
	pfnMid->iNative = 0;

	pfnMid->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMid, &Mid_Parms, NULL );
	pfnMid->FunctionFlags |= 0x400;

	pfnMid->iNative = NativeIndex;

	return Mid_Parms.ReturnValue;
};

int UObject::InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight/*CPF_OptionalParm*/ )
{
	static UFunction* pfnInStr = NULL;

	if ( !pfnInStr )
		pfnInStr = UObject::FindObject< UFunction >( "Function Core.Object.InStr" );

	UObject_execInStr_Parms InStr_Parms;
	memcpy( &InStr_Parms.S, &S, 0xC );
	memcpy( &InStr_Parms.T, &T, 0xC );
	InStr_Parms.bSearchFromRight = bSearchFromRight;

	WORD NativeIndex = pfnInStr->iNative;
	pfnInStr->iNative = 0;

	pfnInStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnInStr, &InStr_Parms, NULL );
	pfnInStr->FunctionFlags |= 0x400;

	pfnInStr->iNative = NativeIndex;

	return InStr_Parms.ReturnValue;
};

int UObject::Len ( struct FString S )
{
	static UFunction* pfnLen = NULL;

	if ( !pfnLen )
		pfnLen = UObject::FindObject< UFunction >( "Function Core.Object.Len" );

	UObject_execLen_Parms Len_Parms;
	memcpy( &Len_Parms.S, &S, 0xC );

	WORD NativeIndex = pfnLen->iNative;
	pfnLen->iNative = 0;

	pfnLen->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLen, &Len_Parms, NULL );
	pfnLen->FunctionFlags |= 0x400;

	pfnLen->iNative = NativeIndex;

	return Len_Parms.ReturnValue;
};

struct FString UObject::SubtractEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pfnSubtractEqual_StrStr = NULL;

	if ( !pfnSubtractEqual_StrStr )
		pfnSubtractEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_StrStr" );

	UObject_execSubtractEqual_StrStr_Parms SubtractEqual_StrStr_Parms;
	memcpy( &SubtractEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnSubtractEqual_StrStr->iNative;
	pfnSubtractEqual_StrStr->iNative = 0;

	pfnSubtractEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_StrStr, &SubtractEqual_StrStr_Parms, NULL );
	pfnSubtractEqual_StrStr->FunctionFlags |= 0x400;

	pfnSubtractEqual_StrStr->iNative = NativeIndex;

	if ( A )
		memcpy( A, &SubtractEqual_StrStr_Parms.A, 0xC ); // CPF_OutParm

	return SubtractEqual_StrStr_Parms.ReturnValue;
};

struct FString UObject::AtEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pfnAtEqual_StrStr = NULL;

	if ( !pfnAtEqual_StrStr )
		pfnAtEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.AtEqual_StrStr" );

	UObject_execAtEqual_StrStr_Parms AtEqual_StrStr_Parms;
	memcpy( &AtEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAtEqual_StrStr->iNative;
	pfnAtEqual_StrStr->iNative = 0;

	pfnAtEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAtEqual_StrStr, &AtEqual_StrStr_Parms, NULL );
	pfnAtEqual_StrStr->FunctionFlags |= 0x400;

	pfnAtEqual_StrStr->iNative = NativeIndex;

	if ( A )
		memcpy( A, &AtEqual_StrStr_Parms.A, 0xC ); // CPF_OutParm

	return AtEqual_StrStr_Parms.ReturnValue;
};

struct FString UObject::ConcatEqual_StrStr ( struct FString B, struct FString* A )
{
	static UFunction* pfnConcatEqual_StrStr = NULL;

	if ( !pfnConcatEqual_StrStr )
		pfnConcatEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.ConcatEqual_StrStr" );

	UObject_execConcatEqual_StrStr_Parms ConcatEqual_StrStr_Parms;
	memcpy( &ConcatEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnConcatEqual_StrStr->iNative;
	pfnConcatEqual_StrStr->iNative = 0;

	pfnConcatEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnConcatEqual_StrStr, &ConcatEqual_StrStr_Parms, NULL );
	pfnConcatEqual_StrStr->FunctionFlags |= 0x400;

	pfnConcatEqual_StrStr->iNative = NativeIndex;

	if ( A )
		memcpy( A, &ConcatEqual_StrStr_Parms.A, 0xC ); // CPF_OutParm

	return ConcatEqual_StrStr_Parms.ReturnValue;
};

bool UObject::ComplementEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnComplementEqual_StrStr = NULL;

	if ( !pfnComplementEqual_StrStr )
		pfnComplementEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.ComplementEqual_StrStr" );

	UObject_execComplementEqual_StrStr_Parms ComplementEqual_StrStr_Parms;
	memcpy( &ComplementEqual_StrStr_Parms.A, &A, 0xC );
	memcpy( &ComplementEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnComplementEqual_StrStr->iNative;
	pfnComplementEqual_StrStr->iNative = 0;

	pfnComplementEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnComplementEqual_StrStr, &ComplementEqual_StrStr_Parms, NULL );
	pfnComplementEqual_StrStr->FunctionFlags |= 0x400;

	pfnComplementEqual_StrStr->iNative = NativeIndex;

	return ComplementEqual_StrStr_Parms.ReturnValue;
};

bool UObject::NotEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnNotEqual_StrStr = NULL;

	if ( !pfnNotEqual_StrStr )
		pfnNotEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_StrStr" );

	UObject_execNotEqual_StrStr_Parms NotEqual_StrStr_Parms;
	memcpy( &NotEqual_StrStr_Parms.A, &A, 0xC );
	memcpy( &NotEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnNotEqual_StrStr->iNative;
	pfnNotEqual_StrStr->iNative = 0;

	pfnNotEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_StrStr, &NotEqual_StrStr_Parms, NULL );
	pfnNotEqual_StrStr->FunctionFlags |= 0x400;

	pfnNotEqual_StrStr->iNative = NativeIndex;

	return NotEqual_StrStr_Parms.ReturnValue;
};

bool UObject::EqualEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnEqualEqual_StrStr = NULL;

	if ( !pfnEqualEqual_StrStr )
		pfnEqualEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_StrStr" );

	UObject_execEqualEqual_StrStr_Parms EqualEqual_StrStr_Parms;
	memcpy( &EqualEqual_StrStr_Parms.A, &A, 0xC );
	memcpy( &EqualEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnEqualEqual_StrStr->iNative;
	pfnEqualEqual_StrStr->iNative = 0;

	pfnEqualEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_StrStr, &EqualEqual_StrStr_Parms, NULL );
	pfnEqualEqual_StrStr->FunctionFlags |= 0x400;

	pfnEqualEqual_StrStr->iNative = NativeIndex;

	return EqualEqual_StrStr_Parms.ReturnValue;
};

bool UObject::GreaterEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnGreaterEqual_StrStr = NULL;

	if ( !pfnGreaterEqual_StrStr )
		pfnGreaterEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.GreaterEqual_StrStr" );

	UObject_execGreaterEqual_StrStr_Parms GreaterEqual_StrStr_Parms;
	memcpy( &GreaterEqual_StrStr_Parms.A, &A, 0xC );
	memcpy( &GreaterEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnGreaterEqual_StrStr->iNative;
	pfnGreaterEqual_StrStr->iNative = 0;

	pfnGreaterEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterEqual_StrStr, &GreaterEqual_StrStr_Parms, NULL );
	pfnGreaterEqual_StrStr->FunctionFlags |= 0x400;

	pfnGreaterEqual_StrStr->iNative = NativeIndex;

	return GreaterEqual_StrStr_Parms.ReturnValue;
};

bool UObject::LessEqual_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnLessEqual_StrStr = NULL;

	if ( !pfnLessEqual_StrStr )
		pfnLessEqual_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.LessEqual_StrStr" );

	UObject_execLessEqual_StrStr_Parms LessEqual_StrStr_Parms;
	memcpy( &LessEqual_StrStr_Parms.A, &A, 0xC );
	memcpy( &LessEqual_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnLessEqual_StrStr->iNative;
	pfnLessEqual_StrStr->iNative = 0;

	pfnLessEqual_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLessEqual_StrStr, &LessEqual_StrStr_Parms, NULL );
	pfnLessEqual_StrStr->FunctionFlags |= 0x400;

	pfnLessEqual_StrStr->iNative = NativeIndex;

	return LessEqual_StrStr_Parms.ReturnValue;
};

bool UObject::Greater_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnGreater_StrStr = NULL;

	if ( !pfnGreater_StrStr )
		pfnGreater_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.Greater_StrStr" );

	UObject_execGreater_StrStr_Parms Greater_StrStr_Parms;
	memcpy( &Greater_StrStr_Parms.A, &A, 0xC );
	memcpy( &Greater_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnGreater_StrStr->iNative;
	pfnGreater_StrStr->iNative = 0;

	pfnGreater_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreater_StrStr, &Greater_StrStr_Parms, NULL );
	pfnGreater_StrStr->FunctionFlags |= 0x400;

	pfnGreater_StrStr->iNative = NativeIndex;

	return Greater_StrStr_Parms.ReturnValue;
};

bool UObject::Less_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnLess_StrStr = NULL;

	if ( !pfnLess_StrStr )
		pfnLess_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.Less_StrStr" );

	UObject_execLess_StrStr_Parms Less_StrStr_Parms;
	memcpy( &Less_StrStr_Parms.A, &A, 0xC );
	memcpy( &Less_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnLess_StrStr->iNative;
	pfnLess_StrStr->iNative = 0;

	pfnLess_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLess_StrStr, &Less_StrStr_Parms, NULL );
	pfnLess_StrStr->FunctionFlags |= 0x400;

	pfnLess_StrStr->iNative = NativeIndex;

	return Less_StrStr_Parms.ReturnValue;
};

struct FString UObject::At_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnAt_StrStr = NULL;

	if ( !pfnAt_StrStr )
		pfnAt_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.At_StrStr" );

	UObject_execAt_StrStr_Parms At_StrStr_Parms;
	memcpy( &At_StrStr_Parms.A, &A, 0xC );
	memcpy( &At_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAt_StrStr->iNative;
	pfnAt_StrStr->iNative = 0;

	pfnAt_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAt_StrStr, &At_StrStr_Parms, NULL );
	pfnAt_StrStr->FunctionFlags |= 0x400;

	pfnAt_StrStr->iNative = NativeIndex;

	return At_StrStr_Parms.ReturnValue;
};

struct FString UObject::Concat_StrStr ( struct FString A, struct FString B )
{
	static UFunction* pfnConcat_StrStr = NULL;

	if ( !pfnConcat_StrStr )
		pfnConcat_StrStr = UObject::FindObject< UFunction >( "Function Core.Object.Concat_StrStr" );

	UObject_execConcat_StrStr_Parms Concat_StrStr_Parms;
	memcpy( &Concat_StrStr_Parms.A, &A, 0xC );
	memcpy( &Concat_StrStr_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnConcat_StrStr->iNative;
	pfnConcat_StrStr->iNative = 0;

	pfnConcat_StrStr->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnConcat_StrStr, &Concat_StrStr_Parms, NULL );
	pfnConcat_StrStr->FunctionFlags |= 0x400;

	pfnConcat_StrStr->iNative = NativeIndex;

	return Concat_StrStr_Parms.ReturnValue;
};

bool UObject::SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis )
{
	static UFunction* pfnSClampRotAxis = NULL;

	if ( !pfnSClampRotAxis )
		pfnSClampRotAxis = UObject::FindObject< UFunction >( "Function Core.Object.SClampRotAxis" );

	UObject_execSClampRotAxis_Parms SClampRotAxis_Parms;
	SClampRotAxis_Parms.DeltaTime = DeltaTime;
	SClampRotAxis_Parms.ViewAxis = ViewAxis;
	SClampRotAxis_Parms.MaxLimit = MaxLimit;
	SClampRotAxis_Parms.MinLimit = MinLimit;
	SClampRotAxis_Parms.InterpolationSpeed = InterpolationSpeed;

	this->ProcessEvent( pfnSClampRotAxis, &SClampRotAxis_Parms, NULL );

	if ( out_DeltaViewAxis )
		*out_DeltaViewAxis = SClampRotAxis_Parms.out_DeltaViewAxis; // CPF_OutParm

	return SClampRotAxis_Parms.ReturnValue;
};

int UObject::ClampRotAxisFromRange ( int Current, int Min, int Max )
{
	static UFunction* pfnClampRotAxisFromRange = NULL;

	if ( !pfnClampRotAxisFromRange )
		pfnClampRotAxisFromRange = UObject::FindObject< UFunction >( "Function Core.Object.ClampRotAxisFromRange" );

	UObject_execClampRotAxisFromRange_Parms ClampRotAxisFromRange_Parms;
	ClampRotAxisFromRange_Parms.Current = Current;
	ClampRotAxisFromRange_Parms.Min = Min;
	ClampRotAxisFromRange_Parms.Max = Max;

	this->ProcessEvent( pfnClampRotAxisFromRange, &ClampRotAxisFromRange_Parms, NULL );

	return ClampRotAxisFromRange_Parms.ReturnValue;
};

int UObject::ClampRotAxisFromBase ( int Current, int Center, int MaxDelta )
{
	static UFunction* pfnClampRotAxisFromBase = NULL;

	if ( !pfnClampRotAxisFromBase )
		pfnClampRotAxisFromBase = UObject::FindObject< UFunction >( "Function Core.Object.ClampRotAxisFromBase" );

	UObject_execClampRotAxisFromBase_Parms ClampRotAxisFromBase_Parms;
	ClampRotAxisFromBase_Parms.Current = Current;
	ClampRotAxisFromBase_Parms.Center = Center;
	ClampRotAxisFromBase_Parms.MaxDelta = MaxDelta;

	this->ProcessEvent( pfnClampRotAxisFromBase, &ClampRotAxisFromBase_Parms, NULL );

	return ClampRotAxisFromBase_Parms.ReturnValue;
};

void UObject::ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis )
{
	static UFunction* pfnClampRotAxis = NULL;

	if ( !pfnClampRotAxis )
		pfnClampRotAxis = UObject::FindObject< UFunction >( "Function Core.Object.ClampRotAxis" );

	UObject_execClampRotAxis_Parms ClampRotAxis_Parms;
	ClampRotAxis_Parms.ViewAxis = ViewAxis;
	ClampRotAxis_Parms.MaxLimit = MaxLimit;
	ClampRotAxis_Parms.MinLimit = MinLimit;

	this->ProcessEvent( pfnClampRotAxis, &ClampRotAxis_Parms, NULL );

	if ( out_DeltaViewAxis )
		*out_DeltaViewAxis = ClampRotAxis_Parms.out_DeltaViewAxis; // CPF_OutParm
};

float UObject::RSize ( struct FRotator R )
{
	static UFunction* pfnRSize = NULL;

	if ( !pfnRSize )
		pfnRSize = UObject::FindObject< UFunction >( "Function Core.Object.RSize" );

	UObject_execRSize_Parms RSize_Parms;
	memcpy( &RSize_Parms.R, &R, 0xC );

	this->ProcessEvent( pfnRSize, &RSize_Parms, NULL );

	return RSize_Parms.ReturnValue;
};

float UObject::RDiff ( struct FRotator A, struct FRotator B )
{
	static UFunction* pfnRDiff = NULL;

	if ( !pfnRDiff )
		pfnRDiff = UObject::FindObject< UFunction >( "Function Core.Object.RDiff" );

	UObject_execRDiff_Parms RDiff_Parms;
	memcpy( &RDiff_Parms.A, &A, 0xC );
	memcpy( &RDiff_Parms.B, &B, 0xC );

	pfnRDiff->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRDiff, &RDiff_Parms, NULL );
	pfnRDiff->FunctionFlags |= 0x400;

	return RDiff_Parms.ReturnValue;
};

int UObject::NormalizeRotAxis ( int Angle )
{
	static UFunction* pfnNormalizeRotAxis = NULL;

	if ( !pfnNormalizeRotAxis )
		pfnNormalizeRotAxis = UObject::FindObject< UFunction >( "Function Core.Object.NormalizeRotAxis" );

	UObject_execNormalizeRotAxis_Parms NormalizeRotAxis_Parms;
	NormalizeRotAxis_Parms.Angle = Angle;

	pfnNormalizeRotAxis->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNormalizeRotAxis, &NormalizeRotAxis_Parms, NULL );
	pfnNormalizeRotAxis->FunctionFlags |= 0x400;

	return NormalizeRotAxis_Parms.ReturnValue;
};

struct FRotator UObject::RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pfnRInterpTo = NULL;

	if ( !pfnRInterpTo )
		pfnRInterpTo = UObject::FindObject< UFunction >( "Function Core.Object.RInterpTo" );

	UObject_execRInterpTo_Parms RInterpTo_Parms;
	memcpy( &RInterpTo_Parms.Current, &Current, 0xC );
	memcpy( &RInterpTo_Parms.Target, &Target, 0xC );
	RInterpTo_Parms.DeltaTime = DeltaTime;
	RInterpTo_Parms.InterpSpeed = InterpSpeed;

	pfnRInterpTo->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRInterpTo, &RInterpTo_Parms, NULL );
	pfnRInterpTo->FunctionFlags |= 0x400;

	return RInterpTo_Parms.ReturnValue;
};

struct FRotator UObject::RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ )
{
	static UFunction* pfnRSmerp = NULL;

	if ( !pfnRSmerp )
		pfnRSmerp = UObject::FindObject< UFunction >( "Function Core.Object.RSmerp" );

	UObject_execRSmerp_Parms RSmerp_Parms;
	memcpy( &RSmerp_Parms.A, &A, 0xC );
	memcpy( &RSmerp_Parms.B, &B, 0xC );
	RSmerp_Parms.Alpha = Alpha;
	RSmerp_Parms.bShortestPath = bShortestPath;

	pfnRSmerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRSmerp, &RSmerp_Parms, NULL );
	pfnRSmerp->FunctionFlags |= 0x400;

	return RSmerp_Parms.ReturnValue;
};

struct FRotator UObject::RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ )
{
	static UFunction* pfnRLerp = NULL;

	if ( !pfnRLerp )
		pfnRLerp = UObject::FindObject< UFunction >( "Function Core.Object.RLerp" );

	UObject_execRLerp_Parms RLerp_Parms;
	memcpy( &RLerp_Parms.A, &A, 0xC );
	memcpy( &RLerp_Parms.B, &B, 0xC );
	RLerp_Parms.Alpha = Alpha;
	RLerp_Parms.bShortestPath = bShortestPath;

	pfnRLerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRLerp, &RLerp_Parms, NULL );
	pfnRLerp->FunctionFlags |= 0x400;

	return RLerp_Parms.ReturnValue;
};

struct FRotator UObject::Normalize ( struct FRotator Rot )
{
	static UFunction* pfnNormalize = NULL;

	if ( !pfnNormalize )
		pfnNormalize = UObject::FindObject< UFunction >( "Function Core.Object.Normalize" );

	UObject_execNormalize_Parms Normalize_Parms;
	memcpy( &Normalize_Parms.Rot, &Rot, 0xC );

	pfnNormalize->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNormalize, &Normalize_Parms, NULL );
	pfnNormalize->FunctionFlags |= 0x400;

	return Normalize_Parms.ReturnValue;
};

struct FRotator UObject::OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z )
{
	static UFunction* pfnOrthoRotation = NULL;

	if ( !pfnOrthoRotation )
		pfnOrthoRotation = UObject::FindObject< UFunction >( "Function Core.Object.OrthoRotation" );

	UObject_execOrthoRotation_Parms OrthoRotation_Parms;
	memcpy( &OrthoRotation_Parms.X, &X, 0xC );
	memcpy( &OrthoRotation_Parms.Y, &Y, 0xC );
	memcpy( &OrthoRotation_Parms.Z, &Z, 0xC );

	pfnOrthoRotation->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnOrthoRotation, &OrthoRotation_Parms, NULL );
	pfnOrthoRotation->FunctionFlags |= 0x400;

	return OrthoRotation_Parms.ReturnValue;
};

struct FRotator UObject::RotRand ( unsigned long bRoll/*CPF_OptionalParm*/ )
{
	static UFunction* pfnRotRand = NULL;

	if ( !pfnRotRand )
		pfnRotRand = UObject::FindObject< UFunction >( "Function Core.Object.RotRand" );

	UObject_execRotRand_Parms RotRand_Parms;
	RotRand_Parms.bRoll = bRoll;

	WORD NativeIndex = pfnRotRand->iNative;
	pfnRotRand->iNative = 0;

	pfnRotRand->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRotRand, &RotRand_Parms, NULL );
	pfnRotRand->FunctionFlags |= 0x400;

	pfnRotRand->iNative = NativeIndex;

	return RotRand_Parms.ReturnValue;
};

void UObject::GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z )
{
	static UFunction* pfnGetUnAxes = NULL;

	if ( !pfnGetUnAxes )
		pfnGetUnAxes = UObject::FindObject< UFunction >( "Function Core.Object.GetUnAxes" );

	UObject_execGetUnAxes_Parms GetUnAxes_Parms;
	memcpy( &GetUnAxes_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnGetUnAxes->iNative;
	pfnGetUnAxes->iNative = 0;

	pfnGetUnAxes->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetUnAxes, &GetUnAxes_Parms, NULL );
	pfnGetUnAxes->FunctionFlags |= 0x400;

	pfnGetUnAxes->iNative = NativeIndex;

	if ( X )
		memcpy( X, &GetUnAxes_Parms.X, 0xC ); // CPF_OutParm
	if ( Y )
		memcpy( Y, &GetUnAxes_Parms.Y, 0xC ); // CPF_OutParm
	if ( Z )
		memcpy( Z, &GetUnAxes_Parms.Z, 0xC ); // CPF_OutParm
};

void UObject::GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z )
{
	static UFunction* pfnGetAxes = NULL;

	if ( !pfnGetAxes )
		pfnGetAxes = UObject::FindObject< UFunction >( "Function Core.Object.GetAxes" );

	UObject_execGetAxes_Parms GetAxes_Parms;
	memcpy( &GetAxes_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnGetAxes->iNative;
	pfnGetAxes->iNative = 0;

	pfnGetAxes->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGetAxes, &GetAxes_Parms, NULL );
	pfnGetAxes->FunctionFlags |= 0x400;

	pfnGetAxes->iNative = NativeIndex;

	if ( X )
		memcpy( X, &GetAxes_Parms.X, 0xC ); // CPF_OutParm
	if ( Y )
		memcpy( Y, &GetAxes_Parms.Y, 0xC ); // CPF_OutParm
	if ( Z )
		memcpy( Z, &GetAxes_Parms.Z, 0xC ); // CPF_OutParm
};

bool UObject::ClockwiseFrom_IntInt ( int A, int B )
{
	static UFunction* pfnClockwiseFrom_IntInt = NULL;

	if ( !pfnClockwiseFrom_IntInt )
		pfnClockwiseFrom_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.ClockwiseFrom_IntInt" );

	UObject_execClockwiseFrom_IntInt_Parms ClockwiseFrom_IntInt_Parms;
	ClockwiseFrom_IntInt_Parms.A = A;
	ClockwiseFrom_IntInt_Parms.B = B;

	pfnClockwiseFrom_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Parms, NULL );
	pfnClockwiseFrom_IntInt->FunctionFlags |= 0x400;

	return ClockwiseFrom_IntInt_Parms.ReturnValue;
};

struct FRotator UObject::SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A )
{
	static UFunction* pfnSubtractEqual_RotatorRotator = NULL;

	if ( !pfnSubtractEqual_RotatorRotator )
		pfnSubtractEqual_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_RotatorRotator" );

	UObject_execSubtractEqual_RotatorRotator_Parms SubtractEqual_RotatorRotator_Parms;
	memcpy( &SubtractEqual_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnSubtractEqual_RotatorRotator->iNative;
	pfnSubtractEqual_RotatorRotator->iNative = 0;

	pfnSubtractEqual_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Parms, NULL );
	pfnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;

	pfnSubtractEqual_RotatorRotator->iNative = NativeIndex;

	if ( A )
		memcpy( A, &SubtractEqual_RotatorRotator_Parms.A, 0xC ); // CPF_OutParm

	return SubtractEqual_RotatorRotator_Parms.ReturnValue;
};

struct FRotator UObject::AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A )
{
	static UFunction* pfnAddEqual_RotatorRotator = NULL;

	if ( !pfnAddEqual_RotatorRotator )
		pfnAddEqual_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.AddEqual_RotatorRotator" );

	UObject_execAddEqual_RotatorRotator_Parms AddEqual_RotatorRotator_Parms;
	memcpy( &AddEqual_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAddEqual_RotatorRotator->iNative;
	pfnAddEqual_RotatorRotator->iNative = 0;

	pfnAddEqual_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Parms, NULL );
	pfnAddEqual_RotatorRotator->FunctionFlags |= 0x400;

	pfnAddEqual_RotatorRotator->iNative = NativeIndex;

	if ( A )
		memcpy( A, &AddEqual_RotatorRotator_Parms.A, 0xC ); // CPF_OutParm

	return AddEqual_RotatorRotator_Parms.ReturnValue;
};

struct FRotator UObject::Subtract_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pfnSubtract_RotatorRotator = NULL;

	if ( !pfnSubtract_RotatorRotator )
		pfnSubtract_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_RotatorRotator" );

	UObject_execSubtract_RotatorRotator_Parms Subtract_RotatorRotator_Parms;
	memcpy( &Subtract_RotatorRotator_Parms.A, &A, 0xC );
	memcpy( &Subtract_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnSubtract_RotatorRotator->iNative;
	pfnSubtract_RotatorRotator->iNative = 0;

	pfnSubtract_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_RotatorRotator, &Subtract_RotatorRotator_Parms, NULL );
	pfnSubtract_RotatorRotator->FunctionFlags |= 0x400;

	pfnSubtract_RotatorRotator->iNative = NativeIndex;

	return Subtract_RotatorRotator_Parms.ReturnValue;
};

struct FRotator UObject::Add_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pfnAdd_RotatorRotator = NULL;

	if ( !pfnAdd_RotatorRotator )
		pfnAdd_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.Add_RotatorRotator" );

	UObject_execAdd_RotatorRotator_Parms Add_RotatorRotator_Parms;
	memcpy( &Add_RotatorRotator_Parms.A, &A, 0xC );
	memcpy( &Add_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAdd_RotatorRotator->iNative;
	pfnAdd_RotatorRotator->iNative = 0;

	pfnAdd_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAdd_RotatorRotator, &Add_RotatorRotator_Parms, NULL );
	pfnAdd_RotatorRotator->FunctionFlags |= 0x400;

	pfnAdd_RotatorRotator->iNative = NativeIndex;

	return Add_RotatorRotator_Parms.ReturnValue;
};

struct FRotator UObject::DivideEqual_RotatorFloat ( float B, struct FRotator* A )
{
	static UFunction* pfnDivideEqual_RotatorFloat = NULL;

	if ( !pfnDivideEqual_RotatorFloat )
		pfnDivideEqual_RotatorFloat = UObject::FindObject< UFunction >( "Function Core.Object.DivideEqual_RotatorFloat" );

	UObject_execDivideEqual_RotatorFloat_Parms DivideEqual_RotatorFloat_Parms;
	DivideEqual_RotatorFloat_Parms.B = B;

	WORD NativeIndex = pfnDivideEqual_RotatorFloat->iNative;
	pfnDivideEqual_RotatorFloat->iNative = 0;

	pfnDivideEqual_RotatorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Parms, NULL );
	pfnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;

	pfnDivideEqual_RotatorFloat->iNative = NativeIndex;

	if ( A )
		memcpy( A, &DivideEqual_RotatorFloat_Parms.A, 0xC ); // CPF_OutParm

	return DivideEqual_RotatorFloat_Parms.ReturnValue;
};

struct FRotator UObject::MultiplyEqual_RotatorFloat ( float B, struct FRotator* A )
{
	static UFunction* pfnMultiplyEqual_RotatorFloat = NULL;

	if ( !pfnMultiplyEqual_RotatorFloat )
		pfnMultiplyEqual_RotatorFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_RotatorFloat" );

	UObject_execMultiplyEqual_RotatorFloat_Parms MultiplyEqual_RotatorFloat_Parms;
	MultiplyEqual_RotatorFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_RotatorFloat->iNative;
	pfnMultiplyEqual_RotatorFloat->iNative = 0;

	pfnMultiplyEqual_RotatorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Parms, NULL );
	pfnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;

	pfnMultiplyEqual_RotatorFloat->iNative = NativeIndex;

	if ( A )
		memcpy( A, &MultiplyEqual_RotatorFloat_Parms.A, 0xC ); // CPF_OutParm

	return MultiplyEqual_RotatorFloat_Parms.ReturnValue;
};

struct FRotator UObject::Divide_RotatorFloat ( struct FRotator A, float B )
{
	static UFunction* pfnDivide_RotatorFloat = NULL;

	if ( !pfnDivide_RotatorFloat )
		pfnDivide_RotatorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Divide_RotatorFloat" );

	UObject_execDivide_RotatorFloat_Parms Divide_RotatorFloat_Parms;
	memcpy( &Divide_RotatorFloat_Parms.A, &A, 0xC );
	Divide_RotatorFloat_Parms.B = B;

	WORD NativeIndex = pfnDivide_RotatorFloat->iNative;
	pfnDivide_RotatorFloat->iNative = 0;

	pfnDivide_RotatorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivide_RotatorFloat, &Divide_RotatorFloat_Parms, NULL );
	pfnDivide_RotatorFloat->FunctionFlags |= 0x400;

	pfnDivide_RotatorFloat->iNative = NativeIndex;

	return Divide_RotatorFloat_Parms.ReturnValue;
};

struct FRotator UObject::Multiply_FloatRotator ( float A, struct FRotator B )
{
	static UFunction* pfnMultiply_FloatRotator = NULL;

	if ( !pfnMultiply_FloatRotator )
		pfnMultiply_FloatRotator = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_FloatRotator" );

	UObject_execMultiply_FloatRotator_Parms Multiply_FloatRotator_Parms;
	Multiply_FloatRotator_Parms.A = A;
	memcpy( &Multiply_FloatRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnMultiply_FloatRotator->iNative;
	pfnMultiply_FloatRotator->iNative = 0;

	pfnMultiply_FloatRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_FloatRotator, &Multiply_FloatRotator_Parms, NULL );
	pfnMultiply_FloatRotator->FunctionFlags |= 0x400;

	pfnMultiply_FloatRotator->iNative = NativeIndex;

	return Multiply_FloatRotator_Parms.ReturnValue;
};

struct FRotator UObject::Multiply_RotatorFloat ( struct FRotator A, float B )
{
	static UFunction* pfnMultiply_RotatorFloat = NULL;

	if ( !pfnMultiply_RotatorFloat )
		pfnMultiply_RotatorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_RotatorFloat" );

	UObject_execMultiply_RotatorFloat_Parms Multiply_RotatorFloat_Parms;
	memcpy( &Multiply_RotatorFloat_Parms.A, &A, 0xC );
	Multiply_RotatorFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiply_RotatorFloat->iNative;
	pfnMultiply_RotatorFloat->iNative = 0;

	pfnMultiply_RotatorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_RotatorFloat, &Multiply_RotatorFloat_Parms, NULL );
	pfnMultiply_RotatorFloat->FunctionFlags |= 0x400;

	pfnMultiply_RotatorFloat->iNative = NativeIndex;

	return Multiply_RotatorFloat_Parms.ReturnValue;
};

bool UObject::NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pfnNotEqual_RotatorRotator = NULL;

	if ( !pfnNotEqual_RotatorRotator )
		pfnNotEqual_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_RotatorRotator" );

	UObject_execNotEqual_RotatorRotator_Parms NotEqual_RotatorRotator_Parms;
	memcpy( &NotEqual_RotatorRotator_Parms.A, &A, 0xC );
	memcpy( &NotEqual_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnNotEqual_RotatorRotator->iNative;
	pfnNotEqual_RotatorRotator->iNative = 0;

	pfnNotEqual_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Parms, NULL );
	pfnNotEqual_RotatorRotator->FunctionFlags |= 0x400;

	pfnNotEqual_RotatorRotator->iNative = NativeIndex;

	return NotEqual_RotatorRotator_Parms.ReturnValue;
};

bool UObject::EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B )
{
	static UFunction* pfnEqualEqual_RotatorRotator = NULL;

	if ( !pfnEqualEqual_RotatorRotator )
		pfnEqualEqual_RotatorRotator = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_RotatorRotator" );

	UObject_execEqualEqual_RotatorRotator_Parms EqualEqual_RotatorRotator_Parms;
	memcpy( &EqualEqual_RotatorRotator_Parms.A, &A, 0xC );
	memcpy( &EqualEqual_RotatorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnEqualEqual_RotatorRotator->iNative;
	pfnEqualEqual_RotatorRotator->iNative = 0;

	pfnEqualEqual_RotatorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Parms, NULL );
	pfnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;

	pfnEqualEqual_RotatorRotator->iNative = NativeIndex;

	return EqualEqual_RotatorRotator_Parms.ReturnValue;
};

struct FVector UObject::ClampLength ( struct FVector V, float MaxLength )
{
	static UFunction* pfnClampLength = NULL;

	if ( !pfnClampLength )
		pfnClampLength = UObject::FindObject< UFunction >( "Function Core.Object.ClampLength" );

	UObject_execClampLength_Parms ClampLength_Parms;
	memcpy( &ClampLength_Parms.V, &V, 0xC );
	ClampLength_Parms.MaxLength = MaxLength;

	pfnClampLength->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnClampLength, &ClampLength_Parms, NULL );
	pfnClampLength->FunctionFlags |= 0x400;

	return ClampLength_Parms.ReturnValue;
};

struct FVector UObject::VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pfnVInterpTo = NULL;

	if ( !pfnVInterpTo )
		pfnVInterpTo = UObject::FindObject< UFunction >( "Function Core.Object.VInterpTo" );

	UObject_execVInterpTo_Parms VInterpTo_Parms;
	memcpy( &VInterpTo_Parms.Current, &Current, 0xC );
	memcpy( &VInterpTo_Parms.Target, &Target, 0xC );
	VInterpTo_Parms.DeltaTime = DeltaTime;
	VInterpTo_Parms.InterpSpeed = InterpSpeed;

	pfnVInterpTo->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVInterpTo, &VInterpTo_Parms, NULL );
	pfnVInterpTo->FunctionFlags |= 0x400;

	return VInterpTo_Parms.ReturnValue;
};

bool UObject::IsZero ( struct FVector A )
{
	static UFunction* pfnIsZero = NULL;

	if ( !pfnIsZero )
		pfnIsZero = UObject::FindObject< UFunction >( "Function Core.Object.IsZero" );

	UObject_execIsZero_Parms IsZero_Parms;
	memcpy( &IsZero_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnIsZero->iNative;
	pfnIsZero->iNative = 0;

	pfnIsZero->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnIsZero, &IsZero_Parms, NULL );
	pfnIsZero->FunctionFlags |= 0x400;

	pfnIsZero->iNative = NativeIndex;

	return IsZero_Parms.ReturnValue;
};

struct FVector UObject::ProjectOnTo ( struct FVector X, struct FVector Y )
{
	static UFunction* pfnProjectOnTo = NULL;

	if ( !pfnProjectOnTo )
		pfnProjectOnTo = UObject::FindObject< UFunction >( "Function Core.Object.ProjectOnTo" );

	UObject_execProjectOnTo_Parms ProjectOnTo_Parms;
	memcpy( &ProjectOnTo_Parms.X, &X, 0xC );
	memcpy( &ProjectOnTo_Parms.Y, &Y, 0xC );

	WORD NativeIndex = pfnProjectOnTo->iNative;
	pfnProjectOnTo->iNative = 0;

	pfnProjectOnTo->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnProjectOnTo, &ProjectOnTo_Parms, NULL );
	pfnProjectOnTo->FunctionFlags |= 0x400;

	pfnProjectOnTo->iNative = NativeIndex;

	return ProjectOnTo_Parms.ReturnValue;
};

struct FVector UObject::MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal )
{
	static UFunction* pfnMirrorVectorByNormal = NULL;

	if ( !pfnMirrorVectorByNormal )
		pfnMirrorVectorByNormal = UObject::FindObject< UFunction >( "Function Core.Object.MirrorVectorByNormal" );

	UObject_execMirrorVectorByNormal_Parms MirrorVectorByNormal_Parms;
	memcpy( &MirrorVectorByNormal_Parms.InVect, &InVect, 0xC );
	memcpy( &MirrorVectorByNormal_Parms.InNormal, &InNormal, 0xC );

	WORD NativeIndex = pfnMirrorVectorByNormal->iNative;
	pfnMirrorVectorByNormal->iNative = 0;

	pfnMirrorVectorByNormal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMirrorVectorByNormal, &MirrorVectorByNormal_Parms, NULL );
	pfnMirrorVectorByNormal->FunctionFlags |= 0x400;

	pfnMirrorVectorByNormal->iNative = NativeIndex;

	return MirrorVectorByNormal_Parms.ReturnValue;
};

struct FVector UObject::VRand ()
{
	static UFunction* pfnVRand = NULL;

	if ( !pfnVRand )
		pfnVRand = UObject::FindObject< UFunction >( "Function Core.Object.VRand" );

	UObject_execVRand_Parms VRand_Parms;

	WORD NativeIndex = pfnVRand->iNative;
	pfnVRand->iNative = 0;

	pfnVRand->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVRand, &VRand_Parms, NULL );
	pfnVRand->FunctionFlags |= 0x400;

	pfnVRand->iNative = NativeIndex;

	return VRand_Parms.ReturnValue;
};

struct FVector UObject::VSmerp ( struct FVector A, struct FVector B, float Alpha )
{
	static UFunction* pfnVSmerp = NULL;

	if ( !pfnVSmerp )
		pfnVSmerp = UObject::FindObject< UFunction >( "Function Core.Object.VSmerp" );

	UObject_execVSmerp_Parms VSmerp_Parms;
	memcpy( &VSmerp_Parms.A, &A, 0xC );
	memcpy( &VSmerp_Parms.B, &B, 0xC );
	VSmerp_Parms.Alpha = Alpha;

	pfnVSmerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVSmerp, &VSmerp_Parms, NULL );
	pfnVSmerp->FunctionFlags |= 0x400;

	return VSmerp_Parms.ReturnValue;
};

struct FVector UObject::VLerp ( struct FVector A, struct FVector B, float Alpha )
{
	static UFunction* pfnVLerp = NULL;

	if ( !pfnVLerp )
		pfnVLerp = UObject::FindObject< UFunction >( "Function Core.Object.VLerp" );

	UObject_execVLerp_Parms VLerp_Parms;
	memcpy( &VLerp_Parms.A, &A, 0xC );
	memcpy( &VLerp_Parms.B, &B, 0xC );
	VLerp_Parms.Alpha = Alpha;

	pfnVLerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVLerp, &VLerp_Parms, NULL );
	pfnVLerp->FunctionFlags |= 0x400;

	return VLerp_Parms.ReturnValue;
};

struct FVector UObject::Normal ( struct FVector A )
{
	static UFunction* pfnNormal = NULL;

	if ( !pfnNormal )
		pfnNormal = UObject::FindObject< UFunction >( "Function Core.Object.Normal" );

	UObject_execNormal_Parms Normal_Parms;
	memcpy( &Normal_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnNormal->iNative;
	pfnNormal->iNative = 0;

	pfnNormal->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNormal, &Normal_Parms, NULL );
	pfnNormal->FunctionFlags |= 0x400;

	pfnNormal->iNative = NativeIndex;

	return Normal_Parms.ReturnValue;
};

float UObject::VSizeSq2D ( struct FVector A )
{
	static UFunction* pfnVSizeSq2D = NULL;

	if ( !pfnVSizeSq2D )
		pfnVSizeSq2D = UObject::FindObject< UFunction >( "Function Core.Object.VSizeSq2D" );

	UObject_execVSizeSq2D_Parms VSizeSq2D_Parms;
	memcpy( &VSizeSq2D_Parms.A, &A, 0xC );

	pfnVSizeSq2D->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVSizeSq2D, &VSizeSq2D_Parms, NULL );
	pfnVSizeSq2D->FunctionFlags |= 0x400;

	return VSizeSq2D_Parms.ReturnValue;
};

float UObject::VSizeSq ( struct FVector A )
{
	static UFunction* pfnVSizeSq = NULL;

	if ( !pfnVSizeSq )
		pfnVSizeSq = UObject::FindObject< UFunction >( "Function Core.Object.VSizeSq" );

	UObject_execVSizeSq_Parms VSizeSq_Parms;
	memcpy( &VSizeSq_Parms.A, &A, 0xC );

	pfnVSizeSq->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVSizeSq, &VSizeSq_Parms, NULL );
	pfnVSizeSq->FunctionFlags |= 0x400;

	return VSizeSq_Parms.ReturnValue;
};

float UObject::VSize2D ( struct FVector A )
{
	static UFunction* pfnVSize2D = NULL;

	if ( !pfnVSize2D )
		pfnVSize2D = UObject::FindObject< UFunction >( "Function Core.Object.VSize2D" );

	UObject_execVSize2D_Parms VSize2D_Parms;
	memcpy( &VSize2D_Parms.A, &A, 0xC );

	pfnVSize2D->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVSize2D, &VSize2D_Parms, NULL );
	pfnVSize2D->FunctionFlags |= 0x400;

	return VSize2D_Parms.ReturnValue;
};

float UObject::VSize ( struct FVector A )
{
	static UFunction* pfnVSize = NULL;

	if ( !pfnVSize )
		pfnVSize = UObject::FindObject< UFunction >( "Function Core.Object.VSize" );

	UObject_execVSize_Parms VSize_Parms;
	memcpy( &VSize_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnVSize->iNative;
	pfnVSize->iNative = 0;

	pfnVSize->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnVSize, &VSize_Parms, NULL );
	pfnVSize->FunctionFlags |= 0x400;

	pfnVSize->iNative = NativeIndex;

	return VSize_Parms.ReturnValue;
};

struct FVector UObject::SubtractEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pfnSubtractEqual_VectorVector = NULL;

	if ( !pfnSubtractEqual_VectorVector )
		pfnSubtractEqual_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_VectorVector" );

	UObject_execSubtractEqual_VectorVector_Parms SubtractEqual_VectorVector_Parms;
	memcpy( &SubtractEqual_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnSubtractEqual_VectorVector->iNative;
	pfnSubtractEqual_VectorVector->iNative = 0;

	pfnSubtractEqual_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Parms, NULL );
	pfnSubtractEqual_VectorVector->FunctionFlags |= 0x400;

	pfnSubtractEqual_VectorVector->iNative = NativeIndex;

	if ( A )
		memcpy( A, &SubtractEqual_VectorVector_Parms.A, 0xC ); // CPF_OutParm

	return SubtractEqual_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::AddEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pfnAddEqual_VectorVector = NULL;

	if ( !pfnAddEqual_VectorVector )
		pfnAddEqual_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.AddEqual_VectorVector" );

	UObject_execAddEqual_VectorVector_Parms AddEqual_VectorVector_Parms;
	memcpy( &AddEqual_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAddEqual_VectorVector->iNative;
	pfnAddEqual_VectorVector->iNative = 0;

	pfnAddEqual_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddEqual_VectorVector, &AddEqual_VectorVector_Parms, NULL );
	pfnAddEqual_VectorVector->FunctionFlags |= 0x400;

	pfnAddEqual_VectorVector->iNative = NativeIndex;

	if ( A )
		memcpy( A, &AddEqual_VectorVector_Parms.A, 0xC ); // CPF_OutParm

	return AddEqual_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::DivideEqual_VectorFloat ( float B, struct FVector* A )
{
	static UFunction* pfnDivideEqual_VectorFloat = NULL;

	if ( !pfnDivideEqual_VectorFloat )
		pfnDivideEqual_VectorFloat = UObject::FindObject< UFunction >( "Function Core.Object.DivideEqual_VectorFloat" );

	UObject_execDivideEqual_VectorFloat_Parms DivideEqual_VectorFloat_Parms;
	DivideEqual_VectorFloat_Parms.B = B;

	WORD NativeIndex = pfnDivideEqual_VectorFloat->iNative;
	pfnDivideEqual_VectorFloat->iNative = 0;

	pfnDivideEqual_VectorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Parms, NULL );
	pfnDivideEqual_VectorFloat->FunctionFlags |= 0x400;

	pfnDivideEqual_VectorFloat->iNative = NativeIndex;

	if ( A )
		memcpy( A, &DivideEqual_VectorFloat_Parms.A, 0xC ); // CPF_OutParm

	return DivideEqual_VectorFloat_Parms.ReturnValue;
};

struct FVector UObject::MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A )
{
	static UFunction* pfnMultiplyEqual_VectorVector = NULL;

	if ( !pfnMultiplyEqual_VectorVector )
		pfnMultiplyEqual_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_VectorVector" );

	UObject_execMultiplyEqual_VectorVector_Parms MultiplyEqual_VectorVector_Parms;
	memcpy( &MultiplyEqual_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnMultiplyEqual_VectorVector->iNative;
	pfnMultiplyEqual_VectorVector->iNative = 0;

	pfnMultiplyEqual_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Parms, NULL );
	pfnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;

	pfnMultiplyEqual_VectorVector->iNative = NativeIndex;

	if ( A )
		memcpy( A, &MultiplyEqual_VectorVector_Parms.A, 0xC ); // CPF_OutParm

	return MultiplyEqual_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::MultiplyEqual_VectorFloat ( float B, struct FVector* A )
{
	static UFunction* pfnMultiplyEqual_VectorFloat = NULL;

	if ( !pfnMultiplyEqual_VectorFloat )
		pfnMultiplyEqual_VectorFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_VectorFloat" );

	UObject_execMultiplyEqual_VectorFloat_Parms MultiplyEqual_VectorFloat_Parms;
	MultiplyEqual_VectorFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_VectorFloat->iNative;
	pfnMultiplyEqual_VectorFloat->iNative = 0;

	pfnMultiplyEqual_VectorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Parms, NULL );
	pfnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;

	pfnMultiplyEqual_VectorFloat->iNative = NativeIndex;

	if ( A )
		memcpy( A, &MultiplyEqual_VectorFloat_Parms.A, 0xC ); // CPF_OutParm

	return MultiplyEqual_VectorFloat_Parms.ReturnValue;
};

struct FVector UObject::Cross_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnCross_VectorVector = NULL;

	if ( !pfnCross_VectorVector )
		pfnCross_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.Cross_VectorVector" );

	UObject_execCross_VectorVector_Parms Cross_VectorVector_Parms;
	memcpy( &Cross_VectorVector_Parms.A, &A, 0xC );
	memcpy( &Cross_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnCross_VectorVector->iNative;
	pfnCross_VectorVector->iNative = 0;

	pfnCross_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnCross_VectorVector, &Cross_VectorVector_Parms, NULL );
	pfnCross_VectorVector->FunctionFlags |= 0x400;

	pfnCross_VectorVector->iNative = NativeIndex;

	return Cross_VectorVector_Parms.ReturnValue;
};

float UObject::Dot_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnDot_VectorVector = NULL;

	if ( !pfnDot_VectorVector )
		pfnDot_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.Dot_VectorVector" );

	UObject_execDot_VectorVector_Parms Dot_VectorVector_Parms;
	memcpy( &Dot_VectorVector_Parms.A, &A, 0xC );
	memcpy( &Dot_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnDot_VectorVector->iNative;
	pfnDot_VectorVector->iNative = 0;

	pfnDot_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDot_VectorVector, &Dot_VectorVector_Parms, NULL );
	pfnDot_VectorVector->FunctionFlags |= 0x400;

	pfnDot_VectorVector->iNative = NativeIndex;

	return Dot_VectorVector_Parms.ReturnValue;
};

bool UObject::NotEqual_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnNotEqual_VectorVector = NULL;

	if ( !pfnNotEqual_VectorVector )
		pfnNotEqual_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_VectorVector" );

	UObject_execNotEqual_VectorVector_Parms NotEqual_VectorVector_Parms;
	memcpy( &NotEqual_VectorVector_Parms.A, &A, 0xC );
	memcpy( &NotEqual_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnNotEqual_VectorVector->iNative;
	pfnNotEqual_VectorVector->iNative = 0;

	pfnNotEqual_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_VectorVector, &NotEqual_VectorVector_Parms, NULL );
	pfnNotEqual_VectorVector->FunctionFlags |= 0x400;

	pfnNotEqual_VectorVector->iNative = NativeIndex;

	return NotEqual_VectorVector_Parms.ReturnValue;
};

bool UObject::EqualEqual_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnEqualEqual_VectorVector = NULL;

	if ( !pfnEqualEqual_VectorVector )
		pfnEqualEqual_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_VectorVector" );

	UObject_execEqualEqual_VectorVector_Parms EqualEqual_VectorVector_Parms;
	memcpy( &EqualEqual_VectorVector_Parms.A, &A, 0xC );
	memcpy( &EqualEqual_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnEqualEqual_VectorVector->iNative;
	pfnEqualEqual_VectorVector->iNative = 0;

	pfnEqualEqual_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_VectorVector, &EqualEqual_VectorVector_Parms, NULL );
	pfnEqualEqual_VectorVector->FunctionFlags |= 0x400;

	pfnEqualEqual_VectorVector->iNative = NativeIndex;

	return EqualEqual_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B )
{
	static UFunction* pfnGreaterGreater_VectorRotator = NULL;

	if ( !pfnGreaterGreater_VectorRotator )
		pfnGreaterGreater_VectorRotator = UObject::FindObject< UFunction >( "Function Core.Object.GreaterGreater_VectorRotator" );

	UObject_execGreaterGreater_VectorRotator_Parms GreaterGreater_VectorRotator_Parms;
	memcpy( &GreaterGreater_VectorRotator_Parms.A, &A, 0xC );
	memcpy( &GreaterGreater_VectorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnGreaterGreater_VectorRotator->iNative;
	pfnGreaterGreater_VectorRotator->iNative = 0;

	pfnGreaterGreater_VectorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Parms, NULL );
	pfnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;

	pfnGreaterGreater_VectorRotator->iNative = NativeIndex;

	return GreaterGreater_VectorRotator_Parms.ReturnValue;
};

struct FVector UObject::LessLess_VectorRotator ( struct FVector A, struct FRotator B )
{
	static UFunction* pfnLessLess_VectorRotator = NULL;

	if ( !pfnLessLess_VectorRotator )
		pfnLessLess_VectorRotator = UObject::FindObject< UFunction >( "Function Core.Object.LessLess_VectorRotator" );

	UObject_execLessLess_VectorRotator_Parms LessLess_VectorRotator_Parms;
	memcpy( &LessLess_VectorRotator_Parms.A, &A, 0xC );
	memcpy( &LessLess_VectorRotator_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnLessLess_VectorRotator->iNative;
	pfnLessLess_VectorRotator->iNative = 0;

	pfnLessLess_VectorRotator->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLessLess_VectorRotator, &LessLess_VectorRotator_Parms, NULL );
	pfnLessLess_VectorRotator->FunctionFlags |= 0x400;

	pfnLessLess_VectorRotator->iNative = NativeIndex;

	return LessLess_VectorRotator_Parms.ReturnValue;
};

struct FVector UObject::Subtract_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnSubtract_VectorVector = NULL;

	if ( !pfnSubtract_VectorVector )
		pfnSubtract_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_VectorVector" );

	UObject_execSubtract_VectorVector_Parms Subtract_VectorVector_Parms;
	memcpy( &Subtract_VectorVector_Parms.A, &A, 0xC );
	memcpy( &Subtract_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnSubtract_VectorVector->iNative;
	pfnSubtract_VectorVector->iNative = 0;

	pfnSubtract_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_VectorVector, &Subtract_VectorVector_Parms, NULL );
	pfnSubtract_VectorVector->FunctionFlags |= 0x400;

	pfnSubtract_VectorVector->iNative = NativeIndex;

	return Subtract_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::Add_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnAdd_VectorVector = NULL;

	if ( !pfnAdd_VectorVector )
		pfnAdd_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.Add_VectorVector" );

	UObject_execAdd_VectorVector_Parms Add_VectorVector_Parms;
	memcpy( &Add_VectorVector_Parms.A, &A, 0xC );
	memcpy( &Add_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnAdd_VectorVector->iNative;
	pfnAdd_VectorVector->iNative = 0;

	pfnAdd_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAdd_VectorVector, &Add_VectorVector_Parms, NULL );
	pfnAdd_VectorVector->FunctionFlags |= 0x400;

	pfnAdd_VectorVector->iNative = NativeIndex;

	return Add_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::Divide_VectorFloat ( struct FVector A, float B )
{
	static UFunction* pfnDivide_VectorFloat = NULL;

	if ( !pfnDivide_VectorFloat )
		pfnDivide_VectorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Divide_VectorFloat" );

	UObject_execDivide_VectorFloat_Parms Divide_VectorFloat_Parms;
	memcpy( &Divide_VectorFloat_Parms.A, &A, 0xC );
	Divide_VectorFloat_Parms.B = B;

	WORD NativeIndex = pfnDivide_VectorFloat->iNative;
	pfnDivide_VectorFloat->iNative = 0;

	pfnDivide_VectorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivide_VectorFloat, &Divide_VectorFloat_Parms, NULL );
	pfnDivide_VectorFloat->FunctionFlags |= 0x400;

	pfnDivide_VectorFloat->iNative = NativeIndex;

	return Divide_VectorFloat_Parms.ReturnValue;
};

struct FVector UObject::Multiply_VectorVector ( struct FVector A, struct FVector B )
{
	static UFunction* pfnMultiply_VectorVector = NULL;

	if ( !pfnMultiply_VectorVector )
		pfnMultiply_VectorVector = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_VectorVector" );

	UObject_execMultiply_VectorVector_Parms Multiply_VectorVector_Parms;
	memcpy( &Multiply_VectorVector_Parms.A, &A, 0xC );
	memcpy( &Multiply_VectorVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnMultiply_VectorVector->iNative;
	pfnMultiply_VectorVector->iNative = 0;

	pfnMultiply_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_VectorVector, &Multiply_VectorVector_Parms, NULL );
	pfnMultiply_VectorVector->FunctionFlags |= 0x400;

	pfnMultiply_VectorVector->iNative = NativeIndex;

	return Multiply_VectorVector_Parms.ReturnValue;
};

struct FVector UObject::Multiply_FloatVector ( float A, struct FVector B )
{
	static UFunction* pfnMultiply_FloatVector = NULL;

	if ( !pfnMultiply_FloatVector )
		pfnMultiply_FloatVector = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_FloatVector" );

	UObject_execMultiply_FloatVector_Parms Multiply_FloatVector_Parms;
	Multiply_FloatVector_Parms.A = A;
	memcpy( &Multiply_FloatVector_Parms.B, &B, 0xC );

	WORD NativeIndex = pfnMultiply_FloatVector->iNative;
	pfnMultiply_FloatVector->iNative = 0;

	pfnMultiply_FloatVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_FloatVector, &Multiply_FloatVector_Parms, NULL );
	pfnMultiply_FloatVector->FunctionFlags |= 0x400;

	pfnMultiply_FloatVector->iNative = NativeIndex;

	return Multiply_FloatVector_Parms.ReturnValue;
};

struct FVector UObject::Multiply_VectorFloat ( struct FVector A, float B )
{
	static UFunction* pfnMultiply_VectorFloat = NULL;

	if ( !pfnMultiply_VectorFloat )
		pfnMultiply_VectorFloat = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_VectorFloat" );

	UObject_execMultiply_VectorFloat_Parms Multiply_VectorFloat_Parms;
	memcpy( &Multiply_VectorFloat_Parms.A, &A, 0xC );
	Multiply_VectorFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiply_VectorFloat->iNative;
	pfnMultiply_VectorFloat->iNative = 0;

	pfnMultiply_VectorFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_VectorFloat, &Multiply_VectorFloat_Parms, NULL );
	pfnMultiply_VectorFloat->FunctionFlags |= 0x400;

	pfnMultiply_VectorFloat->iNative = NativeIndex;

	return Multiply_VectorFloat_Parms.ReturnValue;
};

struct FVector UObject::Subtract_PreVector ( struct FVector A )
{
	static UFunction* pfnSubtract_PreVector = NULL;

	if ( !pfnSubtract_PreVector )
		pfnSubtract_PreVector = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_PreVector" );

	UObject_execSubtract_PreVector_Parms Subtract_PreVector_Parms;
	memcpy( &Subtract_PreVector_Parms.A, &A, 0xC );

	WORD NativeIndex = pfnSubtract_PreVector->iNative;
	pfnSubtract_PreVector->iNative = 0;

	pfnSubtract_PreVector->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_PreVector, &Subtract_PreVector_Parms, NULL );
	pfnSubtract_PreVector->FunctionFlags |= 0x400;

	pfnSubtract_PreVector->iNative = NativeIndex;

	return Subtract_PreVector_Parms.ReturnValue;
};

float UObject::FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed )
{
	static UFunction* pfnFInterpTo = NULL;

	if ( !pfnFInterpTo )
		pfnFInterpTo = UObject::FindObject< UFunction >( "Function Core.Object.FInterpTo" );

	UObject_execFInterpTo_Parms FInterpTo_Parms;
	FInterpTo_Parms.Current = Current;
	FInterpTo_Parms.Target = Target;
	FInterpTo_Parms.DeltaTime = DeltaTime;
	FInterpTo_Parms.InterpSpeed = InterpSpeed;

	pfnFInterpTo->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFInterpTo, &FInterpTo_Parms, NULL );
	pfnFInterpTo->FunctionFlags |= 0x400;

	return FInterpTo_Parms.ReturnValue;
};

float UObject::FPctByRange ( float Value, float InMin, float InMax )
{
	static UFunction* pfnFPctByRange = NULL;

	if ( !pfnFPctByRange )
		pfnFPctByRange = UObject::FindObject< UFunction >( "Function Core.Object.FPctByRange" );

	UObject_execFPctByRange_Parms FPctByRange_Parms;
	FPctByRange_Parms.Value = Value;
	FPctByRange_Parms.InMin = InMin;
	FPctByRange_Parms.InMax = InMax;

	this->ProcessEvent( pfnFPctByRange, &FPctByRange_Parms, NULL );

	return FPctByRange_Parms.ReturnValue;
};

float UObject::RandRange ( float InMin, float InMax )
{
	static UFunction* pfnRandRange = NULL;

	if ( !pfnRandRange )
		pfnRandRange = UObject::FindObject< UFunction >( "Function Core.Object.RandRange" );

	UObject_execRandRange_Parms RandRange_Parms;
	RandRange_Parms.InMin = InMin;
	RandRange_Parms.InMax = InMax;

	this->ProcessEvent( pfnRandRange, &RandRange_Parms, NULL );

	return RandRange_Parms.ReturnValue;
};

float UObject::FInterpEaseInOut ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pfnFInterpEaseInOut = NULL;

	if ( !pfnFInterpEaseInOut )
		pfnFInterpEaseInOut = UObject::FindObject< UFunction >( "Function Core.Object.FInterpEaseInOut" );

	UObject_execFInterpEaseInOut_Parms FInterpEaseInOut_Parms;
	FInterpEaseInOut_Parms.A = A;
	FInterpEaseInOut_Parms.B = B;
	FInterpEaseInOut_Parms.Alpha = Alpha;
	FInterpEaseInOut_Parms.Exp = Exp;

	pfnFInterpEaseInOut->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFInterpEaseInOut, &FInterpEaseInOut_Parms, NULL );
	pfnFInterpEaseInOut->FunctionFlags |= 0x400;

	return FInterpEaseInOut_Parms.ReturnValue;
};

float UObject::FInterpEaseOut ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pfnFInterpEaseOut = NULL;

	if ( !pfnFInterpEaseOut )
		pfnFInterpEaseOut = UObject::FindObject< UFunction >( "Function Core.Object.FInterpEaseOut" );

	UObject_execFInterpEaseOut_Parms FInterpEaseOut_Parms;
	FInterpEaseOut_Parms.A = A;
	FInterpEaseOut_Parms.B = B;
	FInterpEaseOut_Parms.Alpha = Alpha;
	FInterpEaseOut_Parms.Exp = Exp;

	this->ProcessEvent( pfnFInterpEaseOut, &FInterpEaseOut_Parms, NULL );

	return FInterpEaseOut_Parms.ReturnValue;
};

float UObject::FInterpEaseIn ( float A, float B, float Alpha, float Exp )
{
	static UFunction* pfnFInterpEaseIn = NULL;

	if ( !pfnFInterpEaseIn )
		pfnFInterpEaseIn = UObject::FindObject< UFunction >( "Function Core.Object.FInterpEaseIn" );

	UObject_execFInterpEaseIn_Parms FInterpEaseIn_Parms;
	FInterpEaseIn_Parms.A = A;
	FInterpEaseIn_Parms.B = B;
	FInterpEaseIn_Parms.Alpha = Alpha;
	FInterpEaseIn_Parms.Exp = Exp;

	this->ProcessEvent( pfnFInterpEaseIn, &FInterpEaseIn_Parms, NULL );

	return FInterpEaseIn_Parms.ReturnValue;
};

float UObject::FCubicInterp ( float P0, float T0, float P1, float T1, float A )
{
	static UFunction* pfnFCubicInterp = NULL;

	if ( !pfnFCubicInterp )
		pfnFCubicInterp = UObject::FindObject< UFunction >( "Function Core.Object.FCubicInterp" );

	UObject_execFCubicInterp_Parms FCubicInterp_Parms;
	FCubicInterp_Parms.P0 = P0;
	FCubicInterp_Parms.T0 = T0;
	FCubicInterp_Parms.P1 = P1;
	FCubicInterp_Parms.T1 = T1;
	FCubicInterp_Parms.A = A;

	pfnFCubicInterp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFCubicInterp, &FCubicInterp_Parms, NULL );
	pfnFCubicInterp->FunctionFlags |= 0x400;

	return FCubicInterp_Parms.ReturnValue;
};

int UObject::FCeil ( float A )
{
	static UFunction* pfnFCeil = NULL;

	if ( !pfnFCeil )
		pfnFCeil = UObject::FindObject< UFunction >( "Function Core.Object.FCeil" );

	UObject_execFCeil_Parms FCeil_Parms;
	FCeil_Parms.A = A;

	pfnFCeil->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFCeil, &FCeil_Parms, NULL );
	pfnFCeil->FunctionFlags |= 0x400;

	return FCeil_Parms.ReturnValue;
};

int UObject::FFloor ( float A )
{
	static UFunction* pfnFFloor = NULL;

	if ( !pfnFFloor )
		pfnFFloor = UObject::FindObject< UFunction >( "Function Core.Object.FFloor" );

	UObject_execFFloor_Parms FFloor_Parms;
	FFloor_Parms.A = A;

	pfnFFloor->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFFloor, &FFloor_Parms, NULL );
	pfnFFloor->FunctionFlags |= 0x400;

	return FFloor_Parms.ReturnValue;
};

int UObject::Round ( float A )
{
	static UFunction* pfnRound = NULL;

	if ( !pfnRound )
		pfnRound = UObject::FindObject< UFunction >( "Function Core.Object.Round" );

	UObject_execRound_Parms Round_Parms;
	Round_Parms.A = A;

	WORD NativeIndex = pfnRound->iNative;
	pfnRound->iNative = 0;

	pfnRound->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRound, &Round_Parms, NULL );
	pfnRound->FunctionFlags |= 0x400;

	pfnRound->iNative = NativeIndex;

	return Round_Parms.ReturnValue;
};

float UObject::Lerp ( float A, float B, float Alpha )
{
	static UFunction* pfnLerp = NULL;

	if ( !pfnLerp )
		pfnLerp = UObject::FindObject< UFunction >( "Function Core.Object.Lerp" );

	UObject_execLerp_Parms Lerp_Parms;
	Lerp_Parms.A = A;
	Lerp_Parms.B = B;
	Lerp_Parms.Alpha = Alpha;

	WORD NativeIndex = pfnLerp->iNative;
	pfnLerp->iNative = 0;

	pfnLerp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLerp, &Lerp_Parms, NULL );
	pfnLerp->FunctionFlags |= 0x400;

	pfnLerp->iNative = NativeIndex;

	return Lerp_Parms.ReturnValue;
};

float UObject::FClamp ( float V, float A, float B )
{
	static UFunction* pfnFClamp = NULL;

	if ( !pfnFClamp )
		pfnFClamp = UObject::FindObject< UFunction >( "Function Core.Object.FClamp" );

	UObject_execFClamp_Parms FClamp_Parms;
	FClamp_Parms.V = V;
	FClamp_Parms.A = A;
	FClamp_Parms.B = B;

	WORD NativeIndex = pfnFClamp->iNative;
	pfnFClamp->iNative = 0;

	pfnFClamp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFClamp, &FClamp_Parms, NULL );
	pfnFClamp->FunctionFlags |= 0x400;

	pfnFClamp->iNative = NativeIndex;

	return FClamp_Parms.ReturnValue;
};

float UObject::FMax ( float A, float B )
{
	static UFunction* pfnFMax = NULL;

	if ( !pfnFMax )
		pfnFMax = UObject::FindObject< UFunction >( "Function Core.Object.FMax" );

	UObject_execFMax_Parms FMax_Parms;
	FMax_Parms.A = A;
	FMax_Parms.B = B;

	WORD NativeIndex = pfnFMax->iNative;
	pfnFMax->iNative = 0;

	pfnFMax->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFMax, &FMax_Parms, NULL );
	pfnFMax->FunctionFlags |= 0x400;

	pfnFMax->iNative = NativeIndex;

	return FMax_Parms.ReturnValue;
};

float UObject::FMin ( float A, float B )
{
	static UFunction* pfnFMin = NULL;

	if ( !pfnFMin )
		pfnFMin = UObject::FindObject< UFunction >( "Function Core.Object.FMin" );

	UObject_execFMin_Parms FMin_Parms;
	FMin_Parms.A = A;
	FMin_Parms.B = B;

	WORD NativeIndex = pfnFMin->iNative;
	pfnFMin->iNative = 0;

	pfnFMin->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFMin, &FMin_Parms, NULL );
	pfnFMin->FunctionFlags |= 0x400;

	pfnFMin->iNative = NativeIndex;

	return FMin_Parms.ReturnValue;
};

float UObject::FRand ()
{
	static UFunction* pfnFRand = NULL;

	if ( !pfnFRand )
		pfnFRand = UObject::FindObject< UFunction >( "Function Core.Object.FRand" );

	UObject_execFRand_Parms FRand_Parms;

	WORD NativeIndex = pfnFRand->iNative;
	pfnFRand->iNative = 0;

	pfnFRand->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnFRand, &FRand_Parms, NULL );
	pfnFRand->FunctionFlags |= 0x400;

	pfnFRand->iNative = NativeIndex;

	return FRand_Parms.ReturnValue;
};

float UObject::Square ( float A )
{
	static UFunction* pfnSquare = NULL;

	if ( !pfnSquare )
		pfnSquare = UObject::FindObject< UFunction >( "Function Core.Object.Square" );

	UObject_execSquare_Parms Square_Parms;
	Square_Parms.A = A;

	WORD NativeIndex = pfnSquare->iNative;
	pfnSquare->iNative = 0;

	pfnSquare->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSquare, &Square_Parms, NULL );
	pfnSquare->FunctionFlags |= 0x400;

	pfnSquare->iNative = NativeIndex;

	return Square_Parms.ReturnValue;
};

float UObject::Sqrt ( float A )
{
	static UFunction* pfnSqrt = NULL;

	if ( !pfnSqrt )
		pfnSqrt = UObject::FindObject< UFunction >( "Function Core.Object.Sqrt" );

	UObject_execSqrt_Parms Sqrt_Parms;
	Sqrt_Parms.A = A;

	WORD NativeIndex = pfnSqrt->iNative;
	pfnSqrt->iNative = 0;

	pfnSqrt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSqrt, &Sqrt_Parms, NULL );
	pfnSqrt->FunctionFlags |= 0x400;

	pfnSqrt->iNative = NativeIndex;

	return Sqrt_Parms.ReturnValue;
};

float UObject::Loge ( float A )
{
	static UFunction* pfnLoge = NULL;

	if ( !pfnLoge )
		pfnLoge = UObject::FindObject< UFunction >( "Function Core.Object.Loge" );

	UObject_execLoge_Parms Loge_Parms;
	Loge_Parms.A = A;

	WORD NativeIndex = pfnLoge->iNative;
	pfnLoge->iNative = 0;

	pfnLoge->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLoge, &Loge_Parms, NULL );
	pfnLoge->FunctionFlags |= 0x400;

	pfnLoge->iNative = NativeIndex;

	return Loge_Parms.ReturnValue;
};

float UObject::Exp ( float A )
{
	static UFunction* pfnExp = NULL;

	if ( !pfnExp )
		pfnExp = UObject::FindObject< UFunction >( "Function Core.Object.Exp" );

	UObject_execExp_Parms Exp_Parms;
	Exp_Parms.A = A;

	WORD NativeIndex = pfnExp->iNative;
	pfnExp->iNative = 0;

	pfnExp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnExp, &Exp_Parms, NULL );
	pfnExp->FunctionFlags |= 0x400;

	pfnExp->iNative = NativeIndex;

	return Exp_Parms.ReturnValue;
};

float UObject::Atan2 ( float A, float B )
{
	static UFunction* pfnAtan2 = NULL;

	if ( !pfnAtan2 )
		pfnAtan2 = UObject::FindObject< UFunction >( "Function Core.Object.Atan2" );

	UObject_execAtan2_Parms Atan2_Parms;
	Atan2_Parms.A = A;
	Atan2_Parms.B = B;

	pfnAtan2->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAtan2, &Atan2_Parms, NULL );
	pfnAtan2->FunctionFlags |= 0x400;

	return Atan2_Parms.ReturnValue;
};

float UObject::Atan ( float A )
{
	static UFunction* pfnAtan = NULL;

	if ( !pfnAtan )
		pfnAtan = UObject::FindObject< UFunction >( "Function Core.Object.Atan" );

	UObject_execAtan_Parms Atan_Parms;
	Atan_Parms.A = A;

	WORD NativeIndex = pfnAtan->iNative;
	pfnAtan->iNative = 0;

	pfnAtan->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAtan, &Atan_Parms, NULL );
	pfnAtan->FunctionFlags |= 0x400;

	pfnAtan->iNative = NativeIndex;

	return Atan_Parms.ReturnValue;
};

float UObject::Tan ( float A )
{
	static UFunction* pfnTan = NULL;

	if ( !pfnTan )
		pfnTan = UObject::FindObject< UFunction >( "Function Core.Object.Tan" );

	UObject_execTan_Parms Tan_Parms;
	Tan_Parms.A = A;

	WORD NativeIndex = pfnTan->iNative;
	pfnTan->iNative = 0;

	pfnTan->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnTan, &Tan_Parms, NULL );
	pfnTan->FunctionFlags |= 0x400;

	pfnTan->iNative = NativeIndex;

	return Tan_Parms.ReturnValue;
};

float UObject::Acos ( float A )
{
	static UFunction* pfnAcos = NULL;

	if ( !pfnAcos )
		pfnAcos = UObject::FindObject< UFunction >( "Function Core.Object.Acos" );

	UObject_execAcos_Parms Acos_Parms;
	Acos_Parms.A = A;

	pfnAcos->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAcos, &Acos_Parms, NULL );
	pfnAcos->FunctionFlags |= 0x400;

	return Acos_Parms.ReturnValue;
};

float UObject::Cos ( float A )
{
	static UFunction* pfnCos = NULL;

	if ( !pfnCos )
		pfnCos = UObject::FindObject< UFunction >( "Function Core.Object.Cos" );

	UObject_execCos_Parms Cos_Parms;
	Cos_Parms.A = A;

	WORD NativeIndex = pfnCos->iNative;
	pfnCos->iNative = 0;

	pfnCos->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnCos, &Cos_Parms, NULL );
	pfnCos->FunctionFlags |= 0x400;

	pfnCos->iNative = NativeIndex;

	return Cos_Parms.ReturnValue;
};

float UObject::Asin ( float A )
{
	static UFunction* pfnAsin = NULL;

	if ( !pfnAsin )
		pfnAsin = UObject::FindObject< UFunction >( "Function Core.Object.Asin" );

	UObject_execAsin_Parms Asin_Parms;
	Asin_Parms.A = A;

	pfnAsin->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAsin, &Asin_Parms, NULL );
	pfnAsin->FunctionFlags |= 0x400;

	return Asin_Parms.ReturnValue;
};

float UObject::Sin ( float A )
{
	static UFunction* pfnSin = NULL;

	if ( !pfnSin )
		pfnSin = UObject::FindObject< UFunction >( "Function Core.Object.Sin" );

	UObject_execSin_Parms Sin_Parms;
	Sin_Parms.A = A;

	WORD NativeIndex = pfnSin->iNative;
	pfnSin->iNative = 0;

	pfnSin->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSin, &Sin_Parms, NULL );
	pfnSin->FunctionFlags |= 0x400;

	pfnSin->iNative = NativeIndex;

	return Sin_Parms.ReturnValue;
};

float UObject::Abs ( float A )
{
	static UFunction* pfnAbs = NULL;

	if ( !pfnAbs )
		pfnAbs = UObject::FindObject< UFunction >( "Function Core.Object.Abs" );

	UObject_execAbs_Parms Abs_Parms;
	Abs_Parms.A = A;

	WORD NativeIndex = pfnAbs->iNative;
	pfnAbs->iNative = 0;

	pfnAbs->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAbs, &Abs_Parms, NULL );
	pfnAbs->FunctionFlags |= 0x400;

	pfnAbs->iNative = NativeIndex;

	return Abs_Parms.ReturnValue;
};

float UObject::SubtractEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pfnSubtractEqual_FloatFloat = NULL;

	if ( !pfnSubtractEqual_FloatFloat )
		pfnSubtractEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_FloatFloat" );

	UObject_execSubtractEqual_FloatFloat_Parms SubtractEqual_FloatFloat_Parms;
	SubtractEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnSubtractEqual_FloatFloat->iNative;
	pfnSubtractEqual_FloatFloat->iNative = 0;

	pfnSubtractEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Parms, NULL );
	pfnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnSubtractEqual_FloatFloat->iNative = NativeIndex;

	if ( A )
		*A = SubtractEqual_FloatFloat_Parms.A; // CPF_OutParm

	return SubtractEqual_FloatFloat_Parms.ReturnValue;
};

float UObject::AddEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pfnAddEqual_FloatFloat = NULL;

	if ( !pfnAddEqual_FloatFloat )
		pfnAddEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.AddEqual_FloatFloat" );

	UObject_execAddEqual_FloatFloat_Parms AddEqual_FloatFloat_Parms;
	AddEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnAddEqual_FloatFloat->iNative;
	pfnAddEqual_FloatFloat->iNative = 0;

	pfnAddEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddEqual_FloatFloat, &AddEqual_FloatFloat_Parms, NULL );
	pfnAddEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnAddEqual_FloatFloat->iNative = NativeIndex;

	if ( A )
		*A = AddEqual_FloatFloat_Parms.A; // CPF_OutParm

	return AddEqual_FloatFloat_Parms.ReturnValue;
};

float UObject::DivideEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pfnDivideEqual_FloatFloat = NULL;

	if ( !pfnDivideEqual_FloatFloat )
		pfnDivideEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.DivideEqual_FloatFloat" );

	UObject_execDivideEqual_FloatFloat_Parms DivideEqual_FloatFloat_Parms;
	DivideEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnDivideEqual_FloatFloat->iNative;
	pfnDivideEqual_FloatFloat->iNative = 0;

	pfnDivideEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Parms, NULL );
	pfnDivideEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnDivideEqual_FloatFloat->iNative = NativeIndex;

	if ( A )
		*A = DivideEqual_FloatFloat_Parms.A; // CPF_OutParm

	return DivideEqual_FloatFloat_Parms.ReturnValue;
};

float UObject::MultiplyEqual_FloatFloat ( float B, float* A )
{
	static UFunction* pfnMultiplyEqual_FloatFloat = NULL;

	if ( !pfnMultiplyEqual_FloatFloat )
		pfnMultiplyEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_FloatFloat" );

	UObject_execMultiplyEqual_FloatFloat_Parms MultiplyEqual_FloatFloat_Parms;
	MultiplyEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_FloatFloat->iNative;
	pfnMultiplyEqual_FloatFloat->iNative = 0;

	pfnMultiplyEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Parms, NULL );
	pfnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnMultiplyEqual_FloatFloat->iNative = NativeIndex;

	if ( A )
		*A = MultiplyEqual_FloatFloat_Parms.A; // CPF_OutParm

	return MultiplyEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::NotEqual_FloatFloat ( float A, float B )
{
	static UFunction* pfnNotEqual_FloatFloat = NULL;

	if ( !pfnNotEqual_FloatFloat )
		pfnNotEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_FloatFloat" );

	UObject_execNotEqual_FloatFloat_Parms NotEqual_FloatFloat_Parms;
	NotEqual_FloatFloat_Parms.A = A;
	NotEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnNotEqual_FloatFloat->iNative;
	pfnNotEqual_FloatFloat->iNative = 0;

	pfnNotEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_FloatFloat, &NotEqual_FloatFloat_Parms, NULL );
	pfnNotEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnNotEqual_FloatFloat->iNative = NativeIndex;

	return NotEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::ComplementEqual_FloatFloat ( float A, float B )
{
	static UFunction* pfnComplementEqual_FloatFloat = NULL;

	if ( !pfnComplementEqual_FloatFloat )
		pfnComplementEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.ComplementEqual_FloatFloat" );

	UObject_execComplementEqual_FloatFloat_Parms ComplementEqual_FloatFloat_Parms;
	ComplementEqual_FloatFloat_Parms.A = A;
	ComplementEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnComplementEqual_FloatFloat->iNative;
	pfnComplementEqual_FloatFloat->iNative = 0;

	pfnComplementEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Parms, NULL );
	pfnComplementEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnComplementEqual_FloatFloat->iNative = NativeIndex;

	return ComplementEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::EqualEqual_FloatFloat ( float A, float B )
{
	static UFunction* pfnEqualEqual_FloatFloat = NULL;

	if ( !pfnEqualEqual_FloatFloat )
		pfnEqualEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_FloatFloat" );

	UObject_execEqualEqual_FloatFloat_Parms EqualEqual_FloatFloat_Parms;
	EqualEqual_FloatFloat_Parms.A = A;
	EqualEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnEqualEqual_FloatFloat->iNative;
	pfnEqualEqual_FloatFloat->iNative = 0;

	pfnEqualEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Parms, NULL );
	pfnEqualEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnEqualEqual_FloatFloat->iNative = NativeIndex;

	return EqualEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::GreaterEqual_FloatFloat ( float A, float B )
{
	static UFunction* pfnGreaterEqual_FloatFloat = NULL;

	if ( !pfnGreaterEqual_FloatFloat )
		pfnGreaterEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.GreaterEqual_FloatFloat" );

	UObject_execGreaterEqual_FloatFloat_Parms GreaterEqual_FloatFloat_Parms;
	GreaterEqual_FloatFloat_Parms.A = A;
	GreaterEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnGreaterEqual_FloatFloat->iNative;
	pfnGreaterEqual_FloatFloat->iNative = 0;

	pfnGreaterEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Parms, NULL );
	pfnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnGreaterEqual_FloatFloat->iNative = NativeIndex;

	return GreaterEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::LessEqual_FloatFloat ( float A, float B )
{
	static UFunction* pfnLessEqual_FloatFloat = NULL;

	if ( !pfnLessEqual_FloatFloat )
		pfnLessEqual_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.LessEqual_FloatFloat" );

	UObject_execLessEqual_FloatFloat_Parms LessEqual_FloatFloat_Parms;
	LessEqual_FloatFloat_Parms.A = A;
	LessEqual_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnLessEqual_FloatFloat->iNative;
	pfnLessEqual_FloatFloat->iNative = 0;

	pfnLessEqual_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLessEqual_FloatFloat, &LessEqual_FloatFloat_Parms, NULL );
	pfnLessEqual_FloatFloat->FunctionFlags |= 0x400;

	pfnLessEqual_FloatFloat->iNative = NativeIndex;

	return LessEqual_FloatFloat_Parms.ReturnValue;
};

bool UObject::Greater_FloatFloat ( float A, float B )
{
	static UFunction* pfnGreater_FloatFloat = NULL;

	if ( !pfnGreater_FloatFloat )
		pfnGreater_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Greater_FloatFloat" );

	UObject_execGreater_FloatFloat_Parms Greater_FloatFloat_Parms;
	Greater_FloatFloat_Parms.A = A;
	Greater_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnGreater_FloatFloat->iNative;
	pfnGreater_FloatFloat->iNative = 0;

	pfnGreater_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreater_FloatFloat, &Greater_FloatFloat_Parms, NULL );
	pfnGreater_FloatFloat->FunctionFlags |= 0x400;

	pfnGreater_FloatFloat->iNative = NativeIndex;

	return Greater_FloatFloat_Parms.ReturnValue;
};

bool UObject::Less_FloatFloat ( float A, float B )
{
	static UFunction* pfnLess_FloatFloat = NULL;

	if ( !pfnLess_FloatFloat )
		pfnLess_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Less_FloatFloat" );

	UObject_execLess_FloatFloat_Parms Less_FloatFloat_Parms;
	Less_FloatFloat_Parms.A = A;
	Less_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnLess_FloatFloat->iNative;
	pfnLess_FloatFloat->iNative = 0;

	pfnLess_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLess_FloatFloat, &Less_FloatFloat_Parms, NULL );
	pfnLess_FloatFloat->FunctionFlags |= 0x400;

	pfnLess_FloatFloat->iNative = NativeIndex;

	return Less_FloatFloat_Parms.ReturnValue;
};

float UObject::Subtract_FloatFloat ( float A, float B )
{
	static UFunction* pfnSubtract_FloatFloat = NULL;

	if ( !pfnSubtract_FloatFloat )
		pfnSubtract_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_FloatFloat" );

	UObject_execSubtract_FloatFloat_Parms Subtract_FloatFloat_Parms;
	Subtract_FloatFloat_Parms.A = A;
	Subtract_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnSubtract_FloatFloat->iNative;
	pfnSubtract_FloatFloat->iNative = 0;

	pfnSubtract_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_FloatFloat, &Subtract_FloatFloat_Parms, NULL );
	pfnSubtract_FloatFloat->FunctionFlags |= 0x400;

	pfnSubtract_FloatFloat->iNative = NativeIndex;

	return Subtract_FloatFloat_Parms.ReturnValue;
};

float UObject::Add_FloatFloat ( float A, float B )
{
	static UFunction* pfnAdd_FloatFloat = NULL;

	if ( !pfnAdd_FloatFloat )
		pfnAdd_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Add_FloatFloat" );

	UObject_execAdd_FloatFloat_Parms Add_FloatFloat_Parms;
	Add_FloatFloat_Parms.A = A;
	Add_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnAdd_FloatFloat->iNative;
	pfnAdd_FloatFloat->iNative = 0;

	pfnAdd_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAdd_FloatFloat, &Add_FloatFloat_Parms, NULL );
	pfnAdd_FloatFloat->FunctionFlags |= 0x400;

	pfnAdd_FloatFloat->iNative = NativeIndex;

	return Add_FloatFloat_Parms.ReturnValue;
};

float UObject::Percent_FloatFloat ( float A, float B )
{
	static UFunction* pfnPercent_FloatFloat = NULL;

	if ( !pfnPercent_FloatFloat )
		pfnPercent_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Percent_FloatFloat" );

	UObject_execPercent_FloatFloat_Parms Percent_FloatFloat_Parms;
	Percent_FloatFloat_Parms.A = A;
	Percent_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnPercent_FloatFloat->iNative;
	pfnPercent_FloatFloat->iNative = 0;

	pfnPercent_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPercent_FloatFloat, &Percent_FloatFloat_Parms, NULL );
	pfnPercent_FloatFloat->FunctionFlags |= 0x400;

	pfnPercent_FloatFloat->iNative = NativeIndex;

	return Percent_FloatFloat_Parms.ReturnValue;
};

float UObject::Divide_FloatFloat ( float A, float B )
{
	static UFunction* pfnDivide_FloatFloat = NULL;

	if ( !pfnDivide_FloatFloat )
		pfnDivide_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Divide_FloatFloat" );

	UObject_execDivide_FloatFloat_Parms Divide_FloatFloat_Parms;
	Divide_FloatFloat_Parms.A = A;
	Divide_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnDivide_FloatFloat->iNative;
	pfnDivide_FloatFloat->iNative = 0;

	pfnDivide_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivide_FloatFloat, &Divide_FloatFloat_Parms, NULL );
	pfnDivide_FloatFloat->FunctionFlags |= 0x400;

	pfnDivide_FloatFloat->iNative = NativeIndex;

	return Divide_FloatFloat_Parms.ReturnValue;
};

float UObject::Multiply_FloatFloat ( float A, float B )
{
	static UFunction* pfnMultiply_FloatFloat = NULL;

	if ( !pfnMultiply_FloatFloat )
		pfnMultiply_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_FloatFloat" );

	UObject_execMultiply_FloatFloat_Parms Multiply_FloatFloat_Parms;
	Multiply_FloatFloat_Parms.A = A;
	Multiply_FloatFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiply_FloatFloat->iNative;
	pfnMultiply_FloatFloat->iNative = 0;

	pfnMultiply_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_FloatFloat, &Multiply_FloatFloat_Parms, NULL );
	pfnMultiply_FloatFloat->FunctionFlags |= 0x400;

	pfnMultiply_FloatFloat->iNative = NativeIndex;

	return Multiply_FloatFloat_Parms.ReturnValue;
};

float UObject::MultiplyMultiply_FloatFloat ( float Base, float Exp )
{
	static UFunction* pfnMultiplyMultiply_FloatFloat = NULL;

	if ( !pfnMultiplyMultiply_FloatFloat )
		pfnMultiplyMultiply_FloatFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyMultiply_FloatFloat" );

	UObject_execMultiplyMultiply_FloatFloat_Parms MultiplyMultiply_FloatFloat_Parms;
	MultiplyMultiply_FloatFloat_Parms.Base = Base;
	MultiplyMultiply_FloatFloat_Parms.Exp = Exp;

	WORD NativeIndex = pfnMultiplyMultiply_FloatFloat->iNative;
	pfnMultiplyMultiply_FloatFloat->iNative = 0;

	pfnMultiplyMultiply_FloatFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Parms, NULL );
	pfnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;

	pfnMultiplyMultiply_FloatFloat->iNative = NativeIndex;

	return MultiplyMultiply_FloatFloat_Parms.ReturnValue;
};

float UObject::Subtract_PreFloat ( float A )
{
	static UFunction* pfnSubtract_PreFloat = NULL;

	if ( !pfnSubtract_PreFloat )
		pfnSubtract_PreFloat = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_PreFloat" );

	UObject_execSubtract_PreFloat_Parms Subtract_PreFloat_Parms;
	Subtract_PreFloat_Parms.A = A;

	WORD NativeIndex = pfnSubtract_PreFloat->iNative;
	pfnSubtract_PreFloat->iNative = 0;

	pfnSubtract_PreFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_PreFloat, &Subtract_PreFloat_Parms, NULL );
	pfnSubtract_PreFloat->FunctionFlags |= 0x400;

	pfnSubtract_PreFloat->iNative = NativeIndex;

	return Subtract_PreFloat_Parms.ReturnValue;
};

struct FString UObject::ToHex ( int A )
{
	static UFunction* pfnToHex = NULL;

	if ( !pfnToHex )
		pfnToHex = UObject::FindObject< UFunction >( "Function Core.Object.ToHex" );

	UObject_execToHex_Parms ToHex_Parms;
	ToHex_Parms.A = A;

	pfnToHex->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnToHex, &ToHex_Parms, NULL );
	pfnToHex->FunctionFlags |= 0x400;

	return ToHex_Parms.ReturnValue;
};

int UObject::Clamp ( int V, int A, int B )
{
	static UFunction* pfnClamp = NULL;

	if ( !pfnClamp )
		pfnClamp = UObject::FindObject< UFunction >( "Function Core.Object.Clamp" );

	UObject_execClamp_Parms Clamp_Parms;
	Clamp_Parms.V = V;
	Clamp_Parms.A = A;
	Clamp_Parms.B = B;

	WORD NativeIndex = pfnClamp->iNative;
	pfnClamp->iNative = 0;

	pfnClamp->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnClamp, &Clamp_Parms, NULL );
	pfnClamp->FunctionFlags |= 0x400;

	pfnClamp->iNative = NativeIndex;

	return Clamp_Parms.ReturnValue;
};

int UObject::Max ( int A, int B )
{
	static UFunction* pfnMax = NULL;

	if ( !pfnMax )
		pfnMax = UObject::FindObject< UFunction >( "Function Core.Object.Max" );

	UObject_execMax_Parms Max_Parms;
	Max_Parms.A = A;
	Max_Parms.B = B;

	WORD NativeIndex = pfnMax->iNative;
	pfnMax->iNative = 0;

	pfnMax->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMax, &Max_Parms, NULL );
	pfnMax->FunctionFlags |= 0x400;

	pfnMax->iNative = NativeIndex;

	return Max_Parms.ReturnValue;
};

int UObject::Min ( int A, int B )
{
	static UFunction* pfnMin = NULL;

	if ( !pfnMin )
		pfnMin = UObject::FindObject< UFunction >( "Function Core.Object.Min" );

	UObject_execMin_Parms Min_Parms;
	Min_Parms.A = A;
	Min_Parms.B = B;

	WORD NativeIndex = pfnMin->iNative;
	pfnMin->iNative = 0;

	pfnMin->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMin, &Min_Parms, NULL );
	pfnMin->FunctionFlags |= 0x400;

	pfnMin->iNative = NativeIndex;

	return Min_Parms.ReturnValue;
};

int UObject::Rand ( int Max )
{
	static UFunction* pfnRand = NULL;

	if ( !pfnRand )
		pfnRand = UObject::FindObject< UFunction >( "Function Core.Object.Rand" );

	UObject_execRand_Parms Rand_Parms;
	Rand_Parms.Max = Max;

	WORD NativeIndex = pfnRand->iNative;
	pfnRand->iNative = 0;

	pfnRand->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnRand, &Rand_Parms, NULL );
	pfnRand->FunctionFlags |= 0x400;

	pfnRand->iNative = NativeIndex;

	return Rand_Parms.ReturnValue;
};

int UObject::SubtractSubtract_Int ( int* A )
{
	static UFunction* pfnSubtractSubtract_Int = NULL;

	if ( !pfnSubtractSubtract_Int )
		pfnSubtractSubtract_Int = UObject::FindObject< UFunction >( "Function Core.Object.SubtractSubtract_Int" );

	UObject_execSubtractSubtract_Int_Parms SubtractSubtract_Int_Parms;

	WORD NativeIndex = pfnSubtractSubtract_Int->iNative;
	pfnSubtractSubtract_Int->iNative = 0;

	pfnSubtractSubtract_Int->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractSubtract_Int, &SubtractSubtract_Int_Parms, NULL );
	pfnSubtractSubtract_Int->FunctionFlags |= 0x400;

	pfnSubtractSubtract_Int->iNative = NativeIndex;

	if ( A )
		*A = SubtractSubtract_Int_Parms.A; // CPF_OutParm

	return SubtractSubtract_Int_Parms.ReturnValue;
};

int UObject::AddAdd_Int ( int* A )
{
	static UFunction* pfnAddAdd_Int = NULL;

	if ( !pfnAddAdd_Int )
		pfnAddAdd_Int = UObject::FindObject< UFunction >( "Function Core.Object.AddAdd_Int" );

	UObject_execAddAdd_Int_Parms AddAdd_Int_Parms;

	WORD NativeIndex = pfnAddAdd_Int->iNative;
	pfnAddAdd_Int->iNative = 0;

	pfnAddAdd_Int->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddAdd_Int, &AddAdd_Int_Parms, NULL );
	pfnAddAdd_Int->FunctionFlags |= 0x400;

	pfnAddAdd_Int->iNative = NativeIndex;

	if ( A )
		*A = AddAdd_Int_Parms.A; // CPF_OutParm

	return AddAdd_Int_Parms.ReturnValue;
};

int UObject::SubtractSubtract_PreInt ( int* A )
{
	static UFunction* pfnSubtractSubtract_PreInt = NULL;

	if ( !pfnSubtractSubtract_PreInt )
		pfnSubtractSubtract_PreInt = UObject::FindObject< UFunction >( "Function Core.Object.SubtractSubtract_PreInt" );

	UObject_execSubtractSubtract_PreInt_Parms SubtractSubtract_PreInt_Parms;

	WORD NativeIndex = pfnSubtractSubtract_PreInt->iNative;
	pfnSubtractSubtract_PreInt->iNative = 0;

	pfnSubtractSubtract_PreInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Parms, NULL );
	pfnSubtractSubtract_PreInt->FunctionFlags |= 0x400;

	pfnSubtractSubtract_PreInt->iNative = NativeIndex;

	if ( A )
		*A = SubtractSubtract_PreInt_Parms.A; // CPF_OutParm

	return SubtractSubtract_PreInt_Parms.ReturnValue;
};

int UObject::AddAdd_PreInt ( int* A )
{
	static UFunction* pfnAddAdd_PreInt = NULL;

	if ( !pfnAddAdd_PreInt )
		pfnAddAdd_PreInt = UObject::FindObject< UFunction >( "Function Core.Object.AddAdd_PreInt" );

	UObject_execAddAdd_PreInt_Parms AddAdd_PreInt_Parms;

	WORD NativeIndex = pfnAddAdd_PreInt->iNative;
	pfnAddAdd_PreInt->iNative = 0;

	pfnAddAdd_PreInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddAdd_PreInt, &AddAdd_PreInt_Parms, NULL );
	pfnAddAdd_PreInt->FunctionFlags |= 0x400;

	pfnAddAdd_PreInt->iNative = NativeIndex;

	if ( A )
		*A = AddAdd_PreInt_Parms.A; // CPF_OutParm

	return AddAdd_PreInt_Parms.ReturnValue;
};

int UObject::SubtractEqual_IntInt ( int B, int* A )
{
	static UFunction* pfnSubtractEqual_IntInt = NULL;

	if ( !pfnSubtractEqual_IntInt )
		pfnSubtractEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_IntInt" );

	UObject_execSubtractEqual_IntInt_Parms SubtractEqual_IntInt_Parms;
	SubtractEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnSubtractEqual_IntInt->iNative;
	pfnSubtractEqual_IntInt->iNative = 0;

	pfnSubtractEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_IntInt, &SubtractEqual_IntInt_Parms, NULL );
	pfnSubtractEqual_IntInt->FunctionFlags |= 0x400;

	pfnSubtractEqual_IntInt->iNative = NativeIndex;

	if ( A )
		*A = SubtractEqual_IntInt_Parms.A; // CPF_OutParm

	return SubtractEqual_IntInt_Parms.ReturnValue;
};

int UObject::AddEqual_IntInt ( int B, int* A )
{
	static UFunction* pfnAddEqual_IntInt = NULL;

	if ( !pfnAddEqual_IntInt )
		pfnAddEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.AddEqual_IntInt" );

	UObject_execAddEqual_IntInt_Parms AddEqual_IntInt_Parms;
	AddEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnAddEqual_IntInt->iNative;
	pfnAddEqual_IntInt->iNative = 0;

	pfnAddEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddEqual_IntInt, &AddEqual_IntInt_Parms, NULL );
	pfnAddEqual_IntInt->FunctionFlags |= 0x400;

	pfnAddEqual_IntInt->iNative = NativeIndex;

	if ( A )
		*A = AddEqual_IntInt_Parms.A; // CPF_OutParm

	return AddEqual_IntInt_Parms.ReturnValue;
};

int UObject::DivideEqual_IntFloat ( float B, int* A )
{
	static UFunction* pfnDivideEqual_IntFloat = NULL;

	if ( !pfnDivideEqual_IntFloat )
		pfnDivideEqual_IntFloat = UObject::FindObject< UFunction >( "Function Core.Object.DivideEqual_IntFloat" );

	UObject_execDivideEqual_IntFloat_Parms DivideEqual_IntFloat_Parms;
	DivideEqual_IntFloat_Parms.B = B;

	WORD NativeIndex = pfnDivideEqual_IntFloat->iNative;
	pfnDivideEqual_IntFloat->iNative = 0;

	pfnDivideEqual_IntFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivideEqual_IntFloat, &DivideEqual_IntFloat_Parms, NULL );
	pfnDivideEqual_IntFloat->FunctionFlags |= 0x400;

	pfnDivideEqual_IntFloat->iNative = NativeIndex;

	if ( A )
		*A = DivideEqual_IntFloat_Parms.A; // CPF_OutParm

	return DivideEqual_IntFloat_Parms.ReturnValue;
};

int UObject::MultiplyEqual_IntFloat ( float B, int* A )
{
	static UFunction* pfnMultiplyEqual_IntFloat = NULL;

	if ( !pfnMultiplyEqual_IntFloat )
		pfnMultiplyEqual_IntFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_IntFloat" );

	UObject_execMultiplyEqual_IntFloat_Parms MultiplyEqual_IntFloat_Parms;
	MultiplyEqual_IntFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_IntFloat->iNative;
	pfnMultiplyEqual_IntFloat->iNative = 0;

	pfnMultiplyEqual_IntFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Parms, NULL );
	pfnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;

	pfnMultiplyEqual_IntFloat->iNative = NativeIndex;

	if ( A )
		*A = MultiplyEqual_IntFloat_Parms.A; // CPF_OutParm

	return MultiplyEqual_IntFloat_Parms.ReturnValue;
};

int UObject::Or_IntInt ( int A, int B )
{
	static UFunction* pfnOr_IntInt = NULL;

	if ( !pfnOr_IntInt )
		pfnOr_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Or_IntInt" );

	UObject_execOr_IntInt_Parms Or_IntInt_Parms;
	Or_IntInt_Parms.A = A;
	Or_IntInt_Parms.B = B;

	WORD NativeIndex = pfnOr_IntInt->iNative;
	pfnOr_IntInt->iNative = 0;

	pfnOr_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnOr_IntInt, &Or_IntInt_Parms, NULL );
	pfnOr_IntInt->FunctionFlags |= 0x400;

	pfnOr_IntInt->iNative = NativeIndex;

	return Or_IntInt_Parms.ReturnValue;
};

int UObject::Xor_IntInt ( int A, int B )
{
	static UFunction* pfnXor_IntInt = NULL;

	if ( !pfnXor_IntInt )
		pfnXor_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Xor_IntInt" );

	UObject_execXor_IntInt_Parms Xor_IntInt_Parms;
	Xor_IntInt_Parms.A = A;
	Xor_IntInt_Parms.B = B;

	WORD NativeIndex = pfnXor_IntInt->iNative;
	pfnXor_IntInt->iNative = 0;

	pfnXor_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnXor_IntInt, &Xor_IntInt_Parms, NULL );
	pfnXor_IntInt->FunctionFlags |= 0x400;

	pfnXor_IntInt->iNative = NativeIndex;

	return Xor_IntInt_Parms.ReturnValue;
};

int UObject::And_IntInt ( int A, int B )
{
	static UFunction* pfnAnd_IntInt = NULL;

	if ( !pfnAnd_IntInt )
		pfnAnd_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.And_IntInt" );

	UObject_execAnd_IntInt_Parms And_IntInt_Parms;
	And_IntInt_Parms.A = A;
	And_IntInt_Parms.B = B;

	WORD NativeIndex = pfnAnd_IntInt->iNative;
	pfnAnd_IntInt->iNative = 0;

	pfnAnd_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAnd_IntInt, &And_IntInt_Parms, NULL );
	pfnAnd_IntInt->FunctionFlags |= 0x400;

	pfnAnd_IntInt->iNative = NativeIndex;

	return And_IntInt_Parms.ReturnValue;
};

bool UObject::NotEqual_IntInt ( int A, int B )
{
	static UFunction* pfnNotEqual_IntInt = NULL;

	if ( !pfnNotEqual_IntInt )
		pfnNotEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_IntInt" );

	UObject_execNotEqual_IntInt_Parms NotEqual_IntInt_Parms;
	NotEqual_IntInt_Parms.A = A;
	NotEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnNotEqual_IntInt->iNative;
	pfnNotEqual_IntInt->iNative = 0;

	pfnNotEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_IntInt, &NotEqual_IntInt_Parms, NULL );
	pfnNotEqual_IntInt->FunctionFlags |= 0x400;

	pfnNotEqual_IntInt->iNative = NativeIndex;

	return NotEqual_IntInt_Parms.ReturnValue;
};

bool UObject::EqualEqual_IntInt ( int A, int B )
{
	static UFunction* pfnEqualEqual_IntInt = NULL;

	if ( !pfnEqualEqual_IntInt )
		pfnEqualEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_IntInt" );

	UObject_execEqualEqual_IntInt_Parms EqualEqual_IntInt_Parms;
	EqualEqual_IntInt_Parms.A = A;
	EqualEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnEqualEqual_IntInt->iNative;
	pfnEqualEqual_IntInt->iNative = 0;

	pfnEqualEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_IntInt, &EqualEqual_IntInt_Parms, NULL );
	pfnEqualEqual_IntInt->FunctionFlags |= 0x400;

	pfnEqualEqual_IntInt->iNative = NativeIndex;

	return EqualEqual_IntInt_Parms.ReturnValue;
};

bool UObject::GreaterEqual_IntInt ( int A, int B )
{
	static UFunction* pfnGreaterEqual_IntInt = NULL;

	if ( !pfnGreaterEqual_IntInt )
		pfnGreaterEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.GreaterEqual_IntInt" );

	UObject_execGreaterEqual_IntInt_Parms GreaterEqual_IntInt_Parms;
	GreaterEqual_IntInt_Parms.A = A;
	GreaterEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnGreaterEqual_IntInt->iNative;
	pfnGreaterEqual_IntInt->iNative = 0;

	pfnGreaterEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterEqual_IntInt, &GreaterEqual_IntInt_Parms, NULL );
	pfnGreaterEqual_IntInt->FunctionFlags |= 0x400;

	pfnGreaterEqual_IntInt->iNative = NativeIndex;

	return GreaterEqual_IntInt_Parms.ReturnValue;
};

bool UObject::LessEqual_IntInt ( int A, int B )
{
	static UFunction* pfnLessEqual_IntInt = NULL;

	if ( !pfnLessEqual_IntInt )
		pfnLessEqual_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.LessEqual_IntInt" );

	UObject_execLessEqual_IntInt_Parms LessEqual_IntInt_Parms;
	LessEqual_IntInt_Parms.A = A;
	LessEqual_IntInt_Parms.B = B;

	WORD NativeIndex = pfnLessEqual_IntInt->iNative;
	pfnLessEqual_IntInt->iNative = 0;

	pfnLessEqual_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLessEqual_IntInt, &LessEqual_IntInt_Parms, NULL );
	pfnLessEqual_IntInt->FunctionFlags |= 0x400;

	pfnLessEqual_IntInt->iNative = NativeIndex;

	return LessEqual_IntInt_Parms.ReturnValue;
};

bool UObject::Greater_IntInt ( int A, int B )
{
	static UFunction* pfnGreater_IntInt = NULL;

	if ( !pfnGreater_IntInt )
		pfnGreater_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Greater_IntInt" );

	UObject_execGreater_IntInt_Parms Greater_IntInt_Parms;
	Greater_IntInt_Parms.A = A;
	Greater_IntInt_Parms.B = B;

	WORD NativeIndex = pfnGreater_IntInt->iNative;
	pfnGreater_IntInt->iNative = 0;

	pfnGreater_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreater_IntInt, &Greater_IntInt_Parms, NULL );
	pfnGreater_IntInt->FunctionFlags |= 0x400;

	pfnGreater_IntInt->iNative = NativeIndex;

	return Greater_IntInt_Parms.ReturnValue;
};

bool UObject::Less_IntInt ( int A, int B )
{
	static UFunction* pfnLess_IntInt = NULL;

	if ( !pfnLess_IntInt )
		pfnLess_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Less_IntInt" );

	UObject_execLess_IntInt_Parms Less_IntInt_Parms;
	Less_IntInt_Parms.A = A;
	Less_IntInt_Parms.B = B;

	WORD NativeIndex = pfnLess_IntInt->iNative;
	pfnLess_IntInt->iNative = 0;

	pfnLess_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLess_IntInt, &Less_IntInt_Parms, NULL );
	pfnLess_IntInt->FunctionFlags |= 0x400;

	pfnLess_IntInt->iNative = NativeIndex;

	return Less_IntInt_Parms.ReturnValue;
};

int UObject::GreaterGreaterGreater_IntInt ( int A, int B )
{
	static UFunction* pfnGreaterGreaterGreater_IntInt = NULL;

	if ( !pfnGreaterGreaterGreater_IntInt )
		pfnGreaterGreaterGreater_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.GreaterGreaterGreater_IntInt" );

	UObject_execGreaterGreaterGreater_IntInt_Parms GreaterGreaterGreater_IntInt_Parms;
	GreaterGreaterGreater_IntInt_Parms.A = A;
	GreaterGreaterGreater_IntInt_Parms.B = B;

	WORD NativeIndex = pfnGreaterGreaterGreater_IntInt->iNative;
	pfnGreaterGreaterGreater_IntInt->iNative = 0;

	pfnGreaterGreaterGreater_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Parms, NULL );
	pfnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pfnGreaterGreaterGreater_IntInt->iNative = NativeIndex;

	return GreaterGreaterGreater_IntInt_Parms.ReturnValue;
};

int UObject::GreaterGreater_IntInt ( int A, int B )
{
	static UFunction* pfnGreaterGreater_IntInt = NULL;

	if ( !pfnGreaterGreater_IntInt )
		pfnGreaterGreater_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.GreaterGreater_IntInt" );

	UObject_execGreaterGreater_IntInt_Parms GreaterGreater_IntInt_Parms;
	GreaterGreater_IntInt_Parms.A = A;
	GreaterGreater_IntInt_Parms.B = B;

	WORD NativeIndex = pfnGreaterGreater_IntInt->iNative;
	pfnGreaterGreater_IntInt->iNative = 0;

	pfnGreaterGreater_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnGreaterGreater_IntInt, &GreaterGreater_IntInt_Parms, NULL );
	pfnGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pfnGreaterGreater_IntInt->iNative = NativeIndex;

	return GreaterGreater_IntInt_Parms.ReturnValue;
};

int UObject::LessLess_IntInt ( int A, int B )
{
	static UFunction* pfnLessLess_IntInt = NULL;

	if ( !pfnLessLess_IntInt )
		pfnLessLess_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.LessLess_IntInt" );

	UObject_execLessLess_IntInt_Parms LessLess_IntInt_Parms;
	LessLess_IntInt_Parms.A = A;
	LessLess_IntInt_Parms.B = B;

	WORD NativeIndex = pfnLessLess_IntInt->iNative;
	pfnLessLess_IntInt->iNative = 0;

	pfnLessLess_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnLessLess_IntInt, &LessLess_IntInt_Parms, NULL );
	pfnLessLess_IntInt->FunctionFlags |= 0x400;

	pfnLessLess_IntInt->iNative = NativeIndex;

	return LessLess_IntInt_Parms.ReturnValue;
};

int UObject::Subtract_IntInt ( int A, int B )
{
	static UFunction* pfnSubtract_IntInt = NULL;

	if ( !pfnSubtract_IntInt )
		pfnSubtract_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_IntInt" );

	UObject_execSubtract_IntInt_Parms Subtract_IntInt_Parms;
	Subtract_IntInt_Parms.A = A;
	Subtract_IntInt_Parms.B = B;

	WORD NativeIndex = pfnSubtract_IntInt->iNative;
	pfnSubtract_IntInt->iNative = 0;

	pfnSubtract_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_IntInt, &Subtract_IntInt_Parms, NULL );
	pfnSubtract_IntInt->FunctionFlags |= 0x400;

	pfnSubtract_IntInt->iNative = NativeIndex;

	return Subtract_IntInt_Parms.ReturnValue;
};

int UObject::Add_IntInt ( int A, int B )
{
	static UFunction* pfnAdd_IntInt = NULL;

	if ( !pfnAdd_IntInt )
		pfnAdd_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Add_IntInt" );

	UObject_execAdd_IntInt_Parms Add_IntInt_Parms;
	Add_IntInt_Parms.A = A;
	Add_IntInt_Parms.B = B;

	WORD NativeIndex = pfnAdd_IntInt->iNative;
	pfnAdd_IntInt->iNative = 0;

	pfnAdd_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAdd_IntInt, &Add_IntInt_Parms, NULL );
	pfnAdd_IntInt->FunctionFlags |= 0x400;

	pfnAdd_IntInt->iNative = NativeIndex;

	return Add_IntInt_Parms.ReturnValue;
};

int UObject::Percent_IntInt ( int A, int B )
{
	static UFunction* pfnPercent_IntInt = NULL;

	if ( !pfnPercent_IntInt )
		pfnPercent_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Percent_IntInt" );

	UObject_execPercent_IntInt_Parms Percent_IntInt_Parms;
	Percent_IntInt_Parms.A = A;
	Percent_IntInt_Parms.B = B;

	WORD NativeIndex = pfnPercent_IntInt->iNative;
	pfnPercent_IntInt->iNative = 0;

	pfnPercent_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnPercent_IntInt, &Percent_IntInt_Parms, NULL );
	pfnPercent_IntInt->FunctionFlags |= 0x400;

	pfnPercent_IntInt->iNative = NativeIndex;

	return Percent_IntInt_Parms.ReturnValue;
};

int UObject::Divide_IntInt ( int A, int B )
{
	static UFunction* pfnDivide_IntInt = NULL;

	if ( !pfnDivide_IntInt )
		pfnDivide_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Divide_IntInt" );

	UObject_execDivide_IntInt_Parms Divide_IntInt_Parms;
	Divide_IntInt_Parms.A = A;
	Divide_IntInt_Parms.B = B;

	WORD NativeIndex = pfnDivide_IntInt->iNative;
	pfnDivide_IntInt->iNative = 0;

	pfnDivide_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivide_IntInt, &Divide_IntInt_Parms, NULL );
	pfnDivide_IntInt->FunctionFlags |= 0x400;

	pfnDivide_IntInt->iNative = NativeIndex;

	return Divide_IntInt_Parms.ReturnValue;
};

int UObject::Multiply_IntInt ( int A, int B )
{
	static UFunction* pfnMultiply_IntInt = NULL;

	if ( !pfnMultiply_IntInt )
		pfnMultiply_IntInt = UObject::FindObject< UFunction >( "Function Core.Object.Multiply_IntInt" );

	UObject_execMultiply_IntInt_Parms Multiply_IntInt_Parms;
	Multiply_IntInt_Parms.A = A;
	Multiply_IntInt_Parms.B = B;

	WORD NativeIndex = pfnMultiply_IntInt->iNative;
	pfnMultiply_IntInt->iNative = 0;

	pfnMultiply_IntInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiply_IntInt, &Multiply_IntInt_Parms, NULL );
	pfnMultiply_IntInt->FunctionFlags |= 0x400;

	pfnMultiply_IntInt->iNative = NativeIndex;

	return Multiply_IntInt_Parms.ReturnValue;
};

int UObject::Subtract_PreInt ( int A )
{
	static UFunction* pfnSubtract_PreInt = NULL;

	if ( !pfnSubtract_PreInt )
		pfnSubtract_PreInt = UObject::FindObject< UFunction >( "Function Core.Object.Subtract_PreInt" );

	UObject_execSubtract_PreInt_Parms Subtract_PreInt_Parms;
	Subtract_PreInt_Parms.A = A;

	WORD NativeIndex = pfnSubtract_PreInt->iNative;
	pfnSubtract_PreInt->iNative = 0;

	pfnSubtract_PreInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtract_PreInt, &Subtract_PreInt_Parms, NULL );
	pfnSubtract_PreInt->FunctionFlags |= 0x400;

	pfnSubtract_PreInt->iNative = NativeIndex;

	return Subtract_PreInt_Parms.ReturnValue;
};

int UObject::Complement_PreInt ( int A )
{
	static UFunction* pfnComplement_PreInt = NULL;

	if ( !pfnComplement_PreInt )
		pfnComplement_PreInt = UObject::FindObject< UFunction >( "Function Core.Object.Complement_PreInt" );

	UObject_execComplement_PreInt_Parms Complement_PreInt_Parms;
	Complement_PreInt_Parms.A = A;

	WORD NativeIndex = pfnComplement_PreInt->iNative;
	pfnComplement_PreInt->iNative = 0;

	pfnComplement_PreInt->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnComplement_PreInt, &Complement_PreInt_Parms, NULL );
	pfnComplement_PreInt->FunctionFlags |= 0x400;

	pfnComplement_PreInt->iNative = NativeIndex;

	return Complement_PreInt_Parms.ReturnValue;
};

unsigned char UObject::SubtractSubtract_Byte ( unsigned char* A )
{
	static UFunction* pfnSubtractSubtract_Byte = NULL;

	if ( !pfnSubtractSubtract_Byte )
		pfnSubtractSubtract_Byte = UObject::FindObject< UFunction >( "Function Core.Object.SubtractSubtract_Byte" );

	UObject_execSubtractSubtract_Byte_Parms SubtractSubtract_Byte_Parms;

	WORD NativeIndex = pfnSubtractSubtract_Byte->iNative;
	pfnSubtractSubtract_Byte->iNative = 0;

	pfnSubtractSubtract_Byte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractSubtract_Byte, &SubtractSubtract_Byte_Parms, NULL );
	pfnSubtractSubtract_Byte->FunctionFlags |= 0x400;

	pfnSubtractSubtract_Byte->iNative = NativeIndex;

	if ( A )
		*A = SubtractSubtract_Byte_Parms.A; // CPF_OutParm

	return SubtractSubtract_Byte_Parms.ReturnValue;
};

unsigned char UObject::AddAdd_Byte ( unsigned char* A )
{
	static UFunction* pfnAddAdd_Byte = NULL;

	if ( !pfnAddAdd_Byte )
		pfnAddAdd_Byte = UObject::FindObject< UFunction >( "Function Core.Object.AddAdd_Byte" );

	UObject_execAddAdd_Byte_Parms AddAdd_Byte_Parms;

	WORD NativeIndex = pfnAddAdd_Byte->iNative;
	pfnAddAdd_Byte->iNative = 0;

	pfnAddAdd_Byte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddAdd_Byte, &AddAdd_Byte_Parms, NULL );
	pfnAddAdd_Byte->FunctionFlags |= 0x400;

	pfnAddAdd_Byte->iNative = NativeIndex;

	if ( A )
		*A = AddAdd_Byte_Parms.A; // CPF_OutParm

	return AddAdd_Byte_Parms.ReturnValue;
};

unsigned char UObject::SubtractSubtract_PreByte ( unsigned char* A )
{
	static UFunction* pfnSubtractSubtract_PreByte = NULL;

	if ( !pfnSubtractSubtract_PreByte )
		pfnSubtractSubtract_PreByte = UObject::FindObject< UFunction >( "Function Core.Object.SubtractSubtract_PreByte" );

	UObject_execSubtractSubtract_PreByte_Parms SubtractSubtract_PreByte_Parms;

	WORD NativeIndex = pfnSubtractSubtract_PreByte->iNative;
	pfnSubtractSubtract_PreByte->iNative = 0;

	pfnSubtractSubtract_PreByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Parms, NULL );
	pfnSubtractSubtract_PreByte->FunctionFlags |= 0x400;

	pfnSubtractSubtract_PreByte->iNative = NativeIndex;

	if ( A )
		*A = SubtractSubtract_PreByte_Parms.A; // CPF_OutParm

	return SubtractSubtract_PreByte_Parms.ReturnValue;
};

unsigned char UObject::AddAdd_PreByte ( unsigned char* A )
{
	static UFunction* pfnAddAdd_PreByte = NULL;

	if ( !pfnAddAdd_PreByte )
		pfnAddAdd_PreByte = UObject::FindObject< UFunction >( "Function Core.Object.AddAdd_PreByte" );

	UObject_execAddAdd_PreByte_Parms AddAdd_PreByte_Parms;

	WORD NativeIndex = pfnAddAdd_PreByte->iNative;
	pfnAddAdd_PreByte->iNative = 0;

	pfnAddAdd_PreByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddAdd_PreByte, &AddAdd_PreByte_Parms, NULL );
	pfnAddAdd_PreByte->FunctionFlags |= 0x400;

	pfnAddAdd_PreByte->iNative = NativeIndex;

	if ( A )
		*A = AddAdd_PreByte_Parms.A; // CPF_OutParm

	return AddAdd_PreByte_Parms.ReturnValue;
};

unsigned char UObject::SubtractEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pfnSubtractEqual_ByteByte = NULL;

	if ( !pfnSubtractEqual_ByteByte )
		pfnSubtractEqual_ByteByte = UObject::FindObject< UFunction >( "Function Core.Object.SubtractEqual_ByteByte" );

	UObject_execSubtractEqual_ByteByte_Parms SubtractEqual_ByteByte_Parms;
	SubtractEqual_ByteByte_Parms.B = B;

	WORD NativeIndex = pfnSubtractEqual_ByteByte->iNative;
	pfnSubtractEqual_ByteByte->iNative = 0;

	pfnSubtractEqual_ByteByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Parms, NULL );
	pfnSubtractEqual_ByteByte->FunctionFlags |= 0x400;

	pfnSubtractEqual_ByteByte->iNative = NativeIndex;

	if ( A )
		*A = SubtractEqual_ByteByte_Parms.A; // CPF_OutParm

	return SubtractEqual_ByteByte_Parms.ReturnValue;
};

unsigned char UObject::AddEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pfnAddEqual_ByteByte = NULL;

	if ( !pfnAddEqual_ByteByte )
		pfnAddEqual_ByteByte = UObject::FindObject< UFunction >( "Function Core.Object.AddEqual_ByteByte" );

	UObject_execAddEqual_ByteByte_Parms AddEqual_ByteByte_Parms;
	AddEqual_ByteByte_Parms.B = B;

	WORD NativeIndex = pfnAddEqual_ByteByte->iNative;
	pfnAddEqual_ByteByte->iNative = 0;

	pfnAddEqual_ByteByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAddEqual_ByteByte, &AddEqual_ByteByte_Parms, NULL );
	pfnAddEqual_ByteByte->FunctionFlags |= 0x400;

	pfnAddEqual_ByteByte->iNative = NativeIndex;

	if ( A )
		*A = AddEqual_ByteByte_Parms.A; // CPF_OutParm

	return AddEqual_ByteByte_Parms.ReturnValue;
};

unsigned char UObject::DivideEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pfnDivideEqual_ByteByte = NULL;

	if ( !pfnDivideEqual_ByteByte )
		pfnDivideEqual_ByteByte = UObject::FindObject< UFunction >( "Function Core.Object.DivideEqual_ByteByte" );

	UObject_execDivideEqual_ByteByte_Parms DivideEqual_ByteByte_Parms;
	DivideEqual_ByteByte_Parms.B = B;

	WORD NativeIndex = pfnDivideEqual_ByteByte->iNative;
	pfnDivideEqual_ByteByte->iNative = 0;

	pfnDivideEqual_ByteByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnDivideEqual_ByteByte, &DivideEqual_ByteByte_Parms, NULL );
	pfnDivideEqual_ByteByte->FunctionFlags |= 0x400;

	pfnDivideEqual_ByteByte->iNative = NativeIndex;

	if ( A )
		*A = DivideEqual_ByteByte_Parms.A; // CPF_OutParm

	return DivideEqual_ByteByte_Parms.ReturnValue;
};

unsigned char UObject::MultiplyEqual_ByteFloat ( float B, unsigned char* A )
{
	static UFunction* pfnMultiplyEqual_ByteFloat = NULL;

	if ( !pfnMultiplyEqual_ByteFloat )
		pfnMultiplyEqual_ByteFloat = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_ByteFloat" );

	UObject_execMultiplyEqual_ByteFloat_Parms MultiplyEqual_ByteFloat_Parms;
	MultiplyEqual_ByteFloat_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_ByteFloat->iNative;
	pfnMultiplyEqual_ByteFloat->iNative = 0;

	pfnMultiplyEqual_ByteFloat->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Parms, NULL );
	pfnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;

	pfnMultiplyEqual_ByteFloat->iNative = NativeIndex;

	if ( A )
		*A = MultiplyEqual_ByteFloat_Parms.A; // CPF_OutParm

	return MultiplyEqual_ByteFloat_Parms.ReturnValue;
};

unsigned char UObject::MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A )
{
	static UFunction* pfnMultiplyEqual_ByteByte = NULL;

	if ( !pfnMultiplyEqual_ByteByte )
		pfnMultiplyEqual_ByteByte = UObject::FindObject< UFunction >( "Function Core.Object.MultiplyEqual_ByteByte" );

	UObject_execMultiplyEqual_ByteByte_Parms MultiplyEqual_ByteByte_Parms;
	MultiplyEqual_ByteByte_Parms.B = B;

	WORD NativeIndex = pfnMultiplyEqual_ByteByte->iNative;
	pfnMultiplyEqual_ByteByte->iNative = 0;

	pfnMultiplyEqual_ByteByte->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Parms, NULL );
	pfnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;

	pfnMultiplyEqual_ByteByte->iNative = NativeIndex;

	if ( A )
		*A = MultiplyEqual_ByteByte_Parms.A; // CPF_OutParm

	return MultiplyEqual_ByteByte_Parms.ReturnValue;
};

bool UObject::OrOr_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pfnOrOr_BoolBool = NULL;

	if ( !pfnOrOr_BoolBool )
		pfnOrOr_BoolBool = UObject::FindObject< UFunction >( "Function Core.Object.OrOr_BoolBool" );

	UObject_execOrOr_BoolBool_Parms OrOr_BoolBool_Parms;
	OrOr_BoolBool_Parms.A = A;
	OrOr_BoolBool_Parms.B = B;

	WORD NativeIndex = pfnOrOr_BoolBool->iNative;
	pfnOrOr_BoolBool->iNative = 0;

	pfnOrOr_BoolBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnOrOr_BoolBool, &OrOr_BoolBool_Parms, NULL );
	pfnOrOr_BoolBool->FunctionFlags |= 0x400;

	pfnOrOr_BoolBool->iNative = NativeIndex;

	return OrOr_BoolBool_Parms.ReturnValue;
};

bool UObject::XorXor_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pfnXorXor_BoolBool = NULL;

	if ( !pfnXorXor_BoolBool )
		pfnXorXor_BoolBool = UObject::FindObject< UFunction >( "Function Core.Object.XorXor_BoolBool" );

	UObject_execXorXor_BoolBool_Parms XorXor_BoolBool_Parms;
	XorXor_BoolBool_Parms.A = A;
	XorXor_BoolBool_Parms.B = B;

	WORD NativeIndex = pfnXorXor_BoolBool->iNative;
	pfnXorXor_BoolBool->iNative = 0;

	pfnXorXor_BoolBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnXorXor_BoolBool, &XorXor_BoolBool_Parms, NULL );
	pfnXorXor_BoolBool->FunctionFlags |= 0x400;

	pfnXorXor_BoolBool->iNative = NativeIndex;

	return XorXor_BoolBool_Parms.ReturnValue;
};

bool UObject::AndAnd_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pfnAndAnd_BoolBool = NULL;

	if ( !pfnAndAnd_BoolBool )
		pfnAndAnd_BoolBool = UObject::FindObject< UFunction >( "Function Core.Object.AndAnd_BoolBool" );

	UObject_execAndAnd_BoolBool_Parms AndAnd_BoolBool_Parms;
	AndAnd_BoolBool_Parms.A = A;
	AndAnd_BoolBool_Parms.B = B;

	WORD NativeIndex = pfnAndAnd_BoolBool->iNative;
	pfnAndAnd_BoolBool->iNative = 0;

	pfnAndAnd_BoolBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnAndAnd_BoolBool, &AndAnd_BoolBool_Parms, NULL );
	pfnAndAnd_BoolBool->FunctionFlags |= 0x400;

	pfnAndAnd_BoolBool->iNative = NativeIndex;

	return AndAnd_BoolBool_Parms.ReturnValue;
};

bool UObject::NotEqual_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pfnNotEqual_BoolBool = NULL;

	if ( !pfnNotEqual_BoolBool )
		pfnNotEqual_BoolBool = UObject::FindObject< UFunction >( "Function Core.Object.NotEqual_BoolBool" );

	UObject_execNotEqual_BoolBool_Parms NotEqual_BoolBool_Parms;
	NotEqual_BoolBool_Parms.A = A;
	NotEqual_BoolBool_Parms.B = B;

	WORD NativeIndex = pfnNotEqual_BoolBool->iNative;
	pfnNotEqual_BoolBool->iNative = 0;

	pfnNotEqual_BoolBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNotEqual_BoolBool, &NotEqual_BoolBool_Parms, NULL );
	pfnNotEqual_BoolBool->FunctionFlags |= 0x400;

	pfnNotEqual_BoolBool->iNative = NativeIndex;

	return NotEqual_BoolBool_Parms.ReturnValue;
};

bool UObject::EqualEqual_BoolBool ( unsigned long A, unsigned long B )
{
	static UFunction* pfnEqualEqual_BoolBool = NULL;

	if ( !pfnEqualEqual_BoolBool )
		pfnEqualEqual_BoolBool = UObject::FindObject< UFunction >( "Function Core.Object.EqualEqual_BoolBool" );

	UObject_execEqualEqual_BoolBool_Parms EqualEqual_BoolBool_Parms;
	EqualEqual_BoolBool_Parms.A = A;
	EqualEqual_BoolBool_Parms.B = B;

	WORD NativeIndex = pfnEqualEqual_BoolBool->iNative;
	pfnEqualEqual_BoolBool->iNative = 0;

	pfnEqualEqual_BoolBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnEqualEqual_BoolBool, &EqualEqual_BoolBool_Parms, NULL );
	pfnEqualEqual_BoolBool->FunctionFlags |= 0x400;

	pfnEqualEqual_BoolBool->iNative = NativeIndex;

	return EqualEqual_BoolBool_Parms.ReturnValue;
};

bool UObject::Not_PreBool ( unsigned long A )
{
	static UFunction* pfnNot_PreBool = NULL;

	if ( !pfnNot_PreBool )
		pfnNot_PreBool = UObject::FindObject< UFunction >( "Function Core.Object.Not_PreBool" );

	UObject_execNot_PreBool_Parms Not_PreBool_Parms;
	Not_PreBool_Parms.A = A;

	WORD NativeIndex = pfnNot_PreBool->iNative;
	pfnNot_PreBool->iNative = 0;

	pfnNot_PreBool->FunctionFlags |= ~0x400;
	this->ProcessEvent( pfnNot_PreBool, &Not_PreBool_Parms, NULL );
	pfnNot_PreBool->FunctionFlags |= 0x400;

	pfnNot_PreBool->iNative = NativeIndex;

	return Not_PreBool_Parms.ReturnValue;
};

