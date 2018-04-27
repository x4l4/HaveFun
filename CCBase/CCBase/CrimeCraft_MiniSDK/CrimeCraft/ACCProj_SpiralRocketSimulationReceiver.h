/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketSimulationReceiver.h
// Date: 06/16/2011 @ 05:19:42.110
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ESimulationEntryType
{
	CSET_Spline = 0,
	CSET_Enemy = 1,
	CSET_MAX = 2
};

struct ACCProj_SpiralRocketSimulationReceiver_execGetCurrentPhysicsTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_SpiralRocketSimulationReceiver_execSimulationUpdateMyVelocity_Parms
{
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketSimulationReceiver_execPerformEnemyHuntSimulation_Parms
{
	int EntryIndex;
	float EntryTimeStampOffset;
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketSimulationReceiver_execPerformSplineSimulation_Parms
{
	int EntryIndex;
	float EntryTimeStampOffset;
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketSimulationReceiver_execGetUpdatePendingSimulationEntry_Parms
{
	float DeltaTime;
	int EntryIndex; // CPF_OutParm
	float EntryTimeStampOffset; // CPF_OutParm
	float EntryDeltaTimeQuota; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketSimulationReceiver_execDrawTrajectoryPointDebug_Parms
{
	struct FVector Loc;
	struct FVector Vel;
	float LineLen;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned long bPersistant : 1;
};

struct ACCProj_SpiralRocketSimulationReceiver_execDrawSimulationEntryDebug_Parms
{
	struct FSimulationEntry Entry;
	unsigned long bPersistant : 1;
};

struct ACCProj_SpiralRocketSimulationReceiver_execDrawSimulationEntriesDebug_Parms
{
};

struct ACCProj_SpiralRocketSimulationReceiver_execReceiveSimulationEntry_Parms
{
	struct FSimulationEntry Entry;
};// FUNC_Final

struct ACCProj_SpiralRocketSimulationReceiver_execReceiveEnemyHuntSimulationInfo_Parms
{
	float TimeStamp;
	struct FEnemyHuntSimulationInfo EnemySimulationInfo;
};

struct ACCProj_SpiralRocketSimulationReceiver_execReceiveSplineSimulationInfo_Parms
{
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
};

struct ACCProj_SpiralRocketSimulationReceiver_execReceiveSplineSimulationInfoPair_Parms
{
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
	struct FSplineSimulationInfo NextSplineInfo;
};

struct ACCProj_SpiralRocketSimulationReceiver_execSetRedirecting_Parms
{
	class ACCProj_SpiralRocketSimulationSender* InRedirectTo;
};

struct ACCProj_SpiralRocketSimulationReceiver_execInitialize_Parms
{
	int InUniqID;
	class ACCProj_SpiralRocketBase* InMyRocket;
};

// (0x1C0 - 0x1D8)
class ACCProj_SpiralRocketSimulationReceiver : public ACCProj_SpiralRocketSimulation
{
public:
	class ACCProj_SpiralRocketSimulationSender*        RedirectTo;                                  // 0x01C0 (0x0004)
	class ACCProj_SpiralRocketBase*                    MyRocket;                                    // 0x01C4 (0x0004)
	TArray< struct FSimulationEntry >                  SimulationEntries;                           // 0x01C8 (0x000C)
	unsigned long                                      bDrawRocketDebug : 1;                        // 0x01D4 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketSimulationReceiver" );

		return ClassPointer;
	};

public:
	float GetCurrentPhysicsTime ()
	{
		static UFunction* pfnGetCurrentPhysicsTime = NULL;

		if ( !pfnGetCurrentPhysicsTime )
			pfnGetCurrentPhysicsTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.GetCurrentPhysicsTime" );

		ACCProj_SpiralRocketSimulationReceiver_execGetCurrentPhysicsTime_Parms GetCurrentPhysicsTime_Parms;

		this->ProcessEvent( pfnGetCurrentPhysicsTime, &GetCurrentPhysicsTime_Parms, NULL );

		return GetCurrentPhysicsTime_Parms.ReturnValue;
	};

	float SimulationUpdateMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnSimulationUpdateMyVelocity = NULL;

		if ( !pfnSimulationUpdateMyVelocity )
			pfnSimulationUpdateMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.SimulationUpdateMyVelocity" );

		ACCProj_SpiralRocketSimulationReceiver_execSimulationUpdateMyVelocity_Parms SimulationUpdateMyVelocity_Parms;
		SimulationUpdateMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnSimulationUpdateMyVelocity, &SimulationUpdateMyVelocity_Parms, NULL );

		return SimulationUpdateMyVelocity_Parms.ReturnValue;
	};

	float PerformEnemyHuntSimulation ( int EntryIndex, float EntryTimeStampOffset, float DeltaTime )
	{
		static UFunction* pfnPerformEnemyHuntSimulation = NULL;

		if ( !pfnPerformEnemyHuntSimulation )
			pfnPerformEnemyHuntSimulation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.PerformEnemyHuntSimulation" );

		ACCProj_SpiralRocketSimulationReceiver_execPerformEnemyHuntSimulation_Parms PerformEnemyHuntSimulation_Parms;
		PerformEnemyHuntSimulation_Parms.EntryIndex = EntryIndex;
		PerformEnemyHuntSimulation_Parms.EntryTimeStampOffset = EntryTimeStampOffset;
		PerformEnemyHuntSimulation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPerformEnemyHuntSimulation, &PerformEnemyHuntSimulation_Parms, NULL );

		return PerformEnemyHuntSimulation_Parms.ReturnValue;
	};

	float PerformSplineSimulation ( int EntryIndex, float EntryTimeStampOffset, float DeltaTime )
	{
		static UFunction* pfnPerformSplineSimulation = NULL;

		if ( !pfnPerformSplineSimulation )
			pfnPerformSplineSimulation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.PerformSplineSimulation" );

		ACCProj_SpiralRocketSimulationReceiver_execPerformSplineSimulation_Parms PerformSplineSimulation_Parms;
		PerformSplineSimulation_Parms.EntryIndex = EntryIndex;
		PerformSplineSimulation_Parms.EntryTimeStampOffset = EntryTimeStampOffset;
		PerformSplineSimulation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPerformSplineSimulation, &PerformSplineSimulation_Parms, NULL );

		return PerformSplineSimulation_Parms.ReturnValue;
	};

	bool GetUpdatePendingSimulationEntry ( float DeltaTime, int* EntryIndex, float* EntryTimeStampOffset, float* EntryDeltaTimeQuota )
	{
		static UFunction* pfnGetUpdatePendingSimulationEntry = NULL;

		if ( !pfnGetUpdatePendingSimulationEntry )
			pfnGetUpdatePendingSimulationEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.GetUpdatePendingSimulationEntry" );

		ACCProj_SpiralRocketSimulationReceiver_execGetUpdatePendingSimulationEntry_Parms GetUpdatePendingSimulationEntry_Parms;
		GetUpdatePendingSimulationEntry_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnGetUpdatePendingSimulationEntry, &GetUpdatePendingSimulationEntry_Parms, NULL );

		if ( EntryIndex )
			*EntryIndex = GetUpdatePendingSimulationEntry_Parms.EntryIndex; // CPF_OutParm
		if ( EntryTimeStampOffset )
			*EntryTimeStampOffset = GetUpdatePendingSimulationEntry_Parms.EntryTimeStampOffset; // CPF_OutParm
		if ( EntryDeltaTimeQuota )
			*EntryDeltaTimeQuota = GetUpdatePendingSimulationEntry_Parms.EntryDeltaTimeQuota; // CPF_OutParm

		return GetUpdatePendingSimulationEntry_Parms.ReturnValue;
	};

	void DrawTrajectoryPointDebug ( struct FVector Loc, struct FVector Vel, float LineLen, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistant )
	{
		static UFunction* pfnDrawTrajectoryPointDebug = NULL;

		if ( !pfnDrawTrajectoryPointDebug )
			pfnDrawTrajectoryPointDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.DrawTrajectoryPointDebug" );

		ACCProj_SpiralRocketSimulationReceiver_execDrawTrajectoryPointDebug_Parms DrawTrajectoryPointDebug_Parms;
		memcpy( &DrawTrajectoryPointDebug_Parms.Loc, &Loc, 0xC );
		memcpy( &DrawTrajectoryPointDebug_Parms.Vel, &Vel, 0xC );
		DrawTrajectoryPointDebug_Parms.LineLen = LineLen;
		DrawTrajectoryPointDebug_Parms.R = R;
		DrawTrajectoryPointDebug_Parms.G = G;
		DrawTrajectoryPointDebug_Parms.B = B;
		DrawTrajectoryPointDebug_Parms.bPersistant = bPersistant;

		this->ProcessEvent( pfnDrawTrajectoryPointDebug, &DrawTrajectoryPointDebug_Parms, NULL );
	};

	void DrawSimulationEntryDebug ( struct FSimulationEntry Entry, unsigned long bPersistant )
	{
		static UFunction* pfnDrawSimulationEntryDebug = NULL;

		if ( !pfnDrawSimulationEntryDebug )
			pfnDrawSimulationEntryDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.DrawSimulationEntryDebug" );

		ACCProj_SpiralRocketSimulationReceiver_execDrawSimulationEntryDebug_Parms DrawSimulationEntryDebug_Parms;
		memcpy( &DrawSimulationEntryDebug_Parms.Entry, &Entry, 0xE8 );
		DrawSimulationEntryDebug_Parms.bPersistant = bPersistant;

		this->ProcessEvent( pfnDrawSimulationEntryDebug, &DrawSimulationEntryDebug_Parms, NULL );
	};

	void DrawSimulationEntriesDebug ()
	{
		static UFunction* pfnDrawSimulationEntriesDebug = NULL;

		if ( !pfnDrawSimulationEntriesDebug )
			pfnDrawSimulationEntriesDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.DrawSimulationEntriesDebug" );

		ACCProj_SpiralRocketSimulationReceiver_execDrawSimulationEntriesDebug_Parms DrawSimulationEntriesDebug_Parms;

		this->ProcessEvent( pfnDrawSimulationEntriesDebug, &DrawSimulationEntriesDebug_Parms, NULL );
	};

	void ReceiveSimulationEntry ( struct FSimulationEntry Entry )
	{
		static UFunction* pfnReceiveSimulationEntry = NULL;

		if ( !pfnReceiveSimulationEntry )
			pfnReceiveSimulationEntry = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.ReceiveSimulationEntry" );

		ACCProj_SpiralRocketSimulationReceiver_execReceiveSimulationEntry_Parms ReceiveSimulationEntry_Parms;
		memcpy( &ReceiveSimulationEntry_Parms.Entry, &Entry, 0xE8 );

		this->ProcessEvent( pfnReceiveSimulationEntry, &ReceiveSimulationEntry_Parms, NULL );
	};

	void ReceiveEnemyHuntSimulationInfo ( float TimeStamp, struct FEnemyHuntSimulationInfo EnemySimulationInfo )
	{
		static UFunction* pfnReceiveEnemyHuntSimulationInfo = NULL;

		if ( !pfnReceiveEnemyHuntSimulationInfo )
			pfnReceiveEnemyHuntSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.ReceiveEnemyHuntSimulationInfo" );

		ACCProj_SpiralRocketSimulationReceiver_execReceiveEnemyHuntSimulationInfo_Parms ReceiveEnemyHuntSimulationInfo_Parms;
		ReceiveEnemyHuntSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ReceiveEnemyHuntSimulationInfo_Parms.EnemySimulationInfo, &EnemySimulationInfo, 0x28 );

		this->ProcessEvent( pfnReceiveEnemyHuntSimulationInfo, &ReceiveEnemyHuntSimulationInfo_Parms, NULL );
	};

	void ReceiveSplineSimulationInfo ( float TimeStamp, struct FSplineSimulationInfo SplineInfo )
	{
		static UFunction* pfnReceiveSplineSimulationInfo = NULL;

		if ( !pfnReceiveSplineSimulationInfo )
			pfnReceiveSplineSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.ReceiveSplineSimulationInfo" );

		ACCProj_SpiralRocketSimulationReceiver_execReceiveSplineSimulationInfo_Parms ReceiveSplineSimulationInfo_Parms;
		ReceiveSplineSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &ReceiveSplineSimulationInfo_Parms.SplineInfo, &SplineInfo, 0x34 );

		this->ProcessEvent( pfnReceiveSplineSimulationInfo, &ReceiveSplineSimulationInfo_Parms, NULL );
	};

	void ReceiveSplineSimulationInfoPair ( float TimeStamp, struct FSplineSimulationInfo SplineInfo, struct FSplineSimulationInfo NextSplineInfo )
	{
		static UFunction* pfnReceiveSplineSimulationInfoPair = NULL;

		if ( !pfnReceiveSplineSimulationInfoPair )
			pfnReceiveSplineSimulationInfoPair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.ReceiveSplineSimulationInfoPair" );

		ACCProj_SpiralRocketSimulationReceiver_execReceiveSplineSimulationInfoPair_Parms ReceiveSplineSimulationInfoPair_Parms;
		ReceiveSplineSimulationInfoPair_Parms.TimeStamp = TimeStamp;
		memcpy( &ReceiveSplineSimulationInfoPair_Parms.SplineInfo, &SplineInfo, 0x34 );
		memcpy( &ReceiveSplineSimulationInfoPair_Parms.NextSplineInfo, &NextSplineInfo, 0x34 );

		this->ProcessEvent( pfnReceiveSplineSimulationInfoPair, &ReceiveSplineSimulationInfoPair_Parms, NULL );
	};

	void SetRedirecting ( class ACCProj_SpiralRocketSimulationSender* InRedirectTo )
	{
		static UFunction* pfnSetRedirecting = NULL;

		if ( !pfnSetRedirecting )
			pfnSetRedirecting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.SetRedirecting" );

		ACCProj_SpiralRocketSimulationReceiver_execSetRedirecting_Parms SetRedirecting_Parms;
		SetRedirecting_Parms.InRedirectTo = InRedirectTo;

		this->ProcessEvent( pfnSetRedirecting, &SetRedirecting_Parms, NULL );
	};

	void Initialize ( int InUniqID, class ACCProj_SpiralRocketBase* InMyRocket )
	{
		static UFunction* pfnInitialize = NULL;

		if ( !pfnInitialize )
			pfnInitialize = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationReceiver.Initialize" );

		ACCProj_SpiralRocketSimulationReceiver_execInitialize_Parms Initialize_Parms;
		Initialize_Parms.InUniqID = InUniqID;
		Initialize_Parms.InMyRocket = InMyRocket;

		this->ProcessEvent( pfnInitialize, &Initialize_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketSimulationReceiver::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif