/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCSurvivalGameInfo.h
// Date: 06/16/2011 @ 05:19:41.997
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCSurvivalGameInfo_execDelayedEndGame_Parms
{
	struct FString Reason;
};

struct ACCSurvivalGameInfo_execCheckWaveLimitCondition_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo_execCheckBreachCondition_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo_execEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
};

struct ACCSurvivalGameInfo_execCheckEndGame_Parms
{
	class APlayerReplicationInfo* Winner;
	struct FString Reason;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo_execStartAnnouncing_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo_execNotifyKismetAboutStartedWave_Parms
{
	int WaveIndex;
};

struct ACCSurvivalGameInfo_execSwitchToNextWave_Parms
{
};

struct ACCSurvivalGameInfo_execSetDefenceCorePercentage_Parms
{
	float Percentage;
};

struct ACCSurvivalGameInfo_execResetRemainingTime_Parms
{
};

struct ACCSurvivalGameInfo_execChangeTeam_Parms
{
	class AController* Other;
	int Num;
	unsigned long bNewTeam : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCSurvivalGameInfo_execKilled_Parms
{
	class AController* Killer;
	class AController* KilledPlayer;
	class APawn* KilledPawn;
	class UClass* DamageType;
};

struct ACCSurvivalGameInfo_execReset_Parms
{
};

struct ACCSurvivalGameInfo_execStartMatch_Parms
{
};

struct ACCSurvivalGameInfo_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCSurvivalGameInfo_eventInitGame_Parms
{
	struct FString Options;
	struct FString ErrorMessage; // CPF_OutParm
};// FUNC_Event

// (0xD70 - 0xDA8)
class ACCSurvivalGameInfo : public ACCPVEGameInfo
{
public:
	void*                                              WaveInfo;                                    // 0x0D70 (0x0004)
	int                                                CurrentWave;                                 // 0x0D74 (0x0004)
	unsigned long                                      bWaveInProgress : 1;                         // 0x0D78 (0x0004) [0x00000001]
	unsigned long                                      bFirstWave : 1;                              // 0x0D78 (0x0004) [0x00000002]
	unsigned long                                      bAnnounceWaves : 1;                          // 0x0D78 (0x0004) [0x00000004]
	unsigned long                                      bDefCoreAtFifty : 1;                         // 0x0D78 (0x0004) [0x00000008]
	float                                              FirstWaveDelay;                              // 0x0D7C (0x0004)
	int                                                AnnounceTime;                                // 0x0D80 (0x0004)
	int                                                AnnounceCountdown;                           // 0x0D84 (0x0004)
	TArray< void* >                                    WaveInfoList;                                // 0x0D88 (0x000C)
	int                                                WaveInfoIdx;                                 // 0x0D94 (0x0004)
	float                                              MatchTime;                                   // 0x0D98 (0x0004)
	float                                              MatchTimeLimit;                              // 0x0D9C (0x0004)
	float                                              MatchTimeSpeed;                              // 0x0DA0 (0x0004)
	int                                                LastWaveTimeoutCounter;                      // 0x0DA4 (0x0004)

	// MatchOver
	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCSurvivalGameInfo" );

		return ClassPointer;
	};

public:
	void DelayedEndGame ( struct FString Reason )
	{
		static UFunction* pfnDelayedEndGame = NULL;

		if ( !pfnDelayedEndGame )
			pfnDelayedEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.DelayedEndGame" );

		ACCSurvivalGameInfo_execDelayedEndGame_Parms DelayedEndGame_Parms;
		memcpy( &DelayedEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnDelayedEndGame, &DelayedEndGame_Parms, NULL );
	};

	bool CheckWaveLimitCondition ()
	{
		static UFunction* pfnCheckWaveLimitCondition = NULL;

		if ( !pfnCheckWaveLimitCondition )
			pfnCheckWaveLimitCondition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.CheckWaveLimitCondition" );

		ACCSurvivalGameInfo_execCheckWaveLimitCondition_Parms CheckWaveLimitCondition_Parms;

		this->ProcessEvent( pfnCheckWaveLimitCondition, &CheckWaveLimitCondition_Parms, NULL );

		return CheckWaveLimitCondition_Parms.ReturnValue;
	};

	bool CheckBreachCondition ()
	{
		static UFunction* pfnCheckBreachCondition = NULL;

		if ( !pfnCheckBreachCondition )
			pfnCheckBreachCondition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.CheckBreachCondition" );

		ACCSurvivalGameInfo_execCheckBreachCondition_Parms CheckBreachCondition_Parms;

		this->ProcessEvent( pfnCheckBreachCondition, &CheckBreachCondition_Parms, NULL );

		return CheckBreachCondition_Parms.ReturnValue;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnEndGame = NULL;

		if ( !pfnEndGame )
			pfnEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.EndGame" );

		ACCSurvivalGameInfo_execEndGame_Parms EndGame_Parms;
		EndGame_Parms.Winner = Winner;
		memcpy( &EndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnEndGame, &EndGame_Parms, NULL );
	};

	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason )
	{
		static UFunction* pfnCheckEndGame = NULL;

		if ( !pfnCheckEndGame )
			pfnCheckEndGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.CheckEndGame" );

		ACCSurvivalGameInfo_execCheckEndGame_Parms CheckEndGame_Parms;
		CheckEndGame_Parms.Winner = Winner;
		memcpy( &CheckEndGame_Parms.Reason, &Reason, 0xC );

		this->ProcessEvent( pfnCheckEndGame, &CheckEndGame_Parms, NULL );

		return CheckEndGame_Parms.ReturnValue;
	};

	bool StartAnnouncing ()
	{
		static UFunction* pfnStartAnnouncing = NULL;

		if ( !pfnStartAnnouncing )
			pfnStartAnnouncing = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.StartAnnouncing" );

		ACCSurvivalGameInfo_execStartAnnouncing_Parms StartAnnouncing_Parms;

		this->ProcessEvent( pfnStartAnnouncing, &StartAnnouncing_Parms, NULL );

		return StartAnnouncing_Parms.ReturnValue;
	};

	void NotifyKismetAboutStartedWave ( int WaveIndex )
	{
		static UFunction* pfnNotifyKismetAboutStartedWave = NULL;

		if ( !pfnNotifyKismetAboutStartedWave )
			pfnNotifyKismetAboutStartedWave = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.NotifyKismetAboutStartedWave" );

		ACCSurvivalGameInfo_execNotifyKismetAboutStartedWave_Parms NotifyKismetAboutStartedWave_Parms;
		NotifyKismetAboutStartedWave_Parms.WaveIndex = WaveIndex;

		this->ProcessEvent( pfnNotifyKismetAboutStartedWave, &NotifyKismetAboutStartedWave_Parms, NULL );
	};

	void SwitchToNextWave ()
	{
		static UFunction* pfnSwitchToNextWave = NULL;

		if ( !pfnSwitchToNextWave )
			pfnSwitchToNextWave = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.SwitchToNextWave" );

		ACCSurvivalGameInfo_execSwitchToNextWave_Parms SwitchToNextWave_Parms;

		this->ProcessEvent( pfnSwitchToNextWave, &SwitchToNextWave_Parms, NULL );
	};

	void SetDefenceCorePercentage ( float Percentage )
	{
		static UFunction* pfnSetDefenceCorePercentage = NULL;

		if ( !pfnSetDefenceCorePercentage )
			pfnSetDefenceCorePercentage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.SetDefenceCorePercentage" );

		ACCSurvivalGameInfo_execSetDefenceCorePercentage_Parms SetDefenceCorePercentage_Parms;
		SetDefenceCorePercentage_Parms.Percentage = Percentage;

		this->ProcessEvent( pfnSetDefenceCorePercentage, &SetDefenceCorePercentage_Parms, NULL );
	};

	void ResetRemainingTime ()
	{
		static UFunction* pfnResetRemainingTime = NULL;

		if ( !pfnResetRemainingTime )
			pfnResetRemainingTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.ResetRemainingTime" );

		ACCSurvivalGameInfo_execResetRemainingTime_Parms ResetRemainingTime_Parms;

		this->ProcessEvent( pfnResetRemainingTime, &ResetRemainingTime_Parms, NULL );
	};

	bool ChangeTeam ( class AController* Other, int Num, unsigned long bNewTeam )
	{
		static UFunction* pfnChangeTeam = NULL;

		if ( !pfnChangeTeam )
			pfnChangeTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.ChangeTeam" );

		ACCSurvivalGameInfo_execChangeTeam_Parms ChangeTeam_Parms;
		ChangeTeam_Parms.Other = Other;
		ChangeTeam_Parms.Num = Num;
		ChangeTeam_Parms.bNewTeam = bNewTeam;

		this->ProcessEvent( pfnChangeTeam, &ChangeTeam_Parms, NULL );

		return ChangeTeam_Parms.ReturnValue;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType )
	{
		static UFunction* pfnKilled = NULL;

		if ( !pfnKilled )
			pfnKilled = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.Killed" );

		ACCSurvivalGameInfo_execKilled_Parms Killed_Parms;
		Killed_Parms.Killer = Killer;
		Killed_Parms.KilledPlayer = KilledPlayer;
		Killed_Parms.KilledPawn = KilledPawn;
		Killed_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnKilled, &Killed_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.Reset" );

		ACCSurvivalGameInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.StartMatch" );

		ACCSurvivalGameInfo_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.PostBeginPlay" );

		ACCSurvivalGameInfo_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage )
	{
		static UFunction* pfnInitGame = NULL;

		if ( !pfnInitGame )
			pfnInitGame = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSurvivalGameInfo.InitGame" );

		ACCSurvivalGameInfo_eventInitGame_Parms InitGame_Parms;
		memcpy( &InitGame_Parms.Options, &Options, 0xC );

		this->ProcessEvent( pfnInitGame, &InitGame_Parms, NULL );

		if ( ErrorMessage )
			memcpy( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC ); // CPF_OutParm
	};

};

UClass* ACCSurvivalGameInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif