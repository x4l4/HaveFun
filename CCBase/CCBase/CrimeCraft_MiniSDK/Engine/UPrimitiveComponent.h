/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UPrimitiveComponent.h
// Date: 06/16/2011 @ 05:19:39.604
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ERadialImpulseFalloff
{
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

enum ERBCollisionChannel
{
	RBCC_Default = 0,
	RBCC_Nothing = 1,
	RBCC_Pawn = 2,
	RBCC_Vehicle = 3,
	RBCC_Water = 4,
	RBCC_GameplayPhysics = 5,
	RBCC_EffectPhysics = 6,
	RBCC_Untitled1 = 7,
	RBCC_Untitled2 = 8,
	RBCC_Untitled3 = 9,
	RBCC_Untitled4 = 10,
	RBCC_Cloth = 11,
	RBCC_FluidDrain = 12,
	RBCC_SoftBody = 13,
	RBCC_FracturedMeshPart = 14,
	RBCC_BlockingVolume = 15,
	RBCC_DeadPawn = 16,
	RBCC_MAX = 17
};

struct UPrimitiveComponent_execGetRotation_Parms
{
	struct FRotator ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execGetPosition_Parms
{
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UPrimitiveComponent_execSetAbsolute_Parms
{
	unsigned long NewAbsoluteTranslation : 1;
	unsigned long NewAbsoluteRotation : 1;
	unsigned long NewAbsoluteScale : 1;
};// FUNC_Native

struct UPrimitiveComponent_execSetScale3D_Parms
{
	struct FVector NewScale3D;
};// FUNC_Native

struct UPrimitiveComponent_execSetScale_Parms
{
	float NewScale;
};// FUNC_Native

struct UPrimitiveComponent_execSetRotation_Parms
{
	struct FRotator NewRotation;
};// FUNC_Native

struct UPrimitiveComponent_execSetTranslation_Parms
{
	struct FVector NewTranslation;
};// FUNC_Native

struct UPrimitiveComponent_execSetActorCollision_Parms
{
	unsigned long NewCollideActors : 1;
	unsigned long NewBlockActors : 1;
	unsigned long NewAlwaysCheckCollision : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetTraceBlocking_Parms
{
	unsigned long NewBlockZeroExtent : 1;
	unsigned long NewBlockNonZeroExtent : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetViewOwnerDepthPriorityGroup_Parms
{
	unsigned long bNewUseViewOwnerDepthPriorityGroup : 1;
	unsigned char NewViewOwnerDepthPriorityGroup;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetDepthPriorityGroup_Parms
{
	unsigned char NewDepthPriorityGroup;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetLightingChannels_Parms
{
	struct FLightingChannelContainer NewLightingChannels;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetCullDistance_Parms
{
	float NewCullDistance;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetLightEnvironment_Parms
{
	void* NewLightEnvironment;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetShadowParent_Parms
{
	class UPrimitiveComponent* NewShadowParent;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetIgnoreOwnerHidden_Parms
{
	unsigned long bNewIgnoreOwnerHidden : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetOnlyOwnerSee_Parms
{
	unsigned long bNewOnlyOwnerSee : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetOwnerNoSee_Parms
{
	unsigned long bNewOwnerNoSee : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetHidden_Parms
{
	unsigned long NewHidden : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBDominanceGroup_Parms
{
	unsigned char InDomGroup;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execGetRootBodyInstance_Parms
{
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetPhysMaterialOverride_Parms
{
	void* NewPhysMaterial;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execInitRBPhys_Parms
{
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetNotifyRigidBodyCollision_Parms
{
	unsigned long bNewNotifyRigidBodyCollision : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBChannel_Parms
{
	unsigned char Channel;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBCollidesWithChannel_Parms
{
	unsigned char Channel;
	unsigned long bNewCollides : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetBlockRigidBody_Parms
{
	unsigned long bNewBlockRigidBody : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execRigidBodyIsAwake_Parms
{
	struct FName BoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execPutRigidBodyToSleep_Parms
{
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execWakeRigidBody_Parms
{
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBRotation_Parms
{
	struct FRotator NewRot;
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBPosition_Parms
{
	struct FVector NewPos;
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execRetardRBLinearVelocity_Parms
{
	struct FVector RetardDir;
	float VelScale;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBAngularVelocity_Parms
{
	struct FVector NewAngVel;
	unsigned long bAddToCurrent : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execSetRBLinearVelocity_Parms
{
	struct FVector NewVel;
	unsigned long bAddToCurrent : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execAddTorque_Parms
{
	struct FVector Torque;
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execAddRadialForce_Parms
{
	struct FVector Origin;
	float Radius;
	float Strength;
	unsigned char Falloff;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execAddForce_Parms
{
	struct FVector Force;
	struct FVector Position;
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execAddRadialImpulse_Parms
{
	struct FVector Origin;
	float Radius;
	float Strength;
	unsigned char Falloff;
	unsigned long bVelChange : 1;
};// FUNC_Final FUNC_Native

struct UPrimitiveComponent_execAddImpulse_Parms
{
	struct FVector Impulse;
	struct FVector Position;
	struct FName BoneName;
	unsigned long bVelChange : 1;
};// FUNC_Final FUNC_Native

// (0x55 - 0x1CC)
class UPrimitiveComponent : public UActorComponent
{
public:
	struct FPointer                                    SceneInfo;                                   // 0x0058 (0x0004)
	int                                                DetachFence;                                 // 0x005C (0x0004)
	float                                              LocalToWorldDeterminant;                     // 0x0060 (0x0004)
	unsigned char                                      unknown_data14[ 12 ];                        // 0x0064 (0x000C)
	struct FMatrix                                     LocalToWorld;                                // 0x0070 (0x0040)
	int                                                MotionBlurInfoIndex;                         // 0x00B0 (0x0004)
	TArray< struct FPointer >                          DecalList;                                   // 0x00B4 (0x000C)
	TArray< void* >                                    DecalsToReattach;                            // 0x00C0 (0x000C)
	int                                                Tag;                                         // 0x00CC (0x0004)
	class UPrimitiveComponent*                         ShadowParent;                                // 0x00D0 (0x0004)
	void*                                              FogVolumeComponent;                          // 0x00D4 (0x0004)
	struct FBoxSphereBounds                            Bounds;                                      // 0x00D8 (0x001C)
	void*                                              LightEnvironment;                            // 0x00F4 (0x0004)
	void*                                              PreviousLightEnvironment;                    // 0x00F8 (0x0004)
	float                                              MinDrawDistance;                             // 0x00FC (0x0004)
	float                                              MaxDrawDistance;                             // 0x0100 (0x0004)
	float                                              CachedMaxDrawDistance;                       // 0x0104 (0x0004)
	float                                              CullDistance;                                // 0x0108 (0x0004)
	float                                              CachedCullDistance;                          // 0x010C (0x0004)
	unsigned char                                      DepthPriorityGroup;                          // 0x0110 (0x0001)
	unsigned char                                      ViewOwnerDepthPriorityGroup;                 // 0x0111 (0x0001)
	unsigned char                                      DetailMode;                                  // 0x0112 (0x0001)
	float                                              MotionBlurScale;                             // 0x0114 (0x0004)
	unsigned long                                      bUseViewOwnerDepthPriorityGroup : 1;         // 0x0118 (0x0004) [0x00000001]
	unsigned long                                      bAllowCullDistanceVolume : 1;                // 0x0118 (0x0004) [0x00000002]
	unsigned long                                      HiddenGame : 1;                              // 0x0118 (0x0004) [0x00000004]
	unsigned long                                      HiddenEditor : 1;                            // 0x0118 (0x0004) [0x00000008]
	unsigned long                                      bOwnerNoSee : 1;                             // 0x0118 (0x0004) [0x00000010]
	unsigned long                                      bOnlyOwnerSee : 1;                           // 0x0118 (0x0004) [0x00000020]
	unsigned long                                      bIgnoreOwnerHidden : 1;                      // 0x0118 (0x0004) [0x00000040]
	unsigned long                                      bUseAsOccluder : 1;                          // 0x0118 (0x0004) [0x00000080]
	unsigned long                                      bAllowApproximateOcclusion : 1;              // 0x0118 (0x0004) [0x00000100]
	unsigned long                                      bFirstFrameOcclusion : 1;                    // 0x0118 (0x0004) [0x00000200]
	unsigned long                                      bIgnoreNearPlaneIntersection : 1;            // 0x0118 (0x0004) [0x00000400]
	unsigned long                                      bSelectable : 1;                             // 0x0118 (0x0004) [0x00000800]
	unsigned long                                      bForceMipStreaming : 1;                      // 0x0118 (0x0004) [0x00001000]
	unsigned long                                      bAcceptsDecals : 1;                          // 0x0118 (0x0004) [0x00002000]
	unsigned long                                      bAcceptsDecalsDuringGameplay : 1;            // 0x0118 (0x0004) [0x00004000]
	unsigned long                                      bAcceptsStaticDecals : 1;                    // 0x0118 (0x0004) [0x00008000]
	unsigned long                                      bAcceptsDynamicDecals : 1;                   // 0x0118 (0x0004) [0x00010000]
	unsigned long                                      bIsRefreshingDecals : 1;                     // 0x0118 (0x0004) [0x00020000]
	unsigned long                                      bAllowDecalAutomaticReAttach : 1;            // 0x0118 (0x0004) [0x00040000]
	unsigned long                                      bAcceptsFoliage : 1;                         // 0x0118 (0x0004) [0x00080000]
	int                                                TranslucencySortPriority;                    // 0x011C (0x0004)
	unsigned long                                      CastShadow : 1;                              // 0x0120 (0x0004) [0x00000001]
	unsigned long                                      bForceDirectLightMap : 1;                    // 0x0120 (0x0004) [0x00000002]
	unsigned long                                      bCastDynamicShadow : 1;                      // 0x0120 (0x0004) [0x00000004]
	unsigned long                                      bSelfShadowOnly : 1;                         // 0x0120 (0x0004) [0x00000008]
	unsigned long                                      bCastHiddenShadow : 1;                       // 0x0120 (0x0004) [0x00000010]
	unsigned long                                      bAcceptsLights : 1;                          // 0x0120 (0x0004) [0x00000020]
	unsigned long                                      bAcceptsDynamicLights : 1;                   // 0x0120 (0x0004) [0x00000040]
	struct FLightingChannelContainer                   LightingChannels;                            // 0x0124 (0x0004)
	unsigned long                                      bUsePrecomputedShadows : 1;                  // 0x0128 (0x0004) [0x00000001]
	unsigned long                                      bCullModulatedShadowOnBackfaces : 1;         // 0x0128 (0x0004) [0x00000002]
	unsigned long                                      bCullModulatedShadowOnEmissive : 1;          // 0x0128 (0x0004) [0x00000004]
	unsigned long                                      bAllowAmbientOcclusion : 1;                  // 0x0128 (0x0004) [0x00000008]
	unsigned long                                      CollideActors : 1;                           // 0x0128 (0x0004) [0x00000010]
	unsigned long                                      AlwaysCheckCollision : 1;                    // 0x0128 (0x0004) [0x00000020]
	unsigned long                                      BlockActors : 1;                             // 0x0128 (0x0004) [0x00000040]
	unsigned long                                      BlockZeroExtent : 1;                         // 0x0128 (0x0004) [0x00000080]
	unsigned long                                      BlockNonZeroExtent : 1;                      // 0x0128 (0x0004) [0x00000100]
	unsigned long                                      CanBlockCamera : 1;                          // 0x0128 (0x0004) [0x00000200]
	unsigned long                                      BlockRigidBody : 1;                          // 0x0128 (0x0004) [0x00000400]
	unsigned long                                      RigidBodyIgnorePawns : 1;                    // 0x0128 (0x0004) [0x00000800]
	unsigned char                                      RBChannel;                                   // 0x012C (0x0001)
	struct FRBCollisionChannelContainer                RBCollideWithChannels;                       // 0x0130 (0x0004)
	unsigned long                                      bDisableAllRigidBody : 1;                    // 0x0134 (0x0004) [0x00000001]
	unsigned long                                      bSkipRBGeomCreation : 1;                     // 0x0134 (0x0004) [0x00000002]
	unsigned long                                      bNotifyRigidBodyCollision : 1;               // 0x0134 (0x0004) [0x00000004]
	unsigned long                                      bFluidDrain : 1;                             // 0x0134 (0x0004) [0x00000008]
	unsigned long                                      bFluidTwoWay : 1;                            // 0x0134 (0x0004) [0x00000010]
	unsigned long                                      bIgnoreRadialImpulse : 1;                    // 0x0134 (0x0004) [0x00000020]
	unsigned long                                      bIgnoreRadialForce : 1;                      // 0x0134 (0x0004) [0x00000040]
	unsigned long                                      bIgnoreForceField : 1;                       // 0x0134 (0x0004) [0x00000080]
	unsigned long                                      bUseCompartment : 1;                         // 0x0134 (0x0004) [0x00000100]
	unsigned long                                      AlwaysLoadOnClient : 1;                      // 0x0134 (0x0004) [0x00000200]
	unsigned long                                      AlwaysLoadOnServer : 1;                      // 0x0134 (0x0004) [0x00000400]
	unsigned long                                      bIgnoreHiddenActorsMembership : 1;           // 0x0134 (0x0004) [0x00000800]
	unsigned long                                      bWasSNFiltered : 1;                          // 0x0134 (0x0004) [0x00001000]
	TArray< int >                                      OctreeNodes;                                 // 0x0138 (0x000C)
	void*                                              PhysMaterialOverride;                        // 0x0144 (0x0004)
	void*                                              BodyInstance;                                // 0x0148 (0x0004)
	unsigned char                                      RBDominanceGroup;                            // 0x014C (0x0001)
	struct FMatrix                                     CachedParentToWorld;                         // 0x0150 (0x0040)
	struct FVector                                     Translation;                                 // 0x0190 (0x000C)
	struct FRotator                                    Rotation;                                    // 0x019C (0x000C)
	float                                              Scale;                                       // 0x01A8 (0x0004)
	struct FVector                                     Scale3D;                                     // 0x01AC (0x000C)
	unsigned long                                      AbsoluteTranslation : 1;                     // 0x01B8 (0x0004) [0x00000001]
	unsigned long                                      AbsoluteRotation : 1;                        // 0x01B8 (0x0004) [0x00000002]
	unsigned long                                      AbsoluteScale : 1;                           // 0x01B8 (0x0004) [0x00000004]
	float                                              LastSubmitTime;                              // 0x01BC (0x0004)
	float                                              LastRenderTime;                              // 0x01C0 (0x0004)
	struct FBeastPrimPropertiesContainer               BeastProperties;                             // 0x01C4 (0x0004)
	float                                              ScriptRigidBodyCollisionThreshold;           // 0x01C8 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.PrimitiveComponent" );

		return ClassPointer;
	};

public:
	struct FRotator GetRotation ()
	{
		static UFunction* pfnGetRotation = NULL;

		if ( !pfnGetRotation )
			pfnGetRotation = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.GetRotation" );

		UPrimitiveComponent_execGetRotation_Parms GetRotation_Parms;

		pfnGetRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRotation, &GetRotation_Parms, NULL );
		pfnGetRotation->FunctionFlags |= 0x400;

		return GetRotation_Parms.ReturnValue;
	};

	struct FVector GetPosition ()
	{
		static UFunction* pfnGetPosition = NULL;

		if ( !pfnGetPosition )
			pfnGetPosition = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.GetPosition" );

		UPrimitiveComponent_execGetPosition_Parms GetPosition_Parms;

		this->ProcessEvent( pfnGetPosition, &GetPosition_Parms, NULL );

		return GetPosition_Parms.ReturnValue;
	};

	void SetAbsolute ( unsigned long NewAbsoluteTranslation/*CPF_OptionalParm*/, unsigned long NewAbsoluteRotation/*CPF_OptionalParm*/, unsigned long NewAbsoluteScale/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetAbsolute = NULL;

		if ( !pfnSetAbsolute )
			pfnSetAbsolute = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetAbsolute" );

		UPrimitiveComponent_execSetAbsolute_Parms SetAbsolute_Parms;
		SetAbsolute_Parms.NewAbsoluteTranslation = NewAbsoluteTranslation;
		SetAbsolute_Parms.NewAbsoluteRotation = NewAbsoluteRotation;
		SetAbsolute_Parms.NewAbsoluteScale = NewAbsoluteScale;

		pfnSetAbsolute->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAbsolute, &SetAbsolute_Parms, NULL );
		pfnSetAbsolute->FunctionFlags |= 0x400;
	};

	void SetScale3D ( struct FVector NewScale3D )
	{
		static UFunction* pfnSetScale3D = NULL;

		if ( !pfnSetScale3D )
			pfnSetScale3D = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetScale3D" );

		UPrimitiveComponent_execSetScale3D_Parms SetScale3D_Parms;
		memcpy( &SetScale3D_Parms.NewScale3D, &NewScale3D, 0xC );

		pfnSetScale3D->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetScale3D, &SetScale3D_Parms, NULL );
		pfnSetScale3D->FunctionFlags |= 0x400;
	};

	void SetScale ( float NewScale )
	{
		static UFunction* pfnSetScale = NULL;

		if ( !pfnSetScale )
			pfnSetScale = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetScale" );

		UPrimitiveComponent_execSetScale_Parms SetScale_Parms;
		SetScale_Parms.NewScale = NewScale;

		pfnSetScale->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetScale, &SetScale_Parms, NULL );
		pfnSetScale->FunctionFlags |= 0x400;
	};

	void SetRotation ( struct FRotator NewRotation )
	{
		static UFunction* pfnSetRotation = NULL;

		if ( !pfnSetRotation )
			pfnSetRotation = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRotation" );

		UPrimitiveComponent_execSetRotation_Parms SetRotation_Parms;
		memcpy( &SetRotation_Parms.NewRotation, &NewRotation, 0xC );

		pfnSetRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRotation, &SetRotation_Parms, NULL );
		pfnSetRotation->FunctionFlags |= 0x400;
	};

	void SetTranslation ( struct FVector NewTranslation )
	{
		static UFunction* pfnSetTranslation = NULL;

		if ( !pfnSetTranslation )
			pfnSetTranslation = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetTranslation" );

		UPrimitiveComponent_execSetTranslation_Parms SetTranslation_Parms;
		memcpy( &SetTranslation_Parms.NewTranslation, &NewTranslation, 0xC );

		pfnSetTranslation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetTranslation, &SetTranslation_Parms, NULL );
		pfnSetTranslation->FunctionFlags |= 0x400;
	};

	void SetActorCollision ( unsigned long NewCollideActors, unsigned long NewBlockActors, unsigned long NewAlwaysCheckCollision/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetActorCollision = NULL;

		if ( !pfnSetActorCollision )
			pfnSetActorCollision = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetActorCollision" );

		UPrimitiveComponent_execSetActorCollision_Parms SetActorCollision_Parms;
		SetActorCollision_Parms.NewCollideActors = NewCollideActors;
		SetActorCollision_Parms.NewBlockActors = NewBlockActors;
		SetActorCollision_Parms.NewAlwaysCheckCollision = NewAlwaysCheckCollision;

		pfnSetActorCollision->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetActorCollision, &SetActorCollision_Parms, NULL );
		pfnSetActorCollision->FunctionFlags |= 0x400;
	};

	void SetTraceBlocking ( unsigned long NewBlockZeroExtent, unsigned long NewBlockNonZeroExtent )
	{
		static UFunction* pfnSetTraceBlocking = NULL;

		if ( !pfnSetTraceBlocking )
			pfnSetTraceBlocking = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetTraceBlocking" );

		UPrimitiveComponent_execSetTraceBlocking_Parms SetTraceBlocking_Parms;
		SetTraceBlocking_Parms.NewBlockZeroExtent = NewBlockZeroExtent;
		SetTraceBlocking_Parms.NewBlockNonZeroExtent = NewBlockNonZeroExtent;

		pfnSetTraceBlocking->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetTraceBlocking, &SetTraceBlocking_Parms, NULL );
		pfnSetTraceBlocking->FunctionFlags |= 0x400;
	};

	void SetViewOwnerDepthPriorityGroup ( unsigned long bNewUseViewOwnerDepthPriorityGroup, unsigned char NewViewOwnerDepthPriorityGroup )
	{
		static UFunction* pfnSetViewOwnerDepthPriorityGroup = NULL;

		if ( !pfnSetViewOwnerDepthPriorityGroup )
			pfnSetViewOwnerDepthPriorityGroup = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetViewOwnerDepthPriorityGroup" );

		UPrimitiveComponent_execSetViewOwnerDepthPriorityGroup_Parms SetViewOwnerDepthPriorityGroup_Parms;
		SetViewOwnerDepthPriorityGroup_Parms.bNewUseViewOwnerDepthPriorityGroup = bNewUseViewOwnerDepthPriorityGroup;
		SetViewOwnerDepthPriorityGroup_Parms.NewViewOwnerDepthPriorityGroup = NewViewOwnerDepthPriorityGroup;

		pfnSetViewOwnerDepthPriorityGroup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetViewOwnerDepthPriorityGroup, &SetViewOwnerDepthPriorityGroup_Parms, NULL );
		pfnSetViewOwnerDepthPriorityGroup->FunctionFlags |= 0x400;
	};

	void SetDepthPriorityGroup ( unsigned char NewDepthPriorityGroup )
	{
		static UFunction* pfnSetDepthPriorityGroup = NULL;

		if ( !pfnSetDepthPriorityGroup )
			pfnSetDepthPriorityGroup = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetDepthPriorityGroup" );

		UPrimitiveComponent_execSetDepthPriorityGroup_Parms SetDepthPriorityGroup_Parms;
		SetDepthPriorityGroup_Parms.NewDepthPriorityGroup = NewDepthPriorityGroup;

		pfnSetDepthPriorityGroup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetDepthPriorityGroup, &SetDepthPriorityGroup_Parms, NULL );
		pfnSetDepthPriorityGroup->FunctionFlags |= 0x400;
	};

	void SetLightingChannels ( struct FLightingChannelContainer NewLightingChannels )
	{
		static UFunction* pfnSetLightingChannels = NULL;

		if ( !pfnSetLightingChannels )
			pfnSetLightingChannels = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetLightingChannels" );

		UPrimitiveComponent_execSetLightingChannels_Parms SetLightingChannels_Parms;
		memcpy( &SetLightingChannels_Parms.NewLightingChannels, &NewLightingChannels, 0x4 );

		pfnSetLightingChannels->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetLightingChannels, &SetLightingChannels_Parms, NULL );
		pfnSetLightingChannels->FunctionFlags |= 0x400;
	};

	void SetCullDistance ( float NewCullDistance )
	{
		static UFunction* pfnSetCullDistance = NULL;

		if ( !pfnSetCullDistance )
			pfnSetCullDistance = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetCullDistance" );

		UPrimitiveComponent_execSetCullDistance_Parms SetCullDistance_Parms;
		SetCullDistance_Parms.NewCullDistance = NewCullDistance;

		pfnSetCullDistance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetCullDistance, &SetCullDistance_Parms, NULL );
		pfnSetCullDistance->FunctionFlags |= 0x400;
	};

	void SetLightEnvironment ( void* NewLightEnvironment )
	{
		static UFunction* pfnSetLightEnvironment = NULL;

		if ( !pfnSetLightEnvironment )
			pfnSetLightEnvironment = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetLightEnvironment" );

		UPrimitiveComponent_execSetLightEnvironment_Parms SetLightEnvironment_Parms;
		SetLightEnvironment_Parms.NewLightEnvironment = NewLightEnvironment;

		pfnSetLightEnvironment->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetLightEnvironment, &SetLightEnvironment_Parms, NULL );
		pfnSetLightEnvironment->FunctionFlags |= 0x400;
	};

	void SetShadowParent ( class UPrimitiveComponent* NewShadowParent )
	{
		static UFunction* pfnSetShadowParent = NULL;

		if ( !pfnSetShadowParent )
			pfnSetShadowParent = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetShadowParent" );

		UPrimitiveComponent_execSetShadowParent_Parms SetShadowParent_Parms;
		SetShadowParent_Parms.NewShadowParent = NewShadowParent;

		pfnSetShadowParent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetShadowParent, &SetShadowParent_Parms, NULL );
		pfnSetShadowParent->FunctionFlags |= 0x400;
	};

	void SetIgnoreOwnerHidden ( unsigned long bNewIgnoreOwnerHidden )
	{
		static UFunction* pfnSetIgnoreOwnerHidden = NULL;

		if ( !pfnSetIgnoreOwnerHidden )
			pfnSetIgnoreOwnerHidden = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetIgnoreOwnerHidden" );

		UPrimitiveComponent_execSetIgnoreOwnerHidden_Parms SetIgnoreOwnerHidden_Parms;
		SetIgnoreOwnerHidden_Parms.bNewIgnoreOwnerHidden = bNewIgnoreOwnerHidden;

		pfnSetIgnoreOwnerHidden->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetIgnoreOwnerHidden, &SetIgnoreOwnerHidden_Parms, NULL );
		pfnSetIgnoreOwnerHidden->FunctionFlags |= 0x400;
	};

	void SetOnlyOwnerSee ( unsigned long bNewOnlyOwnerSee )
	{
		static UFunction* pfnSetOnlyOwnerSee = NULL;

		if ( !pfnSetOnlyOwnerSee )
			pfnSetOnlyOwnerSee = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetOnlyOwnerSee" );

		UPrimitiveComponent_execSetOnlyOwnerSee_Parms SetOnlyOwnerSee_Parms;
		SetOnlyOwnerSee_Parms.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

		pfnSetOnlyOwnerSee->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetOnlyOwnerSee, &SetOnlyOwnerSee_Parms, NULL );
		pfnSetOnlyOwnerSee->FunctionFlags |= 0x400;
	};

	void SetOwnerNoSee ( unsigned long bNewOwnerNoSee )
	{
		static UFunction* pfnSetOwnerNoSee = NULL;

		if ( !pfnSetOwnerNoSee )
			pfnSetOwnerNoSee = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetOwnerNoSee" );

		UPrimitiveComponent_execSetOwnerNoSee_Parms SetOwnerNoSee_Parms;
		SetOwnerNoSee_Parms.bNewOwnerNoSee = bNewOwnerNoSee;

		pfnSetOwnerNoSee->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetOwnerNoSee, &SetOwnerNoSee_Parms, NULL );
		pfnSetOwnerNoSee->FunctionFlags |= 0x400;
	};

	void SetHidden ( unsigned long NewHidden )
	{
		static UFunction* pfnSetHidden = NULL;

		if ( !pfnSetHidden )
			pfnSetHidden = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetHidden" );

		UPrimitiveComponent_execSetHidden_Parms SetHidden_Parms;
		SetHidden_Parms.NewHidden = NewHidden;

		pfnSetHidden->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetHidden, &SetHidden_Parms, NULL );
		pfnSetHidden->FunctionFlags |= 0x400;
	};

	void SetRBDominanceGroup ( unsigned char InDomGroup )
	{
		static UFunction* pfnSetRBDominanceGroup = NULL;

		if ( !pfnSetRBDominanceGroup )
			pfnSetRBDominanceGroup = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBDominanceGroup" );

		UPrimitiveComponent_execSetRBDominanceGroup_Parms SetRBDominanceGroup_Parms;
		SetRBDominanceGroup_Parms.InDomGroup = InDomGroup;

		pfnSetRBDominanceGroup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBDominanceGroup, &SetRBDominanceGroup_Parms, NULL );
		pfnSetRBDominanceGroup->FunctionFlags |= 0x400;
	};

	void* GetRootBodyInstance ()
	{
		static UFunction* pfnGetRootBodyInstance = NULL;

		if ( !pfnGetRootBodyInstance )
			pfnGetRootBodyInstance = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.GetRootBodyInstance" );

		UPrimitiveComponent_execGetRootBodyInstance_Parms GetRootBodyInstance_Parms;

		pfnGetRootBodyInstance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRootBodyInstance, &GetRootBodyInstance_Parms, NULL );
		pfnGetRootBodyInstance->FunctionFlags |= 0x400;

		return GetRootBodyInstance_Parms.ReturnValue;
	};

	void SetPhysMaterialOverride ( void* NewPhysMaterial )
	{
		static UFunction* pfnSetPhysMaterialOverride = NULL;

		if ( !pfnSetPhysMaterialOverride )
			pfnSetPhysMaterialOverride = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetPhysMaterialOverride" );

		UPrimitiveComponent_execSetPhysMaterialOverride_Parms SetPhysMaterialOverride_Parms;
		SetPhysMaterialOverride_Parms.NewPhysMaterial = NewPhysMaterial;

		pfnSetPhysMaterialOverride->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetPhysMaterialOverride, &SetPhysMaterialOverride_Parms, NULL );
		pfnSetPhysMaterialOverride->FunctionFlags |= 0x400;
	};

	void InitRBPhys ()
	{
		static UFunction* pfnInitRBPhys = NULL;

		if ( !pfnInitRBPhys )
			pfnInitRBPhys = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.InitRBPhys" );

		UPrimitiveComponent_execInitRBPhys_Parms InitRBPhys_Parms;

		pfnInitRBPhys->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitRBPhys, &InitRBPhys_Parms, NULL );
		pfnInitRBPhys->FunctionFlags |= 0x400;
	};

	void SetNotifyRigidBodyCollision ( unsigned long bNewNotifyRigidBodyCollision )
	{
		static UFunction* pfnSetNotifyRigidBodyCollision = NULL;

		if ( !pfnSetNotifyRigidBodyCollision )
			pfnSetNotifyRigidBodyCollision = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision" );

		UPrimitiveComponent_execSetNotifyRigidBodyCollision_Parms SetNotifyRigidBodyCollision_Parms;
		SetNotifyRigidBodyCollision_Parms.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

		pfnSetNotifyRigidBodyCollision->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetNotifyRigidBodyCollision, &SetNotifyRigidBodyCollision_Parms, NULL );
		pfnSetNotifyRigidBodyCollision->FunctionFlags |= 0x400;
	};

	void SetRBChannel ( unsigned char Channel )
	{
		static UFunction* pfnSetRBChannel = NULL;

		if ( !pfnSetRBChannel )
			pfnSetRBChannel = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBChannel" );

		UPrimitiveComponent_execSetRBChannel_Parms SetRBChannel_Parms;
		SetRBChannel_Parms.Channel = Channel;

		pfnSetRBChannel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBChannel, &SetRBChannel_Parms, NULL );
		pfnSetRBChannel->FunctionFlags |= 0x400;
	};

	void SetRBCollidesWithChannel ( unsigned char Channel, unsigned long bNewCollides )
	{
		static UFunction* pfnSetRBCollidesWithChannel = NULL;

		if ( !pfnSetRBCollidesWithChannel )
			pfnSetRBCollidesWithChannel = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBCollidesWithChannel" );

		UPrimitiveComponent_execSetRBCollidesWithChannel_Parms SetRBCollidesWithChannel_Parms;
		SetRBCollidesWithChannel_Parms.Channel = Channel;
		SetRBCollidesWithChannel_Parms.bNewCollides = bNewCollides;

		pfnSetRBCollidesWithChannel->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBCollidesWithChannel, &SetRBCollidesWithChannel_Parms, NULL );
		pfnSetRBCollidesWithChannel->FunctionFlags |= 0x400;
	};

	void SetBlockRigidBody ( unsigned long bNewBlockRigidBody )
	{
		static UFunction* pfnSetBlockRigidBody = NULL;

		if ( !pfnSetBlockRigidBody )
			pfnSetBlockRigidBody = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetBlockRigidBody" );

		UPrimitiveComponent_execSetBlockRigidBody_Parms SetBlockRigidBody_Parms;
		SetBlockRigidBody_Parms.bNewBlockRigidBody = bNewBlockRigidBody;

		pfnSetBlockRigidBody->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetBlockRigidBody, &SetBlockRigidBody_Parms, NULL );
		pfnSetBlockRigidBody->FunctionFlags |= 0x400;
	};

	bool RigidBodyIsAwake ( struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnRigidBodyIsAwake = NULL;

		if ( !pfnRigidBodyIsAwake )
			pfnRigidBodyIsAwake = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.RigidBodyIsAwake" );

		UPrimitiveComponent_execRigidBodyIsAwake_Parms RigidBodyIsAwake_Parms;
		memcpy( &RigidBodyIsAwake_Parms.BoneName, &BoneName, 0x8 );

		pfnRigidBodyIsAwake->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRigidBodyIsAwake, &RigidBodyIsAwake_Parms, NULL );
		pfnRigidBodyIsAwake->FunctionFlags |= 0x400;

		return RigidBodyIsAwake_Parms.ReturnValue;
	};

	void PutRigidBodyToSleep ( struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPutRigidBodyToSleep = NULL;

		if ( !pfnPutRigidBodyToSleep )
			pfnPutRigidBodyToSleep = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.PutRigidBodyToSleep" );

		UPrimitiveComponent_execPutRigidBodyToSleep_Parms PutRigidBodyToSleep_Parms;
		memcpy( &PutRigidBodyToSleep_Parms.BoneName, &BoneName, 0x8 );

		pfnPutRigidBodyToSleep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPutRigidBodyToSleep, &PutRigidBodyToSleep_Parms, NULL );
		pfnPutRigidBodyToSleep->FunctionFlags |= 0x400;
	};

	void WakeRigidBody ( struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnWakeRigidBody = NULL;

		if ( !pfnWakeRigidBody )
			pfnWakeRigidBody = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.WakeRigidBody" );

		UPrimitiveComponent_execWakeRigidBody_Parms WakeRigidBody_Parms;
		memcpy( &WakeRigidBody_Parms.BoneName, &BoneName, 0x8 );

		pfnWakeRigidBody->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnWakeRigidBody, &WakeRigidBody_Parms, NULL );
		pfnWakeRigidBody->FunctionFlags |= 0x400;
	};

	void SetRBRotation ( struct FRotator NewRot, struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetRBRotation = NULL;

		if ( !pfnSetRBRotation )
			pfnSetRBRotation = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBRotation" );

		UPrimitiveComponent_execSetRBRotation_Parms SetRBRotation_Parms;
		memcpy( &SetRBRotation_Parms.NewRot, &NewRot, 0xC );
		memcpy( &SetRBRotation_Parms.BoneName, &BoneName, 0x8 );

		pfnSetRBRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBRotation, &SetRBRotation_Parms, NULL );
		pfnSetRBRotation->FunctionFlags |= 0x400;
	};

	void SetRBPosition ( struct FVector NewPos, struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetRBPosition = NULL;

		if ( !pfnSetRBPosition )
			pfnSetRBPosition = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBPosition" );

		UPrimitiveComponent_execSetRBPosition_Parms SetRBPosition_Parms;
		memcpy( &SetRBPosition_Parms.NewPos, &NewPos, 0xC );
		memcpy( &SetRBPosition_Parms.BoneName, &BoneName, 0x8 );

		pfnSetRBPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBPosition, &SetRBPosition_Parms, NULL );
		pfnSetRBPosition->FunctionFlags |= 0x400;
	};

	void RetardRBLinearVelocity ( struct FVector RetardDir, float VelScale )
	{
		static UFunction* pfnRetardRBLinearVelocity = NULL;

		if ( !pfnRetardRBLinearVelocity )
			pfnRetardRBLinearVelocity = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.RetardRBLinearVelocity" );

		UPrimitiveComponent_execRetardRBLinearVelocity_Parms RetardRBLinearVelocity_Parms;
		memcpy( &RetardRBLinearVelocity_Parms.RetardDir, &RetardDir, 0xC );
		RetardRBLinearVelocity_Parms.VelScale = VelScale;

		pfnRetardRBLinearVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRetardRBLinearVelocity, &RetardRBLinearVelocity_Parms, NULL );
		pfnRetardRBLinearVelocity->FunctionFlags |= 0x400;
	};

	void SetRBAngularVelocity ( struct FVector NewAngVel, unsigned long bAddToCurrent/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetRBAngularVelocity = NULL;

		if ( !pfnSetRBAngularVelocity )
			pfnSetRBAngularVelocity = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBAngularVelocity" );

		UPrimitiveComponent_execSetRBAngularVelocity_Parms SetRBAngularVelocity_Parms;
		memcpy( &SetRBAngularVelocity_Parms.NewAngVel, &NewAngVel, 0xC );
		SetRBAngularVelocity_Parms.bAddToCurrent = bAddToCurrent;

		pfnSetRBAngularVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBAngularVelocity, &SetRBAngularVelocity_Parms, NULL );
		pfnSetRBAngularVelocity->FunctionFlags |= 0x400;
	};

	void SetRBLinearVelocity ( struct FVector NewVel, unsigned long bAddToCurrent/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetRBLinearVelocity = NULL;

		if ( !pfnSetRBLinearVelocity )
			pfnSetRBLinearVelocity = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.SetRBLinearVelocity" );

		UPrimitiveComponent_execSetRBLinearVelocity_Parms SetRBLinearVelocity_Parms;
		memcpy( &SetRBLinearVelocity_Parms.NewVel, &NewVel, 0xC );
		SetRBLinearVelocity_Parms.bAddToCurrent = bAddToCurrent;

		pfnSetRBLinearVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetRBLinearVelocity, &SetRBLinearVelocity_Parms, NULL );
		pfnSetRBLinearVelocity->FunctionFlags |= 0x400;
	};

	void AddTorque ( struct FVector Torque, struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddTorque = NULL;

		if ( !pfnAddTorque )
			pfnAddTorque = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.AddTorque" );

		UPrimitiveComponent_execAddTorque_Parms AddTorque_Parms;
		memcpy( &AddTorque_Parms.Torque, &Torque, 0xC );
		memcpy( &AddTorque_Parms.BoneName, &BoneName, 0x8 );

		pfnAddTorque->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddTorque, &AddTorque_Parms, NULL );
		pfnAddTorque->FunctionFlags |= 0x400;
	};

	void AddRadialForce ( struct FVector Origin, float Radius, float Strength, unsigned char Falloff )
	{
		static UFunction* pfnAddRadialForce = NULL;

		if ( !pfnAddRadialForce )
			pfnAddRadialForce = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.AddRadialForce" );

		UPrimitiveComponent_execAddRadialForce_Parms AddRadialForce_Parms;
		memcpy( &AddRadialForce_Parms.Origin, &Origin, 0xC );
		AddRadialForce_Parms.Radius = Radius;
		AddRadialForce_Parms.Strength = Strength;
		AddRadialForce_Parms.Falloff = Falloff;

		pfnAddRadialForce->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddRadialForce, &AddRadialForce_Parms, NULL );
		pfnAddRadialForce->FunctionFlags |= 0x400;
	};

	void AddForce ( struct FVector Force, struct FVector Position/*CPF_OptionalParm*/, struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddForce = NULL;

		if ( !pfnAddForce )
			pfnAddForce = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.AddForce" );

		UPrimitiveComponent_execAddForce_Parms AddForce_Parms;
		memcpy( &AddForce_Parms.Force, &Force, 0xC );
		memcpy( &AddForce_Parms.Position, &Position, 0xC );
		memcpy( &AddForce_Parms.BoneName, &BoneName, 0x8 );

		pfnAddForce->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddForce, &AddForce_Parms, NULL );
		pfnAddForce->FunctionFlags |= 0x400;
	};

	void AddRadialImpulse ( struct FVector Origin, float Radius, float Strength, unsigned char Falloff, unsigned long bVelChange/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddRadialImpulse = NULL;

		if ( !pfnAddRadialImpulse )
			pfnAddRadialImpulse = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.AddRadialImpulse" );

		UPrimitiveComponent_execAddRadialImpulse_Parms AddRadialImpulse_Parms;
		memcpy( &AddRadialImpulse_Parms.Origin, &Origin, 0xC );
		AddRadialImpulse_Parms.Radius = Radius;
		AddRadialImpulse_Parms.Strength = Strength;
		AddRadialImpulse_Parms.Falloff = Falloff;
		AddRadialImpulse_Parms.bVelChange = bVelChange;

		pfnAddRadialImpulse->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddRadialImpulse, &AddRadialImpulse_Parms, NULL );
		pfnAddRadialImpulse->FunctionFlags |= 0x400;
	};

	void AddImpulse ( struct FVector Impulse, struct FVector Position/*CPF_OptionalParm*/, struct FName BoneName/*CPF_OptionalParm*/, unsigned long bVelChange/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddImpulse = NULL;

		if ( !pfnAddImpulse )
			pfnAddImpulse = UObject::FindObject< UFunction >( "Function Engine.PrimitiveComponent.AddImpulse" );

		UPrimitiveComponent_execAddImpulse_Parms AddImpulse_Parms;
		memcpy( &AddImpulse_Parms.Impulse, &Impulse, 0xC );
		memcpy( &AddImpulse_Parms.Position, &Position, 0xC );
		memcpy( &AddImpulse_Parms.BoneName, &BoneName, 0x8 );
		AddImpulse_Parms.bVelChange = bVelChange;

		pfnAddImpulse->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddImpulse, &AddImpulse_Parms, NULL );
		pfnAddImpulse->FunctionFlags |= 0x400;
	};

};

UClass* UPrimitiveComponent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif