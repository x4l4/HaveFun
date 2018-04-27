/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPTBMineBase.h
// Date: 06/16/2011 @ 05:19:41.853
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPTBMineBase_eventTakeDamage_Parms
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

struct ACCPTBMineBase_execUpdateStatus_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCPTBMineBase_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x2B8 - 0x2C4)
class ACCPTBMineBase : public ACCGameObjective
{
public:
	float                                              MineDist;                                    // 0x02B8 (0x0004)
	void*                                              MineBaseMesh;                                // 0x02BC (0x0004)
	int                                                TeamID;                                      // 0x02C0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPTBMineBase" );

		return ClassPointer;
	};

public:
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBMineBase.TakeDamage" );

		ACCPTBMineBase_eventTakeDamage_Parms TakeDamage_Parms;
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

	bool UpdateStatus ( float DeltaTime )
	{
		static UFunction* pfnUpdateStatus = NULL;

		if ( !pfnUpdateStatus )
			pfnUpdateStatus = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBMineBase.UpdateStatus" );

		ACCPTBMineBase_execUpdateStatus_Parms UpdateStatus_Parms;
		UpdateStatus_Parms.DeltaTime = DeltaTime;

		pfnUpdateStatus->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateStatus, &UpdateStatus_Parms, NULL );
		pfnUpdateStatus->FunctionFlags |= 0x400;

		return UpdateStatus_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBMineBase.PostBeginPlay" );

		ACCPTBMineBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCPTBMineBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif