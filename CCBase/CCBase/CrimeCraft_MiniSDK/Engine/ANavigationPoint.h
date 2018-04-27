/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ANavigationPoint.h
// Date: 06/16/2011 @ 05:19:40.482
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_INFINITE_PATH_COST                   10000000

struct ANavigationPoint_eventGetDebugAbbrev_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ANavigationPoint_execApplyCheckpointRecord_Parms
{
	unsigned char                                      Record[ 4 ]; // CPF_OutParm
};

struct ANavigationPoint_execCreateCheckpointRecord_Parms
{
	unsigned char                                      Record[ 4 ]; // CPF_OutParm
};

struct ANavigationPoint_execShouldSaveForCheckpoint_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ANavigationPoint_eventShutDown_Parms
{
};// FUNC_Event

struct ANavigationPoint_execOnToggle_Parms
{
	void* inAction;
};

struct ANavigationPoint_execIsOnDifferentNetwork_Parms
{
	class ANavigationPoint* Nav;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ANavigationPoint_execGetAllNavInRadius_Parms
{
	class AActor* ChkActor;
	struct FVector ChkPoint;
	float Radius;
	TArray< class ANavigationPoint* > out_NavList; // CPF_OutParm
	unsigned long bSkipBlocked : 1;
	int inNetworkID;
	struct FCylinder MinSize;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ANavigationPoint_execGetNearestNavToPoint_Parms
{
	class AActor* ChkActor;
	struct FVector ChkPoint;
	class UClass* RequiredClass;
	TArray< class ANavigationPoint* > ExcludeList;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ANavigationPoint_execGetNearestNavToActor_Parms
{
	class AActor* ChkActor;
	class UClass* RequiredClass;
	TArray< class ANavigationPoint* > ExcludeList;
	float MinDist;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct ANavigationPoint_execProceedWithMove_Parms
{
	class APawn* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct ANavigationPoint_eventSuggestMovePreparation_Parms
{
	class APawn* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ANavigationPoint_eventDetourWeight_Parms
{
	class APawn* Other;
	float PathWeight;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ANavigationPoint_eventAccept_Parms
{
	class AActor* Incoming;
	class AActor* Source;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct ANavigationPoint_eventSpecialCost_Parms
{
	class APawn* Seeker;
	void* Path;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct ANavigationPoint_execCanTeleport_Parms
{
	class AActor* A;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ANavigationPoint_execIsUsableAnchorFor_Parms
{
	class APawn* P;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

struct ANavigationPoint_execGetReachSpecTo_Parms
{
	class ANavigationPoint* Nav;
	class UClass* SpecClass;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct ANavigationPoint_execGetBoundingCylinder_Parms
{
	float CollisionRadius; // CPF_OutParm
	float CollisionHeight; // CPF_OutParm
};// FUNC_Native

// (0x1BC - 0x2A8)
class ANavigationPoint : public AActor
{
public:
	unsigned long                                      bEndPoint : 1;                               // 0x01BC (0x0004) [0x00000001]
	unsigned long                                      bTransientEndPoint : 1;                      // 0x01BC (0x0004) [0x00000002]
	unsigned long                                      bHideEditorPaths : 1;                        // 0x01BC (0x0004) [0x00000004]
	unsigned long                                      bCanReach : 1;                               // 0x01BC (0x0004) [0x00000008]
	unsigned long                                      bBlocked : 1;                                // 0x01BC (0x0004) [0x00000010]
	unsigned long                                      bOneWayPath : 1;                             // 0x01BC (0x0004) [0x00000020]
	unsigned long                                      bNeverUseStrafing : 1;                       // 0x01BC (0x0004) [0x00000040]
	unsigned long                                      bAlwaysUseStrafing : 1;                      // 0x01BC (0x0004) [0x00000080]
	unsigned long                                      bForceNoStrafing : 1;                        // 0x01BC (0x0004) [0x00000100]
	unsigned long                                      bAutoBuilt : 1;                              // 0x01BC (0x0004) [0x00000200]
	unsigned long                                      bSpecialMove : 1;                            // 0x01BC (0x0004) [0x00000400]
	unsigned long                                      bNoAutoConnect : 1;                          // 0x01BC (0x0004) [0x00000800]
	unsigned long                                      bNotBased : 1;                               // 0x01BC (0x0004) [0x00001000]
	unsigned long                                      bPathsChanged : 1;                           // 0x01BC (0x0004) [0x00002000]
	unsigned long                                      bDestinationOnly : 1;                        // 0x01BC (0x0004) [0x00004000]
	unsigned long                                      bSourceOnly : 1;                             // 0x01BC (0x0004) [0x00008000]
	unsigned long                                      bSpecialForced : 1;                          // 0x01BC (0x0004) [0x00010000]
	unsigned long                                      bMustBeReachable : 1;                        // 0x01BC (0x0004) [0x00020000]
	unsigned long                                      bBlockable : 1;                              // 0x01BC (0x0004) [0x00040000]
	unsigned long                                      bFlyingPreferred : 1;                        // 0x01BC (0x0004) [0x00080000]
	unsigned long                                      bMayCausePain : 1;                           // 0x01BC (0x0004) [0x00100000]
	unsigned long                                      bAlreadyVisited : 1;                         // 0x01BC (0x0004) [0x00200000]
	unsigned long                                      bVehicleDestination : 1;                     // 0x01BC (0x0004) [0x00400000]
	unsigned long                                      bMakeSourceOnly : 1;                         // 0x01BC (0x0004) [0x00800000]
	unsigned long                                      bMustTouchToReach : 1;                       // 0x01BC (0x0004) [0x01000000]
	unsigned long                                      bCanWalkOnToReach : 1;                       // 0x01BC (0x0004) [0x02000000]
	unsigned long                                      bBuildLongPaths : 1;                         // 0x01BC (0x0004) [0x04000000]
	unsigned long                                      bBlockedForVehicles : 1;                     // 0x01BC (0x0004) [0x08000000]
	unsigned long                                      bPreferredVehiclePath : 1;                   // 0x01BC (0x0004) [0x10000000]
	unsigned long                                      bCrowdPath : 1;                              // 0x01BC (0x0004) [0x20000000]
	unsigned long                                      bHasCrossLevelPaths : 1;                     // 0x01BC (0x0004) [0x40000000]
	unsigned long                                      bShouldSaveForCheckpoint : 1;                // 0x01BC (0x0004) [0x80000000]
	struct FNavigationOctreeObject                     NavOctreeObject;                             // 0x01C0 (0x0034)
	TArray< void* >                                    PathList;                                    // 0x01F4 (0x000C)
	TArray< struct FActorReference >                   EditorProscribedPaths;                       // 0x0200 (0x000C)
	TArray< struct FActorReference >                   EditorForcedPaths;                           // 0x020C (0x000C)
	TArray< struct FActorReference >                   Volumes;                                     // 0x0218 (0x000C)
	TArray< class AVolume* >                           VolumeList;                                  // 0x0224 (0x000C)
	int                                                visitedWeight;                               // 0x0230 (0x0004)
	int                                                bestPathWeight;                              // 0x0234 (0x0004)
	class ANavigationPoint*                            nextNavigationPoint;                         // 0x0238 (0x0004)
	class ANavigationPoint*                            nextOrdered;                                 // 0x023C (0x0004)
	class ANavigationPoint*                            prevOrdered;                                 // 0x0240 (0x0004)
	class ANavigationPoint*                            previousPath;                                // 0x0244 (0x0004)
	int                                                Cost;                                        // 0x0248 (0x0004)
	int                                                ExtraCost;                                   // 0x024C (0x0004)
	int                                                TransientCost;                               // 0x0250 (0x0004)
	int                                                FearCost;                                    // 0x0254 (0x0004)
	TArray< struct FDebugNavCost >                     CostArray;                                   // 0x0258 (0x000C)
	void*                                              InventoryCache;                              // 0x0264 (0x0004)
	float                                              InventoryDist;                               // 0x0268 (0x0004)
	float                                              LastDetourWeight;                            // 0x026C (0x0004)
	void*                                              CylinderComponent;                           // 0x0270 (0x0004)
	class AObjective*                                  NearestObjective;                            // 0x0274 (0x0004)
	float                                              ObjectiveDistance;                           // 0x0278 (0x0004)
	struct FCylinder                                   MaxPathSize;                                 // 0x027C (0x0008)
	struct FGuid                                       NavGuid;                                     // 0x0284 (0x0010)
	void*                                              GoodSprite;                                  // 0x0294 (0x0004)
	void*                                              BadSprite;                                   // 0x0298 (0x0004)
	int                                                NetworkID;                                   // 0x029C (0x0004)
	class APawn*                                       AnchoredPawn;                                // 0x02A0 (0x0004)
	float                                              LastAnchoredPawnTime;                        // 0x02A4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.NavigationPoint" );

		return ClassPointer;
	};

public:
	struct FString eventGetDebugAbbrev ()
	{
		static UFunction* pfnGetDebugAbbrev = NULL;

		if ( !pfnGetDebugAbbrev )
			pfnGetDebugAbbrev = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetDebugAbbrev" );

		ANavigationPoint_eventGetDebugAbbrev_Parms GetDebugAbbrev_Parms;

		this->ProcessEvent( pfnGetDebugAbbrev, &GetDebugAbbrev_Parms, NULL );

		return GetDebugAbbrev_Parms.ReturnValue;
	};

	void ApplyCheckpointRecord ( struct FCheckpointRecord* Record )
	{
		static UFunction* pfnApplyCheckpointRecord = NULL;

		if ( !pfnApplyCheckpointRecord )
			pfnApplyCheckpointRecord = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.ApplyCheckpointRecord" );

		ANavigationPoint_execApplyCheckpointRecord_Parms ApplyCheckpointRecord_Parms;

		this->ProcessEvent( pfnApplyCheckpointRecord, &ApplyCheckpointRecord_Parms, NULL );

		if ( Record )
			memcpy( Record, &ApplyCheckpointRecord_Parms.Record, 0x4 ); // CPF_OutParm
	};

	void CreateCheckpointRecord ( struct FCheckpointRecord* Record )
	{
		static UFunction* pfnCreateCheckpointRecord = NULL;

		if ( !pfnCreateCheckpointRecord )
			pfnCreateCheckpointRecord = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.CreateCheckpointRecord" );

		ANavigationPoint_execCreateCheckpointRecord_Parms CreateCheckpointRecord_Parms;

		this->ProcessEvent( pfnCreateCheckpointRecord, &CreateCheckpointRecord_Parms, NULL );

		if ( Record )
			memcpy( Record, &CreateCheckpointRecord_Parms.Record, 0x4 ); // CPF_OutParm
	};

	bool ShouldSaveForCheckpoint ()
	{
		static UFunction* pfnShouldSaveForCheckpoint = NULL;

		if ( !pfnShouldSaveForCheckpoint )
			pfnShouldSaveForCheckpoint = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.ShouldSaveForCheckpoint" );

		ANavigationPoint_execShouldSaveForCheckpoint_Parms ShouldSaveForCheckpoint_Parms;

		this->ProcessEvent( pfnShouldSaveForCheckpoint, &ShouldSaveForCheckpoint_Parms, NULL );

		return ShouldSaveForCheckpoint_Parms.ReturnValue;
	};

	void eventShutDown ()
	{
		static UFunction* pfnShutDown = NULL;

		if ( !pfnShutDown )
			pfnShutDown = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.ShutDown" );

		ANavigationPoint_eventShutDown_Parms ShutDown_Parms;

		this->ProcessEvent( pfnShutDown, &ShutDown_Parms, NULL );
	};

	void OnToggle ( void* inAction )
	{
		static UFunction* pfnOnToggle = NULL;

		if ( !pfnOnToggle )
			pfnOnToggle = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.OnToggle" );

		ANavigationPoint_execOnToggle_Parms OnToggle_Parms;
		OnToggle_Parms.inAction = inAction;

		this->ProcessEvent( pfnOnToggle, &OnToggle_Parms, NULL );
	};

	bool IsOnDifferentNetwork ( class ANavigationPoint* Nav )
	{
		static UFunction* pfnIsOnDifferentNetwork = NULL;

		if ( !pfnIsOnDifferentNetwork )
			pfnIsOnDifferentNetwork = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.IsOnDifferentNetwork" );

		ANavigationPoint_execIsOnDifferentNetwork_Parms IsOnDifferentNetwork_Parms;
		IsOnDifferentNetwork_Parms.Nav = Nav;

		pfnIsOnDifferentNetwork->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsOnDifferentNetwork, &IsOnDifferentNetwork_Parms, NULL );
		pfnIsOnDifferentNetwork->FunctionFlags |= 0x400;

		return IsOnDifferentNetwork_Parms.ReturnValue;
	};

	bool GetAllNavInRadius ( class AActor* ChkActor, struct FVector ChkPoint, float Radius, unsigned long bSkipBlocked/*CPF_OptionalParm*/, int inNetworkID/*CPF_OptionalParm*/, struct FCylinder MinSize/*CPF_OptionalParm*/, TArray< class ANavigationPoint* >* out_NavList )
	{
		static UFunction* pfnGetAllNavInRadius = NULL;

		if ( !pfnGetAllNavInRadius )
			pfnGetAllNavInRadius = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetAllNavInRadius" );

		ANavigationPoint_execGetAllNavInRadius_Parms GetAllNavInRadius_Parms;
		GetAllNavInRadius_Parms.ChkActor = ChkActor;
		memcpy( &GetAllNavInRadius_Parms.ChkPoint, &ChkPoint, 0xC );
		GetAllNavInRadius_Parms.Radius = Radius;
		GetAllNavInRadius_Parms.bSkipBlocked = bSkipBlocked;
		GetAllNavInRadius_Parms.inNetworkID = inNetworkID;
		memcpy( &GetAllNavInRadius_Parms.MinSize, &MinSize, 0x8 );

		pfnGetAllNavInRadius->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetAllNavInRadius, &GetAllNavInRadius_Parms, NULL );
		pfnGetAllNavInRadius->FunctionFlags |= 0x400;

		if ( out_NavList )
			*out_NavList = GetAllNavInRadius_Parms.out_NavList; // CPF_OutParm

		return GetAllNavInRadius_Parms.ReturnValue;
	};

	class ANavigationPoint* GetNearestNavToPoint ( class AActor* ChkActor, struct FVector ChkPoint, class UClass* RequiredClass/*CPF_OptionalParm*/, TArray< class ANavigationPoint* > ExcludeList/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetNearestNavToPoint = NULL;

		if ( !pfnGetNearestNavToPoint )
			pfnGetNearestNavToPoint = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetNearestNavToPoint" );

		ANavigationPoint_execGetNearestNavToPoint_Parms GetNearestNavToPoint_Parms;
		GetNearestNavToPoint_Parms.ChkActor = ChkActor;
		memcpy( &GetNearestNavToPoint_Parms.ChkPoint, &ChkPoint, 0xC );
		GetNearestNavToPoint_Parms.RequiredClass = RequiredClass;
		GetNearestNavToPoint_Parms.ExcludeList = ExcludeList;

		this->ProcessEvent( pfnGetNearestNavToPoint, &GetNearestNavToPoint_Parms, NULL );

		return GetNearestNavToPoint_Parms.ReturnValue;
	};

	class ANavigationPoint* GetNearestNavToActor ( class AActor* ChkActor, class UClass* RequiredClass/*CPF_OptionalParm*/, TArray< class ANavigationPoint* > ExcludeList/*CPF_OptionalParm*/, float MinDist/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetNearestNavToActor = NULL;

		if ( !pfnGetNearestNavToActor )
			pfnGetNearestNavToActor = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetNearestNavToActor" );

		ANavigationPoint_execGetNearestNavToActor_Parms GetNearestNavToActor_Parms;
		GetNearestNavToActor_Parms.ChkActor = ChkActor;
		GetNearestNavToActor_Parms.RequiredClass = RequiredClass;
		GetNearestNavToActor_Parms.ExcludeList = ExcludeList;
		GetNearestNavToActor_Parms.MinDist = MinDist;

		this->ProcessEvent( pfnGetNearestNavToActor, &GetNearestNavToActor_Parms, NULL );

		return GetNearestNavToActor_Parms.ReturnValue;
	};

	bool ProceedWithMove ( class APawn* Other )
	{
		static UFunction* pfnProceedWithMove = NULL;

		if ( !pfnProceedWithMove )
			pfnProceedWithMove = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.ProceedWithMove" );

		ANavigationPoint_execProceedWithMove_Parms ProceedWithMove_Parms;
		ProceedWithMove_Parms.Other = Other;

		this->ProcessEvent( pfnProceedWithMove, &ProceedWithMove_Parms, NULL );

		return ProceedWithMove_Parms.ReturnValue;
	};

	bool eventSuggestMovePreparation ( class APawn* Other )
	{
		static UFunction* pfnSuggestMovePreparation = NULL;

		if ( !pfnSuggestMovePreparation )
			pfnSuggestMovePreparation = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.SuggestMovePreparation" );

		ANavigationPoint_eventSuggestMovePreparation_Parms SuggestMovePreparation_Parms;
		SuggestMovePreparation_Parms.Other = Other;

		this->ProcessEvent( pfnSuggestMovePreparation, &SuggestMovePreparation_Parms, NULL );

		return SuggestMovePreparation_Parms.ReturnValue;
	};

	float eventDetourWeight ( class APawn* Other, float PathWeight )
	{
		static UFunction* pfnDetourWeight = NULL;

		if ( !pfnDetourWeight )
			pfnDetourWeight = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.DetourWeight" );

		ANavigationPoint_eventDetourWeight_Parms DetourWeight_Parms;
		DetourWeight_Parms.Other = Other;
		DetourWeight_Parms.PathWeight = PathWeight;

		this->ProcessEvent( pfnDetourWeight, &DetourWeight_Parms, NULL );

		return DetourWeight_Parms.ReturnValue;
	};

	bool eventAccept ( class AActor* Incoming, class AActor* Source )
	{
		static UFunction* pfnAccept = NULL;

		if ( !pfnAccept )
			pfnAccept = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.Accept" );

		ANavigationPoint_eventAccept_Parms Accept_Parms;
		Accept_Parms.Incoming = Incoming;
		Accept_Parms.Source = Source;

		this->ProcessEvent( pfnAccept, &Accept_Parms, NULL );

		return Accept_Parms.ReturnValue;
	};

	int eventSpecialCost ( class APawn* Seeker, void* Path )
	{
		static UFunction* pfnSpecialCost = NULL;

		if ( !pfnSpecialCost )
			pfnSpecialCost = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.SpecialCost" );

		ANavigationPoint_eventSpecialCost_Parms SpecialCost_Parms;
		SpecialCost_Parms.Seeker = Seeker;
		SpecialCost_Parms.Path = Path;

		this->ProcessEvent( pfnSpecialCost, &SpecialCost_Parms, NULL );

		return SpecialCost_Parms.ReturnValue;
	};

	bool CanTeleport ( class AActor* A )
	{
		static UFunction* pfnCanTeleport = NULL;

		if ( !pfnCanTeleport )
			pfnCanTeleport = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.CanTeleport" );

		ANavigationPoint_execCanTeleport_Parms CanTeleport_Parms;
		CanTeleport_Parms.A = A;

		pfnCanTeleport->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnCanTeleport, &CanTeleport_Parms, NULL );
		pfnCanTeleport->FunctionFlags |= 0x400;

		return CanTeleport_Parms.ReturnValue;
	};

	bool IsUsableAnchorFor ( class APawn* P )
	{
		static UFunction* pfnIsUsableAnchorFor = NULL;

		if ( !pfnIsUsableAnchorFor )
			pfnIsUsableAnchorFor = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.IsUsableAnchorFor" );

		ANavigationPoint_execIsUsableAnchorFor_Parms IsUsableAnchorFor_Parms;
		IsUsableAnchorFor_Parms.P = P;

		pfnIsUsableAnchorFor->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsUsableAnchorFor, &IsUsableAnchorFor_Parms, NULL );
		pfnIsUsableAnchorFor->FunctionFlags |= 0x400;

		return IsUsableAnchorFor_Parms.ReturnValue;
	};

	void* GetReachSpecTo ( class ANavigationPoint* Nav, class UClass* SpecClass/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetReachSpecTo = NULL;

		if ( !pfnGetReachSpecTo )
			pfnGetReachSpecTo = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetReachSpecTo" );

		ANavigationPoint_execGetReachSpecTo_Parms GetReachSpecTo_Parms;
		GetReachSpecTo_Parms.Nav = Nav;
		GetReachSpecTo_Parms.SpecClass = SpecClass;

		pfnGetReachSpecTo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetReachSpecTo, &GetReachSpecTo_Parms, NULL );
		pfnGetReachSpecTo->FunctionFlags |= 0x400;

		return GetReachSpecTo_Parms.ReturnValue;
	};

	void GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight )
	{
		static UFunction* pfnGetBoundingCylinder = NULL;

		if ( !pfnGetBoundingCylinder )
			pfnGetBoundingCylinder = UObject::FindObject< UFunction >( "Function Engine.NavigationPoint.GetBoundingCylinder" );

		ANavigationPoint_execGetBoundingCylinder_Parms GetBoundingCylinder_Parms;

		pfnGetBoundingCylinder->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBoundingCylinder, &GetBoundingCylinder_Parms, NULL );
		pfnGetBoundingCylinder->FunctionFlags |= 0x400;

		if ( CollisionRadius )
			*CollisionRadius = GetBoundingCylinder_Parms.CollisionRadius; // CPF_OutParm
		if ( CollisionHeight )
			*CollisionHeight = GetBoundingCylinder_Parms.CollisionHeight; // CPF_OutParm
	};

};

UClass* ANavigationPoint::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif