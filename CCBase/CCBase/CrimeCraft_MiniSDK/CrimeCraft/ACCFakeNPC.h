/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCFakeNPC.h
// Date: 06/16/2011 @ 05:19:41.198
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCFakeNPC_eventPostBeginPlay_Parms
{
};// FUNC_Event

// (0x7C0 - 0x7E0)
class ACCFakeNPC : public ACCLobbyPawn
{
public:
	struct FString                                     UIName;                                      // 0x07C0 (0x000C)
	int                                                VisualId;                                    // 0x07CC (0x0004)
	TArray< struct FNpcFunctionalityDescription >      Functionality;                               // 0x07D0 (0x000C)
	int                                                ServerTag;                                   // 0x07DC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCFakeNPC" );

		return ClassPointer;
	};

public:
	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.CCFakeNPC.PostBeginPlay" );

		ACCFakeNPC_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* ACCFakeNPC::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif