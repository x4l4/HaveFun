/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UObject.h
// Date: 06/16/2011 @ 05:19:38.827
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_InvAspectRatio16x9                   0.56249
#define Const_InvAspectRatio5x4                    0.8
#define Const_InvAspectRatio4x3                    0.75
#define Const_AspectRatio16x9                      1.77778
#define Const_AspectRatio5x4                       1.25
#define Const_AspectRatio4x3                       1.33333
#define Const_INDEX_NONE                           -1
#define Const_RadToUnrRot                          10430.3783504704527
#define Const_UnrRotToRad                          0.00009587379924285
#define Const_DegToRad                             0.017453292519943296
#define Const_RadToDeg                             57.295779513082321600
#define Const_Pi                                   3.1415926535897932
#define Const_MaxInt                               0x7fffffff

enum EAutomatedRunResult
{
	ARR_Unknown = 0,
	ARR_OOM = 1,
	ARR_Passed = 2,
	ARR_MAX = 3
};

enum ETickingGroup
{
	TG_PreAsyncWork = 0,
	TG_DuringAsyncWork = 1,
	TG_PostAsyncWork = 2,
	TG_PostUpdateWork = 3,
	TG_MAX = 4
};

enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents = 0,
	IMT_UseFixedTangentEval = 1,
	IMT_UseBrokenTangentEval = 2,
	IMT_MAX = 3
};

enum EInterpCurveMode
{
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

enum EInputEvent
{
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

enum EAxis
{
	AXIS_NONE = 0,
	AXIS_X = 1,
	AXIS_Y = 2,
	AXIS_BLANK = 3,
	AXIS_Z = 4,
	AXIS_MAX = 5
};

struct UObject_execTransformVectorByRotation_Parms
{
	struct FRotator SourceRotation;
	struct FVector SourceVector;
	unsigned long bInverse : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execGetPackageName_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execIsPendingKill_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execByteToFloat_Parms
{
	unsigned char inputByte;
	unsigned long bSigned : 1;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execFloatToByte_Parms
{
	float inputFloat;
	unsigned long bSigned : 1;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execUnwindHeading_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execFindDeltaAngle_Parms
{
	float A1;
	float A2;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execGetHeadingAngle_Parms
{
	struct FVector Dir;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execGetAngularDegreesFromRadians_Parms
{
	struct FVector2D OutFOV; // CPF_OutParm
};// FUNC_Final

struct UObject_execGetAngularFromDotDist_Parms
{
	struct FVector2D OutAngDist; // CPF_OutParm
	struct FVector2D DotDist;
};// FUNC_Final FUNC_Native

struct UObject_execGetAngularDistance_Parms
{
	struct FVector2D OutAngularDist; // CPF_OutParm
	struct FVector Direction;
	struct FVector AxisX;
	struct FVector AxisY;
	struct FVector AxisZ;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execGetDotDistance_Parms
{
	struct FVector2D OutDotDist; // CPF_OutParm
	struct FVector Direction;
	struct FVector AxisX;
	struct FVector AxisY;
	struct FVector AxisZ;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execPointInBox_Parms
{
	struct FVector Point;
	struct FVector Location;
	struct FVector Extent;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execPointDistToPlane_Parms
{
	struct FVector Point;
	struct FRotator Orientation;
	struct FVector Origin;
	struct FVector out_ClosestPoint; // CPF_OutParm
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execPointDistToSegment_Parms
{
	struct FVector Point;
	struct FVector StartPoint;
	struct FVector EndPoint;
	struct FVector OutClosestPoint; // CPF_OutParm
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execPointDistToLine_Parms
{
	struct FVector Point;
	struct FVector Line;
	struct FVector Origin;
	struct FVector OutClosestPoint; // CPF_OutParm
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execGetPerObjectConfigSections_Parms
{
	class UClass* SearchClass;
	TArray< struct FString > out_SectionNames; // CPF_OutParm
	class UObject* ObjectOuter;
	int MaxResults;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execStaticSaveConfig_Parms
{
};// FUNC_Final FUNC_Native

struct UObject_execSaveConfig_Parms
{
};// FUNC_Final FUNC_Native NativeIndex[0x0218]

struct UObject_execFindObject_Parms
{
	struct FString ObjectName;
	class UClass* ObjectClass;
	class UObject* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execDynamicLoadObject_Parms
{
	struct FString ObjectName;
	class UClass* ObjectClass;
	unsigned long MayFail : 1;
	class UObject* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execGetEnum_Parms
{
	class UObject* E;
	int I;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execDisable_Parms
{
	struct FName ProbeFunc;
};// FUNC_Final FUNC_Native NativeIndex[0x0076]

struct UObject_execEnable_Parms
{
	struct FName ProbeFunc;
};// FUNC_Final FUNC_Native NativeIndex[0x0075]

struct UObject_eventContinuedState_Parms
{
};// FUNC_Event

struct UObject_eventPausedState_Parms
{
};// FUNC_Event

struct UObject_eventPoppedState_Parms
{
};// FUNC_Event

struct UObject_eventPushedState_Parms
{
};// FUNC_Event

struct UObject_eventEndState_Parms
{
	struct FName NextStateName;
};// FUNC_Event

struct UObject_eventBeginState_Parms
{
	struct FName PreviousStateName;
};// FUNC_Event

struct UObject_execDumpStateStack_Parms
{
};// FUNC_Final FUNC_Native

struct UObject_execPopState_Parms
{
	unsigned long bPopAll : 1;
};// FUNC_Final FUNC_Native

struct UObject_execPushState_Parms
{
	struct FName NewState;
	struct FName NewLabel;
};// FUNC_Final FUNC_Native

struct UObject_execGetStateName_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x011C]

struct UObject_execIsChildState_Parms
{
	struct FName TestState;
	struct FName TestParentState;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execIsInState_Parms
{
	struct FName TestState;
	unsigned long bTestStateStack : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0119]

struct UObject_execGotoState_Parms
{
	struct FName NewState;
	struct FName Label;
	unsigned long bForceEvents : 1;
	unsigned long bKeepStack : 1;
};// FUNC_Final FUNC_Native NativeIndex[0x0071]

struct UObject_execIsUTracing_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execSetUTracing_Parms
{
	unsigned long bShouldUTrace : 1;
};// FUNC_Final FUNC_Native

struct UObject_execGetFuncName_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execDebugBreak_Parms
{
};// FUNC_Final FUNC_Native

struct UObject_execScriptTrace_Parms
{
};// FUNC_Final FUNC_Native

struct UObject_execLocalize_Parms
{
	struct FString SectionName;
	struct FString KeyName;
	struct FString PackageName;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UObject_execWarnInternal_Parms
{
	struct FString S;
};// FUNC_Final FUNC_Native NativeIndex[0x00E8]

struct UObject_execLogInternal_Parms
{
	struct FString S;
	struct FName Tag;
};// FUNC_Final FUNC_Native NativeIndex[0x00E7]

struct UObject_execSubtract_LinearColorLinearColor_Parms
{
	struct FLinearColor A;
	struct FLinearColor B;
	struct FLinearColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execMultiply_LinearColorFloat_Parms
{
	struct FLinearColor LC;
	float Mult;
	struct FLinearColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execColorToLinearColor_Parms
{
	struct FColor OldColor;
	struct FLinearColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execMakeLinearColor_Parms
{
	float R;
	float G;
	float B;
	float A;
	struct FLinearColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execMakeColor_Parms
{
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execAdd_ColorColor_Parms
{
	struct FColor A;
	struct FColor B;
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execMultiply_ColorFloat_Parms
{
	struct FColor A;
	float B;
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execMultiply_FloatColor_Parms
{
	float A;
	struct FColor B;
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execSubtract_ColorColor_Parms
{
	struct FColor A;
	struct FColor B;
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execvect2d_Parms
{
	float InX;
	float InY;
	struct FVector2D ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execGetMappedRangeValue_Parms
{
	struct FVector2D InputRange;
	struct FVector2D OutputRange;
	float Value;
	float ReturnValue; // CPF_ReturnParm
};

struct UObject_execGetRangePctByValue_Parms
{
	struct FVector2D Range;
	float Value;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execGetRangeValueByPct_Parms
{
	struct FVector2D Range;
	float Pct;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execSubtract_QuatQuat_Parms
{
	struct FQuat A;
	struct FQuat B;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x010F]

struct UObject_execAdd_QuatQuat_Parms
{
	struct FQuat A;
	struct FQuat B;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x010E]

struct UObject_execQuatSlerp_Parms
{
	struct FQuat A;
	struct FQuat B;
	float Alpha;
	unsigned long bShortestPath : 1;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatToRotator_Parms
{
	struct FQuat A;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatFromRotator_Parms
{
	struct FRotator A;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatFromAxisAndAngle_Parms
{
	struct FVector Axis;
	float Angle;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatFindBetween_Parms
{
	struct FVector A;
	struct FVector B;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatRotateVector_Parms
{
	struct FQuat A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatInvert_Parms
{
	struct FQuat A;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatDot_Parms
{
	struct FQuat A;
	struct FQuat B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execQuatProduct_Parms
{
	struct FQuat A;
	struct FQuat B;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execMatrixGetAxis_Parms
{
	struct FMatrix TM;
	unsigned char Axis;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execMatrixGetOrigin_Parms
{
	struct FMatrix TM;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execMatrixGetRotator_Parms
{
	struct FMatrix TM;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execMakeRotationTranslationMatrix_Parms
{
	struct FVector Translation;
	struct FRotator Rotation;
	struct FMatrix ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execInverseTransformNormal_Parms
{
	struct FMatrix TM;
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execTransformNormal_Parms
{
	struct FMatrix TM;
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execInverseTransformVector_Parms
{
	struct FMatrix TM;
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execTransformVector_Parms
{
	struct FMatrix TM;
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execMultiply_MatrixMatrix_Parms
{
	struct FMatrix A;
	struct FMatrix B;
	struct FMatrix ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execNotEqual_NameName_Parms
{
	struct FName A;
	struct FName B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FF]

struct UObject_execEqualEqual_NameName_Parms
{
	struct FName A;
	struct FName B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FE]

struct UObject_execIsA_Parms
{
	struct FName ClassName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C5]

struct UObject_execClassIsChildOf_Parms
{
	class UClass* TestClass;
	class UClass* ParentClass;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0102]

struct UObject_execNotEqual_InterfaceInterface_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execEqualEqual_InterfaceInterface_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execNotEqual_ObjectObject_Parms
{
	class UObject* A;
	class UObject* B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0077]

struct UObject_execEqualEqual_ObjectObject_Parms
{
	class UObject* A;
	class UObject* B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0072]

struct UObject_execPathName_Parms
{
	class UObject* CheckObject;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execSplitString_Parms
{
	struct FString Source;
	struct FString Delimiter;
	unsigned long bCullEmpty : 1;
	TArray< struct FString > ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execParseStringIntoArray_Parms
{
	struct FString BaseString;
	TArray< struct FString > Pieces; // CPF_OutParm
	struct FString delim;
	unsigned long bCullEmpty : 1;
};// FUNC_Final FUNC_Native

struct UObject_execJoinArray_Parms
{
	TArray< struct FString > StringArray;
	struct FString out_Result; // CPF_OutParm
	struct FString delim;
	unsigned long bIgnoreBlanks : 1;
};// FUNC_Final

struct UObject_execGetRightMost_Parms
{
	struct FString Text;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execSplit_Parms
{
	struct FString Text;
	struct FString SplitStr;
	unsigned long bOmitSplitStr : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execRepl_Parms
{
	struct FString Src;
	struct FString Match;
	struct FString With;
	unsigned long bCaseSensitive : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C9]

struct UObject_execAsc_Parms
{
	struct FString S;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00ED]

struct UObject_execChr_Parms
{
	int I;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00EC]

struct UObject_execLocs_Parms
{
	struct FString S;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00EE]

struct UObject_execCaps_Parms
{
	struct FString S;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00EB]

struct UObject_execRight_Parms
{
	struct FString S;
	int I;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00EA]

struct UObject_execLeft_Parms
{
	struct FString S;
	int I;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0080]

struct UObject_execMid_Parms
{
	struct FString S;
	int I;
	int J;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007F]

struct UObject_execInStr_Parms
{
	struct FString S;
	struct FString T;
	unsigned long bSearchFromRight : 1;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007E]

struct UObject_execLen_Parms
{
	struct FString S;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007D]

struct UObject_execSubtractEqual_StrStr_Parms
{
	struct FString A; // CPF_OutParm
	struct FString B;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0144]

struct UObject_execAtEqual_StrStr_Parms
{
	struct FString A; // CPF_OutParm
	struct FString B;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0143]

struct UObject_execConcatEqual_StrStr_Parms
{
	struct FString A; // CPF_OutParm
	struct FString B;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0142]

struct UObject_execComplementEqual_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007C]

struct UObject_execNotEqual_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007B]

struct UObject_execEqualEqual_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x007A]

struct UObject_execGreaterEqual_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0079]

struct UObject_execLessEqual_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0078]

struct UObject_execGreater_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0074]

struct UObject_execLess_StrStr_Parms
{
	struct FString A;
	struct FString B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0073]

struct UObject_execAt_StrStr_Parms
{
	struct FString A;
	struct FString B;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A8]

struct UObject_execConcat_StrStr_Parms
{
	struct FString A;
	struct FString B;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0070]

struct UObject_execSClampRotAxis_Parms
{
	float DeltaTime;
	int ViewAxis;
	int out_DeltaViewAxis; // CPF_OutParm
	int MaxLimit;
	int MinLimit;
	float InterpolationSpeed;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execClampRotAxisFromRange_Parms
{
	int Current;
	int Min;
	int Max;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execClampRotAxisFromBase_Parms
{
	int Current;
	int Center;
	int MaxDelta;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execClampRotAxis_Parms
{
	int ViewAxis;
	int out_DeltaViewAxis; // CPF_OutParm
	int MaxLimit;
	int MinLimit;
};// FUNC_Final

struct UObject_execRSize_Parms
{
	struct FRotator R;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execRDiff_Parms
{
	struct FRotator A;
	struct FRotator B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execNormalizeRotAxis_Parms
{
	int Angle;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execRInterpTo_Parms
{
	struct FRotator Current;
	struct FRotator Target;
	float DeltaTime;
	float InterpSpeed;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execRSmerp_Parms
{
	struct FRotator A;
	struct FRotator B;
	float Alpha;
	unsigned long bShortestPath : 1;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execRLerp_Parms
{
	struct FRotator A;
	struct FRotator B;
	float Alpha;
	unsigned long bShortestPath : 1;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execNormalize_Parms
{
	struct FRotator Rot;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execOrthoRotation_Parms
{
	struct FVector X;
	struct FVector Y;
	struct FVector Z;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execRotRand_Parms
{
	unsigned long bRoll : 1;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0140]

struct UObject_execGetUnAxes_Parms
{
	struct FRotator A;
	struct FVector X; // CPF_OutParm
	struct FVector Y; // CPF_OutParm
	struct FVector Z; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x00E6]

struct UObject_execGetAxes_Parms
{
	struct FRotator A;
	struct FVector X; // CPF_OutParm
	struct FVector Y; // CPF_OutParm
	struct FVector Z; // CPF_OutParm
};// FUNC_Final FUNC_Native NativeIndex[0x00E5]

struct UObject_execClockwiseFrom_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execSubtractEqual_RotatorRotator_Parms
{
	struct FRotator A; // CPF_OutParm
	struct FRotator B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x013F]

struct UObject_execAddEqual_RotatorRotator_Parms
{
	struct FRotator A; // CPF_OutParm
	struct FRotator B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x013E]

struct UObject_execSubtract_RotatorRotator_Parms
{
	struct FRotator A;
	struct FRotator B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x013D]

struct UObject_execAdd_RotatorRotator_Parms
{
	struct FRotator A;
	struct FRotator B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x013C]

struct UObject_execDivideEqual_RotatorFloat_Parms
{
	struct FRotator A; // CPF_OutParm
	float B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0123]

struct UObject_execMultiplyEqual_RotatorFloat_Parms
{
	struct FRotator A; // CPF_OutParm
	float B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0122]

struct UObject_execDivide_RotatorFloat_Parms
{
	struct FRotator A;
	float B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0121]

struct UObject_execMultiply_FloatRotator_Parms
{
	float A;
	struct FRotator B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0120]

struct UObject_execMultiply_RotatorFloat_Parms
{
	struct FRotator A;
	float B;
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x011F]

struct UObject_execNotEqual_RotatorRotator_Parms
{
	struct FRotator A;
	struct FRotator B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00CB]

struct UObject_execEqualEqual_RotatorRotator_Parms
{
	struct FRotator A;
	struct FRotator B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008E]

struct UObject_execClampLength_Parms
{
	struct FVector V;
	float MaxLength;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execVInterpTo_Parms
{
	struct FVector Current;
	struct FVector Target;
	float DeltaTime;
	float InterpSpeed;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execIsZero_Parms
{
	struct FVector A;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x05DD]

struct UObject_execProjectOnTo_Parms
{
	struct FVector X;
	struct FVector Y;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x05DC]

struct UObject_execMirrorVectorByNormal_Parms
{
	struct FVector InVect;
	struct FVector InNormal;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x012C]

struct UObject_execVRand_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FC]

struct UObject_execVSmerp_Parms
{
	struct FVector A;
	struct FVector B;
	float Alpha;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execVLerp_Parms
{
	struct FVector A;
	struct FVector B;
	float Alpha;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execNormal_Parms
{
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00E2]

struct UObject_execVSizeSq2D_Parms
{
	struct FVector A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execVSizeSq_Parms
{
	struct FVector A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execVSize2D_Parms
{
	struct FVector A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execVSize_Parms
{
	struct FVector A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00E1]

struct UObject_execSubtractEqual_VectorVector_Parms
{
	struct FVector A; // CPF_OutParm
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00E0]

struct UObject_execAddEqual_VectorVector_Parms
{
	struct FVector A; // CPF_OutParm
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DF]

struct UObject_execDivideEqual_VectorFloat_Parms
{
	struct FVector A; // CPF_OutParm
	float B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DE]

struct UObject_execMultiplyEqual_VectorVector_Parms
{
	struct FVector A; // CPF_OutParm
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0129]

struct UObject_execMultiplyEqual_VectorFloat_Parms
{
	struct FVector A; // CPF_OutParm
	float B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DD]

struct UObject_execCross_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DC]

struct UObject_execDot_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DB]

struct UObject_execNotEqual_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00DA]

struct UObject_execEqualEqual_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D9]

struct UObject_execGreaterGreater_VectorRotator_Parms
{
	struct FVector A;
	struct FRotator B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0114]

struct UObject_execLessLess_VectorRotator_Parms
{
	struct FVector A;
	struct FRotator B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0113]

struct UObject_execSubtract_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D8]

struct UObject_execAdd_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D7]

struct UObject_execDivide_VectorFloat_Parms
{
	struct FVector A;
	float B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D6]

struct UObject_execMultiply_VectorVector_Parms
{
	struct FVector A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0128]

struct UObject_execMultiply_FloatVector_Parms
{
	float A;
	struct FVector B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D5]

struct UObject_execMultiply_VectorFloat_Parms
{
	struct FVector A;
	float B;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D4]

struct UObject_execSubtract_PreVector_Parms
{
	struct FVector A;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D3]

struct UObject_execFInterpTo_Parms
{
	float Current;
	float Target;
	float DeltaTime;
	float InterpSpeed;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execFPctByRange_Parms
{
	float Value;
	float InMin;
	float InMax;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execRandRange_Parms
{
	float InMin;
	float InMax;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execFInterpEaseInOut_Parms
{
	float A;
	float B;
	float Alpha;
	float Exp;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execFInterpEaseOut_Parms
{
	float A;
	float B;
	float Alpha;
	float Exp;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execFInterpEaseIn_Parms
{
	float A;
	float B;
	float Alpha;
	float Exp;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UObject_execFCubicInterp_Parms
{
	float P0;
	float T0;
	float P1;
	float T1;
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execFCeil_Parms
{
	float A;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execFFloor_Parms
{
	float A;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execRound_Parms
{
	float A;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C7]

struct UObject_execLerp_Parms
{
	float A;
	float B;
	float Alpha;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F7]

struct UObject_execFClamp_Parms
{
	float V;
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F6]

struct UObject_execFMax_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F5]

struct UObject_execFMin_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F4]

struct UObject_execFRand_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C3]

struct UObject_execSquare_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C2]

struct UObject_execSqrt_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C1]

struct UObject_execLoge_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C0]

struct UObject_execExp_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BF]

struct UObject_execAtan2_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execAtan_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BE]

struct UObject_execTan_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BD]

struct UObject_execAcos_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execCos_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BC]

struct UObject_execAsin_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execSin_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BB]

struct UObject_execAbs_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00BA]

struct UObject_execSubtractEqual_FloatFloat_Parms
{
	float A; // CPF_OutParm
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B9]

struct UObject_execAddEqual_FloatFloat_Parms
{
	float A; // CPF_OutParm
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B8]

struct UObject_execDivideEqual_FloatFloat_Parms
{
	float A; // CPF_OutParm
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B7]

struct UObject_execMultiplyEqual_FloatFloat_Parms
{
	float A; // CPF_OutParm
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B6]

struct UObject_execNotEqual_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B5]

struct UObject_execComplementEqual_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00D2]

struct UObject_execEqualEqual_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B4]

struct UObject_execGreaterEqual_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B3]

struct UObject_execLessEqual_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B2]

struct UObject_execGreater_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B1]

struct UObject_execLess_FloatFloat_Parms
{
	float A;
	float B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00B0]

struct UObject_execSubtract_FloatFloat_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AF]

struct UObject_execAdd_FloatFloat_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AE]

struct UObject_execPercent_FloatFloat_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AD]

struct UObject_execDivide_FloatFloat_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AC]

struct UObject_execMultiply_FloatFloat_Parms
{
	float A;
	float B;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AB]

struct UObject_execMultiplyMultiply_FloatFloat_Parms
{
	float Base;
	float Exp;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00AA]

struct UObject_execSubtract_PreFloat_Parms
{
	float A;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A9]

struct UObject_execToHex_Parms
{
	int A;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UObject_execClamp_Parms
{
	int V;
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FB]

struct UObject_execMax_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FA]

struct UObject_execMin_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F9]

struct UObject_execRand_Parms
{
	int Max;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A7]

struct UObject_execSubtractSubtract_Int_Parms
{
	int A; // CPF_OutParm
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A6]

struct UObject_execAddAdd_Int_Parms
{
	int A; // CPF_OutParm
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A5]

struct UObject_execSubtractSubtract_PreInt_Parms
{
	int A; // CPF_OutParm
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A4]

struct UObject_execAddAdd_PreInt_Parms
{
	int A; // CPF_OutParm
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A3]

struct UObject_execSubtractEqual_IntInt_Parms
{
	int A; // CPF_OutParm
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A2]

struct UObject_execAddEqual_IntInt_Parms
{
	int A; // CPF_OutParm
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A1]

struct UObject_execDivideEqual_IntFloat_Parms
{
	int A; // CPF_OutParm
	float B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00A0]

struct UObject_execMultiplyEqual_IntFloat_Parms
{
	int A; // CPF_OutParm
	float B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009F]

struct UObject_execOr_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009E]

struct UObject_execXor_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009D]

struct UObject_execAnd_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009C]

struct UObject_execNotEqual_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009B]

struct UObject_execEqualEqual_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x009A]

struct UObject_execGreaterEqual_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0099]

struct UObject_execLessEqual_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0098]

struct UObject_execGreater_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0097]

struct UObject_execLess_IntInt_Parms
{
	int A;
	int B;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0096]

struct UObject_execGreaterGreaterGreater_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C4]

struct UObject_execGreaterGreater_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0095]

struct UObject_execLessLess_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0094]

struct UObject_execSubtract_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0093]

struct UObject_execAdd_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0092]

struct UObject_execPercent_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00FD]

struct UObject_execDivide_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0091]

struct UObject_execMultiply_IntInt_Parms
{
	int A;
	int B;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0090]

struct UObject_execSubtract_PreInt_Parms
{
	int A;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008F]

struct UObject_execComplement_PreInt_Parms
{
	int A;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008D]

struct UObject_execSubtractSubtract_Byte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008C]

struct UObject_execAddAdd_Byte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008B]

struct UObject_execSubtractSubtract_PreByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x008A]

struct UObject_execAddAdd_PreByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0089]

struct UObject_execSubtractEqual_ByteByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char B;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0088]

struct UObject_execAddEqual_ByteByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char B;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0087]

struct UObject_execDivideEqual_ByteByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char B;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0086]

struct UObject_execMultiplyEqual_ByteFloat_Parms
{
	unsigned char A; // CPF_OutParm
	float B;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00C6]

struct UObject_execMultiplyEqual_ByteByte_Parms
{
	unsigned char A; // CPF_OutParm
	unsigned char B;
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0085]

struct UObject_execOrOr_BoolBool_Parms
{
	unsigned long A : 1;
	unsigned long B : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0084]

struct UObject_execXorXor_BoolBool_Parms
{
	unsigned long A : 1;
	unsigned long B : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0083]

struct UObject_execAndAnd_BoolBool_Parms
{
	unsigned long A : 1;
	unsigned long B : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0082]

struct UObject_execNotEqual_BoolBool_Parms
{
	unsigned long A : 1;
	unsigned long B : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F3]

struct UObject_execEqualEqual_BoolBool_Parms
{
	unsigned long A : 1;
	unsigned long B : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x00F2]

struct UObject_execNot_PreBool_Parms
{
	unsigned long A : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native NativeIndex[0x0081]

// (0x3C)
class UObject
{
public:
	int                                                ObjectInternalInteger;                       // 0x0004 (0x0004)
	struct FQWord                                      ObjectFlags;                                 // 0x0008 (0x0008)
	struct FPointer                                    HashNext;                                    // 0x0010 (0x0004)
	struct FPointer                                    HashOuterNext;                               // 0x0014 (0x0004)
	struct FPointer                                    StateFrame;                                  // 0x0018 (0x0004)
	class UObject*                                     Linker;                                      // 0x001C (0x0004)
	struct FPointer                                    LinkerIndex;                                 // 0x0020 (0x0004)
	int                                                NetIndex;                                    // 0x0024 (0x0004)
	class UObject*                                     Outer;                                       // 0x0028 (0x0004)
	struct FName                                       Name;                                        // 0x002C (0x0008)
	class UClass*                                      Class;                                       // 0x0034 (0x0004)
	class UObject*                                     ObjectArchetype;                             // 0x0038 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Object" );

		return ClassPointer;
	};

public:
	static TArray< UObject* >* GObjObjects ();

	char* GetName ();
	char* GetNameCPP ();
	char* GetFullName ();
	bool IsA ( UClass* pClass );

	template< class T > static T* FindObject ( char* ObjectName );
	static UClass* FindClass ( char* ClassName );

public:
	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse/*CPF_OptionalParm*/ );
	struct FName GetPackageName ();
	bool IsPendingKill ();
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned/*CPF_OptionalParm*/ );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned/*CPF_OptionalParm*/ );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	bool PointInBox ( struct FVector Point, struct FVector Location, struct FVector Extent );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter/*CPF_OptionalParm*/, int MaxResults/*CPF_OptionalParm*/, TArray< struct FString >* out_SectionNames );
	void StaticSaveConfig ();
	void SaveConfig ();
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail/*CPF_OptionalParm*/ );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ();
	void eventPausedState ();
	void eventPoppedState ();
	void eventPushedState ();
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ();
	void PopState ( unsigned long bPopAll/*CPF_OptionalParm*/ );
	void PushState ( struct FName NewState, struct FName NewLabel/*CPF_OptionalParm*/ );
	struct FName GetStateName ();
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack/*CPF_OptionalParm*/ );
	void GotoState ( struct FName NewState/*CPF_OptionalParm*/, struct FName Label/*CPF_OptionalParm*/, unsigned long bForceEvents/*CPF_OptionalParm*/, unsigned long bKeepStack/*CPF_OptionalParm*/ );
	bool IsUTracing ();
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ();
	void DebugBreak ();
	void ScriptTrace ();
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag/*CPF_OptionalParm*/ );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A/*CPF_OptionalParm*/ );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetAxis ( struct FMatrix TM, unsigned char Axis );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ();
	bool EqualEqual_InterfaceInterface ();
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString PathName ( class UObject* CheckObject );
	TArray< struct FString > SplitString ( struct FString Source, struct FString Delimiter/*CPF_OptionalParm*/, unsigned long bCullEmpty/*CPF_OptionalParm*/ );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	void JoinArray ( TArray< struct FString > StringArray, struct FString delim/*CPF_OptionalParm*/, unsigned long bIgnoreBlanks/*CPF_OptionalParm*/, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr/*CPF_OptionalParm*/ );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive/*CPF_OptionalParm*/ );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J/*CPF_OptionalParm*/ );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight/*CPF_OptionalParm*/ );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed );
	struct FRotator RSmerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath/*CPF_OptionalParm*/ );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll/*CPF_OptionalParm*/ );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRand ();
	struct FVector VSmerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ();
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan2 ( float A, float B );
	float Atan ( float A );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Percent_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

public:
	virtual void VirtualFunction00();                                                                              // Address: 0x00470D50 Offset: 0x0000 [0]
	virtual void VirtualFunction01();                                                                              // Address: 0x0048E230 Offset: 0x0004 [1]
	virtual void VirtualFunction02();                                                                              // Address: 0x0048C490 Offset: 0x0008 [2]
	virtual void VirtualFunction03();                                                                              // Address: 0x00402520 Offset: 0x000C [3]
	virtual void VirtualFunction04();                                                                              // Address: 0x00402530 Offset: 0x0010 [4]
	virtual void VirtualFunction05();                                                                              // Address: 0x00402540 Offset: 0x0014 [5]
	virtual void VirtualFunction06();                                                                              // Address: 0x004E96F0 Offset: 0x0018 [6]
	virtual void VirtualFunction07();                                                                              // Address: 0x00470D00 Offset: 0x001C [7]
	virtual void VirtualFunction08();                                                                              // Address: 0x004EB460 Offset: 0x0020 [8]
	virtual void VirtualFunction09();                                                                              // Address: 0x00402550 Offset: 0x0024 [9]
	virtual void VirtualFunction10();                                                                              // Address: 0x004E4130 Offset: 0x0028 [10]
	virtual void VirtualFunction11();                                                                              // Address: 0x0047D430 Offset: 0x002C [11]
	virtual void VirtualFunction12();                                                                              // Address: 0x004927D0 Offset: 0x0030 [12]
	virtual void VirtualFunction13();                                                                              // Address: 0x004E1FD0 Offset: 0x0034 [13]
	virtual void VirtualFunction14();                                                                              // Address: 0x00437A40 Offset: 0x0038 [14]
	virtual void VirtualFunction15();                                                                              // Address: 0x004E1E70 Offset: 0x003C [15]
	virtual void VirtualFunction16();                                                                              // Address: 0x004E70F0 Offset: 0x0040 [16]
	virtual void VirtualFunction17();                                                                              // Address: 0x004E1E80 Offset: 0x0044 [17]
	virtual void VirtualFunction18();                                                                              // Address: 0x004E71C0 Offset: 0x0048 [18]
	virtual void VirtualFunction19();                                                                              // Address: 0x004E1E90 Offset: 0x004C [19]
	virtual void VirtualFunction20();                                                                              // Address: 0x004E1F00 Offset: 0x0050 [20]
	virtual void VirtualFunction21();                                                                              // Address: 0x004E1F10 Offset: 0x0054 [21]
	virtual void VirtualFunction22();                                                                              // Address: 0x00402560 Offset: 0x0058 [22]
	virtual void VirtualFunction23();                                                                              // Address: 0x00402570 Offset: 0x005C [23]
	virtual void VirtualFunction24();                                                                              // Address: 0x004E1EB0 Offset: 0x0060 [24]
	virtual void VirtualFunction25();                                                                              // Address: 0x004E1EC0 Offset: 0x0064 [25]
	virtual void VirtualFunction26();                                                                              // Address: 0x004E1ED0 Offset: 0x0068 [26]
	virtual void VirtualFunction27();                                                                              // Address: 0x004E1EE0 Offset: 0x006C [27]
	virtual void VirtualFunction28();                                                                              // Address: 0x004E1EF0 Offset: 0x0070 [28]
	virtual void VirtualFunction29();                                                                              // Address: 0x004E7290 Offset: 0x0074 [29]
	virtual void VirtualFunction30();                                                                              // Address: 0x004E7490 Offset: 0x0078 [30]
	virtual void VirtualFunction31();                                                                              // Address: 0x004E7680 Offset: 0x007C [31]
	virtual void VirtualFunction32();                                                                              // Address: 0x00479430 Offset: 0x0080 [32]
	virtual void VirtualFunction33();                                                                              // Address: 0x004F4330 Offset: 0x0084 [33]
	virtual void VirtualFunction34();                                                                              // Address: 0x00408810 Offset: 0x0088 [34]
	virtual void VirtualFunction35();                                                                              // Address: 0x00408840 Offset: 0x008C [35]
	virtual void VirtualFunction36();                                                                              // Address: 0x00408870 Offset: 0x0090 [36]
	virtual void VirtualFunction37();                                                                              // Address: 0x0040D7C0 Offset: 0x0094 [37]
	virtual void VirtualFunction38();                                                                              // Address: 0x00402580 Offset: 0x0098 [38]
	virtual void VirtualFunction39();                                                                              // Address: 0x00402590 Offset: 0x009C [39]
	virtual void VirtualFunction40();                                                                              // Address: 0x00927C20 Offset: 0x00A0 [40]
	virtual void VirtualFunction41();                                                                              // Address: 0x00937630 Offset: 0x00A4 [41]
	virtual void VirtualFunction42();                                                                              // Address: 0x004FA610 Offset: 0x00A8 [42]
	virtual void VirtualFunction43();                                                                              // Address: 0x00484DF0 Offset: 0x00AC [43]
	virtual void VirtualFunction44();                                                                              // Address: 0x004025A0 Offset: 0x00B0 [44]
	virtual void VirtualFunction45();                                                                              // Address: 0x004025B0 Offset: 0x00B4 [45]
	virtual void VirtualFunction46();                                                                              // Address: 0x00470AD0 Offset: 0x00B8 [46]
	virtual void VirtualFunction47();                                                                              // Address: 0x0048C350 Offset: 0x00BC [47]
	virtual void VirtualFunction48();                                                                              // Address: 0x004E5650 Offset: 0x00C0 [48]
	virtual void VirtualFunction49();                                                                              // Address: 0x00431810 Offset: 0x00C4 [49]
	virtual void VirtualFunction50();                                                                              // Address: 0x004E1E50 Offset: 0x00C8 [50]
	virtual void VirtualFunction51();                                                                              // Address: 0x004FA3D0 Offset: 0x00CC [51]
	virtual void VirtualFunction52();                                                                              // Address: 0x004F3830 Offset: 0x00D0 [52]
	virtual void VirtualFunction53();                                                                              // Address: 0x004025D0 Offset: 0x00D4 [53]
	virtual void VirtualFunction54();                                                                              // Address: 0x004025E0 Offset: 0x00D8 [54]
	virtual void VirtualFunction55();                                                                              // Address: 0x004025F0 Offset: 0x00DC [55]
	virtual void VirtualFunction56();                                                                              // Address: 0x00402610 Offset: 0x00E0 [56]
	virtual void VirtualFunction57();                                                                              // Address: 0x004FAC30 Offset: 0x00E4 [57]
	virtual void VirtualFunction58();                                                                              // Address: 0x004E2180 Offset: 0x00E8 [58]
	virtual void VirtualFunction59();                                                                              // Address: 0x0048B1C0 Offset: 0x00EC [59]
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );                  // Address: 0x004BAA90 Offset: 0x00F0 [60]
};

UClass* UObject::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif