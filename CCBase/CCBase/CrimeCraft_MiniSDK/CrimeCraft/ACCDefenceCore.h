/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCDefenceCore.h
// Date: 06/16/2011 @ 05:19:41.490
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCDefenceCore_execOnCurLodChanged_Parms
{
};

struct ACCDefenceCore_execIsDestroyed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCDefenceCore_execPlayEffects_Parms
{
};

struct ACCDefenceCore_eventTakeDamage_Parms
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

struct ACCDefenceCore_execSetSkelMesh_Parms
{
};

struct ACCDefenceCore_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCDefenceCore_execIsUnderAttack_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCDefenceCore_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCDefenceCore_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x2E8)
class ACCDefenceCore : public ACCGameObjective
{
public:
	struct FPointer                                    VfTable_IRadarPresentInterface_Placable;     // 0x02B8 (0x0004)
	float                                              Health;                                      // 0x02BC (0x0004)
	int                                                Team;                                        // 0x02C0 (0x0004)
	TArray< class USkeletalMesh* >                     LevOfDestr;                                  // 0x02C4 (0x000C)
	void*                                              HitParticleSystemTemplate;                   // 0x02D0 (0x0004)
	class USkeletalMesh*                               CurSkelMesh;                                 // 0x02D4 (0x0004)
	class USkeletalMeshComponent*                      SkelMeshComp;                                // 0x02D8 (0x0004)
	float                                              CurHealth;                                   // 0x02DC (0x0004)
	int                                                CurLod;                                      // 0x02E0 (0x0004)
	unsigned long                                      bCurrentlyUnderAttack : 1;                   // 0x02E4 (0x0004) [0x00000001]
	unsigned long                                      bInvulnerable : 1;                           // 0x02E4 (0x0004) [0x00000002]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCDefenceCore" );

		return ClassPointer;
	};

public:
	void OnCurLodChanged ()
	{
		static UFunction* pfnOnCurLodChanged = NULL;

		if ( !pfnOnCurLodChanged )
			pfnOnCurLodChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.OnCurLodChanged" );

		ACCDefenceCore_execOnCurLodChanged_Parms OnCurLodChanged_Parms;

		this->ProcessEvent( pfnOnCurLodChanged, &OnCurLodChanged_Parms, NULL );
	};

	bool IsDestroyed ()
	{
		static UFunction* pfnIsDestroyed = NULL;

		if ( !pfnIsDestroyed )
			pfnIsDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.IsDestroyed" );

		ACCDefenceCore_execIsDestroyed_Parms IsDestroyed_Parms;

		this->ProcessEvent( pfnIsDestroyed, &IsDestroyed_Parms, NULL );

		return IsDestroyed_Parms.ReturnValue;
	};

	void PlayEffects ()
	{
		static UFunction* pfnPlayEffects = NULL;

		if ( !pfnPlayEffects )
			pfnPlayEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.PlayEffects" );

		ACCDefenceCore_execPlayEffects_Parms PlayEffects_Parms;

		this->ProcessEvent( pfnPlayEffects, &PlayEffects_Parms, NULL );
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.TakeDamage" );

		ACCDefenceCore_eventTakeDamage_Parms TakeDamage_Parms;
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

	void SetSkelMesh ()
	{
		static UFunction* pfnSetSkelMesh = NULL;

		if ( !pfnSetSkelMesh )
			pfnSetSkelMesh = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.SetSkelMesh" );

		ACCDefenceCore_execSetSkelMesh_Parms SetSkelMesh_Parms;

		this->ProcessEvent( pfnSetSkelMesh, &SetSkelMesh_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.PostBeginPlay" );

		ACCDefenceCore_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool IsUnderAttack ()
	{
		static UFunction* pfnIsUnderAttack = NULL;

		if ( !pfnIsUnderAttack )
			pfnIsUnderAttack = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.IsUnderAttack" );

		ACCDefenceCore_execIsUnderAttack_Parms IsUnderAttack_Parms;

		this->ProcessEvent( pfnIsUnderAttack, &IsUnderAttack_Parms, NULL );

		return IsUnderAttack_Parms.ReturnValue;
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.ReplicatedEvent" );

		ACCDefenceCore_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore.UpdateRadarPresentation" );

		ACCDefenceCore_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCDefenceCore::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif