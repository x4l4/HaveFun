/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCBotSoloPawn.h
// Date: 06/16/2011 @ 05:19:40.481
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCBotSoloPawn_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct ACCBotSoloPawn_execPostBeginPlay_Parms
{
};

struct ACCBotSoloPawn_execClearNeedTickFlag_Parms
{
};

struct ACCBotSoloPawn_execUpdateMeshBoneControllers_Parms
{
	float DeltaTime;
};

// (0x1C40 - 0x1C44)
class ACCBotSoloPawn : public ACCBotPawn
{
public:
	unsigned long                                      bIsNeedTick : 1;                             // 0x1C40 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCBotSoloPawn" );

		return ClassPointer;
	};

public:
	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotSoloPawn.Tick" );

		ACCBotSoloPawn_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotSoloPawn.PostBeginPlay" );

		ACCBotSoloPawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void ClearNeedTickFlag ()
	{
		static UFunction* pfnClearNeedTickFlag = NULL;

		if ( !pfnClearNeedTickFlag )
			pfnClearNeedTickFlag = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotSoloPawn.ClearNeedTickFlag" );

		ACCBotSoloPawn_execClearNeedTickFlag_Parms ClearNeedTickFlag_Parms;

		this->ProcessEvent( pfnClearNeedTickFlag, &ClearNeedTickFlag_Parms, NULL );
	};

	void UpdateMeshBoneControllers ( float DeltaTime )
	{
		static UFunction* pfnUpdateMeshBoneControllers = NULL;

		if ( !pfnUpdateMeshBoneControllers )
			pfnUpdateMeshBoneControllers = UObject::FindObject< UFunction >( "Function CrimeCraft.CCBotSoloPawn.UpdateMeshBoneControllers" );

		ACCBotSoloPawn_execUpdateMeshBoneControllers_Parms UpdateMeshBoneControllers_Parms;
		UpdateMeshBoneControllers_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateMeshBoneControllers, &UpdateMeshBoneControllers_Parms, NULL );
	};

};

UClass* ACCBotSoloPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif