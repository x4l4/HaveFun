/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_Rocket.h
// Date: 06/16/2011 @ 05:19:41.825
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EMyVelocityPhysicsState
{
	MVPS_Default = 0,
	MVPS_MovingToFlyRay = 1,
	MVPS_User = 2,
	MVPS_MAX = 3
};

struct ACCProj_Rocket_execRemoveNaN_Parms
{
	struct FVector V;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_Rocket_execPerformManualNativePhysics_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ACCProj_Rocket_execUpdateCollision_Parms
{
};

struct ACCProj_Rocket_execSetCollisionSpawnTime_Parms
{
};

struct ACCProj_Rocket_execUpdateCalcCurrentDynamicSpeed_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Rocket_execCalcLocationToFlyRay_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Rocket_execCalcXToFlyRay_Parms
{
	struct FVector X;
	struct FVector ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Rocket_execMovingToFlyRay_PostPhysicsIteration_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Rocket_execMovingToFlyRay_UpdateMyVelocity_Parms
{
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Rocket_execSetFlyRayInfo_Parms
{
	struct FVector InFlyRayLocation;
	struct FVector InFlyRayDirection;
};// FUNC_Final

struct ACCProj_Rocket_execUserPostPhysicsIteration_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Rocket_execPostPhysicsIteration_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ACCProj_Rocket_execUserPostProcessMyVelocity_Parms
{
};

struct ACCProj_Rocket_execPostProcessMyVelocity_Parms
{
};// FUNC_Final

struct ACCProj_Rocket_execProcessMyVelocity_Parms
{
	float DeltaTime;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_Rocket_execUserUpdateMyVelocity_Parms
{
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Rocket_execUpdateMyVelocity_Parms
{
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_Rocket_execCalculatePhysicsTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_Rocket_eventPerformMyVelocityPhysicsInternal_Parms
{
	float DeltaTime;
};// FUNC_Final FUNC_Event

struct ACCProj_Rocket_execPerformMyVelocityPhysics_Parms
{
	float DeltaTime;
};// FUNC_Native

struct ACCProj_Rocket_execTickMyVelocityPhysicsInternal_Parms
{
	float DeltaTime;
};// FUNC_Final

struct ACCProj_Rocket_execTickMyVelocityPhysics_Parms
{
	float DeltaTime;
};// FUNC_Final

struct ACCProj_Rocket_execOnUserMyVelocityPhysicsStarted_Parms
{
};

struct ACCProj_Rocket_execClientStartUserMyVelocityPhysics_Parms
{
};// FUNC_Final

struct ACCProj_Rocket_execStartUserMyVelocityPhysics_Parms
{
};// FUNC_Final

struct ACCProj_Rocket_execComputeClientStartTimeFromServer_Parms
{
	float ServerStartTime;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ACCProj_Rocket_execClientStartMyVelocityPhysics_Parms
{
};// FUNC_Final

struct ACCProj_Rocket_execStartMyVelocityPhysics_Parms
{
	struct FVector InFlyRayLocation;
	struct FVector InFlyRayDirection;
};// FUNC_Final

struct ACCProj_Rocket_execConditionalStartMyVelocityPhysics_Parms
{
};// FUNC_Final

struct ACCProj_Rocket_eventReplicatedEvent_Parms
{
	struct FName VarName;
};// FUNC_Event

struct ACCProj_Rocket_execTickLocationDebug_Parms
{
	float Delta;
};

struct ACCProj_Rocket_execDoTick_Parms
{
	float DeltaTime;
};

struct ACCProj_Rocket_eventTick_Parms
{
	float Delta;
};// FUNC_Event

struct ACCProj_Rocket_execPostInit_Parms
{
};

struct ACCProj_Rocket_execPostBeginPlay_Parms
{
};

// (0x358 - 0x3C0)
class ACCProj_Rocket : public ACCProjectile
{
public:
	unsigned long                                      bDisableDefaultPhysics : 1;                  // 0x0358 (0x0004) [0x00000001]
	struct FMyVelocityPhysicsInfo                      PhysicsInfo;                                 // 0x035C (0x0030)
	float                                              MovingToFlyRayTime;                          // 0x038C (0x0004)
	int                                                MaxPhysicsIterations;                        // 0x0390 (0x0004)
	float                                              MyVelocityPhysics_DeltaTimeAccumulator;      // 0x0394 (0x0004)
	float                                              CurrentMyVPhTime;                            // 0x0398 (0x0004)
	struct FClientMyVelocityPhysicsInfo                ClientPhysicsInfo;                           // 0x039C (0x000C)
	float                                              SpawnTime4CollisionFunction;                 // 0x03A8 (0x0004)
	float                                              CollisionFunctionMinPerc;                    // 0x03AC (0x0004)
	float                                              CollisionFunctionTime;                       // 0x03B0 (0x0004)
	float                                              DynamicCurrentSpeed;                         // 0x03B4 (0x0004)
	float                                              ReplicatedDynamicCurrentSpeed;               // 0x03B8 (0x0004)
	float                                              DynamicCurrentSpeed_Time;                    // 0x03BC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_Rocket" );

		return ClassPointer;
	};

public:
	struct FVector RemoveNaN ( struct FVector V )
	{
		static UFunction* pfnRemoveNaN = NULL;

		if ( !pfnRemoveNaN )
			pfnRemoveNaN = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.RemoveNaN" );

		ACCProj_Rocket_execRemoveNaN_Parms RemoveNaN_Parms;
		memcpy( &RemoveNaN_Parms.V, &V, 0xC );

		pfnRemoveNaN->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRemoveNaN, &RemoveNaN_Parms, NULL );
		pfnRemoveNaN->FunctionFlags |= 0x400;

		return RemoveNaN_Parms.ReturnValue;
	};

	bool PerformManualNativePhysics ( float DeltaTime )
	{
		static UFunction* pfnPerformManualNativePhysics = NULL;

		if ( !pfnPerformManualNativePhysics )
			pfnPerformManualNativePhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PerformManualNativePhysics" );

		ACCProj_Rocket_execPerformManualNativePhysics_Parms PerformManualNativePhysics_Parms;
		PerformManualNativePhysics_Parms.DeltaTime = DeltaTime;

		pfnPerformManualNativePhysics->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPerformManualNativePhysics, &PerformManualNativePhysics_Parms, NULL );
		pfnPerformManualNativePhysics->FunctionFlags |= 0x400;

		return PerformManualNativePhysics_Parms.ReturnValue;
	};

	void UpdateCollision ()
	{
		static UFunction* pfnUpdateCollision = NULL;

		if ( !pfnUpdateCollision )
			pfnUpdateCollision = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UpdateCollision" );

		ACCProj_Rocket_execUpdateCollision_Parms UpdateCollision_Parms;

		this->ProcessEvent( pfnUpdateCollision, &UpdateCollision_Parms, NULL );
	};

	void SetCollisionSpawnTime ()
	{
		static UFunction* pfnSetCollisionSpawnTime = NULL;

		if ( !pfnSetCollisionSpawnTime )
			pfnSetCollisionSpawnTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.SetCollisionSpawnTime" );

		ACCProj_Rocket_execSetCollisionSpawnTime_Parms SetCollisionSpawnTime_Parms;

		this->ProcessEvent( pfnSetCollisionSpawnTime, &SetCollisionSpawnTime_Parms, NULL );
	};

	bool UpdateCalcCurrentDynamicSpeed ( float DeltaTime )
	{
		static UFunction* pfnUpdateCalcCurrentDynamicSpeed = NULL;

		if ( !pfnUpdateCalcCurrentDynamicSpeed )
			pfnUpdateCalcCurrentDynamicSpeed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UpdateCalcCurrentDynamicSpeed" );

		ACCProj_Rocket_execUpdateCalcCurrentDynamicSpeed_Parms UpdateCalcCurrentDynamicSpeed_Parms;
		UpdateCalcCurrentDynamicSpeed_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateCalcCurrentDynamicSpeed, &UpdateCalcCurrentDynamicSpeed_Parms, NULL );

		return UpdateCalcCurrentDynamicSpeed_Parms.ReturnValue;
	};

	struct FVector CalcLocationToFlyRay ()
	{
		static UFunction* pfnCalcLocationToFlyRay = NULL;

		if ( !pfnCalcLocationToFlyRay )
			pfnCalcLocationToFlyRay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.CalcLocationToFlyRay" );

		ACCProj_Rocket_execCalcLocationToFlyRay_Parms CalcLocationToFlyRay_Parms;

		this->ProcessEvent( pfnCalcLocationToFlyRay, &CalcLocationToFlyRay_Parms, NULL );

		return CalcLocationToFlyRay_Parms.ReturnValue;
	};

	struct FVector CalcXToFlyRay ( struct FVector X )
	{
		static UFunction* pfnCalcXToFlyRay = NULL;

		if ( !pfnCalcXToFlyRay )
			pfnCalcXToFlyRay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.CalcXToFlyRay" );

		ACCProj_Rocket_execCalcXToFlyRay_Parms CalcXToFlyRay_Parms;
		memcpy( &CalcXToFlyRay_Parms.X, &X, 0xC );

		this->ProcessEvent( pfnCalcXToFlyRay, &CalcXToFlyRay_Parms, NULL );

		return CalcXToFlyRay_Parms.ReturnValue;
	};

	bool MovingToFlyRay_PostPhysicsIteration ()
	{
		static UFunction* pfnMovingToFlyRay_PostPhysicsIteration = NULL;

		if ( !pfnMovingToFlyRay_PostPhysicsIteration )
			pfnMovingToFlyRay_PostPhysicsIteration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.MovingToFlyRay_PostPhysicsIteration" );

		ACCProj_Rocket_execMovingToFlyRay_PostPhysicsIteration_Parms MovingToFlyRay_PostPhysicsIteration_Parms;

		this->ProcessEvent( pfnMovingToFlyRay_PostPhysicsIteration, &MovingToFlyRay_PostPhysicsIteration_Parms, NULL );

		return MovingToFlyRay_PostPhysicsIteration_Parms.ReturnValue;
	};

	float MovingToFlyRay_UpdateMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnMovingToFlyRay_UpdateMyVelocity = NULL;

		if ( !pfnMovingToFlyRay_UpdateMyVelocity )
			pfnMovingToFlyRay_UpdateMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.MovingToFlyRay_UpdateMyVelocity" );

		ACCProj_Rocket_execMovingToFlyRay_UpdateMyVelocity_Parms MovingToFlyRay_UpdateMyVelocity_Parms;
		MovingToFlyRay_UpdateMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnMovingToFlyRay_UpdateMyVelocity, &MovingToFlyRay_UpdateMyVelocity_Parms, NULL );

		return MovingToFlyRay_UpdateMyVelocity_Parms.ReturnValue;
	};

	void SetFlyRayInfo ( struct FVector InFlyRayLocation, struct FVector InFlyRayDirection )
	{
		static UFunction* pfnSetFlyRayInfo = NULL;

		if ( !pfnSetFlyRayInfo )
			pfnSetFlyRayInfo = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.SetFlyRayInfo" );

		ACCProj_Rocket_execSetFlyRayInfo_Parms SetFlyRayInfo_Parms;
		memcpy( &SetFlyRayInfo_Parms.InFlyRayLocation, &InFlyRayLocation, 0xC );
		memcpy( &SetFlyRayInfo_Parms.InFlyRayDirection, &InFlyRayDirection, 0xC );

		this->ProcessEvent( pfnSetFlyRayInfo, &SetFlyRayInfo_Parms, NULL );
	};

	bool UserPostPhysicsIteration ()
	{
		static UFunction* pfnUserPostPhysicsIteration = NULL;

		if ( !pfnUserPostPhysicsIteration )
			pfnUserPostPhysicsIteration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UserPostPhysicsIteration" );

		ACCProj_Rocket_execUserPostPhysicsIteration_Parms UserPostPhysicsIteration_Parms;

		this->ProcessEvent( pfnUserPostPhysicsIteration, &UserPostPhysicsIteration_Parms, NULL );

		return UserPostPhysicsIteration_Parms.ReturnValue;
	};

	bool PostPhysicsIteration ()
	{
		static UFunction* pfnPostPhysicsIteration = NULL;

		if ( !pfnPostPhysicsIteration )
			pfnPostPhysicsIteration = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PostPhysicsIteration" );

		ACCProj_Rocket_execPostPhysicsIteration_Parms PostPhysicsIteration_Parms;

		this->ProcessEvent( pfnPostPhysicsIteration, &PostPhysicsIteration_Parms, NULL );

		return PostPhysicsIteration_Parms.ReturnValue;
	};

	void UserPostProcessMyVelocity ()
	{
		static UFunction* pfnUserPostProcessMyVelocity = NULL;

		if ( !pfnUserPostProcessMyVelocity )
			pfnUserPostProcessMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UserPostProcessMyVelocity" );

		ACCProj_Rocket_execUserPostProcessMyVelocity_Parms UserPostProcessMyVelocity_Parms;

		this->ProcessEvent( pfnUserPostProcessMyVelocity, &UserPostProcessMyVelocity_Parms, NULL );
	};

	void PostProcessMyVelocity ()
	{
		static UFunction* pfnPostProcessMyVelocity = NULL;

		if ( !pfnPostProcessMyVelocity )
			pfnPostProcessMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PostProcessMyVelocity" );

		ACCProj_Rocket_execPostProcessMyVelocity_Parms PostProcessMyVelocity_Parms;

		this->ProcessEvent( pfnPostProcessMyVelocity, &PostProcessMyVelocity_Parms, NULL );
	};

	bool ProcessMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnProcessMyVelocity = NULL;

		if ( !pfnProcessMyVelocity )
			pfnProcessMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ProcessMyVelocity" );

		ACCProj_Rocket_execProcessMyVelocity_Parms ProcessMyVelocity_Parms;
		ProcessMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessMyVelocity, &ProcessMyVelocity_Parms, NULL );

		return ProcessMyVelocity_Parms.ReturnValue;
	};

	float UserUpdateMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnUserUpdateMyVelocity = NULL;

		if ( !pfnUserUpdateMyVelocity )
			pfnUserUpdateMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UserUpdateMyVelocity" );

		ACCProj_Rocket_execUserUpdateMyVelocity_Parms UserUpdateMyVelocity_Parms;
		UserUpdateMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUserUpdateMyVelocity, &UserUpdateMyVelocity_Parms, NULL );

		return UserUpdateMyVelocity_Parms.ReturnValue;
	};

	float UpdateMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnUpdateMyVelocity = NULL;

		if ( !pfnUpdateMyVelocity )
			pfnUpdateMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.UpdateMyVelocity" );

		ACCProj_Rocket_execUpdateMyVelocity_Parms UpdateMyVelocity_Parms;
		UpdateMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateMyVelocity, &UpdateMyVelocity_Parms, NULL );

		return UpdateMyVelocity_Parms.ReturnValue;
	};

	float CalculatePhysicsTime ()
	{
		static UFunction* pfnCalculatePhysicsTime = NULL;

		if ( !pfnCalculatePhysicsTime )
			pfnCalculatePhysicsTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.CalculatePhysicsTime" );

		ACCProj_Rocket_execCalculatePhysicsTime_Parms CalculatePhysicsTime_Parms;

		this->ProcessEvent( pfnCalculatePhysicsTime, &CalculatePhysicsTime_Parms, NULL );

		return CalculatePhysicsTime_Parms.ReturnValue;
	};

	void eventPerformMyVelocityPhysicsInternal ( float DeltaTime )
	{
		static UFunction* pfnPerformMyVelocityPhysicsInternal = NULL;

		if ( !pfnPerformMyVelocityPhysicsInternal )
			pfnPerformMyVelocityPhysicsInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PerformMyVelocityPhysicsInternal" );

		ACCProj_Rocket_eventPerformMyVelocityPhysicsInternal_Parms PerformMyVelocityPhysicsInternal_Parms;
		PerformMyVelocityPhysicsInternal_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPerformMyVelocityPhysicsInternal, &PerformMyVelocityPhysicsInternal_Parms, NULL );
	};

	void PerformMyVelocityPhysics ( float DeltaTime )
	{
		static UFunction* pfnPerformMyVelocityPhysics = NULL;

		if ( !pfnPerformMyVelocityPhysics )
			pfnPerformMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PerformMyVelocityPhysics" );

		ACCProj_Rocket_execPerformMyVelocityPhysics_Parms PerformMyVelocityPhysics_Parms;
		PerformMyVelocityPhysics_Parms.DeltaTime = DeltaTime;

		pfnPerformMyVelocityPhysics->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPerformMyVelocityPhysics, &PerformMyVelocityPhysics_Parms, NULL );
		pfnPerformMyVelocityPhysics->FunctionFlags |= 0x400;
	};

	void TickMyVelocityPhysicsInternal ( float DeltaTime )
	{
		static UFunction* pfnTickMyVelocityPhysicsInternal = NULL;

		if ( !pfnTickMyVelocityPhysicsInternal )
			pfnTickMyVelocityPhysicsInternal = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.TickMyVelocityPhysicsInternal" );

		ACCProj_Rocket_execTickMyVelocityPhysicsInternal_Parms TickMyVelocityPhysicsInternal_Parms;
		TickMyVelocityPhysicsInternal_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickMyVelocityPhysicsInternal, &TickMyVelocityPhysicsInternal_Parms, NULL );
	};

	void TickMyVelocityPhysics ( float DeltaTime )
	{
		static UFunction* pfnTickMyVelocityPhysics = NULL;

		if ( !pfnTickMyVelocityPhysics )
			pfnTickMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.TickMyVelocityPhysics" );

		ACCProj_Rocket_execTickMyVelocityPhysics_Parms TickMyVelocityPhysics_Parms;
		TickMyVelocityPhysics_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTickMyVelocityPhysics, &TickMyVelocityPhysics_Parms, NULL );
	};

	void OnUserMyVelocityPhysicsStarted ()
	{
		static UFunction* pfnOnUserMyVelocityPhysicsStarted = NULL;

		if ( !pfnOnUserMyVelocityPhysicsStarted )
			pfnOnUserMyVelocityPhysicsStarted = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.OnUserMyVelocityPhysicsStarted" );

		ACCProj_Rocket_execOnUserMyVelocityPhysicsStarted_Parms OnUserMyVelocityPhysicsStarted_Parms;

		this->ProcessEvent( pfnOnUserMyVelocityPhysicsStarted, &OnUserMyVelocityPhysicsStarted_Parms, NULL );
	};

	void ClientStartUserMyVelocityPhysics ()
	{
		static UFunction* pfnClientStartUserMyVelocityPhysics = NULL;

		if ( !pfnClientStartUserMyVelocityPhysics )
			pfnClientStartUserMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ClientStartUserMyVelocityPhysics" );

		ACCProj_Rocket_execClientStartUserMyVelocityPhysics_Parms ClientStartUserMyVelocityPhysics_Parms;

		this->ProcessEvent( pfnClientStartUserMyVelocityPhysics, &ClientStartUserMyVelocityPhysics_Parms, NULL );
	};

	void StartUserMyVelocityPhysics ()
	{
		static UFunction* pfnStartUserMyVelocityPhysics = NULL;

		if ( !pfnStartUserMyVelocityPhysics )
			pfnStartUserMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.StartUserMyVelocityPhysics" );

		ACCProj_Rocket_execStartUserMyVelocityPhysics_Parms StartUserMyVelocityPhysics_Parms;

		this->ProcessEvent( pfnStartUserMyVelocityPhysics, &StartUserMyVelocityPhysics_Parms, NULL );
	};

	float ComputeClientStartTimeFromServer ( float ServerStartTime )
	{
		static UFunction* pfnComputeClientStartTimeFromServer = NULL;

		if ( !pfnComputeClientStartTimeFromServer )
			pfnComputeClientStartTimeFromServer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ComputeClientStartTimeFromServer" );

		ACCProj_Rocket_execComputeClientStartTimeFromServer_Parms ComputeClientStartTimeFromServer_Parms;
		ComputeClientStartTimeFromServer_Parms.ServerStartTime = ServerStartTime;

		this->ProcessEvent( pfnComputeClientStartTimeFromServer, &ComputeClientStartTimeFromServer_Parms, NULL );

		return ComputeClientStartTimeFromServer_Parms.ReturnValue;
	};

	void ClientStartMyVelocityPhysics ()
	{
		static UFunction* pfnClientStartMyVelocityPhysics = NULL;

		if ( !pfnClientStartMyVelocityPhysics )
			pfnClientStartMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ClientStartMyVelocityPhysics" );

		ACCProj_Rocket_execClientStartMyVelocityPhysics_Parms ClientStartMyVelocityPhysics_Parms;

		this->ProcessEvent( pfnClientStartMyVelocityPhysics, &ClientStartMyVelocityPhysics_Parms, NULL );
	};

	void StartMyVelocityPhysics ( struct FVector InFlyRayLocation, struct FVector InFlyRayDirection )
	{
		static UFunction* pfnStartMyVelocityPhysics = NULL;

		if ( !pfnStartMyVelocityPhysics )
			pfnStartMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.StartMyVelocityPhysics" );

		ACCProj_Rocket_execStartMyVelocityPhysics_Parms StartMyVelocityPhysics_Parms;
		memcpy( &StartMyVelocityPhysics_Parms.InFlyRayLocation, &InFlyRayLocation, 0xC );
		memcpy( &StartMyVelocityPhysics_Parms.InFlyRayDirection, &InFlyRayDirection, 0xC );

		this->ProcessEvent( pfnStartMyVelocityPhysics, &StartMyVelocityPhysics_Parms, NULL );
	};

	void ConditionalStartMyVelocityPhysics ()
	{
		static UFunction* pfnConditionalStartMyVelocityPhysics = NULL;

		if ( !pfnConditionalStartMyVelocityPhysics )
			pfnConditionalStartMyVelocityPhysics = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ConditionalStartMyVelocityPhysics" );

		ACCProj_Rocket_execConditionalStartMyVelocityPhysics_Parms ConditionalStartMyVelocityPhysics_Parms;

		this->ProcessEvent( pfnConditionalStartMyVelocityPhysics, &ConditionalStartMyVelocityPhysics_Parms, NULL );
	};

	void eventReplicatedEvent ( struct FName VarName )
	{
		static UFunction* pfnReplicatedEvent = NULL;

		if ( !pfnReplicatedEvent )
			pfnReplicatedEvent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.ReplicatedEvent" );

		ACCProj_Rocket_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
		memcpy( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

		this->ProcessEvent( pfnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
	};

	void TickLocationDebug ( float Delta )
	{
		static UFunction* pfnTickLocationDebug = NULL;

		if ( !pfnTickLocationDebug )
			pfnTickLocationDebug = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.TickLocationDebug" );

		ACCProj_Rocket_execTickLocationDebug_Parms TickLocationDebug_Parms;
		TickLocationDebug_Parms.Delta = Delta;

		this->ProcessEvent( pfnTickLocationDebug, &TickLocationDebug_Parms, NULL );
	};

	void DoTick ( float DeltaTime )
	{
		static UFunction* pfnDoTick = NULL;

		if ( !pfnDoTick )
			pfnDoTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.DoTick" );

		ACCProj_Rocket_execDoTick_Parms DoTick_Parms;
		DoTick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnDoTick, &DoTick_Parms, NULL );
	};

	void eventTick ( float Delta )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.Tick" );

		ACCProj_Rocket_eventTick_Parms Tick_Parms;
		Tick_Parms.Delta = Delta;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void PostInit ()
	{
		static UFunction* pfnPostInit = NULL;

		if ( !pfnPostInit )
			pfnPostInit = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PostInit" );

		ACCProj_Rocket_execPostInit_Parms PostInit_Parms;

		this->ProcessEvent( pfnPostInit, &PostInit_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_Rocket.PostBeginPlay" );

		ACCProj_Rocket_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCProj_Rocket::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif