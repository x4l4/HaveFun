/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCCLTPoint.h
// Date: 06/16/2011 @ 05:19:41.193
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ECLTPointState
{
	CLT_Disabled = 0,
	CLT_Spawning = 1,
	CLT_Waiting = 2,
	CLT_MAX = 3
};

struct ACCCLTPoint_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCCLTPoint_eventTakeDamage_Parms
{
	int Damage;
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct ACCCLTPoint_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ACCCLTPoint_execUpdateVisual_Parms
{
};

struct ACCCLTPoint_execResetVisual_Parms
{
};

struct ACCCLTPoint_execUpdateAppearance_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCCLTPoint_execUpdateStatus_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x2B8 - 0x2EC)
class ACCCLTPoint : public ACCGameObjective
{
public:
	float                                              Lifetime;                                    // 0x02B8 (0x0004)
	float                                              SpawnTime;                                   // 0x02BC (0x0004)
	float                                              CaptureTime;                                 // 0x02C0 (0x0004)
	float                                              CaptureDist;                                 // 0x02C4 (0x0004)
	float                                              CaptureTimeSuddenDeath;                      // 0x02C8 (0x0004)
	float                                              CaptureAssist;                               // 0x02CC (0x0004)
	int                                                PointNameID;                                 // 0x02D0 (0x0004)
	float                                              TeamState;                                   // 0x02D4 (0x0004)
	unsigned char                                      PointState;                                  // 0x02D8 (0x0001)
	float                                              LastSpawnTime;                               // 0x02DC (0x0004)
	void*                                              CLTPointMesh;                                // 0x02E0 (0x0004)
	void*                                              AttachedVisual;                              // 0x02E4 (0x0004)
	void*                                              AttachedVisualMaterialInst;                  // 0x02E8 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCCLTPoint" );

		return ClassPointer;
	};

public:
	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.ReplicatedEvent" );

		ACCCLTPoint_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.TakeDamage" );

		ACCCLTPoint_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.Damage = Damage;
		TakeDamage_Parms.InstigatedBy = InstigatedBy;
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
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.PostBeginPlay" );

		ACCCLTPoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void UpdateVisual ()
	{
		static UFunction* pfnUpdateVisual = NULL;

		if ( !pfnUpdateVisual )
			pfnUpdateVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.UpdateVisual" );

		ACCCLTPoint_execUpdateVisual_Parms UpdateVisual_Parms;

		this->ProcessEvent( pfnUpdateVisual, &UpdateVisual_Parms, NULL );
	};

	void ResetVisual ()
	{
		static UFunction* pfnResetVisual = NULL;

		if ( !pfnResetVisual )
			pfnResetVisual = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.ResetVisual" );

		ACCCLTPoint_execResetVisual_Parms ResetVisual_Parms;

		this->ProcessEvent( pfnResetVisual, &ResetVisual_Parms, NULL );
	};

	bool UpdateAppearance ()
	{
		static UFunction* pfnUpdateAppearance = NULL;

		if ( !pfnUpdateAppearance )
			pfnUpdateAppearance = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.UpdateAppearance" );

		ACCCLTPoint_execUpdateAppearance_Parms UpdateAppearance_Parms;

		pfnUpdateAppearance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateAppearance, &UpdateAppearance_Parms, NULL );
		pfnUpdateAppearance->FunctionFlags |= 0x400;

		return UpdateAppearance_Parms.ReturnValue;
	};

	bool UpdateStatus ( float DeltaTime )
	{
		static UFunction* pfnUpdateStatus = NULL;

		if ( !pfnUpdateStatus )
			pfnUpdateStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCCLTPoint.UpdateStatus" );

		ACCCLTPoint_execUpdateStatus_Parms UpdateStatus_Parms;
		UpdateStatus_Parms.DeltaTime = DeltaTime;

		pfnUpdateStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateStatus, &UpdateStatus_Parms, NULL );
		pfnUpdateStatus->FunctionFlags |= 0x400;

		return UpdateStatus_Parms.ReturnValue;
	};

};

UClass* ACCCLTPoint::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif