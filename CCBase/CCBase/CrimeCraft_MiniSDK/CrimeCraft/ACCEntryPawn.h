/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCEntryPawn.h
// Date: 06/16/2011 @ 05:19:41.524
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCEntryPawn_execTick_Parms
{
	float DeltaTime;
};

struct ACCEntryPawn_execSetTargetRotation_Parms
{
	struct FRotator Target;
};

struct ACCEntryPawn_execGetRandomSelectionEmote_Parms
{
	struct FName ReturnValue; // CPF_ReturnParm
};

struct ACCEntryPawn_execPlaySelectionEmote_Parms
{
};

struct ACCEntryPawn_eventOnCreateCharacterComponent_Parms
{
};// FUNC_Event

struct ACCEntryPawn_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x6BC - 0x710)
class ACCEntryPawn : public ACCPawn
{
public:
	unsigned char                                      PawnClass;                                   // 0x06BC (0x0001)
	int                                                ItemOffsetID;                                // 0x06C0 (0x0004)
	TArray< struct FName >                             CharacterSelectionEmotes;                    // 0x06C4 (0x000C)
	struct FEntryPawnOutlook                           Outlook;                                     // 0x06D0 (0x0030)
	struct FRotator                                    TargetRotation;                              // 0x0700 (0x000C)
	unsigned long                                      EnableAutoRotation : 1;                      // 0x070C (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCEntryPawn" );

		return ClassPointer;
	};

public:
	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.Tick" );

		ACCEntryPawn_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void SetTargetRotation ( struct FRotator Target )
	{
		static UFunction* pfnSetTargetRotation = NULL;

		if ( !pfnSetTargetRotation )
			pfnSetTargetRotation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.SetTargetRotation" );

		ACCEntryPawn_execSetTargetRotation_Parms SetTargetRotation_Parms;
		memcpy( &SetTargetRotation_Parms.Target, &Target, 0xC );

		this->ProcessEvent( pfnSetTargetRotation, &SetTargetRotation_Parms, NULL );
	};

	struct FName GetRandomSelectionEmote ()
	{
		static UFunction* pfnGetRandomSelectionEmote = NULL;

		if ( !pfnGetRandomSelectionEmote )
			pfnGetRandomSelectionEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.GetRandomSelectionEmote" );

		ACCEntryPawn_execGetRandomSelectionEmote_Parms GetRandomSelectionEmote_Parms;

		this->ProcessEvent( pfnGetRandomSelectionEmote, &GetRandomSelectionEmote_Parms, NULL );

		return GetRandomSelectionEmote_Parms.ReturnValue;
	};

	void PlaySelectionEmote ()
	{
		static UFunction* pfnPlaySelectionEmote = NULL;

		if ( !pfnPlaySelectionEmote )
			pfnPlaySelectionEmote = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.PlaySelectionEmote" );

		ACCEntryPawn_execPlaySelectionEmote_Parms PlaySelectionEmote_Parms;

		this->ProcessEvent( pfnPlaySelectionEmote, &PlaySelectionEmote_Parms, NULL );
	};

	void eventOnCreateCharacterComponent ()
	{
		static UFunction* pfnOnCreateCharacterComponent = NULL;

		if ( !pfnOnCreateCharacterComponent )
			pfnOnCreateCharacterComponent = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.OnCreateCharacterComponent" );

		ACCEntryPawn_eventOnCreateCharacterComponent_Parms OnCreateCharacterComponent_Parms;

		this->ProcessEvent( pfnOnCreateCharacterComponent, &OnCreateCharacterComponent_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCEntryPawn.PostBeginPlay" );

		ACCEntryPawn_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCEntryPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif