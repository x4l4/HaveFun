/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: EngineStructs.h
// Date: 06/16/2011 @ 05:19:42.166
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct FStaticMeshLODElement
{
	unsigned long                                      bEnableCollision : 1;
	unsigned long                                      bEnableShadowCasting : 1;
	class UMaterialInterface*                          Material;
};

struct FStaticMeshLODInfo
{
	TArray< struct FStaticMeshLODElement >             Elements;
};

struct FTimerData
{
	unsigned long                                      bLoop : 1;
	struct FName                                       FuncName;
	float                                              Rate;
	float                                              Count;
	class UObject*                                     TimerObj;
	unsigned long                                      bPaused : 1;
};

struct FTraceHitInfo
{
	class UMaterial*                                   Material;
	void*                                              PhysMaterial;
	int                                                Item;
	int                                                LevelIndex;
	struct FName                                       BoneName;
	class UPrimitiveComponent*                         HitComponent;
};

struct FAdditionalHitInfo
{
	int                                                HitEffectType;
	unsigned long                                      bUseHitAnimation : 1;
	int                                                ShotFlags;
};

struct FImpactInfo
{
	class AActor*                                      HitActor;
	struct FVector                                     HitLocation;
	struct FVector                                     HitNormal;
	struct FVector                                     RayDir;
	struct FVector                                     StartTrace;
	float                                              DamageScale;
	struct FAdditionalHitInfo                          AddInfo;
	struct FTraceHitInfo                               HitInfo;
};

struct FAnimSlotInfo
{
	struct FName                                       SlotName;
	TArray< float >                                    ChannelWeights;
};

struct FAnimSlotDesc
{
	struct FName                                       SlotName;
	int                                                NumChannels;
};

struct FRigidBodyState
{
	struct FVector                                     Position;
	struct FQuat                                       Quaternion;
	struct FVector                                     LinVel;
	struct FVector                                     AngVel;
	unsigned char                                      bNewData;
};

struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;
	struct FVector                                     ContactNormal;
	float                                              ContactPenetration;
	struct FVector                                     ContactVelocity[ 2 ];
	void*                                              PhysMaterial[ 2 ];
};

struct FCollisionImpactData
{
	TArray< struct FRigidBodyContactInfo >             ContactInfos;
	struct FVector                                     TotalNormalForceVector;
	struct FVector                                     TotalFrictionForceVector;
};

struct FReplicatedHitImpulse
{
	struct FVector                                     AppliedImpulse;
	struct FVector                                     HitLocation;
	struct FName                                       BoneName;
	unsigned char                                      ImpulseCount;
	unsigned long                                      bRadialImpulse : 1;
};

struct FPhysEffectInfo
{
	float                                              Threshold;
	float                                              ReFireDelay;
	void*                                              Effect;
	void*                                              Sound;
};

struct FActorReference
{
	class AActor*                                      Actor;
	struct FGuid                                       Guid;
};

struct FNavReference
{
	class ANavigationPoint*                            Nav;
	struct FGuid                                       Guid;
};

struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;
	unsigned long                                      bHasImpulse : 1;
	int                                                QueuedActivations;
	unsigned long                                      bDisabled : 1;
	unsigned long                                      bDisabledPIE : 1;
	class USequenceOp*                                 LinkedOp;
	int                                                DrawY;
	unsigned long                                      bHidden : 1;
	float                                              ActivateDelay;
};

struct FBoneAtom
{
	struct FQuat                                       Rotation;
	struct FVector                                     Translation;
	struct FVector                                     Scale3D;
};

struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;
	unsigned long                                      bTranslucent : 1;
	unsigned long                                      bDistortion : 1;
	unsigned long                                      bOneLayerDistortionRelevance : 1;
	unsigned long                                      bLit : 1;
	unsigned long                                      bUsesSceneColor : 1;
};

struct FBeastPrimPropertiesContainer
{
	unsigned long                                      Export : 1;
	unsigned long                                      PrimaryVisibility : 1;
	unsigned long                                      ReceiveShadows : 1;
	unsigned long                                      VisibleInReflections : 1;
	unsigned long                                      VisibleInRefractions : 1;
	unsigned long                                      VisibleInGather : 1;
	unsigned long                                      CastGI : 1;
	unsigned long                                      ReceiveGI : 1;
	unsigned long                                      DoubleSided : 1;
	unsigned long                                      FrontFacing : 1;
};

struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;
	unsigned long                                      Nothing : 1;
	unsigned long                                      Pawn : 1;
	unsigned long                                      Vehicle : 1;
	unsigned long                                      Water : 1;
	unsigned long                                      GameplayPhysics : 1;
	unsigned long                                      EffectPhysics : 1;
	unsigned long                                      Untitled1 : 1;
	unsigned long                                      Untitled2 : 1;
	unsigned long                                      Untitled3 : 1;
	unsigned long                                      Untitled4 : 1;
	unsigned long                                      Cloth : 1;
	unsigned long                                      FluidDrain : 1;
	unsigned long                                      SoftBody : 1;
	unsigned long                                      FracturedMeshPart : 1;
	unsigned long                                      BlockingVolume : 1;
	unsigned long                                      DeadPawn : 1;
};

struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;
	unsigned long                                      BSP : 1;
	unsigned long                                      Static : 1;
	unsigned long                                      Dynamic : 1;
	unsigned long                                      CompositeDynamic : 1;
	unsigned long                                      Skybox : 1;
	unsigned long                                      Unnamed1 : 1;
	unsigned long                                      Unnamed2 : 1;
	unsigned long                                      Unnamed3 : 1;
	unsigned long                                      Unnamed4 : 1;
	unsigned long                                      Unnamed5 : 1;
	unsigned long                                      Unnamed6 : 1;
	unsigned long                                      Cinematic7 : 1;
	unsigned long                                      Cinematic8 : 1;
	unsigned long                                      Cinematic9 : 1;
	unsigned long                                      Cinematic10 : 1;
	unsigned long                                      Cinematic11 : 1;
	unsigned long                                      Cinematic12 : 1;
	unsigned long                                      Cinematic13 : 1;
	unsigned long                                      Cinematic14 : 1;
	unsigned long                                      Cinematic15 : 1;
	unsigned long                                      Cinematic16 : 1;
	unsigned long                                      Gameplay17 : 1;
	unsigned long                                      Gameplay18 : 1;
	unsigned long                                      Gameplay19 : 1;
	unsigned long                                      Gameplay20 : 1;
	unsigned long                                      Crowd : 1;
};

struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;
	int                                                SizeX;
	int                                                SizeY;
};

struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;
	struct FPointer                                    Next;
	struct FPointer                                    PrevLink;
};

struct FKeyValuePair
{
	struct FString                                     Key;
	struct FString                                     Value;
};

struct FPlayerResponseLine
{
	int                                                PlayerNum;
	int                                                PlayerID;
	struct FString                                     PlayerName;
	int                                                Ping;
	int                                                Score;
	int                                                StatsID;
	TArray< struct FKeyValuePair >                     PlayerInfo;
};

struct FServerResponseLine
{
	int                                                ServerID;
	struct FString                                     IP;
	int                                                Port;
	int                                                QueryPort;
	struct FString                                     ServerName;
	struct FString                                     MapName;
	struct FString                                     GameType;
	int                                                CurrentPlayers;
	int                                                MaxPlayers;
	int                                                Ping;
	TArray< struct FKeyValuePair >                     ServerInfo;
	TArray< struct FPlayerResponseLine >               PlayerInfo;
};

struct FUniqueNetId
{
	struct FQWord                                      Uid;
};

struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;
	unsigned long                                      bIsFriend : 1;
};

struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;
	struct FQWord                                      SessionId;
	struct FString                                     NickName;
	struct FString                                     PresenceInfo;
	unsigned char                                      FriendState;
	unsigned long                                      bIsOnline : 1;
	unsigned long                                      bIsPlaying : 1;
	unsigned long                                      bIsPlayingThisGame : 1;
	unsigned long                                      bIsJoinable : 1;
	unsigned long                                      bHasVoiceSupport : 1;
	unsigned long                                      bHaveInvited : 1;
	unsigned long                                      bHasInvitedYou : 1;
};

struct FOnlineContent
{
	int                                                UserIndex;
	struct FString                                     FriendlyName;
	struct FString                                     ContentPath;
	TArray< struct FString >                           ContentPackages;
	TArray< struct FString >                           ContentFiles;
};

struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;
};

struct FNamedInterface
{
	struct FName                                       InterfaceName;
	class UObject*                                     InterfaceObject;
};

struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;
	struct FString                                     InterfaceClassName;
};

struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;
	int                                                Trustworthiness;
};

struct FSpeechRecognizedWord
{
	int                                                WordId;
	struct FString                                     WordText;
	float                                              Confidence;
};

struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;
	int                                                TeamID;
	int                                                Score;
};

struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;
	unsigned long                                      bHasNetworkedVoice : 1;
	unsigned long                                      bIsRecognizingSpeech : 1;
	unsigned long                                      bWasTalking : 1;
	unsigned long                                      bIsRegistered : 1;
};

struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;
	unsigned long                                      bWasTalking : 1;
	unsigned long                                      bIsRegistered : 1;
};

struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;
	struct FString                                     SendingPlayerNick;
	unsigned long                                      bIsFriendInvite : 1;
	unsigned long                                      bIsGameInvite : 1;
	unsigned long                                      bWasAccepted : 1;
	unsigned long                                      bWasDenied : 1;
	struct FString                                     Message;
};

struct FTitleFile
{
	struct FString                                     Filename;
	unsigned char                                      AsyncState;
	TArray< unsigned char >                            Data;
};

struct FCommunityContentFile
{
	int                                                ContentId;
	int                                                FileId;
	int                                                ContentType;
	int                                                FileSize;
	struct FUniqueNetId                                Owner;
	int                                                DownloadCount;
	float                                              AverageRating;
	int                                                RatingCount;
	int                                                LastRatingGiven;
	struct FString                                     LocalFilePath;
};

struct FLocalizedStringSetting
{
	int                                                Id;
	int                                                ValueIndex;
	unsigned char                                      AdvertisementType;
};

struct FSettingsData
{
	unsigned char                                      Type;
	int                                                Value1;
	struct FPointer                                    Value2;
};

struct FSettingsProperty
{
	int                                                PropertyId;
	struct FSettingsData                               Data;
	unsigned char                                      AdvertisementType;
};

struct FCommunityContentMetadata
{
	int                                                ContentType;
	TArray< struct FSettingsProperty >                 MetadataItems;
};

struct FNamedSession
{
	struct FName                                       SessionName;
	struct FPointer                                    SessionInfo;
	void*                                              GameSettings;
	TArray< struct FOnlineRegistrant >                 Registrants;
	TArray< struct FOnlineArbitrationRegistrant >      ArbitrationRegistrants;
};

struct FVisiblePortalInfo
{
	class AActor*                                      Source;
	class AActor*                                      Destination;
};

struct FBasedPosition
{
	class AActor*                                      Base;
	struct FVector                                     Position;
	struct FVector                                     CachedBaseLocation;
	struct FRotator                                    CachedBaseRotation;
	struct FVector                                     CachedTransPosition;
};

struct FInputEntry
{
	unsigned char                                      Type;
	float                                              Value;
	float                                              TimeDelta;
	unsigned char                                      Action;
};

struct FInputMatchRequest
{
	TArray< struct FInputEntry >                       Inputs;
	class AActor*                                      MatchActor;
	struct FName                                       MatchFuncName;
	struct FName                                       FailedFuncName;
	struct FName                                       RequestName;
	int                                                MatchIdx;
	float                                              LastMatchTime;
};

struct FDebugTextInfo
{
	class AActor*                                      SrcActor;
	struct FVector                                     SrcActorOffset;
	struct FVector                                     SrcActorDesiredOffset;
	struct FString                                     DebugText;
	float                                              TimeRemaining;
	float                                              Duration;
	struct FColor                                      TextColor;
};

struct FClientAdjustment
{
	float                                              TimeStamp;
	unsigned char                                      newPhysics;
	struct FVector                                     NewLoc;
	struct FVector                                     NewVel;
	class AActor*                                      NewBase;
	struct FVector                                     NewFloor;
	unsigned char                                      bAckGoodMove;
};

struct FViewTargetTransitionParams
{
	float                                              BlendTime;
	unsigned char                                      BlendFunction;
	float                                              BlendExp;
};

struct FTViewTarget
{
	class AActor*                                      Target;
	class AController*                                 Controller;
	struct FTPOV                                       POV;
	float                                              AspectRatio;
	class APlayerReplicationInfo*                      PRI;
};

struct FPostProcessSettings
{
	unsigned long                                      bEnableBloom : 1;
	unsigned long                                      bEnableDOF : 1;
	unsigned long                                      bEnableMotionBlur : 1;
	unsigned long                                      bEnableSceneEffect : 1;
	unsigned long                                      bAllowAmbientOcclusion : 1;
	float                                              Bloom_Scale;
	float                                              Bloom_InterpolationDuration;
	float                                              DOF_FalloffExponent;
	float                                              DOF_BlurKernelSize;
	float                                              DOF_MaxNearBlurAmount;
	float                                              DOF_MaxFarBlurAmount;
	struct FColor                                      DOF_ModulateBlurColor;
	unsigned char                                      DOF_FocusType;
	float                                              DOF_FocusInnerRadius;
	float                                              DOF_FocusDistance;
	struct FVector                                     DOF_FocusPosition;
	float                                              DOF_InterpolationDuration;
	float                                              MotionBlur_MaxVelocity;
	float                                              MotionBlur_Amount;
	unsigned long                                      MotionBlur_FullMotionBlur : 1;
	float                                              MotionBlur_CameraRotationThreshold;
	float                                              MotionBlur_CameraTranslationThreshold;
	float                                              MotionBlur_InterpolationDuration;
	float                                              Scene_Desaturation;
	struct FVector                                     Scene_HighLights;
	struct FVector                                     Scene_MidTones;
	struct FVector                                     Scene_Shadows;
	float                                              Scene_InterpolationDuration;
};

struct FTCameraCache
{
	float                                              TimeStamp;
	struct FTPOV                                       POV;
};

struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;
	int                                                NumMapListCyclesDone;
};

struct FOnlineGameSearchResult
{
	void*                                              GameSettings;
	struct FPointer                                    PlatformData;
};

struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;
	struct FString                                     ObjectPropertyValue;
};

struct FOverrideSkill
{
	int                                                LeaderboardId;
	TArray< struct FUniqueNetId >                      Players;
	TArray< struct FDouble >                           Mus;
	TArray< struct FDouble >                           Sigmas;
};

struct FOnlineGameSearchParameter
{
	int                                                EntryId;
	struct FName                                       ObjectPropertyName;
	unsigned char                                      EntryType;
	unsigned char                                      ComparisonType;
};

struct FOnlineGameSearchSortClause
{
	int                                                EntryId;
	struct FName                                       ObjectPropertyName;
	unsigned char                                      EntryType;
	unsigned char                                      SortType;
};

struct FOnlineGameSearchORClause
{
	TArray< struct FOnlineGameSearchParameter >        OrParams;
};

struct FOnlineGameSearchQuery
{
	TArray< struct FOnlineGameSearchORClause >         OrClauses;
	TArray< struct FOnlineGameSearchSortClause >       SortClauses;
};

struct FAudioComponentParam
{
	struct FName                                       ParamName;
	float                                              FloatParam;
	void*                                              WaveParam;
};

struct FSoundNodeEditorData
{
	int                                                NodePosX;
	int                                                NodePosY;
};

struct FAmbientSoundSlot
{
	void*                                              Wave;
	float                                              PitchScale;
	float                                              VolumeScale;
	float                                              Weight;
};

struct FAnimNotifyEvent
{
	float                                              Time;
	void*                                              Notify;
	struct FName                                       Comment;
};

struct FRawAnimSequenceTrack
{
	TArray< struct FVector >                           PosKeys;
	TArray< struct FQuat >                             RotKeys;
	TArray< float >                                    KeyTimes;
};

struct FTranslationTrack
{
	TArray< struct FVector >                           PosKeys;
	TArray< float >                                    Times;
};

struct FRotationTrack
{
	TArray< struct FQuat >                             RotKeys;
	TArray< float >                                    Times;
};

struct FCompressedTrack
{
	TArray< unsigned char >                            ByteStream;
	TArray< float >                                    Times;
	float                                              Mins[ 3 ];
	float                                              Ranges[ 3 ];
};

struct FAnimBlendChild
{
	struct FName                                       Name;
	void*                                              Anim;
	float                                              Weight;
	float                                              TotalWeight;
	float                                              BlendWeight;
	int                                                bHasRootMotion;
	struct FBoneAtom                                   RootMotion;
	unsigned long                                      bMirrorSkeleton : 1;
	unsigned long                                      bIsAdditive : 1;
	int                                                DrawY;
};

struct FAimTransform
{
	struct FQuat                                       Quaternion;
	struct FVector                                     Translation;
};

struct FAimComponent
{
	struct FName                                       BoneName;
	struct FAimTransform                               LU;
	struct FAimTransform                               LC;
	struct FAimTransform                               LD;
	struct FAimTransform                               CU;
	struct FAimTransform                               CC;
	struct FAimTransform                               CD;
	struct FAimTransform                               RU;
	struct FAimTransform                               RC;
	struct FAimTransform                               RD;
};

struct FAimOffsetProfile
{
	struct FName                                       ProfileName;
	struct FVector2D                                   HorizontalRange;
	struct FVector2D                                   VerticalRange;
	TArray< struct FAimComponent >                     AimComponents;
	struct FName                                       AnimName_LU;
	struct FName                                       AnimName_LC;
	struct FName                                       AnimName_LD;
	struct FName                                       AnimName_CU;
	struct FName                                       AnimName_CC;
	struct FName                                       AnimName_CD;
	struct FName                                       AnimName_RU;
	struct FName                                       AnimName_RC;
	struct FName                                       AnimName_RD;
};

struct FBoneTransform
{
	struct FRotator                                    Rotation;
	struct FQuat                                       Quaternion;
	struct FVector                                     Translation;
	struct FVector                                     Scale3D;
};

struct FBoneComponent
{
	struct FName                                       BoneName;
	TArray< struct FBoneTransform >                    BoneTransformPresets;
};

struct FCharConstProfile
{
	struct FName                                       ProfileName;
	TArray< struct FBoneComponent >                    BoneComponents;
};

struct FChildBoneBlendInfo
{
	TArray< float >                                    TargetPerBoneWeight;
	struct FName                                       InitTargetStartBone;
	float                                              InitPerBoneIncrease;
	struct FName                                       OldStartBone;
	float                                              OldBoneIncrease;
	TArray< unsigned char >                            TargetRequiredBones;
};

struct FRandomAnimInfo
{
	float                                              Chance;
	unsigned char                                      LoopCountMin;
	unsigned char                                      LoopCountMax;
	float                                              BlendInTime;
	struct FVector2D                                   PlayRateRange;
	unsigned long                                      bStillFrame : 1;
	unsigned char                                      LoopCount;
};

struct FAnimInfo
{
	struct FName                                       AnimSeqName;
	void*                                              AnimSeq;
	int                                                AnimLinkupIndex;
};

struct FAnimBlendInfo
{
	struct FName                                       AnimName;
	struct FAnimInfo                                   AnimInfo;
	float                                              Weight;
};

struct FSynchGroup
{
	TArray< void* >                                    SeqNodes;
	void*                                              MasterNode;
	struct FName                                       GroupName;
	unsigned long                                      bFireSlaveNotifies : 1;
	float                                              RateScale;
};

struct FAnimSetMeshLinkup
{
	struct FGuid                                       SkelMeshLinkupGUID;
	TArray< int >                                      BoneToTrackTable;
	TArray< unsigned char >                            BoneUseAnimTranslation;
	TArray< unsigned char >                            ForceUseMeshTranslation;
};

struct FAnimGroup
{
	TArray< void* >                                    SeqNodes;
	void*                                              SynchMaster;
	void*                                              NotifyMaster;
	struct FName                                       GroupName;
	float                                              RateScale;
	float                                              SynchPctPosition;
};

struct FSkelControlListHead
{
	struct FName                                       BoneName;
	void*                                              ControlHead;
	int                                                DrawY;
};

struct FListener
{
	void*                                              PortalVolume;
	struct FVector                                     Location;
	struct FVector                                     Up;
	struct FVector                                     Right;
	struct FVector                                     Front;
};

struct FSoundGroupProperties
{
	float                                              Volume;
	float                                              Pitch;
	float                                              VoiceCenterChannelVolume;
	float                                              VoiceRadioVolume;
	unsigned long                                      bApplyEffects : 1;
	unsigned long                                      bAlwaysPlay : 1;
	unsigned long                                      bIsUISound : 1;
	unsigned long                                      bIsMusic : 1;
	unsigned long                                      bNoReverb : 1;
	unsigned long                                      bBleedStereo : 1;
};

struct FSoundGroup
{
	struct FSoundGroupProperties                       Properties;
	struct FName                                       GroupName;
	TArray< struct FName >                             ChildGroupNames;
};

struct FAudioGroupInfo
{
	int                                                NumResident;
	int                                                SizeResident;
	int                                                NumRealTime;
	int                                                SizeRealTime;
};

struct FDebugNavCost
{
	struct FString                                     Desc;
	int                                                Cost;
};

struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;
	struct FVector                                     BoxCenter;
	struct FPointer                                    OctreeNode;
	class UObject*                                     Owner;
	unsigned char                                      OwnerType;
};

struct FBeastPropertiesContainer
{
	unsigned long                                      Export : 1;
	float                                              LightSourceRadius;
	int                                                NumShadowSamples;
	int                                                MinNumShadowSamples;
	float                                              DirectLightScale;
	float                                              IndirectLightScale;
	unsigned long                                      ForceAffectLightMaps : 1;
	int                                                SpecularPhotons;
	float                                              PhotonIntensity;
};

struct FKSphereElem
{
	struct FMatrix                                     TM;
	float                                              Radius;
	unsigned long                                      bNoRBCollision : 1;
	unsigned long                                      bPerPolyShape : 1;
};

struct FKBoxElem
{
	struct FMatrix                                     TM;
	float                                              X;
	float                                              Y;
	float                                              Z;
	unsigned long                                      bNoRBCollision : 1;
	unsigned long                                      bPerPolyShape : 1;
};

struct FKSphylElem
{
	struct FMatrix                                     TM;
	float                                              Radius;
	float                                              Length;
	unsigned long                                      bNoRBCollision : 1;
	unsigned long                                      bPerPolyShape : 1;
};

struct FKConvexElem
{
	TArray< struct FVector >                           VertexData;
	TArray< struct FPlane >                            PermutedVertexData;
	TArray< int >                                      FaceTriData;
	TArray< struct FVector >                           EdgeDirections;
	TArray< struct FVector >                           FaceNormalDirections;
	TArray< struct FPlane >                            FacePlaneData;
	struct FBox                                        ElemBox;
};

struct FKAggregateGeom
{
	TArray< struct FKSphereElem >                      SphereElems;
	TArray< struct FKBoxElem >                         BoxElems;
	TArray< struct FKSphylElem >                       SphylElems;
	TArray< struct FKConvexElem >                      ConvexElems;
	struct FPointer                                    RenderInfo;
	unsigned long                                      bSkipCloseAndParallelChecks : 1;
};

struct FKCachedConvexData_Mirror
{
	TArray< int >                                      CachedConvexElements;
};

struct FGeomSelection
{
	int                                                Type;
	int                                                Index;
	int                                                SelectionIndex;
	float                                              SelStrength;
};

struct FStaticMeshComponentLODInfo
{
	TArray< void* >                                    ShadowMaps;
	TArray< class UObject* >                           ShadowVertexBuffers;
	struct FPointer                                    LightMap;
};

struct FFontCharacter
{
	int                                                StartU;
	int                                                StartV;
	int                                                USize;
	int                                                VSize;
	unsigned char                                      TextureIndex;
	int                                                VerticalOffset;
};

struct FFontImportOptionsData
{
	struct FString                                     FontName;
	float                                              Height;
	unsigned long                                      bEnableAntialiasing : 1;
	unsigned long                                      bEnableBold : 1;
	unsigned long                                      bEnableItalic : 1;
	unsigned long                                      bEnableUnderline : 1;
	unsigned char                                      CharacterSet;
	struct FString                                     Chars;
	struct FString                                     UnicodeRange;
	struct FString                                     CharsFilePath;
	struct FString                                     CharsFileWildcard;
	unsigned long                                      bCreatePrintableOnly : 1;
	unsigned long                                      bIncludeASCIIRange : 1;
	struct FLinearColor                                ForegroundColor;
	unsigned long                                      bEnableDropShadow : 1;
	int                                                TexturePageWidth;
	int                                                TexturePageMaxHeight;
	int                                                XPadding;
	int                                                YPadding;
	int                                                ExtendBoxTop;
	int                                                ExtendBoxBottom;
	int                                                ExtendBoxRight;
	int                                                ExtendBoxLeft;
	unsigned long                                      bEnableLegacyMode : 1;
	int                                                Kerning;
};

struct FCanvasIcon
{
	class UTexture*                                    Texture;
	float                                              U;
	float                                              V;
	float                                              UL;
	float                                              VL;
};

struct FWIDGET_ID : FGuid
{
};

struct FSTYLE_ID : FGuid
{
};

struct FUIRangeData
{
	float                                              CurrentValue;
	float                                              MinValue;
	float                                              MaxValue;
	float                                              NudgeValue;
	unsigned long                                      bIntRange : 1;
};

struct FTextureCoordinates
{
	float                                              U;
	float                                              V;
	float                                              UL;
	float                                              VL;
};

struct FUIProviderScriptFieldValue
{
	struct FName                                       PropertyTag;
	unsigned char                                      PropertyType;
	struct FString                                     StringValue;
	class USurface*                                    ImageValue;
	TArray< int >                                      ArrayValue;
	struct FUIRangeData                                RangeValue;
	struct FUniqueNetId                                NetIdValue;
	struct FTextureCoordinates                         AtlasCoordinates;
};

struct FUIProviderFieldValue : FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;
};

struct FUIStyleReference
{
	struct FName                                       DefaultStyleTag;
	class UClass*                                      RequiredStyleClass;
	struct FSTYLE_ID                                   AssignedStyleID;
	void*                                              ResolvedStyle;
};

struct FUIScreenValue
{
	float                                              Value;
	unsigned char                                      ScaleType;
	unsigned char                                      Orientation;
};

struct FUIScreenValue_Extent
{
	float                                              Value;
	unsigned char                                      ScaleType;
	unsigned char                                      Orientation;
};

struct FUIScreenValue_Position
{
	float                                              Value[ 2 ];
	unsigned char                                      ScaleType[ 2 ];
};

struct FUIScreenValue_Bounds
{
	float                                              Value[ 4 ];
	unsigned char                                      ScaleType[ 4 ];
	unsigned char                                      bInvalidated[ 4 ];
	unsigned char                                      AspectRatioMode;
};

struct FUIAnchorPosition : FUIScreenValue_Position
{
	float                                              ZDepth;
};

struct FScreenPositionRange : FUIScreenValue_Position
{
};

struct FUIScreenValue_DockPadding
{
	float                                              PaddingValue[ 4 ];
	unsigned char                                      PaddingScaleType[ 4 ];
};

struct FUIScreenValue_AutoSizeRegion
{
	float                                              Value[ 2 ];
	unsigned char                                      EvalType[ 2 ];
};

struct FAutoSizePadding : FUIScreenValue_AutoSizeRegion
{
};

struct FAutoSizeData
{
	struct FUIScreenValue_AutoSizeRegion               Extent;
	struct FAutoSizePadding                            Padding;
	unsigned long                                      bAutoSizeEnabled : 1;
};

struct FUIRenderingSubregion
{
	struct FUIScreenValue_Extent                       ClampRegionSize;
	struct FUIScreenValue_Extent                       ClampRegionOffset;
	unsigned char                                      ClampRegionAlignment;
	unsigned long                                      bSubregionEnabled : 1;
};

struct FInputEventSubscription
{
	struct FName                                       KeyName;
	TArray< void* >                                    Subscribers;
};

struct FDefaultEventSpecification
{
	void*                                              EventTemplate;
	class UClass*                                      EventState;
};

struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;
	int                                                InputLinkIdx;
};

struct FSeqOpOutputLink
{
	TArray< struct FSeqOpOutputInputLink >             Links;
	struct FString                                     LinkDesc;
	unsigned long                                      bHasImpulse : 1;
	unsigned long                                      bDisabled : 1;
	unsigned long                                      bDisabledPIE : 1;
	class USequenceOp*                                 LinkedOp;
	float                                              ActivateDelay;
	int                                                DrawY;
	unsigned long                                      bHidden : 1;
};

struct FSeqVarLink
{
	class UClass*                                      ExpectedType;
	TArray< void* >                                    LinkedVariables;
	struct FString                                     LinkDesc;
	struct FName                                       LinkVar;
	struct FName                                       PropertyName;
	unsigned long                                      bWriteable : 1;
	unsigned long                                      bModifiesLinkedObject : 1;
	unsigned long                                      bHidden : 1;
	int                                                MinVars;
	int                                                MaxVars;
	int                                                DrawX;
	void*                                              CachedProperty;
};

struct FSeqEventLink
{
	class UClass*                                      ExpectedType;
	TArray< class USequenceEvent* >                    LinkedEvents;
	struct FString                                     LinkDesc;
	int                                                DrawX;
	unsigned long                                      bHidden : 1;
};

struct FInputKeyAction
{
	struct FName                                       InputKeyName;
	unsigned char                                      InputKeyState;
	TArray< struct FSeqOpOutputInputLink >             TriggeredOps;
	TArray< class USequenceOp* >                       ActionsToExecute;
};

struct FStateInputKeyAction : FInputKeyAction
{
	class UClass*                                      Scope;
};

struct FPlayerInteractionData
{
	void*                                              FocusedControl;
	void*                                              LastFocusedControl;
};

struct FUIFocusPropagationData
{
	void*                                              FirstFocusTarget;
	void*                                              LastFocusTarget;
	void*                                              NextFocusTarget;
	void*                                              PrevFocusTarget;
	unsigned long                                      bPendingReceiveFocus : 1;
};

struct FUINavigationData
{
	void*                                              NavigationTarget[ 4 ];
	void*                                              ForcedNavigationTarget[ 4 ];
	unsigned char                                      bNullOverride[ 4 ];
};

struct FUIDockingSet
{
	void*                                              OwnerWidget;
	void*                                              TargetWidget[ 4 ];
	struct FUIScreenValue_DockPadding                  DockPadding;
	unsigned long                                      bLockWidthWhenDocked : 1;
	unsigned long                                      bLockHeightWhenDocked : 1;
	unsigned char                                      TargetFace[ 4 ];
	unsigned char                                      bResolved[ 4 ];
	unsigned char                                      bLinking[ 4 ];
};

struct FUIDockingNode
{
	void*                                              Widget;
	unsigned char                                      Face;
};

struct FUIRotation
{
	struct FRotator                                    Rotation;
	struct FMatrix                                     TransformMatrix;
	struct FUIAnchorPosition                           AnchorPosition;
	unsigned char                                      AnchorType;
};

struct FUIDataStoreBinding
{
	unsigned char                                      RequiredFieldType;
	struct FString                                     MarkupString;
	int                                                BindingIndex;
	struct FName                                       DataStoreName;
	struct FName                                       DataStoreField;
	void*                                              ResolvedDataStore;
};

struct FUIStyleSubscriberReference
{
	struct FName                                       SubscriberId;
};

struct FStyleReferenceId
{
	struct FName                                       StyleReferenceTag;
	void*                                              StyleProperty;
};

struct FUITextAttributes
{
	unsigned long                                      Bold : 1;
	unsigned long                                      Italic : 1;
	unsigned long                                      Underline : 1;
	unsigned long                                      Shadow : 1;
	unsigned long                                      Strikethrough : 1;
};

struct FUIImageAdjustmentData
{
	struct FUIScreenValue_Extent                       ProtectedRegion[ 2 ];
	unsigned char                                      AdjustmentType;
	unsigned char                                      Alignment;
};

struct FUIStringCaretParameters
{
	unsigned long                                      bDisplayCaret : 1;
	unsigned char                                      CaretType;
	float                                              CaretWidth;
	struct FName                                       CaretStyle;
	int                                                CaretPosition;
	class UMaterialInterface*                          CaretMaterial;
};

struct FRenderParameters
{
	float                                              DrawX;
	float                                              DrawY;
	float                                              DrawXL;
	float                                              DrawYL;
	struct FVector2D                                   Scaling;
	class UFont*                                       DrawFont;
	unsigned char                                      TextAlignment[ 2 ];
	struct FVector2D                                   ImageExtent;
	struct FTextureCoordinates                         DrawCoords;
	struct FVector2D                                   SpacingAdjust;
	float                                              ViewportHeight;
};

struct FTextAutoScaleValue
{
	float                                              MinScale;
	unsigned char                                      AutoScaleMode;
};

struct FUIStyleOverride
{
	struct FLinearColor                                DrawColor;
	float                                              Opacity;
	float                                              Padding[ 2 ];
	unsigned long                                      bOverrideDrawColor : 1;
	unsigned long                                      bOverrideOpacity : 1;
	unsigned long                                      bOverridePadding : 1;
};

struct FUITextStyleOverride : FUIStyleOverride
{
	class UFont*                                       DrawFont;
	struct FUITextAttributes                           TextAttributes;
	unsigned char                                      TextAlignment[ 2 ];
	unsigned char                                      ClipMode;
	unsigned char                                      ClipAlignment;
	struct FTextAutoScaleValue                         AutoScaling;
	float                                              DrawScale[ 2 ];
	float                                              SpacingAdjust[ 2 ];
	unsigned long                                      bOverrideDrawFont : 1;
	unsigned long                                      bOverrideAttributes : 1;
	unsigned long                                      bOverrideAlignment : 1;
	unsigned long                                      bOverrideClipMode : 1;
	unsigned long                                      bOverrideClipAlignment : 1;
	unsigned long                                      bOverrideAutoScale : 1;
	unsigned long                                      bOverrideScale : 1;
	unsigned long                                      bOverrideSpacingAdjust : 1;
};

struct FUIImageStyleOverride : FUIStyleOverride
{
	struct FTextureCoordinates                         Coordinates;
	struct FUIImageAdjustmentData                      Formatting[ 2 ];
	unsigned long                                      bOverrideCoordinates : 1;
	unsigned long                                      bOverrideFormatting : 1;
};

struct FUICombinedStyleData
{
	struct FLinearColor                                TextColor;
	struct FLinearColor                                ImageColor;
	float                                              TextPadding[ 2 ];
	float                                              ImagePadding[ 2 ];
	class UFont*                                       DrawFont;
	class USurface*                                    FallbackImage;
	struct FTextureCoordinates                         AtlasCoords;
	struct FUITextAttributes                           TextAttributes;
	unsigned char                                      TextAlignment[ 2 ];
	unsigned char                                      TextClipMode;
	unsigned char                                      TextClipAlignment;
	struct FUIImageAdjustmentData                      AdjustmentType[ 2 ];
	struct FTextAutoScaleValue                         TextAutoScaling;
	struct FVector2D                                   TextScale;
	struct FVector2D                                   TextSpacingAdjust;
	unsigned long                                      bInitialized : 1;
};

struct FUIStringNodeModifier
{
	struct FUICombinedStyleData                        CustomStyleData;
	struct FUICombinedStyleData                        BaseStyleData;
	TArray< struct FModifierData >                     ModifierStack;
	void*                                              CurrentMenuState;
};

struct FUIStringNode
{
	struct FPointer                                    VfTable;
	void*                                              NodeDataStore;
	struct FPointer                                    ParentNode;
	struct FString                                     SourceText;
	struct FVector2D                                   Extent;
	struct FVector2D                                   Scaling;
	unsigned long                                      bForceWrap : 1;
};

struct FUIStringNode_Text : FUIStringNode
{
	struct FString                                     RenderedText;
	struct FUICombinedStyleData                        NodeStyleParameters;
};

struct FUIStringNode_Image : FUIStringNode
{
	struct FVector2D                                   ForcedExtent;
	struct FTextureCoordinates                         TexCoords;
	void*                                              RenderedImage;
};

struct FUIStringNode_NestedMarkupParent : FUIStringNode
{
};

struct FUIStringNode_FormattedNodeParent : FUIStringNode_Text
{
};

struct FWrappedStringElement
{
	struct FString                                     Value;
	struct FVector2D                                   LineExtent;
};

struct FUIMouseCursor
{
	struct FName                                       CursorStyle;
	void*                                              Cursor;
};

struct FInputEventParameters
{
	int                                                PlayerIndex;
	int                                                ControllerId;
	struct FName                                       InputKeyName;
	unsigned char                                      EventType;
	float                                              InputDelta;
	float                                              DeltaTime;
	unsigned long                                      bAltPressed : 1;
	unsigned long                                      bCtrlPressed : 1;
	unsigned long                                      bShiftPressed : 1;
};

struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;
};

struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;
	struct FName                                       AdjacentAxisInputKey;
	unsigned long                                      bEmulateButtonPress : 1;
	struct FName                                       InputKeyToEmulate[ 2 ];
};

struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;
	unsigned char                                      ModifierKeyFlags;
};

struct FUIInputActionAlias
{
	struct FName                                       InputAliasName;
	TArray< struct FRawInputKeyEventData >             LinkedInputKeys;
};

struct FUIInputAliasValue
{
	unsigned char                                      ModifierFlagMask;
	struct FName                                       InputAliasName;
};

struct FUIInputAliasMap
{
	struct FMultiMap_Mirror                            InputAliasLookupTable;
};

struct FUIInputAliasStateMap
{
	struct FString                                     StateClassName;
	class UClass*                                      State;
	TArray< struct FUIInputActionAlias >               StateInputAliases;
};

struct FUIInputAliasClassMap
{
	struct FString                                     WidgetClassName;
	class UClass*                                      WidgetClass;
	TArray< struct FUIInputAliasStateMap >             WidgetStates;
};

struct FReverbSettings
{
	unsigned char                                      ReverbType;
	float                                              Volume;
	float                                              FadeTime;
};

struct FNetViewer
{
	class APlayerController*                           InViewer;
	class AActor*                                      Viewer;
	struct FVector                                     ViewLocation;
	struct FVector                                     ViewDir;
};

struct FMusicTrackStruct
{
	void*                                              TheSoundCue;
	unsigned long                                      bAutoPlay : 1;
	unsigned long                                      bPersistentAcrossLevels : 1;
	float                                              FadeInTime;
	float                                              FadeInVolumeLevel;
	float                                              FadeOutTime;
	float                                              FadeOutVolumeLevel;
};

struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;
	unsigned long                                      Fluid : 1;
	unsigned long                                      Cloth : 1;
	unsigned long                                      SoftBody : 1;
};

struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;
	unsigned long                                      bEnableChanceOfPhysicsChunkOverride : 1;
	unsigned long                                      bLimitExplosionChunkSize : 1;
	float                                              MaxExplosionChunkSize;
	unsigned long                                      bLimitDamageChunkSize : 1;
	float                                              MaxDamageChunkSize;
	int                                                MaxNumFacturedChunksToSpawnInAFrame;
	float                                              FractureExplosionVelScale;
};

struct FScreenMessageString
{
	int                                                Key;
	struct FString                                     ScreenMessage;
	struct FColor                                      DisplayColor;
	float                                              TimeToDisplay;
	float                                              CurrentTimeDisplayed;
};

struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;
	int                                                ParticlesLodMin;
	int                                                ParticlesLodMax;
	int                                                PacketsPerPhysXParticleSystemMax;
	unsigned long                                      bApplyCylindricalPacketCulling : 1;
	float                                              SpawnLodVsFifoBias;
};

struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;
};

struct FPhysXSimulationProperties
{
	unsigned long                                      bUseHardware : 1;
	unsigned long                                      bFixedTimeStep : 1;
	float                                              TimeStep;
	int                                                MaxSubSteps;
};

struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;
	struct FPhysXSimulationProperties                  CompartmentRigidBody;
	struct FPhysXSimulationProperties                  CompartmentFluid;
	struct FPhysXSimulationProperties                  CompartmentCloth;
	struct FPhysXSimulationProperties                  CompartmentSoftBody;
};

struct FUIAnimationNotify
{
	unsigned char                                      NotifyType;
	struct FName                                       NotifyName;
};

struct FUIAnimationRawData
{
	float                                              DestAsFloat;
	struct FLinearColor                                DestAsColor;
	struct FRotator                                    DestAsRotator;
	struct FVector                                     DestAsVector;
	struct FUIAnimationNotify                          DestAsNotify;
};

struct FUIAnimationKeyFrame
{
	float                                              RemainingTime;
	unsigned char                                      InterpMode;
	float                                              InterpExponent;
	struct FUIAnimationRawData                         Data;
};

struct FUIAnimTrack
{
	unsigned char                                      TrackType;
	TArray< struct FUIAnimationKeyFrame >              KeyFrames;
	TArray< struct FUIAnimationKeyFrame >              LoopFrames;
};

struct FUIAnimSequence
{
	void*                                              SequenceRef;
	TArray< struct FUIAnimTrack >                      AnimationTracks;
	unsigned char                                      LoopMode;
	float                                              PlaybackRate;
	struct FVector                                     InitialScale;
};

struct FUIStringSelectionRegion
{
	int                                                SelectionStartCharIndex;
	int                                                SelectionEndCharIndex;
};

struct FCoverMeshes
{
	void*                                              Base;
	void*                                              LeanLeft;
	void*                                              LeanRight;
	void*                                              Climb;
	void*                                              Mantle;
	void*                                              SlipLeft;
	void*                                              SlipRight;
	void*                                              SwatLeft;
	void*                                              SwatRight;
	void*                                              PopUp;
	void*                                              PlayerOnly;
};

struct FFireLinkItem
{
	unsigned char                                      SrcType;
	unsigned char                                      SrcAction;
	unsigned char                                      DestType;
	unsigned char                                      DestAction;
};

struct FFireLink
{
	struct FActorReference                             TargetMarker;
	TArray< struct FFireLinkItem >                     Items;
	struct FVector                                     LastTargetMarkerLocation;
	struct FVector                                     LastSrcMarkerLocation;
	unsigned long                                      bFallbackLink : 1;
};

struct FExposedLink
{
	struct FActorReference                             TargetMarker;
	unsigned char                                      ExposedScale;
};

struct FDangerLink
{
	struct FActorReference                             DangerNav;
	int                                                DangerCost;
};

struct FCoverReference : FActorReference
{
	int                                                SlotIdx;
	int                                                Direction;
};

struct FCoverSlot
{
	class APawn*                                       SlotOwner;
	float                                              SlotValidAfterTime;
	unsigned char                                      ForceCoverType;
	unsigned char                                      CoverType;
	struct FVector                                     LocationOffset;
	struct FRotator                                    RotationOffset;
	TArray< unsigned char >                            Actions;
	TArray< struct FFireLink >                         FireLinks;
	TArray< struct FFireLink >                         ForcedFireLinks;
	TArray< struct FFireLink >                         RejectedFireLinks;
	TArray< struct FExposedLink >                      ExposedFireLinks;
	TArray< struct FDangerLink >                       DangerLinks;
	struct FCoverReference                             MantleTarget;
	TArray< struct FCoverReference >                   TurnTarget;
	TArray< struct FCoverReference >                   SlipTarget;
	TArray< struct FCoverReference >                   OverlapClaims;
	unsigned long                                      bLeanLeft : 1;
	unsigned long                                      bLeanRight : 1;
	unsigned long                                      bForceCanPopUp : 1;
	unsigned long                                      bCanPopUp : 1;
	unsigned long                                      bCanMantle : 1;
	unsigned long                                      bCanClimbUp : 1;
	unsigned long                                      bForceCanCoverSlip_Left : 1;
	unsigned long                                      bForceCanCoverSlip_Right : 1;
	unsigned long                                      bCanCoverSlip_Left : 1;
	unsigned long                                      bCanCoverSlip_Right : 1;
	unsigned long                                      bCanSwatTurn_Left : 1;
	unsigned long                                      bCanSwatTurn_Right : 1;
	unsigned long                                      bEnabled : 1;
	unsigned long                                      bAllowPopup : 1;
	unsigned long                                      bAllowMantle : 1;
	unsigned long                                      bAllowCoverSlip : 1;
	unsigned long                                      bAllowClimbUp : 1;
	unsigned long                                      bAllowSwatTurn : 1;
	unsigned long                                      bForceNoGroundAdjust : 1;
	unsigned long                                      bPlayerOnly : 1;
	unsigned long                                      bSelected : 1;
	int                                                ExtraCost;
	float                                              LeanTraceDist;
	void*                                              SlotMarker;
	unsigned char                                      LocationDescription;
	unsigned long                                      bFailedToFindSurface : 1;
	float                                              LeftLimitAngle;
	float                                              RightLimitAngle;
	float                                              LeftLeanLeftLimitAngle;
	float                                              LeftLeanRightLimitAngle;
	float                                              RightLeanLeftLimitAngle;
	float                                              RightLeanRightLimitAngle;
	unsigned char                                      Hint;
	int                                                Priority;
};

struct FLinkSlotHelper
{
	void*                                              Link;
	TArray< int >                                      Slots;
};

struct FCoverInfo
{
	void*                                              Link;
	int                                                SlotIdx;
};

struct FTargetInfo
{
	class AActor*                                      Target;
	int                                                SlotIdx;
	int                                                Direction;
};

struct FCovPosInfo
{
	void*                                              Link;
	int                                                LtSlotIdx;
	int                                                RtSlotIdx;
	float                                              LtToRtPct;
	struct FVector                                     Location;
	struct FVector                                     Normal;
	struct FVector                                     Tangent;
};

struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;
	unsigned char                                      ManualCoverType;
};

struct FCoverReplicationInfo
{
	void*                                              Link;
	TArray< unsigned char >                            SlotsEnabled;
	TArray< unsigned char >                            SlotsDisabled;
	TArray< unsigned char >                            SlotsAdjusted;
	TArray< struct FManualCoverTypeInfo >              SlotsCoverTypeChanged;
};

struct FActiveMorph
{
	void*                                              Target;
	float                                              Weight;
};

struct FAttachment
{
	class UActorComponent*                             Component;
	struct FName                                       BoneName;
	struct FVector                                     RelativeLocation;
	struct FRotator                                    RelativeRotation;
	struct FVector                                     RelativeScale;
};

struct FBonePair
{
	struct FName                                       Bones[ 2 ];
};

struct FCullDistanceSizePair
{
	float                                              Size;
	float                                              CullDistance;
};

struct FUIDataProviderField
{
	struct FName                                       FieldTag;
	unsigned char                                      FieldType;
	TArray< void* >                                    FieldProviders;
};

struct FGameDataProviderTypes
{
	class UClass*                                      GameDataProviderClass;
	class UClass*                                      PlayerDataProviderClass;
	class UClass*                                      TeamDataProviderClass;
};

struct FPresetGeneratedPoint
{
	float                                              KeyIn;
	float                                              KeyOut;
	unsigned long                                      TangentsValid : 1;
	float                                              TangentIn;
	float                                              TangentOut;
	unsigned char                                      IntepMode;
};

struct FPlayerDataStoreGroup
{
	void*                                              PlayerOwner;
	TArray< void* >                                    DataStores;
};

struct FConsoleMessage
{
	struct FString                                     Text;
	struct FColor                                      TextColor;
	float                                              MessageLife;
	class APlayerReplicationInfo*                      PRI;
};

struct FHudLocalizedMessage
{
	class UClass*                                      Message;
	struct FString                                     StringMessage;
	int                                                Switch;
	float                                              EndOfLife;
	float                                              Lifetime;
	float                                              PosY;
	struct FColor                                      DrawColor;
	int                                                FontSize;
	class UFont*                                       StringFont;
	float                                              DX;
	float                                              DY;
	unsigned long                                      Drawn : 1;
	int                                                Count;
	class UObject*                                     OptionalObject;
	int                                                OptionalData;
};

struct FKeyBind
{
	struct FName                                       Name;
	struct FString                                     Command;
	unsigned long                                      Control : 1;
	unsigned long                                      Shift : 1;
	unsigned long                                      Alt : 1;
	unsigned long                                      bIgnoreCtrl : 1;
	unsigned long                                      bIgnoreShift : 1;
	unsigned long                                      bIgnoreAlt : 1;
};

struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;
	struct FPointer                                    RenderData;
};

struct FActiveDecalInfo
{
	void*                                              Decal;
	float                                              LifetimeRemaining;
};

struct FMaterialInput
{
	void*                                              Expression;
	int                                                Mask;
	int                                                MaskR;
	int                                                MaskG;
	int                                                MaskB;
	int                                                MaskA;
	int                                                GCC64_Padding;
};

struct FColorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;
	struct FColor                                      Constant;
};

struct FScalarMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;
	float                                              Constant;
};

struct FVectorMaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;
	struct FVector                                     Constant;
};

struct FVector2MaterialInput : FMaterialInput
{
	unsigned long                                      UseConstant : 1;
	float                                              ConstantX;
	float                                              ConstantY;
};

struct FBeastMaterialPropertiesContainer
{
	float                                              DiffuseBoost;
	float                                              EmissiveScale;
	float                                              SpecularScale;
	float                                              OpacityColorScale;
	unsigned char                                      OpacityMix;
	unsigned char                                      OpacitySource;
	unsigned char                                      SampledResolution;
	float                                              ReflectionFactor;
};

struct FDiffStats
{
	int                                                SourceDataSize;
	int                                                DiffSize;
	float                                              CompressionPerc;
	int                                                NumEntries;
	int                                                DiffBlockSize;
	struct FString                                     STAT_SourceDataSize;
	struct FString                                     STAT_DiffSize;
	struct FString                                     STAT_CompressionPerc;
	struct FString                                     STAT_NumEntries;
	struct FString                                     STAT_DiffBlockSize;
};

struct FDiffEntry
{
	int                                                ByteIndex;
	TArray< unsigned char >                            Bytes;
};

struct FDiff
{
	int                                                TotalBytes;
	TArray< struct FDiffEntry >                        List;
	struct FDiffStats                                  Stats;
};

struct FParticleSysParam
{
	struct FName                                       Name;
	unsigned char                                      ParamType;
	float                                              Scalar;
	struct FVector                                     Vector;
	struct FColor                                      Color;
	class AActor*                                      Actor;
	class UMaterialInterface*                          Material;
};

struct FParticleEventData
{
	int                                                Type;
	struct FName                                       EventName;
	float                                              EmitterTime;
	struct FVector                                     Location;
	struct FVector                                     Direction;
	struct FVector                                     Velocity;
};

struct FParticleEventSpawnData : FParticleEventData
{
};

struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;
};

struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;
	struct FVector                                     Normal;
	float                                              Time;
	int                                                Item;
	struct FName                                       BoneName;
};

struct FParticleEventKismetData : FParticleEventData
{
	unsigned long                                      UsePSysCompLocation : 1;
	struct FVector                                     Normal;
};

struct FParticleEmitterInstance
{
};

struct FEmitterBaseInfo
{
	void*                                              PSC;
	class AActor*                                      Base;
	struct FVector                                     RelativeLocation;
	struct FRotator                                    RelativeRotation;
};

struct FStatColorMapEntry
{
	float                                              In;
	struct FColor                                      Out;
};

struct FStatColorMapping
{
	struct FString                                     StatName;
	TArray< struct FStatColorMapEntry >                ColorMap;
	unsigned long                                      DisableBlend : 1;
};

struct FDropNoteInfo
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	struct FString                                     Comment;
};

struct FLightMapRef
{
	struct FPointer                                    Reference;
};

struct FFoliageInstanceBase
{
	struct FVector                                     Location;
	struct FVector                                     XAxis;
	struct FVector                                     YAxis;
	struct FVector                                     ZAxis;
	float                                              DistanceFactorSquared;
};

struct FGatheredFoliageInstance : FFoliageInstanceBase
{
	struct FColor                                      StaticLighting[ 4 ];
};

struct FFoliageMesh
{
	void*                                              InstanceStaticMesh;
	class UMaterialInterface*                          Material;
	float                                              MaxDrawRadius;
	float                                              MinTransitionRadius;
	float                                              MinThinningRadius;
	struct FVector                                     MinScale;
	struct FVector                                     MaxScale;
	float                                              MinUniformScale;
	float                                              MaxUniformScale;
	float                                              SwayScale;
	int                                                Seed;
	float                                              SurfaceAreaPerInstance;
	unsigned long                                      bCreateInstancesOnBSP : 1;
	unsigned long                                      bCreateInstancesOnStaticMeshes : 1;
	unsigned long                                      bCreateInstancesOnTerrain : 1;
	void*                                              Component;
};

struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;
	unsigned char                                      RightAmplitude;
	unsigned char                                      LeftFunction;
	unsigned char                                      RightFunction;
	float                                              Duration;
};

struct FFragmentGroup
{
	TArray< int >                                      FragmentIndices;
	unsigned long                                      bGroupIsRooted : 1;
};

struct FDeferredPartToSpawn
{
	int                                                ChunkIndex;
	struct FVector                                     InitialVel;
	struct FVector                                     InitialAngVel;
	float                                              RelativeScale;
	unsigned long                                      bExplosion : 1;
};

struct FLevelStreamingStatus
{
	struct FName                                       PackageName;
	unsigned long                                      bShouldBeLoaded : 1;
	unsigned long                                      bShouldBeVisible : 1;
};

struct FFullyLoadedPackagesInfo
{
	unsigned char                                      FullyLoadType;
	struct FString                                     Tag;
	TArray< struct FName >                             PackagesToLoad;
	TArray< class UObject* >                           LoadedObjects;
};

struct FNamedNetDriver
{
	struct FName                                       NetDriverName;
	struct FPointer                                    NetDriver;
};

struct FURL
{
	struct FString                                     Protocol;
	struct FString                                     Host;
	int                                                Port;
	struct FString                                     Map;
	TArray< struct FString >                           Op;
	struct FString                                     Portal;
	int                                                Valid;
};

struct FPerPlayerSplitscreenData
{
	float                                              SizeX;
	float                                              SizeY;
	float                                              OriginX;
	float                                              OriginY;
};

struct FSplitscreenData
{
	TArray< struct FPerPlayerSplitscreenData >         PlayerData;
};

struct FDebugDisplayProperty
{
	class UObject*                                     Obj;
	struct FName                                       PropertyName;
	unsigned long                                      bSpecialProperty : 1;
};

struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;
	float                                              MaxPercentY;
	float                                              RecommendedPercentX;
	float                                              RecommendedPercentY;
};

struct FIniLocFileEntry
{
	struct FString                                     Filename;
	unsigned char                                      ReadState;
};

struct FCurveEdEntry
{
	class UObject*                                     CurveObject;
	struct FColor                                      CurveColor;
	struct FString                                     CurveName;
	int                                                bHideCurve;
	int                                                bColorCurve;
	int                                                bFloatingPointColorCurve;
	int                                                bClamp;
	float                                              ClampLow;
	float                                              ClampHigh;
};

struct FCurveEdTab
{
	struct FString                                     TabName;
	TArray< struct FCurveEdEntry >                     Curves;
	float                                              ViewStartInput;
	float                                              ViewEndInput;
	float                                              ViewStartOutput;
	float                                              ViewEndOutput;
};

struct FInterpEdSelKey
{
	void*                                              Group;
	int                                                TrackIndex;
	int                                                KeyIndex;
	float                                              UnsnappedPosition;
};

struct FAnimControlTrackKey
{
	float                                              StartTime;
	struct FName                                       AnimSeqName;
	float                                              AnimStartOffset;
	float                                              AnimEndOffset;
	float                                              AnimPlayRate;
	unsigned long                                      bLooping : 1;
	unsigned long                                      bReverse : 1;
};

struct FDirectorTrackCut
{
	float                                              Time;
	float                                              TransitionTime;
	struct FName                                       TargetCamGroup;
};

struct FEventTrackKey
{
	float                                              Time;
	struct FName                                       EventName;
};

struct FFaceFXTrackKey
{
	float                                              StartTime;
	struct FString                                     FaceFXGroupName;
	struct FString                                     FaceFXSeqName;
};

struct FFaceFXSoundCueKey
{
	void*                                              FaceFXSoundCue;
};

struct FInterpLookupPoint
{
	struct FName                                       GroupName;
	float                                              Time;
};

struct FInterpLookupTrack
{
	TArray< struct FInterpLookupPoint >                Points;
};

struct FParticleReplayTrackKey
{
	float                                              Time;
	float                                              Duration;
	int                                                ClipIDNumber;
};

struct FSoundTrackKey
{
	float                                              Time;
	float                                              Volume;
	float                                              Pitch;
	void*                                              Sound;
};

struct FToggleTrackKey
{
	float                                              Time;
	unsigned char                                      ToggleAction;
};

struct FVisibilityTrackKey
{
	float                                              Time;
	unsigned char                                      Action;
	unsigned char                                      ActiveCondition;
};

struct FLensFlareElement
{
	struct FName                                       ElementName;
	float                                              RayDistance;
	unsigned long                                      bIsEnabled : 1;
	unsigned long                                      bUseSourceDistance : 1;
	unsigned long                                      bNormalizeRadialDistance : 1;
	unsigned long                                      bModulateColorBySource : 1;
	struct FVector                                     Size;
	TArray< class UMaterialInterface* >                LFMaterials;
	struct FRawDistributionFloat                       LFMaterialIndex;
	struct FRawDistributionFloat                       Scaling;
	struct FRawDistributionVector                      AxisScaling;
	struct FRawDistributionFloat                       Rotation;
	struct FRawDistributionVector                      Color;
	struct FRawDistributionFloat                       Alpha;
	struct FRawDistributionVector                      Offset;
	struct FRawDistributionVector                      DistMap_Scale;
	struct FRawDistributionVector                      DistMap_Color;
	struct FRawDistributionFloat                       DistMap_Alpha;
};

struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;
	class UObject*                                     CurveObject;
};

struct FLensFlareElementInstance
{
};

struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;
	void*                                              LastVolumeUsed;
	float                                              BlendStartTime;
	float                                              LastBlendTime;
};

struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;
	struct FPointer                                    CriticalSection;
};

struct FExpressionInput
{
	void*                                              Expression;
	int                                                Mask;
	int                                                MaskR;
	int                                                MaskG;
	int                                                MaskB;
	int                                                MaskA;
	int                                                GCC64_Padding;
};

struct FBeastMaterialInstancePropertiesContainer
{
	float                                              DiffuseBoost;
	float                                              EmissiveScale;
	float                                              SpecularScale;
	float                                              OpacityColorScale;
	unsigned char                                      OpacityMix;
	unsigned char                                      OpacitySource;
	unsigned char                                      SampledResolution;
	float                                              ReflectionFactor;
	//struct FBeastMaterialInstancePropertiesOverrides   Overrides;
};

struct FFontParameterValue
{
	struct FName                                       ParameterName;
	class UFont*                                       FontValue;
	int                                                FontPage;
	struct FGuid                                       ExpressionGUID;
};

struct FScalarParameterValue
{
	struct FName                                       ParameterName;
	float                                              ParameterValue;
	struct FGuid                                       ExpressionGUID;
};

struct FTextureParameterValue
{
	struct FName                                       ParameterName;
	class UTexture*                                    ParameterValue;
	struct FGuid                                       ExpressionGUID;
};

struct FVectorParameterValue
{
	struct FName                                       ParameterName;
	struct FLinearColor                                ParameterValue;
	struct FGuid                                       ExpressionGUID;
};

struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;
	float                                              StartTime;
	struct FName                                       ParameterName;
	unsigned long                                      bLoop : 1;
	unsigned long                                      bAutoActivate : 1;
	float                                              CycleTime;
	unsigned long                                      bNormalizeTime : 1;
	float                                              OffsetTime;
	unsigned long                                      bOffsetFromEnd : 1;
};

struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;
	int                                                FontPage;
};

struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;
	struct FInterpCurveFloat                           ParameterValueCurve;
};

struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;
};

struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;
	struct FInterpCurveVector                          ParameterValueCurve;
};

struct FMorphNodeConn
{
	TArray< void* >                                    ChildNodes;
	struct FName                                       ConnName;
	int                                                DrawY;
};

struct FBoneAngleMorph
{
	float                                              Angle;
	float                                              TargetWeight;
};

struct FPlayerInformation
{
	struct FString                                     ControllerName;
	struct FString                                     PlayerName;
	struct FUniqueNetId                                UniqueId;
	unsigned long                                      bIsBot : 1;
	int                                                LastPlayerEventIdx;
};

struct FGameplayEvent
{
	int                                                PlayerEventAndTarget;
	int                                                EventNameAndDesc;
};

struct FPlayerEvent
{
	float                                              EventTime;
	struct FVector                                     EventLocation;
	int                                                PlayerIndexAndYaw;
	int                                                PlayerPitchAndRoll;
};

struct FStringIdToStringMapping
{
	int                                                Id;
	struct FName                                       Name;
	unsigned long                                      bIsWildcard : 1;
};

struct FLocalizedStringSettingMetaData
{
	int                                                Id;
	struct FName                                       Name;
	struct FString                                     ColumnHeaderText;
	TArray< struct FStringIdToStringMapping >          ValueMappings;
};

struct FIdToStringMapping
{
	int                                                Id;
	struct FName                                       Name;
};

struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;
	struct FName                                       Name;
	struct FString                                     ColumnHeaderText;
	unsigned char                                      MappingType;
	TArray< struct FIdToStringMapping >                ValueMappings;
	TArray< struct FSettingsData >                     PredefinedValues;
	float                                              MinVal;
	float                                              MaxVal;
	float                                              RangeIncrement;
};

struct FAchievementDetails
{
	int                                                Id;
	struct FString                                     AchievementName;
	struct FString                                     Description;
	struct FString                                     HowTo;
	class USurface*                                    Image;
	int                                                GamerPoints;
	unsigned long                                      bIsSecret : 1;
	unsigned long                                      bWasAchievedOnline : 1;
	unsigned long                                      bWasAchievedOffline : 1;
};

struct FConfiguredGameSetting
{
	int                                                GameSettingId;
	struct FString                                     GameSettingsClassName;
	struct FString                                     URL;
	void*                                              GameSettings;
};

struct FPlaylist
{
	TArray< struct FConfiguredGameSetting >            ConfiguredGames;
	int                                                PlaylistId;
	struct FString                                     LocalizationString;
	TArray< int >                                      ContentIds;
	int                                                TeamSize;
	int                                                TeamCount;
	struct FString                                     Name;
};

struct FOnlineProfileSetting
{
	unsigned char                                      Owner;
	struct FSettingsProperty                           ProfileSetting;
};

struct FRecentParty
{
	struct FUniqueNetId                                PartyLeader;
	TArray< struct FUniqueNetId >                      PartyMembers;
};

struct FCurrentPlayerMet
{
	int                                                TeamNum;
	int                                                Skill;
	struct FUniqueNetId                                NetId;
};

struct FOnlineStatsColumn
{
	int                                                ColumnNo;
	struct FSettingsData                               StatValue;
};

struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;
	struct FSettingsData                               Rank;
	struct FString                                     NickName;
	TArray< struct FOnlineStatsColumn >                Columns;
};

struct FColumnMetaData
{
	int                                                Id;
	struct FName                                       Name;
	struct FString                                     ColumnName;
};

struct FParticleBurst
{
	int                                                Count;
	int                                                CountLow;
	float                                              Time;
};

struct FParticleCurvePair
{
	struct FString                                     CurveName;
	class UObject*                                     CurveObject;
};

struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;
	unsigned long                                      bScale : 1;
	unsigned long                                      bLock : 1;
};

struct FParticleEvent_GenerateInfo
{
	unsigned char                                      Type;
	int                                                Frequency;
	int                                                LowFreq;
	int                                                ParticleFrequency;
	unsigned long                                      FirstTimeOnly : 1;
	unsigned long                                      LastTimeOnly : 1;
	unsigned long                                      UseReflectedImpactVector : 1;
	struct FName                                       CustomName;
};

struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;
	unsigned long                                      bProcessDuringUpdate : 1;
	unsigned long                                      bUseEmitterTime : 1;
};

struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;
	unsigned long                                      bUseEmitterTime : 1;
	struct FRawDistributionFloat                       ParamValue;
};

struct FBeamTargetData
{
	struct FName                                       TargetName;
	float                                              TargetPercentage;
};

struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;
	float                                              WeightForSpawnLod;
	float                                              SpawnLodRateVsLifeBias;
	float                                              RelativeFadeoutTime;
};

struct FParticleEmitterReplayFrame
{
	int                                                EmitterType;
	int                                                OriginalEmitterIndex;
	struct FPointer                                    FrameState;
};

struct FParticleSystemReplayFrame
{
	TArray< struct FParticleEmitterReplayFrame >       Emitters;
};

struct FFlashLocationInfo
{
	struct FVector                                     StartTraceLocation;
	struct FVector                                     Location;
	struct FAdditionalHitInfo                          AddInfo;
};

struct FDecalInfo
{
	unsigned char                                      DecalType;
	void*                                              DecalMaterial;
};

struct FPhysXDestructibleDepthParameters
{
	unsigned long                                      bTakeImpactDamage : 1;
	unsigned long                                      bPlaySoundEffect : 1;
	unsigned long                                      bPlayParticleEffect : 1;
	unsigned long                                      bDoNotTimeOut : 1;
	unsigned long                                      bNoKillDummy : 1;
};

struct FPhysXDestructibleParameters
{
	float                                              DamageThreshold;
	float                                              DamageToRadius;
	float                                              DamageCap;
	float                                              ForceToDamage;
	void*                                              FractureSound;
	void*                                              CrumbleParticleSystem;
	float                                              CrumbleParticleSize;
	unsigned long                                      bAccumulateDamage : 1;
	float                                              ScaledDamageToRadius;
	TArray< struct FPhysXDestructibleDepthParameters > DepthParameters;
};

struct FSpawnBasis
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	float                                              Scale;
};

struct FPhysXDestructibleAssetChunk
{
	int                                                Index;
	int                                                FragmentIndex;
	float                                              Volume;
	float                                              Size;
	int                                                Depth;
	int                                                ParentIndex;
	int                                                FirstChildIndex;
	int                                                NumChildren;
	int                                                MeshIndex;
	int                                                BoneIndex;
	struct FName                                       BoneName;
	int                                                BodyIndex;
};

struct FPhysXDestructibleChunk
{
	unsigned long                                      WorldCentroidValid : 1;
	unsigned long                                      WorldMatrixValid : 1;
	unsigned long                                      bCrumble : 1;
	unsigned long                                      IsEnvironmentSupported : 1;
	unsigned long                                      IsRouting : 1;
	unsigned long                                      IsRouteValid : 1;
	unsigned long                                      IsRouteBlocker : 1;
	int                                                ActorIndex;
	int                                                FragmentIndex;
	int                                                Index;
	int                                                MeshIndex;
	int                                                BoneIndex;
	struct FName                                       BoneName;
	int                                                BodyIndex;
	struct FVector                                     RelativeCentroid;
	struct FVector                                     WorldCentroid;
	struct FMatrix                                     RelativeMatrix;
	struct FMatrix                                     WorldMatrix;
	float                                              Radius;
	int                                                ParentIndex;
	int                                                FirstChildIndex;
	int                                                NumChildren;
	int                                                Depth;
	float                                              Age;
	float                                              Damage;
	float                                              Size;
	unsigned char                                      CurrentState;
	struct FPointer                                    Structure;
	int                                                FIFOIndex;
	int                                                FirstOverlapIndex;
	int                                                NumOverlaps;
	int                                                ShortestRoute;
	int                                                NumSupporters;
	int                                                NumChildrenDup;
};

struct FPhysXDestructibleOverlap
{
	int                                                ChunkIndex0;
	int                                                ChunkIndex1;
	int                                                Adjacent;
};

struct FIndexedRBState
{
	struct FVector                                     CenterOfMass;
	struct FVector                                     LinearVelocity;
	struct FVector                                     AngularVelocity;
	int                                                Index;
};

struct FRBVolumeFill
{
	TArray< struct FIndexedRBState >                   RBStates;
	TArray< struct FVector >                           Positions;
};

struct FPlayerDataProviderTypes
{
	class UClass*                                      PlayerOwnerDataProviderClass;
	class UClass*                                      CurrentWeaponDataProviderClass;
	class UClass*                                      WeaponDataProviderClass;
	class UClass*                                      PowerupDataProviderClass;
};

struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;
	class USequenceOp*                                 Op;
	int                                                InputIdx;
	float                                              RemainingDelay;
};

struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;
	class AActor*                                      InOriginator;
	class AActor*                                      InInstigator;
	TArray< int >                                      ActivateIndices;
	unsigned long                                      bPushTop : 1;
};

struct FKCachedConvexDataElement
{
	TArray< unsigned char >                            ConvexElementData;
};

struct FKCachedConvexData
{
	TArray< struct FKCachedConvexDataElement >         CachedConvexElements;
};

struct FLinearDOFSetup
{
	unsigned char                                      bLimited;
	float                                              LimitSize;
};

struct FPathSizeInfo
{
	struct FName                                       Desc;
	float                                              Radius;
	float                                              Height;
	float                                              CrouchHeight;
	unsigned char                                      PathColor;
};

struct FCrowdTargetActionInfo
{
	struct FName                                       AnimName;
	unsigned long                                      bFireEffects : 1;
};

struct FCrowdAttachmentInfo
{
	void*                                              StaticMesh;
	float                                              Chance;
	struct FVector                                     Scale3D;
};

struct FCrowdAttachmentList
{
	struct FName                                       SocketName;
	TArray< struct FCrowdAttachmentInfo >              List;
};

struct FCameraCutInfo
{
	struct FVector                                     Location;
	float                                              TimeStamp;
};

struct FSavedTransform
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
};

struct FLevelStreamingNameCombo
{
	void*                                              Level;
	struct FName                                       LevelName;
};

struct FSwitchRange
{
	int                                                Min;
	int                                                Max;
};

struct FSwitchClassInfo
{
	struct FName                                       ClassName;
	unsigned char                                      bFallThru;
};

struct FSwitchNameCase
{
	struct FName                                       NameValue;
	unsigned long                                      bFallThru : 1;
};

struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;
	unsigned long                                      bFallThru : 1;
	unsigned long                                      bDefaultValue : 1;
};

struct FBoneMirrorInfo
{
	int                                                SourceIndex;
	unsigned char                                      BoneFlipAxis;
	unsigned long                                      bFlipAllAxes : 1;
};

struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;
	float                                              LODHysteresis;
	TArray< int >                                      LODMaterialMap;
	TArray< unsigned long >                            bEnableShadowCasting;
};

struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;
	unsigned char                                      BoneType;
	TArray< int >                                      AttachedVertexIndices;
};

struct FSoftBodyTetraLink
{
	int                                                Index;
	struct FVector                                     Bary;
};

struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;
	unsigned char                                      BoneType;
	TArray< int >                                      AttachedVertexIndices;
};

struct FBoneMirrorExport
{
	struct FName                                       BoneName;
	struct FName                                       SourceBoneName;
	unsigned char                                      BoneFlipAxis;
};

struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;
	class AActor*                                      TargetActor;
};

struct FSkelMaterialSetterDatum
{
	int                                                MaterialIndex;
	class UMaterialInterface*                          TheMaterial;
};

struct FLODDiffEntry
{
	int                                                LODIndex;
	void*                                              InfluenceBufferDiffObject;
	void*                                              IndexBufferDiffObject;
	void*                                              UVBuffer16DiffObject;
	void*                                              UVBuffer32DiffObject;
};

struct FSoundClassAdjuster
{
	unsigned char                                      SoundClassName;
	struct FName                                       SoundClass;
	float                                              VolumeAdjuster;
	float                                              PitchAdjuster;
};

struct FAudioEQEffect
{
	struct FDouble                                     RootTime;
	float                                              HFFrequency;
	float                                              HFGain;
	float                                              MFCutoffFrequency;
	float                                              MFBandwidthFrequency;
	float                                              MFGain;
	float                                              LFFrequency;
	float                                              LFGain;
};

struct FDistanceDatum
{
	struct FRawDistributionFloat                       FadeInDistance;
	struct FRawDistributionFloat                       FadeOutDistance;
	float                                              Volume;
};

struct FSubtitleCue
{
	struct FString                                     Text;
	float                                              Time;
};

struct FLocalizedSubtitle
{
	TArray< struct FSubtitleCue >                      Subtitles;
	unsigned long                                      bMature : 1;
	unsigned long                                      bManualWordWrap : 1;
};

struct FRecognisableWord
{
	int                                                Id;
	struct FString                                     ReferenceWord;
	struct FString                                     PhoneticWord;
};

struct FRecogVocabulary
{
	TArray< struct FRecognisableWord >                 WhoDictionary;
	TArray< struct FRecognisableWord >                 WhatDictionary;
	TArray< struct FRecognisableWord >                 WhereDictionary;
	struct FString                                     VocabName;
	TArray< unsigned char >                            VocabData;
	TArray< unsigned char >                            WorkingVocabData;
};

struct FRecogUserData
{
	int                                                ActiveVocabularies;
	TArray< unsigned char >                            UserData;
};

struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;
	void*                                              BranchAndFrondShadowMap;
	void*                                              LeafMeshShadowMap;
	void*                                              LeafCardShadowMap;
	void*                                              BillboardShadowMap;
};

struct FSMMaterialSetterDatum
{
	int                                                MaterialIndex;
	class UMaterialInterface*                          TheMaterial;
};

struct FVehicleState
{
	struct FRigidBodyState                             RBState;
	unsigned char                                      ServerBrake;
	unsigned char                                      ServerGas;
	unsigned char                                      ServerSteering;
	unsigned char                                      ServerRise;
	unsigned long                                      bServerHandbrake : 1;
	int                                                ServerView;
};

struct FTerrainHeight
{
};

struct FTerrainInfoData
{
};

struct FTerrainLayer
{
	struct FString                                     Name;
	void*                                              Setup;
	int                                                AlphaMapIndex;
	unsigned long                                      Highlighted : 1;
	unsigned long                                      WireframeHighlighted : 1;
	unsigned long                                      Hidden : 1;
	struct FColor                                      HighlightColor;
	struct FColor                                      WireframeColor;
	int                                                MinX;
	int                                                MinY;
	int                                                MaxX;
	int                                                MaxY;
};

struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;
	float                                              X;
	float                                              Y;
	float                                              Scale;
	int                                                Yaw;
};

struct FTerrainDecoration
{
	void*                                              Factory;
	float                                              MinScale;
	float                                              MaxScale;
	float                                              Density;
	float                                              SlopeRotationBlend;
	int                                                RandSeed;
	TArray< struct FTerrainDecorationInstance >        Instances;
};

struct FTerrainDecoLayer
{
	struct FString                                     Name;
	TArray< struct FTerrainDecoration >                Decorations;
	int                                                AlphaMapIndex;
};

struct FAlphaMap
{
};

struct FTerrainWeightedMaterial
{
};

struct FSelectedTerrainVertex
{
	int                                                X;
	int                                                Y;
	int                                                Weight;
};

struct FTerrainMaterialResource
{
};

struct FBeastTerrainMaterialProperties
{
	float                                              EmissiveScale;
	unsigned char                                      TargetResolution;
	unsigned char                                      SampledResolution;
	float                                              ReflectionFactor;
};

struct FCachedTerrainMaterialArray
{
	TArray< struct FPointer >                          CachedMaterials;
};

struct FTerrainBVTree
{
	TArray< int >                                      Nodes;
};

struct FTerrainkDOPTree
{
	TArray< int >                                      Nodes;
	TArray< int >                                      Triangles;
};

struct FFilterLimit
{
	unsigned long                                      Enabled : 1;
	float                                              Base;
	float                                              NoiseScale;
	float                                              NoiseAmount;
};

struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;
	float                                              NoiseScale;
	float                                              NoisePercent;
	struct FFilterLimit                                MinHeight;
	struct FFilterLimit                                MaxHeight;
	struct FFilterLimit                                MinSlope;
	struct FFilterLimit                                MaxSlope;
	float                                              Alpha;
	void*                                              Material;
};

struct FTerrainFoliageMesh
{
	void*                                              StaticMesh;
	class UMaterialInterface*                          Material;
	int                                                Density;
	float                                              MaxDrawRadius;
	float                                              MinTransitionRadius;
	float                                              MinScale;
	float                                              MaxScale;
	float                                              MinUniformScale;
	float                                              MaxUniformScale;
	float                                              MinThinningRadius;
	int                                                Seed;
	float                                              SwayScale;
	float                                              AlphaMapThreshold;
	float                                              SlopeRotationBlend;
};

struct FSourceTexture2DRegion
{
	int                                                OffsetX;
	int                                                OffsetY;
	int                                                SizeX;
	int                                                SizeY;
	class UTexture2D*                                  Texture2D;
};

struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;
	unsigned long                                      bShouldBeVisible : 1;
	unsigned long                                      bShouldBlockOnLoad : 1;
	void*                                              Level;
};

struct FUIListItemDataBinding
{
	struct FName                                       DataSourceTag;
	int                                                DataSourceIndex;
};

struct FUIListElementCell
{
	int                                                ContainerElementIndex;
	void*                                              OwnerList;
	struct FUIStyleReference                           CellStyle[ 4 ];
	class UObject*                                     ValueObject;
};

struct FUIListItem
{
	struct FUIListItemDataBinding                      DataSource;
	TArray< struct FUIListElementCell >                Cells;
	unsigned char                                      ElementState;
	void*                                              ElementWidget;
};

struct FUIListElementCellTemplate : FUIListElementCell
{
	struct FName                                       CellDataField;
	struct FString                                     ColumnHeaderText;
	struct FUIScreenValue_Extent                       CellSize;
	float                                              CellPosition;
};

struct FUIElementCellSchema
{
	TArray< struct FUIListElementCellTemplate >        Cells;
};

struct FUIListSortingParameters
{
	int                                                PrimaryIndex;
	int                                                SecondaryIndex;
	unsigned long                                      bReversePrimarySorting : 1;
	unsigned long                                      bReverseSecondarySorting : 1;
	unsigned long                                      bCaseSensitive : 1;
	unsigned long                                      bIntSortPrimary : 1;
	unsigned long                                      bIntSortSecondary : 1;
	unsigned long                                      bFloatSortPrimary : 1;
	unsigned long                                      bFloatSortSecondary : 1;
};

struct FCellHitDetectionInfo
{
	int                                                HitColumn;
	int                                                HitRow;
	int                                                ResizeColumn;
	int                                                ResizeRow;
};

struct FContextMenuItem
{
	void*                                              OwnerMenu;
	struct FPointer                                    ParentItem;
	unsigned char                                      ItemType;
	struct FString                                     ItemText;
	int                                                ItemId;
};

struct FUISoundCue
{
	struct FName                                       SoundName;
	void*                                              SoundToPlay;
};

struct FProfileSettingsArrayProvider
{
	int                                                ProfileSettingsId;
	struct FName                                       ProfileSettingsName;
	void*                                              Provider;
};

struct FSettingsArrayProvider
{
	int                                                SettingsId;
	struct FName                                       SettingsName;
	void*                                              Provider;
};

struct FDynamicResourceProviderDefinition
{
	struct FName                                       ProviderTag;
	struct FString                                     ProviderClassName;
	class UClass*                                      ProviderClass;
};

struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;
	struct FString                                     ProviderClassName;
	unsigned long                                      bExpandProviders : 1;
	class UClass*                                      ProviderClass;
};

struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;
	struct FString                                     ButtonFontMarkupString;
};

struct FUIDataStoreInputAlias
{
	struct FName                                       AliasName;
	struct FUIInputKeyData                             PlatformInputKeys[ 3 ];
};

struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;
	class UClass*                                      DefaultGameSettingsClass;
	class UClass*                                      SearchResultsProviderClass;
	void*                                              DesiredSettingsProvider;
	TArray< void* >                                    SearchResults;
	void*                                              Search;
	struct FName                                       SearchName;
};

struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;
	void*                                              Provider;
	void*                                              GameSettings;
	struct FName                                       SettingsName;
};

struct FRankMetaData
{
	struct FName                                       RankName;
	struct FString                                     RankColumnName;
};

struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;
	struct FString                                     PlayerNickColumnName;
};

struct FUIMenuInputMap
{
	struct FName                                       FieldName;
	struct FName                                       Set;
	struct FString                                     MappedText;
};

struct FCornerSizes
{
	float                                              TopLeft[ 2 ];
	float                                              TopRight[ 2 ];
	float                                              BottomLeft[ 2 ];
	float                                              BottomRight[ 2 ];
	float                                              TopHeight;
	float                                              BottomHeight;
	float                                              CenterLeftWidth;
	float                                              CenterRightWidth;
};

struct FPresentation
{
	unsigned long                                      bRenderTopLeft : 1;
	unsigned long                                      bRenderTopRight : 1;
	unsigned long                                      bRenderTop : 1;
	unsigned long                                      bRenderRight : 1;
	unsigned long                                      bRenderLeft : 1;
	unsigned long                                      bRenderBottomLeft : 1;
	unsigned long                                      bRenderBottomRight : 1;
	unsigned long                                      bRenderBottom : 1;
};

struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;
	struct FDouble                                     NextRepeatTime;
};

struct FUIAxisEmulationData : FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;
};

struct FArchetypeInstancePair
{
	void*                                              WidgetArchetype;
	void*                                              WidgetInstance;
	float                                              ArchetypeBounds[ 4 ];
	float                                              InstanceBounds[ 4 ];
};

struct FStyleDataReference
{
	void*                                              OwnerStyle;
	struct FSTYLE_ID                                   SourceStyleID;
	void*                                              SourceStyle;
	void*                                              SourceState;
	void*                                              CustomStyleData;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif