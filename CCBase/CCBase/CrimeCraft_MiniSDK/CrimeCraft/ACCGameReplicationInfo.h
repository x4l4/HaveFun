/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.380
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCGameReplicationInfo_execProcessFeatsOnGameEnd_Parms
{
};

struct ACCGameReplicationInfo_execAddTeamScore_Parms
{
	int ScoreToAdd;
	int TeamIndex;
};

struct ACCGameReplicationInfo_execCreateAbilityManager_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCGameReplicationInfo_execEnsureWorkingAbilitySystem_Parms
{
};

struct ACCGameReplicationInfo_eventPreBeginPlay_Parms
{
};// FUNC_Event

// (0x250 - 0x644)
class ACCGameReplicationInfo : public AGameReplicationInfo
{
public:
	float                                              WeaponBerserk;                               // 0x0250 (0x0004)
	int                                                MinNetPlayers;                               // 0x0254 (0x0004)
	int                                                BotDifficulty;                               // 0x0258 (0x0004)
	unsigned long                                      bWarmupRound : 1;                            // 0x025C (0x0004) [0x00000001]
	unsigned long                                      bSpecialNPCSpawned : 1;                      // 0x025C (0x0004) [0x00000002]
	unsigned long                                      bBossSpawned : 1;                            // 0x025C (0x0004) [0x00000004]
	unsigned long                                      ai_bDebugInvisibility : 1;                   // 0x025C (0x0004) [0x00000008]
	unsigned long                                      SuddenDeath : 1;                             // 0x025C (0x0004) [0x00000010]
	unsigned long                                      bEndWarMupForAmmoCount : 1;                  // 0x025C (0x0004) [0x00000020]
	unsigned long                                      DemoRecording_Enabled : 1;                   // 0x025C (0x0004) [0x00000040]
	class APawn*                                       SpecialNPCPawn;                              // 0x0260 (0x0004)
	float                                              DefenceCorePercentage;                       // 0x0264 (0x0004)
	int                                                WaveNumber;                                  // 0x0268 (0x0004)
	int                                                TotalWaves;                                  // 0x026C (0x0004)
	int                                                NextWaveTime;                                // 0x0270 (0x0004)
	struct FVector                                     vBossPos;                                    // 0x0274 (0x000C)
	struct FString                                     ReplicatedMessageString;                     // 0x0280 (0x000C)
	void*                                              MapMenuTemplate;                             // 0x028C (0x0004)
	void*                                              MidGameMenuTemplate;                         // 0x0290 (0x0004)
	float                                              ai_DebugDelay;                               // 0x0294 (0x0004)
	void*                                              AbilityManager;                              // 0x0298 (0x0004)
	void*                                              AbilityActions;                              // 0x029C (0x0004)
	int                                                TempFileNumber;                              // 0x02A0 (0x0004)
	float                                              MultiKillDeltaTime;                          // 0x02A4 (0x0004)
	struct FString                                     CurrentAbilityPackage;                       // 0x02A8 (0x000C)
	int                                                WaitingCharacterCount;                       // 0x02B4 (0x0004)
	struct FWaitingCharacter                           WaitingCharacters[ 32 ];                     // 0x02B8 (0x0380)
	struct FString                                     DemoRecording_DemoName;                      // 0x0638 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCGameReplicationInfo" );

		return ClassPointer;
	};

public:
	void ProcessFeatsOnGameEnd ()
	{
		static UFunction* pfnProcessFeatsOnGameEnd = NULL;

		if ( !pfnProcessFeatsOnGameEnd )
			pfnProcessFeatsOnGameEnd = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameReplicationInfo.ProcessFeatsOnGameEnd" );

		ACCGameReplicationInfo_execProcessFeatsOnGameEnd_Parms ProcessFeatsOnGameEnd_Parms;

		this->ProcessEvent( pfnProcessFeatsOnGameEnd, &ProcessFeatsOnGameEnd_Parms, NULL );
	};

	void AddTeamScore ( int ScoreToAdd, int TeamIndex )
	{
		static UFunction* pfnAddTeamScore = NULL;

		if ( !pfnAddTeamScore )
			pfnAddTeamScore = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameReplicationInfo.AddTeamScore" );

		ACCGameReplicationInfo_execAddTeamScore_Parms AddTeamScore_Parms;
		AddTeamScore_Parms.ScoreToAdd = ScoreToAdd;
		AddTeamScore_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnAddTeamScore, &AddTeamScore_Parms, NULL );
	};

	bool CreateAbilityManager ()
	{
		static UFunction* pfnCreateAbilityManager = NULL;

		if ( !pfnCreateAbilityManager )
			pfnCreateAbilityManager = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameReplicationInfo.CreateAbilityManager" );

		ACCGameReplicationInfo_execCreateAbilityManager_Parms CreateAbilityManager_Parms;

		pfnCreateAbilityManager->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCreateAbilityManager, &CreateAbilityManager_Parms, NULL );
		pfnCreateAbilityManager->FunctionFlags |= 0x400;

		return CreateAbilityManager_Parms.ReturnValue;
	};

	void EnsureWorkingAbilitySystem ()
	{
		static UFunction* pfnEnsureWorkingAbilitySystem = NULL;

		if ( !pfnEnsureWorkingAbilitySystem )
			pfnEnsureWorkingAbilitySystem = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameReplicationInfo.EnsureWorkingAbilitySystem" );

		ACCGameReplicationInfo_execEnsureWorkingAbilitySystem_Parms EnsureWorkingAbilitySystem_Parms;

		this->ProcessEvent( pfnEnsureWorkingAbilitySystem, &EnsureWorkingAbilitySystem_Parms, NULL );
	};

	void eventPreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameReplicationInfo.PreBeginPlay" );

		ACCGameReplicationInfo_eventPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

};

UClass* ACCGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif