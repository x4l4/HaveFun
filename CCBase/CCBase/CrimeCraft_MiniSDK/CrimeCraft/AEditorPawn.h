/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AEditorPawn.h
// Date: 06/16/2011 @ 05:19:42.149
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AEditorPawn_execPostBeginPlay_Parms
{
};

// (0x1AC0 - 0x1AC2)
class AEditorPawn : public ACCInstancePawn
{
public:
	unsigned char                                      CharacterClass;                              // 0x1AC0 (0x0001)
	unsigned char                                      AnimType;                                    // 0x1AC1 (0x0001)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.EditorPawn" );

		return ClassPointer;
	};

public:
	void PostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function CrimeCraft.EditorPawn.PostBeginPlay" );

		AEditorPawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

};

UClass* AEditorPawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif