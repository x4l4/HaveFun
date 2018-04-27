/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTutorialPawn.h
// Date: 06/16/2011 @ 05:19:42.144
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCTutorialPawn_execSetActiveVisualCarrySlot_Parms
{
	unsigned char Slot;
};

struct ACCTutorialPawn_execUpdateMove_Parms
{
};

struct ACCTutorialPawn_execTick_Parms
{
	float DeltaTime;
};

// (0x1AC0 - 0x1AD4)
class ACCTutorialPawn : public ACCInstancePawn
{
public:
	struct FVector                                     PossessLocation;                             // 0x1AC0 (0x000C)
	float                                              InSprintTime;                                // 0x1ACC (0x0004)
	float                                              InCrouchTime;                                // 0x1AD0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTutorialPawn" );

		return ClassPointer;
	};

public:
	void SetActiveVisualCarrySlot ( unsigned char Slot )
	{
		static UFunction* pfnSetActiveVisualCarrySlot = NULL;

		if ( !pfnSetActiveVisualCarrySlot )
			pfnSetActiveVisualCarrySlot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialPawn.SetActiveVisualCarrySlot" );

		ACCTutorialPawn_execSetActiveVisualCarrySlot_Parms SetActiveVisualCarrySlot_Parms;
		SetActiveVisualCarrySlot_Parms.Slot = Slot;

		this->ProcessEvent( pfnSetActiveVisualCarrySlot, &SetActiveVisualCarrySlot_Parms, NULL );
	};

	void UpdateMove ()
	{
		static UFunction* pfnUpdateMove = NULL;

		if ( !pfnUpdateMove )
			pfnUpdateMove = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialPawn.UpdateMove" );

		ACCTutorialPawn_execUpdateMove_Parms UpdateMove_Parms;

		this->ProcessEvent( pfnUpdateMove, &UpdateMove_Parms, NULL );
	};

	void Tick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCTutorialPawn.Tick" );

		ACCTutorialPawn_execTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

};

UClass* ACCTutorialPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif