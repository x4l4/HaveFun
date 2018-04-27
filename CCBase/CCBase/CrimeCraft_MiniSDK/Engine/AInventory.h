/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AInventory.h
// Date: 06/16/2011 @ 05:19:39.823
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AInventory_execOwnerEvent_Parms
{
	struct FName EventName;
};

struct AInventory_execGetLocalString_Parms
{
	int Switch;
	class APlayerReplicationInfo* RelatedPRI1;
	class APlayerReplicationInfo* RelatedPRI2;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AInventory_execDropFrom_Parms
{
	struct FVector StartLocation;
	struct FVector StartVelocity;
};

struct AInventory_execDenyPickupQuery_Parms
{
	class UClass* ItemClass;
	class AActor* Pickup;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AInventory_execItemRemovedFromInvManager_Parms
{
};

struct AInventory_execClientGivenTo_Parms
{
	class APawn* NewOwner;
	unsigned long bDoNotActivate : 1;
};

struct AInventory_execGivenTo_Parms
{
	class APawn* thisPawn;
	unsigned long bDoNotActivate : 1;
};

struct AInventory_execAnnouncePickup_Parms
{
	class APawn* Other;
};

struct AInventory_execGiveTo_Parms
{
	class APawn* Other;
};// FUNC_Final

struct AInventory_execDetourWeight_Parms
{
	class APawn* Other;
	float PathWeight;
	float ReturnValue; // CPF_ReturnParm
};

struct AInventory_execBotDesireability_Parms
{
	class AActor* PickupHolder;
	class APawn* P;
	class AController* C;
	float ReturnValue; // CPF_ReturnParm
};

struct AInventory_eventDestroyed_Parms
{
};// FUNC_Event

struct AInventory_execGetHumanReadableName_Parms
{
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AInventory_execActiveRenderOverlays_Parms
{
	class AHUD* H;
};

struct AInventory_execRenderOverlays_Parms
{
	class AHUD* H;
};

// (0x1BC - 0x208)
class AInventory : public AActor
{
public:
	class AInventory*                                  Inventory;                                   // 0x01BC (0x0004)
	void*                                              InvManager;                                  // 0x01C0 (0x0004)
	struct FString                                     ItemName;                                    // 0x01C4 (0x000C)
	unsigned long                                      bRenderOverlays : 1;                         // 0x01D0 (0x0004) [0x00000001]
	unsigned long                                      bReceiveOwnerEvents : 1;                     // 0x01D0 (0x0004) [0x00000002]
	unsigned long                                      bDropOnDeath : 1;                            // 0x01D0 (0x0004) [0x00000004]
	unsigned long                                      bDelayedSpawn : 1;                           // 0x01D0 (0x0004) [0x00000008]
	unsigned long                                      bPredictRespawns : 1;                        // 0x01D0 (0x0004) [0x00000010]
	float                                              RespawnTime;                                 // 0x01D4 (0x0004)
	float                                              MaxDesireability;                            // 0x01D8 (0x0004)
	struct FString                                     PickupMessage;                               // 0x01DC (0x000C)
	void*                                              PickupSound;                                 // 0x01E8 (0x0004)
	struct FString                                     PickupForce;                                 // 0x01EC (0x000C)
	class UClass*                                      DroppedPickupClass;                          // 0x01F8 (0x0004)
	class UPrimitiveComponent*                         DroppedPickupMesh;                           // 0x01FC (0x0004)
	class UPrimitiveComponent*                         PickupFactoryMesh;                           // 0x0200 (0x0004)
	void*                                              DroppedPickupParticles;                      // 0x0204 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Inventory" );

		return ClassPointer;
	};

public:
	void OwnerEvent ( struct FName EventName )
	{
		static UFunction* pfnOwnerEvent = NULL;

		if ( !pfnOwnerEvent )
			pfnOwnerEvent = UObject::FindObject< UFunction >( "Function Engine.Inventory.OwnerEvent" );

		AInventory_execOwnerEvent_Parms OwnerEvent_Parms;
		memcpy( &OwnerEvent_Parms.EventName, &EventName, 0x8 );

		this->ProcessEvent( pfnOwnerEvent, &OwnerEvent_Parms, NULL );
	};

	struct FString GetLocalString ( int Switch/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI1/*CPF_OptionalParm*/, class APlayerReplicationInfo* RelatedPRI2/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGetLocalString = NULL;

		if ( !pfnGetLocalString )
			pfnGetLocalString = UObject::FindObject< UFunction >( "Function Engine.Inventory.GetLocalString" );

		AInventory_execGetLocalString_Parms GetLocalString_Parms;
		GetLocalString_Parms.Switch = Switch;
		GetLocalString_Parms.RelatedPRI1 = RelatedPRI1;
		GetLocalString_Parms.RelatedPRI1 = RelatedPRI1;

		this->ProcessEvent( pfnGetLocalString, &GetLocalString_Parms, NULL );

		return GetLocalString_Parms.ReturnValue;
	};

	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity )
	{
		static UFunction* pfnDropFrom = NULL;

		if ( !pfnDropFrom )
			pfnDropFrom = UObject::FindObject< UFunction >( "Function Engine.Inventory.DropFrom" );

		AInventory_execDropFrom_Parms DropFrom_Parms;
		memcpy( &DropFrom_Parms.StartLocation, &StartLocation, 0xC );
		memcpy( &DropFrom_Parms.StartVelocity, &StartVelocity, 0xC );

		this->ProcessEvent( pfnDropFrom, &DropFrom_Parms, NULL );
	};

	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup )
	{
		static UFunction* pfnDenyPickupQuery = NULL;

		if ( !pfnDenyPickupQuery )
			pfnDenyPickupQuery = UObject::FindObject< UFunction >( "Function Engine.Inventory.DenyPickupQuery" );

		AInventory_execDenyPickupQuery_Parms DenyPickupQuery_Parms;
		DenyPickupQuery_Parms.ItemClass = ItemClass;
		DenyPickupQuery_Parms.Pickup = Pickup;

		this->ProcessEvent( pfnDenyPickupQuery, &DenyPickupQuery_Parms, NULL );

		return DenyPickupQuery_Parms.ReturnValue;
	};

	void ItemRemovedFromInvManager ()
	{
		static UFunction* pfnItemRemovedFromInvManager = NULL;

		if ( !pfnItemRemovedFromInvManager )
			pfnItemRemovedFromInvManager = UObject::FindObject< UFunction >( "Function Engine.Inventory.ItemRemovedFromInvManager" );

		AInventory_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

		this->ProcessEvent( pfnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
	};

	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
	{
		static UFunction* pfnClientGivenTo = NULL;

		if ( !pfnClientGivenTo )
			pfnClientGivenTo = UObject::FindObject< UFunction >( "Function Engine.Inventory.ClientGivenTo" );

		AInventory_execClientGivenTo_Parms ClientGivenTo_Parms;
		ClientGivenTo_Parms.NewOwner = NewOwner;
		ClientGivenTo_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnClientGivenTo, &ClientGivenTo_Parms, NULL );
	};

	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnGivenTo = NULL;

		if ( !pfnGivenTo )
			pfnGivenTo = UObject::FindObject< UFunction >( "Function Engine.Inventory.GivenTo" );

		AInventory_execGivenTo_Parms GivenTo_Parms;
		GivenTo_Parms.thisPawn = thisPawn;
		GivenTo_Parms.bDoNotActivate = bDoNotActivate;

		this->ProcessEvent( pfnGivenTo, &GivenTo_Parms, NULL );
	};

	void AnnouncePickup ( class APawn* Other )
	{
		static UFunction* pfnAnnouncePickup = NULL;

		if ( !pfnAnnouncePickup )
			pfnAnnouncePickup = UObject::FindObject< UFunction >( "Function Engine.Inventory.AnnouncePickup" );

		AInventory_execAnnouncePickup_Parms AnnouncePickup_Parms;
		AnnouncePickup_Parms.Other = Other;

		this->ProcessEvent( pfnAnnouncePickup, &AnnouncePickup_Parms, NULL );
	};

	void GiveTo ( class APawn* Other )
	{
		static UFunction* pfnGiveTo = NULL;

		if ( !pfnGiveTo )
			pfnGiveTo = UObject::FindObject< UFunction >( "Function Engine.Inventory.GiveTo" );

		AInventory_execGiveTo_Parms GiveTo_Parms;
		GiveTo_Parms.Other = Other;

		this->ProcessEvent( pfnGiveTo, &GiveTo_Parms, NULL );
	};

	float DetourWeight ( class APawn* Other, float PathWeight )
	{
		static UFunction* pfnDetourWeight = NULL;

		if ( !pfnDetourWeight )
			pfnDetourWeight = UObject::FindObject< UFunction >( "Function Engine.Inventory.DetourWeight" );

		AInventory_execDetourWeight_Parms DetourWeight_Parms;
		DetourWeight_Parms.Other = Other;
		DetourWeight_Parms.PathWeight = PathWeight;

		this->ProcessEvent( pfnDetourWeight, &DetourWeight_Parms, NULL );

		return DetourWeight_Parms.ReturnValue;
	};

	float BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C )
	{
		static UFunction* pfnBotDesireability = NULL;

		if ( !pfnBotDesireability )
			pfnBotDesireability = UObject::FindObject< UFunction >( "Function Engine.Inventory.BotDesireability" );

		AInventory_execBotDesireability_Parms BotDesireability_Parms;
		BotDesireability_Parms.PickupHolder = PickupHolder;
		BotDesireability_Parms.P = P;
		BotDesireability_Parms.C = C;

		this->ProcessEvent( pfnBotDesireability, &BotDesireability_Parms, NULL );

		return BotDesireability_Parms.ReturnValue;
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.Inventory.Destroyed" );

		AInventory_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	struct FString GetHumanReadableName ()
	{
		static UFunction* pfnGetHumanReadableName = NULL;

		if ( !pfnGetHumanReadableName )
			pfnGetHumanReadableName = UObject::FindObject< UFunction >( "Function Engine.Inventory.GetHumanReadableName" );

		AInventory_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

		this->ProcessEvent( pfnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

		return GetHumanReadableName_Parms.ReturnValue;
	};

	void ActiveRenderOverlays ( class AHUD* H )
	{
		static UFunction* pfnActiveRenderOverlays = NULL;

		if ( !pfnActiveRenderOverlays )
			pfnActiveRenderOverlays = UObject::FindObject< UFunction >( "Function Engine.Inventory.ActiveRenderOverlays" );

		AInventory_execActiveRenderOverlays_Parms ActiveRenderOverlays_Parms;
		ActiveRenderOverlays_Parms.H = H;

		this->ProcessEvent( pfnActiveRenderOverlays, &ActiveRenderOverlays_Parms, NULL );
	};

	void RenderOverlays ( class AHUD* H )
	{
		static UFunction* pfnRenderOverlays = NULL;

		if ( !pfnRenderOverlays )
			pfnRenderOverlays = UObject::FindObject< UFunction >( "Function Engine.Inventory.RenderOverlays" );

		AInventory_execRenderOverlays_Parms RenderOverlays_Parms;
		RenderOverlays_Parms.H = H;

		this->ProcessEvent( pfnRenderOverlays, &RenderOverlays_Parms, NULL );
	};

};

UClass* AInventory::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif