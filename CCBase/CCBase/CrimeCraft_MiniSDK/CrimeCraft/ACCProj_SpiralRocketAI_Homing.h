/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketAI_Homing.h
// Date: 06/16/2011 @ 05:19:42.83
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketAI_Homing_execIsSameTeamWith_Parms
{
	class AActor* A;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineCollision_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineFinishVelocity_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySpline_Parms
{
	unsigned long bForceRecalculation : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execSendEnemyInfo_Parms
{
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStartedNewEnemyHunting_Parms
{
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execReStartHunting_Parms
{
	struct FEnemyInfo newEnemy;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStartHunting_Parms
{
	struct FEnemyInfo newEnemy;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execTryRePeekEnemy_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Homing_execTryPeekEnemy_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByAngle_Parms
{
	struct FEnemyInfo P;
	float UsedMaxEnemyAngleHor;
	float UsedMaxEnemyAngleVer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByLocation_Parms
{
	struct FEnemyInfo P;
	float UsedMaxEnemyDist;
	float UsedMaxEnemyAngleHor;
	float UsedMaxEnemyAngleVer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByPawnState_Parms
{
	struct FEnemyInfo P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByTeam_Parms
{
	struct FEnemyInfo P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByTrace_Parms
{
	struct FEnemyInfo P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execSelectNearestEnemy_Parms
{
	TArray< struct FEnemyInfo > Enemies; // CPF_OutParm
	struct FEnemyInfo ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execFindBestEnemies_Parms
{
	TArray< struct FEnemyInfo > BestEnemies; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execAppendEnemyCandidates_Parms
{
	TArray< struct FEnemyInfo > candidates; // CPF_OutParm
	TArray< struct FEnemyInfo > Candidates2; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execSelectEnemyCandidatesInRadius_Parms
{
	float MaxDistance;
	TArray< struct FEnemyInfo > IgnoredCandidates; // CPF_OutParm
	TArray< struct FEnemyInfo > candidates; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execSelectBestEnemies_Parms
{
	TArray< struct FEnemyInfo > candidates; // CPF_OutParm
	TArray< struct FEnemyInfo > BestCandidates; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execIsMainGoalCandidate_Parms
{
	struct FEnemyInfo Candidate; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCalcAllMainGoalRequeiredRockets_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execCalcHowManyFriendsHasHadNoTarget_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAI_Homing_execCalcHowManyFriendsHasThisEnemy_Parms
{
	struct FEnemyInfo ThisEnemy;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execSyncMainGoalInfoStructToAll_Parms
{
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execDecreaseMainGoalInfoStructRocketsFor_Parms
{
	struct FEnemyInfo Candidate; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStaticDrawMainGoalInfoDebug2_Parms
{
	struct FMainGoalInfo TheMainGoalInfoStruct; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStaticDrawMainGoalInfoDebug_Parms
{
	class ACCInstancePawn* TraceOwner;
	struct FMainGoalInfo TheMainGoalInfoStruct; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStaticSortMainGoalEntries_Parms
{
	struct FMainGoalInfo TheMainGoalInfoStruct; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStaticCalcMainGoalInfo_Parms
{
	class ACCInstancePawn* TraceOwner;
	struct FVector TheLocation;
	struct FVector Direction;
	float MaxRange;
	float MaxAngle;
	float MaxDistanceToRay;
	int MainGoalRockets;
	int MaxRocketsPerGoal;
	struct FMainGoalInfo ResultMainGoalInfoStruct; // CPF_OutParm
};// FUNC_Final

struct ACCProj_SpiralRocketAI_Homing_execStaticComputeRocketsMainGoalInfo_Parms
{
	TArray< class ACCProj_SpiralRocket* > Rockets; // CPF_OutParm
	class ACCInstancePawn* TraceOwner;
	struct FVector TheLocation;
	struct FVector Direction;
	float MaxRange;
	float MaxAngle;
	float MaxDistanceToRay;
	int MainGoalRockets;
	int MaxRocketsPerGoal;
};

struct ACCProj_SpiralRocketAI_Homing_execSetPropsFromWeapon_Parms
{
	class ACCWeapon* Wpn;
};

// (0x1C8 - 0x254)
class ACCProj_SpiralRocketAI_Homing : public ACCProj_SpiralRocketAI
{
public:
	struct FMainGoalInfo                               MainGoalInfoStruct;                          // 0x01C8 (0x000C)
	unsigned long                                      bOneRocketPerEnemy : 1;                      // 0x01D4 (0x0004) [0x00000001]
	unsigned long                                      bHadNoTarget : 1;                            // 0x01D4 (0x0004) [0x00000002]
	unsigned long                                      bEnemyHuntNeedsExplosion : 1;                // 0x01D4 (0x0004) [0x00000004]
	float                                              MaxEnemyDist1;                               // 0x01D8 (0x0004)
	float                                              MaxEnemyDist2;                               // 0x01DC (0x0004)
	float                                              MaxEnemyDetectAngleHorizontal;               // 0x01E0 (0x0004)
	float                                              MaxEnemyDetectAngleVertical;                 // 0x01E4 (0x0004)
	float                                              MaxEnemyAngle;                               // 0x01E8 (0x0004)
	float                                              MinRotationRadius;                           // 0x01EC (0x0004)
	float                                              OptimalRotationRadius;                       // 0x01F0 (0x0004)
	float                                              Hunting_CollisionCheckLength;                // 0x01F4 (0x0004)
	float                                              Hunting_CollisionCheckTimeDelta;             // 0x01F8 (0x0004)
	float                                              Hunting_CollisionCheckTimeStep;              // 0x01FC (0x0004)
	float                                              LastHuntingEnemyTime;                        // 0x0200 (0x0004)
	struct FEnemyInfo                                  MyEnemy;                                     // 0x0204 (0x000C)
	struct FInterpolationSpline                        HuntingEnemySpline;                          // 0x0210 (0x0038)
	struct FVector                                     MyEnemyBaseLocation;                         // 0x0248 (0x000C)

	// HuntingEnemy
	// Idle

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketAI_Homing" );

		return ClassPointer;
	};

public:
	bool IsSameTeamWith ( class AActor* A )
	{
		static UFunction* pfnIsSameTeamWith = NULL;

		if ( !pfnIsSameTeamWith )
			pfnIsSameTeamWith = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.IsSameTeamWith" );

		ACCProj_SpiralRocketAI_Homing_execIsSameTeamWith_Parms IsSameTeamWith_Parms;
		IsSameTeamWith_Parms.A = A;

		this->ProcessEvent( pfnIsSameTeamWith, &IsSameTeamWith_Parms, NULL );

		return IsSameTeamWith_Parms.ReturnValue;
	};

	bool CalcHuntingEnemySplineCollision ()
	{
		static UFunction* pfnCalcHuntingEnemySplineCollision = NULL;

		if ( !pfnCalcHuntingEnemySplineCollision )
			pfnCalcHuntingEnemySplineCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHuntingEnemySplineCollision" );

		ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineCollision_Parms CalcHuntingEnemySplineCollision_Parms;

		this->ProcessEvent( pfnCalcHuntingEnemySplineCollision, &CalcHuntingEnemySplineCollision_Parms, NULL );

		return CalcHuntingEnemySplineCollision_Parms.ReturnValue;
	};

	float CalcHuntingEnemySplineTime ()
	{
		static UFunction* pfnCalcHuntingEnemySplineTime = NULL;

		if ( !pfnCalcHuntingEnemySplineTime )
			pfnCalcHuntingEnemySplineTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHuntingEnemySplineTime" );

		ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineTime_Parms CalcHuntingEnemySplineTime_Parms;

		this->ProcessEvent( pfnCalcHuntingEnemySplineTime, &CalcHuntingEnemySplineTime_Parms, NULL );

		return CalcHuntingEnemySplineTime_Parms.ReturnValue;
	};

	struct FVector CalcHuntingEnemySplineFinishVelocity ()
	{
		static UFunction* pfnCalcHuntingEnemySplineFinishVelocity = NULL;

		if ( !pfnCalcHuntingEnemySplineFinishVelocity )
			pfnCalcHuntingEnemySplineFinishVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHuntingEnemySplineFinishVelocity" );

		ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySplineFinishVelocity_Parms CalcHuntingEnemySplineFinishVelocity_Parms;

		this->ProcessEvent( pfnCalcHuntingEnemySplineFinishVelocity, &CalcHuntingEnemySplineFinishVelocity_Parms, NULL );

		return CalcHuntingEnemySplineFinishVelocity_Parms.ReturnValue;
	};

	bool CalcHuntingEnemySpline ( unsigned long bForceRecalculation )
	{
		static UFunction* pfnCalcHuntingEnemySpline = NULL;

		if ( !pfnCalcHuntingEnemySpline )
			pfnCalcHuntingEnemySpline = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHuntingEnemySpline" );

		ACCProj_SpiralRocketAI_Homing_execCalcHuntingEnemySpline_Parms CalcHuntingEnemySpline_Parms;
		CalcHuntingEnemySpline_Parms.bForceRecalculation = bForceRecalculation;

		this->ProcessEvent( pfnCalcHuntingEnemySpline, &CalcHuntingEnemySpline_Parms, NULL );

		return CalcHuntingEnemySpline_Parms.ReturnValue;
	};

	void SendEnemyInfo ()
	{
		static UFunction* pfnSendEnemyInfo = NULL;

		if ( !pfnSendEnemyInfo )
			pfnSendEnemyInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SendEnemyInfo" );

		ACCProj_SpiralRocketAI_Homing_execSendEnemyInfo_Parms SendEnemyInfo_Parms;

		this->ProcessEvent( pfnSendEnemyInfo, &SendEnemyInfo_Parms, NULL );
	};

	void StartedNewEnemyHunting ()
	{
		static UFunction* pfnStartedNewEnemyHunting = NULL;

		if ( !pfnStartedNewEnemyHunting )
			pfnStartedNewEnemyHunting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StartedNewEnemyHunting" );

		ACCProj_SpiralRocketAI_Homing_execStartedNewEnemyHunting_Parms StartedNewEnemyHunting_Parms;

		this->ProcessEvent( pfnStartedNewEnemyHunting, &StartedNewEnemyHunting_Parms, NULL );
	};

	bool ReStartHunting ( struct FEnemyInfo newEnemy )
	{
		static UFunction* pfnReStartHunting = NULL;

		if ( !pfnReStartHunting )
			pfnReStartHunting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.ReStartHunting" );

		ACCProj_SpiralRocketAI_Homing_execReStartHunting_Parms ReStartHunting_Parms;
		memcpy( &ReStartHunting_Parms.newEnemy, &newEnemy, 0xC );

		this->ProcessEvent( pfnReStartHunting, &ReStartHunting_Parms, NULL );

		return ReStartHunting_Parms.ReturnValue;
	};

	bool StartHunting ( struct FEnemyInfo newEnemy )
	{
		static UFunction* pfnStartHunting = NULL;

		if ( !pfnStartHunting )
			pfnStartHunting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StartHunting" );

		ACCProj_SpiralRocketAI_Homing_execStartHunting_Parms StartHunting_Parms;
		memcpy( &StartHunting_Parms.newEnemy, &newEnemy, 0xC );

		this->ProcessEvent( pfnStartHunting, &StartHunting_Parms, NULL );

		return StartHunting_Parms.ReturnValue;
	};

	bool TryRePeekEnemy ()
	{
		static UFunction* pfnTryRePeekEnemy = NULL;

		if ( !pfnTryRePeekEnemy )
			pfnTryRePeekEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.TryRePeekEnemy" );

		ACCProj_SpiralRocketAI_Homing_execTryRePeekEnemy_Parms TryRePeekEnemy_Parms;

		this->ProcessEvent( pfnTryRePeekEnemy, &TryRePeekEnemy_Parms, NULL );

		return TryRePeekEnemy_Parms.ReturnValue;
	};

	bool TryPeekEnemy ()
	{
		static UFunction* pfnTryPeekEnemy = NULL;

		if ( !pfnTryPeekEnemy )
			pfnTryPeekEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.TryPeekEnemy" );

		ACCProj_SpiralRocketAI_Homing_execTryPeekEnemy_Parms TryPeekEnemy_Parms;

		this->ProcessEvent( pfnTryPeekEnemy, &TryPeekEnemy_Parms, NULL );

		return TryPeekEnemy_Parms.ReturnValue;
	};

	bool CanBeMyEnemyByAngle ( struct FEnemyInfo P, float UsedMaxEnemyAngleHor, float UsedMaxEnemyAngleVer )
	{
		static UFunction* pfnCanBeMyEnemyByAngle = NULL;

		if ( !pfnCanBeMyEnemyByAngle )
			pfnCanBeMyEnemyByAngle = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CanBeMyEnemyByAngle" );

		ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByAngle_Parms CanBeMyEnemyByAngle_Parms;
		memcpy( &CanBeMyEnemyByAngle_Parms.P, &P, 0xC );
		CanBeMyEnemyByAngle_Parms.UsedMaxEnemyAngleHor = UsedMaxEnemyAngleHor;
		CanBeMyEnemyByAngle_Parms.UsedMaxEnemyAngleVer = UsedMaxEnemyAngleVer;

		this->ProcessEvent( pfnCanBeMyEnemyByAngle, &CanBeMyEnemyByAngle_Parms, NULL );

		return CanBeMyEnemyByAngle_Parms.ReturnValue;
	};

	bool CanBeMyEnemyByLocation ( struct FEnemyInfo P, float UsedMaxEnemyDist, float UsedMaxEnemyAngleHor, float UsedMaxEnemyAngleVer )
	{
		static UFunction* pfnCanBeMyEnemyByLocation = NULL;

		if ( !pfnCanBeMyEnemyByLocation )
			pfnCanBeMyEnemyByLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CanBeMyEnemyByLocation" );

		ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByLocation_Parms CanBeMyEnemyByLocation_Parms;
		memcpy( &CanBeMyEnemyByLocation_Parms.P, &P, 0xC );
		CanBeMyEnemyByLocation_Parms.UsedMaxEnemyDist = UsedMaxEnemyDist;
		CanBeMyEnemyByLocation_Parms.UsedMaxEnemyAngleHor = UsedMaxEnemyAngleHor;
		CanBeMyEnemyByLocation_Parms.UsedMaxEnemyAngleVer = UsedMaxEnemyAngleVer;

		this->ProcessEvent( pfnCanBeMyEnemyByLocation, &CanBeMyEnemyByLocation_Parms, NULL );

		return CanBeMyEnemyByLocation_Parms.ReturnValue;
	};

	bool CanBeMyEnemyByPawnState ( struct FEnemyInfo P )
	{
		static UFunction* pfnCanBeMyEnemyByPawnState = NULL;

		if ( !pfnCanBeMyEnemyByPawnState )
			pfnCanBeMyEnemyByPawnState = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CanBeMyEnemyByPawnState" );

		ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByPawnState_Parms CanBeMyEnemyByPawnState_Parms;
		memcpy( &CanBeMyEnemyByPawnState_Parms.P, &P, 0xC );

		this->ProcessEvent( pfnCanBeMyEnemyByPawnState, &CanBeMyEnemyByPawnState_Parms, NULL );

		return CanBeMyEnemyByPawnState_Parms.ReturnValue;
	};

	bool CanBeMyEnemyByTeam ( struct FEnemyInfo P )
	{
		static UFunction* pfnCanBeMyEnemyByTeam = NULL;

		if ( !pfnCanBeMyEnemyByTeam )
			pfnCanBeMyEnemyByTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CanBeMyEnemyByTeam" );

		ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByTeam_Parms CanBeMyEnemyByTeam_Parms;
		memcpy( &CanBeMyEnemyByTeam_Parms.P, &P, 0xC );

		this->ProcessEvent( pfnCanBeMyEnemyByTeam, &CanBeMyEnemyByTeam_Parms, NULL );

		return CanBeMyEnemyByTeam_Parms.ReturnValue;
	};

	bool CanBeMyEnemyByTrace ( struct FEnemyInfo P )
	{
		static UFunction* pfnCanBeMyEnemyByTrace = NULL;

		if ( !pfnCanBeMyEnemyByTrace )
			pfnCanBeMyEnemyByTrace = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CanBeMyEnemyByTrace" );

		ACCProj_SpiralRocketAI_Homing_execCanBeMyEnemyByTrace_Parms CanBeMyEnemyByTrace_Parms;
		memcpy( &CanBeMyEnemyByTrace_Parms.P, &P, 0xC );

		this->ProcessEvent( pfnCanBeMyEnemyByTrace, &CanBeMyEnemyByTrace_Parms, NULL );

		return CanBeMyEnemyByTrace_Parms.ReturnValue;
	};

	struct FEnemyInfo SelectNearestEnemy ( TArray< struct FEnemyInfo >* Enemies )
	{
		static UFunction* pfnSelectNearestEnemy = NULL;

		if ( !pfnSelectNearestEnemy )
			pfnSelectNearestEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SelectNearestEnemy" );

		ACCProj_SpiralRocketAI_Homing_execSelectNearestEnemy_Parms SelectNearestEnemy_Parms;

		this->ProcessEvent( pfnSelectNearestEnemy, &SelectNearestEnemy_Parms, NULL );

		if ( Enemies )
			memcpy( Enemies, &SelectNearestEnemy_Parms.Enemies, 0xC ); // CPF_OutParm

		return SelectNearestEnemy_Parms.ReturnValue;
	};

	void FindBestEnemies ( TArray< struct FEnemyInfo >* BestEnemies )
	{
		static UFunction* pfnFindBestEnemies = NULL;

		if ( !pfnFindBestEnemies )
			pfnFindBestEnemies = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.FindBestEnemies" );

		ACCProj_SpiralRocketAI_Homing_execFindBestEnemies_Parms FindBestEnemies_Parms;

		this->ProcessEvent( pfnFindBestEnemies, &FindBestEnemies_Parms, NULL );

		if ( BestEnemies )
			memcpy( BestEnemies, &FindBestEnemies_Parms.BestEnemies, 0xC ); // CPF_OutParm
	};

	void AppendEnemyCandidates ( TArray< struct FEnemyInfo >* candidates, TArray< struct FEnemyInfo >* Candidates2 )
	{
		static UFunction* pfnAppendEnemyCandidates = NULL;

		if ( !pfnAppendEnemyCandidates )
			pfnAppendEnemyCandidates = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.AppendEnemyCandidates" );

		ACCProj_SpiralRocketAI_Homing_execAppendEnemyCandidates_Parms AppendEnemyCandidates_Parms;

		this->ProcessEvent( pfnAppendEnemyCandidates, &AppendEnemyCandidates_Parms, NULL );

		if ( candidates )
			memcpy( candidates, &AppendEnemyCandidates_Parms.candidates, 0xC ); // CPF_OutParm
		if ( Candidates2 )
			memcpy( Candidates2, &AppendEnemyCandidates_Parms.Candidates2, 0xC ); // CPF_OutParm
	};

	void SelectEnemyCandidatesInRadius ( float MaxDistance, TArray< struct FEnemyInfo >* IgnoredCandidates, TArray< struct FEnemyInfo >* candidates )
	{
		static UFunction* pfnSelectEnemyCandidatesInRadius = NULL;

		if ( !pfnSelectEnemyCandidatesInRadius )
			pfnSelectEnemyCandidatesInRadius = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SelectEnemyCandidatesInRadius" );

		ACCProj_SpiralRocketAI_Homing_execSelectEnemyCandidatesInRadius_Parms SelectEnemyCandidatesInRadius_Parms;
		SelectEnemyCandidatesInRadius_Parms.MaxDistance = MaxDistance;

		this->ProcessEvent( pfnSelectEnemyCandidatesInRadius, &SelectEnemyCandidatesInRadius_Parms, NULL );

		if ( IgnoredCandidates )
			memcpy( IgnoredCandidates, &SelectEnemyCandidatesInRadius_Parms.IgnoredCandidates, 0xC ); // CPF_OutParm
		if ( candidates )
			memcpy( candidates, &SelectEnemyCandidatesInRadius_Parms.candidates, 0xC ); // CPF_OutParm
	};

	void SelectBestEnemies ( TArray< struct FEnemyInfo >* candidates, TArray< struct FEnemyInfo >* BestCandidates )
	{
		static UFunction* pfnSelectBestEnemies = NULL;

		if ( !pfnSelectBestEnemies )
			pfnSelectBestEnemies = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SelectBestEnemies" );

		ACCProj_SpiralRocketAI_Homing_execSelectBestEnemies_Parms SelectBestEnemies_Parms;

		this->ProcessEvent( pfnSelectBestEnemies, &SelectBestEnemies_Parms, NULL );

		if ( candidates )
			memcpy( candidates, &SelectBestEnemies_Parms.candidates, 0xC ); // CPF_OutParm
		if ( BestCandidates )
			memcpy( BestCandidates, &SelectBestEnemies_Parms.BestCandidates, 0xC ); // CPF_OutParm
	};

	bool IsMainGoalCandidate ( struct FEnemyInfo* Candidate )
	{
		static UFunction* pfnIsMainGoalCandidate = NULL;

		if ( !pfnIsMainGoalCandidate )
			pfnIsMainGoalCandidate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.IsMainGoalCandidate" );

		ACCProj_SpiralRocketAI_Homing_execIsMainGoalCandidate_Parms IsMainGoalCandidate_Parms;

		this->ProcessEvent( pfnIsMainGoalCandidate, &IsMainGoalCandidate_Parms, NULL );

		if ( Candidate )
			memcpy( Candidate, &IsMainGoalCandidate_Parms.Candidate, 0xC ); // CPF_OutParm

		return IsMainGoalCandidate_Parms.ReturnValue;
	};

	int CalcAllMainGoalRequeiredRockets ()
	{
		static UFunction* pfnCalcAllMainGoalRequeiredRockets = NULL;

		if ( !pfnCalcAllMainGoalRequeiredRockets )
			pfnCalcAllMainGoalRequeiredRockets = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcAllMainGoalRequeiredRockets" );

		ACCProj_SpiralRocketAI_Homing_execCalcAllMainGoalRequeiredRockets_Parms CalcAllMainGoalRequeiredRockets_Parms;

		this->ProcessEvent( pfnCalcAllMainGoalRequeiredRockets, &CalcAllMainGoalRequeiredRockets_Parms, NULL );

		return CalcAllMainGoalRequeiredRockets_Parms.ReturnValue;
	};

	int CalcHowManyFriendsHasHadNoTarget ()
	{
		static UFunction* pfnCalcHowManyFriendsHasHadNoTarget = NULL;

		if ( !pfnCalcHowManyFriendsHasHadNoTarget )
			pfnCalcHowManyFriendsHasHadNoTarget = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHowManyFriendsHasHadNoTarget" );

		ACCProj_SpiralRocketAI_Homing_execCalcHowManyFriendsHasHadNoTarget_Parms CalcHowManyFriendsHasHadNoTarget_Parms;

		this->ProcessEvent( pfnCalcHowManyFriendsHasHadNoTarget, &CalcHowManyFriendsHasHadNoTarget_Parms, NULL );

		return CalcHowManyFriendsHasHadNoTarget_Parms.ReturnValue;
	};

	int CalcHowManyFriendsHasThisEnemy ( struct FEnemyInfo ThisEnemy )
	{
		static UFunction* pfnCalcHowManyFriendsHasThisEnemy = NULL;

		if ( !pfnCalcHowManyFriendsHasThisEnemy )
			pfnCalcHowManyFriendsHasThisEnemy = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.CalcHowManyFriendsHasThisEnemy" );

		ACCProj_SpiralRocketAI_Homing_execCalcHowManyFriendsHasThisEnemy_Parms CalcHowManyFriendsHasThisEnemy_Parms;
		memcpy( &CalcHowManyFriendsHasThisEnemy_Parms.ThisEnemy, &ThisEnemy, 0xC );

		this->ProcessEvent( pfnCalcHowManyFriendsHasThisEnemy, &CalcHowManyFriendsHasThisEnemy_Parms, NULL );

		return CalcHowManyFriendsHasThisEnemy_Parms.ReturnValue;
	};

	void SyncMainGoalInfoStructToAll ()
	{
		static UFunction* pfnSyncMainGoalInfoStructToAll = NULL;

		if ( !pfnSyncMainGoalInfoStructToAll )
			pfnSyncMainGoalInfoStructToAll = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SyncMainGoalInfoStructToAll" );

		ACCProj_SpiralRocketAI_Homing_execSyncMainGoalInfoStructToAll_Parms SyncMainGoalInfoStructToAll_Parms;

		this->ProcessEvent( pfnSyncMainGoalInfoStructToAll, &SyncMainGoalInfoStructToAll_Parms, NULL );
	};

	void DecreaseMainGoalInfoStructRocketsFor ( struct FEnemyInfo* Candidate )
	{
		static UFunction* pfnDecreaseMainGoalInfoStructRocketsFor = NULL;

		if ( !pfnDecreaseMainGoalInfoStructRocketsFor )
			pfnDecreaseMainGoalInfoStructRocketsFor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.DecreaseMainGoalInfoStructRocketsFor" );

		ACCProj_SpiralRocketAI_Homing_execDecreaseMainGoalInfoStructRocketsFor_Parms DecreaseMainGoalInfoStructRocketsFor_Parms;

		this->ProcessEvent( pfnDecreaseMainGoalInfoStructRocketsFor, &DecreaseMainGoalInfoStructRocketsFor_Parms, NULL );

		if ( Candidate )
			memcpy( Candidate, &DecreaseMainGoalInfoStructRocketsFor_Parms.Candidate, 0xC ); // CPF_OutParm
	};

	void StaticDrawMainGoalInfoDebug2 ( struct FMainGoalInfo* TheMainGoalInfoStruct )
	{
		static UFunction* pfnStaticDrawMainGoalInfoDebug2 = NULL;

		if ( !pfnStaticDrawMainGoalInfoDebug2 )
			pfnStaticDrawMainGoalInfoDebug2 = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StaticDrawMainGoalInfoDebug2" );

		ACCProj_SpiralRocketAI_Homing_execStaticDrawMainGoalInfoDebug2_Parms StaticDrawMainGoalInfoDebug2_Parms;

		this->ProcessEvent( pfnStaticDrawMainGoalInfoDebug2, &StaticDrawMainGoalInfoDebug2_Parms, NULL );

		if ( TheMainGoalInfoStruct )
			memcpy( TheMainGoalInfoStruct, &StaticDrawMainGoalInfoDebug2_Parms.TheMainGoalInfoStruct, 0xC ); // CPF_OutParm
	};

	void StaticDrawMainGoalInfoDebug ( class ACCInstancePawn* TraceOwner, struct FMainGoalInfo* TheMainGoalInfoStruct )
	{
		static UFunction* pfnStaticDrawMainGoalInfoDebug = NULL;

		if ( !pfnStaticDrawMainGoalInfoDebug )
			pfnStaticDrawMainGoalInfoDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StaticDrawMainGoalInfoDebug" );

		ACCProj_SpiralRocketAI_Homing_execStaticDrawMainGoalInfoDebug_Parms StaticDrawMainGoalInfoDebug_Parms;
		StaticDrawMainGoalInfoDebug_Parms.TraceOwner = TraceOwner;

		this->ProcessEvent( pfnStaticDrawMainGoalInfoDebug, &StaticDrawMainGoalInfoDebug_Parms, NULL );

		if ( TheMainGoalInfoStruct )
			memcpy( TheMainGoalInfoStruct, &StaticDrawMainGoalInfoDebug_Parms.TheMainGoalInfoStruct, 0xC ); // CPF_OutParm
	};

	void StaticSortMainGoalEntries ( struct FMainGoalInfo* TheMainGoalInfoStruct )
	{
		static UFunction* pfnStaticSortMainGoalEntries = NULL;

		if ( !pfnStaticSortMainGoalEntries )
			pfnStaticSortMainGoalEntries = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StaticSortMainGoalEntries" );

		ACCProj_SpiralRocketAI_Homing_execStaticSortMainGoalEntries_Parms StaticSortMainGoalEntries_Parms;

		this->ProcessEvent( pfnStaticSortMainGoalEntries, &StaticSortMainGoalEntries_Parms, NULL );

		if ( TheMainGoalInfoStruct )
			memcpy( TheMainGoalInfoStruct, &StaticSortMainGoalEntries_Parms.TheMainGoalInfoStruct, 0xC ); // CPF_OutParm
	};

	void StaticCalcMainGoalInfo ( class ACCInstancePawn* TraceOwner, struct FVector TheLocation, struct FVector Direction, float MaxRange, float MaxAngle, float MaxDistanceToRay, int MainGoalRockets, int MaxRocketsPerGoal, struct FMainGoalInfo* ResultMainGoalInfoStruct )
	{
		static UFunction* pfnStaticCalcMainGoalInfo = NULL;

		if ( !pfnStaticCalcMainGoalInfo )
			pfnStaticCalcMainGoalInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StaticCalcMainGoalInfo" );

		ACCProj_SpiralRocketAI_Homing_execStaticCalcMainGoalInfo_Parms StaticCalcMainGoalInfo_Parms;
		StaticCalcMainGoalInfo_Parms.TraceOwner = TraceOwner;
		memcpy( &StaticCalcMainGoalInfo_Parms.TheLocation, &TheLocation, 0xC );
		memcpy( &StaticCalcMainGoalInfo_Parms.Direction, &Direction, 0xC );
		StaticCalcMainGoalInfo_Parms.MaxRange = MaxRange;
		StaticCalcMainGoalInfo_Parms.MaxAngle = MaxAngle;
		StaticCalcMainGoalInfo_Parms.MaxDistanceToRay = MaxDistanceToRay;
		StaticCalcMainGoalInfo_Parms.MainGoalRockets = MainGoalRockets;
		StaticCalcMainGoalInfo_Parms.MaxRocketsPerGoal = MaxRocketsPerGoal;

		this->ProcessEvent( pfnStaticCalcMainGoalInfo, &StaticCalcMainGoalInfo_Parms, NULL );

		if ( ResultMainGoalInfoStruct )
			memcpy( ResultMainGoalInfoStruct, &StaticCalcMainGoalInfo_Parms.ResultMainGoalInfoStruct, 0xC ); // CPF_OutParm
	};

	void StaticComputeRocketsMainGoalInfo ( class ACCInstancePawn* TraceOwner, struct FVector TheLocation, struct FVector Direction, float MaxRange, float MaxAngle, float MaxDistanceToRay, int MainGoalRockets, int MaxRocketsPerGoal, TArray< class ACCProj_SpiralRocket* >* Rockets )
	{
		static UFunction* pfnStaticComputeRocketsMainGoalInfo = NULL;

		if ( !pfnStaticComputeRocketsMainGoalInfo )
			pfnStaticComputeRocketsMainGoalInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.StaticComputeRocketsMainGoalInfo" );

		ACCProj_SpiralRocketAI_Homing_execStaticComputeRocketsMainGoalInfo_Parms StaticComputeRocketsMainGoalInfo_Parms;
		StaticComputeRocketsMainGoalInfo_Parms.TraceOwner = TraceOwner;
		memcpy( &StaticComputeRocketsMainGoalInfo_Parms.TheLocation, &TheLocation, 0xC );
		memcpy( &StaticComputeRocketsMainGoalInfo_Parms.Direction, &Direction, 0xC );
		StaticComputeRocketsMainGoalInfo_Parms.MaxRange = MaxRange;
		StaticComputeRocketsMainGoalInfo_Parms.MaxAngle = MaxAngle;
		StaticComputeRocketsMainGoalInfo_Parms.MaxDistanceToRay = MaxDistanceToRay;
		StaticComputeRocketsMainGoalInfo_Parms.MainGoalRockets = MainGoalRockets;
		StaticComputeRocketsMainGoalInfo_Parms.MaxRocketsPerGoal = MaxRocketsPerGoal;

		this->ProcessEvent( pfnStaticComputeRocketsMainGoalInfo, &StaticComputeRocketsMainGoalInfo_Parms, NULL );

		if ( Rockets )
			*Rockets = StaticComputeRocketsMainGoalInfo_Parms.Rockets; // CPF_OutParm
	};

	void SetPropsFromWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnSetPropsFromWeapon = NULL;

		if ( !pfnSetPropsFromWeapon )
			pfnSetPropsFromWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAI_Homing.SetPropsFromWeapon" );

		ACCProj_SpiralRocketAI_Homing_execSetPropsFromWeapon_Parms SetPropsFromWeapon_Parms;
		SetPropsFromWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnSetPropsFromWeapon, &SetPropsFromWeapon_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketAI_Homing::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif