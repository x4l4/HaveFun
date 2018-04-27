/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPlayerReplicationInfo.h
// Date: 06/16/2011 @ 05:19:40.973
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MAX_BOTVISUAL_ANIMSETS               8
#define Const_LAST_SCORE_NUM_ENTRIES               3
#define Const_EPlayerFeatType_EPF_LastEntry        20

enum EPlayerStatType
{
	EPS_Kills = 0,
	EPS_Assists = 1,
	EPS_Deaths = 2,
	EPS_GranadeKills = 3,
	EPS_DoubleKills = 4,
	EPS_TripleKills = 5,
	EPS_MultiKills = 6,
	EPS_Headshots = 7,
	EPS_Penetrations = 8,
	EPS_MeleeKills = 9,
	EPS_LastBulletKills = 10,
	EPS_CTP_Captured = 11,
	EPS_CTP_DefendKill = 12,
	EPS_CTP_CaptureKill = 13,
	EPS_ROB_Robbered = 14,
	EPS_ROB_Deposited = 15,
	EPS_FFAKill2x = 16,
	EPS_FFAKill3x = 17,
	EPS_FFAKill4x = 18,
	EPS_FFAKill5x = 19,
	EPS_MAX = 20
};

struct ACCPlayerReplicationInfo_eventTimer_Parms
{
};// FUNC_Event

struct ACCPlayerReplicationInfo_execMatchStarting_Parms
{
};

struct ACCPlayerReplicationInfo_eventDestroyed_Parms
{
};// FUNC_Event

struct ACCPlayerReplicationInfo_execOnPawnDead_Parms
{
};

struct ACCPlayerReplicationInfo_execGetCarriedObject_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_execSetCarriedObject_Parms
{
	void* NewCarriedObject;
};

struct ACCPlayerReplicationInfo_execResetFFAKill_Parms
{
};

struct ACCPlayerReplicationInfo_execLogFFAKill_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_execSendMultiKillToStats_Parms
{
};

struct ACCPlayerReplicationInfo_execResetMultiKill_Parms
{
};

struct ACCPlayerReplicationInfo_execLogMultiKill_Parms
{
	float MultiKillDeltaTime;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCPlayerReplicationInfo_execRadarInfoReplicated_Parms
{
};

struct ACCPlayerReplicationInfo_eventGetHUDColor_Parms
{
	struct FColor ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPlayerReplicationInfo_eventGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCPlayerReplicationInfo_execOverrideWith_Parms
{
	class APlayerReplicationInfo* PRI;
};

struct ACCPlayerReplicationInfo_execReset_Parms
{
};

struct ACCPlayerReplicationInfo_execUpdatePlayerLocation_Parms
{
};

struct ACCPlayerReplicationInfo_execSetHUDLocation_Parms
{
	struct FVector NewHUDLocation;
};

struct ACCPlayerReplicationInfo_execPostBeginPlay_Parms
{
};

struct ACCPlayerReplicationInfo_execSetCharacterData_Parms
{
	struct FCharacterVisualDescription NewData;
};

struct ACCPlayerReplicationInfo_execGetCharacterData_Parms
{
	struct FCharacterVisualDescription Data; // CPF_OutParm
};

struct ACCPlayerReplicationInfo_execGetPlayerStat_Parms
{
	unsigned char PST;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_execAddPlayerStat_Parms
{
	unsigned char PST;
	int iScore;
};

struct ACCPlayerReplicationInfo_execGetFeatName_Parms
{
	unsigned char PFT;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_execGetFeat_Parms
{
	unsigned char PFT;
	int ReturnValue; // CPF_ReturnParm
};

struct ACCPlayerReplicationInfo_execProcessFeats_Parms
{
};

struct ACCPlayerReplicationInfo_execSetFeat_Parms
{
	unsigned char PFT;
	int Value;
};

struct ACCPlayerReplicationInfo_execAddFeat_Parms
{
	unsigned char PFT;
	int Amount;
};

struct ACCPlayerReplicationInfo_execInitFeats_Parms
{
};

struct ACCPlayerReplicationInfo_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x260 - 0x4A0)
class ACCPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface;              // 0x0260 (0x0004)
	int                                                CurrFeats[ 20 ];                             // 0x0264 (0x0050)
	int                                                Feats[ 20 ];                                 // 0x02B4 (0x0050)
	int                                                Assists;                                     // 0x0304 (0x0004)
	int                                                GranadeKills;                                // 0x0308 (0x0004)
	int                                                DoubleKills;                                 // 0x030C (0x0004)
	int                                                TripleKills;                                 // 0x0310 (0x0004)
	int                                                MultiKills;                                  // 0x0314 (0x0004)
	int                                                Headshots;                                   // 0x0318 (0x0004)
	int                                                Penetrations;                                // 0x031C (0x0004)
	int                                                MeleeKills;                                  // 0x0320 (0x0004)
	int                                                LastBulletKills;                             // 0x0324 (0x0004)
	int                                                Suicides;                                    // 0x0328 (0x0004)
	int                                                spree;                                       // 0x032C (0x0004)
	int                                                MultiKillLevel;                              // 0x0330 (0x0004)
	int                                                FFAKillLevel;                                // 0x0334 (0x0004)
	float                                              LastKillTime;                                // 0x0338 (0x0004)
	int                                                FlakCount;                                   // 0x033C (0x0004)
	int                                                ComboCount;                                  // 0x0340 (0x0004)
	int                                                HeadCount;                                   // 0x0344 (0x0004)
	int                                                RanOverCount;                                // 0x0348 (0x0004)
	int                                                NetworkID;                                   // 0x034C (0x0004)
	int                                                TeamIndex;                                   // 0x0350 (0x0004)
	int                                                GroupId;                                     // 0x0354 (0x0004)
	int                                                PvPScore;                                    // 0x0358 (0x0004)
	int                                                PvPTitleId;                                  // 0x035C (0x0004)
	float                                              HandicapFactor;                              // 0x0360 (0x0004)
	class ACCPlayerReplicationInfo*                    LastKillerPRI;                               // 0x0364 (0x0004)
	struct FColor                                      DefaultHudColor;                             // 0x0368 (0x0004)
	unsigned long                                      RipFlagSpawned : 1;                          // 0x036C (0x0004) [0x00000001]
	unsigned long                                      bHUDRendered : 1;                            // 0x036C (0x0004) [0x00000002]
	unsigned long                                      bSmoke : 1;                                  // 0x036C (0x0004) [0x00000004]
	unsigned long                                      bFire : 1;                                   // 0x036C (0x0004) [0x00000008]
	unsigned long                                      i_bShowBossIndicator : 1;                    // 0x036C (0x0004) [0x00000010]
	unsigned long                                      i_bShowBossMarker : 1;                       // 0x036C (0x0004) [0x00000020]
	unsigned long                                      i_bShowCourierMarker : 1;                    // 0x036C (0x0004) [0x00000040]
	unsigned long                                      bCanOtherTeamSeeMeRadar : 1;                 // 0x036C (0x0004) [0x00000080]
	unsigned long                                      bCanRadarSpawnerSeeMe : 1;                   // 0x036C (0x0004) [0x00000100]
	unsigned long                                      bIsStealth : 1;                              // 0x036C (0x0004) [0x00000200]
	unsigned long                                      bAFK : 1;                                    // 0x036C (0x0004) [0x00000400]
	unsigned long                                      bCanISeeAllEnemysRadar : 1;                  // 0x036C (0x0004) [0x00000800]
	class AActor*                                      CurrentEnemy;                                // 0x0370 (0x0004)
	int                                                NumQuestItems[ 4 ];                          // 0x0374 (0x0010)
	int                                                SessionScore;                                // 0x0384 (0x0004)
	float                                              SessionTimeLeft;                             // 0x0388 (0x0004)
	int                                                LastScoreGain[ 3 ];                          // 0x038C (0x000C)
	unsigned char                                      LastScoreType[ 3 ];                          // 0x0398 (0x0003)
	unsigned char                                      ulm_Type;                                    // 0x039B (0x0001)
	float                                              LastScoreTime[ 3 ];                          // 0x039C (0x000C)
	class UClass*                                      PlayerClass;                                 // 0x03A8 (0x0004)
	class UClass*                                      HUDPawnClass;                                // 0x03AC (0x0004)
	struct FVector                                     HUDLocation;                                 // 0x03B0 (0x000C)
	struct FVector                                     HUDPawnLocation;                             // 0x03BC (0x000C)
	void*                                              HUDMaterialInstance;                         // 0x03C8 (0x0004)
	class AActor*                                      SecondaryPlayerLocationHint;                 // 0x03CC (0x0004)
	class ATeamInfo*                                   OldTeam;                                     // 0x03D0 (0x0004)
	struct FLinearColor                                SkinColor;                                   // 0x03D4 (0x0010)
	int                                                RespawnTime;                                 // 0x03E4 (0x0004)
	struct FCharacterVisualDescription                 CustomCharData;                              // 0x03E8 (0x0048)
	int                                                CharacterDataChangeCount;                    // 0x0430 (0x0004)
	void*                                              HasCarriedObject;                            // 0x0434 (0x0004)
	struct FRadarRepInfo                               RadarReplication;                            // 0x0438 (0x0010)
	int                                                PlayerInState;                               // 0x0448 (0x0004)
	struct FString                                     ulm_Msg;                                     // 0x044C (0x000C)
	class AController*                                 i_BossIndicatorWho;                          // 0x0458 (0x0004)
	class AController*                                 i_BossMarkerWho;                             // 0x045C (0x0004)
	class APawn*                                       i_BossMarkerWhoPawn;                         // 0x0460 (0x0004)
	struct FVector                                     i_BossMarkerWhoPos;                          // 0x0464 (0x000C)
	class AController*                                 i_CourierMarkerWho;                          // 0x0470 (0x0004)
	class APawn*                                       i_CourierMarkerWhoPawn;                      // 0x0474 (0x0004)
	struct FVector                                     i_CourierMarkerWhoPos;                       // 0x0478 (0x000C)
	int                                                BotView;                                     // 0x0484 (0x0004)
	float                                              LastBotViewUpdateTime;                       // 0x0488 (0x0004)
	int                                                RPG_Class;                                   // 0x048C (0x0004)
	int                                                TeamPlace;                                   // 0x0490 (0x0004)
	int                                                OldTeamPlace;                                // 0x0494 (0x0004)
	int                                                RPG_LEVEL;                                   // 0x0498 (0x0004)
	float                                              AFKTime;                                     // 0x049C (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPlayerReplicationInfo" );

		return ClassPointer;
	};

public:
	void eventTimer ()
	{
		static UFunction* pfnTimer = NULL;

		if ( !pfnTimer )
			pfnTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.Timer" );

		ACCPlayerReplicationInfo_eventTimer_Parms Timer_Parms;

		this->ProcessEvent( pfnTimer, &Timer_Parms, NULL );
	};

	void MatchStarting ()
	{
		static UFunction* pfnMatchStarting = NULL;

		if ( !pfnMatchStarting )
			pfnMatchStarting = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.MatchStarting" );

		ACCPlayerReplicationInfo_execMatchStarting_Parms MatchStarting_Parms;

		this->ProcessEvent( pfnMatchStarting, &MatchStarting_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.Destroyed" );

		ACCPlayerReplicationInfo_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void OnPawnDead ()
	{
		static UFunction* pfnOnPawnDead = NULL;

		if ( !pfnOnPawnDead )
			pfnOnPawnDead = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.OnPawnDead" );

		ACCPlayerReplicationInfo_execOnPawnDead_Parms OnPawnDead_Parms;

		this->ProcessEvent( pfnOnPawnDead, &OnPawnDead_Parms, NULL );
	};

	void* GetCarriedObject ()
	{
		static UFunction* pfnGetCarriedObject = NULL;

		if ( !pfnGetCarriedObject )
			pfnGetCarriedObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetCarriedObject" );

		ACCPlayerReplicationInfo_execGetCarriedObject_Parms GetCarriedObject_Parms;

		this->ProcessEvent( pfnGetCarriedObject, &GetCarriedObject_Parms, NULL );

		return GetCarriedObject_Parms.ReturnValue;
	};

	void SetCarriedObject ( void* NewCarriedObject )
	{
		static UFunction* pfnSetCarriedObject = NULL;

		if ( !pfnSetCarriedObject )
			pfnSetCarriedObject = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.SetCarriedObject" );

		ACCPlayerReplicationInfo_execSetCarriedObject_Parms SetCarriedObject_Parms;
		SetCarriedObject_Parms.NewCarriedObject = NewCarriedObject;

		this->ProcessEvent( pfnSetCarriedObject, &SetCarriedObject_Parms, NULL );
	};

	void ResetFFAKill ()
	{
		static UFunction* pfnResetFFAKill = NULL;

		if ( !pfnResetFFAKill )
			pfnResetFFAKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.ResetFFAKill" );

		ACCPlayerReplicationInfo_execResetFFAKill_Parms ResetFFAKill_Parms;

		this->ProcessEvent( pfnResetFFAKill, &ResetFFAKill_Parms, NULL );
	};

	int LogFFAKill ()
	{
		static UFunction* pfnLogFFAKill = NULL;

		if ( !pfnLogFFAKill )
			pfnLogFFAKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.LogFFAKill" );

		ACCPlayerReplicationInfo_execLogFFAKill_Parms LogFFAKill_Parms;

		this->ProcessEvent( pfnLogFFAKill, &LogFFAKill_Parms, NULL );

		return LogFFAKill_Parms.ReturnValue;
	};

	void SendMultiKillToStats ()
	{
		static UFunction* pfnSendMultiKillToStats = NULL;

		if ( !pfnSendMultiKillToStats )
			pfnSendMultiKillToStats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.SendMultiKillToStats" );

		ACCPlayerReplicationInfo_execSendMultiKillToStats_Parms SendMultiKillToStats_Parms;

		this->ProcessEvent( pfnSendMultiKillToStats, &SendMultiKillToStats_Parms, NULL );
	};

	void ResetMultiKill ()
	{
		static UFunction* pfnResetMultiKill = NULL;

		if ( !pfnResetMultiKill )
			pfnResetMultiKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.ResetMultiKill" );

		ACCPlayerReplicationInfo_execResetMultiKill_Parms ResetMultiKill_Parms;

		this->ProcessEvent( pfnResetMultiKill, &ResetMultiKill_Parms, NULL );
	};

	int LogMultiKill ( float MultiKillDeltaTime )
	{
		static UFunction* pfnLogMultiKill = NULL;

		if ( !pfnLogMultiKill )
			pfnLogMultiKill = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.LogMultiKill" );

		ACCPlayerReplicationInfo_execLogMultiKill_Parms LogMultiKill_Parms;
		LogMultiKill_Parms.MultiKillDeltaTime = MultiKillDeltaTime;

		this->ProcessEvent( pfnLogMultiKill, &LogMultiKill_Parms, NULL );

		return LogMultiKill_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.ReplicatedEvent" );

		ACCPlayerReplicationInfo_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void RadarInfoReplicated ()
	{
		static UFunction* pfnRadarInfoReplicated = NULL;

		if ( !pfnRadarInfoReplicated )
			pfnRadarInfoReplicated = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.RadarInfoReplicated" );

		ACCPlayerReplicationInfo_execRadarInfoReplicated_Parms RadarInfoReplicated_Parms;

		this->ProcessEvent( pfnRadarInfoReplicated, &RadarInfoReplicated_Parms, NULL );
	};

	struct FColor eventGetHUDColor ()
	{
		static UFunction* pfnGetHUDColor = NULL;

		if ( !pfnGetHUDColor )
			pfnGetHUDColor = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetHUDColor" );

		ACCPlayerReplicationInfo_eventGetHUDColor_Parms GetHUDColor_Parms;

		this->ProcessEvent( pfnGetHUDColor, &GetHUDColor_Parms, NULL );

		return GetHUDColor_Parms.ReturnValue;
	};

	unsigned char eventGetTeamNum ()
	{
		static UFunction* pfnGetTeamNum = NULL;

		if ( !pfnGetTeamNum )
			pfnGetTeamNum = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetTeamNum" );

		ACCPlayerReplicationInfo_eventGetTeamNum_Parms GetTeamNum_Parms;

		this->ProcessEvent( pfnGetTeamNum, &GetTeamNum_Parms, NULL );

		return GetTeamNum_Parms.ReturnValue;
	};

	void CopyProperties ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnCopyProperties = NULL;

		if ( !pfnCopyProperties )
			pfnCopyProperties = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.CopyProperties" );

		ACCPlayerReplicationInfo_execCopyProperties_Parms CopyProperties_Parms;
		CopyProperties_Parms.PRI = PRI;

		this->ProcessEvent( pfnCopyProperties, &CopyProperties_Parms, NULL );
	};

	void OverrideWith ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnOverrideWith = NULL;

		if ( !pfnOverrideWith )
			pfnOverrideWith = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.OverrideWith" );

		ACCPlayerReplicationInfo_execOverrideWith_Parms OverrideWith_Parms;
		OverrideWith_Parms.PRI = PRI;

		this->ProcessEvent( pfnOverrideWith, &OverrideWith_Parms, NULL );
	};

	void Reset ()
	{
		static UFunction* pfnReset = NULL;

		if ( !pfnReset )
			pfnReset = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.Reset" );

		ACCPlayerReplicationInfo_execReset_Parms Reset_Parms;

		this->ProcessEvent( pfnReset, &Reset_Parms, NULL );
	};

	void UpdatePlayerLocation ()
	{
		static UFunction* pfnUpdatePlayerLocation = NULL;

		if ( !pfnUpdatePlayerLocation )
			pfnUpdatePlayerLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.UpdatePlayerLocation" );

		ACCPlayerReplicationInfo_execUpdatePlayerLocation_Parms UpdatePlayerLocation_Parms;

		this->ProcessEvent( pfnUpdatePlayerLocation, &UpdatePlayerLocation_Parms, NULL );
	};

	void SetHUDLocation ( struct FVector NewHUDLocation )
	{
		static UFunction* pfnSetHUDLocation = NULL;

		if ( !pfnSetHUDLocation )
			pfnSetHUDLocation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.SetHUDLocation" );

		ACCPlayerReplicationInfo_execSetHUDLocation_Parms SetHUDLocation_Parms;
		memcpy( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

		this->ProcessEvent( pfnSetHUDLocation, &SetHUDLocation_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.PostBeginPlay" );

		ACCPlayerReplicationInfo_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void SetCharacterData ( struct FCharacterVisualDescription NewData )
	{
		static UFunction* pfnSetCharacterData = NULL;

		if ( !pfnSetCharacterData )
			pfnSetCharacterData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.SetCharacterData" );

		ACCPlayerReplicationInfo_execSetCharacterData_Parms SetCharacterData_Parms;
		memcpy( &SetCharacterData_Parms.NewData, &NewData, 0x48 );

		this->ProcessEvent( pfnSetCharacterData, &SetCharacterData_Parms, NULL );
	};

	void GetCharacterData ( struct FCharacterVisualDescription* Data )
	{
		static UFunction* pfnGetCharacterData = NULL;

		if ( !pfnGetCharacterData )
			pfnGetCharacterData = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetCharacterData" );

		ACCPlayerReplicationInfo_execGetCharacterData_Parms GetCharacterData_Parms;

		this->ProcessEvent( pfnGetCharacterData, &GetCharacterData_Parms, NULL );

		if ( Data )
			memcpy( Data, &GetCharacterData_Parms.Data, 0x48 ); // CPF_OutParm
	};

	int GetPlayerStat ( unsigned char PST )
	{
		static UFunction* pfnGetPlayerStat = NULL;

		if ( !pfnGetPlayerStat )
			pfnGetPlayerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetPlayerStat" );

		ACCPlayerReplicationInfo_execGetPlayerStat_Parms GetPlayerStat_Parms;
		GetPlayerStat_Parms.PST = PST;

		this->ProcessEvent( pfnGetPlayerStat, &GetPlayerStat_Parms, NULL );

		return GetPlayerStat_Parms.ReturnValue;
	};

	void AddPlayerStat ( unsigned char PST, int iScore/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddPlayerStat = NULL;

		if ( !pfnAddPlayerStat )
			pfnAddPlayerStat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.AddPlayerStat" );

		ACCPlayerReplicationInfo_execAddPlayerStat_Parms AddPlayerStat_Parms;
		AddPlayerStat_Parms.PST = PST;
		AddPlayerStat_Parms.iScore = iScore;

		this->ProcessEvent( pfnAddPlayerStat, &AddPlayerStat_Parms, NULL );
	};

	struct FString GetFeatName ( unsigned char PFT )
	{
		static UFunction* pfnGetFeatName = NULL;

		if ( !pfnGetFeatName )
			pfnGetFeatName = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetFeatName" );

		ACCPlayerReplicationInfo_execGetFeatName_Parms GetFeatName_Parms;
		GetFeatName_Parms.PFT = PFT;

		this->ProcessEvent( pfnGetFeatName, &GetFeatName_Parms, NULL );

		return GetFeatName_Parms.ReturnValue;
	};

	int GetFeat ( unsigned char PFT )
	{
		static UFunction* pfnGetFeat = NULL;

		if ( !pfnGetFeat )
			pfnGetFeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.GetFeat" );

		ACCPlayerReplicationInfo_execGetFeat_Parms GetFeat_Parms;
		GetFeat_Parms.PFT = PFT;

		this->ProcessEvent( pfnGetFeat, &GetFeat_Parms, NULL );

		return GetFeat_Parms.ReturnValue;
	};

	void ProcessFeats ()
	{
		static UFunction* pfnProcessFeats = NULL;

		if ( !pfnProcessFeats )
			pfnProcessFeats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.ProcessFeats" );

		ACCPlayerReplicationInfo_execProcessFeats_Parms ProcessFeats_Parms;

		this->ProcessEvent( pfnProcessFeats, &ProcessFeats_Parms, NULL );
	};

	void SetFeat ( unsigned char PFT, int Value )
	{
		static UFunction* pfnSetFeat = NULL;

		if ( !pfnSetFeat )
			pfnSetFeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.SetFeat" );

		ACCPlayerReplicationInfo_execSetFeat_Parms SetFeat_Parms;
		SetFeat_Parms.PFT = PFT;
		SetFeat_Parms.Value = Value;

		this->ProcessEvent( pfnSetFeat, &SetFeat_Parms, NULL );
	};

	void AddFeat ( unsigned char PFT, int Amount/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddFeat = NULL;

		if ( !pfnAddFeat )
			pfnAddFeat = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.AddFeat" );

		ACCPlayerReplicationInfo_execAddFeat_Parms AddFeat_Parms;
		AddFeat_Parms.PFT = PFT;
		AddFeat_Parms.Amount = Amount;

		this->ProcessEvent( pfnAddFeat, &AddFeat_Parms, NULL );
	};

	void InitFeats ()
	{
		static UFunction* pfnInitFeats = NULL;

		if ( !pfnInitFeats )
			pfnInitFeats = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.InitFeats" );

		ACCPlayerReplicationInfo_execInitFeats_Parms InitFeats_Parms;

		this->ProcessEvent( pfnInitFeats, &InitFeats_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlayerReplicationInfo.UpdateRadarPresentation" );

		ACCPlayerReplicationInfo_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCPlayerReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif