/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AVolume.h
// Date: 06/16/2011 @ 05:19:39.805
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AVolume_eventProcessActorSetVolume_Parms
{
	class AActor* Other;
};// FUNC_Event

struct AVolume_eventCollisionChanged_Parms
{
};// FUNC_Event

struct AVolume_execOnToggle_Parms
{
	void* Action;
};

struct AVolume_execDisplayDebug_Parms
{
	class AHUD* HUD;
	float out_YL; // CPF_OutParm
	float out_YPos; // CPF_OutParm
};

struct AVolume_execGetLocationStringFor_Parms
{
	class APlayerReplicationInfo* PRI;
	struct FString ReturnValue; // CPF_ReturnParm
};

struct AVolume_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AVolume_execEncompasses_Parms
{
	class AActor* Other;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x1E0 - 0x1F8)
class AVolume : public ABrush
{
public:
	class AActor*                                      AssociatedActor;                             // 0x01E0 (0x0004)
	int                                                LocationPriority;                            // 0x01E4 (0x0004)
	struct FString                                     LocationName;                                // 0x01E8 (0x000C)
	unsigned long                                      bForcePawnWalk : 1;                          // 0x01F4 (0x0004) [0x00000001]
	unsigned long                                      bProcessAllActors : 1;                       // 0x01F4 (0x0004) [0x00000002]

	// AssociatedTouch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Volume" );

		return ClassPointer;
	};

public:
	void eventProcessActorSetVolume ( class AActor* Other )
	{
		static UFunction* pfnProcessActorSetVolume = NULL;

		if ( !pfnProcessActorSetVolume )
			pfnProcessActorSetVolume = UObject::FindObject< UFunction >( "Function Engine.Volume.ProcessActorSetVolume" );

		AVolume_eventProcessActorSetVolume_Parms ProcessActorSetVolume_Parms;
		ProcessActorSetVolume_Parms.Other = Other;

		this->ProcessEvent( pfnProcessActorSetVolume, &ProcessActorSetVolume_Parms, NULL );
	};

	void eventCollisionChanged ()
	{
		static UFunction* pfnCollisionChanged = NULL;

		if ( !pfnCollisionChanged )
			pfnCollisionChanged = UObject::FindObject< UFunction >( "Function Engine.Volume.CollisionChanged" );

		AVolume_eventCollisionChanged_Parms CollisionChanged_Parms;

		this->ProcessEvent( pfnCollisionChanged, &CollisionChanged_Parms, NULL );
	};

	void OnToggle ( void* Action )
	{
		static UFunction* pfnOnToggle = NULL;

		if ( !pfnOnToggle )
			pfnOnToggle = UObject::FindObject< UFunction >( "Function Engine.Volume.OnToggle" );

		AVolume_execOnToggle_Parms OnToggle_Parms;
		OnToggle_Parms.Action = Action;

		this->ProcessEvent( pfnOnToggle, &OnToggle_Parms, NULL );
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
	{
		static UFunction* pfnDisplayDebug = NULL;

		if ( !pfnDisplayDebug )
			pfnDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.Volume.DisplayDebug" );

		AVolume_execDisplayDebug_Parms DisplayDebug_Parms;
		DisplayDebug_Parms.HUD = HUD;

		this->ProcessEvent( pfnDisplayDebug, &DisplayDebug_Parms, NULL );

		if ( out_YL )
			*out_YL = DisplayDebug_Parms.out_YL; // CPF_OutParm
		if ( out_YPos )
			*out_YPos = DisplayDebug_Parms.out_YPos; // CPF_OutParm
	};

	struct FString GetLocationStringFor ( class APlayerReplicationInfo* PRI )
	{
		static UFunction* pfnGetLocationStringFor = NULL;

		if ( !pfnGetLocationStringFor )
			pfnGetLocationStringFor = UObject::FindObject< UFunction >( "Function Engine.Volume.GetLocationStringFor" );

		AVolume_execGetLocationStringFor_Parms GetLocationStringFor_Parms;
		GetLocationStringFor_Parms.PRI = PRI;

		this->ProcessEvent( pfnGetLocationStringFor, &GetLocationStringFor_Parms, NULL );

		return GetLocationStringFor_Parms.ReturnValue;
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.Volume.PostBeginPlay" );

		AVolume_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	bool Encompasses ( class AActor* Other )
	{
		static UFunction* pfnEncompasses = NULL;

		if ( !pfnEncompasses )
			pfnEncompasses = UObject::FindObject< UFunction >( "Function Engine.Volume.Encompasses" );

		AVolume_execEncompasses_Parms Encompasses_Parms;
		Encompasses_Parms.Other = Other;

		pfnEncompasses->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnEncompasses, &Encompasses_Parms, NULL );
		pfnEncompasses->FunctionFlags |= 0x400;

		return Encompasses_Parms.ReturnValue;
	};

};

UClass* AVolume::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif