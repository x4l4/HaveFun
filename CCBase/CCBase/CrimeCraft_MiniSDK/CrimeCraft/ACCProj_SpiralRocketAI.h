/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketAI.h
// Date: 06/16/2011 @ 05:19:42.78
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketAI_execGetStatsObject_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_execAddVelocityStats_Parms
{
	struct FVector TheVelocity;
};

struct ACCProj_SpiralRocketAI_execAddTraceStats_Parms
{
	float TraceLength;
};

struct ACCProj_SpiralRocketAI_execAddPhysicsStats_Parms
{
	float DeltaTime;
};

struct ACCProj_SpiralRocketAI_execGetCurrentPhysicsTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_execGetRocketExtent_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_execStaticMyFastTraceScripted_Parms
{
	class AActor* TraceOwner;
	unsigned long bOnlyVisibilityTrace : 1;
	struct FVector TraceEnd;
	struct FVector TraceStart;
	struct FVector Extent;
	struct FVector HitLocation; // CPF_OutParm
	struct FVector HitNormal; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_execStaticMyFastTrace_Parms
{
	class ACCProj_SpiralRocketAI* TraceOwner;
	unsigned long bOnlyVisibilityTrace : 1;
	struct FVector TraceEnd;
	struct FVector TraceStart;
	struct FVector Extent;
	struct FVector HitLocation; // CPF_OutParm
	struct FVector HitNormal; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_execDoSplineTrajectoryTrace_Parms
{
	class ACCProj_SpiralRocketAI* TraceOwner;
	unsigned long bOnlyVisibilityTrace : 1;
	struct FVector TraceExtent;
	struct FInterpolationSpline Spline; // CPF_OutParm
	float StartTraceTime;
	float FinishTraceTime;
	float TraceTimeDelta;
	float HitTraceTime; // CPF_OutParm
	unsigned long bDrawDebug : 1;
	unsigned long bDrawPersistentDebug : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

// (0x1C4 - 0x1C8)
class ACCProj_SpiralRocketAI : public ACCProj_SpiralRocketAIBase
{
public:
	unsigned long                                      bEnableStatsDebug : 1;                       // 0x01C4 (0x0004) [0x00000001]
	unsigned long                                      bDisableFastTrace : 1;                       // 0x01C4 (0x0004) [0x00000002]
	unsigned long                                      bDrawRocketDebug : 1;                        // 0x01C4 (0x0004) [0x00000004]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketAI" );

		return ClassPointer;
	};

public:
	void* GetStatsObject ()
	{
		static UFunction* pfnGetStatsObject = NULL;

		if ( !pfnGetStatsObject )
			pfnGetStatsObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.GetStatsObject" );

		ACCProj_SpiralRocketAI_execGetStatsObject_Parms GetStatsObject_Parms;

		this->ProcessEvent( pfnGetStatsObject, &GetStatsObject_Parms, NULL );

		return GetStatsObject_Parms.ReturnValue;
	};

	void AddVelocityStats ( struct FVector TheVelocity )
	{
		static UFunction* pfnAddVelocityStats = NULL;

		if ( !pfnAddVelocityStats )
			pfnAddVelocityStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.AddVelocityStats" );

		ACCProj_SpiralRocketAI_execAddVelocityStats_Parms AddVelocityStats_Parms;
		memcpy( &AddVelocityStats_Parms.TheVelocity, &TheVelocity, 0xC );

		this->ProcessEvent( pfnAddVelocityStats, &AddVelocityStats_Parms, NULL );
	};

	void AddTraceStats ( float TraceLength )
	{
		static UFunction* pfnAddTraceStats = NULL;

		if ( !pfnAddTraceStats )
			pfnAddTraceStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.AddTraceStats" );

		ACCProj_SpiralRocketAI_execAddTraceStats_Parms AddTraceStats_Parms;
		AddTraceStats_Parms.TraceLength = TraceLength;

		this->ProcessEvent( pfnAddTraceStats, &AddTraceStats_Parms, NULL );
	};

	void AddPhysicsStats ( float DeltaTime )
	{
		static UFunction* pfnAddPhysicsStats = NULL;

		if ( !pfnAddPhysicsStats )
			pfnAddPhysicsStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.AddPhysicsStats" );

		ACCProj_SpiralRocketAI_execAddPhysicsStats_Parms AddPhysicsStats_Parms;
		AddPhysicsStats_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnAddPhysicsStats, &AddPhysicsStats_Parms, NULL );
	};

	float GetCurrentPhysicsTime ()
	{
		static UFunction* pfnGetCurrentPhysicsTime = NULL;

		if ( !pfnGetCurrentPhysicsTime )
			pfnGetCurrentPhysicsTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.GetCurrentPhysicsTime" );

		ACCProj_SpiralRocketAI_execGetCurrentPhysicsTime_Parms GetCurrentPhysicsTime_Parms;

		this->ProcessEvent( pfnGetCurrentPhysicsTime, &GetCurrentPhysicsTime_Parms, NULL );

		return GetCurrentPhysicsTime_Parms.ReturnValue;
	};

	struct FVector GetRocketExtent ()
	{
		static UFunction* pfnGetRocketExtent = NULL;

		if ( !pfnGetRocketExtent )
			pfnGetRocketExtent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.GetRocketExtent" );

		ACCProj_SpiralRocketAI_execGetRocketExtent_Parms GetRocketExtent_Parms;

		this->ProcessEvent( pfnGetRocketExtent, &GetRocketExtent_Parms, NULL );

		return GetRocketExtent_Parms.ReturnValue;
	};

	bool StaticMyFastTraceScripted ( class AActor* TraceOwner, unsigned long bOnlyVisibilityTrace, struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, struct FVector* HitLocation, struct FVector* HitNormal )
	{
		static UFunction* pfnStaticMyFastTraceScripted = NULL;

		if ( !pfnStaticMyFastTraceScripted )
			pfnStaticMyFastTraceScripted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.StaticMyFastTraceScripted" );

		ACCProj_SpiralRocketAI_execStaticMyFastTraceScripted_Parms StaticMyFastTraceScripted_Parms;
		StaticMyFastTraceScripted_Parms.TraceOwner = TraceOwner;
		StaticMyFastTraceScripted_Parms.bOnlyVisibilityTrace = bOnlyVisibilityTrace;
		memcpy( &StaticMyFastTraceScripted_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &StaticMyFastTraceScripted_Parms.TraceStart, &TraceStart, 0xC );
		memcpy( &StaticMyFastTraceScripted_Parms.Extent, &Extent, 0xC );

		this->ProcessEvent( pfnStaticMyFastTraceScripted, &StaticMyFastTraceScripted_Parms, NULL );

		if ( HitLocation )
			memcpy( HitLocation, &StaticMyFastTraceScripted_Parms.HitLocation, 0xC ); // CPF_OutParm
		if ( HitNormal )
			memcpy( HitNormal, &StaticMyFastTraceScripted_Parms.HitNormal, 0xC ); // CPF_OutParm

		return StaticMyFastTraceScripted_Parms.ReturnValue;
	};

	bool StaticMyFastTrace ( class ACCProj_SpiralRocketAI* TraceOwner, unsigned long bOnlyVisibilityTrace, struct FVector TraceEnd, struct FVector TraceStart/*CPF_OptionalParm*/, struct FVector Extent/*CPF_OptionalParm*/, struct FVector* HitLocation, struct FVector* HitNormal )
	{
		static UFunction* pfnStaticMyFastTrace = NULL;

		if ( !pfnStaticMyFastTrace )
			pfnStaticMyFastTrace = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.StaticMyFastTrace" );

		ACCProj_SpiralRocketAI_execStaticMyFastTrace_Parms StaticMyFastTrace_Parms;
		StaticMyFastTrace_Parms.TraceOwner = TraceOwner;
		StaticMyFastTrace_Parms.bOnlyVisibilityTrace = bOnlyVisibilityTrace;
		memcpy( &StaticMyFastTrace_Parms.TraceEnd, &TraceEnd, 0xC );
		memcpy( &StaticMyFastTrace_Parms.TraceStart, &TraceStart, 0xC );
		memcpy( &StaticMyFastTrace_Parms.Extent, &Extent, 0xC );

		this->ProcessEvent( pfnStaticMyFastTrace, &StaticMyFastTrace_Parms, NULL );

		if ( HitLocation )
			memcpy( HitLocation, &StaticMyFastTrace_Parms.HitLocation, 0xC ); // CPF_OutParm
		if ( HitNormal )
			memcpy( HitNormal, &StaticMyFastTrace_Parms.HitNormal, 0xC ); // CPF_OutParm

		return StaticMyFastTrace_Parms.ReturnValue;
	};

	bool DoSplineTrajectoryTrace ( class ACCProj_SpiralRocketAI* TraceOwner, unsigned long bOnlyVisibilityTrace, struct FVector TraceExtent, float StartTraceTime, float FinishTraceTime, float TraceTimeDelta, unsigned long bDrawDebug/*CPF_OptionalParm*/, unsigned long bDrawPersistentDebug/*CPF_OptionalParm*/, struct FInterpolationSpline* Spline, float* HitTraceTime )
	{
		static UFunction* pfnDoSplineTrajectoryTrace = NULL;

		if ( !pfnDoSplineTrajectoryTrace )
			pfnDoSplineTrajectoryTrace = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI.DoSplineTrajectoryTrace" );

		ACCProj_SpiralRocketAI_execDoSplineTrajectoryTrace_Parms DoSplineTrajectoryTrace_Parms;
		DoSplineTrajectoryTrace_Parms.TraceOwner = TraceOwner;
		DoSplineTrajectoryTrace_Parms.bOnlyVisibilityTrace = bOnlyVisibilityTrace;
		memcpy( &DoSplineTrajectoryTrace_Parms.TraceExtent, &TraceExtent, 0xC );
		DoSplineTrajectoryTrace_Parms.StartTraceTime = StartTraceTime;
		DoSplineTrajectoryTrace_Parms.FinishTraceTime = FinishTraceTime;
		DoSplineTrajectoryTrace_Parms.TraceTimeDelta = TraceTimeDelta;
		DoSplineTrajectoryTrace_Parms.bDrawDebug = bDrawDebug;
		DoSplineTrajectoryTrace_Parms.bDrawPersistentDebug = bDrawPersistentDebug;

		this->ProcessEvent( pfnDoSplineTrajectoryTrace, &DoSplineTrajectoryTrace_Parms, NULL );

		if ( Spline )
			memcpy( Spline, &DoSplineTrajectoryTrace_Parms.Spline, 0x38 ); // CPF_OutParm
		if ( HitTraceTime )
			*HitTraceTime = DoSplineTrajectoryTrace_Parms.HitTraceTime; // CPF_OutParm

		return DoSplineTrajectoryTrace_Parms.ReturnValue;
	};

};

UClass* ACCProj_SpiralRocketAI::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif