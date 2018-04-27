/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProjectileBase.h
// Date: 06/16/2011 @ 05:19:41.549
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProjectileBase_execSetBlockExplosion_Parms
{
	unsigned long Value : 1;
};

struct ACCProjectileBase_execDoShutDown_Parms
{
};

struct ACCProjectileBase_execExplode_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
	unsigned long bViaReplication : 1;
};

struct ACCProjectileBase_execExplodeInternal_Parms
{
	struct FVector HitLocation;
	struct FVector HitNormal;
};

struct ACCProjectileBase_execSetWeaponAttachmentID_Parms
{
	struct FString WeaponAttachmentID;
};

struct ACCProjectileBase_execInitVisualPart_Parms
{
	void* AttachmentPreset;
};

struct ACCProjectileBase_execProjectileExplosionTimer_Parms
{
};

struct ACCProjectileBase_execTimeProjectileExplosion_Parms
{
};

struct ACCProjectileBase_execInitReplicatedVars_Parms
{
};

struct ACCProjectileBase_execPostInit_Parms
{
};

struct ACCProjectileBase_execInit_Parms
{
	struct FVector Direction;
	class AWeapon* SourceWeapon;
};

struct ACCProjectileBase_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

// (0x1F8 - 0x254)
class ACCProjectileBase : public AProjectile
{
public:
	struct FRotator                                    ReplicatedRotation;                          // 0x01F8 (0x000C)
	float                                              ReplicatedSpeed;                             // 0x0204 (0x0004)
	struct FString                                     CustomWpnAttachmentID;                       // 0x0208 (0x000C)
	struct FString                                     InitializedWithWpnAttachmentID;              // 0x0214 (0x000C)
	int                                                BlockExplosion;                              // 0x0220 (0x0004)
	struct FProjectileExplosionInfo                    ExplosionInfo;                               // 0x0224 (0x002C)
	unsigned long                                      bExplosionDone : 1;                          // 0x0250 (0x0004) [0x00000001]
	unsigned long                                      bExploding : 1;                              // 0x0250 (0x0004) [0x00000002]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProjectileBase" );

		return ClassPointer;
	};

public:
	void SetBlockExplosion ( unsigned long Value )
	{
		static UFunction* pfnSetBlockExplosion = NULL;

		if ( !pfnSetBlockExplosion )
			pfnSetBlockExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.SetBlockExplosion" );

		ACCProjectileBase_execSetBlockExplosion_Parms SetBlockExplosion_Parms;
		SetBlockExplosion_Parms.Value = Value;

		this->ProcessEvent( pfnSetBlockExplosion, &SetBlockExplosion_Parms, NULL );
	};

	void DoShutDown ()
	{
		static UFunction* pfnDoShutDown = NULL;

		if ( !pfnDoShutDown )
			pfnDoShutDown = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.DoShutDown" );

		ACCProjectileBase_execDoShutDown_Parms DoShutDown_Parms;

		this->ProcessEvent( pfnDoShutDown, &DoShutDown_Parms, NULL );
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal, unsigned long bViaReplication/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnExplode = NULL;

		if ( !pfnExplode )
			pfnExplode = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.Explode" );

		ACCProjectileBase_execExplode_Parms Explode_Parms;
		memcpy( &Explode_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Explode_Parms.HitNormal, &HitNormal, 0xC );
		Explode_Parms.bViaReplication = bViaReplication;

		this->ProcessEvent( pfnExplode, &Explode_Parms, NULL );
	};

	void ExplodeInternal ( struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnExplodeInternal = NULL;

		if ( !pfnExplodeInternal )
			pfnExplodeInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.ExplodeInternal" );

		ACCProjectileBase_execExplodeInternal_Parms ExplodeInternal_Parms;
		memcpy( &ExplodeInternal_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &ExplodeInternal_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnExplodeInternal, &ExplodeInternal_Parms, NULL );
	};

	void SetWeaponAttachmentID ( struct FString WeaponAttachmentID )
	{
		static UFunction* pfnSetWeaponAttachmentID = NULL;

		if ( !pfnSetWeaponAttachmentID )
			pfnSetWeaponAttachmentID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.SetWeaponAttachmentID" );

		ACCProjectileBase_execSetWeaponAttachmentID_Parms SetWeaponAttachmentID_Parms;
		memcpy( &SetWeaponAttachmentID_Parms.WeaponAttachmentID, &WeaponAttachmentID, 0xC );

		this->ProcessEvent( pfnSetWeaponAttachmentID, &SetWeaponAttachmentID_Parms, NULL );
	};

	void InitVisualPart ( void* AttachmentPreset )
	{
		static UFunction* pfnInitVisualPart = NULL;

		if ( !pfnInitVisualPart )
			pfnInitVisualPart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.InitVisualPart" );

		ACCProjectileBase_execInitVisualPart_Parms InitVisualPart_Parms;
		InitVisualPart_Parms.AttachmentPreset = AttachmentPreset;

		this->ProcessEvent( pfnInitVisualPart, &InitVisualPart_Parms, NULL );
	};

	void ProjectileExplosionTimer ()
	{
		static UFunction* pfnProjectileExplosionTimer = NULL;

		if ( !pfnProjectileExplosionTimer )
			pfnProjectileExplosionTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.ProjectileExplosionTimer" );

		ACCProjectileBase_execProjectileExplosionTimer_Parms ProjectileExplosionTimer_Parms;

		this->ProcessEvent( pfnProjectileExplosionTimer, &ProjectileExplosionTimer_Parms, NULL );
	};

	void TimeProjectileExplosion ()
	{
		static UFunction* pfnTimeProjectileExplosion = NULL;

		if ( !pfnTimeProjectileExplosion )
			pfnTimeProjectileExplosion = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.TimeProjectileExplosion" );

		ACCProjectileBase_execTimeProjectileExplosion_Parms TimeProjectileExplosion_Parms;

		this->ProcessEvent( pfnTimeProjectileExplosion, &TimeProjectileExplosion_Parms, NULL );
	};

	void InitReplicatedVars ()
	{
		static UFunction* pfnInitReplicatedVars = NULL;

		if ( !pfnInitReplicatedVars )
			pfnInitReplicatedVars = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.InitReplicatedVars" );

		ACCProjectileBase_execInitReplicatedVars_Parms InitReplicatedVars_Parms;

		this->ProcessEvent( pfnInitReplicatedVars, &InitReplicatedVars_Parms, NULL );
	};

	void PostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.PostInit" );

		ACCProjectileBase_execPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );
	};

	void Init ( struct FVector Direction, class AWeapon* SourceWeapon )
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.Init" );

		ACCProjectileBase_execInit_Parms Init_Parms;
		memcpy( &Init_Parms.Direction, &Direction, 0xC );
		Init_Parms.SourceWeapon = SourceWeapon;

		this->ProcessEvent( pfnInit, &Init_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProjectileBase.ReplicatedEvent" );

		ACCProjectileBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

};

UClass* ACCProjectileBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif