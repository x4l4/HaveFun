/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UCheatManager.h
// Date: 06/16/2011 @ 05:19:39.251
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UCheatManager_execSetOnlineDebugLevel_Parms
{
	int DebugLevel;
};// FUNC_Exec

struct UCheatManager_execTestLevel_Parms
{
};// FUNC_Exec

struct UCheatManager_execToggleDebugCamera_Parms
{
};// FUNC_Exec

struct UCheatManager_execStreamLevelOut_Parms
{
	struct FName PackageName;
};// FUNC_Exec

struct UCheatManager_execOnlyLoadLevel_Parms
{
	struct FName PackageName;
};// FUNC_Exec

struct UCheatManager_execStreamLevelIn_Parms
{
	struct FName PackageName;
};// FUNC_Exec

struct UCheatManager_execSetLevelStreamingStatus_Parms
{
	struct FName PackageName;
	unsigned long bShouldBeLoaded : 1;
	unsigned long bShouldBeVisible : 1;
};

struct UCheatManager_execAllWeapons_Parms
{
};// FUNC_Exec

struct UCheatManager_execLoaded_Parms
{
};// FUNC_Exec

struct UCheatManager_execViewClass_Parms
{
	class UClass* aClass;
};// FUNC_Exec

struct UCheatManager_execViewBot_Parms
{
};// FUNC_Exec

struct UCheatManager_execViewFlag_Parms
{
};// FUNC_Exec

struct UCheatManager_execViewActor_Parms
{
	struct FName actorName;
};// FUNC_Exec

struct UCheatManager_execViewPlayer_Parms
{
	struct FString S;
};// FUNC_Exec

struct UCheatManager_execViewSelf_Parms
{
	unsigned long bQuiet : 1;
};// FUNC_Exec

struct UCheatManager_execRememberSpot_Parms
{
};// FUNC_Exec

struct UCheatManager_execFractureAllMeshesToMaximizeMemoryUsage_Parms
{
};// FUNC_Exec

struct UCheatManager_execFractureAllMeshes_Parms
{
};// FUNC_Exec

struct UCheatManager_execDestroyFractures_Parms
{
	float Radius;
};// FUNC_Exec

struct UCheatManager_execPlayersOnly_Parms
{
};// FUNC_Exec

struct UCheatManager_execGiveWeapon_Parms
{
	struct FString WeaponClassStr;
	class AWeapon* ReturnValue; // CPF_ReturnParm
};// FUNC_Exec

struct UCheatManager_execSummon_Parms
{
	struct FString ClassName;
};// FUNC_Exec

struct UCheatManager_execAvatar_Parms
{
	struct FName ClassName;
};// FUNC_Exec

struct UCheatManager_execKillPawns_Parms
{
};// FUNC_Exec

struct UCheatManager_execKillAllPawns_Parms
{
	class UClass* aClass;
};

struct UCheatManager_execKillAll_Parms
{
	class UClass* aClass;
};// FUNC_Exec

struct UCheatManager_execSetSpeed_Parms
{
	float F;
};// FUNC_Exec

struct UCheatManager_execSetGravity_Parms
{
	float F;
};// FUNC_Exec

struct UCheatManager_execSetJumpZ_Parms
{
	float F;
};// FUNC_Exec

struct UCheatManager_execSloMo_Parms
{
	float T;
};// FUNC_Exec

struct UCheatManager_execAffectedByHitEffects_Parms
{
};// FUNC_Exec

struct UCheatManager_execGod_Parms
{
};// FUNC_Exec

struct UCheatManager_execAllAmmo_Parms
{
};// FUNC_Exec

struct UCheatManager_execGhost_Parms
{
};// FUNC_Exec

struct UCheatManager_execWalk_Parms
{
};// FUNC_Exec

struct UCheatManager_execFly_Parms
{
};// FUNC_Exec

struct UCheatManager_execAmphibious_Parms
{
};// FUNC_Exec

struct UCheatManager_execEndPath_Parms
{
};// FUNC_Exec

struct UCheatManager_execChangeSize_Parms
{
	float F;
};// FUNC_Exec

struct UCheatManager_execTeleport_Parms
{
};// FUNC_Exec

struct UCheatManager_execKillViewedActor_Parms
{
};// FUNC_Exec

struct UCheatManager_execWriteToLog_Parms
{
	struct FString Param;
};// FUNC_Exec

struct UCheatManager_execFreezeFrame_Parms
{
	float delay;
};// FUNC_Exec

struct UCheatManager_execListDynamicActors_Parms
{
};// FUNC_Exec

// (0x3C - 0x3C)
class UCheatManager : public UObject
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.CheatManager" );

		return ClassPointer;
	};

public:
	void SetOnlineDebugLevel ( int DebugLevel )
	{
		static UFunction* pfnSetOnlineDebugLevel = NULL;

		if ( !pfnSetOnlineDebugLevel )
			pfnSetOnlineDebugLevel = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SetOnlineDebugLevel" );

		UCheatManager_execSetOnlineDebugLevel_Parms SetOnlineDebugLevel_Parms;
		SetOnlineDebugLevel_Parms.DebugLevel = DebugLevel;

		this->ProcessEvent( pfnSetOnlineDebugLevel, &SetOnlineDebugLevel_Parms, NULL );
	};

	void TestLevel ()
	{
		static UFunction* pfnTestLevel = NULL;

		if ( !pfnTestLevel )
			pfnTestLevel = UObject::FindObject< UFunction >( "Function Engine.CheatManager.TestLevel" );

		UCheatManager_execTestLevel_Parms TestLevel_Parms;

		this->ProcessEvent( pfnTestLevel, &TestLevel_Parms, NULL );
	};

	void ToggleDebugCamera ()
	{
		static UFunction* pfnToggleDebugCamera = NULL;

		if ( !pfnToggleDebugCamera )
			pfnToggleDebugCamera = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ToggleDebugCamera" );

		UCheatManager_execToggleDebugCamera_Parms ToggleDebugCamera_Parms;

		this->ProcessEvent( pfnToggleDebugCamera, &ToggleDebugCamera_Parms, NULL );
	};

	void StreamLevelOut ( struct FName PackageName )
	{
		static UFunction* pfnStreamLevelOut = NULL;

		if ( !pfnStreamLevelOut )
			pfnStreamLevelOut = UObject::FindObject< UFunction >( "Function Engine.CheatManager.StreamLevelOut" );

		UCheatManager_execStreamLevelOut_Parms StreamLevelOut_Parms;
		memcpy( &StreamLevelOut_Parms.PackageName, &PackageName, 0x8 );

		this->ProcessEvent( pfnStreamLevelOut, &StreamLevelOut_Parms, NULL );
	};

	void OnlyLoadLevel ( struct FName PackageName )
	{
		static UFunction* pfnOnlyLoadLevel = NULL;

		if ( !pfnOnlyLoadLevel )
			pfnOnlyLoadLevel = UObject::FindObject< UFunction >( "Function Engine.CheatManager.OnlyLoadLevel" );

		UCheatManager_execOnlyLoadLevel_Parms OnlyLoadLevel_Parms;
		memcpy( &OnlyLoadLevel_Parms.PackageName, &PackageName, 0x8 );

		this->ProcessEvent( pfnOnlyLoadLevel, &OnlyLoadLevel_Parms, NULL );
	};

	void StreamLevelIn ( struct FName PackageName )
	{
		static UFunction* pfnStreamLevelIn = NULL;

		if ( !pfnStreamLevelIn )
			pfnStreamLevelIn = UObject::FindObject< UFunction >( "Function Engine.CheatManager.StreamLevelIn" );

		UCheatManager_execStreamLevelIn_Parms StreamLevelIn_Parms;
		memcpy( &StreamLevelIn_Parms.PackageName, &PackageName, 0x8 );

		this->ProcessEvent( pfnStreamLevelIn, &StreamLevelIn_Parms, NULL );
	};

	void SetLevelStreamingStatus ( struct FName PackageName, unsigned long bShouldBeLoaded, unsigned long bShouldBeVisible )
	{
		static UFunction* pfnSetLevelStreamingStatus = NULL;

		if ( !pfnSetLevelStreamingStatus )
			pfnSetLevelStreamingStatus = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SetLevelStreamingStatus" );

		UCheatManager_execSetLevelStreamingStatus_Parms SetLevelStreamingStatus_Parms;
		memcpy( &SetLevelStreamingStatus_Parms.PackageName, &PackageName, 0x8 );
		SetLevelStreamingStatus_Parms.bShouldBeLoaded = bShouldBeLoaded;
		SetLevelStreamingStatus_Parms.bShouldBeVisible = bShouldBeVisible;

		this->ProcessEvent( pfnSetLevelStreamingStatus, &SetLevelStreamingStatus_Parms, NULL );
	};

	void AllWeapons ()
	{
		static UFunction* pfnAllWeapons = NULL;

		if ( !pfnAllWeapons )
			pfnAllWeapons = UObject::FindObject< UFunction >( "Function Engine.CheatManager.AllWeapons" );

		UCheatManager_execAllWeapons_Parms AllWeapons_Parms;

		this->ProcessEvent( pfnAllWeapons, &AllWeapons_Parms, NULL );
	};

	void Loaded ()
	{
		static UFunction* pfnLoaded = NULL;

		if ( !pfnLoaded )
			pfnLoaded = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Loaded" );

		UCheatManager_execLoaded_Parms Loaded_Parms;

		this->ProcessEvent( pfnLoaded, &Loaded_Parms, NULL );
	};

	void ViewClass ( class UClass* aClass )
	{
		static UFunction* pfnViewClass = NULL;

		if ( !pfnViewClass )
			pfnViewClass = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewClass" );

		UCheatManager_execViewClass_Parms ViewClass_Parms;
		ViewClass_Parms.aClass = aClass;

		this->ProcessEvent( pfnViewClass, &ViewClass_Parms, NULL );
	};

	void ViewBot ()
	{
		static UFunction* pfnViewBot = NULL;

		if ( !pfnViewBot )
			pfnViewBot = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewBot" );

		UCheatManager_execViewBot_Parms ViewBot_Parms;

		this->ProcessEvent( pfnViewBot, &ViewBot_Parms, NULL );
	};

	void ViewFlag ()
	{
		static UFunction* pfnViewFlag = NULL;

		if ( !pfnViewFlag )
			pfnViewFlag = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewFlag" );

		UCheatManager_execViewFlag_Parms ViewFlag_Parms;

		this->ProcessEvent( pfnViewFlag, &ViewFlag_Parms, NULL );
	};

	void ViewActor ( struct FName actorName )
	{
		static UFunction* pfnViewActor = NULL;

		if ( !pfnViewActor )
			pfnViewActor = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewActor" );

		UCheatManager_execViewActor_Parms ViewActor_Parms;
		memcpy( &ViewActor_Parms.actorName, &actorName, 0x8 );

		this->ProcessEvent( pfnViewActor, &ViewActor_Parms, NULL );
	};

	void ViewPlayer ( struct FString S )
	{
		static UFunction* pfnViewPlayer = NULL;

		if ( !pfnViewPlayer )
			pfnViewPlayer = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewPlayer" );

		UCheatManager_execViewPlayer_Parms ViewPlayer_Parms;
		memcpy( &ViewPlayer_Parms.S, &S, 0xC );

		this->ProcessEvent( pfnViewPlayer, &ViewPlayer_Parms, NULL );
	};

	void ViewSelf ( unsigned long bQuiet/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnViewSelf = NULL;

		if ( !pfnViewSelf )
			pfnViewSelf = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ViewSelf" );

		UCheatManager_execViewSelf_Parms ViewSelf_Parms;
		ViewSelf_Parms.bQuiet = bQuiet;

		this->ProcessEvent( pfnViewSelf, &ViewSelf_Parms, NULL );
	};

	void RememberSpot ()
	{
		static UFunction* pfnRememberSpot = NULL;

		if ( !pfnRememberSpot )
			pfnRememberSpot = UObject::FindObject< UFunction >( "Function Engine.CheatManager.RememberSpot" );

		UCheatManager_execRememberSpot_Parms RememberSpot_Parms;

		this->ProcessEvent( pfnRememberSpot, &RememberSpot_Parms, NULL );
	};

	void FractureAllMeshesToMaximizeMemoryUsage ()
	{
		static UFunction* pfnFractureAllMeshesToMaximizeMemoryUsage = NULL;

		if ( !pfnFractureAllMeshesToMaximizeMemoryUsage )
			pfnFractureAllMeshesToMaximizeMemoryUsage = UObject::FindObject< UFunction >( "Function Engine.CheatManager.FractureAllMeshesToMaximizeMemoryUsage" );

		UCheatManager_execFractureAllMeshesToMaximizeMemoryUsage_Parms FractureAllMeshesToMaximizeMemoryUsage_Parms;

		this->ProcessEvent( pfnFractureAllMeshesToMaximizeMemoryUsage, &FractureAllMeshesToMaximizeMemoryUsage_Parms, NULL );
	};

	void FractureAllMeshes ()
	{
		static UFunction* pfnFractureAllMeshes = NULL;

		if ( !pfnFractureAllMeshes )
			pfnFractureAllMeshes = UObject::FindObject< UFunction >( "Function Engine.CheatManager.FractureAllMeshes" );

		UCheatManager_execFractureAllMeshes_Parms FractureAllMeshes_Parms;

		this->ProcessEvent( pfnFractureAllMeshes, &FractureAllMeshes_Parms, NULL );
	};

	void DestroyFractures ( float Radius/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnDestroyFractures = NULL;

		if ( !pfnDestroyFractures )
			pfnDestroyFractures = UObject::FindObject< UFunction >( "Function Engine.CheatManager.DestroyFractures" );

		UCheatManager_execDestroyFractures_Parms DestroyFractures_Parms;
		DestroyFractures_Parms.Radius = Radius;

		this->ProcessEvent( pfnDestroyFractures, &DestroyFractures_Parms, NULL );
	};

	void PlayersOnly ()
	{
		static UFunction* pfnPlayersOnly = NULL;

		if ( !pfnPlayersOnly )
			pfnPlayersOnly = UObject::FindObject< UFunction >( "Function Engine.CheatManager.PlayersOnly" );

		UCheatManager_execPlayersOnly_Parms PlayersOnly_Parms;

		this->ProcessEvent( pfnPlayersOnly, &PlayersOnly_Parms, NULL );
	};

	class AWeapon* GiveWeapon ( struct FString WeaponClassStr )
	{
		static UFunction* pfnGiveWeapon = NULL;

		if ( !pfnGiveWeapon )
			pfnGiveWeapon = UObject::FindObject< UFunction >( "Function Engine.CheatManager.GiveWeapon" );

		UCheatManager_execGiveWeapon_Parms GiveWeapon_Parms;
		memcpy( &GiveWeapon_Parms.WeaponClassStr, &WeaponClassStr, 0xC );

		this->ProcessEvent( pfnGiveWeapon, &GiveWeapon_Parms, NULL );

		return GiveWeapon_Parms.ReturnValue;
	};

	void Summon ( struct FString ClassName )
	{
		static UFunction* pfnSummon = NULL;

		if ( !pfnSummon )
			pfnSummon = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Summon" );

		UCheatManager_execSummon_Parms Summon_Parms;
		memcpy( &Summon_Parms.ClassName, &ClassName, 0xC );

		this->ProcessEvent( pfnSummon, &Summon_Parms, NULL );
	};

	void Avatar ( struct FName ClassName )
	{
		static UFunction* pfnAvatar = NULL;

		if ( !pfnAvatar )
			pfnAvatar = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Avatar" );

		UCheatManager_execAvatar_Parms Avatar_Parms;
		memcpy( &Avatar_Parms.ClassName, &ClassName, 0x8 );

		this->ProcessEvent( pfnAvatar, &Avatar_Parms, NULL );
	};

	void KillPawns ()
	{
		static UFunction* pfnKillPawns = NULL;

		if ( !pfnKillPawns )
			pfnKillPawns = UObject::FindObject< UFunction >( "Function Engine.CheatManager.KillPawns" );

		UCheatManager_execKillPawns_Parms KillPawns_Parms;

		this->ProcessEvent( pfnKillPawns, &KillPawns_Parms, NULL );
	};

	void KillAllPawns ( class UClass* aClass )
	{
		static UFunction* pfnKillAllPawns = NULL;

		if ( !pfnKillAllPawns )
			pfnKillAllPawns = UObject::FindObject< UFunction >( "Function Engine.CheatManager.KillAllPawns" );

		UCheatManager_execKillAllPawns_Parms KillAllPawns_Parms;
		KillAllPawns_Parms.aClass = aClass;

		this->ProcessEvent( pfnKillAllPawns, &KillAllPawns_Parms, NULL );
	};

	void KillAll ( class UClass* aClass )
	{
		static UFunction* pfnKillAll = NULL;

		if ( !pfnKillAll )
			pfnKillAll = UObject::FindObject< UFunction >( "Function Engine.CheatManager.KillAll" );

		UCheatManager_execKillAll_Parms KillAll_Parms;
		KillAll_Parms.aClass = aClass;

		this->ProcessEvent( pfnKillAll, &KillAll_Parms, NULL );
	};

	void SetSpeed ( float F )
	{
		static UFunction* pfnSetSpeed = NULL;

		if ( !pfnSetSpeed )
			pfnSetSpeed = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SetSpeed" );

		UCheatManager_execSetSpeed_Parms SetSpeed_Parms;
		SetSpeed_Parms.F = F;

		this->ProcessEvent( pfnSetSpeed, &SetSpeed_Parms, NULL );
	};

	void SetGravity ( float F )
	{
		static UFunction* pfnSetGravity = NULL;

		if ( !pfnSetGravity )
			pfnSetGravity = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SetGravity" );

		UCheatManager_execSetGravity_Parms SetGravity_Parms;
		SetGravity_Parms.F = F;

		this->ProcessEvent( pfnSetGravity, &SetGravity_Parms, NULL );
	};

	void SetJumpZ ( float F )
	{
		static UFunction* pfnSetJumpZ = NULL;

		if ( !pfnSetJumpZ )
			pfnSetJumpZ = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SetJumpZ" );

		UCheatManager_execSetJumpZ_Parms SetJumpZ_Parms;
		SetJumpZ_Parms.F = F;

		this->ProcessEvent( pfnSetJumpZ, &SetJumpZ_Parms, NULL );
	};

	void SloMo ( float T )
	{
		static UFunction* pfnSloMo = NULL;

		if ( !pfnSloMo )
			pfnSloMo = UObject::FindObject< UFunction >( "Function Engine.CheatManager.SloMo" );

		UCheatManager_execSloMo_Parms SloMo_Parms;
		SloMo_Parms.T = T;

		this->ProcessEvent( pfnSloMo, &SloMo_Parms, NULL );
	};

	void AffectedByHitEffects ()
	{
		static UFunction* pfnAffectedByHitEffects = NULL;

		if ( !pfnAffectedByHitEffects )
			pfnAffectedByHitEffects = UObject::FindObject< UFunction >( "Function Engine.CheatManager.AffectedByHitEffects" );

		UCheatManager_execAffectedByHitEffects_Parms AffectedByHitEffects_Parms;

		this->ProcessEvent( pfnAffectedByHitEffects, &AffectedByHitEffects_Parms, NULL );
	};

	void God ()
	{
		static UFunction* pfnGod = NULL;

		if ( !pfnGod )
			pfnGod = UObject::FindObject< UFunction >( "Function Engine.CheatManager.God" );

		UCheatManager_execGod_Parms God_Parms;

		this->ProcessEvent( pfnGod, &God_Parms, NULL );
	};

	void AllAmmo ()
	{
		static UFunction* pfnAllAmmo = NULL;

		if ( !pfnAllAmmo )
			pfnAllAmmo = UObject::FindObject< UFunction >( "Function Engine.CheatManager.AllAmmo" );

		UCheatManager_execAllAmmo_Parms AllAmmo_Parms;

		this->ProcessEvent( pfnAllAmmo, &AllAmmo_Parms, NULL );
	};

	void Ghost ()
	{
		static UFunction* pfnGhost = NULL;

		if ( !pfnGhost )
			pfnGhost = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Ghost" );

		UCheatManager_execGhost_Parms Ghost_Parms;

		this->ProcessEvent( pfnGhost, &Ghost_Parms, NULL );
	};

	void Walk ()
	{
		static UFunction* pfnWalk = NULL;

		if ( !pfnWalk )
			pfnWalk = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Walk" );

		UCheatManager_execWalk_Parms Walk_Parms;

		this->ProcessEvent( pfnWalk, &Walk_Parms, NULL );
	};

	void Fly ()
	{
		static UFunction* pfnFly = NULL;

		if ( !pfnFly )
			pfnFly = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Fly" );

		UCheatManager_execFly_Parms Fly_Parms;

		this->ProcessEvent( pfnFly, &Fly_Parms, NULL );
	};

	void Amphibious ()
	{
		static UFunction* pfnAmphibious = NULL;

		if ( !pfnAmphibious )
			pfnAmphibious = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Amphibious" );

		UCheatManager_execAmphibious_Parms Amphibious_Parms;

		this->ProcessEvent( pfnAmphibious, &Amphibious_Parms, NULL );
	};

	void EndPath ()
	{
		static UFunction* pfnEndPath = NULL;

		if ( !pfnEndPath )
			pfnEndPath = UObject::FindObject< UFunction >( "Function Engine.CheatManager.EndPath" );

		UCheatManager_execEndPath_Parms EndPath_Parms;

		this->ProcessEvent( pfnEndPath, &EndPath_Parms, NULL );
	};

	void ChangeSize ( float F )
	{
		static UFunction* pfnChangeSize = NULL;

		if ( !pfnChangeSize )
			pfnChangeSize = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ChangeSize" );

		UCheatManager_execChangeSize_Parms ChangeSize_Parms;
		ChangeSize_Parms.F = F;

		this->ProcessEvent( pfnChangeSize, &ChangeSize_Parms, NULL );
	};

	void Teleport ()
	{
		static UFunction* pfnTeleport = NULL;

		if ( !pfnTeleport )
			pfnTeleport = UObject::FindObject< UFunction >( "Function Engine.CheatManager.Teleport" );

		UCheatManager_execTeleport_Parms Teleport_Parms;

		this->ProcessEvent( pfnTeleport, &Teleport_Parms, NULL );
	};

	void KillViewedActor ()
	{
		static UFunction* pfnKillViewedActor = NULL;

		if ( !pfnKillViewedActor )
			pfnKillViewedActor = UObject::FindObject< UFunction >( "Function Engine.CheatManager.KillViewedActor" );

		UCheatManager_execKillViewedActor_Parms KillViewedActor_Parms;

		this->ProcessEvent( pfnKillViewedActor, &KillViewedActor_Parms, NULL );
	};

	void WriteToLog ( struct FString Param )
	{
		static UFunction* pfnWriteToLog = NULL;

		if ( !pfnWriteToLog )
			pfnWriteToLog = UObject::FindObject< UFunction >( "Function Engine.CheatManager.WriteToLog" );

		UCheatManager_execWriteToLog_Parms WriteToLog_Parms;
		memcpy( &WriteToLog_Parms.Param, &Param, 0xC );

		this->ProcessEvent( pfnWriteToLog, &WriteToLog_Parms, NULL );
	};

	void FreezeFrame ( float delay )
	{
		static UFunction* pfnFreezeFrame = NULL;

		if ( !pfnFreezeFrame )
			pfnFreezeFrame = UObject::FindObject< UFunction >( "Function Engine.CheatManager.FreezeFrame" );

		UCheatManager_execFreezeFrame_Parms FreezeFrame_Parms;
		FreezeFrame_Parms.delay = delay;

		this->ProcessEvent( pfnFreezeFrame, &FreezeFrame_Parms, NULL );
	};

	void ListDynamicActors ()
	{
		static UFunction* pfnListDynamicActors = NULL;

		if ( !pfnListDynamicActors )
			pfnListDynamicActors = UObject::FindObject< UFunction >( "Function Engine.CheatManager.ListDynamicActors" );

		UCheatManager_execListDynamicActors_Parms ListDynamicActors_Parms;

		this->ProcessEvent( pfnListDynamicActors, &ListDynamicActors_Parms, NULL );
	};

};

UClass* UCheatManager::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif