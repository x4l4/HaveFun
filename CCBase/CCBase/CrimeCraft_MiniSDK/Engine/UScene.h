/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UScene.h
// Date: 06/16/2011 @ 05:19:40.43
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_SDPG_NumBits                         3

enum EDetailMode
{
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

enum ESceneDepthPriorityGroup
{
	SDPG_UnrealEdBackground = 0,
	SDPG_World = 1,
	SDPG_Foreground = 2,
	SDPG_UnrealEdForeground = 3,
	SDPG_PostProcess = 4,
	SDPG_MAX = 5
};

// (0x3C - 0x3C)
class UScene : public UObject
{
public:

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Scene" );

		return ClassPointer;
	};

public:
};

UClass* UScene::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif