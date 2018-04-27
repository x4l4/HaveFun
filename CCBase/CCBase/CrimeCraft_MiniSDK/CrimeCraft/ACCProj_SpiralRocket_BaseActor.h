/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocket_BaseActor.h
// Date: 06/16/2011 @ 05:19:41.838
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EEnemyLocationType
{
	ELT_Bottom = 0,
	ELT_Middle = 1,
	ELT_Head = 2,
	ELT_MAX = 3
};

struct ACCProj_SpiralRocket_BaseActor_execIncreaseRocketPhysicsTracesStatsCounter_Parms
{
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execGetEnemyLocation_Parms
{
	struct FEnemyInfo EnemyInfoStruct;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocket_BaseActor_execBuildEnemyInfo_Parms
{
	class ACCInstancePawn* InP;
	unsigned char InLocationType;
	struct FEnemyInfo ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocket_BaseActor_execDoSplineTrajectoryTest_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	float StartTraceTime;
	float FinishTraceTime;
	float TraceTimeDelta;
	float out_MinSplineRotationRadius; // CPF_OutParm
	float out_MaxSplineRotationRadius; // CPF_OutParm
	float out_MinSpeed; // CPF_OutParm
	float out_MaxSpeed; // CPF_OutParm
};

struct ACCProj_SpiralRocket_BaseActor_execSolveLinearSystem_Parms
{
	float A1;
	float B1;
	struct FVector C1;
	float A2;
	float B2;
	struct FVector c2;
	struct FVector X; // CPF_OutParm
	struct FVector Y; // CPF_OutParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execCalcSplineValues_Parms
{
	struct FInterpolationSpline InSpline; // CPF_OutParm
	float Intime;
	struct FVector OutLocation; // CPF_OutParm
	struct FVector OutVelocity; // CPF_OutParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execDoCalcSplineTrajectoryLength_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	float StartTime;
	float FinishTime;
	float TimeStep;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execCalcSplineLocationFor_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	float Intime;
	struct FVector OutVelocity; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execCalcSplineCurrentLocation_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	struct FVector OutVelocity; // CPF_OutParm
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execUpdateSplineTime_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execIsSplineFinished_Parms
{
	struct FInterpolationSpline Spline; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execBuildInterpolationSpline_Parms
{
	struct FVector StartLocation;
	struct FVector FinishLocation;
	struct FVector StartVelocity;
	struct FVector FinishVelocity;
	float SplineTime;
	struct FInterpolationSpline Spline; // CPF_OutParm
};// FUNC_Native

struct ACCProj_SpiralRocket_BaseActor_execReBuildInterpolationSpline_Parms
{
	struct FVector FinishLocation;
	struct FVector FinishVelocity;
	struct FInterpolationSpline Spline; // CPF_OutParm
};// FUNC_Native

// (0x1BC - 0x1BC)
class ACCProj_SpiralRocket_BaseActor : public AActor
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocket_BaseActor" );

		return ClassPointer;
	};

public:
	void IncreaseRocketPhysicsTracesStatsCounter ()
	{
		static UFunction* pfnIncreaseRocketPhysicsTracesStatsCounter = NULL;

		if ( !pfnIncreaseRocketPhysicsTracesStatsCounter )
			pfnIncreaseRocketPhysicsTracesStatsCounter = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.IncreaseRocketPhysicsTracesStatsCounter" );

		ACCProj_SpiralRocket_BaseActor_execIncreaseRocketPhysicsTracesStatsCounter_Parms IncreaseRocketPhysicsTracesStatsCounter_Parms;

		pfnIncreaseRocketPhysicsTracesStatsCounter->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIncreaseRocketPhysicsTracesStatsCounter, &IncreaseRocketPhysicsTracesStatsCounter_Parms, NULL );
		pfnIncreaseRocketPhysicsTracesStatsCounter->FunctionFlags |= 0x400;
	};

	struct FVector GetEnemyLocation ( struct FEnemyInfo EnemyInfoStruct )
	{
		static UFunction* pfnGetEnemyLocation = NULL;

		if ( !pfnGetEnemyLocation )
			pfnGetEnemyLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.GetEnemyLocation" );

		ACCProj_SpiralRocket_BaseActor_execGetEnemyLocation_Parms GetEnemyLocation_Parms;
		memcpy( &GetEnemyLocation_Parms.EnemyInfoStruct, &EnemyInfoStruct, 0xC );

		this->ProcessEvent( pfnGetEnemyLocation, &GetEnemyLocation_Parms, NULL );

		return GetEnemyLocation_Parms.ReturnValue;
	};

	struct FEnemyInfo BuildEnemyInfo ( class ACCInstancePawn* InP, unsigned char InLocationType )
	{
		static UFunction* pfnBuildEnemyInfo = NULL;

		if ( !pfnBuildEnemyInfo )
			pfnBuildEnemyInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.BuildEnemyInfo" );

		ACCProj_SpiralRocket_BaseActor_execBuildEnemyInfo_Parms BuildEnemyInfo_Parms;
		BuildEnemyInfo_Parms.InP = InP;
		BuildEnemyInfo_Parms.InLocationType = InLocationType;

		this->ProcessEvent( pfnBuildEnemyInfo, &BuildEnemyInfo_Parms, NULL );

		return BuildEnemyInfo_Parms.ReturnValue;
	};

	void DoSplineTrajectoryTest ( float StartTraceTime, float FinishTraceTime, float TraceTimeDelta, struct FInterpolationSpline* Spline, float* out_MinSplineRotationRadius, float* out_MaxSplineRotationRadius, float* out_MinSpeed, float* out_MaxSpeed )
	{
		static UFunction* pfnDoSplineTrajectoryTest = NULL;

		if ( !pfnDoSplineTrajectoryTest )
			pfnDoSplineTrajectoryTest = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.DoSplineTrajectoryTest" );

		ACCProj_SpiralRocket_BaseActor_execDoSplineTrajectoryTest_Parms DoSplineTrajectoryTest_Parms;
		DoSplineTrajectoryTest_Parms.StartTraceTime = StartTraceTime;
		DoSplineTrajectoryTest_Parms.FinishTraceTime = FinishTraceTime;
		DoSplineTrajectoryTest_Parms.TraceTimeDelta = TraceTimeDelta;

		this->ProcessEvent( pfnDoSplineTrajectoryTest, &DoSplineTrajectoryTest_Parms, NULL );

		if ( Spline )
			memcpy( Spline, &DoSplineTrajectoryTest_Parms.Spline, 0x38 ); // CPF_OutParm
		if ( out_MinSplineRotationRadius )
			*out_MinSplineRotationRadius = DoSplineTrajectoryTest_Parms.out_MinSplineRotationRadius; // CPF_OutParm
		if ( out_MaxSplineRotationRadius )
			*out_MaxSplineRotationRadius = DoSplineTrajectoryTest_Parms.out_MaxSplineRotationRadius; // CPF_OutParm
		if ( out_MinSpeed )
			*out_MinSpeed = DoSplineTrajectoryTest_Parms.out_MinSpeed; // CPF_OutParm
		if ( out_MaxSpeed )
			*out_MaxSpeed = DoSplineTrajectoryTest_Parms.out_MaxSpeed; // CPF_OutParm
	};

	void SolveLinearSystem ( float A1, float B1, struct FVector C1, float A2, float B2, struct FVector c2, struct FVector* X, struct FVector* Y )
	{
		static UFunction* pfnSolveLinearSystem = NULL;

		if ( !pfnSolveLinearSystem )
			pfnSolveLinearSystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.SolveLinearSystem" );

		ACCProj_SpiralRocket_BaseActor_execSolveLinearSystem_Parms SolveLinearSystem_Parms;
		SolveLinearSystem_Parms.A1 = A1;
		SolveLinearSystem_Parms.B1 = B1;
		memcpy( &SolveLinearSystem_Parms.C1, &C1, 0xC );
		SolveLinearSystem_Parms.A2 = A2;
		SolveLinearSystem_Parms.B2 = B2;
		memcpy( &SolveLinearSystem_Parms.c2, &c2, 0xC );

		pfnSolveLinearSystem->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSolveLinearSystem, &SolveLinearSystem_Parms, NULL );
		pfnSolveLinearSystem->FunctionFlags |= 0x400;

		if ( X )
			memcpy( X, &SolveLinearSystem_Parms.X, 0xC ); // CPF_OutParm
		if ( Y )
			memcpy( Y, &SolveLinearSystem_Parms.Y, 0xC ); // CPF_OutParm
	};

	void CalcSplineValues ( float Intime, struct FInterpolationSpline* InSpline, struct FVector* OutLocation, struct FVector* OutVelocity )
	{
		static UFunction* pfnCalcSplineValues = NULL;

		if ( !pfnCalcSplineValues )
			pfnCalcSplineValues = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.CalcSplineValues" );

		ACCProj_SpiralRocket_BaseActor_execCalcSplineValues_Parms CalcSplineValues_Parms;
		CalcSplineValues_Parms.Intime = Intime;

		pfnCalcSplineValues->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCalcSplineValues, &CalcSplineValues_Parms, NULL );
		pfnCalcSplineValues->FunctionFlags |= 0x400;

		if ( InSpline )
			memcpy( InSpline, &CalcSplineValues_Parms.InSpline, 0x38 ); // CPF_OutParm
		if ( OutLocation )
			memcpy( OutLocation, &CalcSplineValues_Parms.OutLocation, 0xC ); // CPF_OutParm
		if ( OutVelocity )
			memcpy( OutVelocity, &CalcSplineValues_Parms.OutVelocity, 0xC ); // CPF_OutParm
	};

	float DoCalcSplineTrajectoryLength ( float StartTime, float FinishTime, float TimeStep, struct FInterpolationSpline* Spline )
	{
		static UFunction* pfnDoCalcSplineTrajectoryLength = NULL;

		if ( !pfnDoCalcSplineTrajectoryLength )
			pfnDoCalcSplineTrajectoryLength = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.DoCalcSplineTrajectoryLength" );

		ACCProj_SpiralRocket_BaseActor_execDoCalcSplineTrajectoryLength_Parms DoCalcSplineTrajectoryLength_Parms;
		DoCalcSplineTrajectoryLength_Parms.StartTime = StartTime;
		DoCalcSplineTrajectoryLength_Parms.FinishTime = FinishTime;
		DoCalcSplineTrajectoryLength_Parms.TimeStep = TimeStep;

		pfnDoCalcSplineTrajectoryLength->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoCalcSplineTrajectoryLength, &DoCalcSplineTrajectoryLength_Parms, NULL );
		pfnDoCalcSplineTrajectoryLength->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &DoCalcSplineTrajectoryLength_Parms.Spline, 0x38 ); // CPF_OutParm

		return DoCalcSplineTrajectoryLength_Parms.ReturnValue;
	};

	struct FVector CalcSplineLocationFor ( float Intime, struct FInterpolationSpline* Spline, struct FVector* OutVelocity )
	{
		static UFunction* pfnCalcSplineLocationFor = NULL;

		if ( !pfnCalcSplineLocationFor )
			pfnCalcSplineLocationFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.CalcSplineLocationFor" );

		ACCProj_SpiralRocket_BaseActor_execCalcSplineLocationFor_Parms CalcSplineLocationFor_Parms;
		CalcSplineLocationFor_Parms.Intime = Intime;

		pfnCalcSplineLocationFor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCalcSplineLocationFor, &CalcSplineLocationFor_Parms, NULL );
		pfnCalcSplineLocationFor->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &CalcSplineLocationFor_Parms.Spline, 0x38 ); // CPF_OutParm
		if ( OutVelocity )
			memcpy( OutVelocity, &CalcSplineLocationFor_Parms.OutVelocity, 0xC ); // CPF_OutParm

		return CalcSplineLocationFor_Parms.ReturnValue;
	};

	struct FVector CalcSplineCurrentLocation ( struct FInterpolationSpline* Spline, struct FVector* OutVelocity )
	{
		static UFunction* pfnCalcSplineCurrentLocation = NULL;

		if ( !pfnCalcSplineCurrentLocation )
			pfnCalcSplineCurrentLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.CalcSplineCurrentLocation" );

		ACCProj_SpiralRocket_BaseActor_execCalcSplineCurrentLocation_Parms CalcSplineCurrentLocation_Parms;

		pfnCalcSplineCurrentLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCalcSplineCurrentLocation, &CalcSplineCurrentLocation_Parms, NULL );
		pfnCalcSplineCurrentLocation->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &CalcSplineCurrentLocation_Parms.Spline, 0x38 ); // CPF_OutParm
		if ( OutVelocity )
			memcpy( OutVelocity, &CalcSplineCurrentLocation_Parms.OutVelocity, 0xC ); // CPF_OutParm

		return CalcSplineCurrentLocation_Parms.ReturnValue;
	};

	float UpdateSplineTime ( float DeltaTime, struct FInterpolationSpline* Spline )
	{
		static UFunction* pfnUpdateSplineTime = NULL;

		if ( !pfnUpdateSplineTime )
			pfnUpdateSplineTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.UpdateSplineTime" );

		ACCProj_SpiralRocket_BaseActor_execUpdateSplineTime_Parms UpdateSplineTime_Parms;
		UpdateSplineTime_Parms.DeltaTime = DeltaTime;

		pfnUpdateSplineTime->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateSplineTime, &UpdateSplineTime_Parms, NULL );
		pfnUpdateSplineTime->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &UpdateSplineTime_Parms.Spline, 0x38 ); // CPF_OutParm

		return UpdateSplineTime_Parms.ReturnValue;
	};

	bool IsSplineFinished ( struct FInterpolationSpline* Spline )
	{
		static UFunction* pfnIsSplineFinished = NULL;

		if ( !pfnIsSplineFinished )
			pfnIsSplineFinished = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.IsSplineFinished" );

		ACCProj_SpiralRocket_BaseActor_execIsSplineFinished_Parms IsSplineFinished_Parms;

		pfnIsSplineFinished->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsSplineFinished, &IsSplineFinished_Parms, NULL );
		pfnIsSplineFinished->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &IsSplineFinished_Parms.Spline, 0x38 ); // CPF_OutParm

		return IsSplineFinished_Parms.ReturnValue;
	};

	void BuildInterpolationSpline ( struct FVector StartLocation, struct FVector FinishLocation, struct FVector StartVelocity, struct FVector FinishVelocity, float SplineTime, struct FInterpolationSpline* Spline )
	{
		static UFunction* pfnBuildInterpolationSpline = NULL;

		if ( !pfnBuildInterpolationSpline )
			pfnBuildInterpolationSpline = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.BuildInterpolationSpline" );

		ACCProj_SpiralRocket_BaseActor_execBuildInterpolationSpline_Parms BuildInterpolationSpline_Parms;
		memcpy( &BuildInterpolationSpline_Parms.StartLocation, &StartLocation, 0xC );
		memcpy( &BuildInterpolationSpline_Parms.FinishLocation, &FinishLocation, 0xC );
		memcpy( &BuildInterpolationSpline_Parms.StartVelocity, &StartVelocity, 0xC );
		memcpy( &BuildInterpolationSpline_Parms.FinishVelocity, &FinishVelocity, 0xC );
		BuildInterpolationSpline_Parms.SplineTime = SplineTime;

		pfnBuildInterpolationSpline->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBuildInterpolationSpline, &BuildInterpolationSpline_Parms, NULL );
		pfnBuildInterpolationSpline->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &BuildInterpolationSpline_Parms.Spline, 0x38 ); // CPF_OutParm
	};

	void ReBuildInterpolationSpline ( struct FVector FinishLocation, struct FVector FinishVelocity, struct FInterpolationSpline* Spline )
	{
		static UFunction* pfnReBuildInterpolationSpline = NULL;

		if ( !pfnReBuildInterpolationSpline )
			pfnReBuildInterpolationSpline = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocket_BaseActor.ReBuildInterpolationSpline" );

		ACCProj_SpiralRocket_BaseActor_execReBuildInterpolationSpline_Parms ReBuildInterpolationSpline_Parms;
		memcpy( &ReBuildInterpolationSpline_Parms.FinishLocation, &FinishLocation, 0xC );
		memcpy( &ReBuildInterpolationSpline_Parms.FinishVelocity, &FinishVelocity, 0xC );

		pfnReBuildInterpolationSpline->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnReBuildInterpolationSpline, &ReBuildInterpolationSpline_Parms, NULL );
		pfnReBuildInterpolationSpline->FunctionFlags |= 0x400;

		if ( Spline )
			memcpy( Spline, &ReBuildInterpolationSpline_Parms.Spline, 0x38 ); // CPF_OutParm
	};

};

UClass* ACCProj_SpiralRocket_BaseActor::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif