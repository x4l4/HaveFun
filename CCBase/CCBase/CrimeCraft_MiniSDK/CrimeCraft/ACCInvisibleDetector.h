/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCInvisibleDetector.h
// Date: 06/16/2011 @ 05:19:42.104
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCInvisibleDetector_execConfigureRotationController_Parms
{
};

struct ACCInvisibleDetector_execEquippedTimer_Parms
{
};

struct ACCInvisibleDetector_execStartAnimationEffects_Parms
{
};

struct ACCInvisibleDetector_execInitializeAnimationNodes_Parms
{
};

struct ACCInvisibleDetector_eventTick_Parms
{
	float Delta;
};// FUNC_Event

struct ACCInvisibleDetector_execDestroyed_Parms
{
};

struct ACCInvisibleDetector_eventUnTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCInvisibleDetector_eventTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCInvisibleDetector_execPostBeginPlay_Parms
{
};

// (0x3D0 - 0x3F4)
class ACCInvisibleDetector : public ACCRadarBase
{
public:
	void*                                              DetectedPawnSound;                           // 0x03D0 (0x0004)
	void*                                              MainSelector;                                // 0x03D4 (0x0004)
	void*                                              EquipSequenceNode;                           // 0x03D8 (0x0004)
	void*                                              IdleSequenceNode;                            // 0x03DC (0x0004)
	void*                                              RotationController;                          // 0x03E0 (0x0004)
	float                                              EquipTime;                                   // 0x03E4 (0x0004)
	float                                              RotationSpeed;                               // 0x03E8 (0x0004)
	unsigned long                                      bRotationEnabled : 1;                        // 0x03EC (0x0004) [0x00000001]
	float                                              CurrentRotationAngle;                        // 0x03F0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCInvisibleDetector" );

		return ClassPointer;
	};

public:
	void ConfigureRotationController ()
	{
		static UFunction* pfnConfigureRotationController = NULL;

		if ( !pfnConfigureRotationController )
			pfnConfigureRotationController = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.ConfigureRotationController" );

		ACCInvisibleDetector_execConfigureRotationController_Parms ConfigureRotationController_Parms;

		this->ProcessEvent( pfnConfigureRotationController, &ConfigureRotationController_Parms, NULL );
	};

	void EquippedTimer ()
	{
		static UFunction* pfnEquippedTimer = NULL;

		if ( !pfnEquippedTimer )
			pfnEquippedTimer = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.EquippedTimer" );

		ACCInvisibleDetector_execEquippedTimer_Parms EquippedTimer_Parms;

		this->ProcessEvent( pfnEquippedTimer, &EquippedTimer_Parms, NULL );
	};

	void StartAnimationEffects ()
	{
		static UFunction* pfnStartAnimationEffects = NULL;

		if ( !pfnStartAnimationEffects )
			pfnStartAnimationEffects = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.StartAnimationEffects" );

		ACCInvisibleDetector_execStartAnimationEffects_Parms StartAnimationEffects_Parms;

		this->ProcessEvent( pfnStartAnimationEffects, &StartAnimationEffects_Parms, NULL );
	};

	void InitializeAnimationNodes ()
	{
		static UFunction* pfnInitializeAnimationNodes = NULL;

		if ( !pfnInitializeAnimationNodes )
			pfnInitializeAnimationNodes = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.InitializeAnimationNodes" );

		ACCInvisibleDetector_execInitializeAnimationNodes_Parms InitializeAnimationNodes_Parms;

		this->ProcessEvent( pfnInitializeAnimationNodes, &InitializeAnimationNodes_Parms, NULL );
	};

	void eventTick ( float Delta )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.Tick" );

		ACCInvisibleDetector_eventTick_Parms Tick_Parms;
		Tick_Parms.Delta = Delta;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void Destroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.Destroyed" );

		ACCInvisibleDetector_execDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void eventUnTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnUnTouchPawn = NULL;

		if ( !pfnUnTouchPawn )
			pfnUnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.UnTouchPawn" );

		ACCInvisibleDetector_eventUnTouchPawn_Parms UnTouchPawn_Parms;
		UnTouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouchPawn, &UnTouchPawn_Parms, NULL );
	};

	void eventTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnTouchPawn = NULL;

		if ( !pfnTouchPawn )
			pfnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.TouchPawn" );

		ACCInvisibleDetector_eventTouchPawn_Parms TouchPawn_Parms;
		TouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnTouchPawn, &TouchPawn_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCInvisibleDetector.PostBeginPlay" );

		ACCInvisibleDetector_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCInvisibleDetector::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif