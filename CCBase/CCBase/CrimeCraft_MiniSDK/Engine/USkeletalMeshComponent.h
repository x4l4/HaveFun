/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USkeletalMeshComponent.h
// Date: 06/16/2011 @ 05:19:39.663
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum EFaceFXRegOp
{
	FXRO_Add = 0,
	FXRO_Multiply = 1,
	FXRO_Replace = 2,
	FXRO_MAX = 3
};

enum EFaceFXBlendMode
{
	FXBM_Overwrite = 0,
	FXBM_Additive = 1,
	FXBM_MAX = 2
};

enum ERootMotionRotationMode
{
	RMRM_Ignore = 0,
	RMRM_RotateActor = 1,
	RMRM_MAX = 2
};

enum ERootMotionMode
{
	RMM_Translate = 0,
	RMM_Velocity = 1,
	RMM_Ignore = 2,
	RMM_Accel = 3,
	RMM_Relative = 4,
	RMM_MAX = 5
};

struct USkeletalMeshComponent_execBoneIsChildOfEx_Parms
{
	int BoneIndex;
	int ParentBoneIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct USkeletalMeshComponent_execBreakConstraintEx_Parms
{
	struct FName BoneName;
};

struct USkeletalMeshComponent_execBreakConstraint_Parms
{
	struct FVector Impulse;
	struct FVector HitLocation;
	struct FName InBoneName;
	unsigned long bVelChange : 1;
};// FUNC_Final

struct USkeletalMeshComponent_execSkelMeshCompOnParticleSystemFinished_Parms
{
	void* PSC;
};

struct USkeletalMeshComponent_eventPlayParticleEffect_Parms
{
	void* AnimNotifyData;
};// FUNC_Event

struct USkeletalMeshComponent_execStopAnim_Parms
{
};

struct USkeletalMeshComponent_execPlayAnim_Parms
{
	struct FName AnimName;
	float Duration;
	unsigned long bLoop : 1;
	unsigned long bRestartIfAlreadyPlaying : 1;
};

struct USkeletalMeshComponent_execUpdateMeshForBrokenConstraints_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execIsBoneHidden_Parms
{
	int BoneIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUnHideBone_Parms
{
	int BoneIndex;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execHideBone_Parms
{
	int BoneIndex;
	unsigned long bTermBodiesBelow : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetFaceFXRegisterEx_Parms
{
	struct FString RegName;
	unsigned char RegOp;
	float FirstValue;
	float FirstInterpDuration;
	float NextValue;
	float NextInterpDuration;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetFaceFXRegister_Parms
{
	struct FString RegName;
	float RegVal;
	unsigned char RegOp;
	float InterpDuration;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetFaceFXRegister_Parms
{
	struct FString RegName;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execDeclareFaceFXRegister_Parms
{
	struct FString RegName;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execIsPlayingFaceFXAnim_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execStopFaceFXAnim_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execPlayFaceFXAnim_Parms
{
	void* FaceFXAnimSetRef;
	struct FString AnimName;
	struct FString GroupName;
	void* SoundCueToPlay;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execToggleInstanceVertexWeights_Parms
{
	unsigned long bEnable : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateInstanceVertexWeightBones_Parms
{
	TArray< struct FBonePair > BonePairs;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindInstanceVertexweightBonePair_Parms
{
	struct FBonePair Bones;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execRemoveInstanceVertexWeightBoneParented_Parms
{
	struct FName BoneName;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAddDynamicDiffName_Parms
{
	struct FName DiffName;
};// FUNC_Final

struct USkeletalMeshComponent_execAddInstanceVertexWeightBonePair_Parms
{
	struct FName Bone1;
	struct FName Bone2;
};// FUNC_Final

struct USkeletalMeshComponent_execAddInstanceVertexWeightBoneParented_Parms
{
	struct FName BoneName;
	unsigned long bPairWithParent : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBonesWithinRadius_Parms
{
	struct FVector Origin;
	float Radius;
	int TraceFlags;
	TArray< struct FName > out_Bones; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateAnimations_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execForceSkelUpdate_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateRBBonesFromSpaceBases_Parms
{
	unsigned long bMoveUnfixedBodies : 1;
	unsigned long bTeleport : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetHasPhysicsAssetInstance_Parms
{
	unsigned long bHasInstance : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindBodyInstanceNamed_Parms
{
	struct FName BoneName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindConstraintBoneName_Parms
{
	int ConstraintIndex;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindConstraintIndex_Parms
{
	struct FName ConstraintName;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execInitSkelControls_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateParentBoneMap_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetParentAnimComponent_Parms
{
	class USkeletalMeshComponent* NewParentAnimComp;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetAnimTreeTemplate_Parms
{
	void* NewTemplate;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClosestCollidingBoneLocation_Parms
{
	struct FVector TestLocation;
	unsigned long bCheckZeroExtent : 1;
	unsigned long bCheckNonZeroExtent : 1;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindClosestBone_Parms
{
	struct FVector TestLocation;
	struct FVector BoneLocation; // CPF_OutParm
	float IgnoreScale;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execTransformFromBoneSpace_Parms
{
	struct FName BoneName;
	struct FVector InPosition;
	struct FRotator InRotation;
	struct FVector OutPosition; // CPF_OutParm
	struct FRotator OutRotation; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execTransformToBoneSpace_Parms
{
	struct FName BoneName;
	struct FVector InPosition;
	struct FRotator InRotation;
	struct FVector OutPosition; // CPF_OutParm
	struct FRotator OutRotation; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneAxis_Parms
{
	struct FName BoneName;
	unsigned char Axis;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetRefPosePosition_Parms
{
	int BoneIndex;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execBoneIsChildOf_Parms
{
	struct FName BoneName;
	struct FName ParentBoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneNames_Parms
{
	TArray< struct FName > BoneNames; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetParentBone_Parms
{
	struct FName BoneName;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneMatrix_Parms
{
	int BoneIndex;
	struct FMatrix ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneName_Parms
{
	int BoneIndex;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execMatchRefBone_Parms
{
	struct FName BoneName;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneLocation_Parms
{
	struct FName BoneName;
	int Space;
	struct FVector ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetBoneQuaternion_Parms
{
	struct FName BoneName;
	int Space;
	struct FQuat ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindMorphNode_Parms
{
	struct FName InNodeName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindSkelControl_Parms
{
	struct FName InControlName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAllAnimNodes_Parms
{
	class UClass* BaseClass;
	void* Node; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindAnimNode_Parms
{
	struct FName InNodeName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindMorphTarget_Parms
{
	struct FName MorphTargetName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetAnimLength_Parms
{
	struct FName AnimSeqName;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct USkeletalMeshComponent_execGetAnimRateByDuration_Parms
{
	struct FName AnimSeqName;
	float Duration;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct USkeletalMeshComponent_execRestoreSavedAnimSets_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSaveAnimSets_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindAnimSequence_Parms
{
	struct FName AnimSeqName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execWakeSoftBody_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetSoftBodyFrozen_Parms
{
	unsigned long bNewFrozen : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateSoftBodyParams_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothValidBounds_Parms
{
	struct FVector ClothValidBoundsMin;
	struct FVector ClothValidBoundsMax;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execEnableClothValidBounds_Parms
{
	unsigned long IfEnableClothValidBounds : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAttachClothToCollidingShapes_Parms
{
	unsigned long AttatchTwoWay : 1;
	unsigned long AttachTearable : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothVelocity_Parms
{
	struct FVector VelocityOffSet;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothPosition_Parms
{
	struct FVector ClothOffSet;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothSleep_Parms
{
	unsigned long IfClothSleep : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothThickness_Parms
{
	float ClothThickness;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothTearFactor_Parms
{
	float ClothTearFactor;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothStretchingStiffness_Parms
{
	float ClothStretchingStiffness;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothSolverIterations_Parms
{
	int ClothSolverIterations;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothSleepLinearVelocity_Parms
{
	float ClothSleepLinearVelocity;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothPressure_Parms
{
	float ClothPressure;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothFriction_Parms
{
	float ClothFriction;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothFlags_Parms
{
	int ClothFlags;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothDampingCoefficient_Parms
{
	float ClothDampingCoefficient;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothCollisionResponseCoefficient_Parms
{
	float ClothCollisionResponseCoefficient;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothBendingStiffness_Parms
{
	float ClothBendingStiffness;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothAttachmentTearFactor_Parms
{
	float ClothAttachTearFactor;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothAttachmentResponseCoefficient_Parms
{
	float ClothAttachmentResponseCoefficient;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothThickness_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothTearFactor_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothStretchingStiffness_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothSolverIterations_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothSleepLinearVelocity_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothPressure_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothFriction_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothFlags_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothDampingCoefficient_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothCollisionResponseCoefficient_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothBendingStiffness_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothAttachmentTearFactor_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetClothAttachmentResponseCoefficient_Parms
{
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execResetClothVertsToRefPose_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetAttachClothVertsToBaseBody_Parms
{
	unsigned long bAttachVerts : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothExternalForce_Parms
{
	struct FVector InForce;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execUpdateClothParams_Parms
{
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetClothFrozen_Parms
{
	unsigned long bNewFrozen : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetEnableClothSimulation_Parms
{
	unsigned long bInEnable : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetForceRefPose_Parms
{
	unsigned long bNewForceRefPose : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetPhysicsAsset_Parms
{
	void* NewPhysicsAsset;
	unsigned long bForceReInit : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execSetSkeletalMesh_Parms
{
	class USkeletalMesh* NewMesh;
	unsigned long bKeepSpaceBases : 1;
	unsigned long InbAlwaysUseInstanceWeights : 1;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAttachedComponents_Parms
{
	class UClass* BaseClass;
	class UActorComponent* OutComponent; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execIsComponentAttached_Parms
{
	class UActorComponent* Component;
	struct FName BoneName;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execFindComponentAttachedToBone_Parms
{
	struct FName InBoneName;
	class UActorComponent* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetSocketBoneName_Parms
{
	struct FName InSocketName;
	struct FName ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetSocketByName_Parms
{
	struct FName InSocketName;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetSocketWorldLocationAndRotation_Parms
{
	struct FName InSocketName;
	struct FVector OutLocation; // CPF_OutParm
	struct FRotator OutRotation; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAttachComponentToSocket_Parms
{
	class UActorComponent* Component;
	struct FName SocketName;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execDetachComponent_Parms
{
	class UActorComponent* Component;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execAttachComponent_Parms
{
	class UActorComponent* Component;
	struct FName BoneName;
	struct FVector RelativeLocation;
	struct FRotator RelativeRotation;
	struct FVector RelativeScale;
};// FUNC_Final FUNC_Native

struct USkeletalMeshComponent_execGetMaterialExt_Parms
{
	int ElementIndex;
	class UMaterialInterface* ReturnValue; // CPF_ReturnParm
};// FUNC_Native

// (0x1D8 - 0x4B4)
class USkeletalMeshComponent : public UMeshComponent
{
public:
	class USkeletalMesh*                               SkeletalMesh;                                // 0x01D8 (0x0004)
	class USkeletalMeshComponent*                      AttachedToSkelComponent;                     // 0x01DC (0x0004)
	TArray< class USkeletalMesh* >                     ExtraSkeletalMeshes;                         // 0x01E0 (0x000C)
	void*                                              AnimTreeTemplate;                            // 0x01EC (0x0004)
	void*                                              Animations;                                  // 0x01F0 (0x0004)
	TArray< void* >                                    AnimTickArray;                               // 0x01F4 (0x000C)
	void*                                              PhysicsAsset;                                // 0x0200 (0x0004)
	void*                                              PhysicsAssetInstance;                        // 0x0204 (0x0004)
	float                                              PhysicsWeight;                               // 0x0208 (0x0004)
	float                                              GlobalAnimRateScale;                         // 0x020C (0x0004)
	struct FPointer                                    MeshObject;                                  // 0x0210 (0x0004)
	TArray< struct FPointer >                          ExtraMeshObjects;                            // 0x0214 (0x000C)
	struct FColor                                      WireframeColor;                              // 0x0220 (0x0004)
	TArray< unsigned char >                            ScaleToTranslationBones;                     // 0x0224 (0x000C)
	TArray< struct FMatrix >                           SpaceBases;                                  // 0x0230 (0x000C)
	TArray< struct FBoneAtom >                         LocalAtoms;                                  // 0x023C (0x000C)
	TArray< unsigned char >                            RequiredBones;                               // 0x0248 (0x000C)
	class USkeletalMeshComponent*                      ParentAnimComponent;                         // 0x0254 (0x0004)
	TArray< int >                                      ParentBoneMap;                               // 0x0258 (0x000C)
	TArray< void* >                                    AnimSets;                                    // 0x0264 (0x000C)
	TArray< void* >                                    TemporarySavedAnimSets;                      // 0x0270 (0x000C)
	TArray< void* >                                    MorphSets;                                   // 0x027C (0x000C)
	TArray< struct FActiveMorph >                      ActiveMorphs;                                // 0x0288 (0x000C)
	TArray< struct FAttachment >                       Attachments;                                 // 0x0294 (0x000C)
	TArray< unsigned char >                            SkelControlIndex;                            // 0x02A0 (0x000C)
	int                                                ForcedLodModel;                              // 0x02AC (0x0004)
	int                                                MinLodModel;                                 // 0x02B0 (0x0004)
	int                                                PredictedLODLevel;                           // 0x02B4 (0x0004)
	int                                                OldPredictedLODLevel;                        // 0x02B8 (0x0004)
	float                                              MaxDistanceFactor;                           // 0x02BC (0x0004)
	int                                                bForceWireframe;                             // 0x02C0 (0x0004)
	int                                                bForceRefpose;                               // 0x02C4 (0x0004)
	int                                                bOldForceRefPose;                            // 0x02C8 (0x0004)
	unsigned long                                      bNoSkeletonUpdate : 1;                       // 0x02CC (0x0004) [0x00000001]
	int                                                bDisplayBones;                               // 0x02D0 (0x0004)
	int                                                bShowPrePhysBones;                           // 0x02D4 (0x0004)
	int                                                bHideSkin;                                   // 0x02D8 (0x0004)
	int                                                bForceRawOffset;                             // 0x02DC (0x0004)
	int                                                bIgnoreControllers;                          // 0x02E0 (0x0004)
	int                                                bTransformFromAnimParent;                    // 0x02E4 (0x0004)
	int                                                TickTag;                                     // 0x02E8 (0x0004)
	int                                                CachedAtomsTag;                              // 0x02EC (0x0004)
	int                                                bUseSingleBodyPhysics;                       // 0x02F0 (0x0004)
	int                                                bRequiredBonesUpToDate;                      // 0x02F4 (0x0004)
	float                                              MinDistFactorForKinematicUpdate;             // 0x02F8 (0x0004)
	struct FName                                       PhysicsBlendZeroDriftBoneName;               // 0x02FC (0x0008)
	int                                                FramesPhysicsAsleep;                         // 0x0304 (0x0004)
	unsigned long                                      bSkipAllUpdateWhenPhysicsAsleep : 1;         // 0x0308 (0x0004) [0x00000001]
	unsigned long                                      bConsiderAllBodiesForBounds : 1;             // 0x0308 (0x0004) [0x00000002]
	unsigned long                                      bUpdateSkelWhenNotRendered : 1;              // 0x0308 (0x0004) [0x00000004]
	unsigned long                                      bIgnoreControllersWhenNotRendered : 1;       // 0x0308 (0x0004) [0x00000008]
	unsigned long                                      bNotUpdatingKinematicDueToDistance : 1;      // 0x0308 (0x0004) [0x00000010]
	unsigned long                                      bForceDiscardRootMotion : 1;                 // 0x0308 (0x0004) [0x00000020]
	unsigned long                                      bRootMotionModeChangeNotify : 1;             // 0x0308 (0x0004) [0x00000040]
	unsigned long                                      bRootMotionExtractedNotify : 1;              // 0x0308 (0x0004) [0x00000080]
	unsigned long                                      bDisableFaceFXMaterialInstanceCreation : 1;  // 0x0308 (0x0004) [0x00000100]
	unsigned long                                      bAnimTreeInitialised : 1;                    // 0x0308 (0x0004) [0x00000200]
	unsigned long                                      bForceMeshObjectUpdate : 1;                  // 0x0308 (0x0004) [0x00000400]
	unsigned long                                      bHasPhysicsAssetInstance : 1;                // 0x0308 (0x0004) [0x00000800]
	unsigned long                                      bUpdateKinematicBonesFromAnimation : 1;      // 0x0308 (0x0004) [0x00001000]
	unsigned long                                      bUpdateJointsFromAnimation : 1;              // 0x0308 (0x0004) [0x00002000]
	unsigned long                                      bSkelCompFixed : 1;                          // 0x0308 (0x0004) [0x00004000]
	unsigned long                                      bHasHadPhysicsBlendedIn : 1;                 // 0x0308 (0x0004) [0x00008000]
	unsigned long                                      bPerformPostPhysBlendActionsDone : 1;        // 0x0308 (0x0004) [0x00010000]
	unsigned long                                      bForceUpdateAttachmentsInTick : 1;           // 0x0308 (0x0004) [0x00020000]
	unsigned long                                      bEnableFullAnimWeightBodies : 1;             // 0x0308 (0x0004) [0x00040000]
	unsigned long                                      bPerBoneVolumeEffects : 1;                   // 0x0308 (0x0004) [0x00080000]
	unsigned long                                      bSyncActorLocationToRootRigidBody : 1;       // 0x0308 (0x0004) [0x00100000]
	unsigned long                                      bUseRawData : 1;                             // 0x0308 (0x0004) [0x00200000]
	unsigned long                                      bDisableWarningWhenAnimNotFound : 1;         // 0x0308 (0x0004) [0x00400000]
	unsigned long                                      bOverrideAttachmentOwnerVisibility : 1;      // 0x0308 (0x0004) [0x00800000]
	unsigned long                                      bPauseAnims : 1;                             // 0x0308 (0x0004) [0x01000000]
	unsigned long                                      bChartDistanceFactor : 1;                    // 0x0308 (0x0004) [0x02000000]
	unsigned long                                      bEnableLineCheckWithBounds : 1;              // 0x0308 (0x0004) [0x04000000]
	struct FVector                                     LineCheckBoundsScale;                        // 0x030C (0x000C)
	unsigned long                                      bEnableClothSimulation : 1;                  // 0x0318 (0x0004) [0x00000001]
	unsigned long                                      bDisableClothCollision : 1;                  // 0x0318 (0x0004) [0x00000002]
	unsigned long                                      bClothFrozen : 1;                            // 0x0318 (0x0004) [0x00000004]
	unsigned long                                      bAutoFreezeClothWhenNotRendered : 1;         // 0x0318 (0x0004) [0x00000008]
	unsigned long                                      bClothAwakeOnStartup : 1;                    // 0x0318 (0x0004) [0x00000010]
	unsigned long                                      bClothBaseVelClamp : 1;                      // 0x0318 (0x0004) [0x00000020]
	unsigned long                                      bAttachClothVertsToBaseBody : 1;             // 0x0318 (0x0004) [0x00000040]
	unsigned long                                      bIsClothOnStaticObject : 1;                  // 0x0318 (0x0004) [0x00000080]
	unsigned long                                      bUpdatedFixedClothVerts : 1;                 // 0x0318 (0x0004) [0x00000100]
	unsigned long                                      bRecentlyRendered : 1;                       // 0x0318 (0x0004) [0x00000200]
	unsigned long                                      bCacheAnimSequenceNodes : 1;                 // 0x0318 (0x0004) [0x00000400]
	unsigned long                                      bForceMeshObjectUpdates : 1;                 // 0x0318 (0x0004) [0x00000800]
	unsigned long                                      bNeedsInstanceWeightUpdate : 1;              // 0x0318 (0x0004) [0x00001000]
	unsigned long                                      bUseSpecialInfluenceMode : 1;                // 0x0318 (0x0004) [0x00002000]
	unsigned long                                      bResetSpecialInfluence : 1;                  // 0x0318 (0x0004) [0x00004000]
	unsigned long                                      bAlwaysUseInstanceWeights : 1;               // 0x0318 (0x0004) [0x00008000]
	unsigned long                                      bAlwaysUseDynamicIndexBuffer : 1;            // 0x0318 (0x0004) [0x00010000]
	unsigned long                                      bAlwaysUseDynamicTextureCoordinates : 1;     // 0x0318 (0x0004) [0x00020000]
	int                                                DynamicTextureCoordinatesIndex;              // 0x031C (0x0004)
	void*                                              DynamicDiffStore;                            // 0x0320 (0x0004)
	TArray< struct FBonePair >                         InstanceVertexWeightBones;                   // 0x0324 (0x000C)
	TArray< struct FName >                             DynamicDiffNames;                            // 0x0330 (0x000C)
	TArray< struct FName >                             LastPreviewDynamicDiffsNames;                // 0x033C (0x000C)
	struct FVector                                     ClothExternalForce;                          // 0x0348 (0x000C)
	struct FVector                                     ClothWind;                                   // 0x0354 (0x000C)
	struct FVector                                     ClothBaseVelClampRange;                      // 0x0360 (0x000C)
	float                                              ClothBlendWeight;                            // 0x036C (0x0004)
	struct FPointer                                    ClothSim;                                    // 0x0370 (0x0004)
	int                                                SceneIndex;                                  // 0x0374 (0x0004)
	TArray< struct FVector >                           ClothMeshPosData;                            // 0x0378 (0x000C)
	TArray< struct FVector >                           ClothMeshNormalData;                         // 0x0384 (0x000C)
	TArray< int >                                      ClothMeshIndexData;                          // 0x0390 (0x000C)
	int                                                NumClothMeshVerts;                           // 0x039C (0x0004)
	int                                                NumClothMeshIndices;                         // 0x03A0 (0x0004)
	TArray< int >                                      ClothMeshParentData;                         // 0x03A4 (0x000C)
	int                                                NumClothMeshParentIndices;                   // 0x03B0 (0x0004)
	TArray< struct FVector >                           ClothMeshWeldedPosData;                      // 0x03B4 (0x000C)
	TArray< struct FVector >                           ClothMeshWeldedNormalData;                   // 0x03C0 (0x000C)
	TArray< int >                                      ClothMeshWeldedIndexData;                    // 0x03CC (0x000C)
	int                                                ClothDirtyBufferFlag;                        // 0x03D8 (0x0004)
	unsigned char                                      ClothRBChannel;                              // 0x03DC (0x0001)
	struct FRBCollisionChannelContainer                ClothRBCollideWithChannels;                  // 0x03E0 (0x0004)
	float                                              ClothForceScale;                             // 0x03E4 (0x0004)
	float                                              ClothImpulseScale;                           // 0x03E8 (0x0004)
	float                                              ClothAttachmentTearFactor;                   // 0x03EC (0x0004)
	unsigned long                                      bClothUseCompartment : 1;                    // 0x03F0 (0x0004) [0x00000001]
	float                                              MinDistanceForClothReset;                    // 0x03F4 (0x0004)
	struct FVector                                     LastClothLocation;                           // 0x03F8 (0x000C)
	struct FPointer                                    SoftBodySim;                                 // 0x0404 (0x0004)
	int                                                SoftBodySceneIndex;                          // 0x0408 (0x0004)
	unsigned long                                      bEnableSoftBodySimulation : 1;               // 0x040C (0x0004) [0x00000001]
	TArray< struct FVector >                           SoftBodyTetraPosData;                        // 0x0410 (0x000C)
	TArray< int >                                      SoftBodyTetraIndexData;                      // 0x041C (0x000C)
	int                                                NumSoftBodyTetraVerts;                       // 0x0428 (0x0004)
	int                                                NumSoftBodyTetraIndices;                     // 0x042C (0x0004)
	float                                              SoftBodyImpulseScale;                        // 0x0430 (0x0004)
	unsigned long                                      bSoftBodyFrozen : 1;                         // 0x0434 (0x0004) [0x00000001]
	unsigned long                                      bAutoFreezeSoftBodyWhenNotRendered : 1;      // 0x0434 (0x0004) [0x00000002]
	unsigned long                                      bSoftBodyAwakeOnStartup : 1;                 // 0x0434 (0x0004) [0x00000004]
	unsigned long                                      bSoftBodyUseCompartment : 1;                 // 0x0434 (0x0004) [0x00000008]
	unsigned char                                      SoftBodyRBChannel;                           // 0x0438 (0x0001)
	struct FRBCollisionChannelContainer                SoftBodyRBCollideWithChannels;               // 0x043C (0x0004)
	struct FPointer                                    SoftBodyASVPlane;                            // 0x0440 (0x0004)
	class UMaterial*                                   LimitMaterial;                               // 0x0444 (0x0004)
	struct FBoneAtom                                   RootMotionDelta;                             // 0x0448 (0x0028)
	struct FVector                                     RootMotionVelocity;                          // 0x0470 (0x000C)
	struct FVector                                     RootBoneTranslation;                         // 0x047C (0x000C)
	struct FVector                                     RootMotionAccelScale;                        // 0x0488 (0x000C)
	unsigned char                                      RootMotionMode;                              // 0x0494 (0x0001)
	unsigned char                                      PreviousRMM;                                 // 0x0495 (0x0001)
	unsigned char                                      PendingRMM;                                  // 0x0496 (0x0001)
	unsigned char                                      OldPendingRMM;                               // 0x0497 (0x0001)
	int                                                bRMMOneFrameDelay;                           // 0x0498 (0x0004)
	unsigned char                                      RootMotionRotationMode;                      // 0x049C (0x0001)
	unsigned char                                      FaceFXBlendMode;                             // 0x049D (0x0001)
	struct FPointer                                    FaceFXActorInstance;                         // 0x04A0 (0x0004)
	void*                                              CachedFaceFXAudioComp;                       // 0x04A4 (0x0004)
	TArray< unsigned char >                            BoneVisibility;                              // 0x04A8 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SkeletalMeshComponent" );

		return ClassPointer;
	};

public:
	bool BoneIsChildOfEx ( int BoneIndex, int ParentBoneIndex )
	{
		static UFunction* pfnBoneIsChildOfEx = NULL;

		if ( !pfnBoneIsChildOfEx )
			pfnBoneIsChildOfEx = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.BoneIsChildOfEx" );

		USkeletalMeshComponent_execBoneIsChildOfEx_Parms BoneIsChildOfEx_Parms;
		BoneIsChildOfEx_Parms.BoneIndex = BoneIndex;
		BoneIsChildOfEx_Parms.ParentBoneIndex = ParentBoneIndex;

		this->ProcessEvent( pfnBoneIsChildOfEx, &BoneIsChildOfEx_Parms, NULL );

		return BoneIsChildOfEx_Parms.ReturnValue;
	};

	void BreakConstraintEx ( struct FName BoneName )
	{
		static UFunction* pfnBreakConstraintEx = NULL;

		if ( !pfnBreakConstraintEx )
			pfnBreakConstraintEx = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.BreakConstraintEx" );

		USkeletalMeshComponent_execBreakConstraintEx_Parms BreakConstraintEx_Parms;
		memcpy( &BreakConstraintEx_Parms.BoneName, &BoneName, 0x8 );

		this->ProcessEvent( pfnBreakConstraintEx, &BreakConstraintEx_Parms, NULL );
	};

	void BreakConstraint ( struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName, unsigned long bVelChange/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnBreakConstraint = NULL;

		if ( !pfnBreakConstraint )
			pfnBreakConstraint = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.BreakConstraint" );

		USkeletalMeshComponent_execBreakConstraint_Parms BreakConstraint_Parms;
		memcpy( &BreakConstraint_Parms.Impulse, &Impulse, 0xC );
		memcpy( &BreakConstraint_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &BreakConstraint_Parms.InBoneName, &InBoneName, 0x8 );
		BreakConstraint_Parms.bVelChange = bVelChange;

		this->ProcessEvent( pfnBreakConstraint, &BreakConstraint_Parms, NULL );
	};

	void SkelMeshCompOnParticleSystemFinished ( void* PSC )
	{
		static UFunction* pfnSkelMeshCompOnParticleSystemFinished = NULL;

		if ( !pfnSkelMeshCompOnParticleSystemFinished )
			pfnSkelMeshCompOnParticleSystemFinished = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SkelMeshCompOnParticleSystemFinished" );

		USkeletalMeshComponent_execSkelMeshCompOnParticleSystemFinished_Parms SkelMeshCompOnParticleSystemFinished_Parms;
		SkelMeshCompOnParticleSystemFinished_Parms.PSC = PSC;

		this->ProcessEvent( pfnSkelMeshCompOnParticleSystemFinished, &SkelMeshCompOnParticleSystemFinished_Parms, NULL );
	};

	void eventPlayParticleEffect ( void* AnimNotifyData )
	{
		static UFunction* pfnPlayParticleEffect = NULL;

		if ( !pfnPlayParticleEffect )
			pfnPlayParticleEffect = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.PlayParticleEffect" );

		USkeletalMeshComponent_eventPlayParticleEffect_Parms PlayParticleEffect_Parms;
		PlayParticleEffect_Parms.AnimNotifyData = AnimNotifyData;

		this->ProcessEvent( pfnPlayParticleEffect, &PlayParticleEffect_Parms, NULL );
	};

	void StopAnim ()
	{
		static UFunction* pfnStopAnim = NULL;

		if ( !pfnStopAnim )
			pfnStopAnim = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.StopAnim" );

		USkeletalMeshComponent_execStopAnim_Parms StopAnim_Parms;

		this->ProcessEvent( pfnStopAnim, &StopAnim_Parms, NULL );
	};

	void PlayAnim ( struct FName AnimName, float Duration/*CPF_OptionalParm*/, unsigned long bLoop/*CPF_OptionalParm*/, unsigned long bRestartIfAlreadyPlaying/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnPlayAnim = NULL;

		if ( !pfnPlayAnim )
			pfnPlayAnim = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.PlayAnim" );

		USkeletalMeshComponent_execPlayAnim_Parms PlayAnim_Parms;
		memcpy( &PlayAnim_Parms.AnimName, &AnimName, 0x8 );
		PlayAnim_Parms.Duration = Duration;
		PlayAnim_Parms.bLoop = bLoop;
		PlayAnim_Parms.bRestartIfAlreadyPlaying = bRestartIfAlreadyPlaying;

		this->ProcessEvent( pfnPlayAnim, &PlayAnim_Parms, NULL );
	};

	void UpdateMeshForBrokenConstraints ()
	{
		static UFunction* pfnUpdateMeshForBrokenConstraints = NULL;

		if ( !pfnUpdateMeshForBrokenConstraints )
			pfnUpdateMeshForBrokenConstraints = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateMeshForBrokenConstraints" );

		USkeletalMeshComponent_execUpdateMeshForBrokenConstraints_Parms UpdateMeshForBrokenConstraints_Parms;

		pfnUpdateMeshForBrokenConstraints->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateMeshForBrokenConstraints, &UpdateMeshForBrokenConstraints_Parms, NULL );
		pfnUpdateMeshForBrokenConstraints->FunctionFlags |= 0x400;
	};

	bool IsBoneHidden ( int BoneIndex )
	{
		static UFunction* pfnIsBoneHidden = NULL;

		if ( !pfnIsBoneHidden )
			pfnIsBoneHidden = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.IsBoneHidden" );

		USkeletalMeshComponent_execIsBoneHidden_Parms IsBoneHidden_Parms;
		IsBoneHidden_Parms.BoneIndex = BoneIndex;

		pfnIsBoneHidden->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsBoneHidden, &IsBoneHidden_Parms, NULL );
		pfnIsBoneHidden->FunctionFlags |= 0x400;

		return IsBoneHidden_Parms.ReturnValue;
	};

	void UnHideBone ( int BoneIndex )
	{
		static UFunction* pfnUnHideBone = NULL;

		if ( !pfnUnHideBone )
			pfnUnHideBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UnHideBone" );

		USkeletalMeshComponent_execUnHideBone_Parms UnHideBone_Parms;
		UnHideBone_Parms.BoneIndex = BoneIndex;

		pfnUnHideBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUnHideBone, &UnHideBone_Parms, NULL );
		pfnUnHideBone->FunctionFlags |= 0x400;
	};

	void HideBone ( int BoneIndex, unsigned long bTermBodiesBelow )
	{
		static UFunction* pfnHideBone = NULL;

		if ( !pfnHideBone )
			pfnHideBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.HideBone" );

		USkeletalMeshComponent_execHideBone_Parms HideBone_Parms;
		HideBone_Parms.BoneIndex = BoneIndex;
		HideBone_Parms.bTermBodiesBelow = bTermBodiesBelow;

		pfnHideBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnHideBone, &HideBone_Parms, NULL );
		pfnHideBone->FunctionFlags |= 0x400;
	};

	void SetFaceFXRegisterEx ( struct FString RegName, unsigned char RegOp, float FirstValue, float FirstInterpDuration, float NextValue, float NextInterpDuration )
	{
		static UFunction* pfnSetFaceFXRegisterEx = NULL;

		if ( !pfnSetFaceFXRegisterEx )
			pfnSetFaceFXRegisterEx = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetFaceFXRegisterEx" );

		USkeletalMeshComponent_execSetFaceFXRegisterEx_Parms SetFaceFXRegisterEx_Parms;
		memcpy( &SetFaceFXRegisterEx_Parms.RegName, &RegName, 0xC );
		SetFaceFXRegisterEx_Parms.RegOp = RegOp;
		SetFaceFXRegisterEx_Parms.FirstValue = FirstValue;
		SetFaceFXRegisterEx_Parms.FirstInterpDuration = FirstInterpDuration;
		SetFaceFXRegisterEx_Parms.NextValue = NextValue;
		SetFaceFXRegisterEx_Parms.NextInterpDuration = NextInterpDuration;

		pfnSetFaceFXRegisterEx->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetFaceFXRegisterEx, &SetFaceFXRegisterEx_Parms, NULL );
		pfnSetFaceFXRegisterEx->FunctionFlags |= 0x400;
	};

	void SetFaceFXRegister ( struct FString RegName, float RegVal, unsigned char RegOp, float InterpDuration/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetFaceFXRegister = NULL;

		if ( !pfnSetFaceFXRegister )
			pfnSetFaceFXRegister = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetFaceFXRegister" );

		USkeletalMeshComponent_execSetFaceFXRegister_Parms SetFaceFXRegister_Parms;
		memcpy( &SetFaceFXRegister_Parms.RegName, &RegName, 0xC );
		SetFaceFXRegister_Parms.RegVal = RegVal;
		SetFaceFXRegister_Parms.RegOp = RegOp;
		SetFaceFXRegister_Parms.InterpDuration = InterpDuration;

		pfnSetFaceFXRegister->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetFaceFXRegister, &SetFaceFXRegister_Parms, NULL );
		pfnSetFaceFXRegister->FunctionFlags |= 0x400;
	};

	float GetFaceFXRegister ( struct FString RegName )
	{
		static UFunction* pfnGetFaceFXRegister = NULL;

		if ( !pfnGetFaceFXRegister )
			pfnGetFaceFXRegister = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetFaceFXRegister" );

		USkeletalMeshComponent_execGetFaceFXRegister_Parms GetFaceFXRegister_Parms;
		memcpy( &GetFaceFXRegister_Parms.RegName, &RegName, 0xC );

		pfnGetFaceFXRegister->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetFaceFXRegister, &GetFaceFXRegister_Parms, NULL );
		pfnGetFaceFXRegister->FunctionFlags |= 0x400;

		return GetFaceFXRegister_Parms.ReturnValue;
	};

	void DeclareFaceFXRegister ( struct FString RegName )
	{
		static UFunction* pfnDeclareFaceFXRegister = NULL;

		if ( !pfnDeclareFaceFXRegister )
			pfnDeclareFaceFXRegister = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.DeclareFaceFXRegister" );

		USkeletalMeshComponent_execDeclareFaceFXRegister_Parms DeclareFaceFXRegister_Parms;
		memcpy( &DeclareFaceFXRegister_Parms.RegName, &RegName, 0xC );

		pfnDeclareFaceFXRegister->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDeclareFaceFXRegister, &DeclareFaceFXRegister_Parms, NULL );
		pfnDeclareFaceFXRegister->FunctionFlags |= 0x400;
	};

	bool IsPlayingFaceFXAnim ()
	{
		static UFunction* pfnIsPlayingFaceFXAnim = NULL;

		if ( !pfnIsPlayingFaceFXAnim )
			pfnIsPlayingFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.IsPlayingFaceFXAnim" );

		USkeletalMeshComponent_execIsPlayingFaceFXAnim_Parms IsPlayingFaceFXAnim_Parms;

		pfnIsPlayingFaceFXAnim->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsPlayingFaceFXAnim, &IsPlayingFaceFXAnim_Parms, NULL );
		pfnIsPlayingFaceFXAnim->FunctionFlags |= 0x400;

		return IsPlayingFaceFXAnim_Parms.ReturnValue;
	};

	void StopFaceFXAnim ()
	{
		static UFunction* pfnStopFaceFXAnim = NULL;

		if ( !pfnStopFaceFXAnim )
			pfnStopFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.StopFaceFXAnim" );

		USkeletalMeshComponent_execStopFaceFXAnim_Parms StopFaceFXAnim_Parms;

		pfnStopFaceFXAnim->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnStopFaceFXAnim, &StopFaceFXAnim_Parms, NULL );
		pfnStopFaceFXAnim->FunctionFlags |= 0x400;
	};

	bool PlayFaceFXAnim ( void* FaceFXAnimSetRef, struct FString AnimName, struct FString GroupName, void* SoundCueToPlay )
	{
		static UFunction* pfnPlayFaceFXAnim = NULL;

		if ( !pfnPlayFaceFXAnim )
			pfnPlayFaceFXAnim = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.PlayFaceFXAnim" );

		USkeletalMeshComponent_execPlayFaceFXAnim_Parms PlayFaceFXAnim_Parms;
		PlayFaceFXAnim_Parms.FaceFXAnimSetRef = FaceFXAnimSetRef;
		memcpy( &PlayFaceFXAnim_Parms.AnimName, &AnimName, 0xC );
		memcpy( &PlayFaceFXAnim_Parms.GroupName, &GroupName, 0xC );
		PlayFaceFXAnim_Parms.SoundCueToPlay = SoundCueToPlay;

		pfnPlayFaceFXAnim->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnPlayFaceFXAnim, &PlayFaceFXAnim_Parms, NULL );
		pfnPlayFaceFXAnim->FunctionFlags |= 0x400;

		return PlayFaceFXAnim_Parms.ReturnValue;
	};

	void ToggleInstanceVertexWeights ( unsigned long bEnable )
	{
		static UFunction* pfnToggleInstanceVertexWeights = NULL;

		if ( !pfnToggleInstanceVertexWeights )
			pfnToggleInstanceVertexWeights = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.ToggleInstanceVertexWeights" );

		USkeletalMeshComponent_execToggleInstanceVertexWeights_Parms ToggleInstanceVertexWeights_Parms;
		ToggleInstanceVertexWeights_Parms.bEnable = bEnable;

		pfnToggleInstanceVertexWeights->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnToggleInstanceVertexWeights, &ToggleInstanceVertexWeights_Parms, NULL );
		pfnToggleInstanceVertexWeights->FunctionFlags |= 0x400;
	};

	void UpdateInstanceVertexWeightBones ( TArray< struct FBonePair > BonePairs )
	{
		static UFunction* pfnUpdateInstanceVertexWeightBones = NULL;

		if ( !pfnUpdateInstanceVertexWeightBones )
			pfnUpdateInstanceVertexWeightBones = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateInstanceVertexWeightBones" );

		USkeletalMeshComponent_execUpdateInstanceVertexWeightBones_Parms UpdateInstanceVertexWeightBones_Parms;
		memcpy( &UpdateInstanceVertexWeightBones_Parms.BonePairs, &BonePairs, 0xC );

		pfnUpdateInstanceVertexWeightBones->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateInstanceVertexWeightBones, &UpdateInstanceVertexWeightBones_Parms, NULL );
		pfnUpdateInstanceVertexWeightBones->FunctionFlags |= 0x400;
	};

	int FindInstanceVertexweightBonePair ( struct FBonePair Bones )
	{
		static UFunction* pfnFindInstanceVertexweightBonePair = NULL;

		if ( !pfnFindInstanceVertexweightBonePair )
			pfnFindInstanceVertexweightBonePair = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindInstanceVertexweightBonePair" );

		USkeletalMeshComponent_execFindInstanceVertexweightBonePair_Parms FindInstanceVertexweightBonePair_Parms;
		memcpy( &FindInstanceVertexweightBonePair_Parms.Bones, &Bones, 0x10 );

		pfnFindInstanceVertexweightBonePair->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindInstanceVertexweightBonePair, &FindInstanceVertexweightBonePair_Parms, NULL );
		pfnFindInstanceVertexweightBonePair->FunctionFlags |= 0x400;

		return FindInstanceVertexweightBonePair_Parms.ReturnValue;
	};

	void RemoveInstanceVertexWeightBoneParented ( struct FName BoneName )
	{
		static UFunction* pfnRemoveInstanceVertexWeightBoneParented = NULL;

		if ( !pfnRemoveInstanceVertexWeightBoneParented )
			pfnRemoveInstanceVertexWeightBoneParented = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.RemoveInstanceVertexWeightBoneParented" );

		USkeletalMeshComponent_execRemoveInstanceVertexWeightBoneParented_Parms RemoveInstanceVertexWeightBoneParented_Parms;
		memcpy( &RemoveInstanceVertexWeightBoneParented_Parms.BoneName, &BoneName, 0x8 );

		pfnRemoveInstanceVertexWeightBoneParented->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRemoveInstanceVertexWeightBoneParented, &RemoveInstanceVertexWeightBoneParented_Parms, NULL );
		pfnRemoveInstanceVertexWeightBoneParented->FunctionFlags |= 0x400;
	};

	void AddDynamicDiffName ( struct FName DiffName )
	{
		static UFunction* pfnAddDynamicDiffName = NULL;

		if ( !pfnAddDynamicDiffName )
			pfnAddDynamicDiffName = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AddDynamicDiffName" );

		USkeletalMeshComponent_execAddDynamicDiffName_Parms AddDynamicDiffName_Parms;
		memcpy( &AddDynamicDiffName_Parms.DiffName, &DiffName, 0x8 );

		this->ProcessEvent( pfnAddDynamicDiffName, &AddDynamicDiffName_Parms, NULL );
	};

	void AddInstanceVertexWeightBonePair ( struct FName Bone1, struct FName Bone2 )
	{
		static UFunction* pfnAddInstanceVertexWeightBonePair = NULL;

		if ( !pfnAddInstanceVertexWeightBonePair )
			pfnAddInstanceVertexWeightBonePair = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AddInstanceVertexWeightBonePair" );

		USkeletalMeshComponent_execAddInstanceVertexWeightBonePair_Parms AddInstanceVertexWeightBonePair_Parms;
		memcpy( &AddInstanceVertexWeightBonePair_Parms.Bone1, &Bone1, 0x8 );
		memcpy( &AddInstanceVertexWeightBonePair_Parms.Bone2, &Bone2, 0x8 );

		this->ProcessEvent( pfnAddInstanceVertexWeightBonePair, &AddInstanceVertexWeightBonePair_Parms, NULL );
	};

	void AddInstanceVertexWeightBoneParented ( struct FName BoneName, unsigned long bPairWithParent/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddInstanceVertexWeightBoneParented = NULL;

		if ( !pfnAddInstanceVertexWeightBoneParented )
			pfnAddInstanceVertexWeightBoneParented = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AddInstanceVertexWeightBoneParented" );

		USkeletalMeshComponent_execAddInstanceVertexWeightBoneParented_Parms AddInstanceVertexWeightBoneParented_Parms;
		memcpy( &AddInstanceVertexWeightBoneParented_Parms.BoneName, &BoneName, 0x8 );
		AddInstanceVertexWeightBoneParented_Parms.bPairWithParent = bPairWithParent;

		pfnAddInstanceVertexWeightBoneParented->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAddInstanceVertexWeightBoneParented, &AddInstanceVertexWeightBoneParented_Parms, NULL );
		pfnAddInstanceVertexWeightBoneParented->FunctionFlags |= 0x400;
	};

	bool GetBonesWithinRadius ( struct FVector Origin, float Radius, int TraceFlags, TArray< struct FName >* out_Bones )
	{
		static UFunction* pfnGetBonesWithinRadius = NULL;

		if ( !pfnGetBonesWithinRadius )
			pfnGetBonesWithinRadius = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBonesWithinRadius" );

		USkeletalMeshComponent_execGetBonesWithinRadius_Parms GetBonesWithinRadius_Parms;
		memcpy( &GetBonesWithinRadius_Parms.Origin, &Origin, 0xC );
		GetBonesWithinRadius_Parms.Radius = Radius;
		GetBonesWithinRadius_Parms.TraceFlags = TraceFlags;

		pfnGetBonesWithinRadius->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBonesWithinRadius, &GetBonesWithinRadius_Parms, NULL );
		pfnGetBonesWithinRadius->FunctionFlags |= 0x400;

		if ( out_Bones )
			memcpy( out_Bones, &GetBonesWithinRadius_Parms.out_Bones, 0xC ); // CPF_OutParm

		return GetBonesWithinRadius_Parms.ReturnValue;
	};

	void UpdateAnimations ()
	{
		static UFunction* pfnUpdateAnimations = NULL;

		if ( !pfnUpdateAnimations )
			pfnUpdateAnimations = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateAnimations" );

		USkeletalMeshComponent_execUpdateAnimations_Parms UpdateAnimations_Parms;

		pfnUpdateAnimations->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateAnimations, &UpdateAnimations_Parms, NULL );
		pfnUpdateAnimations->FunctionFlags |= 0x400;
	};

	void ForceSkelUpdate ()
	{
		static UFunction* pfnForceSkelUpdate = NULL;

		if ( !pfnForceSkelUpdate )
			pfnForceSkelUpdate = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.ForceSkelUpdate" );

		USkeletalMeshComponent_execForceSkelUpdate_Parms ForceSkelUpdate_Parms;

		pfnForceSkelUpdate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceSkelUpdate, &ForceSkelUpdate_Parms, NULL );
		pfnForceSkelUpdate->FunctionFlags |= 0x400;
	};

	void UpdateRBBonesFromSpaceBases ( unsigned long bMoveUnfixedBodies, unsigned long bTeleport )
	{
		static UFunction* pfnUpdateRBBonesFromSpaceBases = NULL;

		if ( !pfnUpdateRBBonesFromSpaceBases )
			pfnUpdateRBBonesFromSpaceBases = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateRBBonesFromSpaceBases" );

		USkeletalMeshComponent_execUpdateRBBonesFromSpaceBases_Parms UpdateRBBonesFromSpaceBases_Parms;
		UpdateRBBonesFromSpaceBases_Parms.bMoveUnfixedBodies = bMoveUnfixedBodies;
		UpdateRBBonesFromSpaceBases_Parms.bTeleport = bTeleport;

		pfnUpdateRBBonesFromSpaceBases->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRBBonesFromSpaceBases, &UpdateRBBonesFromSpaceBases_Parms, NULL );
		pfnUpdateRBBonesFromSpaceBases->FunctionFlags |= 0x400;
	};

	void SetHasPhysicsAssetInstance ( unsigned long bHasInstance )
	{
		static UFunction* pfnSetHasPhysicsAssetInstance = NULL;

		if ( !pfnSetHasPhysicsAssetInstance )
			pfnSetHasPhysicsAssetInstance = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetHasPhysicsAssetInstance" );

		USkeletalMeshComponent_execSetHasPhysicsAssetInstance_Parms SetHasPhysicsAssetInstance_Parms;
		SetHasPhysicsAssetInstance_Parms.bHasInstance = bHasInstance;

		pfnSetHasPhysicsAssetInstance->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetHasPhysicsAssetInstance, &SetHasPhysicsAssetInstance_Parms, NULL );
		pfnSetHasPhysicsAssetInstance->FunctionFlags |= 0x400;
	};

	void* FindBodyInstanceNamed ( struct FName BoneName )
	{
		static UFunction* pfnFindBodyInstanceNamed = NULL;

		if ( !pfnFindBodyInstanceNamed )
			pfnFindBodyInstanceNamed = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindBodyInstanceNamed" );

		USkeletalMeshComponent_execFindBodyInstanceNamed_Parms FindBodyInstanceNamed_Parms;
		memcpy( &FindBodyInstanceNamed_Parms.BoneName, &BoneName, 0x8 );

		pfnFindBodyInstanceNamed->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindBodyInstanceNamed, &FindBodyInstanceNamed_Parms, NULL );
		pfnFindBodyInstanceNamed->FunctionFlags |= 0x400;

		return FindBodyInstanceNamed_Parms.ReturnValue;
	};

	struct FName FindConstraintBoneName ( int ConstraintIndex )
	{
		static UFunction* pfnFindConstraintBoneName = NULL;

		if ( !pfnFindConstraintBoneName )
			pfnFindConstraintBoneName = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindConstraintBoneName" );

		USkeletalMeshComponent_execFindConstraintBoneName_Parms FindConstraintBoneName_Parms;
		FindConstraintBoneName_Parms.ConstraintIndex = ConstraintIndex;

		pfnFindConstraintBoneName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindConstraintBoneName, &FindConstraintBoneName_Parms, NULL );
		pfnFindConstraintBoneName->FunctionFlags |= 0x400;

		return FindConstraintBoneName_Parms.ReturnValue;
	};

	int FindConstraintIndex ( struct FName ConstraintName )
	{
		static UFunction* pfnFindConstraintIndex = NULL;

		if ( !pfnFindConstraintIndex )
			pfnFindConstraintIndex = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindConstraintIndex" );

		USkeletalMeshComponent_execFindConstraintIndex_Parms FindConstraintIndex_Parms;
		memcpy( &FindConstraintIndex_Parms.ConstraintName, &ConstraintName, 0x8 );

		pfnFindConstraintIndex->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindConstraintIndex, &FindConstraintIndex_Parms, NULL );
		pfnFindConstraintIndex->FunctionFlags |= 0x400;

		return FindConstraintIndex_Parms.ReturnValue;
	};

	void InitSkelControls ()
	{
		static UFunction* pfnInitSkelControls = NULL;

		if ( !pfnInitSkelControls )
			pfnInitSkelControls = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.InitSkelControls" );

		USkeletalMeshComponent_execInitSkelControls_Parms InitSkelControls_Parms;

		pfnInitSkelControls->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnInitSkelControls, &InitSkelControls_Parms, NULL );
		pfnInitSkelControls->FunctionFlags |= 0x400;
	};

	void UpdateParentBoneMap ()
	{
		static UFunction* pfnUpdateParentBoneMap = NULL;

		if ( !pfnUpdateParentBoneMap )
			pfnUpdateParentBoneMap = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateParentBoneMap" );

		USkeletalMeshComponent_execUpdateParentBoneMap_Parms UpdateParentBoneMap_Parms;

		pfnUpdateParentBoneMap->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateParentBoneMap, &UpdateParentBoneMap_Parms, NULL );
		pfnUpdateParentBoneMap->FunctionFlags |= 0x400;
	};

	void SetParentAnimComponent ( class USkeletalMeshComponent* NewParentAnimComp )
	{
		static UFunction* pfnSetParentAnimComponent = NULL;

		if ( !pfnSetParentAnimComponent )
			pfnSetParentAnimComponent = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetParentAnimComponent" );

		USkeletalMeshComponent_execSetParentAnimComponent_Parms SetParentAnimComponent_Parms;
		SetParentAnimComponent_Parms.NewParentAnimComp = NewParentAnimComp;

		pfnSetParentAnimComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetParentAnimComponent, &SetParentAnimComponent_Parms, NULL );
		pfnSetParentAnimComponent->FunctionFlags |= 0x400;
	};

	void SetAnimTreeTemplate ( void* NewTemplate )
	{
		static UFunction* pfnSetAnimTreeTemplate = NULL;

		if ( !pfnSetAnimTreeTemplate )
			pfnSetAnimTreeTemplate = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetAnimTreeTemplate" );

		USkeletalMeshComponent_execSetAnimTreeTemplate_Parms SetAnimTreeTemplate_Parms;
		SetAnimTreeTemplate_Parms.NewTemplate = NewTemplate;

		pfnSetAnimTreeTemplate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAnimTreeTemplate, &SetAnimTreeTemplate_Parms, NULL );
		pfnSetAnimTreeTemplate->FunctionFlags |= 0x400;
	};

	struct FVector GetClosestCollidingBoneLocation ( struct FVector TestLocation, unsigned long bCheckZeroExtent, unsigned long bCheckNonZeroExtent )
	{
		static UFunction* pfnGetClosestCollidingBoneLocation = NULL;

		if ( !pfnGetClosestCollidingBoneLocation )
			pfnGetClosestCollidingBoneLocation = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClosestCollidingBoneLocation" );

		USkeletalMeshComponent_execGetClosestCollidingBoneLocation_Parms GetClosestCollidingBoneLocation_Parms;
		memcpy( &GetClosestCollidingBoneLocation_Parms.TestLocation, &TestLocation, 0xC );
		GetClosestCollidingBoneLocation_Parms.bCheckZeroExtent = bCheckZeroExtent;
		GetClosestCollidingBoneLocation_Parms.bCheckNonZeroExtent = bCheckNonZeroExtent;

		pfnGetClosestCollidingBoneLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClosestCollidingBoneLocation, &GetClosestCollidingBoneLocation_Parms, NULL );
		pfnGetClosestCollidingBoneLocation->FunctionFlags |= 0x400;

		return GetClosestCollidingBoneLocation_Parms.ReturnValue;
	};

	struct FName FindClosestBone ( struct FVector TestLocation, float IgnoreScale/*CPF_OptionalParm*/, struct FVector* BoneLocation )
	{
		static UFunction* pfnFindClosestBone = NULL;

		if ( !pfnFindClosestBone )
			pfnFindClosestBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindClosestBone" );

		USkeletalMeshComponent_execFindClosestBone_Parms FindClosestBone_Parms;
		memcpy( &FindClosestBone_Parms.TestLocation, &TestLocation, 0xC );
		FindClosestBone_Parms.IgnoreScale = IgnoreScale;

		pfnFindClosestBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindClosestBone, &FindClosestBone_Parms, NULL );
		pfnFindClosestBone->FunctionFlags |= 0x400;

		if ( BoneLocation )
			memcpy( BoneLocation, &FindClosestBone_Parms.BoneLocation, 0xC ); // CPF_OutParm

		return FindClosestBone_Parms.ReturnValue;
	};

	void TransformFromBoneSpace ( struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation )
	{
		static UFunction* pfnTransformFromBoneSpace = NULL;

		if ( !pfnTransformFromBoneSpace )
			pfnTransformFromBoneSpace = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.TransformFromBoneSpace" );

		USkeletalMeshComponent_execTransformFromBoneSpace_Parms TransformFromBoneSpace_Parms;
		memcpy( &TransformFromBoneSpace_Parms.BoneName, &BoneName, 0x8 );
		memcpy( &TransformFromBoneSpace_Parms.InPosition, &InPosition, 0xC );
		memcpy( &TransformFromBoneSpace_Parms.InRotation, &InRotation, 0xC );

		pfnTransformFromBoneSpace->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTransformFromBoneSpace, &TransformFromBoneSpace_Parms, NULL );
		pfnTransformFromBoneSpace->FunctionFlags |= 0x400;

		if ( OutPosition )
			memcpy( OutPosition, &TransformFromBoneSpace_Parms.OutPosition, 0xC ); // CPF_OutParm
		if ( OutRotation )
			memcpy( OutRotation, &TransformFromBoneSpace_Parms.OutRotation, 0xC ); // CPF_OutParm
	};

	void TransformToBoneSpace ( struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector* OutPosition, struct FRotator* OutRotation )
	{
		static UFunction* pfnTransformToBoneSpace = NULL;

		if ( !pfnTransformToBoneSpace )
			pfnTransformToBoneSpace = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.TransformToBoneSpace" );

		USkeletalMeshComponent_execTransformToBoneSpace_Parms TransformToBoneSpace_Parms;
		memcpy( &TransformToBoneSpace_Parms.BoneName, &BoneName, 0x8 );
		memcpy( &TransformToBoneSpace_Parms.InPosition, &InPosition, 0xC );
		memcpy( &TransformToBoneSpace_Parms.InRotation, &InRotation, 0xC );

		pfnTransformToBoneSpace->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnTransformToBoneSpace, &TransformToBoneSpace_Parms, NULL );
		pfnTransformToBoneSpace->FunctionFlags |= 0x400;

		if ( OutPosition )
			memcpy( OutPosition, &TransformToBoneSpace_Parms.OutPosition, 0xC ); // CPF_OutParm
		if ( OutRotation )
			memcpy( OutRotation, &TransformToBoneSpace_Parms.OutRotation, 0xC ); // CPF_OutParm
	};

	struct FVector GetBoneAxis ( struct FName BoneName, unsigned char Axis )
	{
		static UFunction* pfnGetBoneAxis = NULL;

		if ( !pfnGetBoneAxis )
			pfnGetBoneAxis = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneAxis" );

		USkeletalMeshComponent_execGetBoneAxis_Parms GetBoneAxis_Parms;
		memcpy( &GetBoneAxis_Parms.BoneName, &BoneName, 0x8 );
		GetBoneAxis_Parms.Axis = Axis;

		pfnGetBoneAxis->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneAxis, &GetBoneAxis_Parms, NULL );
		pfnGetBoneAxis->FunctionFlags |= 0x400;

		return GetBoneAxis_Parms.ReturnValue;
	};

	struct FVector GetRefPosePosition ( int BoneIndex )
	{
		static UFunction* pfnGetRefPosePosition = NULL;

		if ( !pfnGetRefPosePosition )
			pfnGetRefPosePosition = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetRefPosePosition" );

		USkeletalMeshComponent_execGetRefPosePosition_Parms GetRefPosePosition_Parms;
		GetRefPosePosition_Parms.BoneIndex = BoneIndex;

		pfnGetRefPosePosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetRefPosePosition, &GetRefPosePosition_Parms, NULL );
		pfnGetRefPosePosition->FunctionFlags |= 0x400;

		return GetRefPosePosition_Parms.ReturnValue;
	};

	bool BoneIsChildOf ( struct FName BoneName, struct FName ParentBoneName )
	{
		static UFunction* pfnBoneIsChildOf = NULL;

		if ( !pfnBoneIsChildOf )
			pfnBoneIsChildOf = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.BoneIsChildOf" );

		USkeletalMeshComponent_execBoneIsChildOf_Parms BoneIsChildOf_Parms;
		memcpy( &BoneIsChildOf_Parms.BoneName, &BoneName, 0x8 );
		memcpy( &BoneIsChildOf_Parms.ParentBoneName, &ParentBoneName, 0x8 );

		pfnBoneIsChildOf->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnBoneIsChildOf, &BoneIsChildOf_Parms, NULL );
		pfnBoneIsChildOf->FunctionFlags |= 0x400;

		return BoneIsChildOf_Parms.ReturnValue;
	};

	void GetBoneNames ( TArray< struct FName >* BoneNames )
	{
		static UFunction* pfnGetBoneNames = NULL;

		if ( !pfnGetBoneNames )
			pfnGetBoneNames = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneNames" );

		USkeletalMeshComponent_execGetBoneNames_Parms GetBoneNames_Parms;

		pfnGetBoneNames->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneNames, &GetBoneNames_Parms, NULL );
		pfnGetBoneNames->FunctionFlags |= 0x400;

		if ( BoneNames )
			memcpy( BoneNames, &GetBoneNames_Parms.BoneNames, 0xC ); // CPF_OutParm
	};

	struct FName GetParentBone ( struct FName BoneName )
	{
		static UFunction* pfnGetParentBone = NULL;

		if ( !pfnGetParentBone )
			pfnGetParentBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetParentBone" );

		USkeletalMeshComponent_execGetParentBone_Parms GetParentBone_Parms;
		memcpy( &GetParentBone_Parms.BoneName, &BoneName, 0x8 );

		pfnGetParentBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetParentBone, &GetParentBone_Parms, NULL );
		pfnGetParentBone->FunctionFlags |= 0x400;

		return GetParentBone_Parms.ReturnValue;
	};

	struct FMatrix GetBoneMatrix ( int BoneIndex )
	{
		static UFunction* pfnGetBoneMatrix = NULL;

		if ( !pfnGetBoneMatrix )
			pfnGetBoneMatrix = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneMatrix" );

		USkeletalMeshComponent_execGetBoneMatrix_Parms GetBoneMatrix_Parms;
		GetBoneMatrix_Parms.BoneIndex = BoneIndex;

		pfnGetBoneMatrix->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneMatrix, &GetBoneMatrix_Parms, NULL );
		pfnGetBoneMatrix->FunctionFlags |= 0x400;

		return GetBoneMatrix_Parms.ReturnValue;
	};

	struct FName GetBoneName ( int BoneIndex )
	{
		static UFunction* pfnGetBoneName = NULL;

		if ( !pfnGetBoneName )
			pfnGetBoneName = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneName" );

		USkeletalMeshComponent_execGetBoneName_Parms GetBoneName_Parms;
		GetBoneName_Parms.BoneIndex = BoneIndex;

		pfnGetBoneName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneName, &GetBoneName_Parms, NULL );
		pfnGetBoneName->FunctionFlags |= 0x400;

		return GetBoneName_Parms.ReturnValue;
	};

	int MatchRefBone ( struct FName BoneName )
	{
		static UFunction* pfnMatchRefBone = NULL;

		if ( !pfnMatchRefBone )
			pfnMatchRefBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.MatchRefBone" );

		USkeletalMeshComponent_execMatchRefBone_Parms MatchRefBone_Parms;
		memcpy( &MatchRefBone_Parms.BoneName, &BoneName, 0x8 );

		pfnMatchRefBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnMatchRefBone, &MatchRefBone_Parms, NULL );
		pfnMatchRefBone->FunctionFlags |= 0x400;

		return MatchRefBone_Parms.ReturnValue;
	};

	struct FVector GetBoneLocation ( struct FName BoneName, int Space/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetBoneLocation = NULL;

		if ( !pfnGetBoneLocation )
			pfnGetBoneLocation = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneLocation" );

		USkeletalMeshComponent_execGetBoneLocation_Parms GetBoneLocation_Parms;
		memcpy( &GetBoneLocation_Parms.BoneName, &BoneName, 0x8 );
		GetBoneLocation_Parms.Space = Space;

		pfnGetBoneLocation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneLocation, &GetBoneLocation_Parms, NULL );
		pfnGetBoneLocation->FunctionFlags |= 0x400;

		return GetBoneLocation_Parms.ReturnValue;
	};

	struct FQuat GetBoneQuaternion ( struct FName BoneName, int Space/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetBoneQuaternion = NULL;

		if ( !pfnGetBoneQuaternion )
			pfnGetBoneQuaternion = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetBoneQuaternion" );

		USkeletalMeshComponent_execGetBoneQuaternion_Parms GetBoneQuaternion_Parms;
		memcpy( &GetBoneQuaternion_Parms.BoneName, &BoneName, 0x8 );
		GetBoneQuaternion_Parms.Space = Space;

		pfnGetBoneQuaternion->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoneQuaternion, &GetBoneQuaternion_Parms, NULL );
		pfnGetBoneQuaternion->FunctionFlags |= 0x400;

		return GetBoneQuaternion_Parms.ReturnValue;
	};

	void* FindMorphNode ( struct FName InNodeName )
	{
		static UFunction* pfnFindMorphNode = NULL;

		if ( !pfnFindMorphNode )
			pfnFindMorphNode = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindMorphNode" );

		USkeletalMeshComponent_execFindMorphNode_Parms FindMorphNode_Parms;
		memcpy( &FindMorphNode_Parms.InNodeName, &InNodeName, 0x8 );

		pfnFindMorphNode->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindMorphNode, &FindMorphNode_Parms, NULL );
		pfnFindMorphNode->FunctionFlags |= 0x400;

		return FindMorphNode_Parms.ReturnValue;
	};

	void* FindSkelControl ( struct FName InControlName )
	{
		static UFunction* pfnFindSkelControl = NULL;

		if ( !pfnFindSkelControl )
			pfnFindSkelControl = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindSkelControl" );

		USkeletalMeshComponent_execFindSkelControl_Parms FindSkelControl_Parms;
		memcpy( &FindSkelControl_Parms.InControlName, &InControlName, 0x8 );

		pfnFindSkelControl->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindSkelControl, &FindSkelControl_Parms, NULL );
		pfnFindSkelControl->FunctionFlags |= 0x400;

		return FindSkelControl_Parms.ReturnValue;
	};

	void AllAnimNodes ( class UClass* BaseClass, void** Node )
	{
		static UFunction* pfnAllAnimNodes = NULL;

		if ( !pfnAllAnimNodes )
			pfnAllAnimNodes = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AllAnimNodes" );

		USkeletalMeshComponent_execAllAnimNodes_Parms AllAnimNodes_Parms;
		AllAnimNodes_Parms.BaseClass = BaseClass;

		pfnAllAnimNodes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAllAnimNodes, &AllAnimNodes_Parms, NULL );
		pfnAllAnimNodes->FunctionFlags |= 0x400;

		if ( Node )
			*Node = AllAnimNodes_Parms.Node; // CPF_OutParm
	};

	void* FindAnimNode ( struct FName InNodeName )
	{
		static UFunction* pfnFindAnimNode = NULL;

		if ( !pfnFindAnimNode )
			pfnFindAnimNode = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindAnimNode" );

		USkeletalMeshComponent_execFindAnimNode_Parms FindAnimNode_Parms;
		memcpy( &FindAnimNode_Parms.InNodeName, &InNodeName, 0x8 );

		pfnFindAnimNode->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindAnimNode, &FindAnimNode_Parms, NULL );
		pfnFindAnimNode->FunctionFlags |= 0x400;

		return FindAnimNode_Parms.ReturnValue;
	};

	void* FindMorphTarget ( struct FName MorphTargetName )
	{
		static UFunction* pfnFindMorphTarget = NULL;

		if ( !pfnFindMorphTarget )
			pfnFindMorphTarget = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindMorphTarget" );

		USkeletalMeshComponent_execFindMorphTarget_Parms FindMorphTarget_Parms;
		memcpy( &FindMorphTarget_Parms.MorphTargetName, &MorphTargetName, 0x8 );

		pfnFindMorphTarget->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindMorphTarget, &FindMorphTarget_Parms, NULL );
		pfnFindMorphTarget->FunctionFlags |= 0x400;

		return FindMorphTarget_Parms.ReturnValue;
	};

	float GetAnimLength ( struct FName AnimSeqName )
	{
		static UFunction* pfnGetAnimLength = NULL;

		if ( !pfnGetAnimLength )
			pfnGetAnimLength = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetAnimLength" );

		USkeletalMeshComponent_execGetAnimLength_Parms GetAnimLength_Parms;
		memcpy( &GetAnimLength_Parms.AnimSeqName, &AnimSeqName, 0x8 );

		this->ProcessEvent( pfnGetAnimLength, &GetAnimLength_Parms, NULL );

		return GetAnimLength_Parms.ReturnValue;
	};

	float GetAnimRateByDuration ( struct FName AnimSeqName, float Duration )
	{
		static UFunction* pfnGetAnimRateByDuration = NULL;

		if ( !pfnGetAnimRateByDuration )
			pfnGetAnimRateByDuration = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetAnimRateByDuration" );

		USkeletalMeshComponent_execGetAnimRateByDuration_Parms GetAnimRateByDuration_Parms;
		memcpy( &GetAnimRateByDuration_Parms.AnimSeqName, &AnimSeqName, 0x8 );
		GetAnimRateByDuration_Parms.Duration = Duration;

		this->ProcessEvent( pfnGetAnimRateByDuration, &GetAnimRateByDuration_Parms, NULL );

		return GetAnimRateByDuration_Parms.ReturnValue;
	};

	void RestoreSavedAnimSets ()
	{
		static UFunction* pfnRestoreSavedAnimSets = NULL;

		if ( !pfnRestoreSavedAnimSets )
			pfnRestoreSavedAnimSets = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.RestoreSavedAnimSets" );

		USkeletalMeshComponent_execRestoreSavedAnimSets_Parms RestoreSavedAnimSets_Parms;

		pfnRestoreSavedAnimSets->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnRestoreSavedAnimSets, &RestoreSavedAnimSets_Parms, NULL );
		pfnRestoreSavedAnimSets->FunctionFlags |= 0x400;
	};

	void SaveAnimSets ()
	{
		static UFunction* pfnSaveAnimSets = NULL;

		if ( !pfnSaveAnimSets )
			pfnSaveAnimSets = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SaveAnimSets" );

		USkeletalMeshComponent_execSaveAnimSets_Parms SaveAnimSets_Parms;

		pfnSaveAnimSets->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSaveAnimSets, &SaveAnimSets_Parms, NULL );
		pfnSaveAnimSets->FunctionFlags |= 0x400;
	};

	void* FindAnimSequence ( struct FName AnimSeqName )
	{
		static UFunction* pfnFindAnimSequence = NULL;

		if ( !pfnFindAnimSequence )
			pfnFindAnimSequence = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindAnimSequence" );

		USkeletalMeshComponent_execFindAnimSequence_Parms FindAnimSequence_Parms;
		memcpy( &FindAnimSequence_Parms.AnimSeqName, &AnimSeqName, 0x8 );

		pfnFindAnimSequence->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindAnimSequence, &FindAnimSequence_Parms, NULL );
		pfnFindAnimSequence->FunctionFlags |= 0x400;

		return FindAnimSequence_Parms.ReturnValue;
	};

	void WakeSoftBody ()
	{
		static UFunction* pfnWakeSoftBody = NULL;

		if ( !pfnWakeSoftBody )
			pfnWakeSoftBody = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.WakeSoftBody" );

		USkeletalMeshComponent_execWakeSoftBody_Parms WakeSoftBody_Parms;

		pfnWakeSoftBody->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnWakeSoftBody, &WakeSoftBody_Parms, NULL );
		pfnWakeSoftBody->FunctionFlags |= 0x400;
	};

	void SetSoftBodyFrozen ( unsigned long bNewFrozen )
	{
		static UFunction* pfnSetSoftBodyFrozen = NULL;

		if ( !pfnSetSoftBodyFrozen )
			pfnSetSoftBodyFrozen = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetSoftBodyFrozen" );

		USkeletalMeshComponent_execSetSoftBodyFrozen_Parms SetSoftBodyFrozen_Parms;
		SetSoftBodyFrozen_Parms.bNewFrozen = bNewFrozen;

		pfnSetSoftBodyFrozen->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetSoftBodyFrozen, &SetSoftBodyFrozen_Parms, NULL );
		pfnSetSoftBodyFrozen->FunctionFlags |= 0x400;
	};

	void UpdateSoftBodyParams ()
	{
		static UFunction* pfnUpdateSoftBodyParams = NULL;

		if ( !pfnUpdateSoftBodyParams )
			pfnUpdateSoftBodyParams = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateSoftBodyParams" );

		USkeletalMeshComponent_execUpdateSoftBodyParams_Parms UpdateSoftBodyParams_Parms;

		pfnUpdateSoftBodyParams->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateSoftBodyParams, &UpdateSoftBodyParams_Parms, NULL );
		pfnUpdateSoftBodyParams->FunctionFlags |= 0x400;
	};

	void SetClothValidBounds ( struct FVector ClothValidBoundsMin, struct FVector ClothValidBoundsMax )
	{
		static UFunction* pfnSetClothValidBounds = NULL;

		if ( !pfnSetClothValidBounds )
			pfnSetClothValidBounds = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothValidBounds" );

		USkeletalMeshComponent_execSetClothValidBounds_Parms SetClothValidBounds_Parms;
		memcpy( &SetClothValidBounds_Parms.ClothValidBoundsMin, &ClothValidBoundsMin, 0xC );
		memcpy( &SetClothValidBounds_Parms.ClothValidBoundsMax, &ClothValidBoundsMax, 0xC );

		pfnSetClothValidBounds->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothValidBounds, &SetClothValidBounds_Parms, NULL );
		pfnSetClothValidBounds->FunctionFlags |= 0x400;
	};

	void EnableClothValidBounds ( unsigned long IfEnableClothValidBounds )
	{
		static UFunction* pfnEnableClothValidBounds = NULL;

		if ( !pfnEnableClothValidBounds )
			pfnEnableClothValidBounds = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.EnableClothValidBounds" );

		USkeletalMeshComponent_execEnableClothValidBounds_Parms EnableClothValidBounds_Parms;
		EnableClothValidBounds_Parms.IfEnableClothValidBounds = IfEnableClothValidBounds;

		pfnEnableClothValidBounds->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEnableClothValidBounds, &EnableClothValidBounds_Parms, NULL );
		pfnEnableClothValidBounds->FunctionFlags |= 0x400;
	};

	void AttachClothToCollidingShapes ( unsigned long AttatchTwoWay, unsigned long AttachTearable )
	{
		static UFunction* pfnAttachClothToCollidingShapes = NULL;

		if ( !pfnAttachClothToCollidingShapes )
			pfnAttachClothToCollidingShapes = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AttachClothToCollidingShapes" );

		USkeletalMeshComponent_execAttachClothToCollidingShapes_Parms AttachClothToCollidingShapes_Parms;
		AttachClothToCollidingShapes_Parms.AttatchTwoWay = AttatchTwoWay;
		AttachClothToCollidingShapes_Parms.AttachTearable = AttachTearable;

		pfnAttachClothToCollidingShapes->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAttachClothToCollidingShapes, &AttachClothToCollidingShapes_Parms, NULL );
		pfnAttachClothToCollidingShapes->FunctionFlags |= 0x400;
	};

	void SetClothVelocity ( struct FVector VelocityOffSet )
	{
		static UFunction* pfnSetClothVelocity = NULL;

		if ( !pfnSetClothVelocity )
			pfnSetClothVelocity = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothVelocity" );

		USkeletalMeshComponent_execSetClothVelocity_Parms SetClothVelocity_Parms;
		memcpy( &SetClothVelocity_Parms.VelocityOffSet, &VelocityOffSet, 0xC );

		pfnSetClothVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothVelocity, &SetClothVelocity_Parms, NULL );
		pfnSetClothVelocity->FunctionFlags |= 0x400;
	};

	void SetClothPosition ( struct FVector ClothOffSet )
	{
		static UFunction* pfnSetClothPosition = NULL;

		if ( !pfnSetClothPosition )
			pfnSetClothPosition = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothPosition" );

		USkeletalMeshComponent_execSetClothPosition_Parms SetClothPosition_Parms;
		memcpy( &SetClothPosition_Parms.ClothOffSet, &ClothOffSet, 0xC );

		pfnSetClothPosition->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothPosition, &SetClothPosition_Parms, NULL );
		pfnSetClothPosition->FunctionFlags |= 0x400;
	};

	void SetClothSleep ( unsigned long IfClothSleep )
	{
		static UFunction* pfnSetClothSleep = NULL;

		if ( !pfnSetClothSleep )
			pfnSetClothSleep = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothSleep" );

		USkeletalMeshComponent_execSetClothSleep_Parms SetClothSleep_Parms;
		SetClothSleep_Parms.IfClothSleep = IfClothSleep;

		pfnSetClothSleep->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothSleep, &SetClothSleep_Parms, NULL );
		pfnSetClothSleep->FunctionFlags |= 0x400;
	};

	void SetClothThickness ( float ClothThickness )
	{
		static UFunction* pfnSetClothThickness = NULL;

		if ( !pfnSetClothThickness )
			pfnSetClothThickness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothThickness" );

		USkeletalMeshComponent_execSetClothThickness_Parms SetClothThickness_Parms;
		SetClothThickness_Parms.ClothThickness = ClothThickness;

		pfnSetClothThickness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothThickness, &SetClothThickness_Parms, NULL );
		pfnSetClothThickness->FunctionFlags |= 0x400;
	};

	void SetClothTearFactor ( float ClothTearFactor )
	{
		static UFunction* pfnSetClothTearFactor = NULL;

		if ( !pfnSetClothTearFactor )
			pfnSetClothTearFactor = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothTearFactor" );

		USkeletalMeshComponent_execSetClothTearFactor_Parms SetClothTearFactor_Parms;
		SetClothTearFactor_Parms.ClothTearFactor = ClothTearFactor;

		pfnSetClothTearFactor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothTearFactor, &SetClothTearFactor_Parms, NULL );
		pfnSetClothTearFactor->FunctionFlags |= 0x400;
	};

	void SetClothStretchingStiffness ( float ClothStretchingStiffness )
	{
		static UFunction* pfnSetClothStretchingStiffness = NULL;

		if ( !pfnSetClothStretchingStiffness )
			pfnSetClothStretchingStiffness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothStretchingStiffness" );

		USkeletalMeshComponent_execSetClothStretchingStiffness_Parms SetClothStretchingStiffness_Parms;
		SetClothStretchingStiffness_Parms.ClothStretchingStiffness = ClothStretchingStiffness;

		pfnSetClothStretchingStiffness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothStretchingStiffness, &SetClothStretchingStiffness_Parms, NULL );
		pfnSetClothStretchingStiffness->FunctionFlags |= 0x400;
	};

	void SetClothSolverIterations ( int ClothSolverIterations )
	{
		static UFunction* pfnSetClothSolverIterations = NULL;

		if ( !pfnSetClothSolverIterations )
			pfnSetClothSolverIterations = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothSolverIterations" );

		USkeletalMeshComponent_execSetClothSolverIterations_Parms SetClothSolverIterations_Parms;
		SetClothSolverIterations_Parms.ClothSolverIterations = ClothSolverIterations;

		pfnSetClothSolverIterations->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothSolverIterations, &SetClothSolverIterations_Parms, NULL );
		pfnSetClothSolverIterations->FunctionFlags |= 0x400;
	};

	void SetClothSleepLinearVelocity ( float ClothSleepLinearVelocity )
	{
		static UFunction* pfnSetClothSleepLinearVelocity = NULL;

		if ( !pfnSetClothSleepLinearVelocity )
			pfnSetClothSleepLinearVelocity = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothSleepLinearVelocity" );

		USkeletalMeshComponent_execSetClothSleepLinearVelocity_Parms SetClothSleepLinearVelocity_Parms;
		SetClothSleepLinearVelocity_Parms.ClothSleepLinearVelocity = ClothSleepLinearVelocity;

		pfnSetClothSleepLinearVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothSleepLinearVelocity, &SetClothSleepLinearVelocity_Parms, NULL );
		pfnSetClothSleepLinearVelocity->FunctionFlags |= 0x400;
	};

	void SetClothPressure ( float ClothPressure )
	{
		static UFunction* pfnSetClothPressure = NULL;

		if ( !pfnSetClothPressure )
			pfnSetClothPressure = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothPressure" );

		USkeletalMeshComponent_execSetClothPressure_Parms SetClothPressure_Parms;
		SetClothPressure_Parms.ClothPressure = ClothPressure;

		pfnSetClothPressure->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothPressure, &SetClothPressure_Parms, NULL );
		pfnSetClothPressure->FunctionFlags |= 0x400;
	};

	void SetClothFriction ( float ClothFriction )
	{
		static UFunction* pfnSetClothFriction = NULL;

		if ( !pfnSetClothFriction )
			pfnSetClothFriction = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothFriction" );

		USkeletalMeshComponent_execSetClothFriction_Parms SetClothFriction_Parms;
		SetClothFriction_Parms.ClothFriction = ClothFriction;

		pfnSetClothFriction->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothFriction, &SetClothFriction_Parms, NULL );
		pfnSetClothFriction->FunctionFlags |= 0x400;
	};

	void SetClothFlags ( int ClothFlags )
	{
		static UFunction* pfnSetClothFlags = NULL;

		if ( !pfnSetClothFlags )
			pfnSetClothFlags = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothFlags" );

		USkeletalMeshComponent_execSetClothFlags_Parms SetClothFlags_Parms;
		SetClothFlags_Parms.ClothFlags = ClothFlags;

		pfnSetClothFlags->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothFlags, &SetClothFlags_Parms, NULL );
		pfnSetClothFlags->FunctionFlags |= 0x400;
	};

	void SetClothDampingCoefficient ( float ClothDampingCoefficient )
	{
		static UFunction* pfnSetClothDampingCoefficient = NULL;

		if ( !pfnSetClothDampingCoefficient )
			pfnSetClothDampingCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothDampingCoefficient" );

		USkeletalMeshComponent_execSetClothDampingCoefficient_Parms SetClothDampingCoefficient_Parms;
		SetClothDampingCoefficient_Parms.ClothDampingCoefficient = ClothDampingCoefficient;

		pfnSetClothDampingCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothDampingCoefficient, &SetClothDampingCoefficient_Parms, NULL );
		pfnSetClothDampingCoefficient->FunctionFlags |= 0x400;
	};

	void SetClothCollisionResponseCoefficient ( float ClothCollisionResponseCoefficient )
	{
		static UFunction* pfnSetClothCollisionResponseCoefficient = NULL;

		if ( !pfnSetClothCollisionResponseCoefficient )
			pfnSetClothCollisionResponseCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothCollisionResponseCoefficient" );

		USkeletalMeshComponent_execSetClothCollisionResponseCoefficient_Parms SetClothCollisionResponseCoefficient_Parms;
		SetClothCollisionResponseCoefficient_Parms.ClothCollisionResponseCoefficient = ClothCollisionResponseCoefficient;

		pfnSetClothCollisionResponseCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothCollisionResponseCoefficient, &SetClothCollisionResponseCoefficient_Parms, NULL );
		pfnSetClothCollisionResponseCoefficient->FunctionFlags |= 0x400;
	};

	void SetClothBendingStiffness ( float ClothBendingStiffness )
	{
		static UFunction* pfnSetClothBendingStiffness = NULL;

		if ( !pfnSetClothBendingStiffness )
			pfnSetClothBendingStiffness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothBendingStiffness" );

		USkeletalMeshComponent_execSetClothBendingStiffness_Parms SetClothBendingStiffness_Parms;
		SetClothBendingStiffness_Parms.ClothBendingStiffness = ClothBendingStiffness;

		pfnSetClothBendingStiffness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothBendingStiffness, &SetClothBendingStiffness_Parms, NULL );
		pfnSetClothBendingStiffness->FunctionFlags |= 0x400;
	};

	void SetClothAttachmentTearFactor ( float ClothAttachTearFactor )
	{
		static UFunction* pfnSetClothAttachmentTearFactor = NULL;

		if ( !pfnSetClothAttachmentTearFactor )
			pfnSetClothAttachmentTearFactor = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothAttachmentTearFactor" );

		USkeletalMeshComponent_execSetClothAttachmentTearFactor_Parms SetClothAttachmentTearFactor_Parms;
		SetClothAttachmentTearFactor_Parms.ClothAttachTearFactor = ClothAttachTearFactor;

		pfnSetClothAttachmentTearFactor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothAttachmentTearFactor, &SetClothAttachmentTearFactor_Parms, NULL );
		pfnSetClothAttachmentTearFactor->FunctionFlags |= 0x400;
	};

	void SetClothAttachmentResponseCoefficient ( float ClothAttachmentResponseCoefficient )
	{
		static UFunction* pfnSetClothAttachmentResponseCoefficient = NULL;

		if ( !pfnSetClothAttachmentResponseCoefficient )
			pfnSetClothAttachmentResponseCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothAttachmentResponseCoefficient" );

		USkeletalMeshComponent_execSetClothAttachmentResponseCoefficient_Parms SetClothAttachmentResponseCoefficient_Parms;
		SetClothAttachmentResponseCoefficient_Parms.ClothAttachmentResponseCoefficient = ClothAttachmentResponseCoefficient;

		pfnSetClothAttachmentResponseCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothAttachmentResponseCoefficient, &SetClothAttachmentResponseCoefficient_Parms, NULL );
		pfnSetClothAttachmentResponseCoefficient->FunctionFlags |= 0x400;
	};

	float GetClothThickness ()
	{
		static UFunction* pfnGetClothThickness = NULL;

		if ( !pfnGetClothThickness )
			pfnGetClothThickness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothThickness" );

		USkeletalMeshComponent_execGetClothThickness_Parms GetClothThickness_Parms;

		pfnGetClothThickness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothThickness, &GetClothThickness_Parms, NULL );
		pfnGetClothThickness->FunctionFlags |= 0x400;

		return GetClothThickness_Parms.ReturnValue;
	};

	float GetClothTearFactor ()
	{
		static UFunction* pfnGetClothTearFactor = NULL;

		if ( !pfnGetClothTearFactor )
			pfnGetClothTearFactor = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothTearFactor" );

		USkeletalMeshComponent_execGetClothTearFactor_Parms GetClothTearFactor_Parms;

		pfnGetClothTearFactor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothTearFactor, &GetClothTearFactor_Parms, NULL );
		pfnGetClothTearFactor->FunctionFlags |= 0x400;

		return GetClothTearFactor_Parms.ReturnValue;
	};

	float GetClothStretchingStiffness ()
	{
		static UFunction* pfnGetClothStretchingStiffness = NULL;

		if ( !pfnGetClothStretchingStiffness )
			pfnGetClothStretchingStiffness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothStretchingStiffness" );

		USkeletalMeshComponent_execGetClothStretchingStiffness_Parms GetClothStretchingStiffness_Parms;

		pfnGetClothStretchingStiffness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothStretchingStiffness, &GetClothStretchingStiffness_Parms, NULL );
		pfnGetClothStretchingStiffness->FunctionFlags |= 0x400;

		return GetClothStretchingStiffness_Parms.ReturnValue;
	};

	int GetClothSolverIterations ()
	{
		static UFunction* pfnGetClothSolverIterations = NULL;

		if ( !pfnGetClothSolverIterations )
			pfnGetClothSolverIterations = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothSolverIterations" );

		USkeletalMeshComponent_execGetClothSolverIterations_Parms GetClothSolverIterations_Parms;

		pfnGetClothSolverIterations->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothSolverIterations, &GetClothSolverIterations_Parms, NULL );
		pfnGetClothSolverIterations->FunctionFlags |= 0x400;

		return GetClothSolverIterations_Parms.ReturnValue;
	};

	float GetClothSleepLinearVelocity ()
	{
		static UFunction* pfnGetClothSleepLinearVelocity = NULL;

		if ( !pfnGetClothSleepLinearVelocity )
			pfnGetClothSleepLinearVelocity = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothSleepLinearVelocity" );

		USkeletalMeshComponent_execGetClothSleepLinearVelocity_Parms GetClothSleepLinearVelocity_Parms;

		pfnGetClothSleepLinearVelocity->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothSleepLinearVelocity, &GetClothSleepLinearVelocity_Parms, NULL );
		pfnGetClothSleepLinearVelocity->FunctionFlags |= 0x400;

		return GetClothSleepLinearVelocity_Parms.ReturnValue;
	};

	float GetClothPressure ()
	{
		static UFunction* pfnGetClothPressure = NULL;

		if ( !pfnGetClothPressure )
			pfnGetClothPressure = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothPressure" );

		USkeletalMeshComponent_execGetClothPressure_Parms GetClothPressure_Parms;

		pfnGetClothPressure->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothPressure, &GetClothPressure_Parms, NULL );
		pfnGetClothPressure->FunctionFlags |= 0x400;

		return GetClothPressure_Parms.ReturnValue;
	};

	float GetClothFriction ()
	{
		static UFunction* pfnGetClothFriction = NULL;

		if ( !pfnGetClothFriction )
			pfnGetClothFriction = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothFriction" );

		USkeletalMeshComponent_execGetClothFriction_Parms GetClothFriction_Parms;

		pfnGetClothFriction->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothFriction, &GetClothFriction_Parms, NULL );
		pfnGetClothFriction->FunctionFlags |= 0x400;

		return GetClothFriction_Parms.ReturnValue;
	};

	int GetClothFlags ()
	{
		static UFunction* pfnGetClothFlags = NULL;

		if ( !pfnGetClothFlags )
			pfnGetClothFlags = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothFlags" );

		USkeletalMeshComponent_execGetClothFlags_Parms GetClothFlags_Parms;

		pfnGetClothFlags->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothFlags, &GetClothFlags_Parms, NULL );
		pfnGetClothFlags->FunctionFlags |= 0x400;

		return GetClothFlags_Parms.ReturnValue;
	};

	float GetClothDampingCoefficient ()
	{
		static UFunction* pfnGetClothDampingCoefficient = NULL;

		if ( !pfnGetClothDampingCoefficient )
			pfnGetClothDampingCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothDampingCoefficient" );

		USkeletalMeshComponent_execGetClothDampingCoefficient_Parms GetClothDampingCoefficient_Parms;

		pfnGetClothDampingCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothDampingCoefficient, &GetClothDampingCoefficient_Parms, NULL );
		pfnGetClothDampingCoefficient->FunctionFlags |= 0x400;

		return GetClothDampingCoefficient_Parms.ReturnValue;
	};

	float GetClothCollisionResponseCoefficient ()
	{
		static UFunction* pfnGetClothCollisionResponseCoefficient = NULL;

		if ( !pfnGetClothCollisionResponseCoefficient )
			pfnGetClothCollisionResponseCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothCollisionResponseCoefficient" );

		USkeletalMeshComponent_execGetClothCollisionResponseCoefficient_Parms GetClothCollisionResponseCoefficient_Parms;

		pfnGetClothCollisionResponseCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothCollisionResponseCoefficient, &GetClothCollisionResponseCoefficient_Parms, NULL );
		pfnGetClothCollisionResponseCoefficient->FunctionFlags |= 0x400;

		return GetClothCollisionResponseCoefficient_Parms.ReturnValue;
	};

	float GetClothBendingStiffness ()
	{
		static UFunction* pfnGetClothBendingStiffness = NULL;

		if ( !pfnGetClothBendingStiffness )
			pfnGetClothBendingStiffness = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothBendingStiffness" );

		USkeletalMeshComponent_execGetClothBendingStiffness_Parms GetClothBendingStiffness_Parms;

		pfnGetClothBendingStiffness->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothBendingStiffness, &GetClothBendingStiffness_Parms, NULL );
		pfnGetClothBendingStiffness->FunctionFlags |= 0x400;

		return GetClothBendingStiffness_Parms.ReturnValue;
	};

	float GetClothAttachmentTearFactor ()
	{
		static UFunction* pfnGetClothAttachmentTearFactor = NULL;

		if ( !pfnGetClothAttachmentTearFactor )
			pfnGetClothAttachmentTearFactor = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothAttachmentTearFactor" );

		USkeletalMeshComponent_execGetClothAttachmentTearFactor_Parms GetClothAttachmentTearFactor_Parms;

		pfnGetClothAttachmentTearFactor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothAttachmentTearFactor, &GetClothAttachmentTearFactor_Parms, NULL );
		pfnGetClothAttachmentTearFactor->FunctionFlags |= 0x400;

		return GetClothAttachmentTearFactor_Parms.ReturnValue;
	};

	float GetClothAttachmentResponseCoefficient ()
	{
		static UFunction* pfnGetClothAttachmentResponseCoefficient = NULL;

		if ( !pfnGetClothAttachmentResponseCoefficient )
			pfnGetClothAttachmentResponseCoefficient = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetClothAttachmentResponseCoefficient" );

		USkeletalMeshComponent_execGetClothAttachmentResponseCoefficient_Parms GetClothAttachmentResponseCoefficient_Parms;

		pfnGetClothAttachmentResponseCoefficient->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetClothAttachmentResponseCoefficient, &GetClothAttachmentResponseCoefficient_Parms, NULL );
		pfnGetClothAttachmentResponseCoefficient->FunctionFlags |= 0x400;

		return GetClothAttachmentResponseCoefficient_Parms.ReturnValue;
	};

	void ResetClothVertsToRefPose ()
	{
		static UFunction* pfnResetClothVertsToRefPose = NULL;

		if ( !pfnResetClothVertsToRefPose )
			pfnResetClothVertsToRefPose = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.ResetClothVertsToRefPose" );

		USkeletalMeshComponent_execResetClothVertsToRefPose_Parms ResetClothVertsToRefPose_Parms;

		pfnResetClothVertsToRefPose->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnResetClothVertsToRefPose, &ResetClothVertsToRefPose_Parms, NULL );
		pfnResetClothVertsToRefPose->FunctionFlags |= 0x400;
	};

	void SetAttachClothVertsToBaseBody ( unsigned long bAttachVerts )
	{
		static UFunction* pfnSetAttachClothVertsToBaseBody = NULL;

		if ( !pfnSetAttachClothVertsToBaseBody )
			pfnSetAttachClothVertsToBaseBody = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetAttachClothVertsToBaseBody" );

		USkeletalMeshComponent_execSetAttachClothVertsToBaseBody_Parms SetAttachClothVertsToBaseBody_Parms;
		SetAttachClothVertsToBaseBody_Parms.bAttachVerts = bAttachVerts;

		pfnSetAttachClothVertsToBaseBody->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetAttachClothVertsToBaseBody, &SetAttachClothVertsToBaseBody_Parms, NULL );
		pfnSetAttachClothVertsToBaseBody->FunctionFlags |= 0x400;
	};

	void SetClothExternalForce ( struct FVector InForce )
	{
		static UFunction* pfnSetClothExternalForce = NULL;

		if ( !pfnSetClothExternalForce )
			pfnSetClothExternalForce = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothExternalForce" );

		USkeletalMeshComponent_execSetClothExternalForce_Parms SetClothExternalForce_Parms;
		memcpy( &SetClothExternalForce_Parms.InForce, &InForce, 0xC );

		pfnSetClothExternalForce->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothExternalForce, &SetClothExternalForce_Parms, NULL );
		pfnSetClothExternalForce->FunctionFlags |= 0x400;
	};

	void UpdateClothParams ()
	{
		static UFunction* pfnUpdateClothParams = NULL;

		if ( !pfnUpdateClothParams )
			pfnUpdateClothParams = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.UpdateClothParams" );

		USkeletalMeshComponent_execUpdateClothParams_Parms UpdateClothParams_Parms;

		pfnUpdateClothParams->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateClothParams, &UpdateClothParams_Parms, NULL );
		pfnUpdateClothParams->FunctionFlags |= 0x400;
	};

	void SetClothFrozen ( unsigned long bNewFrozen )
	{
		static UFunction* pfnSetClothFrozen = NULL;

		if ( !pfnSetClothFrozen )
			pfnSetClothFrozen = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetClothFrozen" );

		USkeletalMeshComponent_execSetClothFrozen_Parms SetClothFrozen_Parms;
		SetClothFrozen_Parms.bNewFrozen = bNewFrozen;

		pfnSetClothFrozen->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetClothFrozen, &SetClothFrozen_Parms, NULL );
		pfnSetClothFrozen->FunctionFlags |= 0x400;
	};

	void SetEnableClothSimulation ( unsigned long bInEnable )
	{
		static UFunction* pfnSetEnableClothSimulation = NULL;

		if ( !pfnSetEnableClothSimulation )
			pfnSetEnableClothSimulation = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetEnableClothSimulation" );

		USkeletalMeshComponent_execSetEnableClothSimulation_Parms SetEnableClothSimulation_Parms;
		SetEnableClothSimulation_Parms.bInEnable = bInEnable;

		pfnSetEnableClothSimulation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetEnableClothSimulation, &SetEnableClothSimulation_Parms, NULL );
		pfnSetEnableClothSimulation->FunctionFlags |= 0x400;
	};

	void SetForceRefPose ( unsigned long bNewForceRefPose )
	{
		static UFunction* pfnSetForceRefPose = NULL;

		if ( !pfnSetForceRefPose )
			pfnSetForceRefPose = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetForceRefPose" );

		USkeletalMeshComponent_execSetForceRefPose_Parms SetForceRefPose_Parms;
		SetForceRefPose_Parms.bNewForceRefPose = bNewForceRefPose;

		pfnSetForceRefPose->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetForceRefPose, &SetForceRefPose_Parms, NULL );
		pfnSetForceRefPose->FunctionFlags |= 0x400;
	};

	void SetPhysicsAsset ( void* NewPhysicsAsset, unsigned long bForceReInit/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetPhysicsAsset = NULL;

		if ( !pfnSetPhysicsAsset )
			pfnSetPhysicsAsset = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetPhysicsAsset" );

		USkeletalMeshComponent_execSetPhysicsAsset_Parms SetPhysicsAsset_Parms;
		SetPhysicsAsset_Parms.NewPhysicsAsset = NewPhysicsAsset;
		SetPhysicsAsset_Parms.bForceReInit = bForceReInit;

		pfnSetPhysicsAsset->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetPhysicsAsset, &SetPhysicsAsset_Parms, NULL );
		pfnSetPhysicsAsset->FunctionFlags |= 0x400;
	};

	void SetSkeletalMesh ( class USkeletalMesh* NewMesh, unsigned long bKeepSpaceBases/*CPF_OptionalParm*/, unsigned long InbAlwaysUseInstanceWeights/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSetSkeletalMesh = NULL;

		if ( !pfnSetSkeletalMesh )
			pfnSetSkeletalMesh = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.SetSkeletalMesh" );

		USkeletalMeshComponent_execSetSkeletalMesh_Parms SetSkeletalMesh_Parms;
		SetSkeletalMesh_Parms.NewMesh = NewMesh;
		SetSkeletalMesh_Parms.bKeepSpaceBases = bKeepSpaceBases;
		SetSkeletalMesh_Parms.InbAlwaysUseInstanceWeights = InbAlwaysUseInstanceWeights;

		pfnSetSkeletalMesh->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetSkeletalMesh, &SetSkeletalMesh_Parms, NULL );
		pfnSetSkeletalMesh->FunctionFlags |= 0x400;
	};

	void AttachedComponents ( class UClass* BaseClass, class UActorComponent** OutComponent )
	{
		static UFunction* pfnAttachedComponents = NULL;

		if ( !pfnAttachedComponents )
			pfnAttachedComponents = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AttachedComponents" );

		USkeletalMeshComponent_execAttachedComponents_Parms AttachedComponents_Parms;
		AttachedComponents_Parms.BaseClass = BaseClass;

		pfnAttachedComponents->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAttachedComponents, &AttachedComponents_Parms, NULL );
		pfnAttachedComponents->FunctionFlags |= 0x400;

		if ( OutComponent )
			*OutComponent = AttachedComponents_Parms.OutComponent; // CPF_OutParm
	};

	bool IsComponentAttached ( class UActorComponent* Component, struct FName BoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsComponentAttached = NULL;

		if ( !pfnIsComponentAttached )
			pfnIsComponentAttached = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.IsComponentAttached" );

		USkeletalMeshComponent_execIsComponentAttached_Parms IsComponentAttached_Parms;
		IsComponentAttached_Parms.Component = Component;
		memcpy( &IsComponentAttached_Parms.BoneName, &BoneName, 0x8 );

		pfnIsComponentAttached->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsComponentAttached, &IsComponentAttached_Parms, NULL );
		pfnIsComponentAttached->FunctionFlags |= 0x400;

		return IsComponentAttached_Parms.ReturnValue;
	};

	class UActorComponent* FindComponentAttachedToBone ( struct FName InBoneName )
	{
		static UFunction* pfnFindComponentAttachedToBone = NULL;

		if ( !pfnFindComponentAttachedToBone )
			pfnFindComponentAttachedToBone = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.FindComponentAttachedToBone" );

		USkeletalMeshComponent_execFindComponentAttachedToBone_Parms FindComponentAttachedToBone_Parms;
		memcpy( &FindComponentAttachedToBone_Parms.InBoneName, &InBoneName, 0x8 );

		pfnFindComponentAttachedToBone->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnFindComponentAttachedToBone, &FindComponentAttachedToBone_Parms, NULL );
		pfnFindComponentAttachedToBone->FunctionFlags |= 0x400;

		return FindComponentAttachedToBone_Parms.ReturnValue;
	};

	struct FName GetSocketBoneName ( struct FName InSocketName )
	{
		static UFunction* pfnGetSocketBoneName = NULL;

		if ( !pfnGetSocketBoneName )
			pfnGetSocketBoneName = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetSocketBoneName" );

		USkeletalMeshComponent_execGetSocketBoneName_Parms GetSocketBoneName_Parms;
		memcpy( &GetSocketBoneName_Parms.InSocketName, &InSocketName, 0x8 );

		pfnGetSocketBoneName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSocketBoneName, &GetSocketBoneName_Parms, NULL );
		pfnGetSocketBoneName->FunctionFlags |= 0x400;

		return GetSocketBoneName_Parms.ReturnValue;
	};

	void* GetSocketByName ( struct FName InSocketName )
	{
		static UFunction* pfnGetSocketByName = NULL;

		if ( !pfnGetSocketByName )
			pfnGetSocketByName = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetSocketByName" );

		USkeletalMeshComponent_execGetSocketByName_Parms GetSocketByName_Parms;
		memcpy( &GetSocketByName_Parms.InSocketName, &InSocketName, 0x8 );

		pfnGetSocketByName->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSocketByName, &GetSocketByName_Parms, NULL );
		pfnGetSocketByName->FunctionFlags |= 0x400;

		return GetSocketByName_Parms.ReturnValue;
	};

	bool GetSocketWorldLocationAndRotation ( struct FName InSocketName, struct FVector* OutLocation, struct FRotator* OutRotation )
	{
		static UFunction* pfnGetSocketWorldLocationAndRotation = NULL;

		if ( !pfnGetSocketWorldLocationAndRotation )
			pfnGetSocketWorldLocationAndRotation = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetSocketWorldLocationAndRotation" );

		USkeletalMeshComponent_execGetSocketWorldLocationAndRotation_Parms GetSocketWorldLocationAndRotation_Parms;
		memcpy( &GetSocketWorldLocationAndRotation_Parms.InSocketName, &InSocketName, 0x8 );

		pfnGetSocketWorldLocationAndRotation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetSocketWorldLocationAndRotation, &GetSocketWorldLocationAndRotation_Parms, NULL );
		pfnGetSocketWorldLocationAndRotation->FunctionFlags |= 0x400;

		if ( OutLocation )
			memcpy( OutLocation, &GetSocketWorldLocationAndRotation_Parms.OutLocation, 0xC ); // CPF_OutParm
		if ( OutRotation )
			memcpy( OutRotation, &GetSocketWorldLocationAndRotation_Parms.OutRotation, 0xC ); // CPF_OutParm

		return GetSocketWorldLocationAndRotation_Parms.ReturnValue;
	};

	void AttachComponentToSocket ( class UActorComponent* Component, struct FName SocketName )
	{
		static UFunction* pfnAttachComponentToSocket = NULL;

		if ( !pfnAttachComponentToSocket )
			pfnAttachComponentToSocket = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AttachComponentToSocket" );

		USkeletalMeshComponent_execAttachComponentToSocket_Parms AttachComponentToSocket_Parms;
		AttachComponentToSocket_Parms.Component = Component;
		memcpy( &AttachComponentToSocket_Parms.SocketName, &SocketName, 0x8 );

		pfnAttachComponentToSocket->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAttachComponentToSocket, &AttachComponentToSocket_Parms, NULL );
		pfnAttachComponentToSocket->FunctionFlags |= 0x400;
	};

	void DetachComponent ( class UActorComponent* Component )
	{
		static UFunction* pfnDetachComponent = NULL;

		if ( !pfnDetachComponent )
			pfnDetachComponent = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.DetachComponent" );

		USkeletalMeshComponent_execDetachComponent_Parms DetachComponent_Parms;
		DetachComponent_Parms.Component = Component;

		pfnDetachComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDetachComponent, &DetachComponent_Parms, NULL );
		pfnDetachComponent->FunctionFlags |= 0x400;
	};

	void AttachComponent ( class UActorComponent* Component, struct FName BoneName, struct FVector RelativeLocation/*CPF_OptionalParm*/, struct FRotator RelativeRotation/*CPF_OptionalParm*/, struct FVector RelativeScale/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAttachComponent = NULL;

		if ( !pfnAttachComponent )
			pfnAttachComponent = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.AttachComponent" );

		USkeletalMeshComponent_execAttachComponent_Parms AttachComponent_Parms;
		AttachComponent_Parms.Component = Component;
		memcpy( &AttachComponent_Parms.BoneName, &BoneName, 0x8 );
		memcpy( &AttachComponent_Parms.RelativeLocation, &RelativeLocation, 0xC );
		memcpy( &AttachComponent_Parms.RelativeRotation, &RelativeRotation, 0xC );
		memcpy( &AttachComponent_Parms.RelativeScale, &RelativeScale, 0xC );

		pfnAttachComponent->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnAttachComponent, &AttachComponent_Parms, NULL );
		pfnAttachComponent->FunctionFlags |= 0x400;
	};

	class UMaterialInterface* GetMaterialExt ( int ElementIndex )
	{
		static UFunction* pfnGetMaterialExt = NULL;

		if ( !pfnGetMaterialExt )
			pfnGetMaterialExt = UObject::FindObject< UFunction >( "Function Engine.SkeletalMeshComponent.GetMaterialExt" );

		USkeletalMeshComponent_execGetMaterialExt_Parms GetMaterialExt_Parms;
		GetMaterialExt_Parms.ElementIndex = ElementIndex;

		pfnGetMaterialExt->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetMaterialExt, &GetMaterialExt_Parms, NULL );
		pfnGetMaterialExt->FunctionFlags |= 0x400;

		return GetMaterialExt_Parms.ReturnValue;
	};

};

UClass* USkeletalMeshComponent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif