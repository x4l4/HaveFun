/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketSimulationSender.h
// Date: 06/16/2011 @ 05:19:42.115
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketSimulationSender_execSendEnemyHuntSimulationInfo_Parms
{
	float TimeStamp;
	struct FEnemyHuntSimulationInfo EnemySimulationInfo;
};

struct ACCProj_SpiralRocketSimulationSender_execSendSplineSimulationInfoPair_Parms
{
	float TimeStamp;
	struct FSplineSimulationInfo SplineInfo;
	struct FSplineSimulationInfo NextSplineInfo;
};

struct ACCProj_SpiralRocketSimulationSender_execSetAdditionalTime_Parms
{
	float NewAdditionalTime;
};

struct ACCProj_SpiralRocketSimulationSender_execInitialize_Parms
{
	int InUniqID;
	class ACCInstanceController* InTargetController;
	int InTargetType;
};

// (0x1C0 - 0x1CC)
class ACCProj_SpiralRocketSimulationSender : public ACCProj_SpiralRocketSimulation
{
public:
	class ACCInstanceController*                       TargetController;                            // 0x01C0 (0x0004)
	int                                                TargetType;                                  // 0x01C4 (0x0004)
	float                                              AdditionalTime;                              // 0x01C8 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketSimulationSender" );

		return ClassPointer;
	};

public:
	void SendEnemyHuntSimulationInfo ( float TimeStamp, struct FEnemyHuntSimulationInfo EnemySimulationInfo )
	{
		static UFunction* pfnSendEnemyHuntSimulationInfo = NULL;

		if ( !pfnSendEnemyHuntSimulationInfo )
			pfnSendEnemyHuntSimulationInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationSender.SendEnemyHuntSimulationInfo" );

		ACCProj_SpiralRocketSimulationSender_execSendEnemyHuntSimulationInfo_Parms SendEnemyHuntSimulationInfo_Parms;
		SendEnemyHuntSimulationInfo_Parms.TimeStamp = TimeStamp;
		memcpy( &SendEnemyHuntSimulationInfo_Parms.EnemySimulationInfo, &EnemySimulationInfo, 0x28 );

		this->ProcessEvent( pfnSendEnemyHuntSimulationInfo, &SendEnemyHuntSimulationInfo_Parms, NULL );
	};

	void SendSplineSimulationInfoPair ( float TimeStamp, struct FSplineSimulationInfo SplineInfo, struct FSplineSimulationInfo NextSplineInfo )
	{
		static UFunction* pfnSendSplineSimulationInfoPair = NULL;

		if ( !pfnSendSplineSimulationInfoPair )
			pfnSendSplineSimulationInfoPair = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationSender.SendSplineSimulationInfoPair" );

		ACCProj_SpiralRocketSimulationSender_execSendSplineSimulationInfoPair_Parms SendSplineSimulationInfoPair_Parms;
		SendSplineSimulationInfoPair_Parms.TimeStamp = TimeStamp;
		memcpy( &SendSplineSimulationInfoPair_Parms.SplineInfo, &SplineInfo, 0x34 );
		memcpy( &SendSplineSimulationInfoPair_Parms.NextSplineInfo, &NextSplineInfo, 0x34 );

		this->ProcessEvent( pfnSendSplineSimulationInfoPair, &SendSplineSimulationInfoPair_Parms, NULL );
	};

	void SetAdditionalTime ( float NewAdditionalTime )
	{
		static UFunction* pfnSetAdditionalTime = NULL;

		if ( !pfnSetAdditionalTime )
			pfnSetAdditionalTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationSender.SetAdditionalTime" );

		ACCProj_SpiralRocketSimulationSender_execSetAdditionalTime_Parms SetAdditionalTime_Parms;
		SetAdditionalTime_Parms.NewAdditionalTime = NewAdditionalTime;

		this->ProcessEvent( pfnSetAdditionalTime, &SetAdditionalTime_Parms, NULL );
	};

	void Initialize ( int InUniqID, class ACCInstanceController* InTargetController, int InTargetType )
	{
		static UFunction* pfnInitialize = NULL;

		if ( !pfnInitialize )
			pfnInitialize = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulationSender.Initialize" );

		ACCProj_SpiralRocketSimulationSender_execInitialize_Parms Initialize_Parms;
		Initialize_Parms.InUniqID = InUniqID;
		Initialize_Parms.InTargetController = InTargetController;
		Initialize_Parms.InTargetType = InTargetType;

		this->ProcessEvent( pfnInitialize, &Initialize_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketSimulationSender::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif