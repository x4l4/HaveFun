/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USkeletalMesh.h
// Date: 06/16/2011 @ 05:19:39.582
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum SoftBodyBoneType
{
	SOFTBODYBONE_Fixed = 0,
	SOFTBODYBONE_BreakableAttachment = 1,
	SOFTBODYBONE_TwoWayAttachment = 2,
	SOFTBODYBONE_MAX = 3
};

enum ClothBoneType
{
	CLOTHBONE_Fixed = 0,
	CLOTHBONE_BreakableAttachment = 1,
	CLOTHBONE_MAX = 2
};

enum TangentSourceUVSet
{
	TSS_UVSet0 = 0,
	TSS_UVSet1 = 1,
	TSS_UVSet2 = 2,
	TSS_UVSet3 = 3,
	TSS_MAX = 4
};

// (0x3C - 0x314)
class USkeletalMesh : public UObject
{
public:
	struct FBoxSphereBounds                            Bounds;                                      // 0x003C (0x001C)
	TArray< class UMaterialInterface* >                Materials;                                   // 0x0058 (0x000C)
	struct FVector                                     Origin;                                      // 0x0064 (0x000C)
	struct FRotator                                    RotOrigin;                                   // 0x0070 (0x000C)
	TArray< int >                                      RefSkeleton;                                 // 0x007C (0x000C)
	int                                                SkeletalDepth;                               // 0x0088 (0x0004)
	unsigned char                                      SourceUVSetForTangents;                      // 0x008C (0x0001)
	unsigned char                                      unknown_data13[ 63 ];                        // 0x008D (0x003F)
	struct FIndirectArray_Mirror                       LODModels;                                   // 0x00CC (0x000C)
	TArray< struct FMatrix >                           RefBasesInvMatrix;                           // 0x00D8 (0x000C)
	TArray< struct FBoneMirrorInfo >                   SkelMirrorTable;                             // 0x00E4 (0x000C)
	unsigned char                                      SkelMirrorAxis;                              // 0x00F0 (0x0001)
	unsigned char                                      SkelMirrorFlipAxis;                          // 0x00F1 (0x0001)
	TArray< void* >                                    Sockets;                                     // 0x00F4 (0x000C)
	TArray< struct FSkeletalMeshLODInfo >              LODInfo;                                     // 0x0100 (0x000C)
	TArray< struct FName >                             PerPolyCollisionBones;                       // 0x010C (0x000C)
	TArray< struct FName >                             AddToParentPerPolyCollisionBone;             // 0x0118 (0x000C)
	TArray< int >                                      PerPolyBoneKDOPs;                            // 0x0124 (0x000C)
	unsigned long                                      bPerPolyUseSoftWeighting : 1;                // 0x0130 (0x0004) [0x00000001]
	unsigned long                                      bUseSimpleLineCollision : 1;                 // 0x0130 (0x0004) [0x00000002]
	unsigned long                                      bUseSimpleBoxCollision : 1;                  // 0x0130 (0x0004) [0x00000004]
	unsigned long                                      bForceCPUSkinning : 1;                       // 0x0130 (0x0004) [0x00000008]
	unsigned long                                      bUseFullPrecisionUVs : 1;                    // 0x0130 (0x0004) [0x00000010]
	void*                                              FaceFXAsset;                                 // 0x0134 (0x0004)
	void*                                              BoundsPreviewAsset;                          // 0x0138 (0x0004)
	int                                                LODBiasPC;                                   // 0x013C (0x0004)
	int                                                LODBiasPS3;                                  // 0x0140 (0x0004)
	int                                                LODBiasXbox360;                              // 0x0144 (0x0004)
	TArray< struct FPointer >                          ClothMesh;                                   // 0x0148 (0x000C)
	TArray< float >                                    ClothMeshScale;                              // 0x0154 (0x000C)
	TArray< int >                                      ClothToGraphicsVertMap;                      // 0x0160 (0x000C)
	TArray< int >                                      ClothWeldingMap;                             // 0x016C (0x000C)
	int                                                ClothWeldingDomain;                          // 0x0178 (0x0004)
	TArray< int >                                      ClothWeldedIndices;                          // 0x017C (0x000C)
	unsigned long                                      bForceNoWelding : 1;                         // 0x0188 (0x0004) [0x00000001]
	int                                                NumFreeClothVerts;                           // 0x018C (0x0004)
	TArray< int >                                      ClothIndexBuffer;                            // 0x0190 (0x000C)
	TArray< struct FName >                             ClothBones;                                  // 0x019C (0x000C)
	unsigned long                                      bEnableClothBendConstraints : 1;             // 0x01A8 (0x0004) [0x00000001]
	unsigned long                                      bEnableClothDamping : 1;                     // 0x01A8 (0x0004) [0x00000002]
	unsigned long                                      bUseClothCOMDamping : 1;                     // 0x01A8 (0x0004) [0x00000004]
	float                                              ClothStretchStiffness;                       // 0x01AC (0x0004)
	float                                              ClothBendStiffness;                          // 0x01B0 (0x0004)
	float                                              ClothDensity;                                // 0x01B4 (0x0004)
	float                                              ClothThickness;                              // 0x01B8 (0x0004)
	float                                              ClothDamping;                                // 0x01BC (0x0004)
	int                                                ClothIterations;                             // 0x01C0 (0x0004)
	float                                              ClothFriction;                               // 0x01C4 (0x0004)
	float                                              ClothRelativeGridSpacing;                    // 0x01C8 (0x0004)
	float                                              ClothPressure;                               // 0x01CC (0x0004)
	float                                              ClothCollisionResponseCoefficient;           // 0x01D0 (0x0004)
	float                                              ClothAttachmentResponseCoefficient;          // 0x01D4 (0x0004)
	float                                              ClothAttachmentTearFactor;                   // 0x01D8 (0x0004)
	float                                              ClothSleepLinearVelocity;                    // 0x01DC (0x0004)
	unsigned long                                      bEnableClothOrthoBendConstraints : 1;        // 0x01E0 (0x0004) [0x00000001]
	unsigned long                                      bEnableClothSelfCollision : 1;               // 0x01E0 (0x0004) [0x00000002]
	unsigned long                                      bEnableClothPressure : 1;                    // 0x01E0 (0x0004) [0x00000004]
	unsigned long                                      bEnableClothTwoWayCollision : 1;             // 0x01E0 (0x0004) [0x00000008]
	TArray< struct FClothSpecialBoneInfo >             ClothSpecialBones;                           // 0x01E4 (0x000C)
	unsigned long                                      bEnableClothLineChecks : 1;                  // 0x01F0 (0x0004) [0x00000001]
	unsigned long                                      bClothMetal : 1;                             // 0x01F0 (0x0004) [0x00000002]
	float                                              ClothMetalImpulseThreshold;                  // 0x01F4 (0x0004)
	float                                              ClothMetalPenetrationDepth;                  // 0x01F8 (0x0004)
	float                                              ClothMetalMaxDeformationDistance;            // 0x01FC (0x0004)
	unsigned long                                      bEnableClothTearing : 1;                     // 0x0200 (0x0004) [0x00000001]
	float                                              ClothTearFactor;                             // 0x0204 (0x0004)
	int                                                ClothTearReserve;                            // 0x0208 (0x0004)
	struct FMap_Mirror                                 ClothTornTriMap;                             // 0x020C (0x003C)
	TArray< int >                                      SoftBodySurfaceToGraphicsVertMap;            // 0x0248 (0x000C)
	TArray< int >                                      SoftBodySurfaceIndices;                      // 0x0254 (0x000C)
	TArray< struct FVector >                           SoftBodyTetraVertsUnscaled;                  // 0x0260 (0x000C)
	TArray< int >                                      SoftBodyTetraIndices;                        // 0x026C (0x000C)
	TArray< struct FSoftBodyTetraLink >                SoftBodyTetraLinks;                          // 0x0278 (0x000C)
	TArray< struct FPointer >                          CachedSoftBodyMeshes;                        // 0x0284 (0x000C)
	TArray< float >                                    CachedSoftBodyMeshScales;                    // 0x0290 (0x000C)
	TArray< struct FName >                             SoftBodyBones;                               // 0x029C (0x000C)
	TArray< struct FSoftBodySpecialBoneInfo >          SoftBodySpecialBones;                        // 0x02A8 (0x000C)
	float                                              SoftBodyVolumeStiffness;                     // 0x02B4 (0x0004)
	float                                              SoftBodyStretchingStiffness;                 // 0x02B8 (0x0004)
	float                                              SoftBodyDensity;                             // 0x02BC (0x0004)
	float                                              SoftBodyParticleRadius;                      // 0x02C0 (0x0004)
	float                                              SoftBodyDamping;                             // 0x02C4 (0x0004)
	int                                                SoftBodySolverIterations;                    // 0x02C8 (0x0004)
	float                                              SoftBodyFriction;                            // 0x02CC (0x0004)
	float                                              SoftBodyRelativeGridSpacing;                 // 0x02D0 (0x0004)
	float                                              SoftBodySleepLinearVelocity;                 // 0x02D4 (0x0004)
	unsigned long                                      bEnableSoftBodySelfCollision : 1;            // 0x02D8 (0x0004) [0x00000001]
	float                                              SoftBodyAttachmentResponse;                  // 0x02DC (0x0004)
	float                                              SoftBodyCollisionResponse;                   // 0x02E0 (0x0004)
	float                                              SoftBodyDetailLevel;                         // 0x02E4 (0x0004)
	int                                                SoftBodySubdivisionLevel;                    // 0x02E8 (0x0004)
	unsigned long                                      bSoftBodyIsoSurface : 1;                     // 0x02EC (0x0004) [0x00000001]
	unsigned long                                      bEnableSoftBodyDamping : 1;                  // 0x02EC (0x0004) [0x00000002]
	unsigned long                                      bUseSoftBodyCOMDamping : 1;                  // 0x02EC (0x0004) [0x00000004]
	float                                              SoftBodyAttachmentThreshold;                 // 0x02F0 (0x0004)
	unsigned long                                      bEnableSoftBodyTwoWayCollision : 1;          // 0x02F4 (0x0004) [0x00000001]
	float                                              SoftBodyAttachmentTearFactor;                // 0x02F8 (0x0004)
	unsigned long                                      bEnableSoftBodyLineChecks : 1;               // 0x02FC (0x0004) [0x00000001]
	int                                                ReleaseResourcesFence;                       // 0x0300 (0x0004)
	struct FGuid                                       SkelMeshGUID;                                // 0x0304 (0x0010)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SkeletalMesh" );

		return ClassPointer;
	};

public:
};

UClass* USkeletalMesh::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif