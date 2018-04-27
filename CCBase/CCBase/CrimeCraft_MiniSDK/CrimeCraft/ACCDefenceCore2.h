/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCDefenceCore2.h
// Date: 06/16/2011 @ 05:19:41.912
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCDefenceCore2_execIsDestroyed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCDefenceCore2_execOnCurLodChanged_Parms
{
};

struct ACCDefenceCore2_execSetMaterialVectorParameterValue_Parms
{
	float Val;
};

struct ACCDefenceCore2_execPlayEffects_Parms
{
};

struct ACCDefenceCore2_execPlayAnim_Parms
{
};

struct ACCDefenceCore2_eventTakeDamage_Parms
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

struct ACCDefenceCore2_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCDefenceCore2_execInitExplosionSoundComponent_Parms
{
};

struct ACCDefenceCore2_execSetSkelMesh_Parms
{
};

// (0x2E8 - 0x300)
class ACCDefenceCore2 : public ACCDefenceCore
{
public:
	void*                                              AnimNode;                                    // 0x02E8 (0x0004)
	void*                                              LightEnv;                                    // 0x02EC (0x0004)
	struct FString                                     ExplosionSound;                              // 0x02F0 (0x000C)
	void*                                              ExplosionSoundComponent;                     // 0x02FC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCDefenceCore2" );

		return ClassPointer;
	};

public:
	bool IsDestroyed ()
	{
		static UFunction* pfnIsDestroyed = NULL;

		if ( !pfnIsDestroyed )
			pfnIsDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.IsDestroyed" );

		ACCDefenceCore2_execIsDestroyed_Parms IsDestroyed_Parms;

		this->ProcessEvent( pfnIsDestroyed, &IsDestroyed_Parms, NULL );

		return IsDestroyed_Parms.ReturnValue;
	};

	void OnCurLodChanged ()
	{
		static UFunction* pfnOnCurLodChanged = NULL;

		if ( !pfnOnCurLodChanged )
			pfnOnCurLodChanged = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.OnCurLodChanged" );

		ACCDefenceCore2_execOnCurLodChanged_Parms OnCurLodChanged_Parms;

		this->ProcessEvent( pfnOnCurLodChanged, &OnCurLodChanged_Parms, NULL );
	};

	void SetMaterialVectorParameterValue ( float Val )
	{
		static UFunction* pfnSetMaterialVectorParameterValue = NULL;

		if ( !pfnSetMaterialVectorParameterValue )
			pfnSetMaterialVectorParameterValue = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.SetMaterialVectorParameterValue" );

		ACCDefenceCore2_execSetMaterialVectorParameterValue_Parms SetMaterialVectorParameterValue_Parms;
		SetMaterialVectorParameterValue_Parms.Val = Val;

		this->ProcessEvent( pfnSetMaterialVectorParameterValue, &SetMaterialVectorParameterValue_Parms, NULL );
	};

	void PlayEffects ()
	{
		static UFunction* pfnPlayEffects = NULL;

		if ( !pfnPlayEffects )
			pfnPlayEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.PlayEffects" );

		ACCDefenceCore2_execPlayEffects_Parms PlayEffects_Parms;

		this->ProcessEvent( pfnPlayEffects, &PlayEffects_Parms, NULL );
	};

	void PlayAnim ()
	{
		static UFunction* pfnPlayAnim = NULL;

		if ( !pfnPlayAnim )
			pfnPlayAnim = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.PlayAnim" );

		ACCDefenceCore2_execPlayAnim_Parms PlayAnim_Parms;

		this->ProcessEvent( pfnPlayAnim, &PlayAnim_Parms, NULL );
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.TakeDamage" );

		ACCDefenceCore2_eventTakeDamage_Parms TakeDamage_Parms;
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

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.PostBeginPlay" );

		ACCDefenceCore2_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void InitExplosionSoundComponent ()
	{
		static UFunction* pfnInitExplosionSoundComponent = NULL;

		if ( !pfnInitExplosionSoundComponent )
			pfnInitExplosionSoundComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.InitExplosionSoundComponent" );

		ACCDefenceCore2_execInitExplosionSoundComponent_Parms InitExplosionSoundComponent_Parms;

		this->ProcessEvent( pfnInitExplosionSoundComponent, &InitExplosionSoundComponent_Parms, NULL );
	};

	void SetSkelMesh ()
	{
		static UFunction* pfnSetSkelMesh = NULL;

		if ( !pfnSetSkelMesh )
			pfnSetSkelMesh = UObject::FindObject< UFunction >( "Function CrimeCraft.CCDefenceCore2.SetSkelMesh" );

		ACCDefenceCore2_execSetSkelMesh_Parms SetSkelMesh_Parms;

		this->ProcessEvent( pfnSetSkelMesh, &SetSkelMesh_Parms, NULL );
	};

};

UClass* ACCDefenceCore2::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif