/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ASVehicle.h
// Date: 06/16/2011 @ 05:19:39.999
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ASVehicle_execSetAllWheelParticleSystem_Parms
{
	void* NewSystem;
};

struct ASVehicle_execGetSVehicleDebug_Parms
{
	TArray< struct FString > DebugInfo; // CPF_OutParm
};

struct ASVehicle_execHermiteEval_Parms
{
	float Slip;
	float ReturnValue; // CPF_ReturnParm
};

struct ASVehicle_execDisplayWheelsDebug_Parms
{
	class AHUD* HUD;
	float YL;
};

struct ASVehicle_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct ASVehicle_execPostTeleport_Parms
{
	void* OutTeleporter;
};

struct ASVehicle_eventSuspensionHeavyShift_Parms
{
	float Delta;
};// FUNC_Event

struct ASVehicle_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent* HitComponent;
	class UPrimitiveComponent* OtherComponent;
	struct FCollisionImpactData RigidCollisionData; // CPF_OutParm
	int ContactIndex;
};// FUNC_Event

struct ASVehicle_execDrivingStatusChanged_Parms
{
};

struct ASVehicle_execVehiclePlayExitSound_Parms
{
};

struct ASVehicle_execVehiclePlayEnterSound_Parms
{
};

struct ASVehicle_execStopEngineSoundTimed_Parms
{
};

struct ASVehicle_execStopEngineSound_Parms
{
};

struct ASVehicle_execStartEngineSoundTimed_Parms
{
};

struct ASVehicle_execStartEngineSound_Parms
{
};

struct ASVehicle_execHasWheelsOnGround_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ASVehicle_execTryToDrive_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ASVehicle_execGetDefaultCameraMode_Parms
{
	class APlayerController* RequestedBy;
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ASVehicle_execCalcCamera_Parms
{
	float fDeltaTime;
	struct FVector out_CamLoc; // CPF_OutParm
	struct FRotator out_CamRot; // CPF_OutParm
	float out_FOV; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ASVehicle_execDied_Parms
{
	class AController* Killer;
	class UClass* DamageType;
	struct FVector HitLocation;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ASVehicle_execAddVelocity_Parms
{
	struct FVector NewVelocity;
	struct FVector HitLocation;
	class UClass* DamageType;
	struct FTraceHitInfo HitInfo;
};

struct ASVehicle_execInitVehicleRagdoll_Parms
{
	class USkeletalMesh* RagdollMesh;
	void* RagdollPhysAsset;
	struct FVector ActorMove;
	unsigned long bClearAnimTree : 1;
};// FUNC_Native

struct ASVehicle_execTakeRadiusDamage_Parms
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

struct ASVehicle_execStopVehicleSounds_Parms
{
};

struct ASVehicle_execTurnOff_Parms
{
};

struct ASVehicle_eventDestroyed_Parms
{
};// FUNC_Event

struct ASVehicle_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent* SkelComp;
};// FUNC_Event

struct ASVehicle_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct ASVehicle_execSetWheelCollision_Parms
{
	int WheelNum;
	unsigned long bCollision : 1;
};// FUNC_Final FUNC_Native

// (0x44C - 0x55C)
class ASVehicle : public AVehicle
{
public:
	void*                                              SimObj;                                      // 0x044C (0x0004)
	TArray< void* >                                    Wheels;                                      // 0x0450 (0x000C)
	struct FVector                                     COMOffset;                                   // 0x045C (0x000C)
	struct FVector                                     InertiaTensorMultiplier;                     // 0x0468 (0x000C)
	unsigned long                                      bStayUpright : 1;                            // 0x0474 (0x0004) [0x00000001]
	unsigned long                                      bUseSuspensionAxis : 1;                      // 0x0474 (0x0004) [0x00000002]
	unsigned long                                      bUpdateWheelShapes : 1;                      // 0x0474 (0x0004) [0x00000004]
	unsigned long                                      bVehicleOnGround : 1;                        // 0x0474 (0x0004) [0x00000008]
	unsigned long                                      bVehicleOnWater : 1;                         // 0x0474 (0x0004) [0x00000010]
	unsigned long                                      bIsInverted : 1;                             // 0x0474 (0x0004) [0x00000020]
	unsigned long                                      bChassisTouchingGround : 1;                  // 0x0474 (0x0004) [0x00000040]
	unsigned long                                      bWasChassisTouchingGroundLastTick : 1;       // 0x0474 (0x0004) [0x00000080]
	unsigned long                                      bCanFlip : 1;                                // 0x0474 (0x0004) [0x00000100]
	unsigned long                                      bFlipRight : 1;                              // 0x0474 (0x0004) [0x00000200]
	unsigned long                                      bIsUprighting : 1;                           // 0x0474 (0x0004) [0x00000400]
	unsigned long                                      bOutputHandbrake : 1;                        // 0x0474 (0x0004) [0x00000800]
	unsigned long                                      bHoldingDownHandbrake : 1;                   // 0x0474 (0x0004) [0x00001000]
	float                                              StayUprightRollResistAngle;                  // 0x0478 (0x0004)
	float                                              StayUprightPitchResistAngle;                 // 0x047C (0x0004)
	float                                              StayUprightStiffness;                        // 0x0480 (0x0004)
	float                                              StayUprightDamping;                          // 0x0484 (0x0004)
	void*                                              StayUprightConstraintSetup;                  // 0x0488 (0x0004)
	void*                                              StayUprightConstraintInstance;               // 0x048C (0x0004)
	float                                              HeavySuspensionShiftPercent;                 // 0x0490 (0x0004)
	float                                              MaxSpeed;                                    // 0x0494 (0x0004)
	float                                              MaxAngularVelocity;                          // 0x0498 (0x0004)
	float                                              TimeOffGround;                               // 0x049C (0x0004)
	float                                              UprightLiftStrength;                         // 0x04A0 (0x0004)
	float                                              UprightTorqueStrength;                       // 0x04A4 (0x0004)
	float                                              UprightTime;                                 // 0x04A8 (0x0004)
	float                                              UprightStartTime;                            // 0x04AC (0x0004)
	void*                                              EngineSound;                                 // 0x04B0 (0x0004)
	void*                                              SquealSound;                                 // 0x04B4 (0x0004)
	void*                                              CollisionSound;                              // 0x04B8 (0x0004)
	void*                                              EnterVehicleSound;                           // 0x04BC (0x0004)
	void*                                              ExitVehicleSound;                            // 0x04C0 (0x0004)
	float                                              CollisionIntervalSecs;                       // 0x04C4 (0x0004)
	float                                              SquealThreshold;                             // 0x04C8 (0x0004)
	float                                              SquealLatThreshold;                          // 0x04CC (0x0004)
	float                                              LatAngleVolumeMult;                          // 0x04D0 (0x0004)
	float                                              EngineStartOffsetSecs;                       // 0x04D4 (0x0004)
	float                                              EngineStopOffsetSecs;                        // 0x04D8 (0x0004)
	float                                              LastCollisionSoundTime;                      // 0x04DC (0x0004)
	float                                              OutputBrake;                                 // 0x04E0 (0x0004)
	float                                              OutputGas;                                   // 0x04E4 (0x0004)
	float                                              OutputSteering;                              // 0x04E8 (0x0004)
	float                                              OutputRise;                                  // 0x04EC (0x0004)
	float                                              ForwardVel;                                  // 0x04F0 (0x0004)
	int                                                NumPoweredWheels;                            // 0x04F4 (0x0004)
	struct FVector                                     BaseOffset;                                  // 0x04F8 (0x000C)
	float                                              CamDist;                                     // 0x0504 (0x0004)
	int                                                DriverViewPitch;                             // 0x0508 (0x0004)
	int                                                DriverViewYaw;                               // 0x050C (0x0004)
	struct FVehicleState                               VState;                                      // 0x0510 (0x0044)
	float                                              AngErrorAccumulator;                         // 0x0554 (0x0004)
	float                                              RadialImpulseScaling;                        // 0x0558 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SVehicle" );

		return ClassPointer;
	};

public:
	void SetAllWheelParticleSystem ( void* NewSystem )
	{
		static UFunction* pfnSetAllWheelParticleSystem = NULL;

		if ( !pfnSetAllWheelParticleSystem )
			pfnSetAllWheelParticleSystem = UObject::FindObject< UFunction >( "Function Engine.SVehicle.SetAllWheelParticleSystem" );

		ASVehicle_execSetAllWheelParticleSystem_Parms SetAllWheelParticleSystem_Parms;
		SetAllWheelParticleSystem_Parms.NewSystem = NewSystem;

		this->ProcessEvent( pfnSetAllWheelParticleSystem, &SetAllWheelParticleSystem_Parms, NULL );
	};

	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo )
	{
		static UFunction* pfnGetSVehicleDebug = NULL;

		if ( !pfnGetSVehicleDebug )
			pfnGetSVehicleDebug = UObject::FindObject< UFunction >( "Function Engine.SVehicle.GetSVehicleDebug" );

		ASVehicle_execGetSVehicleDebug_Parms GetSVehicleDebug_Parms;

		this->ProcessEvent( pfnGetSVehicleDebug, &GetSVehicleDebug_Parms, NULL );

		if ( DebugInfo )
			memcpy( DebugInfo, &GetSVehicleDebug_Parms.DebugInfo, 0xC ); // CPF_OutParm
	};

	float HermiteEval ( float Slip )
	{
		static UFunction* pfnHermiteEval = NULL;

		if ( !pfnHermiteEval )
			pfnHermiteEval = UObject::FindObject< UFunction >( "Function Engine.SVehicle.HermiteEval" );

		ASVehicle_execHermiteEval_Parms HermiteEval_Parms;
		HermiteEval_Parms.Slip = Slip;

		this->ProcessEvent( pfnHermiteEval, &HermiteEval_Parms, NULL );

		return HermiteEval_Parms.ReturnValue;
	};

	void DisplayWheelsDebug ( class AHUD* HUD, float YL )
	{
		static UFunction* pfnDisplayWheelsDebug = NULL;

		if ( !pfnDisplayWheelsDebug )
			pfnDisplayWheelsDebug = UObject::FindObject< UFunction >( "Function Engine.SVehicle.DisplayWheelsDebug" );

		ASVehicle_execDisplayWheelsDebug_Parms DisplayWheelsDebug_Parms;
		DisplayWheelsDebug_Parms.HUD = HUD;
		DisplayWheelsDebug_Parms.YL = YL;

		this->ProcessEvent( pfnDisplayWheelsDebug, &DisplayWheelsDebug_Parms, NULL );
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.SVehicle.DisplayDebug" );

		ASVehicle_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	void PostTeleport ( void* OutTeleporter )
	{
		static UFunction* pfnPostTeleport = NULL;

		if ( !pfnPostTeleport )
			pfnPostTeleport = UObject::FindObject< UFunction >( "Function Engine.SVehicle.PostTeleport" );

		ASVehicle_execPostTeleport_Parms PostTeleport_Parms;
		PostTeleport_Parms.OutTeleporter = OutTeleporter;

		this->ProcessEvent( pfnPostTeleport, &PostTeleport_Parms, NULL );
	};

	void eventSuspensionHeavyShift ( float Delta )
	{
		static UFunction* pfnSuspensionHeavyShift = NULL;

		if ( !pfnSuspensionHeavyShift )
			pfnSuspensionHeavyShift = UObject::FindObject< UFunction >( "Function Engine.SVehicle.SuspensionHeavyShift" );

		ASVehicle_eventSuspensionHeavyShift_Parms SuspensionHeavyShift_Parms;
		SuspensionHeavyShift_Parms.Delta = Delta;

		this->ProcessEvent( pfnSuspensionHeavyShift, &SuspensionHeavyShift_Parms, NULL );
	};

	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
	{
		static UFunction* pfnRigidBodyCollision = NULL;

		if ( !pfnRigidBodyCollision )
			pfnRigidBodyCollision = UObject::FindObject< UFunction >( "Function Engine.SVehicle.RigidBodyCollision" );

		ASVehicle_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
		RigidBodyCollision_Parms.HitComponent = HitComponent;
		RigidBodyCollision_Parms.OtherComponent = OtherComponent;
		RigidBodyCollision_Parms.ContactIndex = ContactIndex;

		this->ProcessEvent( pfnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

		if ( RigidCollisionData )
			memcpy( RigidCollisionData, &RigidBodyCollision_Parms.RigidCollisionData, 0x24 ); // CPF_OutParm
	};

	void DrivingStatusChanged ()
	{
		static UFunction* pfnDrivingStatusChanged = NULL;

		if ( !pfnDrivingStatusChanged )
			pfnDrivingStatusChanged = UObject::FindObject< UFunction >( "Function Engine.SVehicle.DrivingStatusChanged" );

		ASVehicle_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

		this->ProcessEvent( pfnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
	};

	void VehiclePlayExitSound ()
	{
		static UFunction* pfnVehiclePlayExitSound = NULL;

		if ( !pfnVehiclePlayExitSound )
			pfnVehiclePlayExitSound = UObject::FindObject< UFunction >( "Function Engine.SVehicle.VehiclePlayExitSound" );

		ASVehicle_execVehiclePlayExitSound_Parms VehiclePlayExitSound_Parms;

		this->ProcessEvent( pfnVehiclePlayExitSound, &VehiclePlayExitSound_Parms, NULL );
	};

	void VehiclePlayEnterSound ()
	{
		static UFunction* pfnVehiclePlayEnterSound = NULL;

		if ( !pfnVehiclePlayEnterSound )
			pfnVehiclePlayEnterSound = UObject::FindObject< UFunction >( "Function Engine.SVehicle.VehiclePlayEnterSound" );

		ASVehicle_execVehiclePlayEnterSound_Parms VehiclePlayEnterSound_Parms;

		this->ProcessEvent( pfnVehiclePlayEnterSound, &VehiclePlayEnterSound_Parms, NULL );
	};

	void StopEngineSoundTimed ()
	{
		static UFunction* pfnStopEngineSoundTimed = NULL;

		if ( !pfnStopEngineSoundTimed )
			pfnStopEngineSoundTimed = UObject::FindObject< UFunction >( "Function Engine.SVehicle.StopEngineSoundTimed" );

		ASVehicle_execStopEngineSoundTimed_Parms StopEngineSoundTimed_Parms;

		this->ProcessEvent( pfnStopEngineSoundTimed, &StopEngineSoundTimed_Parms, NULL );
	};

	void StopEngineSound ()
	{
		static UFunction* pfnStopEngineSound = NULL;

		if ( !pfnStopEngineSound )
			pfnStopEngineSound = UObject::FindObject< UFunction >( "Function Engine.SVehicle.StopEngineSound" );

		ASVehicle_execStopEngineSound_Parms StopEngineSound_Parms;

		this->ProcessEvent( pfnStopEngineSound, &StopEngineSound_Parms, NULL );
	};

	void StartEngineSoundTimed ()
	{
		static UFunction* pfnStartEngineSoundTimed = NULL;

		if ( !pfnStartEngineSoundTimed )
			pfnStartEngineSoundTimed = UObject::FindObject< UFunction >( "Function Engine.SVehicle.StartEngineSoundTimed" );

		ASVehicle_execStartEngineSoundTimed_Parms StartEngineSoundTimed_Parms;

		this->ProcessEvent( pfnStartEngineSoundTimed, &StartEngineSoundTimed_Parms, NULL );
	};

	void StartEngineSound ()
	{
		static UFunction* pfnStartEngineSound = NULL;

		if ( !pfnStartEngineSound )
			pfnStartEngineSound = UObject::FindObject< UFunction >( "Function Engine.SVehicle.StartEngineSound" );

		ASVehicle_execStartEngineSound_Parms StartEngineSound_Parms;

		this->ProcessEvent( pfnStartEngineSound, &StartEngineSound_Parms, NULL );
	};

	bool HasWheelsOnGround ()
	{
		static UFunction* pfnHasWheelsOnGround = NULL;

		if ( !pfnHasWheelsOnGround )
			pfnHasWheelsOnGround = UObject::FindObject< UFunction >( "Function Engine.SVehicle.HasWheelsOnGround" );

		ASVehicle_execHasWheelsOnGround_Parms HasWheelsOnGround_Parms;

		pfnHasWheelsOnGround->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnHasWheelsOnGround, &HasWheelsOnGround_Parms, NULL );
		pfnHasWheelsOnGround->FunctionFlags |= 0x400;

		return HasWheelsOnGround_Parms.ReturnValue;
	};

	bool TryToDrive ( class APawn* P )
	{
		static UFunction* pfnTryToDrive = NULL;

		if ( !pfnTryToDrive )
			pfnTryToDrive = UObject::FindObject< UFunction >( "Function Engine.SVehicle.TryToDrive" );

		ASVehicle_execTryToDrive_Parms TryToDrive_Parms;
		TryToDrive_Parms.P = P;

		this->ProcessEvent( pfnTryToDrive, &TryToDrive_Parms, NULL );

		return TryToDrive_Parms.ReturnValue;
	};

	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy )
	{
		static UFunction* pfnGetDefaultCameraMode = NULL;

		if ( !pfnGetDefaultCameraMode )
			pfnGetDefaultCameraMode = UObject::FindObject< UFunction >( "Function Engine.SVehicle.GetDefaultCameraMode" );

		ASVehicle_execGetDefaultCameraMode_Parms GetDefaultCameraMode_Parms;
		GetDefaultCameraMode_Parms.RequestedBy = RequestedBy;

		this->ProcessEvent( pfnGetDefaultCameraMode, &GetDefaultCameraMode_Parms, NULL );

		return GetDefaultCameraMode_Parms.ReturnValue;
	};

	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
	{
		static UFunction* pfnCalcCamera = NULL;

		if ( !pfnCalcCamera )
			pfnCalcCamera = UObject::FindObject< UFunction >( "Function Engine.SVehicle.CalcCamera" );

		ASVehicle_execCalcCamera_Parms CalcCamera_Parms;
		CalcCamera_Parms.fDeltaTime = fDeltaTime;

		this->ProcessEvent( pfnCalcCamera, &CalcCamera_Parms, NULL );

		if ( out_CamLoc )
			memcpy( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC ); // CPF_OutParm
		if ( out_CamRot )
			memcpy( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC ); // CPF_OutParm
		if ( out_FOV )
			*out_FOV = CalcCamera_Parms.out_FOV; // CPF_OutParm

		return CalcCamera_Parms.ReturnValue;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
	{
		static UFunction* pfnDied = NULL;

		if ( !pfnDied )
			pfnDied = UObject::FindObject< UFunction >( "Function Engine.SVehicle.Died" );

		ASVehicle_execDied_Parms Died_Parms;
		Died_Parms.Killer = Killer;
		Died_Parms.DamageType = DamageType;
		memcpy( &Died_Parms.HitLocation, &HitLocation, 0xC );

		this->ProcessEvent( pfnDied, &Died_Parms, NULL );

		return Died_Parms.ReturnValue;
	};

	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddVelocity = NULL;

		if ( !pfnAddVelocity )
			pfnAddVelocity = UObject::FindObject< UFunction >( "Function Engine.SVehicle.AddVelocity" );

		ASVehicle_execAddVelocity_Parms AddVelocity_Parms;
		memcpy( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
		memcpy( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
		AddVelocity_Parms.DamageType = DamageType;
		memcpy( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

		this->ProcessEvent( pfnAddVelocity, &AddVelocity_Parms, NULL );
	};

	void InitVehicleRagdoll ( class USkeletalMesh* RagdollMesh, void* RagdollPhysAsset, struct FVector ActorMove, unsigned long bClearAnimTree )
	{
		static UFunction* pfnInitVehicleRagdoll = NULL;

		if ( !pfnInitVehicleRagdoll )
			pfnInitVehicleRagdoll = UObject::FindObject< UFunction >( "Function Engine.SVehicle.InitVehicleRagdoll" );

		ASVehicle_execInitVehicleRagdoll_Parms InitVehicleRagdoll_Parms;
		InitVehicleRagdoll_Parms.RagdollMesh = RagdollMesh;
		InitVehicleRagdoll_Parms.RagdollPhysAsset = RagdollPhysAsset;
		memcpy( &InitVehicleRagdoll_Parms.ActorMove, &ActorMove, 0xC );
		InitVehicleRagdoll_Parms.bClearAnimTree = bClearAnimTree;

		pfnInitVehicleRagdoll->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitVehicleRagdoll, &InitVehicleRagdoll_Parms, NULL );
		pfnInitVehicleRagdoll->FunctionFlags |= 0x400;
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser )
	{
		static UFunction* pfnTakeRadiusDamage = NULL;

		if ( !pfnTakeRadiusDamage )
			pfnTakeRadiusDamage = UObject::FindObject< UFunction >( "Function Engine.SVehicle.TakeRadiusDamage" );

		ASVehicle_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
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

	void StopVehicleSounds ()
	{
		static UFunction* pfnStopVehicleSounds = NULL;

		if ( !pfnStopVehicleSounds )
			pfnStopVehicleSounds = UObject::FindObject< UFunction >( "Function Engine.SVehicle.StopVehicleSounds" );

		ASVehicle_execStopVehicleSounds_Parms StopVehicleSounds_Parms;

		this->ProcessEvent( pfnStopVehicleSounds, &StopVehicleSounds_Parms, NULL );
	};

	void TurnOff ()
	{
		static UFunction* pfnTurnOff = NULL;

		if ( !pfnTurnOff )
			pfnTurnOff = UObject::FindObject< UFunction >( "Function Engine.SVehicle.TurnOff" );

		ASVehicle_execTurnOff_Parms TurnOff_Parms;

		this->ProcessEvent( pfnTurnOff, &TurnOff_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.SVehicle.Destroyed" );

		ASVehicle_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
	{
		static UFunction* pfnPostInitAnimTree = NULL;

		if ( !pfnPostInitAnimTree )
			pfnPostInitAnimTree = UObject::FindObject< UFunction >( "Function Engine.SVehicle.PostInitAnimTree" );

		ASVehicle_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
		PostInitAnimTree_Parms.SkelComp = SkelComp;

		this->ProcessEvent( pfnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.SVehicle.PostBeginPlay" );

		ASVehicle_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void SetWheelCollision ( int WheelNum, unsigned long bCollision )
	{
		static UFunction* pfnSetWheelCollision = NULL;

		if ( !pfnSetWheelCollision )
			pfnSetWheelCollision = UObject::FindObject< UFunction >( "Function Engine.SVehicle.SetWheelCollision" );

		ASVehicle_execSetWheelCollision_Parms SetWheelCollision_Parms;
		SetWheelCollision_Parms.WheelNum = WheelNum;
		SetWheelCollision_Parms.bCollision = bCollision;

		pfnSetWheelCollision->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetWheelCollision, &SetWheelCollision_Parms, NULL );
		pfnSetWheelCollision->FunctionFlags |= 0x400;
	};

};

UClass* ASVehicle::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif