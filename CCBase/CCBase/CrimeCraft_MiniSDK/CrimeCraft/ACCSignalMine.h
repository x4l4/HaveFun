/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCSignalMine.h
// Date: 06/16/2011 @ 05:19:41.896
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCSignalMine_execSetIsSomeVanInsideClient_Parms
{
	unsigned long Value : 1;
};// FUNC_Final

struct ACCSignalMine_eventUnTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCSignalMine_eventTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCSignalMine_execUpdateRadarPresentation_Parms
{
	void* Sensor;
	void* PlayerOwner;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Native

// (0x3D0 - 0x3D8)
class ACCSignalMine : public ACCRadarBase
{
public:
	unsigned long                                      bIsSomeVanInside : 1;                        // 0x03D0 (0x0004) [0x00000001]
	unsigned long                                      bMyTeamSeeToo : 1;                           // 0x03D0 (0x0004) [0x00000002]
	int                                                TouchingPawnCount;                           // 0x03D4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCSignalMine" );

		return ClassPointer;
	};

public:
	void SetIsSomeVanInsideClient ( unsigned long Value )
	{
		static UFunction* pfnSetIsSomeVanInsideClient = NULL;

		if ( !pfnSetIsSomeVanInsideClient )
			pfnSetIsSomeVanInsideClient = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSignalMine.SetIsSomeVanInsideClient" );

		ACCSignalMine_execSetIsSomeVanInsideClient_Parms SetIsSomeVanInsideClient_Parms;
		SetIsSomeVanInsideClient_Parms.Value = Value;

		this->ProcessEvent( pfnSetIsSomeVanInsideClient, &SetIsSomeVanInsideClient_Parms, NULL );
	};

	void eventUnTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnUnTouchPawn = NULL;

		if ( !pfnUnTouchPawn )
			pfnUnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSignalMine.UnTouchPawn" );

		ACCSignalMine_eventUnTouchPawn_Parms UnTouchPawn_Parms;
		UnTouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouchPawn, &UnTouchPawn_Parms, NULL );
	};

	void eventTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnTouchPawn = NULL;

		if ( !pfnTouchPawn )
			pfnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSignalMine.TouchPawn" );

		ACCSignalMine_eventTouchPawn_Parms TouchPawn_Parms;
		TouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnTouchPawn, &TouchPawn_Parms, NULL );
	};

	bool UpdateRadarPresentation ( void* Sensor, void* PlayerOwner )
	{
		static UFunction* pfnUpdateRadarPresentation = NULL;

		if ( !pfnUpdateRadarPresentation )
			pfnUpdateRadarPresentation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCSignalMine.UpdateRadarPresentation" );

		ACCSignalMine_execUpdateRadarPresentation_Parms UpdateRadarPresentation_Parms;
		UpdateRadarPresentation_Parms.Sensor = Sensor;
		UpdateRadarPresentation_Parms.PlayerOwner = PlayerOwner;

		pfnUpdateRadarPresentation->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnUpdateRadarPresentation, &UpdateRadarPresentation_Parms, NULL );
		pfnUpdateRadarPresentation->FunctionFlags |= 0x400;

		return UpdateRadarPresentation_Parms.ReturnValue;
	};

};

UClass* ACCSignalMine::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif