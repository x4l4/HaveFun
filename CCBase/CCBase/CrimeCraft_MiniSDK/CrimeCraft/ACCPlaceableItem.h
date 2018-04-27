/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPlaceableItem.h
// Date: 06/16/2011 @ 05:19:41.644
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPlaceableItem_execOnUnblockPlayer_Parms
{
};

struct ACCPlaceableItem_eventEncroachingOn_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ACCPlaceableItem_execServerDoMissExplosion_Parms
{
};

struct ACCPlaceableItem_execOnPawnRestarted_Parms
{
	class ACCInstancePawn* iPawn;
};

struct ACCPlaceableItem_execHitWall_PreProcessed_Parms
{
	struct FVector HitNormal;
	class AActor* Wall;
	class UPrimitiveComponent* WallComp;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPlaceableItem_eventTakeDamage_Parms
{
	int DamageAmount;
	class AController* EventInstigator;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCPlaceableItem_execGetOwnerController_Parms
{
	class ACCInstanceController* ReturnValue; // CPF_ReturnParm
};

struct ACCPlaceableItem_eventScriptGetTeamNum_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ACCPlaceableItem_execIsEnemyByPawn_Parms
{
	class ACCInstancePawn* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPlaceableItem_execIsOnSameTeam_Parms
{
	class ACCInstanceController* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPlaceableItem_execIsEnemyByController_Parms
{
	class ACCInstanceController* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCPlaceableItem_execDestroyed_Parms
{
};

struct ACCPlaceableItem_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCPlaceableItem_execSetAbility_Parms
{
	void* Ability;
};

struct ACCPlaceableItem_execTriggerAnimation_Parms
{
};// FUNC_Final

struct ACCPlaceableItem_execInitMainMesh_Parms
{
};// FUNC_Final

struct ACCPlaceableItem_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x358 - 0x3B8)
class ACCPlaceableItem : public ACCProjectile
{
public:
	class UMeshComponent*                              MainMesh;                                    // 0x0358 (0x0004)
	struct FVector                                     PawnExtentMultiplier;                        // 0x035C (0x000C)
	struct FVector                                     ItemExtentMultiplier;                        // 0x0368 (0x000C)
	struct FName                                       MainMesh_AnimNodeName;                       // 0x0374 (0x0008)
	class UMeshComponent*                              AdditionalMesh;                              // 0x037C (0x0004)
	float                                              AdditionalMeshScale;                         // 0x0380 (0x0004)
	class UMeshComponent*                              PlacingAnimationComponent;                   // 0x0384 (0x0004)
	unsigned long                                      UseMainMeshAsPlacingAnimationComponent : 1;  // 0x0388 (0x0004) [0x00000001]
	unsigned long                                      bUseMainMesh : 1;                            // 0x0388 (0x0004) [0x00000002]
	unsigned long                                      bDestroyAfterMatchStarting : 1;              // 0x0388 (0x0004) [0x00000004]
	void*                                              CanPlaceHereMaterial;                        // 0x038C (0x0004)
	void*                                              CanNotPlaceHereMaterial;                     // 0x0390 (0x0004)
	void*                                              ActivationArea;                              // 0x0394 (0x0004)
	class ACCInstanceController*                       COwner;                                      // 0x0398 (0x0004)
	unsigned char                                      COwnerTeamIndex;                             // 0x039C (0x0001)
	void*                                              LightEnvironment;                            // 0x03A0 (0x0004)
	void*                                              AbilityOwner;                                // 0x03A4 (0x0004)
	int                                                Health;                                      // 0x03A8 (0x0004)
	int                                                HealthMax;                                   // 0x03AC (0x0004)
	float                                              MarkerMinHeight;                             // 0x03B0 (0x0004)
	void*                                              DefaultNoiseSound;                           // 0x03B4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPlaceableItem" );

		return ClassPointer;
	};

public:
	void OnUnblockPlayer ()
	{
		static UFunction* pfnOnUnblockPlayer = NULL;

		if ( !pfnOnUnblockPlayer )
			pfnOnUnblockPlayer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.OnUnblockPlayer" );

		ACCPlaceableItem_execOnUnblockPlayer_Parms OnUnblockPlayer_Parms;

		this->ProcessEvent( pfnOnUnblockPlayer, &OnUnblockPlayer_Parms, NULL );
	};

	bool eventEncroachingOn ( class AActor* Other )
	{
		static UFunction* pfnEncroachingOn = NULL;

		if ( !pfnEncroachingOn )
			pfnEncroachingOn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.EncroachingOn" );

		ACCPlaceableItem_eventEncroachingOn_Parms EncroachingOn_Parms;
		EncroachingOn_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachingOn, &EncroachingOn_Parms, NULL );

		return EncroachingOn_Parms.ReturnValue;
	};

	void ServerDoMissExplosion ()
	{
		static UFunction* pfnServerDoMissExplosion = NULL;

		if ( !pfnServerDoMissExplosion )
			pfnServerDoMissExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.ServerDoMissExplosion" );

		ACCPlaceableItem_execServerDoMissExplosion_Parms ServerDoMissExplosion_Parms;

		this->ProcessEvent( pfnServerDoMissExplosion, &ServerDoMissExplosion_Parms, NULL );
	};

	void OnPawnRestarted ( class ACCInstancePawn* iPawn )
	{
		static UFunction* pfnOnPawnRestarted = NULL;

		if ( !pfnOnPawnRestarted )
			pfnOnPawnRestarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.OnPawnRestarted" );

		ACCPlaceableItem_execOnPawnRestarted_Parms OnPawnRestarted_Parms;
		OnPawnRestarted_Parms.iPawn = iPawn;

		this->ProcessEvent( pfnOnPawnRestarted, &OnPawnRestarted_Parms, NULL );
	};

	bool HitWall_PreProcessed ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
	{
		static UFunction* pfnHitWall_PreProcessed = NULL;

		if ( !pfnHitWall_PreProcessed )
			pfnHitWall_PreProcessed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.HitWall_PreProcessed" );

		ACCPlaceableItem_execHitWall_PreProcessed_Parms HitWall_PreProcessed_Parms;
		memcpy( &HitWall_PreProcessed_Parms.HitNormal, &HitNormal, 0xC );
		HitWall_PreProcessed_Parms.Wall = Wall;
		HitWall_PreProcessed_Parms.WallComp = WallComp;

		this->ProcessEvent( pfnHitWall_PreProcessed, &HitWall_PreProcessed_Parms, NULL );

		return HitWall_PreProcessed_Parms.ReturnValue;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.TakeDamage" );

		ACCPlaceableItem_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.DamageAmount = DamageAmount;
		TakeDamage_Parms.EventInstigator = EventInstigator;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	class ACCInstanceController* GetOwnerController ()
	{
		static UFunction* pfnGetOwnerController = NULL;

		if ( !pfnGetOwnerController )
			pfnGetOwnerController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.GetOwnerController" );

		ACCPlaceableItem_execGetOwnerController_Parms GetOwnerController_Parms;

		this->ProcessEvent( pfnGetOwnerController, &GetOwnerController_Parms, NULL );

		return GetOwnerController_Parms.ReturnValue;
	};

	unsigned char eventScriptGetTeamNum ()
	{
		static UFunction* pfnScriptGetTeamNum = NULL;

		if ( !pfnScriptGetTeamNum )
			pfnScriptGetTeamNum = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.ScriptGetTeamNum" );

		ACCPlaceableItem_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

		this->ProcessEvent( pfnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );

		return ScriptGetTeamNum_Parms.ReturnValue;
	};

	bool IsEnemyByPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnIsEnemyByPawn = NULL;

		if ( !pfnIsEnemyByPawn )
			pfnIsEnemyByPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.IsEnemyByPawn" );

		ACCPlaceableItem_execIsEnemyByPawn_Parms IsEnemyByPawn_Parms;
		IsEnemyByPawn_Parms.Other = Other;

		this->ProcessEvent( pfnIsEnemyByPawn, &IsEnemyByPawn_Parms, NULL );

		return IsEnemyByPawn_Parms.ReturnValue;
	};

	bool IsOnSameTeam ( class ACCInstanceController* Other )
	{
		static UFunction* pfnIsOnSameTeam = NULL;

		if ( !pfnIsOnSameTeam )
			pfnIsOnSameTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.IsOnSameTeam" );

		ACCPlaceableItem_execIsOnSameTeam_Parms IsOnSameTeam_Parms;
		IsOnSameTeam_Parms.Other = Other;

		this->ProcessEvent( pfnIsOnSameTeam, &IsOnSameTeam_Parms, NULL );

		return IsOnSameTeam_Parms.ReturnValue;
	};

	bool IsEnemyByController ( class ACCInstanceController* Other )
	{
		static UFunction* pfnIsEnemyByController = NULL;

		if ( !pfnIsEnemyByController )
			pfnIsEnemyByController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.IsEnemyByController" );

		ACCPlaceableItem_execIsEnemyByController_Parms IsEnemyByController_Parms;
		IsEnemyByController_Parms.Other = Other;

		this->ProcessEvent( pfnIsEnemyByController, &IsEnemyByController_Parms, NULL );

		return IsEnemyByController_Parms.ReturnValue;
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.Destroyed" );

		ACCPlaceableItem_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.ExplodeInternal" );

		ACCPlaceableItem_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

	void SetAbility ( void* Ability )
	{
		static UFunction* pfnSetAbility = NULL;

		if ( !pfnSetAbility )
			pfnSetAbility = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.SetAbility" );

		ACCPlaceableItem_execSetAbility_Parms SetAbility_Parms;
		SetAbility_Parms.Ability = Ability;

		this->ProcessEvent( pfnSetAbility, &SetAbility_Parms, NULL );
	};

	void TriggerAnimation ()
	{
		static UFunction* pfnTriggerAnimation = NULL;

		if ( !pfnTriggerAnimation )
			pfnTriggerAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.TriggerAnimation" );

		ACCPlaceableItem_execTriggerAnimation_Parms TriggerAnimation_Parms;

		this->ProcessEvent( pfnTriggerAnimation, &TriggerAnimation_Parms, NULL );
	};

	void InitMainMesh ()
	{
		static UFunction* pfnInitMainMesh = NULL;

		if ( !pfnInitMainMesh )
			pfnInitMainMesh = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.InitMainMesh" );

		ACCPlaceableItem_execInitMainMesh_Parms InitMainMesh_Parms;

		this->ProcessEvent( pfnInitMainMesh, &InitMainMesh_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPlaceableItem.PostBeginPlay" );

		ACCPlaceableItem_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCPlaceableItem::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif