/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: CrimeCraftStructs.h
// Date: 06/16/2011 @ 05:19:42.395
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct FSocketOffset
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
};

struct FSocketOffsetByWeapon
{
	struct FName                                       WeaponName;
	struct FSocketOffset                               Offset;
};

struct FBlendingProperties
{
	float                                              BaseSpeed;
	float                                              BlendUpTime;
	float                                              BlendDownTime;
	float                                              BlendDownPerc;
};

struct FGunRecoilNodeDesc
{
	struct FString                                     NodeName;
	float                                              SingleRecoilScale;
	float                                              AmplitudeScale;
	float                                              DurationScale;
};

struct FGunRecoilAnimationInfo
{
	float                                              RecoilSingleDuration;
	float                                              RecoilAnimationPeakTimePos;
	float                                              RecoilAmplitudeFadingAlpha;
	float                                              RecoilRestoreTime;
	float                                              RecoilSmoothingTime;
	float                                              RecoilWaveFactorMin;
	float                                              RecoilWaveFactorMax;
	int                                                RecoilWaveFactorShotsPeriod;
};

struct FAnimBoneCompareSetupInfo
{
	struct FName                                       BoneName;
	struct FVector                                     LocationComparePriority;
	struct FVector                                     RotationComparePriority;
	int                                                BoneIndex;
};

struct FAnimCompareSetupInfo
{
	TArray< struct FAnimBoneCompareSetupInfo >         PerBoneCompareSetup;
};

struct FDirectionDataEntry
{
	struct FVector                                     Direction;
	int                                                AnimChildIndex;
};

struct FBranchInfo
{
	struct FName                                       BoneName;
	unsigned long                                      bUseStartWeight : 1;
	float                                              StartWeight;
	float                                              PerBoneWeightIncrease;
};

struct FWeightNodeRule
{
	struct FName                                       NodeName;
	void*                                              CachedNode;
	unsigned char                                      WeightCheck;
	int                                                ChildIndex;
};

struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;
	struct FWeightNodeRule                             SecondNode;
};

struct FPerBoneMaskInfo
{
	TArray< struct FBranchInfo >                       BranchList;
	float                                              DesiredWeight;
	float                                              BlendTimeToGo;
	TArray< struct FWeightRule >                       WeightRuleList;
	unsigned long                                      bWeightBasedOnNodeRules : 1;
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;
	unsigned long                                      bDisableIfCameraBoneMotionScaleIsZero : 1;
	unsigned long                                      bPendingBlend : 1;
	TArray< float >                                    PerBoneWeights;
	TArray< struct FBoneAtom >                         MaskAtoms;
	TArray< struct FMatrix >                           MeshSpaceTM;
	TArray< unsigned char >                            TransformReqBone;
	int                                                TransformReqBoneIndex;
};

struct FBlendPerBoneBranch
{
	struct FName                                       ChildBoneName;
	struct FName                                       ParentBoneName;
	unsigned long                                      bDecreasing : 1;
};

struct FAGData
{
	struct FName                                       AutoGenRootBone;
	int                                                AutoGenDepth;
	unsigned long                                      bDecreasing : 1;
};

struct FBlendPerBoneChild
{
	TArray< struct FName >                             BranchStartBoneName;
	TArray< struct FBlendPerBoneBranch >               Branches;
	TArray< struct FAGData >                           AutoGenData;
	unsigned long                                      bAutoGenerate : 1;
	TArray< float >                                    PerBoneWeight;
	TArray< unsigned char >                            LocalToCompReqBones;
};

struct FBoneToCopyInfo
{
	int                                                SourceBone;
	int                                                DestBone;
	unsigned long                                      bMirror : 1;
};

struct FMovementAnimationInfo
{
	unsigned char                                      AnimDirection;
	unsigned long                                      bMirrored : 1;
};

struct FMovementDescription
{
	unsigned char                                      MoveDirection;
	struct FMovementAnimationInfo                      MovementAnimation;
	float                                              UnwantedAnimationTime;
};

struct FaBaseYStackData
{
	float                                              Speed;
	unsigned char                                      Type;
};

struct FBlendTimeBoneBranch
{
	struct FName                                       BoneName;
	float                                              BlendTimeModifier;
};

struct FBoneAtoms
{
	TArray< unsigned char >                            Bones;
	TArray< struct FBoneAtom >                         LocalAtoms;
	struct FBoneAtom                                   RMD;
	int                                                bHasRootMotion;
};

struct FSmoothBlendInfo
{
	TArray< unsigned char >                            Bones;
	TArray< float >                                    SmoothBlendWeights;
	TArray< float >                                    SmoothBlendOutTimes;
	TArray< float >                                    SmoothBlendOutSpeeds;
};

struct FHeadEx
{
	class USkeletalMesh*                               Mesh;
	TArray< void* >                                    MorphSets;
};

struct FSimpleMeshData
{
	float                                              SimpleMeshMaskShift;
	int                                                SimpleMeshTextureShift;
};

struct FCharacterPreset
{
	struct FString                                     Name;
	unsigned long                                      IsMale : 1;
	TArray< struct FLinearColor >                      SkinColor;
	class USkeletalMesh*                               MainSkeletal;
	TArray< class USkeletalMesh* >                     Heads;
	TArray< struct FHeadEx >                           HeadExs;
	class USkeletalMesh*                               TopBody;
	class USkeletalMesh*                               BottomBody;
	void*                                              PhysAsset;
	void*                                              LobbyAnimTree;
	TArray< void* >                                    CommonAnimSets;
	TArray< void* >                                    LobbyAnimSets;
	void*                                              InstanceAnimTree;
	TArray< void* >                                    InstanceAnimSets;
	void*                                              EditorAnimTree;
	TArray< void* >                                    EditorAnimSets;
	void*                                              PaperDollAnimTree;
	TArray< void* >                                    PaperDollAnimSets;
	class USkeletalMesh*                               SimpleSkeletal;
	void*                                              SimpleAnimTree;
	TArray< void* >                                    SimpleAnimSets;
	struct FSimpleMeshData                             NoUpperSMD;
	struct FSimpleMeshData                             NoLowerSMD;
	struct FSimpleMeshData                             NoShoesSMD;
};

struct FNPCVisualPreset
{
	struct FString                                     Name;
	struct FString                                     PresetNameForAnimationProfiles;
	class USkeletalMesh*                               MainSkeleton;
	class USkeletalMesh*                               Mesh;
	struct FLinearColor                                AttachmentMask;
	struct FLinearColor                                ColorMask;
	void*                                              AnimTree;
	TArray< void* >                                    AnimSets;
	void*                                              PhysAsset;
	class UPrimitiveComponent*                         CollisionComponent;
	unsigned long                                      DoNotCastShadow : 1;
	TArray< struct FString >                           Urls;
};

struct FRecoilInfo
{
	float                                              RecoilAnimationPeakTimePos;
	float                                              RecoilAnimationRateScale;
	float                                              RecoilRestoreTime;
	float                                              RecoilSmoothingTime;
};

struct FRecoilStateInfo
{
	unsigned char                                      StateDesc;
	float                                              TotalTime;
	float                                              TimeLeft;
	float                                              StartTime;
};

struct FAlgorithmicRecoilInfo
{
	unsigned char                                      RecoilMethod;
	float                                              RecoilAnimationPeakTimePos;
	float                                              RecoilAmplitudeFadingAlpha;
	float                                              RecoilRestoreTime;
	float                                              RecoilSmoothingTime;
	unsigned long                                      bDontPeekWaveFactor : 1;
	float                                              WaveFactorMin;
	float                                              WaveFactorMax;
	int                                                WaveFactorShotsPeriod;
};

struct FScaleProperty
{
	struct FName                                       BoneName;
	struct FVector                                     Scale3D;
};

struct FAnimByAttach
{
	struct FName                                       AttachName;
	struct FName                                       AnimName;
};

struct FAnimByRotation
{
	struct FVector                                     DesiredDirection;
	float                                              Priority;
	struct FName                                       AnimName;
	unsigned long                                      FlipPawnRotationOnChoice : 1;
};

struct FAnimByWeapon
{
	struct FName                                       WeaponName;
	struct FName                                       AnimName;
};

struct FAnimCompareResult
{
	float                                              SummaryLocationDifference;
	float                                              SummaryRotationDifference;
};

struct FSequenceEntry
{
	struct FName                                       SequenceName;
};

struct FStripAnimIKControlSet
{
	struct FName                                       BoneName;
	void*                                              LimbControl;
	void*                                              SingleBoneControl;
};

struct FStripAnimInfo
{
	struct FName                                       AnimName;
	unsigned long                                      bMirrored : 1;
	struct FMatrix                                     AdditionalTransform;
};

struct FStripAnimBlendIKInfo
{
	struct FName                                       BoneName;
	float                                              StartBeginState;
	float                                              StartEndState;
	float                                              FinishBeginState;
	float                                              FinishEndState;
};

struct FStripAnimBlendInfo
{
	unsigned long                                      bUseTriangleBlend : 1;
	float                                              TriangleAnimBeforeTime;
	float                                              TriangleAnimAfterTime;
	float                                              TriangleBlendStartSpeed;
	float                                              TriangleBlendMiddleSpeed;
	float                                              TriangleBlendFinishSpeed;
	TArray< struct FStripAnimBlendIKInfo >             BlendIKInfos;
};

struct FTestInfoEntry
{
	struct FStripAnimInfo                              AnimInfo;
	struct FStripAnimBlendInfo                         BlendInfo;
};

struct FStripAnimFullDynamicInfo
{
	unsigned long                                      bValid : 1;
	struct FStripAnimInfo                              AnimInfo;
	struct FStripAnimBlendInfo                         BlendInfo;
	float                                              FullAnimTime;
	void*                                              TheAnimSequence;
	unsigned char                                      CurrentState;
	float                                              PendingAnimTime;
	float                                              PendingBlendState;
};

struct FStripAnimDynamicNodeSet
{
	void*                                              SequenceNode;
	void*                                              MirrorNode;
	void*                                              TransformNode;
};

struct FMotionLawBuildingInputInfo
{
	float                                              Dummy;
};

struct FMLS_Animation
{
	struct FName                                       AnimName;
};

struct FMLS_CharacterGroup
{
	struct FName                                       CharacterPresetName;
	class USkeletalMesh*                               CommonSkeletalMesh;
	TArray< void* >                                    CommonAnimSets;
};

struct FMLS_Data
{
	TArray< struct FMLS_CharacterGroup >               CharacterGroups;
	TArray< struct FMLS_Animation >                    Animations;
};

struct FInternalAnimEntry
{
	struct FName                                       AnimName;
	void*                                              AnimSetFrom;
	void*                                              MotionLaw;
	void*                                              MirroredMotionLaw;
};

struct FInternalCharacterGroup
{
	struct FName                                       CharacterPresetName;
	TArray< struct FInternalAnimEntry >                AnimEntries;
};

struct FInternalData
{
	TArray< struct FInternalCharacterGroup >           CharacterGroups;
};

struct FMLS_GetDescription
{
	struct FName                                       CharacterPresetName;
	struct FName                                       AnimName;
	unsigned long                                      bMirrored : 1;
};

struct FMLS_Result
{
	void*                                              ResultSequenceAnimSet;
	void*                                              ResultSequence;
	void*                                              ResultMotionLawObject;
};

struct FTHDirectionalAnimationList
{
	struct FVector                                     Direction;
	TArray< struct FName >                             Animations;
};

struct FTHPerBoneAnimationList
{
	struct FName                                       BoneName;
	TArray< struct FTHDirectionalAnimationList >       DirectionalAnimations;
	unsigned long                                      bUseForCrouch : 1;
	unsigned long                                      bGrenadeReaction : 1;
};

struct FTHBlendPerBoneNodeParams
{
	unsigned long                                      bForceLocalSpaceBlend : 1;
	TArray< struct FName >                             BranchStartBoneName;
};

struct FTakeHitInfo
{
	int                                                Damage;
	struct FVector                                     HitLocation;
	struct FVector                                     Momentum;
	class UClass*                                      DamageType;
	struct FName                                       HitBone;
	class ACCInstancePawn*                             shooter;
	float                                              DamagePercent;
	struct FAdditionalHitInfo                          AddInfo;
};

struct FProjectileDetectingInfo
{
	struct FName                                       ProjClass;
	struct FVector                                     ProjLocation;
	float                                              ProjDistanceModifier;
	class ACCProjectile*                               CurrentProjectile;
};

struct FPhysStateParams
{
	struct FString                                     StateDesc;
	float                                              RagdollPhysicsBlendOutSpeed;
	float                                              fDelayTime;
	unsigned long                                      bUseRecoveryAnim : 1;
	unsigned long                                      bUpdKinemaBonesFromAnim : 1;
	unsigned long                                      bSyncActorToRootBodyLoc : 1;
	struct FName                                       RecovAnimNodeName;
	void*                                              RecovAnimNodeBlend;
};

struct FWeaponCarrySlotRBDesc
{
	void*                                              RBBodyInstance;
	void*                                              RBBodySetup;
};

struct FCarrySlotContent
{
	struct FName                                       SocketName;
	class USkeletalMeshComponent*                      WeaponMesh;
	void*                                              WeaponPostPhysicsController;
	TArray< struct FName >                             WeaponRBBodyNames;
	TArray< struct FWeaponCarrySlotRBDesc >            WeaponRBBodies;
};

struct FWeaponCarrySlot
{
	unsigned long                                      bHidden : 1;
	TArray< struct FCarrySlotContent >                 Content;
};

struct FSkelControlDestLocation
{
	unsigned char                                      Type;
	struct FName                                       SocketName;
	struct FVector                                     Translation;
	struct FRotator                                    Rotation;
};

struct FCustomComponentDesc
{
	class UActorComponent*                             Component;
	struct FString                                     Tag;
	float                                              TimeOut;
	float                                              TimeLeft;
	unsigned long                                      bWantsToBeDeleted : 1;
	class USkeletalMeshComponent*                      AttachedToSkelComponent;
	struct FName                                       AttachedToSocketName;
	void*                                              AttachedToIKController;
	unsigned char                                      IKLerpingMode;
	float                                              IKLerpingTime;
	float                                              IKLerpingTimeLeft;
	struct FSkelControlDestLocation                    IKLerpingLocation;
};

struct FAdditionalAnimationNodeInfo
{
	void*                                              ListNode;
	void*                                              SmoothBlender;
	TArray< void* >                                    Selectors;
};

struct FAdditionalAnimationEntry
{
	struct FName                                       AnimName;
	int                                                nodeIndex;
	int                                                ChildIndex;
	TArray< void* >                                    SequenceNodes;
	void*                                              MirrorNode;
	void*                                              BlendNode;
};

struct FShadowCharacterComponent
{
	struct FName                                       Id;
	void*                                              CharComponent;
};

struct FCCPawnAnimationsData
{
	struct FString                                     AnimationTree;
	struct FString                                     PhysAsset;
	TArray< struct FString >                           AnimationSets;
};

struct FAdditionalAnimInfo_MeshParameter
{
	int                                                Index;
	class UMeshComponent*                              Value;
	struct FString                                     ResourceName;
};

struct FAdditionalAnimInfo_VectorParameter
{
	int                                                Index;
	struct FVector                                     Value;
};

struct FAdditionalAnimInfo_RotatorParameter
{
	int                                                Index;
	struct FRotator                                    Value;
};

struct FAdditionalAnimInfo
{
	struct FString                                     AnimName;
	unsigned long                                      bNoBlendIn : 1;
	unsigned long                                      bMirroredAnimation : 1;
	float                                              PlayTime;
	float                                              BlendNodeTarget;
	unsigned long                                      bHideWeaponDueAnim : 1;
	unsigned long                                      bLoopAnimation : 1;
	unsigned long                                      bSequenceBased : 1;
	float                                              StartDelay;
	float                                              FinishDelay;
	struct FAdditionalAnimInfo_MeshParameter           MeshParameters[ 2 ];
	struct FAdditionalAnimInfo_VectorParameter         VectorParameters[ 2 ];
	struct FAdditionalAnimInfo_RotatorParameter        RotatorParameters[ 2 ];
};

struct FAdditionalAnimInfoRepStruct
{
	struct FAdditionalAnimInfo                         AnimInfo;
	float                                              Time;
};

struct FSpeedParams
{
	float                                              SPD_Crouch;
	float                                              SPD_Walk;
	float                                              SPD_Run;
	float                                              SPD_Sprint;
	float                                              SPD_Rolling;
	float                                              SPD_CrouchAiming;
	float                                              SPD_WalkAiming;
	float                                              SPD_RunAiming;
	float                                              SPD_BackwardModifier;
	float                                              SPD_StrafeModifier;
	float                                              SPD_NormalAccel;
	float                                              SPD_SprintAccel;
};

struct FDamagerStruct
{
	class ACCPlayerReplicationInfo*                    PRI;
	float                                              Time;
	int                                                Damage;
};

struct FPawnBurning_AbilityInfo
{
	struct FString                                     AbilityName;
	float                                              Radius;
	float                                              PSLifetime;
};

struct FLastTakeHitInfo
{
	struct FTakeHitInfo                                THInfo;
	int                                                NumHits;
	float                                              LastTakeHitInfoTime;
};

struct FHBZInfo
{
	int                                                Damage;
	class AController*                                 InstigatedBy;
	struct FVector                                     HitLocation;
	struct FVector                                     Momentum;
	class UClass*                                      DamageType;
	struct FTraceHitInfo                               HitInfo;
	class AActor*                                      DamageCauser;
	struct FAdditionalHitInfo                          AddInfo;
};

struct FRagdollStateInfo
{
	unsigned long                                      bRagdollState : 1;
	float                                              RagdollBlendInTime;
	struct FTakeHitInfo                                RagdollImpulseInfo;
};

struct FDeathAnimationInfo
{
	unsigned long                                      bPlayingDeathAnimation : 1;
	struct FTakeHitInfo                                THInfo;
};

struct FWeaponAttachesArray
{
	int                                                SlotIndex[ 7 ];
	int                                                ColorIndex[ 7 ];
};

struct FWeaponAttachmentIDS
{
	struct FString                                     Ids[ 6 ];
	struct FString                                     Ids2[ 6 ];
	struct FWeaponAttachesArray                        AttachSlotIndex[ 6 ];
	unsigned long                                      bInitialized : 1;
};

struct FAmmoPack
{
	int                                                ClipSize;
	int                                                TotalClips;
	int                                                TotalAmmoCount;
};

struct FBodyStance
{
	TArray< struct FName >                             AnimName;
};

struct FGunRecoilNodesArray
{
	TArray< void* >                                    GunRecoilNodes;
};

struct FMuzzleFlashPSCsArray
{
	TArray< void* >                                    MuzzleFlashPSCs;
};

struct FWeaponStateInfo
{
	unsigned char                                      WeaponState;
	int                                                WeaponStateCounter;
	unsigned long                                      bForceReEnter : 1;
	float                                              LastAnimStartTime;
	float                                              ClientLastAnimStartTime;
};

struct FWS_NormalInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
};

struct FWS_GettingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	float                                              WS_EquipTime;
};

struct FWS_HidingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	float                                              WS_HideTime;
};

struct FWS_ReloadingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	int                                                WS_Reload_BulletsToArm;
	float                                              WS_ReloadTime;
	float                                              WS_ReloadPreTime;
	float                                              WS_ReloadPostTime;
	float                                              WS_SingleBulletReloadTimePerc;
	float                                              WS_SingleBulletReloadTimePosPerc;
};

struct FWS_FiringInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	float                                              WS_Speed;
};

struct FWS_GrenadeThrowInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	struct FString                                     WS_GrenadePresetID;
	float                                              WS_GrenadeThrowTime;
};

struct FMeleeUnsuccessBeatInfo
{
	int                                                ParamsId;
	int                                                BeatMode;
	float                                              Time;
	float                                              TimeOut;
};

struct FMeleeTraceLimitsEntry
{
	struct FVector                                     Start;
	struct FVector                                     End;
};

struct FMeleeTraceLimits
{
	TArray< struct FMeleeTraceLimitsEntry >            Entries;
	struct FVector                                     CenterLoc;
	struct FRotator                                    CenterRot;
};

struct FMeleeImpactInfo
{
	struct FImpactInfo                                 Impact;
	struct FMeleeTraceLimitsEntry                      WorldSpaceTraceLimitsEntry;
};

struct FAttachments
{
	int                                                FuncId;
};

struct FCustomProjectileFire
{
	unsigned long                                      bUseCustomProjectile : 1;
	class AActor*                                      ProjectileArchetype;
	class UClass*                                      ProjectileClass;
	class AController*                                 InstigatorController;
	unsigned long                                      ProjectileFalling : 1;
	unsigned long                                      ProjectileAltFire : 1;
	float                                              ProjectileSpeed;
	float                                              ProjectileMaxSpeed;
	float                                              ProjectileAccelerationTime;
	float                                              ProjectileLifeTime;
	float                                              ProjectileReflectionDamage;
	float                                              ProjectileReflectionMomentum;
	float                                              ProjectileDamage;
	float                                              ProjectileDamageRadius;
	float                                              ProjectileDamageRadiusMin;
	float                                              ProjectileMomentumTransfer;
	float                                              ProjectileDamageRadiusKoeficient;
	float                                              ProjectileLifePoints;
	float                                              ProjectileImpulseKoeficient;
	float                                              ProjectileAirFrictionPower;
	float                                              ProjectileAirFrictionDelay;
	float                                              ProjectileAltFireDist;
	struct FName                                       ProjectileWeaponAttachmentID;
	struct FName                                       ProjectileAbilityName;
	float                                              WeaponPenetrationModifier;
	unsigned long                                      ExplodeOnEnemy : 1;
};

struct FWeaponSpiralRocketParams
{
	int                                                WPN_ProjectileSpiralRockets;
	float                                              WPN_ProjectileSpiralRadius;
	float                                              WPN_ProjectileSpiralPeriod;
	float                                              WPN_ProjectileSpiralOffset;
	float                                              WPN_RandomFlyingCollisionAvoidance_CheckTimeDelta;
	float                                              WPN_RandomFlyingCollisionAvoidance_CheckTimeStep;
	float                                              WPN_TryToDoCollisionAvoidance_MaxOffset;
	float                                              WPN_TestCollisionAvoidanceTrajectory_CheckTimeStep;
	float                                              WPN_MaxMainGoalAngle;
	int                                                WPN_bOneRocketPerEnemy;
	float                                              WPN_MaxEnemyDist;
	float                                              WPN_MaxEnemyDetectAngleHorizontal;
	float                                              WPN_MaxEnemyDetectAngleVertical;
	float                                              WPN_MaxEnemyAngle;
	float                                              WPN_MinRotationRadius;
	float                                              WPN_OptimalRotationRadius;
	float                                              WPN_Hunting_CollisionCheckLength;
};

struct FSpreadProcessShotInfo
{
	unsigned long                                      bValid : 1;
	unsigned long                                      bFirstShot : 1;
};

struct FSpreadFullRandomParams
{
	float                                              Min;
	float                                              Max;
	float                                              Step;
};

struct FSpreadPresetParams
{
	int                                                PresetIndex;
};

struct FSpreadParamsElement
{
	int                                                SpreadProcessorType;
	struct FSpreadFullRandomParams                     FullRandomParams;
	struct FSpreadPresetParams                         PresetParams;
	float                                              RestoreTime;
	float                                              RestorePower;
	float                                              MainRestoreSpeed;
	float                                              AdditionalRestoreSpeed;
	int                                                ControlShotsCount;
	unsigned long                                      bOverrideHudSpreadEffectParams : 1;
	float                                              HudSpreadEffectIncrease;
	float                                              HudSpreadEffectInterpolationTime;
};

struct FSpreadParams
{
	struct FSpreadParamsElement                        IdleParams;
	struct FSpreadParamsElement                        AimingParams;
	float                                              Scale;
	float                                              MoveScale;
	float                                              AimingScale;
	float                                              CrouchScale;
	unsigned long                                      bFovModifierDisabled : 1;
	float                                              EmpiricSpread;
	float                                              EmpiricAimingSpread;
};

struct FTakeHitSpeedModifierInfo
{
	float                                              WPN_TH_SPDModifier;
	float                                              WPN_TH_SPDModifierTime;
	float                                              WPN_TH_SPDModifierTimePower;
};

struct FAddWeaponRecoilInfo
{
	unsigned long                                      bValid : 1;
	unsigned long                                      bReStartRules : 1;
};

struct FSniperRifleRecoilParams
{
	float                                              WPN_SRecoilRadius;
	float                                              WPN_SRecoilPeriod;
	float                                              WPN_SRecoilTotalTime;
	float                                              WPM_SRecoilRadiusMoveModifier;
	float                                              WPM_SRecoilRadiusCrouchModifier;
	float                                              WPM_SRecoilTotalTimeMoveModifier;
	float                                              WPM_SRecoilTotalTimeCrouchModifier;
};

struct FBaseRecoilParams
{
	int                                                WPN_RecoilPresetIndex;
	int                                                WPN_RecoilAimingPresetIndex;
	float                                              WPN_RecoilRestoreTime;
	float                                              WPN_RecoilRestorePower;
	float                                              WPN_RecoilRestoreSpeed;
	float                                              WPN_RecoilRestoreAcceleration;
	float                                              WPN_RecoilAimingRestoreTime;
	float                                              WPN_RecoilAimingRestorePower;
	float                                              WPN_RecoilAimingRestoreSpeed;
	float                                              WPN_RecoilAimingRestoreAcceleration;
	float                                              WPN_RecoilScale;
	float                                              WPN_RecoilMoveScale;
	float                                              WPN_RecoilAimingScale;
	float                                              WPN_RecoilCrouchScale;
};

struct FWS_MeleeInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;
	int                                                WS_MeleeParametersID;
	int                                                WS_MeleeBeatMode;
	unsigned char                                      WS_MeleeAnimationType;
	int                                                WS_MeleeAnimationIndex;
	float                                              WS_MeleeStartTime;
	float                                              WS_MeleeTime;
	float                                              WS_MeleeFullTime;
	float                                              WS_MeleeSmoothBlendTime;
};

struct FWeaponHitInfo
{
	struct FVector                                     StartTrace;
	struct FVector                                     EndTrace;
	struct FAdditionalHitInfo                          AddInfo;
};

struct FMuzzleFlashLightsArray
{
	TArray< void* >                                    MuzzleFlashLights;
};

struct FAvatarAttribute
{
	int                                                Id;
	int                                                Value;
};

struct FEventDeclarationsChangedTypeSet
{
	unsigned long                                      PrivateEventsWasChanged : 1;
	unsigned long                                      PublicEventsWasChanged : 1;
};

struct FClanRankPrivilegesSet
{
	unsigned long                                      CreateDeleteRank : 1;
	unsigned long                                      RenameRank : 1;
	unsigned long                                      ChangeRankLevel : 1;
	unsigned long                                      ChangeRankPrivileges : 1;
	unsigned long                                      SetCharactersRank : 1;
	unsigned long                                      InviteCharacter : 1;
	unsigned long                                      DisbandCharacter : 1;
	unsigned long                                      RaiseClanLevel : 1;
	unsigned long                                      EditClanDescription : 1;
	unsigned long                                      EditOpenCharacterDescription : 1;
	unsigned long                                      AccessSecureCharacterDescription : 1;
	unsigned long                                      EditDailyMessage : 1;
	unsigned long                                      AccessSecureChat : 1;
	unsigned long                                      EnterClanHall : 1;
	unsigned long                                      SetProductionPlan : 1;
	unsigned long                                      AccessProductionContainer : 1;
	unsigned long                                      ViewBankLog : 1;
	unsigned long                                      WriteToEventManager : 1;
	unsigned long                                      AccessBuffSlots : 1;
	unsigned long                                      AccessClanHallImprovementsSlots : 1;
	unsigned long                                      ChangeClanLogo : 1;
	unsigned long                                      AccessClubManager : 1;
};

struct FClanSubscriptionPrivilegesSet
{
	unsigned long                                      CreateClan : 1;
	unsigned long                                      SendPetition : 1;
	unsigned long                                      JoinClan : 1;
	unsigned long                                      BuyClanHall : 1;
	unsigned long                                      ChangeCHAndBankPrivileges : 1;
	unsigned long                                      ReadAcceptEventManager : 1;
	unsigned long                                      ParticipateInGangWars : 1;
	unsigned long                                      StartAcceptGangWars : 1;
	unsigned long                                      ClanBankAccess : 1;
	unsigned long                                      StartProductionPlan : 1;
	unsigned long                                      StopProductionPlan : 1;
	unsigned long                                      CHPostAndVendorInteraction : 1;
};

struct FAccessTypeSet
{
	unsigned long                                      Chat : 1;
	unsigned long                                      Quickplay : 1;
	unsigned long                                      Tournament : 1;
	unsigned long                                      Clan : 1;
	unsigned long                                      Visibility : 1;
	unsigned long                                      Group : 1;
	unsigned long                                      Mail : 1;
	unsigned long                                      Autojoin : 1;
	unsigned long                                      AutojoinTutorial : 1;
};

struct FItemAttribute
{
	int                                                Id;
	int                                                Value;
};

struct FItemAvatarModifier
{
	int                                                Id;
	float                                              Value;
};

struct FItemAttachmentDescription
{
	int                                                Id;
	int                                                TemplateId;
	unsigned char                                      Slot;
	TArray< struct FItemAttribute >                    Attributes;
};

struct FItemDescription
{
	int                                                Id;
	int                                                TemplateId;
	TArray< struct FItemAttachmentDescription >        Attachments;
	TArray< struct FItemAttribute >                    Attributes;
	TArray< struct FItemAvatarModifier >               Modifiers;
};

struct FItemAttachments
{
	int                                                ItemId;
	TArray< int >                                      Attachments;
};

struct FItemAttachmentsDeleted
{
	int                                                ItemId;
	TArray< int >                                      Attachments;
};

struct FConnectionData
{
	struct FString                                     IPAddress;
	int                                                Port;
};

struct FPaperdoll
{
	int                                                HatTemplateId;
	int                                                HatColorId;
	int                                                GlassesTemplateId;
	int                                                GlassesColorId;
	int                                                UpperClothTemplateId;
	int                                                UpperClothColorId;
	int                                                BottomClothTemplateId;
	int                                                BottomClothColorId;
	int                                                ShoesTemplateId;
	int                                                ShoesColorId;
};

struct FCharacterPosition
{
	float                                              X;
	float                                              Y;
	float                                              Z;
	int                                                Yaw;
};

struct FCharacterAppearance
{
	unsigned char                                      PresetId;
	unsigned char                                      HeadId;
	unsigned char                                      SkinColor;
	unsigned char                                      HairType;
	unsigned char                                      HairColor;
	unsigned char                                      BeardId;
	unsigned char                                      MakeupId;
	unsigned char                                      NameColor;
};

struct FCharacterMovementData
{
	float                                              Speed;
	unsigned char                                      MoveDir;
	float                                              VelX;
	float                                              VelY;
	float                                              VelZ;
};

struct FServerDateTime
{
	unsigned char                                      Year;
	unsigned char                                      Month;
	unsigned char                                      Day;
	unsigned char                                      Hour;
	unsigned char                                      Minute;
	unsigned char                                      Second;
	unsigned char                                      Dummy1;
	unsigned char                                      Dummy2;
};

struct FAbilityRiseDescription
{
	int                                                AbilityId;
	unsigned char                                      RiseValue;
};

struct FAchievementConditionDescription
{
	int                                                Type;
	int                                                Param;
};

struct FAchievementDescription
{
	int                                                AchievementId;
	struct FServerDateTime                             DateChangeState;
	TArray< struct FAchievementConditionDescription >  Conditions;
};

struct FClanAchievementConditionDescription
{
	int                                                Type;
	int                                                Value;
};

struct FClanAchievementDescription
{
	int                                                ClanAchievementId;
	struct FServerDateTime                             DateChangeState;
	TArray< struct FClanAchievementConditionDescription > Conditions;
};

struct FStatisticParameterDescription
{
	int                                                Name;
	int                                                Value;
};

struct FFilterUnit
{
	unsigned char                                      Type;
	int                                                Value;
};

struct FFilterUnitString
{
	unsigned char                                      Type;
	struct FString                                     Value;
};

struct FLotDesc
{
	struct FItemDescription                            Item;
	struct FString                                     CharacterName;
	int                                                Bid;
	int                                                BidStep;
	int                                                BuyoutPrice;
	int                                                LeftTime;
};

struct FLotDescUpdate
{
	int                                                Id;
	struct FString                                     BuyerName;
	int                                                Bid;
};

struct FAuctionStatisticsTime
{
	int                                                TemplateId;
	int                                                TimeLeft;
};

struct FBankTabDesc
{
	unsigned char                                      TabIndex;
	struct FString                                     Name;
	unsigned long                                      IsExtra : 1;
};

struct FFriendListCharacterInfo
{
	int                                                CharacterId;
	int                                                GroupId;
	struct FString                                     Notes;
};

struct FBlackListCharacterInfo
{
	int                                                CharacterId;
	struct FString                                     Notes;
};

struct FFriendListGroupInfo
{
	int                                                GroupId;
	struct FString                                     GroupName;
};

struct FClanBankCashLogRecord
{
	struct FString                                     CharacterName;
	int                                                Amount;
	struct FServerDateTime                             DateTime;
	unsigned char                                      ActionType;
};

struct FClanBankItemLogRecord
{
	struct FString                                     CharacterName;
	int                                                ItemTemplateId;
	TArray< struct FItemAttribute >                    ItemAttributes;
	struct FServerDateTime                             DateTime;
	unsigned long                                      HasPlaced : 1;
	unsigned long                                      FromLootContainer : 1;
};

struct FClanBankTabWithdrawed
{
	unsigned char                                      Index;
	int                                                Count;
};

struct FClanBankRankPrivileges
{
	unsigned char                                      TabIndex;
	unsigned long                                      CanPlaceItems : 1;
	int                                                ItemsWithdrawLimit;
};

struct FRankDescription
{
	unsigned char                                      Id;
	int                                                Privileges;
	struct FString                                     Name;
	unsigned char                                      Level;
};

struct FRankTabDescription
{
	unsigned char                                      RankId;
	int                                                CashLimit;
	TArray< struct FClanBankRankPrivileges >           Privileges;
};

struct FRankTabDescriptionDeleted
{
	unsigned char                                      RankId;
	TArray< unsigned char >                            Indexes;
};

struct FClanBankTabInfo
{
	unsigned char                                      Index;
	struct FString                                     Caption;
};

struct FClanmateDescription
{
	int                                                ClanmateId;
	struct FString                                     Name;
	unsigned char                                      RankId;
	struct FString                                     Note;
	int                                                SeasonIdWhenJoinClan;
	int                                                AccountType;
	struct FServerDateTime                             AccountTypeExpiration;
};

struct FSecureClanmateDescription
{
	int                                                ClanmateId;
	struct FString                                     Text;
};

struct FClanWarSeasonDescription
{
	int                                                ClanWarSeasonId;
	struct FString                                     Name;
	struct FServerDateTime                             StartSeasonDate;
	struct FServerDateTime                             StartFreezeDate;
	struct FServerDateTime                             StartChampionshipRoundOf16Date;
	struct FServerDateTime                             StartChampionshipQuarterfinalDate;
	struct FServerDateTime                             StartChampionshipSemifinalDate;
	struct FServerDateTime                             StartChampionshipFinalDate;
	struct FServerDateTime                             StartOffSeasonDate;
	int                                                Money;
	TArray< int >                                      ItemTemplateIDs;
};

struct FClanStatDescription
{
	int                                                ClanId;
	int                                                Rate;
	int                                                WinWarsCount;
	int                                                DrawWarsCount;
	int                                                LoseWarsCount;
};

struct FClanWarTournamentPairDescription
{
	unsigned char                                      GroupName;
	unsigned char                                      PairState;
	int                                                Clan1Points;
	int                                                Clan2Points;
};

struct FInteractionData
{
	int                                                CharacterId;
	int                                                ObjectId;
	int                                                Param1;
	int                                                Param2;
	struct FServerDateTime                             StartTime;
};

struct FClubParty
{
	int                                                ClanId;
	unsigned long                                      IsPublic : 1;
	int                                                PartyTypeId;
	int                                                EntranceFee;
	struct FServerDateTime                             StartTime;
};

struct FClubItemAttribute
{
	unsigned char                                      AttributeTemplateId;
	int                                                EncodedValue;
};

struct FClubItemChanges
{
	int                                                ItemId;
	TArray< struct FClubItemAttribute >                ChangedAttributes;
	TArray< int >                                      RemovedAttributesTemplateIds;
};

struct FClubItem
{
	int                                                ItemId;
	int                                                ItemTemplateId;
	TArray< struct FClubItemAttribute >                Attributes;
};

struct FClubZoneChanges
{
	int                                                ZoneId;
	TArray< struct FClubItem >                         AddedItems;
	TArray< int >                                      RemovedItemsIds;
	TArray< struct FClubItemChanges >                  ChangesInItems;
};

struct FClubZone
{
	int                                                ZoneId;
	TArray< struct FClubItem >                         Items;
};

struct FCharacterAddiction
{
	int                                                DrugId;
	int                                                NumberOfUse;
	struct FServerDateTime                             LastUse;
	unsigned long                                      IsAddicted : 1;
};

struct FCharacterInfoShort
{
	struct FString                                     CharacterName;
	int                                                ClanId;
	unsigned char                                      Level;
	unsigned char                                      ClassId;
};

struct FGroupMemberInfo
{
	int                                                CharacterId;
	struct FString                                     CharacterName;
};

struct FInstanceSessionDescription
{
	int                                                IdForUI;
	int                                                InstanceId;
	int                                                SessionId;
	unsigned char                                      Status;
	float                                              Time;
	int                                                Players;
	int                                                AvgPowerRank;
};

struct FWeaponProfile
{
	unsigned char                                      ActionSlot;
	int                                                WeaponTemplateId;
	TArray< struct FAvatarAttribute >                  AttributeDiffs;
	TArray< int >                                      Attachments;
	TArray< int >                                      AttachmentsColors;
};

struct FAbilityShotDesc
{
	struct FName                                       AbilityName;
	unsigned long                                      AllowDamage : 1;
	unsigned long                                      UseCriticalEffects : 1;
	float                                              DamageMultiplier;
	float                                              BurnRange;
};

struct FDefense
{
	int                                                Type;
	float                                              Bonus;
	float                                              Value;
};

struct FAbilitSlotDesc
{
	struct FName                                       client_ability_name;
	int                                                client_ability_level;
	int                                                server_ability_id;
};

struct FAbilitySlotEditorParams
{
	struct FName                                       AbilitySlot[ 8 ];
};

struct FBackStabParams
{
	float                                              BSB_BackStabDamageRadius;
	float                                              BSB_DamageCoeff;
	unsigned long                                      BSB_bCanBackStab : 1;
	unsigned long                                      BSB_bCanFallOff : 1;
};

struct FWeaponDamTypeParams
{
	float                                              WDT_Absorb;
	float                                              DamageTypeCoeffs[ 5 ];
};

struct FMyDouble
{
	struct FDouble                                     Value;
};

struct FVisualCarrySlotInfo
{
	unsigned char                                      ActiveVisualCarrySlot;
	unsigned char                                      DuplicatedWeaponAttachmentState;
	float                                              VCSI_WeaponHideTime;
	float                                              VCSI_WeaponEquipTime;
};

struct FFakeEquipItemsDesc
{
	struct FString                                     UpperCloth;
	struct FString                                     LowerCloth;
	struct FString                                     Boots;
};

struct FPlacingItemInfo
{
	class ACCPlaceableItem*                            ItemArchetype;
	unsigned char                                      CurrState;
	struct FVector                                     PlaceLoc;
	struct FRotator                                    PlaceRot;
};

struct FPawnWeaponParams
{
	float                                              pWPN_Speed;
	int                                                pWPN_Damage;
	int                                                pWPN_AmmoCount;
	int                                                WPN_ClipSize;
	float                                              WPN_Spread;
	float                                              WPN_AimingSpread;
	float                                              WPN_ProjectileSpeed;
	float                                              WPN_ReloadTime;
	float                                              WPN_ReloadPreTime;
	float                                              WPN_ReloadPostTime;
	float                                              WPN_SingleBulletReloadTimePerc;
	float                                              WPN_SingleBulletReloadTimePosPerc;
	unsigned long                                      WPN_bOneShotWeapon : 1;
	struct FName                                       WPN_WeaponAttachmentID;
	struct FName                                       WPN_WeaponAttachmentID2;
	float                                              WPN_AltProjFireDist;
	unsigned long                                      WPN_bAltProjFire : 1;
	float                                              WPN_TraceCoeff;
};

struct FKillerInfo
{
	class ACCPlayerReplicationInfo*                    PRI;
	int                                                AbilityIds[ 5 ];
	int                                                AffectingAbilityIds[ 5 ];
	float                                              ResistLight;
	float                                              ResistMedium;
	float                                              ResistHeavy;
	float                                              ResistSplash;
	float                                              DmgAbsorb;
	unsigned char                                      CurrentWeaponSlot;
	float                                              WeaponDamage[ 3 ];
	int                                                WeaponTemplateId[ 3 ];
	float                                              SummaryDamage;
	float                                              MaxHP;
	float                                              CurrentHP;
	float                                              HP_Regen;
	struct FString                                     PlayerName;
	struct FString                                     GangName;
	int                                                GangLogoId;
	float                                              MaxSTM;
	float                                              STM_Regen;
	float                                              MeeleDamageModifier;
	float                                              BodyShotDamageModifier;
	float                                              HeadShotDamageModifier;
	float                                              LegsShotDamageModifier;
	float                                              SplashRadiusModifier;
	float                                              FireDamageModifier;
};

struct FPawnBurning_BoneInfo
{
	struct FName                                       BoneName;
	float                                              EndTime;
};

struct FBulletTwists_AbilityInfo
{
	float                                              DamageScale;
	unsigned long                                      bEnabled : 1;
};

struct FCachedFirePosition
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	float                                              Time;
};

struct FInterpolationSplineInfo
{
	struct FVector                                     InterpolationSplineLocation;
	struct FVector                                     InterpolationSplineVelocity;
	struct FVector                                     InterpolationSplineAcc;
	struct FVector                                     InterpolationSplineAcc2;
};

struct FInterpolationSpline
{
	struct FInterpolationSplineInfo                    SplineInfo;
	float                                              InterpolationTime;
	float                                              PassedInterpolationTime;
};

struct FSetupInfo
{
	float                                              RotationAngleLimit;
	float                                              RotationRestoreSpeedMin;
	float                                              RotationRestoreSpeedMax;
	float                                              RotationRestoreSpeedPower;
};

struct FSetupEntry
{
	unsigned char                                      MovementMode;
	unsigned long                                      bAiming : 1;
	struct FSetupInfo                                  SetupInfoStruct;
};

struct FTurnNode
{
	void*                                              SequenceNode;
	float                                              Angle;
	int                                                ChildIndex;
};

struct FTurnModeInfo
{
	unsigned long                                      ModeEnabled : 1;
	float                                              AngleDiff;
	struct FName                                       SequenceName;
	float                                              Time;
	float                                              SmoothBlendInTime;
	float                                              MaxSwitchUpProgressPerc;
	void*                                              SequenceNode;
};

struct FRuntimeTurnInfo
{
	int                                                TurnModeIndex;
	float                                              SystemBasisStartAngle;
	float                                              SystemBasisAngleDirection;
	float                                              TargetAngle;
	float                                              CurrentAngle;
	float                                              TurnSpeed;
};

struct FPS2CCParameters
{
	struct FName                                       CustomComponentSocketName;
	void*                                              PS;
};

struct FIKLerpingParameters
{
	unsigned char                                      LerpingMode;
	float                                              IKLerpingTime;
	struct FSkelControlDestLocation                    IKLerpingLocation;
	unsigned long                                      bPeekTransformFromParameters : 1;
	int                                                ParameterIndex;
};

struct FStaticMeshParameters
{
	void*                                              StaticMeshTemplate;
};

struct FSkeletalMeshParameters
{
	class USkeletalMesh*                               SkeletalMeshTemplate;
	void*                                              AnimTreeTemplate;
	void*                                              AnimSet;
	struct FName                                       MainSequenceNodeName;
	void*                                              PhysAsset;
};

struct FCCAbilityAction
{
	struct FName                                       ActionName;
	struct FString                                     ActionParam;
};

struct FCCAbilityPSEffect
{
	struct FString                                     PSName[ 6 ];
	void*                                              PS[ 6 ];
	struct FName                                       PSAttachSocket[ 6 ];
	struct FName                                       PSAttachBoneName[ 6 ];
	float                                              PSPlayTime[ 6 ];
};

struct FCCAbilityEffect
{
	unsigned long                                      IsActive : 1;
	struct FCCAbilityPSEffect                          PSEffect[ 3 ];
	struct FString                                     Standing_AnimName[ 6 ];
	float                                              Standing_AnimPlayTime[ 6 ];
	unsigned char                                      Standing_HideWeapon[ 6 ];
	unsigned char                                      Standing_LoopAnimation[ 6 ];
	unsigned char                                      Standing_SequenceBased[ 6 ];
	struct FString                                     Crouch_AnimName[ 6 ];
	float                                              Crouch_AnimPlayTime[ 6 ];
	unsigned char                                      Crouch_HideWeapon[ 6 ];
	unsigned char                                      Crouch_LoopAnimation[ 6 ];
	unsigned char                                      Crouch_SequenceBased[ 6 ];
	struct FString                                     SoundName[ 6 ];
	struct FString                                     StaticMeshName[ 6 ];
	void*                                              Sound[ 6 ];
};

struct FCCAvatarLogicOperation
{
	struct FName                                       FieldName;
	TArray< struct FPointer >                          LogicOperations;
};

struct FCCAvatarMathOperation
{
	struct FName                                       FieldName;
	struct FName                                       ValueMultipliedBy;
	TArray< struct FPointer >                          MathOperations;
};

struct FCCActionParams
{
	void*                                              Ability;
	class ACCInstancePawn*                             Pawn;
	struct FString                                     Params;
};

struct FInventoryItem
{
	struct FName                                       Id;
	float                                              Rating;
};

struct FBotResists
{
	float                                              RLight;
	float                                              RMedium;
	float                                              RHeavy;
	float                                              RSplash;
	float                                              RMelee;
};

struct FAIAbilityEffect
{
	unsigned char                                      Type;
	float                                              EndTime;
	class AController*                                 Instigator;
	float                                              flDOTDamage;
};

struct FBotRosterAIAbilityInfo
{
	unsigned char                                      AbilityType;
	float                                              flCooldownMin;
	float                                              flCooldownMax;
	float                                              flProbability;
	float                                              flPrecision;
};

struct FCCOperationDesc
{
	struct FName                                       Operation;
	struct FString                                     Value;
};

struct FCCAvatarOperationDesc
{
	struct FName                                       FieldName;
	struct FName                                       ValueMultipliedBy;
	TArray< struct FCCOperationDesc >                  Operations;
};

struct FCCAbilityDesc
{
	struct FName                                       AbilityName;
	int                                                AbilityId;
	unsigned char                                      AbilityType;
	unsigned long                                      StartCooldownAfterAffect : 1;
	float                                              CoolDownTime;
	unsigned long                                      InstantUse : 1;
	unsigned long                                      IsWeaponBased : 1;
	unsigned long                                      EndAffectOnWeaponSwitch : 1;
	unsigned long                                      ReaffectOnWeaponSwitch : 1;
	unsigned long                                      UseAffectTimeLikeGroupCoolDown : 1;
	unsigned long                                      DoNotStackAbilityAffect : 1;
	unsigned long                                      InfinitePrepare : 1;
	unsigned long                                      EndPrepareOnTickFalse : 1;
	unsigned long                                      ContinuePrepareOnEndFalse : 1;
	unsigned long                                      LockWeaponSwitchWhenPrepare : 1;
	unsigned long                                      LockWeaponSwitchWhenUse : 1;
	unsigned long                                      LockWeaponFireWhenPrepare : 1;
	unsigned long                                      DontUnmarkAfterDeath : 1;
	unsigned long                                      AutoActivateAbility : 1;
	unsigned long                                      AffectCanBeEndedManually : 1;
	unsigned char                                      CastOn;
	float                                              PrepareTime;
	float                                              PreparingTick;
	unsigned char                                      AffectTimeType;
	float                                              AffectTime;
	float                                              AffectingTick;
	unsigned long                                      bUseOwnMuzzleFlash : 1;
	struct FString                                     MuzzleFlashPSName;
	struct FVector                                     MuzzleFlashScale;
	struct FColor                                      MuzzleFlashColor;
	float                                              MuzzleFlashDuration;
	float                                              MuzzleFlashPriority;
	struct FString                                     TracePackage;
	struct FString                                     TracePSName;
	TArray< struct FCCAbilityAction >                  Actions;
	TArray< struct FCCAbilityEffect >                  Effects;
	TArray< struct FCCAvatarOperationDesc >            BeginPrepareLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            BeginPrepareMathOperations;
	TArray< struct FCCAvatarOperationDesc >            PrepareLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            PrepareMathOperations;
	TArray< struct FCCAvatarOperationDesc >            EndPrepareLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            EndPrepareMathOperations;
	TArray< struct FCCAvatarOperationDesc >            BeginAffectLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            BeginAffectMathOperations;
	TArray< struct FCCAvatarOperationDesc >            AffectLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            AffectMathOperations;
	TArray< struct FCCAvatarOperationDesc >            EndAffectLogicOperations;
	TArray< struct FCCAvatarOperationDesc >            EndAffectMathOperations;
};

struct FCCAbilityInfo
{
	struct FName                                       AbilityName;
	float                                              TypeCooldownTime;
	float                                              CoolDownTime;
	float                                              PrepareTime;
	float                                              PreparingTick;
	float                                              AffectTime;
	float                                              AffectingTick;
	void*                                              Ability;
	class AController*                                 Caster;
	unsigned long                                      WasCool : 1;
	unsigned long                                      Active : 1;
};

struct FActionBarSlotState
{
	unsigned char                                      Phase;
	float                                              Progress;
	float                                              SecondsLeft;
	unsigned long                                      AffectCanBeEnded : 1;
};

struct FActionBar_Ability
{
	struct FName                                       AbilityName;
	void*                                              Ability;
	int                                                ServerAbilityId;
	int                                                AbilityLevel;
	unsigned char                                      Phase;
	unsigned char                                      ClientPhase;
	float                                              PrepareStartTime;
	float                                              PrepareEndTime;
	float                                              CooldownStartTime;
	float                                              CooldownEndTime;
	unsigned long                                      AvailableForPrepare : 1;
	int                                                PackCount;
	int                                                MaxPackCount;
	class ACCPlaceableItem*                            PlaceableItemArchetype;
};

struct FPawnBoneInfo
{
	class ACCInstancePawn*                             P;
	TArray< struct FName >                             BoneNames;
	TArray< struct FVector >                           BoneLocations;
};

struct FAbilityInfo
{
	int                                                ServerAbilityId;
	unsigned char                                      AbilityLevel;
};

struct FDrugInfo
{
	struct FAbilityInfo                                AbilityInfo;
	int                                                Usages;
};

struct FFireStat
{
	int                                                ShotsFired;
	int                                                ShotsDamaged;
	int                                                ShotsDirectHit;
	int                                                TotalDamage;
};

struct FWeaponStat
{
	int                                                WeaponType;
	TArray< struct FFireStat >                         FireStats;
	int                                                Combos;
};

struct FInventoryStat
{
	int                                                InventoryType;
	int                                                NoPickups;
	int                                                NoDrops;
	int                                                NoIntentionalDrops;
};

struct FBonusStat
{
	int                                                BonusType;
	int                                                NoReceived;
};

struct FPickUpStat
{
	unsigned char                                      Type;
	int                                                Count;
};

struct FFeatStat
{
	unsigned char                                      Type;
	int                                                Value;
};

struct FScoreBoardPlace
{
	unsigned char                                      Position;
	int                                                Score;
	struct FString                                     CharacterName;
};

struct FWaitingCharacter
{
	int                                                Id;
	struct FString                                     Name;
	unsigned char                                      Level;
	int                                                PvPRank;
	unsigned char                                      Team;
};

struct FGetNewspapersByMonthStruct
{
	int                                                Id;
	struct FServerDateTime                             Date;
};

struct FNewspaperArticleData
{
	struct FString                                     Subject;
	struct FString                                     Body;
};

struct FItemOperation
{
	int                                                SrcItemId;
	int                                                DestItemId;
	int                                                ContainerType;
	int                                                Slot;
	int                                                StackSize;
};

struct FSoldItem
{
	int                                                ItemId;
	int                                                ItemTemplateId;
	int                                                Price;
	unsigned char                                      Stack;
};

struct FItemDescr
{
	int                                                ItemId;
	int                                                TemplateId;
	int                                                ContainerType;
	unsigned char                                      Slot;
};

struct FItemAttributes
{
	int                                                ItemId;
	TArray< struct FItemAttribute >                    Attributes;
	TArray< struct FItemAvatarModifier >               Modifiers;
};

struct FItemAttributesDeleted
{
	int                                                ItemId;
	TArray< int >                                      Attributes;
	TArray< int >                                      Modifiers;
};

struct FMailDesc
{
	int                                                MailId;
	unsigned char                                      Type;
	int                                                SenderId;
	struct FString                                     SenderName;
	struct FString                                     Subject;
	struct FString                                     Message;
	int                                                TTL;
	int                                                CoD;
	int                                                MoneyAttach;
	unsigned long                                      IsDelivered : 1;
	unsigned long                                      IsProtected : 1;
	struct FServerDateTime                             TimeStamp;
	TArray< struct FItemDescription >                  Items;
};

struct FFunctionalityNPC
{
	TArray< int >                                      Ids;
	TArray< int >                                      Values;
};

struct FNpcFunctionalityDescription
{
	unsigned char                                      Functionality;
	int                                                FunctionalityId;
	int                                                FunctionalityParam;
};

struct FLadderRecord
{
	unsigned char                                      Place;
	unsigned char                                      PlaceSnapshot;
	struct FString                                     Name;
	int                                                PvPTitleId;
	struct FString                                     ClanName;
	int                                                ClanLogoId;
	int                                                PvPScore;
	int                                                Kills;
	int                                                Deaths;
	int                                                Assists;
};

struct FLadderSnapshotRecord
{
	unsigned char                                      Place;
	struct FString                                     Name;
	struct FString                                     ClanName;
	int                                                ClanLogoId;
	int                                                PvPScore;
	int                                                Kills;
	int                                                Deaths;
	int                                                Assists;
};

struct FActiveQuestState
{
	int                                                ConditionId;
	int                                                Param1;
	int                                                Param2;
	int                                                Param3;
	TArray< int >                                      Params;
};

struct FActiveQuest
{
	int                                                QuestId;
	int                                                QuestStep;
	unsigned long                                      IsTracked : 1;
	TArray< struct FActiveQuestState >                 Conditions;
};

struct FViewShakeInfo
{
	struct FVector                                     OffsetMag;
	struct FVector                                     OffsetRate;
	float                                              OffsetTime;
	struct FVector                                     RotMag;
	struct FVector                                     RotRate;
	float                                              RotTime;
};

struct FActionDescriptionSecondary
{
	unsigned char                                      ActionID;
	unsigned char                                      CooperationType;
	unsigned char                                      Dummy1;
	unsigned char                                      Dummy2;
};

struct FActionDescription
{
	unsigned char                                      ActionID;
	TArray< struct FActionDescriptionSecondary >       Cooperation;
};

struct FAutoUpdateData
{
	struct FString                                     PackageName;
	unsigned long                                      bAllTypes : 1;
	unsigned long                                      bStaticMesh : 1;
	unsigned long                                      bSkeletalMesh : 1;
	unsigned long                                      bTexture : 1;
	unsigned long                                      bMaterial : 1;
	unsigned long                                      bMaterialInstance : 1;
};

struct FMediaholderInfo
{
	int                                                TypeId;
	int                                                TextureId;
	int                                                OffsetX;
	int                                                OffsetY;
	int                                                SizeX;
	int                                                SizeY;
	TArray< void* >                                    UpdateEvents;
};

struct FSwitchGroup
{
	int                                                TypeId;
	TArray< int >                                      Mediaholders;
};

struct FDummyPlaceholderInfo
{
	struct FVector                                     PosLB;
	struct FVector                                     PosLT;
	struct FVector                                     PosRT;
};

struct FPlaceholderGroup
{
	class UMaterialInterface*                          Mtl;
	class AActor*                                      Owner;
	TArray< struct FSwitchGroup >                      SwitchGroups;
	TArray< struct FDummyPlaceholderInfo >             DummyPlaceholders;
	TArray< int >                                      Placeholders;
	TArray< void* >                                    SetEvents;
	int                                                CurSwitchGroup;
};

struct FPlaceholderInfo
{
	int                                                GroupId;
	struct FVector                                     PosLB;
	struct FVector                                     PosLT;
	struct FVector                                     PosRT;
	TArray< int >                                      Mediaholders;
};

struct FAdMeshInfo
{
	void*                                              Mesh;
	int                                                MtlIndex;
};

struct FAdMtlInfo
{
	int                                                TextureId;
	class UMaterialInterface*                          Mtl;
	TArray< struct FAdMeshInfo >                       Components;
};

struct FMPQueue
{
	float                                              SwitchTime;
	float                                              LastTime;
	TArray< int >                                      MultiPlaceholders;
	int                                                NextIndex;
};

struct FCCAISoundGroupEntry
{
	void*                                              Sound;
	unsigned long                                      bSpoken : 1;
	unsigned long                                      bShared : 1;
	float                                              Probability;
	float                                              Cooldown;
	float                                              CooldownBias;
	float                                              NextAllowedPlayTime;
};

struct FAnimTreeEntry
{
	void*                                              AnimTreeInstance;
	unsigned long                                      bUsed : 1;
};

struct FPoolEntry
{
	void*                                              AnimTreeTemplate;
	TArray< struct FAnimTreeEntry >                    Instances;
};

struct FCachedSound
{
	void*                                              OldSound;
	void*                                              NewSound;
};

struct FAnnouncerPackageInfo
{
	struct FString                                     PackageName;
	struct FString                                     SoundPrefix;
};

struct FProjectileExplosionInfo
{
	int                                                RepCounter;
	struct FString                                     CustomWpnAttachmentID;
	struct FVector                                     HitLocation;
	struct FVector                                     HitNormal;
	int                                                BlockExplosion;
};

struct FPendingTouchInfo
{
	unsigned long                                      bValid : 1;
	class AActor*                                      Other;
	struct FVector                                     HitLocation;
	struct FVector                                     HitNormal;
};

struct FWeaponHitEffect
{
	void*                                              HitEffect;
	float                                              HitCoeff;
};

struct FWeaponTypeEffect
{
	unsigned char                                      WeaponType;
	void*                                              HitSound;
	void*                                              ReflectionSound;
	TArray< void* >                                    DecalMaterials;
	float                                              DecalLifetime;
	float                                              DecalSize;
	TArray< struct FWeaponHitEffect >                  HitEffects;
	float                                              DamagePenetrationLoss;
	float                                              DamagePenetrationMaxWidth;
};

struct FLightValues
{
	float                                              StartTime;
	float                                              Radius;
	float                                              Brightness;
	struct FColor                                      LightColor;
};

struct FAttachmentVisual
{
	struct FString                                     Name;
	struct FString                                     MeshUrl;
	void*                                              Mesh;
	int                                                FunctionalityId;
	int                                                ColorPresetIndex;
};

struct FWeaponUniqAnimations
{
	struct FString                                     PresetName;
	struct FString                                     AnimWpnPutByCarrySlot[ 6 ];
	struct FString                                     AnimWpnGetByCarrySlot[ 6 ];
	struct FString                                     AnimWpnReload;
};

struct FChatChannelData
{
	int                                                ChannelId;
	struct FString                                     Name;
	struct FString                                     InstanceName;
	struct FLinearColor                                MessageColor;
	struct FLinearColor                                TitleColor;
	unsigned long                                      IsEnable : 1;
};

struct FMenuStateTransition
{
	int                                                StateID;
	int                                                TargetStateID;
};

struct FMenuStateDesc
{
	int                                                StateID;
	float                                              UpdateRate;
	float                                              UpdateDelta;
	struct FScriptDelegate                             OnEnter;
	struct FScriptDelegate                             OnExit;
	struct FScriptDelegate                             OnUpdate;
};

struct FCCTutorialTooltipDesc
{
	struct FString                                     Caption;
	struct FString                                     Description;
	unsigned long                                      F2PMode : 1;
};

struct FCCTooltipDesc
{
	int                                                UnifiedID;
	int                                                ItemIndex;
	unsigned char                                      TypeTemplate;
	unsigned char                                      Type;
	float                                              SalingFactor;
	unsigned long                                      bDiscount : 1;
	float                                              Discount;
	struct FString                                     CommonCaption;
	int                                                CommonCaptionStyle;
	struct FString                                     CommonDescription;
	struct FString                                     CommonImageRef;
	int                                                CommonItemPrice;
	unsigned long                                      ClampBackgroundByWidth : 1;
	unsigned long                                      bClampImage : 1;
	unsigned long                                      DisablePriceOutput : 1;
	unsigned long                                      AdjustLocation : 1;
	int                                                CurrentStack;
	TArray< struct FItemAttachmentDescription >        Attachments;
	TArray< struct FItemAttribute >                    Attributes;
	int                                                UnifiedCompareID;
	unsigned char                                      CompareTypeTemplate;
	TArray< struct FItemAttribute >                    CompareAttributes;
};

struct FItemInfo
{
	int                                                Id;
	int                                                Type;
	int                                                Index;
	int                                                Stack;
	int                                                StackMax;
	unsigned char                                      State;
	int                                                TotalNum;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
	struct FString                                     ItemText0;
	struct FPointer                                    IconRender;
	unsigned long                                      bIsLocked : 1;
	unsigned long                                      bIsDestroyed : 1;
};

struct FDnDModeDesc
{
	struct FItemInfo                                   SrcItem;
	void*                                              SourceContainer;
	struct FVector2D                                   ItemTexturePos;
	unsigned long                                      bDragging : 1;
	unsigned long                                      bBreakStack : 1;
	int                                                NewStackSize;
};

struct FListGridItemInfo
{
	struct FString                                     ToolTip;
	int                                                Id;
	void*                                              Image;
};

struct FItemInstanceDesc
{
	int                                                Id;
	int                                                Type;
	int                                                Index;
	int                                                Stack;
};

struct FSpringAnimData
{
	float                                              AnimSpeed;
	float                                              AnimClampSpeed;
	float                                              AnimDelta;
};

struct FUserNotificationControl
{
	void*                                              NotifyIcon;
	void*                                              NotifyStack;
	unsigned long                                      bActive : 1;
	int                                                PrevSize;
};

struct FPoint2D
{
	struct FVector2D                                   Point;
	struct FVector2D                                   uv;
};

struct FTriangle
{
	struct FPoint2D                                    point0;
	struct FPoint2D                                    point1;
	struct FPoint2D                                    point2;
};

struct FItemRenderer
{
	void*                                              ItemImage;
	void*                                              BackdropImage;
	struct FVector2D                                   ItemExtent;
	struct FVector2D                                   ItemOrigin;
	struct FVector2D                                   BackdropExtent;
};

struct FColorInfo
{
	struct FLinearColor                                Color;
	struct FPointer                                    IconRender;
};

struct FColumnDataInfo
{
	struct FUIScreenValue_Extent                       NodeWidth;
	struct FUIScreenValue                              TextureOffset;
	struct FString                                     NodeCaption;
	struct FString                                     TextureReference;
	void*                                              Texture;
	unsigned long                                      ShowCaptionNodeName : 1;
	int                                                CaptionNodeStyleID;
	unsigned long                                      bStateTexture : 1;
	unsigned long                                      bHiglight : 1;
	struct FName                                       MegaToolTipName;
};

struct FListBoxItemInfo
{
	struct FString                                     ElementName;
};

struct FNodeTextTemplate
{
	int                                                StyleID;
	struct FString                                     Text;
	struct FLinearColor                                Color;
	unsigned long                                      bColorOverride : 1;
};

struct FNodeEx
{
	struct FPointer                                    IconRender;
	TArray< struct FNodeTextTemplate >                 TextTemplate;
	unsigned long                                      UseBackgroupColor : 1;
	struct FLinearColor                                BackgroupColor;
	float                                              ProgressValue;
	float                                              ProgressMin;
	float                                              ProgressMax;
	int                                                ParamProgressW;
	int                                                StackNum;
	int                                                TotalNum;
	unsigned char                                      ItemState;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
};

struct FListBoxItemContainer
{
	unsigned long                                      bEnableNode : 1;
	TArray< struct FNodeEx >                           ItemContainer;
	int                                                StyleID;
	int                                                StyleTextID;
	struct FLinearColor                                TextColor;
	int                                                UserData;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
	int                                                ItemHeight;
	unsigned long                                      bClamped : 1;
	int                                                IndexZ;
	unsigned long                                      bF2PLocked : 1;
};

struct FListGridCell
{
	struct FPointer                                    IconRender;
	unsigned long                                      bEnabled : 1;
	unsigned long                                      bLocked : 1;
	int                                                UserData;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
	int                                                UserData4;
	int                                                UserData5;
};

struct FListGridContainer
{
	struct FString                                     ContainerName;
	TArray< struct FListGridCell >                     Nodes;
};

struct FUserAbilityControl
{
	void*                                              UIObjectHolder;
	int                                                AbilityId;
	int                                                Category;
	int                                                UICategory;
	void*                                              RefGrid;
	void*                                              RefButton;
	int                                                CellIndex;
	int                                                MasteryID;
	int                                                UserAppliedPoints;
	int                                                UserAppliedMoney;
	int                                                RiseLevel;
};

struct FLoadingSound
{
	unsigned char                                      LoadingEvent;
	unsigned char                                      InstanceType;
	struct FName                                       Sound;
};

struct FTutorialState
{
	int                                                TutorialStep1;
	int                                                TutorialStep2;
	int                                                TutorialStep3;
	int                                                TutorialStep4;
	int                                                TutorialStep5;
	int                                                TutorialStep6;
	int                                                TutorialStep7;
	int                                                TutorialStep8;
	int                                                TutorialInfo1;
	int                                                TutorialInfo2;
	int                                                TutorialInfo3;
	int                                                TutorialInfo4;
	int                                                TutorialInfo5;
	int                                                TutorialInfo6;
	int                                                TutorialInfo7;
	int                                                TutorialInfo8;
	int                                                LastReminderId;
	unsigned long                                      IsActive : 1;
	int                                                TargetNpcId;
	unsigned long                                      IsNewTutorial : 1;
	int                                                NewTutorialStep;
};

struct FInstance
{
	int                                                Id;
	int                                                Type;
	struct FString                                     Title;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     ShortDescription;
	struct FString                                     ScreenShot;
	struct FString                                     LoadingScreen;
	struct FString                                     Map;
	int                                                PlayersMax;
	int                                                PlayersMin;
	TArray< int >                                      RequiredConditions;
	unsigned long                                      ForClanWar_Auto : 1;
	unsigned long                                      ForClanWar_Contractual : 1;
	int                                                Complexity;
	int                                                WarmupTime;
	int                                                TimeLimit;
	int                                                GoalScore;
	struct FString                                     MapData;
	int                                                TutorialTypeId;
};

struct FInstanceGameType
{
	int                                                Id;
	unsigned char                                      Type;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     IconUrl;
};

struct FInstanceUniqueAction
{
	int                                                Id;
	int                                                ClientKey;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FCharacterCounter
{
	int                                                Type;
	int                                                Value;
};

struct FItemTemplateProperty
{
	int                                                Id;
	struct FString                                     Value;
};

struct FIngredientRequirement
{
	int                                                TemplateId;
	int                                                Quantity;
};

struct FItemAvatarAttributeModifierValue
{
	int                                                ModifierId;
	float                                              Value;
};

struct FItemTemplate
{
	int                                                Id;
	int                                                BaseIndex;
	struct FString                                     Name;
	struct FString                                     Description;
	int                                                CategoryId;
	int                                                CostType;
	int                                                Cost;
	int                                                Rarity;
	TArray< struct FItemTemplateProperty >             Properites;
	unsigned long                                      IsMale : 1;
	unsigned long                                      IsFemale : 1;
	struct FString                                     Resource2D;
	struct FString                                     Resource2DBackdrop;
	unsigned long                                      bExistIconColor : 1;
	struct FLinearColor                                IconColor;
	int                                                Level;
	int                                                StackMax;
	TArray< struct FIngredientRequirement >            RepairRequirement_Ingredients;
	TArray< int >                                      RepairRequirement_InstrumentTemplates;
	int                                                RepairRequirement_RepairKitId;
	int                                                VisualIndex;
	int                                                ClassMaskToUse;
	int                                                MinLevelToUse;
	TArray< int >                                      Sets;
	TArray< struct FItemAvatarAttributeModifierValue > AvatarModifiers;
	TArray< int >                                      AttachmentCategories;
	TArray< int >                                      MultitoolItemTemplates;
	int                                                AdLogoId;
	int                                                LogoCoordsId;
};

struct FBaseItemAttribute
{
	int                                                Id;
	float                                              MaxValue;
};

struct FBaseItemAvatarModifier
{
	int                                                Id;
	float                                              Value;
	float                                              MinValue;
	float                                              MaxValue;
};

struct FBaseItemTemplate
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FBaseItemAttribute >                Attributes;
	TArray< struct FBaseItemAvatarModifier >           Modifiers;
};

struct FItemAvatarAttributeModifier
{
	int                                                Id;
	int                                                ModifiedAttributeId;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     UIPositiveDescription;
	struct FString                                     UINegativeDescription;
	unsigned long                                      bUIMultiplyBy100 : 1;
	unsigned long                                      bUIUsePercentSymbol : 1;
	unsigned long                                      IsAlwaysShow : 1;
	unsigned long                                      IsPTC : 1;
	int                                                UIPriority;
};

struct FShopItem
{
	int                                                TemplateId;
	int                                                SellingFactor;
	int                                                BuyingFactor;
};

struct FShop
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FShopItem >                         Goods;
	TArray< int >                                      ConditionId;
	int                                                Specialization;
	unsigned long                                      IsAvailableInClanHall : 1;
};

struct FCharacterCreationItems
{
	TArray< int >                                      Hats;
	TArray< int >                                      UpperClothes;
	TArray< int >                                      LowerClothes;
	TArray< int >                                      Shoes;
	TArray< int >                                      Others;
};

struct FSubscriptionDescription
{
	unsigned long                                      bShowPvPRanking : 1;
	int                                                MaxItemLevel;
	int                                                MaxQuestLevel;
	int                                                MaxClanLevel;
	unsigned long                                      bCharacterCreationRandomizeOnly : 1;
	struct FCharacterCreationItems                     MaleCharacterCreationItems;
	struct FCharacterCreationItems                     FemaleCharacterCreationItems;
	int                                                CharacterSlots;
	int                                                AbilityActionBarSlotCount;
	int                                                DisabledActionBarSlotCount;
	float                                              SellFactor;
	int                                                DeleteCharacterTimeout;
	int                                                MaxChallenges;
	int                                                MaxMissions;
	unsigned long                                      bCraftEnabled : 1;
	unsigned long                                      bInstanceCreationEnabled : 1;
	unsigned long                                      bMasteryEnabled : 1;
	int                                                MaxAbilityLevel;
	TArray< int >                                      PaperdollDisabledSlots;
	int                                                MaxBankTabs;
	int                                                MaxBackpackTabs;
	unsigned long                                      bMailEnabled : 1;
	unsigned long                                      bAuctionEnabled : 1;
	unsigned long                                      bSetLotTimeEnabled : 1;
	unsigned long                                      bVoiceChatEnabled : 1;
	unsigned long                                      bPlayerInteractionEnabled : 1;
	unsigned long                                      bFullChat : 1;
	unsigned long                                      bCanBeClanLeader : 1;
	int                                                ChatChannelsEnabled;
	struct FClanRankPrivilegesSet                      ClanPrivileges;
	struct FClanSubscriptionPrivilegesSet              ClanSubscriptionPrivileges;
	int                                                MaxRealmCharacters;
	float                                              CashRewardFactor;
	float                                              ExpRewardFactor;
	int                                                MaxCash;
	float                                              MailCostFactor;
	float                                              AuctionCostFactor;
	float                                              MailTax;
	float                                              TradeTax;
};

struct FClanHallCost
{
	int                                                LobbyId;
	int                                                ClanHallTypeId;
	int                                                Cost;
	int                                                CostType;
};

struct FClanHallVendorTemplate
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FClanHallCost >                     Assortment;
};

struct FNPCPathLink
{
	struct FVector                                     StartPoint;
	int                                                Yaw;
	float                                              Speed;
	float                                              Angle;
	struct FVector                                     CenterPoint;
	float                                              Radius;
};

struct FNPCIdleAnimation
{
	struct FString                                     AnimName;
	int                                                MinAfterDelay;
	int                                                MaxAfterDelay;
};

struct FNPCPath
{
	int                                                Id;
	TArray< struct FNPCPathLink >                      Link;
	TArray< struct FNPCIdleAnimation >                 IdleAnimation;
};

struct FNPCFunctionality
{
	int                                                Id;
	int                                                Type;
	TArray< int >                                      Param;
};

struct FNPC
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     GreetingText[ 3 ];
	struct FString                                     FuckOffText[ 3 ];
	void*                                              GreetingCue[ 3 ];
	int                                                IsLocked[ 3 ];
	int                                                VisualId;
	int                                                StartPathId;
	struct FString                                     UIAvatar;
	int                                                LobbyId;
	TArray< struct FNPCPath >                          Path;
	TArray< struct FNPCFunctionality >                 Functionality;
	unsigned long                                      EnableCollision : 1;
};

struct FBotType
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FCharacterVisualDescription
{
	int                                                PresetId;
	int                                                HeadId;
	int                                                SkinColorId;
	int                                                HairColorId;
	int                                                HairId;
	int                                                BeardId;
	int                                                MakeupId;
	int                                                HatId;
	int                                                UpperClothId;
	int                                                LowerClothId;
	int                                                ShoesId;
	int                                                GlassesId;
	int                                                ClanLogoId;
	int                                                ClanLogoColorId;
	int                                                HatColorId;
	int                                                UpperColorId;
	int                                                LowerColorId;
	int                                                ShoesColorId;
};

struct FTooltipDesc
{
	struct FString                                     Description;
	TArray< int >                                      Blocks;
};

struct FCraftAbility
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Resource2D;
	int                                                ReqProfessionLevel;
	int                                                ReqSpecializationId;
	int                                                TargetItemTemplate;
	float                                              ProductionTime;
	int                                                CostType;
	int                                                Cost;
	TArray< struct FIngredientRequirement >            CraftRequirements_Ingredients;
	TArray< int >                                      CraftRequirements_InstrumentsTemplates;
	TArray< struct FIngredientRequirement >            CraftQuality_Ingredients;
	TArray< struct FIngredientRequirement >            CraftProb_Ingredients;
	TArray< struct FIngredientRequirement >            CraftCatalyst_Ingredients;
};

struct FRepairAbility
{
	int                                                Category;
	int                                                MaxLevel;
};

struct FCraftSpecialization
{
	int                                                Id;
	int                                                ParentId;
	int                                                ProfessionId;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Resource2D;
	int                                                ProfessionLevelMax;
	int                                                CharacterLevelMax;
	int                                                CostType;
	int                                                Cost;
	TArray< struct FRepairAbility >                    RepairingItemCategories;
};

struct FAvatarAttributeDescription
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     UIPositiveDescription;
	struct FString                                     UINegativeDescription;
	unsigned long                                      IsAlwaysShow : 1;
	unsigned long                                      IsModificationAllowed : 1;
	int                                                ValueType;
	int                                                DisplayType;
	int                                                GroupType;
	float                                              MinValue;
	float                                              MaxValue;
	struct FString                                     Resource2D;
	TArray< float >                                    BaseValueByClass;
	int                                                UIPriority;
	unsigned long                                      bWorthOnReduction : 1;
};

struct FItemAttributeDescription
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     UIPositiveDescription;
	struct FString                                     UINegativeDescription;
	unsigned long                                      IsAlwaysShow : 1;
	int                                                TypeId;
	int                                                UIPriority;
	int                                                DisplayType;
	int                                                GroupType;
	float                                              MinValue;
	float                                              MaxValue;
	unsigned long                                      bWorthOnReduction : 1;
};

struct FAuctionCategoryIndex
{
	int                                                MainCategoryIndex;
	TArray< int >                                      SubCategoryIndexes;
};

struct FItemAttributePresentation
{
	unsigned long                                      IsProperty : 1;
	struct FString                                     Name;
	int                                                Id;
	int                                                TypeId;
	float                                              Value;
	float                                              MinValue;
	float                                              MaxValue;
	int                                                UIPriority;
	int                                                DisplayType;
};

struct FAttributeMatch
{
	int                                                AvatarAttributeId;
	int                                                ItemAttributeId;
};

struct FItemShopDesc
{
	int                                                ItemId;
	int                                                TemplateId;
	int                                                Count;
	int                                                TotalPrice;
	int                                                TotalNumber;
};

struct FAvatarAttributeCategory
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FItemTemplateCategory
{
	int                                                Id;
	int                                                ParentId;
	struct FString                                     Name;
	int                                                SortIndex;
	struct FString                                     Description;
	struct FString                                     Resource2D;
	unsigned long                                      IsUIRoot : 1;
	TArray< int >                                      TooltipBlocks;
};

struct FPaperDollSlot
{
	int                                                Id;
	TArray< int >                                      AllowedCategories;
};

struct FUIItemInfo
{
	int                                                Id;
	int                                                Type;
	int                                                Index;
	int                                                Stack;
	unsigned char                                      State;
	unsigned long                                      bDestroyed : 1;
};

struct FAuctionStatisticsData
{
	int                                                ExpiredTime;
	int                                                HistoricalMinPrice;
	int                                                HistoricalMinStackPrice;
	int                                                HistoricalMaxPrice;
	int                                                HistoricalMaxStackPrice;
	int                                                HistoricalItemCount;
	int                                                HistoricalStackCount;
	int                                                HistoricalWeightedAveragePrice;
	int                                                HistoricalWeightedAverageStackPrice;
	int                                                MinBuyoutPrice;
	int                                                MinBuyoutStackPrice;
	int                                                MaxBuyoutPrice;
	int                                                MaxBuyoutStackPrice;
	int                                                WeightedAverageBuyoutPrice;
	int                                                WeightedAverageBuyoutStackPrice;
	int                                                MinPrice;
	int                                                MinStackPrice;
	int                                                MaxPrice;
	int                                                MaxStackPrice;
	int                                                WeightedAveragePrice;
	int                                                WeightedAverageStackPrice;
	int                                                ItemCount;
	int                                                StackCount;
	int                                                WeightedAverageBid;
	int                                                WeightedAverageStackBid;
};

struct FDurabilityProp
{
	unsigned long                                      bValid : 1;
	int                                                MaxDurability;
	float                                              RepairTimeOut;
};

struct FExpirationProp
{
	unsigned long                                      bInstsEquip : 1;
	unsigned long                                      bInstsStore : 1;
	unsigned long                                      bQuestsEquip : 1;
	unsigned long                                      bQuestsStore : 1;
	unsigned long                                      bTime : 1;
	int                                                InstsEquip;
	int                                                InstsStore;
	int                                                QuestsEquip;
	int                                                QuestsStore;
	int                                                Time;
};

struct FItemSetModifiers
{
	int                                                ItemCount;
	TArray< struct FItemAvatarAttributeModifierValue > Modifiers;
};

struct FItemSet
{
	int                                                Id;
	struct FString                                     Name;
	TArray< int >                                      Items;
	TArray< struct FItemSetModifiers >                 Modifiers;
};

struct FAbilityRequirement
{
	int                                                Id;
	int                                                Level;
};

struct FAbilityTagValue
{
	int                                                TagIndex;
	struct FString                                     Value;
	int                                                Position;
};

struct FAbilityLevelInfo
{
	int                                                EffectId;
	TArray< struct FItemAvatarAttributeModifierValue > Modifiers;
	int                                                APCost;
	int                                                CashCost;
	TArray< struct FAbilityTagValue >                  Tags;
	struct FString                                     Description1;
	struct FString                                     Description2;
};

struct FAbility
{
	int                                                Id;
	int                                                Category;
	int                                                Type;
	int                                                MasteryClass;
	int                                                UICategory;
	struct FString                                     Name;
	struct FString                                     UIName;
	struct FString                                     Description;
	unsigned long                                      Premium : 1;
	int                                                ClassMask;
	int                                                ReqLevel;
	int                                                MaxLevel;
	unsigned long                                      IsActive : 1;
	struct FString                                     Resource2D;
	int                                                UIPosX;
	int                                                UIPosY;
	int                                                MaxInstanceCount;
	int                                                MaxTimeCount;
	TArray< struct FAbilityRequirement >               AbilityRequirements;
	TArray< int >                                      ItemCategoryRequirements;
	TArray< struct FAbilityLevelInfo >                 Levels;
};

struct FKnownAbility
{
	int                                                Id;
	int                                                Level;
	int                                                DeltaExpiration;
	int                                                UsesLeft;
};

struct FAbilityTag
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FKnownProfession
{
	int                                                Id;
	int                                                Level;
	TArray< int >                                      ListOfSpecializationIDs;
};

struct FCraftProfession
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Resource2D;
	int                                                CostType;
	int                                                Cost;
	TArray< int >                                      Specializations;
	struct FString                                     CraftAbilityTitle;
	int                                                MinCharacterLevel;
};

struct FCharacterTitle
{
	int                                                Id;
	int                                                CategoryIndex;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Resource2D;
};

struct FItemColor
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FLinearColor                                Color;
};

struct FClassAbilityRefs
{
	int                                                MasteryIndex;
	TArray< int >                                      Indices;
};

struct FDecodedWeaponAttributes
{
	int                                                DamageType;
	float                                              Damage;
	float                                              AimingSpread;
	float                                              Spread;
	float                                              CritDamage;
	float                                              CritChance;
};

struct FDecodedCharacterAttributes
{
	unsigned char                                      ClassId;
	int                                                Level;
	int                                                Experience;
	float                                              CH_HP_Max;
	float                                              CH_HP_RegenSpdNoAction;
	float                                              CH_HP_RegenSpdOneAction;
	float                                              CH_HP_RegenSpdTwoActionsOrSprint;
	float                                              CH_STM_Max;
	float                                              CH_STM_RegenSpdNoAction;
	float                                              CH_STM_RegenSpdOneActions;
	float                                              CH_STM_RegenSpdTwoActions;
	int                                                StaminaMinLevelToSprint;
	int                                                StaminaJumpPrice;
	int                                                RunSpeed;
	int                                                SpintSpeed;
	float                                              CH_DamageAbsorb;
	float                                              CH_ReactiveDamageRes;
	float                                              CH_PearcingDamageRes;
	float                                              CH_BurstingDamageRes;
	float                                              CH_ExplosiveDamageRes;
	int                                                MoneyCash;
	int                                                MoneyGold;
	int                                                AbilityPoints;
	int                                                CH_Pistols_Skill;
	int                                                CH_SMGs_Skill;
	int                                                CH_AssaultRifles_Skill;
	int                                                CH_SniperRifles_Skill;
	int                                                CH_Shotguns_Skill;
	int                                                CH_RocketLauncher_Skill;
	int                                                CH_GrenadeLauncher_Skill;
	int                                                CH_Machineghun_Skill;
	struct FDecodedWeaponAttributes                    Weapon1;
	struct FDecodedWeaponAttributes                    Weapon2;
	struct FDecodedWeaponAttributes                    Pistol1;
};

struct FSlotBlock
{
	unsigned char                                      Type;
	struct FScriptDelegate                             pFunction;
};

struct FStringConstant
{
	int                                                Id;
	struct FString                                     ConstantName;
	struct FString                                     ConstantValue;
};

struct FRowPresentation
{
	struct FString                                     StrValue1;
	struct FString                                     StrValue2;
	int                                                StyleID1;
	int                                                StyleID2;
};

struct FSoloPickupType
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FCharacterClass
{
	struct FString                                     Name;
	TArray< int >                                      DefaultItems;
	struct FString                                     Title;
	struct FString                                     Description;
};

struct FClanHallProductionPlanItem
{
	int                                                TemplateId;
	int                                                Probability;
	int                                                Quantity;
};

struct FClanHallProductionPlan
{
	int                                                Id;
	struct FString                                     Name;
	int                                                Time;
	int                                                Cost;
	int                                                CostType;
	TArray< struct FClanHallProductionPlanItem >       Items;
};

struct FClanHallCraftFunctionality
{
	int                                                Id;
	int                                                EndProductionPlanIndex;
	int                                                MinClanLevel;
	int                                                Cost;
	int                                                CostType;
};

struct FClanHallSpecializationInfo
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FClanHallProductionPlan >           ProductionPlans;
	TArray< struct FClanHallCraftFunctionality >       CraftFunctionalities;
};

struct FSkeletalItemVisual
{
	struct FString                                     Name;
	struct FString                                     MeshUrl;
	class USkeletalMesh*                               Mesh;
	struct FLinearColor                                ColorMask;
	struct FLinearColor                                AttachmentMask;
	float                                              SimpleMeshMaskShift;
	int                                                SimpleMeshTextureShift;
};

struct FItemVisual
{
	struct FString                                     Name;
	void*                                              Mesh;
	struct FString                                     MeshUrl;
	struct FLinearColor                                ColorMask;
	float                                              SimpleMeshMaskShift;
	int                                                SimpleMeshTextureShift;
};

struct FModifierKitVisual
{
	struct FString                                     Name;
	int                                                MIIndex;
	int                                                ColorPresetIndex;
	struct FLinearColor                                Colors[ 4 ];
};

struct FColorPreset
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FLinearColor                                Colors[ 4 ];
	int                                                Cost;
};

struct FLobbyExit
{
	int                                                SourceLobbyId;
	int                                                ExitId;
	int                                                DestinationLobbyId;
};

struct FLobbyDistrict
{
	int                                                Id;
	struct FString                                     Name;
};

struct FLobby
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Title;
	struct FString                                     MapName;
	struct FString                                     LoadingScreen;
	TArray< struct FLobbyExit >                        Exits;
	TArray< struct FLobbyDistrict >                    Districts;
};

struct FClanHallSlotTemplate
{
	int                                                Id;
	int                                                ItemCategoryId;
	int                                                MinClanLevel;
	int                                                Cost;
	int                                                CostType;
};

struct FClanHallFunctionality
{
	int                                                FunctionalityType;
	int                                                Cost;
	int                                                CostType;
	int                                                RequiredClanLevel;
};

struct FClanHallType
{
	int                                                Id;
	struct FString                                     MapName;
	struct FString                                     LoadingScreen;
	struct FString                                     TypeDescription;
	int                                                MinimalClanLevel;
	struct FString                                     TypeName;
	int                                                MaxCraftFunctionalityLevel;
	TArray< struct FClanHallSlotTemplate >             BuffSlots;
	TArray< struct FClanHallSlotTemplate >             VisualizationSlots;
	TArray< struct FClanHallFunctionality >            Functionality;
	int                                                MaxPublicVisitors;
};

struct FClubRentOption
{
	int                                                Id;
	struct FString                                     Name;
	int                                                CostCash;
	int                                                CostGold;
	int                                                Time;
};

struct FTrainerSalesInfo
{
	int                                                Id;
	int                                                SellingFactor;
};

struct FTrainer
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FTrainerSalesInfo >                 Abilities;
	TArray< struct FTrainerSalesInfo >                 CraftAbilities;
	TArray< struct FTrainerSalesInfo >                 HiddenCraftAbilities;
	TArray< struct FTrainerSalesInfo >                 Professions;
	TArray< struct FTrainerSalesInfo >                 Specializations;
	int                                                Type;
};

struct FRareShop
{
	int                                                Id;
	struct FString                                     Name;
};

struct FAppearanceElements
{
	TArray< int >                                      Indexes;
};

struct FPremiumShop
{
	int                                                Id;
	struct FString                                     Name;
	TArray< int >                                      Goods;
	struct FAppearanceElements                         AppearanceElements[ 14 ];
	TArray< int >                                      WMKs;
};

struct FCharacterAppearanceElement
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     FemaleName;
	struct FString                                     FemaleDescription;
	int                                                Cost;
	int                                                CostType;
	struct FString                                     MaleIcon;
	struct FString                                     FemaleIcon;
};

struct FRepairerTemplateItem
{
	int                                                CategoryId;
	int                                                ItemLevel;
	int                                                CostFactor;
};

struct FRepairerTemplate
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FRepairerTemplateItem >             Items;
};

struct FCCConditionType
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     LongDescription;
	unsigned long                                      IsClientVisible : 1;
};

struct FCCActionType
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     LongDescription;
	unsigned long                                      IsVisibleUI : 1;
};

struct FCondition
{
	int                                                Id;
	int                                                Type;
	int                                                Param1;
	int                                                Param2;
	int                                                Param3;
	TArray< int >                                      Params;
	int                                                NumberValue;
	int                                                EnterType;
	int                                                CombatType;
	struct FString                                     LongDescription;
	unsigned long                                      IsClientVisible : 1;
	int                                                QuestId;
};

struct FAction
{
	int                                                Id;
	int                                                Type;
	int                                                Param1;
	int                                                Param2;
	int                                                Param3;
	unsigned long                                      IsVisibleUI : 1;
	int                                                SetId;
};

struct FClanEventType
{
	int                                                Id;
	struct FString                                     Title;
	struct FString                                     IconResource;
};

struct FClanEventDurationPreset
{
	int                                                Id;
	struct FString                                     Title;
	int                                                TimeValue;
};

struct FQuestGroup
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Title;
	int                                                ParentId;
	int                                                SortIndex;
};

struct FQuestStep
{
	int                                                OwnerQuestId;
	int                                                Id;
	TArray< int >                                      TargetNPCs;
	int                                                StepIndex;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Description_ConditionsFailture;
	struct FString                                     Description_ConditionsSuccess;
	struct FString                                     Description_StatusQuery;
	struct FString                                     Description_RequiredFinalConditionsOverride;
	TArray< int >                                      RequiredFinalConditions;
	TArray< int >                                      FinalActions;
};

struct FQuest
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     Description_ConditionsFailture;
	int                                                Level;
	unsigned long                                      IsRepeatable : 1;
	int                                                RepeatTimeout;
	unsigned long                                      IsTutorial : 1;
	unsigned long                                      IsChallenge : 1;
	TArray< struct FQuestStep >                        Steps;
	TArray< int >                                      RequiredInitialConditions;
	TArray< int >                                      InitialActions;
	TArray< int >                                      IconIds;
	int                                                JobLevel;
	int                                                GroupId;
	int                                                AccountTypeRestrictions;
};

struct FQuestVendorTemplate
{
	int                                                Id;
	struct FString                                     Name;
	TArray< int >                                      Quests;
};

struct FCounterDescription
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	int                                                CategoryId;
	unsigned long                                      IsBoolean : 1;
	int                                                DisplayType;
};

struct FAchievementGroup
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
};

struct FAchievementCounter
{
	int                                                Id;
	int                                                NeedValue;
	unsigned long                                      IsNegation : 1;
};

struct FAchievement
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	int                                                GroupIndex;
	struct FString                                     Resource2D;
	int                                                BaseAchievementId;
	int                                                Experience;
	int                                                RankPoints;
	int                                                Money;
	TArray< int >                                      Items;
	TArray< struct FAchievementCounter >               Counters;
	unsigned long                                      bForOriginalGangster : 1;
};

struct FTutorialStep
{
	int                                                Id;
	int                                                StepType;
	int                                                Param;
	struct FString                                     Caption;
	struct FString                                     Description;
};

struct FCounterCategory
{
	int                                                Id;
	struct FString                                     Name;
	TArray< int >                                      CounterIndexes;
};

struct FPvPTitle
{
	int                                                Id;
	struct FString                                     Name;
	int                                                IconID;
	int                                                Rank;
	int                                                MinValue;
	int                                                MaxValue;
};

struct FClanLevel
{
	int                                                Id;
	int                                                Cost;
	int                                                CostType;
	int                                                NeedMembers;
	int                                                NeedCharacterLevel;
	int                                                NeedClanRate;
	int                                                MaxMembers;
	int                                                MaxRanks;
};

struct FBankTab
{
	int                                                Cost;
	int                                                CostType;
};

struct FBackpackTab
{
	int                                                RequiredLevel;
	int                                                Cost;
	int                                                CostType;
};

struct FNameColor
{
	int                                                Id;
	struct FString                                     Name;
	struct FLinearColor                                Color;
};

struct FCharacterTitleCategory
{
	int                                                Id;
	struct FString                                     Name;
};

struct FMunicipalVendorData
{
	int                                                Id;
	struct FString                                     Title;
	struct FString                                     Body;
	int                                                ParentId;
};

struct FClubPartyType
{
	int                                                Id;
	int                                                CostCash;
	int                                                CostGold;
	int                                                Time;
};

struct FItemColorRef
{
	int                                                Id;
	int                                                ItemColorIndex;
	int                                                CostType;
	int                                                Cost;
};

struct FItemColorRefs
{
	TArray< struct FItemColorRef >                     Refs;
};

struct FClanHallNPCVisualisation
{
	int                                                SecretaryVisId;
	int                                                PostBoxVisId;
	int                                                VendorVisId;
	int                                                PorterVisId;
	int                                                BankVisId;
	int                                                EventBoardVisId;
	int                                                ClubPorterVisId;
};

struct FTournamentStatisticsRecord
{
	unsigned char                                      Position;
	int                                                CharacterId;
	struct FString                                     CharacterName;
	int                                                GameWin;
	int                                                GameLose;
	int                                                TournamentWin;
	int                                                Rating;
};

struct FTeammate
{
	int                                                Id;
	struct FString                                     Name;
	int                                                Ranking;
};

struct FTeam
{
	int                                                Id;
	struct FString                                     Name;
	TArray< struct FTeammate >                         Teammates;
};

struct FGame
{
	unsigned char                                      StageNumber;
	unsigned char                                      Number;
	int                                                Team1Id;
	int                                                Team2Id;
	struct FServerDateTime                             StartingTime;
	unsigned char                                      Result;
};

struct FTournamentDivisionInfo
{
	int                                                Id;
	int                                                Revision;
	int                                                ServerRevision;
	unsigned char                                      TournamentState;
	unsigned long                                      bIsGamesSorted : 1;
	TArray< struct FTournamentStatisticsRecord >       Statistics;
	TArray< struct FTeam >                             Teams;
	TArray< struct FGame >                             Games;
	TArray< int >                                      Stages;
	unsigned long                                      HasWinner : 1;
	unsigned long                                      bIsOneGameTournament : 1;
	int                                                WinnerTeamIndex;
	int                                                MaxStageNumber;
	int                                                GameWin;
	int                                                GameLose;
	int                                                TournamentWin;
	int                                                Rating;
	TArray< int >                                      BannedPlayers;
};

struct FTournamentInfo
{
	unsigned char                                      TournamentType;
	TArray< struct FTournamentDivisionInfo >           Division;
	struct FServerDateTime                             StartRegistrationTime;
	struct FServerDateTime                             StartTime;
	int                                                MyTeamId;
	unsigned char                                      MyDivision;
	unsigned long                                      bAllowRegistration : 1;
};

struct FClanEventMessage
{
	int                                                Id;
	int                                                Revision;
	int                                                ServerRevision;
	int                                                CreatorId;
	struct FServerDateTime                             Time;
	int                                                TypeId;
	struct FString                                     Subject;
	struct FString                                     Text;
	int                                                Duration;
	TArray< unsigned char >                            Ranks;
	int                                                MinCharacterLevel;
	int                                                MaxCharacterLevel;
	TArray< int >                                      Subscribed;
	unsigned long                                      NeedAccept : 1;
	unsigned long                                      IsPrivate : 1;
	unsigned long                                      Remind : 1;
};

struct FCraftingJobInformation
{
	unsigned char                                      Status;
	int                                                UsedCraftAbilityID;
	float                                              TimePassed;
	float                                              CraftingTime;
	unsigned long                                      IsDrugsCrafting : 1;
	int                                                QualityIngredientsCount;
	int                                                ProbabilityIngredientsCount;
	unsigned long                                      DoUseCatalyst : 1;
};

struct FSubscribedInstanceSessionDescription
{
	int                                                SessionId;
	int                                                InstanceId;
	unsigned char                                      SubscriptionSource;
	struct FString                                     InstanceCommand;
	unsigned long                                      IsQuickPlay : 1;
};

struct FSubscribedInstanceSessionRequest
{
	int                                                SessionId;
	int                                                InstanceId;
};

struct FGroupInvitationSent
{
	int                                                InvitationId;
	int                                                CharacterId;
};

struct FRelevantCharacterDescription
{
	int                                                Id;
	struct FCharacterPosition                          Position;
};

struct FCreateCharacterResponse_Character
{
	int                                                Id;
	struct FCharacterPosition                          Position;
	int                                                LobbyId;
	struct FServerDateTime                             CreationTime;
};

struct FNotifyPlayerCharacters_Character
{
	struct FString                                     Name;
	struct FCharacterPosition                          Position;
	int                                                Id;
	unsigned char                                      LobbyId;
	int                                                ClanId;
	unsigned char                                      Level;
	unsigned char                                      Class;
	struct FPaperdoll                                  Paperdoll;
	struct FCharacterAppearance                        Appearance;
	struct FServerDateTime                             CreationTime;
	unsigned long                                      IsActive : 1;
};

struct FInitLootList_RollItemDesc
{
	int                                                ItemTemplateId;
	unsigned char                                      SlotId;
};

struct FRealmInfo
{
	struct FString                                     Name;
	struct FString                                     CountryCode;
	unsigned char                                      PotentialSelectResponse;
	int                                                Population;
	int                                                MaxPopulation;
	int                                                NumCharacters;
};

struct FNotifyKnownAbilities_NonPremiumAbility
{
	int                                                Id;
	unsigned char                                      Level;
};

struct FRareShopItemDesc
{
	int                                                TemplateId;
	int                                                Count;
};

struct FNotifyKnownAbilities_PremiumAbilityWithLimitedTime
{
	int                                                Id;
	unsigned char                                      ExpirationMonth;
	unsigned char                                      ExpirationDay;
	unsigned char                                      ExpirationHour;
	unsigned char                                      ExpirationMinute;
};

struct FNotifyKnownAbilities_PremiumAbilityWithLimitedUses
{
	int                                                Id;
	unsigned char                                      UsesLeft;
};

struct FResponseCharacterStats_CharacterStatsDesc
{
	struct FString                                     CharacterName;
	int                                                ClanId;
	unsigned char                                      Level;
	unsigned char                                      ClassId;
	struct FCharacterAppearance                        Appearance;
	int                                                Experience;
};

struct FUDSInstanceStatistics_PlayerStat
{
	int                                                CharacterId;
	int                                                TotalConnectTime;
	int                                                TotalScore;
	int                                                ObtainedDamage;
	int                                                AFKTime;
	TArray< struct FWeaponStat >                       WeaponStats;
	TArray< struct FInventoryStat >                    InventoryStats;
	TArray< struct FBonusStat >                        BonusStats;
	TArray< struct FPickUpStat >                       PickUpStats;
	TArray< struct FFeatStat >                         FeatStats;
};

struct FUDSInstanceStatistics_GameStat
{
	int                                                TimeStamp;
	unsigned char                                      GameStatType;
	int                                                Team;
	int                                                InstigatorId;
	int                                                AdditionalId;
	int                                                InstigatorData;
	int                                                AdditionalData;
};

struct FMarkProtectionData
{
	unsigned long                                      ProtectionMark : 1;
	TArray< int >                                      MailIds;
};

struct FDetachItemData
{
	int                                                MailId;
	int                                                ItemId;
};

struct FChatMessageInfo
{
	int                                                SenderCharacterId;
	struct FString                                     SenderName;
	int                                                ChannelId;
	struct FString                                     MessageText;
};

struct FChatChannelInfo
{
	int                                                Id;
	struct FString                                     Name;
	TArray< int >                                      CharacterList;
};

struct FSendPrivateMessageInfo
{
	int                                                TargetCharacterId;
	struct FString                                     TargetCharacterName;
	struct FString                                     MessageText;
};

struct FPassedQuest
{
	int                                                QuestId;
	struct FServerDateTime                             Time;
};

struct FMyBidInfo
{
	int                                                Revision;
	int                                                ServerRevision;
	struct FItemDescription                            Item;
	int                                                SellerId;
	struct FString                                     SellerName;
	int                                                BidderId;
	int                                                BuyoutPrice;
	int                                                Bid;
	int                                                BidStep;
	int                                                LeftTime;
};

struct FUndoRemoveInfo
{
	int                                                Id;
	int                                                ContainerType;
	int                                                Slot;
};

struct FAchievementNotificationData
{
	struct FAchievement                                Achievmnt;
	unsigned long                                      IsClanAchievement : 1;
};

struct FItemData
{
	int                                                Id;
	int                                                TemplateId;
	int                                                ServerContainerType;
	int                                                ContainerType;
	int                                                ShadowContainerType;
	unsigned char                                      ServerSlot;
	unsigned char                                      Slot;
	unsigned char                                      ShadowSlot;
	int                                                StackSize;
	TArray< struct FItemAttribute >                    Attributes;
	TArray< struct FItemAvatarModifier >               Modifiers;
	TArray< int >                                      Attachments;
};

struct FAvailableSortSet
{
	unsigned long                                      bTab : 1;
	unsigned long                                      bContainer : 1;
	unsigned long                                      bUndo : 1;
};

struct FTutorialReadState
{
	int                                                TutorialRead1;
	int                                                TutorialRead2;
	int                                                TutorialRead3;
	int                                                TutorialRead4;
	int                                                TutorialRead5;
	int                                                TutorialRead6;
	int                                                TutorialRead7;
	int                                                TutorialRead8;
};

struct FRealmCharacterInformation
{
	int                                                Id;
	struct FString                                     Name;
	int                                                Revision;
	int                                                PaperdollRevision;
	int                                                ServerRevision;
	int                                                PaperdollServerRevision;
	int                                                ClanId;
	struct FCharacterVisualDescription                 Appearance;
	int                                                NameColorId;
	unsigned char                                      Class;
	int                                                Level;
	int                                                PvPTitleId;
	int                                                TitleId;
	unsigned char                                      Status;
	int                                                LocationId;
	int                                                DistrictId;
	struct FCharacterPosition                          Position;
	int                                                AchievementsRevision;
	int                                                AchievementsServerRevision;
	TArray< struct FAchievementDescription >           Achievements;
	struct FServerDateTime                             GoesOfflineTime;
};

struct FGroupInformation
{
	int                                                LeaderId;
	TArray< int >                                      GroupMembers;
};

struct FQuestReward
{
	int                                                Exp;
	int                                                Cash;
	TArray< int >                                      Items;
	TArray< int >                                      Stack;
	TArray< int >                                      SetId;
	int                                                GarantedItemsCount;
	int                                                ChoosebleItemsCount;
};

struct FEventTemplateChange
{
	int                                                EventTemplateIndex;
	int                                                ValueIndex;
};

struct FRealmNotificationDelegate
{
	struct FScriptDelegate                             EventProcessor;
};

struct FRealmNotificationDelegatesGroup
{
	unsigned char                                      EventId;
	void*                                              EventParameters;
	TArray< struct FRealmNotificationDelegate >        Delegates;
};

struct FSkillItem
{
	int                                                Id;
	int                                                Value;
};

struct FMatchmakingOption
{
	TArray< int >                                      pInstances;
	unsigned long                                      bEnable : 1;
	unsigned long                                      bOnlyStartUp : 1;
};

struct FRepairmentJobInformation
{
	int                                                ItemId;
	unsigned char                                      Status;
	float                                              TimePassed;
	float                                              RepairTimeFull;
};

struct FScoreBoardInfo
{
	int                                                MinLevel;
	int                                                MaxLevel;
	TArray< struct FScoreBoardPlace >                  Place;
};

struct FClanCreationData
{
	int                                                Revision;
	int                                                ServerRevision;
	int                                                PetitionReceiversRevision;
	int                                                PetitionReceiversServerRevision;
	unsigned char                                      Status;
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     ClanLeaderName;
	TArray< struct FString >                           Signers;
	int                                                ClanLogoId;
	int                                                ClanLogoColorId;
	int                                                RequiredSignsCount;
	float                                              SecsLeftToSendPetitions;
	float                                              SecsLeftToCooldownEnd;
	struct FServerDateTime                             EndOfPetitionsSendTime;
	struct FServerDateTime                             EndOfCreationCooldown;
	TArray< int >                                      PetitionReceivers;
};

struct FTournamentGameResult
{
	struct FServerDateTime                             ReceivedTime;
	unsigned char                                      TournamentType;
	unsigned char                                      TournamentOrderType;
	int                                                StageId;
	int                                                GameId;
	unsigned char                                      Result;
	int                                                Score;
};

struct FBankVaultCellRenamingRequest
{
	int                                                IndexOfCell;
	struct FString                                     OldCellName;
	struct FString                                     NewCellName;
};

struct FClanWarCombatResult
{
	unsigned char                                      PairState;
	int                                                Clan1Points;
	int                                                Clan2Points;
};

struct FClanRankInformation
{
	int                                                Id;
	struct FString                                     Title;
	struct FClanRankPrivilegesSet                      Privileges;
	TArray< struct FClanBankRankPrivileges >           ClanBankTabPrivileges;
	int                                                MoneyWithdrawLimit;
	int                                                Level;
};

struct FClanMemberInformation
{
	int                                                Id;
	struct FString                                     Description;
	struct FString                                     SecureNote;
	int                                                Rank;
	int                                                ClanWarsSeasonIdWhenJoinedClan;
	unsigned long                                      WasKicked : 1;
	int                                                AccountType;
	struct FServerDateTime                             AccountTypeExpiration;
};

struct FClanHallInformation
{
	int                                                Revision;
	int                                                ServerRevision;
	int                                                ClanHallNPCRevision;
	int                                                ClanHallVisRevision;
	int                                                ClanHallNPCServerRevision;
	int                                                ClanHallVisServerRevision;
	int                                                TypeId;
	unsigned char                                      Specialization;
	int                                                ProductionLevel;
	TArray< unsigned char >                            BuffSlots;
	TArray< unsigned char >                            VisualizationSlots;
	int                                                LobbyId;
	int                                                SecretaryId;
	int                                                VendorId;
	int                                                MailBoxId;
	int                                                PorterId;
	int                                                BankId;
	int                                                EventBoardId;
	int                                                ClubPorterId;
	TArray< int >                                      Functionalities;
};

struct FClubInformation
{
	int                                                OutsideDataRevision;
	int                                                OutsideDataServerRevision;
	int                                                InsideDataRevision;
	int                                                InsideDataServerRevision;
	int                                                TemplateId;
	struct FServerDateTime                             ExpirationTime;
	TArray< struct FClubZone >                         Zones;
	TArray< struct FClubItem >                         Items;
	TArray< int >                                      Functionalities;
};

struct FClanShortInfo
{
	struct FString                                     Name;
	struct FString                                     Description;
	struct FString                                     ClanHallTypeName;
	struct FString                                     SpecializationName;
	int                                                LogoId;
	struct FLinearColor                                LogoColor;
	struct FLinearColor                                NameColor;
	int                                                FunctionalitySet;
	int                                                ClubFunctionalitySet;
	struct FServerDateTime                             ClubExpirationTime;
};

struct FClanInformation
{
	int                                                Id;
	int                                                OutsideDataRevision;
	int                                                OutsideDataServerRevision;
	int                                                InsideDataRevision;
	int                                                InsideDataServerRevision;
	int                                                ClanmateDataRevision;
	int                                                ClanmateDataServerRevision;
	int                                                SecureNoteRevision;
	int                                                SecureNoteServerRevision;
	int                                                RanksRevision;
	int                                                RanksServerRevision;
	int                                                RanksTabsRevision;
	int                                                RanksTabsServerRevision;
	int                                                BuffSlotsRevision;
	int                                                BuffSlotsServerRevision;
	int                                                ClanBankTabsRevision;
	int                                                ClanBankTabsServerRevision;
	int                                                StatisticsRevision;
	int                                                StatisticsServerRevision;
	int                                                ClanBankItemsRevision;
	int                                                ClanBankItemsServerRevision;
	int                                                ClanBankItemsAttributesRevision;
	int                                                ClanBankItemsAttributesServerRevision;
	int                                                ClanBankItemsAttachmentsRevision;
	int                                                ClanBankItemsAttachmentsServerRevision;
	int                                                AchievementsRevision;
	int                                                AchievementsServerRevision;
	struct FServerDateTime                             CreationDate;
	TArray< int >                                      BuffTemplates;
	struct FClanHallInformation                        ClanHallInfo;
	struct FClubInformation                            ClubInfo;
	struct FString                                     Name;
	struct FString                                     Description;
	int                                                ClanMasterId;
	int                                                Level;
	struct FString                                     ClanMessage;
	TArray< struct FClanMemberInformation >            ClanMembers;
	TArray< struct FClanRankInformation >              Ranks;
	TArray< struct FString >                           ClanBankTabs;
	int                                                ClanMasterRank;
	int                                                NoviceRank;
	int                                                NameColorId;
	int                                                LogoId;
	int                                                LogoColorId;
	struct FServerDateTime                             AvailableChangeLogoTime;
	int                                                Cash;
	int                                                SeasonId;
	int                                                BaseRate;
	int                                                CurrentRate;
	int                                                MaxRate;
	int                                                MaxCharactersInClan;
	int                                                PutMoneyInClanBank;
	int                                                TakeMoneyInClanBank;
	int                                                WinMoneyInClanWars;
	int                                                LoseMoneyInClanWars;
	int                                                WinClanWarsForMoney;
	int                                                LoseClanWarsForMoney;
	int                                                DrawClanWarsForMoney;
	int                                                WinSeasonClanWars;
	int                                                LoseSeasonClanWars;
	int                                                DrawSeasonClanWars;
	int                                                LastLevelUpMinutes;
	TArray< struct FClanAchievementDescription >       Achievements;
};

struct FDynamicNPC
{
	int                                                Id;
	int                                                Revision;
	int                                                ServerRevision;
	struct FString                                     Name;
	int                                                VisualId;
	TArray< struct FNpcFunctionalityDescription >      FunctionalityList;
	TArray< struct FNPCFunctionality >                 Functionality;
};

struct FSoldToShopItem
{
	struct FItemDescription                            Item;
	int                                                ItemStack;
	int                                                SoldAtPrice;
};

struct FInstanceSessionsInfo
{
	int                                                Revision;
	int                                                ServerRevision;
	TArray< struct FInstanceSessionDescription >       Sessions;
};

struct FDivisionStatistics
{
	unsigned char                                      TournamentOrderType;
	int                                                OwnGameWin;
	int                                                OwnGameLose;
	int                                                OwnTournamentWin;
	int                                                OwnRating;
	TArray< struct FTournamentStatisticsRecord >       Statistics;
};

struct FRareShopInformation
{
	int                                                Id;
	int                                                Revision;
	int                                                ServerRevision;
	TArray< struct FRareShopItemDesc >                 Items;
};

struct FMyLotInfo
{
	float                                              StartPrice;
	int                                                BidStep;
	float                                              BuyoutPrice;
};

struct FContainerSlotPair
{
	int                                                TypeId;
	int                                                SlotId;
};

struct FInstrumentProp
{
	unsigned long                                      bValid : 1;
	int                                                Category;
	int                                                Quality;
	int                                                Bonus;
};

struct FWeaponProp
{
	unsigned long                                      bValid : 1;
	int                                                WpnDamageType;
	float                                              WpnDamage;
	int                                                WpnBulletsPerShot;
	int                                                WpnFireTime;
	int                                                WpnClipSize;
	float                                              WpnRange;
	float                                              WpnSpread;
	float                                              WpnAimingSpread;
	float                                              WpnCritChance;
};

struct FClothesProp
{
	unsigned long                                      bValid : 1;
	int                                                ClthLightDamageRes;
	int                                                ClthNormalDamageRes;
	int                                                ClthHeavyDamageRes;
	int                                                ClthSplashDamageRes;
	int                                                ClthDamageAbsorb;
};

struct FCCContextMenuSubItem
{
	struct FString                                     Caption;
	unsigned long                                      IsEnabled : 1;
	unsigned long                                      IsSeparator : 1;
	struct FScriptDelegate                             OnClicked;
	int                                                StyleIndex;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
};

struct FCCContextMenuItem
{
	struct FString                                     Caption;
	unsigned long                                      IsEnabled : 1;
	unsigned long                                      IsSeparator : 1;
	struct FScriptDelegate                             OnClicked;
	int                                                StyleIndex;
	TArray< struct FCCContextMenuSubItem >             SubItems;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
};

struct FCCProxyScreenResolution
{
	int                                                X;
	int                                                Y;
	unsigned long                                      FullScreen : 1;
	unsigned long                                      Window : 1;
	unsigned long                                      Wide : 1;
};

struct FActionBind
{
	struct FString                                     Command;
	struct FString                                     Description;
	struct FString                                     Group;
	int                                                HachId;
	int                                                GroupId;
};

struct FActionGroup
{
	struct FString                                     GroupName;
	struct FString                                     Description;
	struct FString                                     Type;
};

struct FChangeListAction
{
	struct FName                                       KeyName;
	struct FString                                     Command;
	unsigned long                                      Apply : 1;
	struct FString                                     GroupName;
};

struct FStatCategory
{
	struct FString                                     Name;
	TArray< int >                                      Attributes;
};

struct FAppearanceViewD
{
	float                                              UniformScale;
	struct FVector                                     Translation;
};

struct FWpnChar
{
	struct FString                                     symbol;
	int                                                Value;
};

struct FTemplateAccordeonDesc
{
	struct FString                                     ResourceName;
	unsigned long                                      ClampedTexture : 1;
	int                                                TemplateId;
	int                                                StackNum;
	float                                              ProgressMin;
	float                                              ProgressMax;
	float                                              ProgressVal;
	TArray< int >                                      ColumnStore;
	struct FString                                     Text;
	unsigned long                                      Format : 1;
	int                                                StyleID;
	unsigned long                                      ClampWidth : 1;
	unsigned long                                      PushBack : 1;
	unsigned long                                      bUseTCoords : 1;
	unsigned long                                      bDoNotScroll : 1;
	struct FTextureCoordinates                         TCoords;
};

struct FASubCategorie
{
	TArray< struct FTemplateAccordeonDesc >            SubCategorieTemplateItems;
	struct FString                                     Name;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
	unsigned long                                      bEnabled : 1;
	unsigned long                                      bTrialLocked : 1;
};

struct FACategorie
{
	TArray< struct FTemplateAccordeonDesc >            CategorieTemplateNodes;
	struct FString                                     Name;
	TArray< struct FASubCategorie >                    Categories;
	unsigned long                                      clamped : 1;
	unsigned long                                      bEnabled : 1;
	int                                                UserData0;
	int                                                UserData1;
	int                                                UserData2;
	int                                                UserData3;
	unsigned long                                      bTrialLocked : 1;
};

struct FJobInfo
{
	int                                                quest_id;
	int                                                quest_index;
	int                                                parent_index;
	int                                                parent_job_index;
	int                                                child_job_index;
	int                                                tab_id;
	int                                                group_id;
	int                                                job_level;
	unsigned long                                      bPassed : 1;
	unsigned long                                      bParentPassed : 1;
	int                                                icon1;
	int                                                icon2;
	int                                                icon3;
	int                                                MaxLevel;
	int                                                MinLevel;
	unsigned long                                      bSentFromServer : 1;
	unsigned long                                      bIsActive : 1;
	unsigned long                                      bCouldBeTaken : 1;
	unsigned long                                      bCouldBeDelivered : 1;
	unsigned long                                      bLocked : 1;
};

struct FJobIconDescriptor
{
	int                                                IconID;
	unsigned char                                      Position;
	unsigned long                                      bMirror : 1;
};

struct FJobNode
{
	TArray< struct FJobIconDescriptor >                Icons;
	int                                                JobLevel;
	float                                              Progress;
	unsigned char                                      State;
	unsigned long                                      bJobLocked : 1;
	int                                                JobId;
	struct FPointer                                    JobRender;
};

struct FJobGroup
{
	int                                                GroupId;
	struct FString                                     GroupTitle;
	TArray< struct FJobNode >                          Jobs;
};

struct FFilterCategory
{
	struct FString                                     Name;
	struct FString                                     Resource;
	unsigned long                                      IsEnable : 1;
	TArray< unsigned char >                            FilteredTypes;
};

struct FMaterialInstanceConstantProxyA
{
	void*                                              MaterialInst;
	void*                                              MaterialInstHighlight;
	void*                                              MaterialInstTracking;
};

struct FItemTypePresentationA
{
	int                                                InitSizeAllocation;
	int                                                ActiveIndex;
	int                                                SourceSize;
	float                                              WorldMarkingDisplace;
	float                                              Lifetime;
	int                                                RenderPriority;
	class UMaterialInterface*                          StateMaterial;
	class UMaterialInterface*                          MaterialHighlit;
	class UMaterialInterface*                          MaterialTracking;
	TArray< struct FMaterialInstanceConstantProxyA >   StateMaterialPool;
};

struct FAutoJoinMatchesData
{
	struct FInstance                                   Inst;
	struct FInstanceSessionDescription                 ISD;
	unsigned long                                      IsInstanceReady : 1;
};

struct FIconData
{
	void*                                              Button;
	void*                                              Image;
	int                                                GameType;
	struct FString                                     ToolTipValue;
};

struct FGameTypeData
{
	int                                                Type;
	int                                                InstanceId;
	struct FString                                     Name;
	int                                                Enabled;
	unsigned char                                      ListBoxGameTypeState;
};

struct FInstanceData
{
	struct FString                                     MapName;
	TArray< struct FGameTypeData >                     Types;
};

struct FContainerRecord
{
	int                                                NumContainersInLine;
	void*                                              Container;
	void*                                              ParentMenu;
};

struct FServiceIconDescr
{
	class UTexture*                                    Icon;
	unsigned char                                      service;
};

struct FItemRendererPointer
{
	struct FPointer                                    Ptr;
};

struct FSavedAccountInfo
{
	struct FString                                     AccountName;
	int                                                LastUsedCharacterId;
};

struct FLineNode
{
	float                                              X;
	int                                                FontID;
	struct FLinearColor                                NodeColor;
	int                                                SmileIndex;
	struct FString                                     Text;
	struct FString                                     InteractText;
};

struct FStringLine
{
	float                                              FadeStartTime;
	float                                              Height;
	int                                                SpaceCount;
	TArray< struct FLineNode >                         Nodes;
};

struct FQueueMessageDesc
{
	int                                                Id;
	struct FString                                     Message;
	struct FString                                     Caption;
};

struct FActiveTargetInfo
{
	class AActor*                                      Actor;
	class ACCPawn*                                     Pawn;
	float                                              Distance;
};

struct FHudMessageQueue
{
	TArray< struct FHudLocalizedMessage >              msg;
};

struct FProcessReceptionInfo
{
	unsigned long                                      OutAttemptToReceiveAgain : 1;
	unsigned long                                      OutMoveToReceivedAfterSuccessfulReceiption : 1;
};

struct FWeaponConstraintSetup
{
	void*                                              ConstraintSetup;
};

struct FWeaponConstraintsSetup
{
	TArray< struct FWeaponConstraintSetup >            ConstraintsSetup;
};

struct FPerWeaponMeleeInfo
{
	struct FString                                     WeaponTypeName;
	void*                                              MeleeParameters;
};

struct FPerCharacterMeleeInfo
{
	struct FString                                     CharacterPresetName;
	TArray< struct FPerWeaponMeleeInfo >               PerWeaponMeleeParameters;
};

struct FMeleeFromAnimationDataPickerInfo
{
	struct FString                                     SourceAnimTreeName;
	struct FString                                     SourceMeleeAnimNodeName;
};

struct FDecalParams
{
	TArray< void* >                                    Mtl;
	int                                                MinCount;
	int                                                MaxCount;
	float                                              MaxOffset;
	float                                              MinRotation;
	float                                              MaxRotation;
	float                                              MinWidth;
	float                                              MaxWidth;
	float                                              MinRatio;
	float                                              MaxRatio;
};

struct FHitEffect
{
	unsigned char                                      WeaponType;
	void*                                              BloodParticleSystem;
	void*                                              HitSound;
	void*                                              DeathHitSound;
	void*                                              DeathKnifeSound;
	void*                                              DeathFireSound;
	void*                                              DeathLegsSound;
	void*                                              HeadHitSound;
	void*                                              CritHitSound;
	void*                                              HeadHitSoundForShooter;
	void*                                              PerforatingBloodParticleSystem;
	float                                              BloodDistance;
	struct FDecalParams                                BloodDecalToPawn;
	struct FDecalParams                                BloodDecalToLevel;
};

struct FMovementSound
{
	void*                                              TheSound;
	int                                                StepsPerSound;
	unsigned long                                      bLoopSound : 1;
};

struct FFootStepEffect
{
	void*                                              FootStepPS;
	float                                              FootStepCoeff;
};

struct FPostPhysicsBoneBreakingInfo
{
	struct FName                                       BoneName;
	unsigned long                                      bWithAllSubbones : 1;
};

struct FSpaceBasesFrame
{
	TArray< struct FMatrix >                           SpaceBases;
	float                                              FrameTime;
};

struct FCSL_SitableActorInfo
{
	void*                                              SitableActor;
	int                                                SitdownType;
};

struct FCSLRulingInfo
{
	unsigned char                                      RulingAction;
	struct FCSL_SitableActorInfo                       RulingSitable;
	int                                                RulingActionParameter;
	struct FName                                       RulingActionNameParameter;
	int                                                RulingFlags;
	int                                                RulingExtraFlags;
};

struct FSitableAnimationInfo
{
	struct FName                                       AnimName;
	unsigned long                                      bMirroredAnimation : 1;
	void*                                              MotionLawObject;
	struct FMatrix                                     WorldOriginTM;
};

struct FCCCameraDescription
{
	struct FName                                       DescName;
	float                                              DescSwitchingTime;
	struct FName                                       LocationInterpolationTypeWhenSwitching;
	struct FName                                       RotationInterpolationTypeWhenSwitching;
	struct FName                                       FOVInterpolationTypeWhenSwitching;
	struct FName                                       RotationOffsetInterpolationTypeWhenSwitching;
	struct FVector                                     BeginningOffset;
	struct FVector                                     EndingOffset;
	struct FVector                                     LocationOffset;
	struct FVector                                     LocalOffset;
	struct FRotator                                    RotationOffset;
	float                                              FOV;
	float                                              LocalFov;
	struct FName                                       LocationInterpolationType;
	float                                              LocationInterpolationSpeed;
	struct FName                                       RotationInterpolationType;
	float                                              RotationInterpolationSpeed;
	int                                                MaxAngleBetweenPawnAndCamLeft;
	int                                                MaxAngleBetweenPawnAndCamRight;
	int                                                MaxAngleBetweenPawnAndCamUp;
	int                                                MaxAngleBetweenPawnAndCamDown;
	int                                                HighPitchLimit;
	int                                                LowPitchLimit;
	int                                                HighPitchViewLimit;
	int                                                LowPitchViewLimit;
	int                                                HighDecrementPoint;
	int                                                LowDecrementPoint;
	float                                              DecrementOffset;
	struct FName                                       EffectsNames[ 5 ];
	struct FName                                       SwitchPostProcessName;
	struct FName                                       PostProcessName;
	float                                              RecoilMin;
	float                                              RecoilMax;
	float                                              RecoilTime;
	float                                              RecoilHVbalance;
};

struct FCoverActionSound
{
	unsigned char                                      PlaySoundInstant;
	unsigned char                                      LastAction;
	unsigned char                                      Action;
	void*                                              Sound;
};

struct FAdditionalParam
{
	class ACCPlayerReplicationInfo*                    PRIArray[ 16 ];
	int                                                Count;
	int                                                extendedInfo;
	unsigned char                                      Weapon;
	unsigned long                                      bFirstBlood : 1;
	unsigned long                                      bMelee : 1;
	unsigned long                                      bHeadShot : 1;
	unsigned long                                      bMine : 1;
	unsigned long                                      bLostBag : 1;
	unsigned long                                      bLostFlag : 1;
	unsigned long                                      bKilledWithFire : 1;
	unsigned long                                      bKilledWithFragGrenade : 1;
	unsigned long                                      bKilledWithPED : 1;
	unsigned long                                      bKilledWithProximityMine : 1;
	unsigned long                                      bKilledWithControlledMine : 1;
	unsigned long                                      bKilledWithSprayAndPray : 1;
	unsigned long                                      bKilledWithClusterRocket : 1;
	unsigned long                                      bKilledWithClusterGrenade : 1;
	unsigned long                                      bKilledWithOverkill : 1;
};

struct FGibExplosionPresetListEntry
{
	void*                                              GibPreset;
};

struct FGibShotOffPresetListEntry
{
	class UClass*                                      GibClass;
	void*                                              UsedGibPreset;
};

struct FCCBotPawnDebugInfo
{
	int                                                InfoId;
	struct FString                                     Flags;
	class APawn*                                       Enemy;
	class AActor*                                      EnemyActor;
	unsigned long                                      bEnemyActorVisible : 1;
	class AActor*                                      MoveTarget;
	class AActor*                                      Focus;
	class AActor*                                      RouteGoal;
	unsigned long                                      bInCover : 1;
	unsigned long                                      bCoverSucks : 1;
	unsigned char                                      CoverHint;
	int                                                CurrentWeaponIdx;
	int                                                CurrentDesiredWeaponIdx;
};

struct FCCBotPawnDebugInfoUS
{
	int                                                InfoIdUS;
	struct FString                                     AIVersion;
	float                                              AG;
	float                                              SA;
	float                                              ca;
	float                                              LA;
	struct FString                                     Inventory;
	class ANavigationPoint*                            StartSpot;
	float                                              SightRadius;
	float                                              RespawnDelay;
	class AActor*                                      FormationCenter;
	float                                              FormationSize;
	unsigned char                                      SquadOrder;
};

struct FCCBotPawnDebugInfo4
{
	int                                                InfoId4;
	float                                              TimeSinceLastNotifyHitWall;
	float                                              TimeSinceLastNotifyBump;
	float                                              CombatDist;
	float                                              CombatDistBias;
	unsigned long                                      bAdjusting : 1;
	struct FVector                                     SSPreciseDestination;
	float                                              SSMoveDist;
	float                                              SSMoveSpeed;
};

struct FCCBotPawnDebugInfo3
{
	int                                                InfoId3;
	struct FName                                       StateName;
	struct FString                                     DebugString;
	int                                                NumEnemys;
	struct FString                                     EnemyList[ 3 ];
	struct FString                                     RouteCache;
	class ANavigationPoint*                            Anchor;
	class ANavigationPoint*                            LastAnchor;
};

struct FCCBotPawnDebugInfo2
{
	int                                                InfoId2;
	struct FString                                     CurWeapon;
	struct FString                                     DangerHint;
	struct FVector                                     Destination;
	struct FVector                                     DebugBlockedWepStart;
	struct FVector                                     DebugBlockedWepEnd;
	struct FVector                                     AdjustLoc;
	void*                                              ScriptedRoute;
};

struct FPlayerInfo
{
	class APawn*                                       Pawn;
	class AActor*                                      Actor;
	struct FVector                                     LastKnownPosition;
	struct FCoverInfo                                  Cover;
	float                                              InitialAcquisitionTime;
	float                                              LastSeenTime;
	unsigned long                                      bVisible : 1;
	int                                                DamageSuffered;
	float                                              Aggro;
	float                                              AggroBoost;
	float                                              PermanentAggroBoost;
	float                                              LastDamageTime;
	float                                              Rating;
};

struct FBotRosterAISection
{
	unsigned char                                      Profile;
	float                                              Aggressiveness;
	float                                              StrafingAbility;
	float                                              CrouchingAbility;
	float                                              LeapfrogAbility;
	float                                              GrenadeCooldown;
	float                                              GrenadeCooldownBias;
};

struct FBotRosterResistSection
{
	float                                              RLight;
	float                                              RMedium;
	float                                              RHeavy;
	float                                              RSplash;
	float                                              RMelee;
};

struct FBotRosterFallbackInfo
{
	unsigned long                                      bFallbackOnNoSquadMates : 1;
	float                                              flFallbackOnLowHealthPct;
	float                                              flFallbackDurationTimeMin;
	float                                              flFallbackDurationTimeMax;
};

struct FBotRosterEntry
{
	struct FString                                     Id;
	struct FString                                     PlayerName;
	int                                                Health;
	TArray< struct FName >                             Inventory;
	TArray< int >                                      ViewIndex;
	struct FBotRosterAISection                         AI;
	void*                                              SoundGroup;
	unsigned char                                      NPCType;
	struct FBotRosterResistSection                     Resists;
	struct FBotRosterFallbackInfo                      Fallback;
	struct FBotRosterAIAbilityInfo                     AIAbility;
};

struct FRestoreInfo
{
	unsigned long                                      bRestoring : 1;
	float                                              RestoreTimePassed;
	float                                              RestoreCurentVelocity;
	float                                              RestoreStartDistance;
	float                                              RestoreTime;
	float                                              RestorePower;
	unsigned long                                      bUseRestoreSpeed : 1;
	float                                              RestoreSpeed;
	float                                              RestoreAcceleration;
};

struct FCapturePointParent
{
	class ACCCapturePoint*                             Point;
	unsigned long                                      MustBeCaptured : 1;
};

struct FRadarRepInfo
{
	struct FVector                                     Location;
	unsigned char                                      Yaw;
};

struct FQuestRulesScreen
{
	int                                                QuestId;
	unsigned long                                      QuestReadyToBeDelivered : 1;
	int                                                InstanceId;
	struct FString                                     PanelName;
};

struct FAbylityBuff
{
	void*                                              Ability;
	float                                              AffectTime;
	float                                              Time;
	struct FString                                     Resource2D;
};

struct FActionBarSlot
{
	unsigned char                                      State;
	unsigned char                                      Type;
	int                                                Index;
	int                                                AbilityTemplateID;
	int                                                DrugsLevel;
	TArray< struct FString >                           DrugHintMessages;
	float                                              TimeDelta;
	float                                              TransitionSpeed;
	float                                              SecondsLeft;
	unsigned long                                      AffectCanBeEnded : 1;
	float                                              HintAnimDelta;
	unsigned long                                      bAnimatingHint : 1;
	void*                                              StateMaterialInst[ 8 ];
	void*                                              DrugCounterMaterialInst;
};

struct FObjectMovement
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
};

struct FCheatClanInfo
{
	int                                                Id;
	struct FString                                     Name;
	struct FString                                     Description;
	TArray< int >                                      Members;
	unsigned long                                      IsLocal : 1;
	int                                                ClanMaster;
	int                                                LocalPlayer;
};

struct FInitNpcs_NpcDescription
{
	struct FString                                     Name;
	struct FCharacterPosition                          Position;
	struct FCharacterAppearance                        Appearance;
	int                                                Id;
	unsigned long                                      IsClanoved : 1;
	unsigned long                                      IsAbilityVendor : 1;
	unsigned long                                      IsBanker : 1;
};

struct FNotifyProfessionAndCraftAbilities_ProfessionSkill
{
	int                                                ProfessionId;
	int                                                ProfessionLevel;
	TArray< int >                                      SpecializationIds;
};

struct FInitSoldShopItems_ItemDesc
{
	struct FItemDescription                            Item;
	int                                                Count;
	int                                                Price;
};

struct FClanHallDancerPreset
{
	struct FString                                     Name;
	class USkeletalMesh*                               Mesh;
	void*                                              AnimTree;
	void*                                              AnimSets;
};

struct FPlayerStat
{
	class APlayerReplicationInfo*                      PRI;
	struct FString                                     GlobalID;
	struct FString                                     DisplayName;
	int                                                TotalConnectTime;
	int                                                TotalScore;
	TArray< struct FWeaponStat >                       WeaponStats;
	TArray< struct FInventoryStat >                    InventoryStats;
	TArray< struct FBonusStat >                        BonusStats;
	TArray< struct FPickUpStat >                       PickUpStats;
	TArray< struct FFeatStat >                         FeatStats;
	TArray< int >                                      ObjectiveStats;
	TArray< int >                                      KillStats;
	TArray< int >                                      DeathStats;
	int                                                NoSuicides;
	int                                                ObtainedDamage;
	float                                              AFKTime;
};

struct FGameStat
{
	int                                                TimeStamp;
	unsigned char                                      StatType;
	int                                                Team;
	int                                                InstigatorId;
	int                                                AdditionalId;
	int                                                InstigatorData;
	int                                                AdditionalData;
};

struct FStatsFilterDesc
{
	struct FName                                       ClassName;
	unsigned char                                      NetworkRole;
	TArray< unsigned char >                            FieldTypes;
	struct FString                                     FieldFriendlyName;
};

struct FSplineSimulationInfo
{
	float                                              SplineTime;
	struct FVector                                     StartLocation;
	struct FVector                                     StartVelocity;
	struct FVector                                     TargetLocation;
	struct FVector                                     TargetVelocity;
};

struct FEnemyInfo
{
	class ACCInstancePawn*                             P;
	unsigned long                                      bMainGoalEnemy : 1;
	unsigned char                                      LocationType;
};

struct FEnemyHuntSimulationInfo
{
	struct FEnemyInfo                                  Enemy;
	struct FVector                                     EnemyLocation;
	struct FVector                                     EnemyDestVelocity;
	float                                              EnemyTime;
};

struct FGIPDamageParams
{
	float                                              DamageModifier;
	float                                              ProjectileDamageModifier;
	float                                              MeleeDamageModifier;
	float                                              HPModifier;
};

struct FDancerVisualDesc
{
	struct FString                                     UIName;
	int                                                Cost;
	struct FString                                     Description;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	struct FCharacterVisualDescription                 Visual;
	struct FString                                     VisualText;
	unsigned long                                      bUsedInVip : 1;
	unsigned long                                      bUsedOnStripScene : 1;
	int                                                VipCostInBollars;
	int                                                VipCostInGold;
};

struct FLootTableEntry
{
	float                                              Prob;
	class UClass*                                      Item;
	unsigned long                                      bUseCount : 1;
	int                                                Count;
};

struct FUserSubscriptedInstanceSession
{
	int                                                UserInstanceSession;
	float                                              UserSubscriptionPowerRating;
};

struct FCCMove
{
	int                                                Yaw;
	unsigned long                                      SyncMove : 1;
	float                                              Speed;
	unsigned char                                      MoveDir;
	struct FVector                                     Location;
	struct FVector                                     Velocity;
	float                                              CurrMoveUseTime;
	float                                              PrevMoveUseTime;
};

struct FPrefabDesc
{
	void*                                              PrefabInst;
	class AActor*                                      SimpleActor;
	TArray< struct FClubItemAttribute >                Attributes;
	struct FVector                                     Position;
	float                                              Yaw;
	int                                                PresetIndex;
	int                                                ItemId;
	unsigned long                                      bOriginal : 1;
};

struct FFurniturePreset
{
	struct FString                                     ShortName;
	struct FString                                     Description;
	void*                                              Mesh;
	void*                                              Prefab;
	int                                                MaterialPresetIndex;
	int                                                Color1Palette;
	int                                                Color2Palette;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	class UTexture2D*                                  TopIcon;
	struct FTextureCoordinates                         TopIconCoords;
	int                                                PresetsCategory;
	int                                                Style;
	int                                                Cost;
	int                                                Width;
	int                                                Height;
	unsigned char                                      FrontFaceDirection;
	unsigned char                                      FrontFaceDirection2;
	TArray< struct FClubItemAttribute >                InitialAttributes;
	TArray< int >                                      AllowedZoneTypes;
};

struct FAvailabilityZoneInfo
{
	unsigned long                                      bAvailableForReds : 1;
	unsigned long                                      bAvailableForBlues : 1;
};

struct FReplicatedZoneStateInfo
{
	float                                              CaptureState;
};

struct FZoneStateInfo
{
	unsigned char                                      ItsState;
	int                                                ItsStateTeam;
};

struct FMeleeBeatVisualInfo
{
	unsigned char                                      BeatVisualType;
	int                                                MeleeAnimationIndex;
	unsigned char                                      MeleeEffectorType;
	void*                                              MeleeSound;
	void*                                              MeleeRepeatSound;
};

struct FMeleeBeatInfo
{
	struct FString                                     MeleeBeatFriendlyName;
	struct FMLS_GetDescription                         MotionLawGetDescription;
	unsigned long                                      bMeleeBeatCanBeRepeated : 1;
	float                                              MeleeTime;
	float                                              MeleeRepeatTimePerc;
	float                                              MeleeRepeatTimePosPerc;
	float                                              MeleeBackBlendTime;
	float                                              MeleeDamage;
	float                                              MeleeMomentum;
	int                                                MeleeDamageType;
	float                                              MeleeAvoidanceRadiusMultiplier;
	float                                              MeleeAvoidanceGlueFactor;
	float                                              MeleeWorldCollisionRadiusMultiplier;
	float                                              MeleeLeftRotationLimit;
	float                                              MeleeRightRotationLimit;
	struct FMeleeBeatVisualInfo                        BeatVisualInfo;
};

struct FMeleeDefenseVisualInfo
{
	void*                                              MeleeDefendSound;
};

struct FMeleeDefenseInfo
{
	float                                              MeleeDefendTime;
	struct FMeleeDefenseVisualInfo                     DefenseVisualInfo;
};

struct FAbilityShot_Request
{
	struct FString                                     Id;
	struct FAbilityShotDesc                            Desc;
};

struct FGrenadeConsumptionControl_Request
{
	struct FString                                     Id;
};

struct FFireAmmoConsumptionControl_Request
{
	struct FString                                     Id;
};

struct FReloadAmmoConsumptionControl_Request
{
	struct FString                                     Id;
};

struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;
	float                                              WorldWeight;
	float                                              PawnWeight;
	struct FVector                                     Extent;
};

struct FCCCameraEffectDescription
{
	struct FName                                       EffectName;
	void*                                              Effect;
};

struct FCCPostProcessSettings
{
	struct FName                                       SettingsName;
	struct FPostProcessSettings                        Settings;
};

struct FTimedEmitterPoolEntry
{
	void*                                              PSC;
	float                                              Lifetime;
	float                                              LifeTimeLeft;
};

struct FColorPalette
{
	TArray< void* >                                    _images;
	TArray< void* >                                    _buttons;
	TArray< int >                                      _colorIndex;
};

struct FEntryPawnOutlook
{
	int                                                HeadId;
	int                                                SkinColorId;
	int                                                HairColorId;
	int                                                HairId;
	int                                                BeardId;
	int                                                MakeupId;
	int                                                HatId;
	int                                                UpperClothId;
	int                                                LowerClothId;
	int                                                ShoesId;
	int                                                GlassesId;
	int                                                ClanLogoId;
};

struct FSpawnSpotData
{
	class ANavigationPoint*                            StartSpot;
	int                                                Weight;
};

struct FGibDiffEntry
{
	class UClass*                                      GibClass;
	unsigned char                                      DivisionParameter;
	struct FVector                                     PreviewOffset;
	unsigned char                                      MasterSideBloodDistribution;
	unsigned char                                      ChildSideBloodDistribution;
	float                                              DefaultMasterBloodValue;
	float                                              DefaultChildBloodValue;
	int                                                ForceMasterBloodDepthFromBase;
	int                                                ForceChildBloodDepthFromBase;
};

struct FGibBatcherEntry
{
	TArray< struct FGibDiffEntry >                     GibList;
	struct FName                                       CustomGibDiffName;
};

struct FHiddenBoneInfoStruct
{
	struct FName                                       BoneName;
	unsigned long                                      bHideAllSubBones : 1;
};

struct FSkeletalMeshEntry
{
	struct FString                                     SkelMeshName;
	TArray< void* >                                    DynamicDiffs;
};

struct FGIPVisualParams
{
	unsigned long                                      bSimpleCharacterMeshes : 1;
	unsigned long                                      bNoCharacterAnimations : 1;
	unsigned long                                      bNoCharacterPhysics : 1;
	unsigned long                                      bNoWeaponMeshes : 1;
	unsigned long                                      bNoWeaponEffects : 1;
	unsigned long                                      bNoProjectileMeshes : 1;
	unsigned long                                      bNoProjectileEffects : 1;
};

struct FToucherInfo
{
	class AController*                                 Player;
	float                                              TouchTime;
};

struct FMyEntry
{
	class UObject*                                     ObjInstance;
	unsigned long                                      bUsed : 1;
};

struct FLastBulletInInfo
{
	unsigned long                                      bValid : 1;
	struct FVector                                     HitNormal;
	struct FTraceHitInfo                               HitInfo;
	struct FVector                                     BulletLocation;
	struct FVector                                     BulletDirection;
	float                                              DamageLoss;
	float                                              DamageMaxWidth;
};

struct FPO_OutDataInfo
{
	struct FVector                                     NewStartTrace;
	TArray< struct FImpactInfo >                       NewImpacts;
};

struct FPO_InDataInfo
{
	struct FVector                                     StartTrace;
	struct FVector                                     EndTrace;
	class AActor*                                      HitActor;
	struct FVector                                     HitLocation;
	struct FVector                                     HitNormal;
	struct FTraceHitInfo                               HitInfo;
};

struct FMovementInputInfoEntry
{
	float                                              PrevValue;
	float                                              Value;
	float                                              LastChangeTime;
};

struct FMovementInputInfo
{
	struct FMovementInputInfoEntry                     Forward;
	struct FMovementInputInfoEntry                     Strafe;
};

struct FEntityRequirement
{
	unsigned char                                      reqType;
	float                                              fparam;
	struct FString                                     intparam;
};

struct FActionDesc
{
	unsigned char                                      action_type;
	struct FString                                     sparam;
};

struct FTutorialEntity
{
	int                                                Id;
	TArray< struct FEntityRequirement >                requirements;
	struct FString                                     tutorial_text;
	struct FString                                     tutorial_caption;
	unsigned long                                      isComplete : 1;
	unsigned char                                      action_type;
	float                                              HintLifeTime;
	TArray< struct FActionDesc >                       Actions;
	struct FItemTemplate                               boughtItem;
	int                                                LastGainedAbility;
};

struct FItemSlotHintInfo
{
	unsigned long                                      Enable : 1;
	int                                                SlotIndex;
	void*                                              Grid;
	void*                                              mbox;
};

struct FAbilityHintInfo
{
	unsigned long                                      Enable : 1;
	void*                                              mbox;
	void*                                              mbox2;
	int                                                SlotIndex;
};

struct FPresentedKey
{
	int                                                KeyID;
	unsigned long                                      bPCController : 1;
};

struct FMenuHelpPanels
{
	TArray< struct FName >                             HelpPanelNames;
};

struct FServiceHelpPanel
{
	struct FName                                       PanelName;
	TArray< int >                                      NPCids;
};

struct FServiceHelpPanels
{
	TArray< struct FServiceHelpPanel >                 HelpPanels;
};

struct FLobbySensorInfo
{
	float                                              Distance;
	float                                              Angle;
};

struct FPathPoint
{
	int                                                Yaw;
	struct FVector                                     Location;
	struct FVector                                     Velocity;
	float                                              Time;
};

struct FMotionLawEntry
{
	float                                              Time;
	struct FMatrix                                     TM;
};

struct FMotionLawPublicInfo
{
	int                                                NumEntries;
	float                                              MaxTime;
};

struct FStackedNotificationMessage
{
	void*                                              MessageInstance;
	float                                              TimePassedInStack;
};

struct FReceivedNotificationMessage
{
	void*                                              MessageInstance;
	float                                              TimePassedSinceReceived;
	float                                              TimePassedInStack;
};

struct FShadowNPCMesh
{
	struct FName                                       Id;
	class UMaterialInterface*                          Mtl;
};

struct FCCNPCShopProxy
{
	struct FString                                     ShopId;
	struct FString                                     Name;
};

struct FCCNPCRareShopProxy
{
	struct FString                                     RareShopId;
	struct FString                                     Name;
};

struct FCCNPCPremiumShopProxy
{
	struct FString                                     PremiumShopId;
	struct FString                                     Name;
};

struct FCCNPCRepairerProxy
{
	struct FString                                     RepairerId;
	struct FString                                     Name;
};

struct FCCNPCVisualProxy
{
	int                                                VisualId;
	struct FString                                     Name;
};

struct FCCNPCQuestProxy
{
	struct FString                                     QuestId;
	struct FString                                     Name;
};

struct FCCNPCInstancePorterProxy
{
	struct FString                                     InstanceId;
	struct FString                                     Name;
};

struct FCCNPCLobbyPorterProxy
{
	struct FString                                     LobbyExitNumber;
	int                                                LobbyExitId;
	struct FString                                     Name;
};

struct FCCNPCTrainerProxy
{
	struct FString                                     TrainerId;
	struct FString                                     Name;
};

struct FCCNPCQuestVendorTemplateProxy
{
	struct FString                                     QuestVendorTemplateId;
	struct FString                                     Name;
};

struct FCCNPCClanHallVendorProxy
{
	struct FString                                     ClanHallVendorId;
	struct FString                                     Name;
};

struct FCCNPCSpecialization
{
	TArray< struct FCCNPCInstancePorterProxy >         Instances;
	struct FCCNPCLobbyPorterProxy                      LobbyPorter;
	unsigned long                                      ClanHallPorter : 1;
	unsigned long                                      ClanManager : 1;
	unsigned long                                      BankManager : 1;
	unsigned long                                      MailManager : 1;
	unsigned long                                      AuctionManager : 1;
	unsigned long                                      ClanWarManager : 1;
	unsigned long                                      PvPLadder : 1;
	unsigned long                                      Garbage : 1;
	unsigned long                                      NewspaperBox : 1;
	unsigned long                                      MunicipalVendor : 1;
	TArray< struct FCCNPCShopProxy >                   Shop;
	TArray< struct FCCNPCRareShopProxy >               RareShop;
	TArray< struct FCCNPCPremiumShopProxy >            PremiumShop;
	struct FCCNPCRepairerProxy                         Repairer;
	struct FCCNPCTrainerProxy                          Trainer;
	struct FCCNPCClanHallVendorProxy                   ClanHallVendor;
	TArray< struct FCCNPCQuestProxy >                  Quests;
	TArray< struct FCCNPCQuestVendorTemplateProxy >    QuestVendorTemplates;
};

struct FCCNPCSpawnArea
{
	void*                                              Pt0;
	void*                                              Pt1;
	void*                                              VisLine;
};

struct FCCNPCSubscriptionLayer
{
	struct FString                                     GreetingText;
	struct FString                                     FuckOffText;
	void*                                              GreetingCue;
	unsigned long                                      Enabled : 1;
};

struct FCCPathLink
{
	void*                                              Point;
	float                                              Speed;
	float                                              SpeedMultiplier;
	struct FVector                                     LinkNormal;
	float                                              LinkSize;
	unsigned char                                      PathType;
	float                                              SmoothDistIn;
	float                                              SmoothDistOut;
	float                                              SmoothArcAngle;
	struct FVector                                     SmoothBisection;
	float                                              SmoothArcSpeed;
};

struct FCCPathWaiting
{
	unsigned char                                      Type;
	struct FString                                     Param;
};

struct FIdleAnimationDescr
{
	struct FName                                       AnimName;
	int                                                MinAfterDelay;
	int                                                MaxAfterDelay;
};

struct FCCPathEndAction
{
	unsigned long                                      EnableInteraction : 1;
	unsigned char                                      Type;
	TArray< void* >                                    NextPath;
	struct FCCPathWaiting                              Waiting;
	void*                                              View;
	TArray< struct FIdleAnimationDescr >               IdleAnimationsParam;
};

struct FGrenadeTrajectoryActor
{
	void*                                              Actor;
	int                                                TrajectoryPointIndex;
};

struct FGrenadeTrajectoryPoint
{
	struct FVector                                     Location;
	float                                              Time;
};

struct FTeamEntry
{
	int                                                TeamIndex;
	TArray< class ACCInstancePawn* >                   TeamPawns;
};

struct FPlayerScore
{
	int                                                Score;
	int                                                ScoreType;
	float                                              ScoreTime;
};

struct FShadowRegionMesh
{
	struct FName                                       Id;
	int                                                MeshIndex;
	int                                                RegionSet;
	class UMaterialInterface*                          Mtl;
};

struct FCCAbilityZoneDesc
{
	struct FName                                       AbilityName;
	float                                              Radius;
	float                                              Lifetime;
	unsigned long                                      EndAffectOnExitOrZoneDespawn : 1;
	void*                                              PSTemplate;
	unsigned char                                      MarkerType;
};

struct FClientMyVelocityPhysicsInfo
{
	unsigned long                                      bEnabled : 1;
	unsigned char                                      TheState;
	float                                              StartClientTimeStamp;
};

struct FFlyRayInfo
{
	struct FVector                                     FlyRayLocation;
	struct FVector                                     FlyRayDirection;
	float                                              LocationToFlyRayNormalSpeedPerc;
	float                                              LocationToFlyRayTangensialSpeedPerc;
};

struct FMyVelocityPhysicsInfo
{
	unsigned long                                      bEnabled : 1;
	float                                              StartServerTimeStamp;
	unsigned char                                      TheState;
	struct FFlyRayInfo                                 FlyRayInfoStruct;
	float                                              UserStartServerPhysicsTime;
};

struct FCollisionAvoidanceInfo
{
	struct FVector                                     WantedLocation;
	struct FVector                                     WantedDirection;
	struct FVector                                     WantedVelocity;
	unsigned long                                      bUseWantedVelocityTargetLoc : 1;
	struct FVector                                     WantedVelocityTargetLoc;
	float                                              WantedTime;
	float                                              MaxAvoidanceAngle;
	int                                                EmpiricIterationsDone;
	int                                                EmpiricIterationsLeft;
};

struct FMainGoalEntryInfo
{
	class ACCInstancePawn*                             P;
	float                                              Distance;
	int                                                Rockets;
};

struct FMainGoalInfo
{
	TArray< struct FMainGoalEntryInfo >                Entries;
};

struct FSplineSimulationRTInfo
{
	struct FInterpolationSpline                        Spline;
	unsigned long                                      SplineInitialized : 1;
	float                                              SplineInitializedTimeStampOffset;
};

struct FEnemyHuntSimulationRTInfo
{
	struct FInterpolationSpline                        EnemySpline;
	unsigned long                                      EnemySplineInitialized : 1;
	float                                              EnemySplineInitializedTimeStampOffset;
};

struct FSimulationEntry
{
	float                                              TimeStamp;
	unsigned char                                      EntryType;
	unsigned long                                      bPendingFinished : 1;
	struct FSplineSimulationInfo                       SplineInfoStruct;
	struct FSplineSimulationRTInfo                     SplineRTInfoStruct;
	struct FEnemyHuntSimulationInfo                    EnemyInfoStruct;
	struct FEnemyHuntSimulationRTInfo                  EnemyRTInfoStruct;
};

struct FLinearLimits
{
	struct FVector                                     Limits;
};

struct FLinearPendulumSetupInfo
{
	struct FVector                                     Gravity;
	float                                              SpringForceMin;
	float                                              SpringForceMax;
	float                                              SpringForceRadiusMin;
	float                                              SpringForceToDistancePower;
	float                                              Friction;
	float                                              FrictionVelocityFactorMin;
	float                                              FrictionVelocityFactorMax;
	float                                              FrictionVelocityFactorVelocityMin;
	float                                              FrictionVelocityFactorVelocityMax;
	struct FLinearLimits                               Limits;
};

struct FLinearPendulumRuntimeInfo
{
	struct FVector                                     Location;
	struct FVector                                     Velocity;
};

struct FPendulumLimits
{
	struct FVector                                     Limit1;
	struct FVector                                     Limit2;
	float                                              DrawDebugLength;
};

struct FPendulumSetupInfo
{
	float                                              Length;
	struct FVector                                     Gravity;
	float                                              Friction;
	float                                              FrictionVelocityFactorMin;
	float                                              FrictionVelocityFactorVelocity;
	TArray< struct FPendulumLimits >                   Limits;
};

struct FPendulumRuntimeInfo
{
	struct FVector                                     Location;
	struct FVector                                     Velocity;
};

struct FNoiseInfo
{
	float                                              Loudness;
	class AActor*                                      NoiseMaker;
	struct FName                                       NoiseType;
	float                                              LastHeardTime;
};

struct FPerFrameEntry
{
	float                                              FrameTimeStamp;
	int                                                ValueAccumulator;
	int                                                NumValues;
	int                                                ValueMin;
	int                                                ValueMax;
};

struct FStatsEntry
{
	struct FString                                     Name;
	TArray< struct FPerFrameEntry >                    PerFrameEntries;
};

struct FRealmNotificationParameter
{
	struct FString                                     ParameterName;
	unsigned char                                      ValueType;
	struct FPointer                                    ValueData;
};

struct FCharacterLocation
{
	float                                              LastTime;
	struct FVector                                     pos;
	struct FVector                                     Vel;
	int                                                Yaw;
};

struct FFieldReplicationStats
{
	struct FName                                       FieldName;
	struct FString                                     FieldFriendlyName;
	int                                                TotalSize;
	int                                                NumReplications;
	int                                                FieldSize;
	float                                              BitsPerSecond;
	float                                              ReplicationsPerSecond;
	float                                              FramesPerReplication;
};

struct FActorReplicationStats
{
	int                                                TotalSize;
	float                                              BitsPerSecond;
};

struct FActorGroupReplicationStats
{
	struct FName                                       ActorClassName;
	struct FActorReplicationStats                      LocalActorsStats;
	struct FActorReplicationStats                      NonLocalActorsStats;
	int                                                TotalSize;
	float                                              BitsPerSecond;
};

struct FAllActorsReplicationStats
{
	int                                                TotalSize;
	float                                              BitsPerSecond;
};

struct FLastROBStruct
{
	class APlayerReplicationInfo*                      PRI;
	float                                              Time;
};

struct FKeySynonim
{
	struct FString                                     KeyName;
	struct FString                                     KeyName_Short;
};

struct FSoloPlayerInfo
{
	class APlayerController*                           Controller;
	int                                                NumQuestItems[ 4 ];
	float                                              SessionTimeLeft;
	unsigned long                                      bLeavingInstance : 1;
	unsigned long                                      bRestarted : 1;
};

struct FIncomingRPCEntry
{
	float                                              EntryTimeStamp;
	unsigned long                                      bPendingDelete : 1;
	int                                                SimulationID;
	class ACCProj_SpiralRocketSimulationReceiver*      ResolvedSimulation;
	unsigned long                                      bDispatched : 1;
	unsigned char                                      RPCType;
	float                                              RocketPhysicsTimeStamp;
	struct FSplineSimulationInfo                       SSI1;
	struct FSplineSimulationInfo                       SSI2;
	struct FEnemyHuntSimulationInfo                    EHSI;
};

struct FMainPointInfo
{
	float                                              Angle;
	float                                              Step;
};

struct FFullMainPointInfo
{
	struct FMainPointInfo                              Min;
	struct FMainPointInfo                              Max;
};

struct FAdditionalPointInfo
{
	float                                              X;
	float                                              Y;
};

struct FEntryStruct
{
	struct FString                                     PresetName;
	void*                                              Preset;
};

struct FTriangleInfo
{
	struct FVector                                     v1;
	struct FVector                                     v2;
	struct FVector                                     v3;
};

struct FStoreEntry
{
	void*                                              StaticGibManager;
	struct FName                                       SkeletalMeshName;
};

struct FAnimationDesc
{
	struct FString                                     UIName;
	struct FString                                     Description;
	int                                                Cost;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	void*                                              DanceReference;
};

struct FAnimationEntry
{
	struct FName                                       AnimName;
	float                                              Probability;
};

struct FAnimationGroupLeaveEntry
{
	struct FName                                       NewGroupTag;
	float                                              Probability;
};

struct FAnimationGroupEntry
{
	struct FName                                       GroupTag;
	TArray< struct FAnimationEntry >                   AnimationEntries;
	float                                              GroupLeaveProbability;
	TArray< struct FAnimationGroupLeaveEntry >         GroupLeaveEntries;
	unsigned long                                      bChangeMirroringOnLeave : 1;
};

struct FTriangleBlendAnimInfoEntry
{
	struct FName                                       FromAnimName;
	struct FName                                       ToAnimName;
};

struct FTriangleBlendInfoEntry
{
	struct FStripAnimBlendInfo                         TriangleBlendInfo;
	TArray< struct FTriangleBlendAnimInfoEntry >       AnimInfoEntries;
};

struct FWaveDesc
{
	int                                                delay;
	struct FString                                     UniqueMessage;
};

struct FRequestDataInfo
{
	int                                                Data;
};

struct FRequestEntry
{
	int                                                RequestID;
	float                                              TimeStamp;
	struct FRequestDataInfo                            RequestDataInfoStruct;
};

struct FIncomeBlockingInfo
{
	unsigned long                                      bBlocked : 1;
	float                                              TimeOut;
	float                                              TimeLeft;
	int                                                UnblockingReplyRequestID;
};

struct FTurretFireInfo
{
	struct FVector                                     StartTrace;
	struct FVector                                     EndTrace;
	unsigned char                                      ReplicationHack;
};

struct FStackedPopup
{
	void*                                              PopupInstance;
	unsigned long                                      IsPendingForDeath : 1;
	unsigned char                                      KillReason;
	unsigned long                                      IsOnScreen : 1;
	float                                              TimePassed;
};

struct FPopupStackByClass
{
	class UClass*                                      PopupClass;
	void*                                              PopupTemplate;
	TArray< struct FStackedPopup >                     StackedPopups;
};

struct FVIPProgramme
{
	struct FString                                     UIName;
	int                                                Cost;
	int                                                GoldCost;
	struct FString                                     Description;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	void*                                              VipDanceReference;
};

struct FWeaponAttachmentPresetData
{
	void*                                              Preset;
	struct FString                                     PresetName;
};

struct FRecoilBound
{
	float                                              Left;
	float                                              Right;
	float                                              Top;
};

struct FRecoilRule
{
	int                                                Shots;
	struct FRecoilBound                                Bound;
	float                                              Angle;
	float                                              Step;
	float                                              RoundRuleRadius;
	int                                                RoundRuleRadiusShots;
};

struct FFullRecoilRule
{
	unsigned long                                      bUseRoundRule : 1;
	struct FRecoilRule                                 Min;
	struct FRecoilRule                                 Max;
};

struct FSColorPresets
{
	TArray< struct FLinearColor >                      Colors;
};

struct FMaterialParameterSpec
{
	struct FString                                     UIName;
	TArray< class UMaterialInterface* >                Materials;
	unsigned long                                      bCreateInstance : 1;
	struct FName                                       ParameterName;
	unsigned char                                      Type;
};

struct FFurnitureMaterialCategory
{
	struct FString                                     UIName;
	TArray< struct FMaterialParameterSpec >            Params;
};

struct FClubTemplate
{
	struct FString                                     UIName;
	struct FString                                     CommandLine;
	struct FString                                     LoadingScreen;
	int                                                BaseCost;
	TArray< struct FClubZone >                         Zones;
	TArray< void* >                                    ClanLogoMtl;
	struct FName                                       ClanLogoTextureParam;
	struct FName                                       ClanLogoColorParam;
};

struct FEventValue
{
	struct FString                                     UIName;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	int                                                Cost;
};

struct FEventColor
{
	TArray< void* >                                    Materials;
	struct FName                                       ParameterName;
	struct FString                                     UIName;
	int                                                ColorPalette;
};

struct FEventTemplate
{
	struct FString                                     UIName;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         IconCoords;
	int                                                BaseCost;
	TArray< struct FEventValue >                       Values;
	TArray< struct FEventColor >                       Colors;
	int                                                ParentEventIndex;
	int                                                ParentEventValue;
	unsigned long                                      bVIP : 1;
	class UPrimitiveComponent*                         CollisionComponent;
	struct FVector                                     CollidedMovePoint;
	unsigned char                                      Type;
};

struct FClubItemAttributeCost
{
	unsigned char                                      AttributeId;
	int                                                Cost;
};

struct FFurniturePresetCategory
{
	struct FString                                     ShortName;
};

struct FInstanceIconData
{
	unsigned long                                      bEnabled : 1;
	class UTexture2D*                                  Texture;
	float                                              U;
	float                                              V;
	float                                              UL;
	float                                              VL;
	float                                              TrsnsitionTime;
	float                                              TransitionData;
};

struct FControllerInfo
{
	class AController*                                 PC;
	float                                              RemainingTime;
};

struct FPlacedObject
{
	int                                                ObjId;
	int                                                PresetId;
	class AActor*                                      ObjReference;
	int                                                Row;
	int                                                Col;
	int                                                Yaw;
};

struct FEntry
{
	struct FVector                                     ToCauser;
	float                                              Modifier;
	float                                              Lifetime;
	float                                              LifeTimePower;
	float                                              LifeTimeLeft;
	unsigned long                                      bPendingDelete : 1;
};

struct FAbilityHintInfo2
{
	unsigned long                                      Enable : 1;
	void*                                              mbox;
	void*                                              mbox2;
	int                                                SlotIndex;
};

struct FTextureStyleContainer
{
	void*                                              _CellImage[ 5 ];
};

struct FDebugNode
{
	int                                                StyleID;
	struct FString                                     node_value;
	unsigned char                                      node_type;
	struct FTextureCoordinates                         uvCoords;
};

struct FDebugRow
{
	TArray< struct FDebugNode >                        Nodes;
};

struct FPresentedElementA
{
	unsigned char                                      Type;
	struct FVector                                     world_position;
	struct FVector                                     world_bone_location;
	struct FVector                                     Direction;
	float                                              Time;
	struct FString                                     UserName;
	int                                                ClanLogoId;
	struct FString                                     ClanName;
	int                                                TrackingState;
	float                                              MarkingAlpha;
	float                                              Lifetime;
	float                                              Distance;
	int                                                RenderPriority;
	int                                                __InternalCounter;
	struct FString                                     UserDescription;
};

struct FClampedPresentedElementA : FPresentedElementA
{
};

struct FOrientedPresentedElementA : FPresentedElementA
{
};

struct FPresentedElementDamageIndicator : FPresentedElementA
{
	float                                              ImpactDamage;
	float                                              ScaleCoef;
	float                                              MoveUpCoef;
	class APlayerReplicationInfo*                      Replication;
	struct FVector                                     XTend;
};

struct FCraftAbilityUsefulness
{
	int                                                AbilityId;
	unsigned char                                      AbilityUsefulness;
};

struct FProgressSpecialization
{
	void*                                              Panel_Specialization;
	void*                                              TooltipCaster_Specialization;
	void*                                              MSPanel_PathFromParent;
	void*                                              MSPanel_SpecializationState;
	void*                                              Image_SpecializationIcon;
	void*                                              Image_SelectedBackground;
	void*                                              Button_Specialization;
	int                                                SpecializationId;
};

struct FProgressProfession
{
	void*                                              Panel_Profession;
	TArray< void* >                                    Progress_Profession;
	void*                                              Label_Progress;
	TArray< struct FProgressSpecialization >           Specializations;
	int                                                ProfessionId;
};

struct FAbilityBuffSlot
{
	unsigned char                                      State;
	float                                              Width;
	void*                                              Ability;
	float                                              AffectTime;
	float                                              Time;
	struct FString                                     Resource2D;
	int                                                MaterialIndexProxy;
	struct FString                                     DebugString;
};

struct FAMaterialInstanceConstantProxy
{
	int                                                refcount;
	void*                                              MaterialInst[ 3 ];
};

struct FCellDescriptor
{
	unsigned long                                      bVisible : 1;
	unsigned long                                      bEnable : 1;
	unsigned long                                      bHighlighted : 1;
	float                                              Time;
	float                                              IdleTime;
	unsigned char                                      State;
	unsigned long                                      bLocked : 1;
};

struct FDateDescription
{
	int                                                DateId;
	int                                                EventId;
};

struct FCellStyle
{
	void*                                              BackgroundComponent;
	void*                                              StringComponent;
};

struct FItemContextMenuDesc
{
	TArray< unsigned char >                            OperationList;
	unsigned char                                      EquipItem_Source;
	int                                                MoveItem_Destination;
};

struct FFurnitureTooltipDesc
{
	struct FString                                     fName;
	struct FString                                     fDesc;
	int                                                fCost;
	TArray< struct FClubItemAttribute >                fAttributes;
	class UTexture*                                    Icon2D;
};

struct FTemplateEventValueTooltipDesc
{
	struct FString                                     ValueName;
	class UTexture*                                    ValueIcon;
	class UTexture*                                    ValuePreview;
};

struct FDancerPresetInfo
{
	int                                                VisualId;
	int                                                SetIndex;
	int                                                HatIndex;
	int                                                UpperClothesIndex;
	int                                                LowerClothesIndex;
	int                                                ShoesIndex;
};

struct FZoneInffo
{
	int                                                ZoneTypeId;
	int                                                ZoneStartRow;
	int                                                ZoneHeight;
	int                                                ZoneStartColumn;
	int                                                ZoneWidth;
	int                                                ZoneStyleIndex;
};

struct FPickState
{
	int                                                PresetId;
};

struct FPlaceState
{
	int                                                ItemId;
	int                                                PresetId;
	int                                                Yaw;
};

struct FEditState
{
	int                                                ItemId;
	int                                                PresetId;
	int                                                Yaw;
};

struct FItemModification
{
	int                                                ItemId;
	int                                                PresetIndex;
	TArray< struct FClubItemAttribute >                ChangedAttributes;
};

struct FEventColorChange
{
	int                                                EventTemplateIndex;
	int                                                EventPalleteIndex;
	int                                                EventColorIndex;
};

struct FClubChanges
{
	TArray< int >                                      AddedItems;
	TArray< int >                                      DeletedItems;
	TArray< int >                                      MovedToDepot;
	TArray< int >                                      PlacedFromDepot;
	TArray< int >                                      OriginalItems;
	TArray< int >                                      OriginalItemPresets;
	TArray< struct FItemModification >                 ChangedItems;
	TArray< struct FEventTemplateChange >              OriginalEventValues;
	TArray< struct FEventTemplateChange >              ChangedEventValues;
	TArray< struct FEventColorChange >                 ChangedEventColors;
};

struct FItemPlace
{
	int                                                ItemId;
	int                                                ItemPresetId;
	int                                                StartRow;
	int                                                Height;
	int                                                StartCol;
	int                                                Width;
	int                                                Yaw;
	int                                                FFdir;
	int                                                FFdir2;
	class UTexture2D*                                  Icon2D;
	struct FTextureCoordinates                         TextCoords;
	void*                                              IconMaterial;
	unsigned long                                      bDisabledObject : 1;
	struct FIntPoint                                   FixedSize;
};

struct FMarkerInfo
{
	int                                                MarkerStartOffsetRow;
	int                                                MarkerHeight;
	int                                                MarkerStartOffsetColumn;
	int                                                MarkerWidth;
	class UTexture2D*                                  MarkerIcon;
	TArray< int >                                      AllowedZoneTypes;
};

struct FCellInfo
{
	int                                                Index;
	int                                                ZoneId;
	int                                                ItemId;
	int                                                CellState;
	unsigned long                                      bInactiveCell : 1;
};

struct FClubSubmitChanges
{
	TArray< int >                                      DeletedItemsIds;
	TArray< int >                                      RemovedItemsIds;
	TArray< struct FClubItem >                         AddedItems;
	TArray< struct FClubItemChanges >                  ChangesInItems;
	int                                                Cost;
};

struct FSegment
{
	struct FVector2D                                   segment_start;
	struct FVector2D                                   segment_end;
	struct FVector2D                                   uv_start;
	struct FVector2D                                   uv_end;
};

struct FPanelSize
{
	float                                              LeftSize;
	float                                              RightSize;
};

struct FCrosshairElement
{
	unsigned long                                      bMovable : 1;
	float                                              Bounds[ 4 ];
	float                                              MovablePointOffset;
	float                                              X;
	float                                              Y;
	float                                              TargetX;
	float                                              TargetY;
};

struct FHudDamageInfo
{
	float                                              FadeDelta;
	float                                              DamageIntensity;
	struct FVector                                     AttackerLocation;
	struct FRotator                                    Rotation;
	int                                                AttackerID;
	void*                                              DamageMaterialInst;
};

struct FIndicatorStateDesc
{
	class UMaterialInterface*                          Material;
	void*                                              MaterialInst;
	float                                              TransitionDelta;
};

struct FPrezentedElementCTZ : FPresentedElementA
{
};

struct FAllowedOperationsInContainer
{
	unsigned char                                      ContainerType;
	TArray< unsigned char >                            AllowedOperations;
};

struct FLobbyPresentedElementA : FPresentedElementA
{
	unsigned char                                      MinorType;
	unsigned char                                      HighType;
	unsigned long                                      AlwaysVisible : 1;
	unsigned long                                      DrawOrientated : 1;
	unsigned long                                      ItemSelected : 1;
	unsigned char                                      TrackingState;
	unsigned long                                      bOverridedColor : 1;
	struct FLinearColor                                MarkingTextColor;
	unsigned long                                      bOverrideClanColor : 1;
	struct FLinearColor                                MarkingClanTextColor;
};

struct FChatTab
{
	void*                                              TabBackgroud;
	void*                                              ToggleButton;
	void*                                              InfoLabel;
	void*                                              TabPage;
	void*                                              EmptyLabelPanel;
	unsigned long                                      bActive : 1;
	unsigned long                                      bShowIcon : 1;
	unsigned long                                      bUseAutoClose : 1;
	struct FScriptDelegate                             AddMessages;
};

struct FPlaceablePresentedElementA : FPresentedElementA
{
	float                                              RadarPlain;
	float                                              MarkerMinHeight;
	float                                              LinearAlphaComponent;
};

struct FPlaceablePresentedElementCTZ : FPlaceablePresentedElementA
{
	float                                              Progress;
	struct FLinearColor                                Color;
};

struct FCapturePoint
{
	unsigned char                                      State;
	float                                              CaptureSpeed;
	float                                              Progress;
	int                                                TeamIndex;
	int                                                CaptureTeamIndex;
	unsigned long                                      bLocked : 1;
	void*                                              StateMaterialInst[ 3 ];
};

struct FIconSmile
{
	struct FString                                     Text;
	struct FCanvasIcon                                 Icon;
};

struct FFontSmile
{
	struct FString                                     Text;
	struct FString                                     SmilesText;
};

struct FColorTableItem
{
	struct FString                                     Text;
	struct FLinearColor                                Value;
};

struct FClanLogoNode
{
	float                                              Width;
	float                                              Height;
	int                                                LogoId;
	class UTexture*                                    Texture;
};

struct FSearchFieldsHistory
{
	int                                                CategoryMainIndex;
	int                                                CategorySubIndex;
	int                                                PriceMin;
	int                                                PriceMax;
	int                                                LevelMin;
	int                                                LevelMax;
	int                                                Durability;
	int                                                ClassIndex;
	unsigned long                                      Usable : 1;
	struct FString                                     ItemName;
	struct FString                                     SellerName;
};

struct FCalendarDay
{
	int                                                Day;
	TArray< int >                                      IdsOfEvents;
};

struct FClanHallSize
{
	void*                                              Label_ClanHallSize;
	void*                                              Checkbox_ClanHallSize;
};

struct FAvailableClanHall
{
	int                                                Cost;
	int                                                CostType;
	int                                                LobbyId;
	int                                                TypeId;
};

struct FTournamentTablePair
{
	void*                                              OuterPanel;
	void*                                              Button_TournamentPair;
	void*                                              Button_TournamentPair_Clan1;
	void*                                              Button_TournamentPair_Clan2;
	void*                                              ClanLogo_TournamentPair_Clan2;
	void*                                              ClanLogo_TournamentPair_Clan1;
	void*                                              Label_TournamentPair_Clan2;
	void*                                              Label_TournamentPair_Clan1;
	int                                                ClanId1;
	unsigned char                                      Clan1PrevPairState;
	int                                                ClanId2;
	unsigned char                                      Clan2PrevPairState;
	unsigned char                                      PairState;
};

struct FJobCategory
{
	int                                                Id;
	struct FString                                     Title;
};

struct FJobTab
{
	int                                                Id;
	struct FString                                     Title;
	TArray< struct FJobCategory >                      Levels;
};

struct FMessageProtectionInfo
{
	int                                                Id;
	unsigned long                                      bProtected : 1;
};

struct FTabButtonMV
{
	void*                                              Button;
	int                                                CategorieId;
	int                                                SubCategorieId;
	int                                                TreeId;
};

struct FIconInfo
{
	struct FString                                     TextureName;
	float                                              U;
	float                                              V;
	float                                              du;
	float                                              dv;
};

struct FWeaponData
{
	int                                                ItemId;
	int                                                Attachs[ 7 ];
	int                                                Colors[ 7 ];
	int                                                SlotId[ 7 ];
	int                                                SelIndexes[ 7 ];
	TArray< int >                                      WMKs;
};

struct FRepairableItemInfo
{
	int                                                ItemGlobalId;
	int                                                ItemTemplateId;
	struct FString                                     ItemTemplateName;
	unsigned long                                      IsOnCharacter : 1;
	int                                                CurrentDurability;
	int                                                RepairCost;
};

struct FNodeParagraph
{
	struct FString                                     SubText;
};

struct FSelectionData
{
	int                                                row_start;
	int                                                caret_row_start;
	int                                                row_endl;
	int                                                caret_row_endl;
};

struct FCategorie
{
	struct FString                                     Name;
	int                                                user_data;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif