/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AWorldInfo.h
// Date: 06/16/2011 @ 05:19:39.905
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EConsoleType
{
	CONSOLE_Any = 0,
	CONSOLE_Xbox360 = 1,
	CONSOLE_PS3 = 2,
	CONSOLE_MAX = 3
};

enum ENetMode
{
	NM_Standalone = 0,
	NM_DedicatedServer = 1,
	NM_ListenServer = 2,
	NM_Client = 3,
	NM_MAX = 4
};

struct AWorldInfo_execGetWorldFractureSettings_Parms
{
	struct FWorldFractureSettings ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execOnScreenDebugMessageExists_Parms
{
	int Key;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_eventNotifyExiting_Parms
{
};// FUNC_Event

struct AWorldInfo_execAddOnScreenDebugMessage_Parms
{
	int Key;
	float TimeToDisplay;
	struct FColor DisplayColor;
	struct FString DebugMessage;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execDoMemoryTracking_Parms
{
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetDemoRewindPoints_Parms
{
	TArray< int > OutRewindPoints; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetDemoFrameInfo_Parms
{
	int CurrentFrame; // CPF_OutParm
	int TotalFrames; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsPlayingDemo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsRecordingDemo_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetDetailMode_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetMapName_Parms
{
	unsigned long bIncludePrefix : 1;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execSetMapInfo_Parms
{
	void* NewMapInfo;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetMapInfo_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execSetSeamlessTravelMidpointPause_Parms
{
	unsigned long bNowPaused : 1;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsInSeamlessTravel_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execSeamlessTravel_Parms
{
	struct FString URL;
	unsigned long bAbsolute : 1;
	struct FGuid MapPackageGuid;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execCommitMapChange_Parms
{
};// FUNC_Final FUNC_Native

struct AWorldInfo_execCancelPendingMapChange_Parms
{
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsMapChangeReady_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsPreparingMapChange_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execPrepareMapChange_Parms
{
	TArray< struct FName > LevelNames; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execNotifyMatchStarted_Parms
{
	unsigned long bShouldActivateLevelStartupEvents : 1;
	unsigned long bShouldActivateLevelBeginningEvents : 1;
	unsigned long bShouldActivateLevelLoadedEvents : 1;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execAllPawns_Parms
{
	class UClass* BaseClass;
	class APawn* P; // CPF_OutParm
	struct FVector TestLocation;
	float TestRadius;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execAllControllers_Parms
{
	class UClass* BaseClass;
	class AController* C; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execNavigationPointCheck_Parms
{
	struct FVector Point;
	struct FVector Extent;
	TArray< class ANavigationPoint* > Navs; // CPF_OutParm
	TArray< void* > Specs; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execRadiusNavigationPoints_Parms
{
	class UClass* BaseClass;
	class ANavigationPoint* N; // CPF_OutParm
	struct FVector Point;
	float Radius;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execAllNavigationPoints_Parms
{
	class UClass* BaseClass;
	class ANavigationPoint* N; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execReset_Parms
{
};

struct AWorldInfo_execPostBeginPlay_Parms
{
};

struct AWorldInfo_execPreBeginPlay_Parms
{
};

struct AWorldInfo_execThisIsNeverExecuted_Parms
{
	void* P;
};

struct AWorldInfo_eventServerTravel_Parms
{
	struct FString URL;
	unsigned long bAbsolute : 1;
	unsigned long bShouldSkipGameNotify : 1;
};// FUNC_Event

struct AWorldInfo_execGetGameClass_Parms
{
	class UClass* ReturnValue; // CPF_ReturnParm
};

struct AWorldInfo_execGetAddressURL_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AWorldInfo_execVerifyNavList_Parms
{
};// FUNC_Final FUNC_Native

struct AWorldInfo_execForceGarbageCollection_Parms
{
	unsigned long bFullPurge : 1;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsPlayInEditor_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsConsoleBuild_Parms
{
	unsigned char ConsoleType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsDemoBuild_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetLocalURL_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AWorldInfo_execSetLevelRBGravity_Parms
{
	struct FVector NewGrav;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetGameSequence_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_execGetGravityZ_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AWorldInfo_execIsServer_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct AWorldInfo_execUpdateMusicTrack_Parms
{
	struct FMusicTrackStruct NewMusicTrack;
};// FUNC_Final FUNC_Native

struct AWorldInfo_execIsMenuLevel_Parms
{
	struct FString MapName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct AWorldInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x1CC - 0x524)
class AWorldInfo : public AZoneInfo
{
public:
	struct FPostProcessSettings                        DefaultPostProcessSettings;                  // 0x01CC (0x0080)
	float                                              SquintModeKernelSize;                        // 0x024C (0x0004)
	void*                                              HighestPriorityPostProcessVolume;            // 0x0250 (0x0004)
	struct FReverbSettings                             DefaultReverbSettings;                       // 0x0254 (0x000C)
	void*                                              HighestPriorityReverbVolume;                 // 0x0260 (0x0004)
	TArray< void* >                                    PortalVolumes;                               // 0x0264 (0x000C)
	TArray< void* >                                    StreamingLevels;                             // 0x0270 (0x000C)
	unsigned long                                      bMapNeedsLightingFullyRebuilt : 1;           // 0x027C (0x0004) [0x00000001]
	unsigned long                                      bMapHasPathingErrors : 1;                    // 0x027C (0x0004) [0x00000002]
	unsigned long                                      bRequestedBlockOnAsyncLoading : 1;           // 0x027C (0x0004) [0x00000004]
	unsigned long                                      bBegunPlay : 1;                              // 0x027C (0x0004) [0x00000008]
	unsigned long                                      bPlayersOnly : 1;                            // 0x027C (0x0004) [0x00000010]
	unsigned long                                      bDropDetail : 1;                             // 0x027C (0x0004) [0x00000020]
	unsigned long                                      bAggressiveLOD : 1;                          // 0x027C (0x0004) [0x00000040]
	unsigned long                                      bStartup : 1;                                // 0x027C (0x0004) [0x00000080]
	unsigned long                                      bPathsRebuilt : 1;                           // 0x027C (0x0004) [0x00000100]
	unsigned long                                      bHasPathNodes : 1;                           // 0x027C (0x0004) [0x00000200]
	unsigned long                                      bIsMenuLevel : 1;                            // 0x027C (0x0004) [0x00000400]
	unsigned long                                      bUseConsoleInput : 1;                        // 0x027C (0x0004) [0x00000800]
	unsigned long                                      bNoDefaultInventoryForPlayer : 1;            // 0x027C (0x0004) [0x00001000]
	unsigned long                                      bNoPathWarnings : 1;                         // 0x027C (0x0004) [0x00002000]
	unsigned long                                      bHighPriorityLoading : 1;                    // 0x027C (0x0004) [0x00004000]
	unsigned long                                      bHighPriorityLoadingLocal : 1;               // 0x027C (0x0004) [0x00008000]
	unsigned long                                      bSupportDoubleBufferedPhysics : 1;           // 0x027C (0x0004) [0x00010000]
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;     // 0x027C (0x0004) [0x00020000]
	unsigned long                                      bLimitExplosionChunkSize : 1;                // 0x027C (0x0004) [0x00040000]
	unsigned long                                      bLimitDamageChunkSize : 1;                   // 0x027C (0x0004) [0x00080000]
	unsigned long                                      bAllowModulateBetterShadows : 1;             // 0x027C (0x0004) [0x00100000]
	unsigned long                                      bAllowLightEnvSphericalHarmonicLights : 1;   // 0x027C (0x0004) [0x00200000]
	unsigned long                                      bIncreaseFogNearPrecision : 1;               // 0x027C (0x0004) [0x00400000]
	struct FDouble                                     LastTimeUnbuiltLightingWasEncountered;       // 0x0280 (0x0008)
	void*                                              BookMarks[ 10 ];                             // 0x0288 (0x0028)
	TArray< void* >                                    ClipPadEntries;                              // 0x02B0 (0x000C)
	float                                              TimeDilation;                                // 0x02BC (0x0004)
	float                                              DemoPlayTimeDilation;                        // 0x02C0 (0x0004)
	float                                              TimeSeconds;                                 // 0x02C4 (0x0004)
	float                                              RealTimeSeconds;                             // 0x02C8 (0x0004)
	float                                              AudioTimeSeconds;                            // 0x02CC (0x0004)
	float                                              DeltaSeconds;                                // 0x02D0 (0x0004)
	float                                              PauseDelay;                                  // 0x02D4 (0x0004)
	float                                              RealTimeToUnPause;                           // 0x02D8 (0x0004)
	class APlayerReplicationInfo*                      Pauser;                                      // 0x02DC (0x0004)
	struct FString                                     VisibleGroups;                               // 0x02E0 (0x000C)
	struct FString                                     SelectedGroups;                              // 0x02EC (0x000C)
	class UTexture2D*                                  DefaultTexture;                              // 0x02F8 (0x0004)
	class UTexture2D*                                  WireframeTexture;                            // 0x02FC (0x0004)
	class UTexture2D*                                  WhiteSquareTexture;                          // 0x0300 (0x0004)
	class UTexture2D*                                  LargeVertex;                                 // 0x0304 (0x0004)
	class UTexture2D*                                  BSPVertex;                                   // 0x0308 (0x0004)
	TArray< struct FString >                           DeferredExecs;                               // 0x030C (0x000C)
	class AGameReplicationInfo*                        GRI;                                         // 0x0318 (0x0004)
	unsigned char                                      NetMode;                                     // 0x031C (0x0001)
	unsigned char                                      NextTravelType;                              // 0x031D (0x0001)
	struct FString                                     ComputerName;                                // 0x0320 (0x000C)
	struct FString                                     EngineVersion;                               // 0x032C (0x000C)
	struct FString                                     MinNetVersion;                               // 0x0338 (0x000C)
	class AGameInfo*                                   Game;                                        // 0x0344 (0x0004)
	float                                              StallZ;                                      // 0x0348 (0x0004)
	float                                              WorldGravityZ;                               // 0x034C (0x0004)
	float                                              DefaultGravityZ;                             // 0x0350 (0x0004)
	float                                              GlobalGravityZ;                              // 0x0354 (0x0004)
	float                                              RBPhysicsGravityScaling;                     // 0x0358 (0x0004)
	class ANavigationPoint*                            NavigationPointList;                         // 0x035C (0x0004)
	class AController*                                 ControllerList;                              // 0x0360 (0x0004)
	class APawn*                                       PawnList;                                    // 0x0364 (0x0004)
	void*                                              CoverList;                                   // 0x0368 (0x0004)
	float                                              MoveRepSize;                                 // 0x036C (0x0004)
	TArray< struct FNetViewer >                        ReplicationViewers;                          // 0x0370 (0x000C)
	struct FString                                     NextURL;                                     // 0x037C (0x000C)
	float                                              NextSwitchCountdown;                         // 0x0388 (0x0004)
	int                                                PackedLightAndShadowMapTextureSize;          // 0x038C (0x0004)
	struct FVector                                     DefaultColorScale;                           // 0x0390 (0x000C)
	TArray< class UClass* >                            GameTypesSupportedOnThisMap;                 // 0x039C (0x000C)
	TArray< class UObject* >                           ClientDestroyedActorContent;                 // 0x03A8 (0x000C)
	TArray< struct FName >                             PreparingLevelNames;                         // 0x03B4 (0x000C)
	struct FName                                       CommittedPersistentLevelName;                // 0x03C0 (0x0008)
	void*                                              MusicComp;                                   // 0x03C8 (0x0004)
	struct FMusicTrackStruct                           CurrentMusicTrack;                           // 0x03CC (0x0018)
	struct FMusicTrackStruct                           ReplicatedMusicTrack;                        // 0x03E4 (0x0018)
	struct FString                                     Title;                                       // 0x03FC (0x000C)
	struct FString                                     Author;                                      // 0x0408 (0x000C)
	void*                                              MyMapInfo;                                   // 0x0414 (0x0004)
	struct FString                                     EmitterPoolClassPath;                        // 0x0418 (0x000C)
	void*                                              MyEmitterPool;                               // 0x0424 (0x0004)
	struct FString                                     DecalManagerClassPath;                       // 0x0428 (0x000C)
	void*                                              MyDecalManager;                              // 0x0434 (0x0004)
	struct FString                                     FractureManagerClassPath;                    // 0x0438 (0x000C)
	void*                                              MyFractureManager;                           // 0x0444 (0x0004)
	float                                              MaxPhysicsDeltaTime;                         // 0x0448 (0x0004)
	int                                                MaxPhysicsSubsteps;                          // 0x044C (0x0004)
	struct FPhysXSceneProperties                       PhysicsProperties;                           // 0x0450 (0x003C)
	TArray< struct FCompartmentRunList >               CompartmentRunFrames;                        // 0x048C (0x000C)
	void*                                              EmitterVertical;                             // 0x0498 (0x0004)
	void*                                              DestructibleVertical;                        // 0x049C (0x0004)
	struct FPhysXVerticalProperties                    VerticalProperties;                          // 0x04A0 (0x0018)
	float                                              GlobalLodSwitchKoeff;                        // 0x04B8 (0x0004)
	float                                              ChanceOfPhysicsChunkOverride;                // 0x04BC (0x0004)
	float                                              MaxExplosionChunkSize;                       // 0x04C0 (0x0004)
	float                                              MaxDamageChunkSize;                          // 0x04C4 (0x0004)
	float                                              FractureExplosionVelScale;                   // 0x04C8 (0x0004)
	int                                                MaxNumFacturedChunksToSpawnInAFrame;         // 0x04CC (0x0004)
	int                                                NumFacturedChunksSpawnedThisFrame;           // 0x04D0 (0x0004)
	float                                              FracturedMeshWeaponDamage;                   // 0x04D4 (0x0004)
	struct FMap_Mirror                                 ScreenMessages;                              // 0x04D8 (0x003C)
	TArray< struct FScreenMessageString >              PriorityScreenMessages;                      // 0x0514 (0x000C)
	void*                                              ReplicationStatsObject;                      // 0x0520 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.WorldInfo" );

		return ClassPointer;
	};

public:
	struct FWorldFractureSettings GetWorldFractureSettings ()
	{
		static UFunction* pfnGetWorldFractureSettings = NULL;

		if ( !pfnGetWorldFractureSettings )
			pfnGetWorldFractureSettings = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetWorldFractureSettings" );

		AWorldInfo_execGetWorldFractureSettings_Parms GetWorldFractureSettings_Parms;

		pfnGetWorldFractureSettings->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetWorldFractureSettings, &GetWorldFractureSettings_Parms, NULL );
		pfnGetWorldFractureSettings->FunctionFlags |= 0x400;

		return GetWorldFractureSettings_Parms.ReturnValue;
	};

	bool OnScreenDebugMessageExists ( int Key )
	{
		static UFunction* pfnOnScreenDebugMessageExists = NULL;

		if ( !pfnOnScreenDebugMessageExists )
			pfnOnScreenDebugMessageExists = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.OnScreenDebugMessageExists" );

		AWorldInfo_execOnScreenDebugMessageExists_Parms OnScreenDebugMessageExists_Parms;
		OnScreenDebugMessageExists_Parms.Key = Key;

		pfnOnScreenDebugMessageExists->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnOnScreenDebugMessageExists, &OnScreenDebugMessageExists_Parms, NULL );
		pfnOnScreenDebugMessageExists->FunctionFlags |= 0x400;

		return OnScreenDebugMessageExists_Parms.ReturnValue;
	};

	void eventNotifyExiting ()
	{
		static UFunction* pfnNotifyExiting = NULL;

		if ( !pfnNotifyExiting )
			pfnNotifyExiting = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.NotifyExiting" );

		AWorldInfo_eventNotifyExiting_Parms NotifyExiting_Parms;

		this->ProcessEvent( pfnNotifyExiting, &NotifyExiting_Parms, NULL );
	};

	void AddOnScreenDebugMessage ( int Key, float TimeToDisplay, struct FColor DisplayColor, struct FString DebugMessage )
	{
		static UFunction* pfnAddOnScreenDebugMessage = NULL;

		if ( !pfnAddOnScreenDebugMessage )
			pfnAddOnScreenDebugMessage = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.AddOnScreenDebugMessage" );

		AWorldInfo_execAddOnScreenDebugMessage_Parms AddOnScreenDebugMessage_Parms;
		AddOnScreenDebugMessage_Parms.Key = Key;
		AddOnScreenDebugMessage_Parms.TimeToDisplay = TimeToDisplay;
		memcpy( &AddOnScreenDebugMessage_Parms.DisplayColor, &DisplayColor, 0x4 );
		memcpy( &AddOnScreenDebugMessage_Parms.DebugMessage, &DebugMessage, 0xC );

		pfnAddOnScreenDebugMessage->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddOnScreenDebugMessage, &AddOnScreenDebugMessage_Parms, NULL );
		pfnAddOnScreenDebugMessage->FunctionFlags |= 0x400;
	};

	void DoMemoryTracking ()
	{
		static UFunction* pfnDoMemoryTracking = NULL;

		if ( !pfnDoMemoryTracking )
			pfnDoMemoryTracking = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.DoMemoryTracking" );

		AWorldInfo_execDoMemoryTracking_Parms DoMemoryTracking_Parms;

		pfnDoMemoryTracking->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDoMemoryTracking, &DoMemoryTracking_Parms, NULL );
		pfnDoMemoryTracking->FunctionFlags |= 0x400;
	};

	bool GetDemoRewindPoints ( TArray< int >* OutRewindPoints )
	{
		static UFunction* pfnGetDemoRewindPoints = NULL;

		if ( !pfnGetDemoRewindPoints )
			pfnGetDemoRewindPoints = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetDemoRewindPoints" );

		AWorldInfo_execGetDemoRewindPoints_Parms GetDemoRewindPoints_Parms;

		pfnGetDemoRewindPoints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDemoRewindPoints, &GetDemoRewindPoints_Parms, NULL );
		pfnGetDemoRewindPoints->FunctionFlags |= 0x400;

		if ( OutRewindPoints )
			*OutRewindPoints = GetDemoRewindPoints_Parms.OutRewindPoints; // CPF_OutParm

		return GetDemoRewindPoints_Parms.ReturnValue;
	};

	void GetDemoFrameInfo ( int* CurrentFrame, int* TotalFrames )
	{
		static UFunction* pfnGetDemoFrameInfo = NULL;

		if ( !pfnGetDemoFrameInfo )
			pfnGetDemoFrameInfo = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetDemoFrameInfo" );

		AWorldInfo_execGetDemoFrameInfo_Parms GetDemoFrameInfo_Parms;

		pfnGetDemoFrameInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDemoFrameInfo, &GetDemoFrameInfo_Parms, NULL );
		pfnGetDemoFrameInfo->FunctionFlags |= 0x400;

		if ( CurrentFrame )
			*CurrentFrame = GetDemoFrameInfo_Parms.CurrentFrame; // CPF_OutParm
		if ( TotalFrames )
			*TotalFrames = GetDemoFrameInfo_Parms.TotalFrames; // CPF_OutParm
	};

	bool IsPlayingDemo ()
	{
		static UFunction* pfnIsPlayingDemo = NULL;

		if ( !pfnIsPlayingDemo )
			pfnIsPlayingDemo = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsPlayingDemo" );

		AWorldInfo_execIsPlayingDemo_Parms IsPlayingDemo_Parms;

		pfnIsPlayingDemo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayingDemo, &IsPlayingDemo_Parms, NULL );
		pfnIsPlayingDemo->FunctionFlags |= 0x400;

		return IsPlayingDemo_Parms.ReturnValue;
	};

	bool IsRecordingDemo ()
	{
		static UFunction* pfnIsRecordingDemo = NULL;

		if ( !pfnIsRecordingDemo )
			pfnIsRecordingDemo = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsRecordingDemo" );

		AWorldInfo_execIsRecordingDemo_Parms IsRecordingDemo_Parms;

		pfnIsRecordingDemo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsRecordingDemo, &IsRecordingDemo_Parms, NULL );
		pfnIsRecordingDemo->FunctionFlags |= 0x400;

		return IsRecordingDemo_Parms.ReturnValue;
	};

	unsigned char GetDetailMode ()
	{
		static UFunction* pfnGetDetailMode = NULL;

		if ( !pfnGetDetailMode )
			pfnGetDetailMode = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetDetailMode" );

		AWorldInfo_execGetDetailMode_Parms GetDetailMode_Parms;

		pfnGetDetailMode->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetDetailMode, &GetDetailMode_Parms, NULL );
		pfnGetDetailMode->FunctionFlags |= 0x400;

		return GetDetailMode_Parms.ReturnValue;
	};

	struct FString GetMapName ( unsigned long bIncludePrefix/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetMapName = NULL;

		if ( !pfnGetMapName )
			pfnGetMapName = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetMapName" );

		AWorldInfo_execGetMapName_Parms GetMapName_Parms;
		GetMapName_Parms.bIncludePrefix = bIncludePrefix;

		pfnGetMapName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMapName, &GetMapName_Parms, NULL );
		pfnGetMapName->FunctionFlags |= 0x400;

		return GetMapName_Parms.ReturnValue;
	};

	void SetMapInfo ( void* NewMapInfo )
	{
		static UFunction* pfnSetMapInfo = NULL;

		if ( !pfnSetMapInfo )
			pfnSetMapInfo = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.SetMapInfo" );

		AWorldInfo_execSetMapInfo_Parms SetMapInfo_Parms;
		SetMapInfo_Parms.NewMapInfo = NewMapInfo;

		pfnSetMapInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetMapInfo, &SetMapInfo_Parms, NULL );
		pfnSetMapInfo->FunctionFlags |= 0x400;
	};

	void* GetMapInfo ()
	{
		static UFunction* pfnGetMapInfo = NULL;

		if ( !pfnGetMapInfo )
			pfnGetMapInfo = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetMapInfo" );

		AWorldInfo_execGetMapInfo_Parms GetMapInfo_Parms;

		pfnGetMapInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMapInfo, &GetMapInfo_Parms, NULL );
		pfnGetMapInfo->FunctionFlags |= 0x400;

		return GetMapInfo_Parms.ReturnValue;
	};

	void SetSeamlessTravelMidpointPause ( unsigned long bNowPaused )
	{
		static UFunction* pfnSetSeamlessTravelMidpointPause = NULL;

		if ( !pfnSetSeamlessTravelMidpointPause )
			pfnSetSeamlessTravelMidpointPause = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.SetSeamlessTravelMidpointPause" );

		AWorldInfo_execSetSeamlessTravelMidpointPause_Parms SetSeamlessTravelMidpointPause_Parms;
		SetSeamlessTravelMidpointPause_Parms.bNowPaused = bNowPaused;

		pfnSetSeamlessTravelMidpointPause->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetSeamlessTravelMidpointPause, &SetSeamlessTravelMidpointPause_Parms, NULL );
		pfnSetSeamlessTravelMidpointPause->FunctionFlags |= 0x400;
	};

	bool IsInSeamlessTravel ()
	{
		static UFunction* pfnIsInSeamlessTravel = NULL;

		if ( !pfnIsInSeamlessTravel )
			pfnIsInSeamlessTravel = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsInSeamlessTravel" );

		AWorldInfo_execIsInSeamlessTravel_Parms IsInSeamlessTravel_Parms;

		pfnIsInSeamlessTravel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsInSeamlessTravel, &IsInSeamlessTravel_Parms, NULL );
		pfnIsInSeamlessTravel->FunctionFlags |= 0x400;

		return IsInSeamlessTravel_Parms.ReturnValue;
	};

	void SeamlessTravel ( struct FString URL, unsigned long bAbsolute/*CPF_OptionalParm*/, struct FGuid MapPackageGuid/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSeamlessTravel = NULL;

		if ( !pfnSeamlessTravel )
			pfnSeamlessTravel = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.SeamlessTravel" );

		AWorldInfo_execSeamlessTravel_Parms SeamlessTravel_Parms;
		memcpy( &SeamlessTravel_Parms.URL, &URL, 0xC );
		SeamlessTravel_Parms.bAbsolute = bAbsolute;
		memcpy( &SeamlessTravel_Parms.MapPackageGuid, &MapPackageGuid, 0x10 );

		pfnSeamlessTravel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSeamlessTravel, &SeamlessTravel_Parms, NULL );
		pfnSeamlessTravel->FunctionFlags |= 0x400;
	};

	void CommitMapChange ()
	{
		static UFunction* pfnCommitMapChange = NULL;

		if ( !pfnCommitMapChange )
			pfnCommitMapChange = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.CommitMapChange" );

		AWorldInfo_execCommitMapChange_Parms CommitMapChange_Parms;

		pfnCommitMapChange->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCommitMapChange, &CommitMapChange_Parms, NULL );
		pfnCommitMapChange->FunctionFlags |= 0x400;
	};

	void CancelPendingMapChange ()
	{
		static UFunction* pfnCancelPendingMapChange = NULL;

		if ( !pfnCancelPendingMapChange )
			pfnCancelPendingMapChange = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.CancelPendingMapChange" );

		AWorldInfo_execCancelPendingMapChange_Parms CancelPendingMapChange_Parms;

		pfnCancelPendingMapChange->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCancelPendingMapChange, &CancelPendingMapChange_Parms, NULL );
		pfnCancelPendingMapChange->FunctionFlags |= 0x400;
	};

	bool IsMapChangeReady ()
	{
		static UFunction* pfnIsMapChangeReady = NULL;

		if ( !pfnIsMapChangeReady )
			pfnIsMapChangeReady = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsMapChangeReady" );

		AWorldInfo_execIsMapChangeReady_Parms IsMapChangeReady_Parms;

		pfnIsMapChangeReady->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsMapChangeReady, &IsMapChangeReady_Parms, NULL );
		pfnIsMapChangeReady->FunctionFlags |= 0x400;

		return IsMapChangeReady_Parms.ReturnValue;
	};

	bool IsPreparingMapChange ()
	{
		static UFunction* pfnIsPreparingMapChange = NULL;

		if ( !pfnIsPreparingMapChange )
			pfnIsPreparingMapChange = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsPreparingMapChange" );

		AWorldInfo_execIsPreparingMapChange_Parms IsPreparingMapChange_Parms;

		pfnIsPreparingMapChange->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPreparingMapChange, &IsPreparingMapChange_Parms, NULL );
		pfnIsPreparingMapChange->FunctionFlags |= 0x400;

		return IsPreparingMapChange_Parms.ReturnValue;
	};

	void PrepareMapChange ( TArray< struct FName >* LevelNames )
	{
		static UFunction* pfnPrepareMapChange = NULL;

		if ( !pfnPrepareMapChange )
			pfnPrepareMapChange = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.PrepareMapChange" );

		AWorldInfo_execPrepareMapChange_Parms PrepareMapChange_Parms;

		pfnPrepareMapChange->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPrepareMapChange, &PrepareMapChange_Parms, NULL );
		pfnPrepareMapChange->FunctionFlags |= 0x400;

		if ( LevelNames )
			memcpy( LevelNames, &PrepareMapChange_Parms.LevelNames, 0xC ); // CPF_OutParm
	};

	void NotifyMatchStarted ( unsigned long bShouldActivateLevelStartupEvents/*CPF_OptionalParm*/, unsigned long bShouldActivateLevelBeginningEvents/*CPF_OptionalParm*/, unsigned long bShouldActivateLevelLoadedEvents/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnNotifyMatchStarted = NULL;

		if ( !pfnNotifyMatchStarted )
			pfnNotifyMatchStarted = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.NotifyMatchStarted" );

		AWorldInfo_execNotifyMatchStarted_Parms NotifyMatchStarted_Parms;
		NotifyMatchStarted_Parms.bShouldActivateLevelStartupEvents = bShouldActivateLevelStartupEvents;
		NotifyMatchStarted_Parms.bShouldActivateLevelBeginningEvents = bShouldActivateLevelBeginningEvents;
		NotifyMatchStarted_Parms.bShouldActivateLevelLoadedEvents = bShouldActivateLevelLoadedEvents;

		pfnNotifyMatchStarted->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNotifyMatchStarted, &NotifyMatchStarted_Parms, NULL );
		pfnNotifyMatchStarted->FunctionFlags |= 0x400;
	};

	void AllPawns ( class UClass* BaseClass, struct FVector TestLocation/*CPF_OptionalParm*/, float TestRadius/*CPF_OptionalParm*/, class APawn** P )
	{
		static UFunction* pfnAllPawns = NULL;

		if ( !pfnAllPawns )
			pfnAllPawns = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.AllPawns" );

		AWorldInfo_execAllPawns_Parms AllPawns_Parms;
		AllPawns_Parms.BaseClass = BaseClass;
		memcpy( &AllPawns_Parms.TestLocation, &TestLocation, 0xC );
		AllPawns_Parms.TestRadius = TestRadius;

		pfnAllPawns->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllPawns, &AllPawns_Parms, NULL );
		pfnAllPawns->FunctionFlags |= 0x400;

		if ( P )
			*P = AllPawns_Parms.P; // CPF_OutParm
	};

	void AllControllers ( class UClass* BaseClass, class AController** C )
	{
		static UFunction* pfnAllControllers = NULL;

		if ( !pfnAllControllers )
			pfnAllControllers = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.AllControllers" );

		AWorldInfo_execAllControllers_Parms AllControllers_Parms;
		AllControllers_Parms.BaseClass = BaseClass;

		pfnAllControllers->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllControllers, &AllControllers_Parms, NULL );
		pfnAllControllers->FunctionFlags |= 0x400;

		if ( C )
			*C = AllControllers_Parms.C; // CPF_OutParm
	};

	void NavigationPointCheck ( struct FVector Point, struct FVector Extent, TArray< class ANavigationPoint* >* Navs, TArray< void* >* Specs )
	{
		static UFunction* pfnNavigationPointCheck = NULL;

		if ( !pfnNavigationPointCheck )
			pfnNavigationPointCheck = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.NavigationPointCheck" );

		AWorldInfo_execNavigationPointCheck_Parms NavigationPointCheck_Parms;
		memcpy( &NavigationPointCheck_Parms.Point, &Point, 0xC );
		memcpy( &NavigationPointCheck_Parms.Extent, &Extent, 0xC );

		pfnNavigationPointCheck->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnNavigationPointCheck, &NavigationPointCheck_Parms, NULL );
		pfnNavigationPointCheck->FunctionFlags |= 0x400;

		if ( Navs )
			*Navs = NavigationPointCheck_Parms.Navs; // CPF_OutParm
		if ( Specs )
			*Specs = NavigationPointCheck_Parms.Specs; // CPF_OutParm
	};

	void RadiusNavigationPoints ( class UClass* BaseClass, struct FVector Point, float Radius, class ANavigationPoint** N )
	{
		static UFunction* pfnRadiusNavigationPoints = NULL;

		if ( !pfnRadiusNavigationPoints )
			pfnRadiusNavigationPoints = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.RadiusNavigationPoints" );

		AWorldInfo_execRadiusNavigationPoints_Parms RadiusNavigationPoints_Parms;
		RadiusNavigationPoints_Parms.BaseClass = BaseClass;
		memcpy( &RadiusNavigationPoints_Parms.Point, &Point, 0xC );
		RadiusNavigationPoints_Parms.Radius = Radius;

		pfnRadiusNavigationPoints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRadiusNavigationPoints, &RadiusNavigationPoints_Parms, NULL );
		pfnRadiusNavigationPoints->FunctionFlags |= 0x400;

		if ( N )
			*N = RadiusNavigationPoints_Parms.N; // CPF_OutParm
	};

	void AllNavigationPoints ( class UClass* BaseClass, class ANavigationPoint** N )
	{
		static UFunction* pfnAllNavigationPoints = NULL;

		if ( !pfnAllNavigationPoints )
			pfnAllNavigationPoints = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.AllNavigationPoints" );

		AWorldInfo_execAllNavigationPoints_Parms AllNavigationPoints_Parms;
		AllNavigationPoints_Parms.BaseClass = BaseClass;

		pfnAllNavigationPoints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllNavigationPoints, &AllNavigationPoints_Parms, NULL );
		pfnAllNavigationPoints->FunctionFlags |= 0x400;

		if ( N )
			*N = AllNavigationPoints_Parms.N; // CPF_OutParm
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.Reset" );

		AWorldInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.PostBeginPlay" );

		AWorldInfo_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void PreBeginPlay ()
	{
		static UFunction* pfnPreBeginPlay = NULL;

		if ( !pfnPreBeginPlay )
			pfnPreBeginPlay = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.PreBeginPlay" );

		AWorldInfo_execPreBeginPlay_Parms PreBeginPlay_Parms;

		this->ProcessEvent( pfnPreBeginPlay, &PreBeginPlay_Parms, NULL );
	};

	void ThisIsNeverExecuted ( void* P )
	{
		static UFunction* pfnThisIsNeverExecuted = NULL;

		if ( !pfnThisIsNeverExecuted )
			pfnThisIsNeverExecuted = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.ThisIsNeverExecuted" );

		AWorldInfo_execThisIsNeverExecuted_Parms ThisIsNeverExecuted_Parms;
		ThisIsNeverExecuted_Parms.P = P;

		this->ProcessEvent( pfnThisIsNeverExecuted, &ThisIsNeverExecuted_Parms, NULL );
	};

	void eventServerTravel ( struct FString URL, unsigned long bAbsolute/*CPF_OptionalParm*/, unsigned long bShouldSkipGameNotify/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerTravel = NULL;

		if ( !pfnServerTravel )
			pfnServerTravel = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.ServerTravel" );

		AWorldInfo_eventServerTravel_Parms ServerTravel_Parms;
		memcpy( &ServerTravel_Parms.URL, &URL, 0xC );
		ServerTravel_Parms.bAbsolute = bAbsolute;
		ServerTravel_Parms.bShouldSkipGameNotify = bShouldSkipGameNotify;

		this->ProcessEvent( pfnServerTravel, &ServerTravel_Parms, NULL );
	};

	class UClass* GetGameClass ()
	{
		static UFunction* pfnGetGameClass = NULL;

		if ( !pfnGetGameClass )
			pfnGetGameClass = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetGameClass" );

		AWorldInfo_execGetGameClass_Parms GetGameClass_Parms;

		this->ProcessEvent( pfnGetGameClass, &GetGameClass_Parms, NULL );

		return GetGameClass_Parms.ReturnValue;
	};

	struct FString GetAddressURL ()
	{
		static UFunction* pfnGetAddressURL = NULL;

		if ( !pfnGetAddressURL )
			pfnGetAddressURL = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetAddressURL" );

		AWorldInfo_execGetAddressURL_Parms GetAddressURL_Parms;

		pfnGetAddressURL->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAddressURL, &GetAddressURL_Parms, NULL );
		pfnGetAddressURL->FunctionFlags |= 0x400;

		return GetAddressURL_Parms.ReturnValue;
	};

	void VerifyNavList ()
	{
		static UFunction* pfnVerifyNavList = NULL;

		if ( !pfnVerifyNavList )
			pfnVerifyNavList = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.VerifyNavList" );

		AWorldInfo_execVerifyNavList_Parms VerifyNavList_Parms;

		pfnVerifyNavList->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnVerifyNavList, &VerifyNavList_Parms, NULL );
		pfnVerifyNavList->FunctionFlags |= 0x400;
	};

	void ForceGarbageCollection ( unsigned long bFullPurge/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnForceGarbageCollection = NULL;

		if ( !pfnForceGarbageCollection )
			pfnForceGarbageCollection = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.ForceGarbageCollection" );

		AWorldInfo_execForceGarbageCollection_Parms ForceGarbageCollection_Parms;
		ForceGarbageCollection_Parms.bFullPurge = bFullPurge;

		pfnForceGarbageCollection->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceGarbageCollection, &ForceGarbageCollection_Parms, NULL );
		pfnForceGarbageCollection->FunctionFlags |= 0x400;
	};

	bool IsPlayInEditor ()
	{
		static UFunction* pfnIsPlayInEditor = NULL;

		if ( !pfnIsPlayInEditor )
			pfnIsPlayInEditor = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsPlayInEditor" );

		AWorldInfo_execIsPlayInEditor_Parms IsPlayInEditor_Parms;

		pfnIsPlayInEditor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayInEditor, &IsPlayInEditor_Parms, NULL );
		pfnIsPlayInEditor->FunctionFlags |= 0x400;

		return IsPlayInEditor_Parms.ReturnValue;
	};

	bool IsConsoleBuild ( unsigned char ConsoleType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsConsoleBuild = NULL;

		if ( !pfnIsConsoleBuild )
			pfnIsConsoleBuild = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsConsoleBuild" );

		AWorldInfo_execIsConsoleBuild_Parms IsConsoleBuild_Parms;
		IsConsoleBuild_Parms.ConsoleType = ConsoleType;

		pfnIsConsoleBuild->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsConsoleBuild, &IsConsoleBuild_Parms, NULL );
		pfnIsConsoleBuild->FunctionFlags |= 0x400;

		return IsConsoleBuild_Parms.ReturnValue;
	};

	bool IsDemoBuild ()
	{
		static UFunction* pfnIsDemoBuild = NULL;

		if ( !pfnIsDemoBuild )
			pfnIsDemoBuild = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsDemoBuild" );

		AWorldInfo_execIsDemoBuild_Parms IsDemoBuild_Parms;

		pfnIsDemoBuild->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsDemoBuild, &IsDemoBuild_Parms, NULL );
		pfnIsDemoBuild->FunctionFlags |= 0x400;

		return IsDemoBuild_Parms.ReturnValue;
	};

	struct FString GetLocalURL ()
	{
		static UFunction* pfnGetLocalURL = NULL;

		if ( !pfnGetLocalURL )
			pfnGetLocalURL = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetLocalURL" );

		AWorldInfo_execGetLocalURL_Parms GetLocalURL_Parms;

		pfnGetLocalURL->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetLocalURL, &GetLocalURL_Parms, NULL );
		pfnGetLocalURL->FunctionFlags |= 0x400;

		return GetLocalURL_Parms.ReturnValue;
	};

	void SetLevelRBGravity ( struct FVector NewGrav )
	{
		static UFunction* pfnSetLevelRBGravity = NULL;

		if ( !pfnSetLevelRBGravity )
			pfnSetLevelRBGravity = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.SetLevelRBGravity" );

		AWorldInfo_execSetLevelRBGravity_Parms SetLevelRBGravity_Parms;
		memcpy( &SetLevelRBGravity_Parms.NewGrav, &NewGrav, 0xC );

		pfnSetLevelRBGravity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetLevelRBGravity, &SetLevelRBGravity_Parms, NULL );
		pfnSetLevelRBGravity->FunctionFlags |= 0x400;
	};

	void* GetGameSequence ()
	{
		static UFunction* pfnGetGameSequence = NULL;

		if ( !pfnGetGameSequence )
			pfnGetGameSequence = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetGameSequence" );

		AWorldInfo_execGetGameSequence_Parms GetGameSequence_Parms;

		pfnGetGameSequence->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetGameSequence, &GetGameSequence_Parms, NULL );
		pfnGetGameSequence->FunctionFlags |= 0x400;

		return GetGameSequence_Parms.ReturnValue;
	};

	float GetGravityZ ()
	{
		static UFunction* pfnGetGravityZ = NULL;

		if ( !pfnGetGravityZ )
			pfnGetGravityZ = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.GetGravityZ" );

		AWorldInfo_execGetGravityZ_Parms GetGravityZ_Parms;

		pfnGetGravityZ->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetGravityZ, &GetGravityZ_Parms, NULL );
		pfnGetGravityZ->FunctionFlags |= 0x400;

		return GetGravityZ_Parms.ReturnValue;
	};

	bool IsServer ()
	{
		static UFunction* pfnIsServer = NULL;

		if ( !pfnIsServer )
			pfnIsServer = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsServer" );

		AWorldInfo_execIsServer_Parms IsServer_Parms;

		this->ProcessEvent( pfnIsServer, &IsServer_Parms, NULL );

		return IsServer_Parms.ReturnValue;
	};

	void UpdateMusicTrack ( struct FMusicTrackStruct NewMusicTrack )
	{
		static UFunction* pfnUpdateMusicTrack = NULL;

		if ( !pfnUpdateMusicTrack )
			pfnUpdateMusicTrack = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.UpdateMusicTrack" );

		AWorldInfo_execUpdateMusicTrack_Parms UpdateMusicTrack_Parms;
		memcpy( &UpdateMusicTrack_Parms.NewMusicTrack, &NewMusicTrack, 0x18 );

		pfnUpdateMusicTrack->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateMusicTrack, &UpdateMusicTrack_Parms, NULL );
		pfnUpdateMusicTrack->FunctionFlags |= 0x400;
	};

	bool IsMenuLevel ( struct FString MapName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsMenuLevel = NULL;

		if ( !pfnIsMenuLevel )
			pfnIsMenuLevel = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.IsMenuLevel" );

		AWorldInfo_execIsMenuLevel_Parms IsMenuLevel_Parms;
		memcpy( &IsMenuLevel_Parms.MapName, &MapName, 0xC );

		pfnIsMenuLevel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsMenuLevel, &IsMenuLevel_Parms, NULL );
		pfnIsMenuLevel->FunctionFlags |= 0x400;

		return IsMenuLevel_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.WorldInfo.ReplicatedEvent" );

		AWorldInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* AWorldInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif