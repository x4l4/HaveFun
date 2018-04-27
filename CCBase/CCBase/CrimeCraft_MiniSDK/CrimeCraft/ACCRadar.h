/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCRadar.h
// Date: 06/16/2011 @ 05:19:42.126
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCRadar_execShowEnemyOnRadarClient_Parms
{
	class ACCPlayerReplicationInfo* CCPRI;
	unsigned long Value : 1;
};// FUNC_Final

struct ACCRadar_execShowEnemyOnRadar_Parms
{
	class ACCInstancePawn* OtherPawn;
	unsigned long Value : 1;
};// FUNC_Final

struct ACCRadar_eventUnTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

struct ACCRadar_eventTouchPawn_Parms
{
	class ACCInstancePawn* Other;
};// FUNC_Event

// (0x3D0 - 0x3D4)
class ACCRadar : public ACCRadarBase
{
public:
	unsigned long                                      Enabled : 1;                                 // 0x03D0 (0x0004) [0x00000001]
	unsigned long                                      CanBeDeafen : 1;                             // 0x03D0 (0x0004) [0x00000002]
	unsigned long                                      bMyTeamSeeToo : 1;                           // 0x03D0 (0x0004) [0x00000004]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCRadar" );

		return ClassPointer;
	};

public:
	void ShowEnemyOnRadarClient ( class ACCPlayerReplicationInfo* CCPRI, unsigned long Value )
	{
		static UFunction* pfnShowEnemyOnRadarClient = NULL;

		if ( !pfnShowEnemyOnRadarClient )
			pfnShowEnemyOnRadarClient = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadar.ShowEnemyOnRadarClient" );

		ACCRadar_execShowEnemyOnRadarClient_Parms ShowEnemyOnRadarClient_Parms;
		ShowEnemyOnRadarClient_Parms.CCPRI = CCPRI;
		ShowEnemyOnRadarClient_Parms.Value = Value;

		this->ProcessEvent( pfnShowEnemyOnRadarClient, &ShowEnemyOnRadarClient_Parms, NULL );
	};

	void ShowEnemyOnRadar ( class ACCInstancePawn* OtherPawn, unsigned long Value )
	{
		static UFunction* pfnShowEnemyOnRadar = NULL;

		if ( !pfnShowEnemyOnRadar )
			pfnShowEnemyOnRadar = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadar.ShowEnemyOnRadar" );

		ACCRadar_execShowEnemyOnRadar_Parms ShowEnemyOnRadar_Parms;
		ShowEnemyOnRadar_Parms.OtherPawn = OtherPawn;
		ShowEnemyOnRadar_Parms.Value = Value;

		this->ProcessEvent( pfnShowEnemyOnRadar, &ShowEnemyOnRadar_Parms, NULL );
	};

	void eventUnTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnUnTouchPawn = NULL;

		if ( !pfnUnTouchPawn )
			pfnUnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadar.UnTouchPawn" );

		ACCRadar_eventUnTouchPawn_Parms UnTouchPawn_Parms;
		UnTouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnUnTouchPawn, &UnTouchPawn_Parms, NULL );
	};

	void eventTouchPawn ( class ACCInstancePawn* Other )
	{
		static UFunction* pfnTouchPawn = NULL;

		if ( !pfnTouchPawn )
			pfnTouchPawn = UObject::FindObject< UFunction >( "Function CrimeCraft.CCRadar.TouchPawn" );

		ACCRadar_eventTouchPawn_Parms TouchPawn_Parms;
		TouchPawn_Parms.Other = Other;

		this->ProcessEvent( pfnTouchPawn, &TouchPawn_Parms, NULL );
	};

};

UClass* ACCRadar::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif