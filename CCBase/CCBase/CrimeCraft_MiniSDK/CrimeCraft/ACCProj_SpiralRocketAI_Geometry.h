/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketAI_Geometry.h
// Date: 06/16/2011 @ 05:19:42.117
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketAI_Geometry_execStartCollisionAvoidance_Parms
{
	struct FVector AvoidanceLocation;
	struct FVector AvoidanceVelocity;
	float AvoidanceTime;
	struct FInterpolationSpline AvoidanceSpline; // CPF_OutParm
};

struct ACCProj_SpiralRocketAI_Geometry_execTestCollisionAvoidanceTrajectory_Parms
{
	struct FVector AvoidanceLocation;
	struct FVector AvoidanceVelocity;
	float AvoidanceTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceTrajectoryLength_Parms
{
	struct FVector AvoidanceLocation;
	struct FVector AvoidanceVelocity;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Geometry_execDoSelectCollisionAvoidanceSpline_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	TArray< struct FVector > ControlPoints; // CPF_OutParm
	TArray< int > ValidnessMask; // CPF_OutParm
	int TrajectoryTestQuota;
	struct FInterpolationSpline AvoidanceSpline; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Geometry_execDoCollisionAvoidanceControlPointsTraces_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	TArray< struct FVector > ControlPoints; // CPF_OutParm
	TArray< struct FVector > ControlPointsDirs; // CPF_OutParm
	TArray< int > ValidnessMask; // CPF_OutParm
};

struct ACCProj_SpiralRocketAI_Geometry_execDoCollisionAvoidanceControlPointsCheck_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	TArray< struct FVector > ControlPoints; // CPF_OutParm
	TArray< int > ValidnessMask; // CPF_OutParm
};

struct ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceControlPoints_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	float Offset;
	unsigned long bFullPointSet : 1;
	TArray< struct FVector > ControlPoints; // CPF_OutParm
	TArray< struct FVector > ControlPointsDirs; // CPF_OutParm
	TArray< int > ValidnessMask; // CPF_OutParm
};

struct ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceControlPointsBasis_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	float BaseOffset;
	struct FVector Up; // CPF_OutParm
	struct FVector Side; // CPF_OutParm
	float Offset; // CPF_OutParm
};

struct ACCProj_SpiralRocketAI_Geometry_execTryToDoCollisionAvoidance_Parms
{
	struct FCollisionAvoidanceInfo InfoStruct; // CPF_OutParm
	struct FInterpolationSpline AvoidanceSpline; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Geometry_execStartGeometryRuling_Parms
{
};

struct ACCProj_SpiralRocketAI_Geometry_execSetPropsFromWeapon_Parms
{
	class ACCWeapon* Wpn;
};

// (0x1C8 - 0x25C)
class ACCProj_SpiralRocketAI_Geometry : public ACCProj_SpiralRocketAI
{
public:
	struct FInterpolationSpline                        BSM_InterpolationSpline;                     // 0x01C8 (0x0038)
	struct FInterpolationSpline                        BSM_NextInterpolationSpline;                 // 0x0200 (0x0038)
	float                                              BSM_CollisionTime;                           // 0x0238 (0x0004)
	int                                                BSM_CollisionAvoidanceIterations;            // 0x023C (0x0004)
	float                                              BSM_CollisionAvoidance_CheckTimeDelta;       // 0x0240 (0x0004)
	float                                              BSM_CollisionAvoidance_CheckTimeStep;        // 0x0244 (0x0004)
	float                                              SpiralRadius;                                // 0x0248 (0x0004)
	float                                              SpiralPeriod;                                // 0x024C (0x0004)
	float                                              TryToDoCollisionAvoidance_MaxOffset;         // 0x0250 (0x0004)
	float                                              TestCollisionAvoidanceTrajectory_MinRotationRadius; // 0x0254 (0x0004)
	float                                              TestCollisionAvoidanceTrajectory_CheckTimeStep; // 0x0258 (0x0004)

	// RandomFlying
	// Idle
	// BiSplineMoveBase

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketAI_Geometry" );

		return ClassPointer;
	};

public:
	void StartCollisionAvoidance ( struct FVector AvoidanceLocation, struct FVector AvoidanceVelocity, float AvoidanceTime, struct FInterpolationSpline* AvoidanceSpline )
	{
		static UFunction* pfnStartCollisionAvoidance = NULL;

		if ( !pfnStartCollisionAvoidance )
			pfnStartCollisionAvoidance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.StartCollisionAvoidance" );

		ACCProj_SpiralRocketAI_Geometry_execStartCollisionAvoidance_Parms StartCollisionAvoidance_Parms;
		memcpy( &StartCollisionAvoidance_Parms.AvoidanceLocation, &AvoidanceLocation, 0xC );
		memcpy( &StartCollisionAvoidance_Parms.AvoidanceVelocity, &AvoidanceVelocity, 0xC );
		StartCollisionAvoidance_Parms.AvoidanceTime = AvoidanceTime;

		this->ProcessEvent( pfnStartCollisionAvoidance, &StartCollisionAvoidance_Parms, NULL );

		if ( AvoidanceSpline )
			memcpy( AvoidanceSpline, &StartCollisionAvoidance_Parms.AvoidanceSpline, 0x38 ); // CPF_OutParm
	};

	bool TestCollisionAvoidanceTrajectory ( struct FVector AvoidanceLocation, struct FVector AvoidanceVelocity, float AvoidanceTime )
	{
		static UFunction* pfnTestCollisionAvoidanceTrajectory = NULL;

		if ( !pfnTestCollisionAvoidanceTrajectory )
			pfnTestCollisionAvoidanceTrajectory = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.TestCollisionAvoidanceTrajectory" );

		ACCProj_SpiralRocketAI_Geometry_execTestCollisionAvoidanceTrajectory_Parms TestCollisionAvoidanceTrajectory_Parms;
		memcpy( &TestCollisionAvoidanceTrajectory_Parms.AvoidanceLocation, &AvoidanceLocation, 0xC );
		memcpy( &TestCollisionAvoidanceTrajectory_Parms.AvoidanceVelocity, &AvoidanceVelocity, 0xC );
		TestCollisionAvoidanceTrajectory_Parms.AvoidanceTime = AvoidanceTime;

		this->ProcessEvent( pfnTestCollisionAvoidanceTrajectory, &TestCollisionAvoidanceTrajectory_Parms, NULL );

		return TestCollisionAvoidanceTrajectory_Parms.ReturnValue;
	};

	float CalcCollisionAvoidanceTrajectoryLength ( struct FVector AvoidanceLocation, struct FVector AvoidanceVelocity )
	{
		static UFunction* pfnCalcCollisionAvoidanceTrajectoryLength = NULL;

		if ( !pfnCalcCollisionAvoidanceTrajectoryLength )
			pfnCalcCollisionAvoidanceTrajectoryLength = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.CalcCollisionAvoidanceTrajectoryLength" );

		ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceTrajectoryLength_Parms CalcCollisionAvoidanceTrajectoryLength_Parms;
		memcpy( &CalcCollisionAvoidanceTrajectoryLength_Parms.AvoidanceLocation, &AvoidanceLocation, 0xC );
		memcpy( &CalcCollisionAvoidanceTrajectoryLength_Parms.AvoidanceVelocity, &AvoidanceVelocity, 0xC );

		this->ProcessEvent( pfnCalcCollisionAvoidanceTrajectoryLength, &CalcCollisionAvoidanceTrajectoryLength_Parms, NULL );

		return CalcCollisionAvoidanceTrajectoryLength_Parms.ReturnValue;
	};

	bool DoSelectCollisionAvoidanceSpline ( int TrajectoryTestQuota, struct FCollisionAvoidanceInfo* InfoStruct, TArray< struct FVector >* ControlPoints, TArray< int >* ValidnessMask, struct FInterpolationSpline* AvoidanceSpline )
	{
		static UFunction* pfnDoSelectCollisionAvoidanceSpline = NULL;

		if ( !pfnDoSelectCollisionAvoidanceSpline )
			pfnDoSelectCollisionAvoidanceSpline = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.DoSelectCollisionAvoidanceSpline" );

		ACCProj_SpiralRocketAI_Geometry_execDoSelectCollisionAvoidanceSpline_Parms DoSelectCollisionAvoidanceSpline_Parms;
		DoSelectCollisionAvoidanceSpline_Parms.TrajectoryTestQuota = TrajectoryTestQuota;

		this->ProcessEvent( pfnDoSelectCollisionAvoidanceSpline, &DoSelectCollisionAvoidanceSpline_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &DoSelectCollisionAvoidanceSpline_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( ControlPoints )
			memcpy( ControlPoints, &DoSelectCollisionAvoidanceSpline_Parms.ControlPoints, 0xC ); // CPF_OutParm
		if ( ValidnessMask )
			*ValidnessMask = DoSelectCollisionAvoidanceSpline_Parms.ValidnessMask; // CPF_OutParm
		if ( AvoidanceSpline )
			memcpy( AvoidanceSpline, &DoSelectCollisionAvoidanceSpline_Parms.AvoidanceSpline, 0x38 ); // CPF_OutParm

		return DoSelectCollisionAvoidanceSpline_Parms.ReturnValue;
	};

	void DoCollisionAvoidanceControlPointsTraces ( struct FCollisionAvoidanceInfo* InfoStruct, TArray< struct FVector >* ControlPoints, TArray< struct FVector >* ControlPointsDirs, TArray< int >* ValidnessMask )
	{
		static UFunction* pfnDoCollisionAvoidanceControlPointsTraces = NULL;

		if ( !pfnDoCollisionAvoidanceControlPointsTraces )
			pfnDoCollisionAvoidanceControlPointsTraces = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.DoCollisionAvoidanceControlPointsTraces" );

		ACCProj_SpiralRocketAI_Geometry_execDoCollisionAvoidanceControlPointsTraces_Parms DoCollisionAvoidanceControlPointsTraces_Parms;

		this->ProcessEvent( pfnDoCollisionAvoidanceControlPointsTraces, &DoCollisionAvoidanceControlPointsTraces_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &DoCollisionAvoidanceControlPointsTraces_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( ControlPoints )
			memcpy( ControlPoints, &DoCollisionAvoidanceControlPointsTraces_Parms.ControlPoints, 0xC ); // CPF_OutParm
		if ( ControlPointsDirs )
			memcpy( ControlPointsDirs, &DoCollisionAvoidanceControlPointsTraces_Parms.ControlPointsDirs, 0xC ); // CPF_OutParm
		if ( ValidnessMask )
			*ValidnessMask = DoCollisionAvoidanceControlPointsTraces_Parms.ValidnessMask; // CPF_OutParm
	};

	void DoCollisionAvoidanceControlPointsCheck ( struct FCollisionAvoidanceInfo* InfoStruct, TArray< struct FVector >* ControlPoints, TArray< int >* ValidnessMask )
	{
		static UFunction* pfnDoCollisionAvoidanceControlPointsCheck = NULL;

		if ( !pfnDoCollisionAvoidanceControlPointsCheck )
			pfnDoCollisionAvoidanceControlPointsCheck = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.DoCollisionAvoidanceControlPointsCheck" );

		ACCProj_SpiralRocketAI_Geometry_execDoCollisionAvoidanceControlPointsCheck_Parms DoCollisionAvoidanceControlPointsCheck_Parms;

		this->ProcessEvent( pfnDoCollisionAvoidanceControlPointsCheck, &DoCollisionAvoidanceControlPointsCheck_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &DoCollisionAvoidanceControlPointsCheck_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( ControlPoints )
			memcpy( ControlPoints, &DoCollisionAvoidanceControlPointsCheck_Parms.ControlPoints, 0xC ); // CPF_OutParm
		if ( ValidnessMask )
			*ValidnessMask = DoCollisionAvoidanceControlPointsCheck_Parms.ValidnessMask; // CPF_OutParm
	};

	void CalcCollisionAvoidanceControlPoints ( float Offset, unsigned long bFullPointSet, struct FCollisionAvoidanceInfo* InfoStruct, TArray< struct FVector >* ControlPoints, TArray< struct FVector >* ControlPointsDirs, TArray< int >* ValidnessMask )
	{
		static UFunction* pfnCalcCollisionAvoidanceControlPoints = NULL;

		if ( !pfnCalcCollisionAvoidanceControlPoints )
			pfnCalcCollisionAvoidanceControlPoints = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.CalcCollisionAvoidanceControlPoints" );

		ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceControlPoints_Parms CalcCollisionAvoidanceControlPoints_Parms;
		CalcCollisionAvoidanceControlPoints_Parms.Offset = Offset;
		CalcCollisionAvoidanceControlPoints_Parms.bFullPointSet = bFullPointSet;

		this->ProcessEvent( pfnCalcCollisionAvoidanceControlPoints, &CalcCollisionAvoidanceControlPoints_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &CalcCollisionAvoidanceControlPoints_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( ControlPoints )
			memcpy( ControlPoints, &CalcCollisionAvoidanceControlPoints_Parms.ControlPoints, 0xC ); // CPF_OutParm
		if ( ControlPointsDirs )
			memcpy( ControlPointsDirs, &CalcCollisionAvoidanceControlPoints_Parms.ControlPointsDirs, 0xC ); // CPF_OutParm
		if ( ValidnessMask )
			*ValidnessMask = CalcCollisionAvoidanceControlPoints_Parms.ValidnessMask; // CPF_OutParm
	};

	void CalcCollisionAvoidanceControlPointsBasis ( float BaseOffset, struct FCollisionAvoidanceInfo* InfoStruct, struct FVector* Up, struct FVector* Side, float* Offset )
	{
		static UFunction* pfnCalcCollisionAvoidanceControlPointsBasis = NULL;

		if ( !pfnCalcCollisionAvoidanceControlPointsBasis )
			pfnCalcCollisionAvoidanceControlPointsBasis = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.CalcCollisionAvoidanceControlPointsBasis" );

		ACCProj_SpiralRocketAI_Geometry_execCalcCollisionAvoidanceControlPointsBasis_Parms CalcCollisionAvoidanceControlPointsBasis_Parms;
		CalcCollisionAvoidanceControlPointsBasis_Parms.BaseOffset = BaseOffset;

		this->ProcessEvent( pfnCalcCollisionAvoidanceControlPointsBasis, &CalcCollisionAvoidanceControlPointsBasis_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &CalcCollisionAvoidanceControlPointsBasis_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( Up )
			memcpy( Up, &CalcCollisionAvoidanceControlPointsBasis_Parms.Up, 0xC ); // CPF_OutParm
		if ( Side )
			memcpy( Side, &CalcCollisionAvoidanceControlPointsBasis_Parms.Side, 0xC ); // CPF_OutParm
		if ( Offset )
			*Offset = CalcCollisionAvoidanceControlPointsBasis_Parms.Offset; // CPF_OutParm
	};

	bool TryToDoCollisionAvoidance ( struct FCollisionAvoidanceInfo* InfoStruct, struct FInterpolationSpline* AvoidanceSpline )
	{
		static UFunction* pfnTryToDoCollisionAvoidance = NULL;

		if ( !pfnTryToDoCollisionAvoidance )
			pfnTryToDoCollisionAvoidance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.TryToDoCollisionAvoidance" );

		ACCProj_SpiralRocketAI_Geometry_execTryToDoCollisionAvoidance_Parms TryToDoCollisionAvoidance_Parms;

		this->ProcessEvent( pfnTryToDoCollisionAvoidance, &TryToDoCollisionAvoidance_Parms, NULL );

		if ( InfoStruct )
			memcpy( InfoStruct, &TryToDoCollisionAvoidance_Parms.InfoStruct, 0x44 ); // CPF_OutParm
		if ( AvoidanceSpline )
			memcpy( AvoidanceSpline, &TryToDoCollisionAvoidance_Parms.AvoidanceSpline, 0x38 ); // CPF_OutParm

		return TryToDoCollisionAvoidance_Parms.ReturnValue;
	};

	void StartGeometryRuling ()
	{
		static UFunction* pfnStartGeometryRuling = NULL;

		if ( !pfnStartGeometryRuling )
			pfnStartGeometryRuling = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.StartGeometryRuling" );

		ACCProj_SpiralRocketAI_Geometry_execStartGeometryRuling_Parms StartGeometryRuling_Parms;

		this->ProcessEvent( pfnStartGeometryRuling, &StartGeometryRuling_Parms, NULL );
	};

	void SetPropsFromWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnSetPropsFromWeapon = NULL;

		if ( !pfnSetPropsFromWeapon )
			pfnSetPropsFromWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Geometry.SetPropsFromWeapon" );

		ACCProj_SpiralRocketAI_Geometry_execSetPropsFromWeapon_Parms SetPropsFromWeapon_Parms;
		SetPropsFromWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnSetPropsFromWeapon, &SetPropsFromWeapon_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketAI_Geometry::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif