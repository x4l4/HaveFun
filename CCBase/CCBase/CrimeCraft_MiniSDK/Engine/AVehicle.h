/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AVehicle.h
// Date: 06/16/2011 @ 05:19:39.807
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AVehicle_execZeroMovementVariables_Parms
{
};

struct AVehicle_execNotifyDriverTakeHit_Parms
{
	class AController* InstigatedBy;
	struct FVector HitLocation;
	int Damage;
	class UClass* DamageType;
	struct FVector Momentum;
};

struct AVehicle_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct AVehicle_execDrivingStatusChanged_Parms
{
};

struct AVehicle_execHandleDeadVehicleDriver_Parms
{
};

struct AVehicle_execSetDriving_Parms
{
	unsigned long B : 1;
};

struct AVehicle_eventGetEntryLocation_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct AVehicle_execCrushedBy_Parms
{
	class APawn* OtherPawn;
};

struct AVehicle_execPancakeOther_Parms
{
	class APawn* Other;
};

struct AVehicle_eventEncroachingOn_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AVehicle_execGetCollisionDamageInstigator_Parms
{
	class AController* ReturnValue; // CPF_ReturnParm
};

struct AVehicle_eventEncroachedBy_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AVehicle_execFaceRotation_Parms
{
	struct FRotator NewRotation;
	float DeltaTime;
};

struct AVehicle_execGetDefaultCameraMode_Parms
{
	class APlayerController* RequestedBy;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct AVehicle_execPlayDying_Parms
{
	class UClass* DamageType;
	struct FVector HitLoc;
};

struct AVehicle_execDriverDied_Parms
{
	class UClass* DamageType;
};

struct AVehicle_execDied_Parms
{
	class AController* Killer;
	class UClass* DamageType;
	struct FVector HitLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execThrowActiveWeapon_Parms
{
	class UClass* DamageType;
};

struct AVehicle_execAdjustDriverDamage_Parms
{
	int Damage; // CPF_OutParm
	class AController* InstigatedBy;
	struct FVector HitLocation;
	struct FVector Momentum; // CPF_OutParm
	class UClass* DamageType;
};

struct AVehicle_eventTakeDamage_Parms
{
	int Damage;
	class AController* EventInstigator;
	struct FVector HitLocation;
	struct FVector Momentum;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
	class AActor* DamageCauser;
	struct FAdditionalHitInfo AddInfo;
};// FUNC_Event

struct AVehicle_execSetKillInstigator_Parms
{
	class AController* InstigatedBy;
	class UClass* DamageType;
	class AController* ReturnValue; // CPF_ReturnParm
};

struct AVehicle_execUnPossessed_Parms
{
};

struct AVehicle_execTryExitPos_Parms
{
	class APawn* ExitingDriver;
	struct FVector ExitPos;
	unsigned long bMustFindGround : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execFindAutoExit_Parms
{
	class APawn* ExitingDriver;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execPlaceExitingDriver_Parms
{
	class APawn* ExitingDriver;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execDriverLeft_Parms
{
};

struct AVehicle_execSetInputs_Parms
{
	float InForward;
	float InStrafe;
	float InUp;
};

struct AVehicle_eventDriverLeave_Parms
{
	unsigned long bForceLeave : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AVehicle_execGetExitRotation_Parms
{
	class AController* C;
	struct FRotator ReturnValue; // CPF_ReturnParm
};

struct AVehicle_eventContinueOnFoot_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct AVehicle_execDetachDriver_Parms
{
	class APawn* P;
};

struct AVehicle_execAttachDriver_Parms
{
	class APawn* P;
};

struct AVehicle_execEntryAnnouncement_Parms
{
	class AController* C;
};

struct AVehicle_execPossessedBy_Parms
{
	class AController* C;
	unsigned long bVehicleTransition : 1;
};

struct AVehicle_execDriverEnter_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execTryToDrive_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execAnySeatAvailable_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execCanEnterVehicle_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execDestroyed_HandleDriver_Parms
{
};

struct AVehicle_eventDestroyed_Parms
{
};// FUNC_Event

struct AVehicle_execCheatFly_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execCheatGhost_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_execCheatWalk_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AVehicle_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AVehicle_execSetBaseEyeheight_Parms
{
};

struct AVehicle_execPlayerChangedTeam_Parms
{
};

struct AVehicle_execDriverRadiusDamage_Parms
{
	float DamageAmount;
	float DamageRadius;
	class AController* EventInstigator;
	class UClass* DamageType;
	float Momentum;
	struct FVector HitLocation;
	class AActor* DamageCauser;
};

struct AVehicle_execTakeRadiusDamage_Parms
{
	class AController* InstigatedBy;
	float BaseDamage;
	float DamageRadius;
	class UClass* DamageType;
	float Momentum;
	struct FVector HurtOrigin;
	unsigned long bFullDamage : 1;
	class AActor* DamageCauser;
};

struct AVehicle_execGetTargetLocation_Parms
{
	class AActor* RequestedBy;
	unsigned long bRequestAlternateLoc : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct AVehicle_execSuicide_Parms
{
};

struct AVehicle_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct AVehicle_execNotifyTeamChanged_Parms
{
};

// (0x3D8 - 0x44C)
class AVehicle : public APawn
{
public:
	class APawn*                                       Driver;                                      // 0x03D8 (0x0004)
	unsigned long                                      bDriving : 1;                                // 0x03DC (0x0004) [0x00000001]
	unsigned long                                      bDriverIsVisible : 1;                        // 0x03DC (0x0004) [0x00000002]
	unsigned long                                      bAttachDriver : 1;                           // 0x03DC (0x0004) [0x00000004]
	unsigned long                                      bTurnInPlace : 1;                            // 0x03DC (0x0004) [0x00000008]
	unsigned long                                      bSeparateTurretFocus : 1;                    // 0x03DC (0x0004) [0x00000010]
	unsigned long                                      bFollowLookDir : 1;                          // 0x03DC (0x0004) [0x00000020]
	unsigned long                                      bHasHandbrake : 1;                           // 0x03DC (0x0004) [0x00000040]
	unsigned long                                      bScriptedRise : 1;                           // 0x03DC (0x0004) [0x00000080]
	unsigned long                                      bDuckObstacles : 1;                          // 0x03DC (0x0004) [0x00000100]
	unsigned long                                      bAvoidReversing : 1;                         // 0x03DC (0x0004) [0x00000200]
	unsigned long                                      bRetryPathfindingWithDriver : 1;             // 0x03DC (0x0004) [0x00000400]
	unsigned long                                      bIgnoreStallZ : 1;                           // 0x03DC (0x0004) [0x00000800]
	unsigned long                                      bDoExtraNetRelevancyTraces : 1;              // 0x03DC (0x0004) [0x00001000]
	TArray< struct FVector >                           ExitPositions;                               // 0x03E0 (0x000C)
	float                                              ExitRadius;                                  // 0x03EC (0x0004)
	struct FVector                                     ExitOffset;                                  // 0x03F0 (0x000C)
	float                                              Steering;                                    // 0x03FC (0x0004)
	float                                              Throttle;                                    // 0x0400 (0x0004)
	float                                              Rise;                                        // 0x0404 (0x0004)
	struct FVector                                     TargetLocationAdjustment;                    // 0x0408 (0x000C)
	float                                              DriverDamageMult;                            // 0x0414 (0x0004)
	float                                              MomentumMult;                                // 0x0418 (0x0004)
	class UClass*                                      CrushedDamageType;                           // 0x041C (0x0004)
	float                                              MinCrushSpeed;                               // 0x0420 (0x0004)
	float                                              ForceCrushPenetration;                       // 0x0424 (0x0004)
	unsigned char                                      StuckCount;                                  // 0x0428 (0x0001)
	float                                              ThrottleTime;                                // 0x042C (0x0004)
	float                                              StuckTime;                                   // 0x0430 (0x0004)
	float                                              OldSteering;                                 // 0x0434 (0x0004)
	float                                              OnlySteeringStartTime;                       // 0x0438 (0x0004)
	float                                              OldThrottle;                                 // 0x043C (0x0004)
	float                                              AIMoveCheckTime;                             // 0x0440 (0x0004)
	float                                              VehicleMovingTime;                           // 0x0444 (0x0004)
	float                                              TurnTime;                                    // 0x0448 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Vehicle" );

		return ClassPointer;
	};

public:
	void ZeroMovementVariables ()
	{
		static UFunction* pfnZeroMovementVariables = NULL;

		if ( !pfnZeroMovementVariables )
			pfnZeroMovementVariables = UObject::FindObject< UFunction >( "Function Engine.Vehicle.ZeroMovementVariables" );

		AVehicle_execZeroMovementVariables_Parms ZeroMovementVariables_Parms;

		this->ProcessEvent( pfnZeroMovementVariables, &ZeroMovementVariables_Parms, NULL );
	};

	void NotifyDriverTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
	{
		static UFunction* pfnNotifyDriverTakeHit = NULL;

		if ( !pfnNotifyDriverTakeHit )
			pfnNotifyDriverTakeHit = UObject::FindObject< UFunction >( "Function Engine.Vehicle.NotifyDriverTakeHit" );

		AVehicle_execNotifyDriverTakeHit_Parms NotifyDriverTakeHit_Parms;
		NotifyDriverTakeHit_Parms.InstigatedBy = InstigatedBy;
		memcpy( &NotifyDriverTakeHit_Parms.HitLocation, &HitLocation, 0xC );
		NotifyDriverTakeHit_Parms.Damage = Damage;
		NotifyDriverTakeHit_Parms.DamageType = DamageType;
		memcpy( &NotifyDriverTakeHit_Parms.Momentum, &Momentum, 0xC );

		this->ProcessEvent( pfnNotifyDriverTakeHit, &NotifyDriverTakeHit_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function Engine.Vehicle.ReplicatedEvent" );

		AVehicle_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void DrivingStatusChanged ()
	{
		static UFunction* pfnDrivingStatusChanged = NULL;

		if ( !pfnDrivingStatusChanged )
			pfnDrivingStatusChanged = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DrivingStatusChanged" );

		AVehicle_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

		this->ProcessEvent( pfnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
	};

	void HandleDeadVehicleDriver ()
	{
		static UFunction* pfnHandleDeadVehicleDriver = NULL;

		if ( !pfnHandleDeadVehicleDriver )
			pfnHandleDeadVehicleDriver = UObject::FindObject< UFunction >( "Function Engine.Vehicle.HandleDeadVehicleDriver" );

		AVehicle_execHandleDeadVehicleDriver_Parms HandleDeadVehicleDriver_Parms;

		this->ProcessEvent( pfnHandleDeadVehicleDriver, &HandleDeadVehicleDriver_Parms, NULL );
	};

	void SetDriving ( unsigned long B )
	{
		static UFunction* pfnSetDriving = NULL;

		if ( !pfnSetDriving )
			pfnSetDriving = UObject::FindObject< UFunction >( "Function Engine.Vehicle.SetDriving" );

		AVehicle_execSetDriving_Parms SetDriving_Parms;
		SetDriving_Parms.B = B;

		this->ProcessEvent( pfnSetDriving, &SetDriving_Parms, NULL );
	};

	struct FVector eventGetEntryLocation ()
	{
		static UFunction* pfnGetEntryLocation = NULL;

		if ( !pfnGetEntryLocation )
			pfnGetEntryLocation = UObject::FindObject< UFunction >( "Function Engine.Vehicle.GetEntryLocation" );

		AVehicle_eventGetEntryLocation_Parms GetEntryLocation_Parms;

		this->ProcessEvent( pfnGetEntryLocation, &GetEntryLocation_Parms, NULL );

		return GetEntryLocation_Parms.ReturnValue;
	};

	void CrushedBy ( class APawn* OtherPawn )
	{
		static UFunction* pfnCrushedBy = NULL;

		if ( !pfnCrushedBy )
			pfnCrushedBy = UObject::FindObject< UFunction >( "Function Engine.Vehicle.CrushedBy" );

		AVehicle_execCrushedBy_Parms CrushedBy_Parms;
		CrushedBy_Parms.OtherPawn = OtherPawn;

		this->ProcessEvent( pfnCrushedBy, &CrushedBy_Parms, NULL );
	};

	void PancakeOther ( class APawn* Other )
	{
		static UFunction* pfnPancakeOther = NULL;

		if ( !pfnPancakeOther )
			pfnPancakeOther = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PancakeOther" );

		AVehicle_execPancakeOther_Parms PancakeOther_Parms;
		PancakeOther_Parms.Other = Other;

		this->ProcessEvent( pfnPancakeOther, &PancakeOther_Parms, NULL );
	};

	bool eventEncroachingOn ( class AActor* Other )
	{
		static UFunction* pfnEncroachingOn = NULL;

		if ( !pfnEncroachingOn )
			pfnEncroachingOn = UObject::FindObject< UFunction >( "Function Engine.Vehicle.EncroachingOn" );

		AVehicle_eventEncroachingOn_Parms EncroachingOn_Parms;
		EncroachingOn_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachingOn, &EncroachingOn_Parms, NULL );

		return EncroachingOn_Parms.ReturnValue;
	};

	class AController* GetCollisionDamageInstigator ()
	{
		static UFunction* pfnGetCollisionDamageInstigator = NULL;

		if ( !pfnGetCollisionDamageInstigator )
			pfnGetCollisionDamageInstigator = UObject::FindObject< UFunction >( "Function Engine.Vehicle.GetCollisionDamageInstigator" );

		AVehicle_execGetCollisionDamageInstigator_Parms GetCollisionDamageInstigator_Parms;

		this->ProcessEvent( pfnGetCollisionDamageInstigator, &GetCollisionDamageInstigator_Parms, NULL );

		return GetCollisionDamageInstigator_Parms.ReturnValue;
	};

	void eventEncroachedBy ( class AActor* Other )
	{
		static UFunction* pfnEncroachedBy = NULL;

		if ( !pfnEncroachedBy )
			pfnEncroachedBy = UObject::FindObject< UFunction >( "Function Engine.Vehicle.EncroachedBy" );

		AVehicle_eventEncroachedBy_Parms EncroachedBy_Parms;
		EncroachedBy_Parms.Other = Other;

		this->ProcessEvent( pfnEncroachedBy, &EncroachedBy_Parms, NULL );
	};

	void FaceRotation ( struct FRotator NewRotation, float DeltaTime )
	{
		static UFunction* pfnFaceRotation = NULL;

		if ( !pfnFaceRotation )
			pfnFaceRotation = UObject::FindObject< UFunction >( "Function Engine.Vehicle.FaceRotation" );

		AVehicle_execFaceRotation_Parms FaceRotation_Parms;
		memcpy( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
		FaceRotation_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnFaceRotation, &FaceRotation_Parms, NULL );
	};

	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy )
	{
		static UFunction* pfnGetDefaultCameraMode = NULL;

		if ( !pfnGetDefaultCameraMode )
			pfnGetDefaultCameraMode = UObject::FindObject< UFunction >( "Function Engine.Vehicle.GetDefaultCameraMode" );

		AVehicle_execGetDefaultCameraMode_Parms GetDefaultCameraMode_Parms;
		GetDefaultCameraMode_Parms.RequestedBy = RequestedBy;

		this->ProcessEvent( pfnGetDefaultCameraMode, &GetDefaultCameraMode_Parms, NULL );

		return GetDefaultCameraMode_Parms.ReturnValue;
	};

	void PlayDying ( class UClass* DamageType, struct FVector HitLoc )
	{
		static UFunction* pfnPlayDying = NULL;

		if ( !pfnPlayDying )
			pfnPlayDying = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PlayDying" );

		AVehicle_execPlayDying_Parms PlayDying_Parms;
		PlayDying_Parms.DamageType = DamageType;
		memcpy( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

		this->ProcessEvent( pfnPlayDying, &PlayDying_Parms, NULL );
	};

	void DriverDied ( class UClass* DamageType )
	{
		static UFunction* pfnDriverDied = NULL;

		if ( !pfnDriverDied )
			pfnDriverDied = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DriverDied" );

		AVehicle_execDriverDied_Parms DriverDied_Parms;
		DriverDied_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnDriverDied, &DriverDied_Parms, NULL );
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
	{
		static UFunction* pfnDied = NULL;

		if ( !pfnDied )
			pfnDied = UObject::FindObject< UFunction >( "Function Engine.Vehicle.Died" );

		AVehicle_execDied_Parms Died_Parms;
		Died_Parms.Killer = Killer;
		Died_Parms.DamageType = DamageType;
		memcpy( &Died_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnDied, &Died_Parms, NULL );

		return Died_Parms.ReturnValue;
	};

	void ThrowActiveWeapon ( class UClass* DamageType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnThrowActiveWeapon = NULL;

		if ( !pfnThrowActiveWeapon )
			pfnThrowActiveWeapon = UObject::FindObject< UFunction >( "Function Engine.Vehicle.ThrowActiveWeapon" );

		AVehicle_execThrowActiveWeapon_Parms ThrowActiveWeapon_Parms;
		ThrowActiveWeapon_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnThrowActiveWeapon, &ThrowActiveWeapon_Parms, NULL );
	};

	void AdjustDriverDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum )
	{
		static UFunction* pfnAdjustDriverDamage = NULL;

		if ( !pfnAdjustDriverDamage )
			pfnAdjustDriverDamage = UObject::FindObject< UFunction >( "Function Engine.Vehicle.AdjustDriverDamage" );

		AVehicle_execAdjustDriverDamage_Parms AdjustDriverDamage_Parms;
		AdjustDriverDamage_Parms.InstigatedBy = InstigatedBy;
		memcpy( &AdjustDriverDamage_Parms.HitLocation, &HitLocation, 0xC );
		AdjustDriverDamage_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnAdjustDriverDamage, &AdjustDriverDamage_Parms, NULL );

		if ( Damage )
			*Damage = AdjustDriverDamage_Parms.Damage; // CPF_OutParm
		if ( Momentum )
			memcpy( Momentum, &AdjustDriverDamage_Parms.Momentum, 0xC ); // CPF_OutParm
	};

	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/, class AActor* DamageCauser/*CPF_OptionalParm*/, struct FAdditionalHitInfo AddInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnTakeDamage = NULL;

		if ( !pfnTakeDamage )
			pfnTakeDamage = UObject::FindObject< UFunction >( "Function Engine.Vehicle.TakeDamage" );

		AVehicle_eventTakeDamage_Parms TakeDamage_Parms;
		TakeDamage_Parms.Damage = Damage;
		TakeDamage_Parms.EventInstigator = EventInstigator;
		memcpy( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
		TakeDamage_Parms.DamageType = DamageType;
		memcpy( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
		TakeDamage_Parms.DamageCauser = DamageCauser;
		memcpy( &TakeDamage_Parms.AddInfo, &AddInfo, 0xC );

		this->ProcessEvent( pfnTakeDamage, &TakeDamage_Parms, NULL );
	};

	class AController* SetKillInstigator ( class AController* InstigatedBy, class UClass* DamageType )
	{
		static UFunction* pfnSetKillInstigator = NULL;

		if ( !pfnSetKillInstigator )
			pfnSetKillInstigator = UObject::FindObject< UFunction >( "Function Engine.Vehicle.SetKillInstigator" );

		AVehicle_execSetKillInstigator_Parms SetKillInstigator_Parms;
		SetKillInstigator_Parms.InstigatedBy = InstigatedBy;
		SetKillInstigator_Parms.DamageType = DamageType;

		this->ProcessEvent( pfnSetKillInstigator, &SetKillInstigator_Parms, NULL );

		return SetKillInstigator_Parms.ReturnValue;
	};

	void UnPossessed ()
	{
		static UFunction* pfnUnPossessed = NULL;

		if ( !pfnUnPossessed )
			pfnUnPossessed = UObject::FindObject< UFunction >( "Function Engine.Vehicle.UnPossessed" );

		AVehicle_execUnPossessed_Parms UnPossessed_Parms;

		this->ProcessEvent( pfnUnPossessed, &UnPossessed_Parms, NULL );
	};

	bool TryExitPos ( class APawn* ExitingDriver, struct FVector ExitPos, unsigned long bMustFindGround )
	{
		static UFunction* pfnTryExitPos = NULL;

		if ( !pfnTryExitPos )
			pfnTryExitPos = UObject::FindObject< UFunction >( "Function Engine.Vehicle.TryExitPos" );

		AVehicle_execTryExitPos_Parms TryExitPos_Parms;
		TryExitPos_Parms.ExitingDriver = ExitingDriver;
		memcpy( &TryExitPos_Parms.ExitPos, &ExitPos, 0xC );
		TryExitPos_Parms.bMustFindGround = bMustFindGround;

		this->ProcessEvent( pfnTryExitPos, &TryExitPos_Parms, NULL );

		return TryExitPos_Parms.ReturnValue;
	};

	bool FindAutoExit ( class APawn* ExitingDriver )
	{
		static UFunction* pfnFindAutoExit = NULL;

		if ( !pfnFindAutoExit )
			pfnFindAutoExit = UObject::FindObject< UFunction >( "Function Engine.Vehicle.FindAutoExit" );

		AVehicle_execFindAutoExit_Parms FindAutoExit_Parms;
		FindAutoExit_Parms.ExitingDriver = ExitingDriver;

		this->ProcessEvent( pfnFindAutoExit, &FindAutoExit_Parms, NULL );

		return FindAutoExit_Parms.ReturnValue;
	};

	bool PlaceExitingDriver ( class APawn* ExitingDriver/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlaceExitingDriver = NULL;

		if ( !pfnPlaceExitingDriver )
			pfnPlaceExitingDriver = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PlaceExitingDriver" );

		AVehicle_execPlaceExitingDriver_Parms PlaceExitingDriver_Parms;
		PlaceExitingDriver_Parms.ExitingDriver = ExitingDriver;

		this->ProcessEvent( pfnPlaceExitingDriver, &PlaceExitingDriver_Parms, NULL );

		return PlaceExitingDriver_Parms.ReturnValue;
	};

	void DriverLeft ()
	{
		static UFunction* pfnDriverLeft = NULL;

		if ( !pfnDriverLeft )
			pfnDriverLeft = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DriverLeft" );

		AVehicle_execDriverLeft_Parms DriverLeft_Parms;

		this->ProcessEvent( pfnDriverLeft, &DriverLeft_Parms, NULL );
	};

	void SetInputs ( float InForward, float InStrafe, float InUp )
	{
		static UFunction* pfnSetInputs = NULL;

		if ( !pfnSetInputs )
			pfnSetInputs = UObject::FindObject< UFunction >( "Function Engine.Vehicle.SetInputs" );

		AVehicle_execSetInputs_Parms SetInputs_Parms;
		SetInputs_Parms.InForward = InForward;
		SetInputs_Parms.InStrafe = InStrafe;
		SetInputs_Parms.InUp = InUp;

		this->ProcessEvent( pfnSetInputs, &SetInputs_Parms, NULL );
	};

	bool eventDriverLeave ( unsigned long bForceLeave )
	{
		static UFunction* pfnDriverLeave = NULL;

		if ( !pfnDriverLeave )
			pfnDriverLeave = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DriverLeave" );

		AVehicle_eventDriverLeave_Parms DriverLeave_Parms;
		DriverLeave_Parms.bForceLeave = bForceLeave;

		this->ProcessEvent( pfnDriverLeave, &DriverLeave_Parms, NULL );

		return DriverLeave_Parms.ReturnValue;
	};

	struct FRotator GetExitRotation ( class AController* C )
	{
		static UFunction* pfnGetExitRotation = NULL;

		if ( !pfnGetExitRotation )
			pfnGetExitRotation = UObject::FindObject< UFunction >( "Function Engine.Vehicle.GetExitRotation" );

		AVehicle_execGetExitRotation_Parms GetExitRotation_Parms;
		GetExitRotation_Parms.C = C;

		this->ProcessEvent( pfnGetExitRotation, &GetExitRotation_Parms, NULL );

		return GetExitRotation_Parms.ReturnValue;
	};

	bool eventContinueOnFoot ()
	{
		static UFunction* pfnContinueOnFoot = NULL;

		if ( !pfnContinueOnFoot )
			pfnContinueOnFoot = UObject::FindObject< UFunction >( "Function Engine.Vehicle.ContinueOnFoot" );

		AVehicle_eventContinueOnFoot_Parms ContinueOnFoot_Parms;

		this->ProcessEvent( pfnContinueOnFoot, &ContinueOnFoot_Parms, NULL );

		return ContinueOnFoot_Parms.ReturnValue;
	};

	void DetachDriver ( class APawn* P )
	{
		static UFunction* pfnDetachDriver = NULL;

		if ( !pfnDetachDriver )
			pfnDetachDriver = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DetachDriver" );

		AVehicle_execDetachDriver_Parms DetachDriver_Parms;
		DetachDriver_Parms.P = P;

		this->ProcessEvent( pfnDetachDriver, &DetachDriver_Parms, NULL );
	};

	void AttachDriver ( class APawn* P )
	{
		static UFunction* pfnAttachDriver = NULL;

		if ( !pfnAttachDriver )
			pfnAttachDriver = UObject::FindObject< UFunction >( "Function Engine.Vehicle.AttachDriver" );

		AVehicle_execAttachDriver_Parms AttachDriver_Parms;
		AttachDriver_Parms.P = P;

		this->ProcessEvent( pfnAttachDriver, &AttachDriver_Parms, NULL );
	};

	void EntryAnnouncement ( class AController* C )
	{
		static UFunction* pfnEntryAnnouncement = NULL;

		if ( !pfnEntryAnnouncement )
			pfnEntryAnnouncement = UObject::FindObject< UFunction >( "Function Engine.Vehicle.EntryAnnouncement" );

		AVehicle_execEntryAnnouncement_Parms EntryAnnouncement_Parms;
		EntryAnnouncement_Parms.C = C;

		this->ProcessEvent( pfnEntryAnnouncement, &EntryAnnouncement_Parms, NULL );
	};

	void PossessedBy ( class AController* C, unsigned long bVehicleTransition )
	{
		static UFunction* pfnPossessedBy = NULL;

		if ( !pfnPossessedBy )
			pfnPossessedBy = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PossessedBy" );

		AVehicle_execPossessedBy_Parms PossessedBy_Parms;
		PossessedBy_Parms.C = C;
		PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

		this->ProcessEvent( pfnPossessedBy, &PossessedBy_Parms, NULL );
	};

	bool DriverEnter ( class APawn* P )
	{
		static UFunction* pfnDriverEnter = NULL;

		if ( !pfnDriverEnter )
			pfnDriverEnter = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DriverEnter" );

		AVehicle_execDriverEnter_Parms DriverEnter_Parms;
		DriverEnter_Parms.P = P;

		this->ProcessEvent( pfnDriverEnter, &DriverEnter_Parms, NULL );

		return DriverEnter_Parms.ReturnValue;
	};

	bool TryToDrive ( class APawn* P )
	{
		static UFunction* pfnTryToDrive = NULL;

		if ( !pfnTryToDrive )
			pfnTryToDrive = UObject::FindObject< UFunction >( "Function Engine.Vehicle.TryToDrive" );

		AVehicle_execTryToDrive_Parms TryToDrive_Parms;
		TryToDrive_Parms.P = P;

		this->ProcessEvent( pfnTryToDrive, &TryToDrive_Parms, NULL );

		return TryToDrive_Parms.ReturnValue;
	};

	bool AnySeatAvailable ()
	{
		static UFunction* pfnAnySeatAvailable = NULL;

		if ( !pfnAnySeatAvailable )
			pfnAnySeatAvailable = UObject::FindObject< UFunction >( "Function Engine.Vehicle.AnySeatAvailable" );

		AVehicle_execAnySeatAvailable_Parms AnySeatAvailable_Parms;

		this->ProcessEvent( pfnAnySeatAvailable, &AnySeatAvailable_Parms, NULL );

		return AnySeatAvailable_Parms.ReturnValue;
	};

	bool CanEnterVehicle ( class APawn* P )
	{
		static UFunction* pfnCanEnterVehicle = NULL;

		if ( !pfnCanEnterVehicle )
			pfnCanEnterVehicle = UObject::FindObject< UFunction >( "Function Engine.Vehicle.CanEnterVehicle" );

		AVehicle_execCanEnterVehicle_Parms CanEnterVehicle_Parms;
		CanEnterVehicle_Parms.P = P;

		this->ProcessEvent( pfnCanEnterVehicle, &CanEnterVehicle_Parms, NULL );

		return CanEnterVehicle_Parms.ReturnValue;
	};

	void Destroyed_HandleDriver ()
	{
		static UFunction* pfnDestroyed_HandleDriver = NULL;

		if ( !pfnDestroyed_HandleDriver )
			pfnDestroyed_HandleDriver = UObject::FindObject< UFunction >( "Function Engine.Vehicle.Destroyed_HandleDriver" );

		AVehicle_execDestroyed_HandleDriver_Parms Destroyed_HandleDriver_Parms;

		this->ProcessEvent( pfnDestroyed_HandleDriver, &Destroyed_HandleDriver_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Vehicle.Destroyed" );

		AVehicle_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	bool CheatFly ()
	{
		static UFunction* pfnCheatFly = NULL;

		if ( !pfnCheatFly )
			pfnCheatFly = UObject::FindObject< UFunction >( "Function Engine.Vehicle.CheatFly" );

		AVehicle_execCheatFly_Parms CheatFly_Parms;

		this->ProcessEvent( pfnCheatFly, &CheatFly_Parms, NULL );

		return CheatFly_Parms.ReturnValue;
	};

	bool CheatGhost ()
	{
		static UFunction* pfnCheatGhost = NULL;

		if ( !pfnCheatGhost )
			pfnCheatGhost = UObject::FindObject< UFunction >( "Function Engine.Vehicle.CheatGhost" );

		AVehicle_execCheatGhost_Parms CheatGhost_Parms;

		this->ProcessEvent( pfnCheatGhost, &CheatGhost_Parms, NULL );

		return CheatGhost_Parms.ReturnValue;
	};

	bool CheatWalk ()
	{
		static UFunction* pfnCheatWalk = NULL;

		if ( !pfnCheatWalk )
			pfnCheatWalk = UObject::FindObject< UFunction >( "Function Engine.Vehicle.CheatWalk" );

		AVehicle_execCheatWalk_Parms CheatWalk_Parms;

		this->ProcessEvent( pfnCheatWalk, &CheatWalk_Parms, NULL );

		return CheatWalk_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PostBeginPlay" );

		AVehicle_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void SetBaseEyeheight ()
	{
		static UFunction* pfnSetBaseEyeheight = NULL;

		if ( !pfnSetBaseEyeheight )
			pfnSetBaseEyeheight = UObject::FindObject< UFunction >( "Function Engine.Vehicle.SetBaseEyeheight" );

		AVehicle_execSetBaseEyeheight_Parms SetBaseEyeheight_Parms;

		this->ProcessEvent( pfnSetBaseEyeheight, &SetBaseEyeheight_Parms, NULL );
	};

	void PlayerChangedTeam ()
	{
		static UFunction* pfnPlayerChangedTeam = NULL;

		if ( !pfnPlayerChangedTeam )
			pfnPlayerChangedTeam = UObject::FindObject< UFunction >( "Function Engine.Vehicle.PlayerChangedTeam" );

		AVehicle_execPlayerChangedTeam_Parms PlayerChangedTeam_Parms;

		this->ProcessEvent( pfnPlayerChangedTeam, &PlayerChangedTeam_Parms, NULL );
	};

	void DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser )
	{
		static UFunction* pfnDriverRadiusDamage = NULL;

		if ( !pfnDriverRadiusDamage )
			pfnDriverRadiusDamage = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DriverRadiusDamage" );

		AVehicle_execDriverRadiusDamage_Parms DriverRadiusDamage_Parms;
		DriverRadiusDamage_Parms.DamageAmount = DamageAmount;
		DriverRadiusDamage_Parms.DamageRadius = DamageRadius;
		DriverRadiusDamage_Parms.EventInstigator = EventInstigator;
		DriverRadiusDamage_Parms.DamageType = DamageType;
		DriverRadiusDamage_Parms.Momentum = Momentum;
		memcpy( &DriverRadiusDamage_Parms.HitLocation, &HitLocation, 0xC );
		DriverRadiusDamage_Parms.DamageCauser = DamageCauser;

		this->ProcessEvent( pfnDriverRadiusDamage, &DriverRadiusDamage_Parms, NULL );
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser )
	{
		static UFunction* pfnTakeRadiusDamage = NULL;

		if ( !pfnTakeRadiusDamage )
			pfnTakeRadiusDamage = UObject::FindObject< UFunction >( "Function Engine.Vehicle.TakeRadiusDamage" );

		AVehicle_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
		TakeRadiusDamage_Parms.InstigatedBy = InstigatedBy;
		TakeRadiusDamage_Parms.BaseDamage = BaseDamage;
		TakeRadiusDamage_Parms.DamageRadius = DamageRadius;
		TakeRadiusDamage_Parms.DamageType = DamageType;
		TakeRadiusDamage_Parms.Momentum = Momentum;
		memcpy( &TakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
		TakeRadiusDamage_Parms.bFullDamage = bFullDamage;
		TakeRadiusDamage_Parms.DamageCauser = DamageCauser;

		this->ProcessEvent( pfnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
	};

	struct FVector GetTargetLocation ( class AActor* RequestedBy/*CPF_OptionalParm*/, unsigned long bRequestAlternateLoc/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetTargetLocation = NULL;

		if ( !pfnGetTargetLocation )
			pfnGetTargetLocation = UObject::FindObject< UFunction >( "Function Engine.Vehicle.GetTargetLocation" );

		AVehicle_execGetTargetLocation_Parms GetTargetLocation_Parms;
		GetTargetLocation_Parms.RequestedBy = RequestedBy;
		GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

		pfnGetTargetLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetTargetLocation, &GetTargetLocation_Parms, NULL );
		pfnGetTargetLocation->FunctionFlags |= 0x400;

		return GetTargetLocation_Parms.ReturnValue;
	};

	void Suicide ()
	{
		static UFunction* pfnSuicide = NULL;

		if ( !pfnSuicide )
			pfnSuicide = UObject::FindObject< UFunction >( "Function Engine.Vehicle.Suicide" );

		AVehicle_execSuicide_Parms Suicide_Parms;

		this->ProcessEvent( pfnSuicide, &Suicide_Parms, NULL );
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Vehicle.DisplayDebug" );

		AVehicle_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	void NotifyTeamChanged ()
	{
		static UFunction* pfnNotifyTeamChanged = NULL;

		if ( !pfnNotifyTeamChanged )
			pfnNotifyTeamChanged = UObject::FindObject< UFunction >( "Function Engine.Vehicle.NotifyTeamChanged" );

		AVehicle_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

		this->ProcessEvent( pfnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
	};

};

UClass* AVehicle::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif