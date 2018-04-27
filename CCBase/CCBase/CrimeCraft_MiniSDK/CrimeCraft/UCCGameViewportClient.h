/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UCCGameViewportClient.h
// Date: 06/16/2011 @ 05:19:41.548
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UCCGameViewportClient_execDrawTransition_Parms
{
	class UCanvas* Canvas;
};

// (0xFC - 0x114)
class UCCGameViewportClient : public UGameViewportClient
{
public:
	struct FString                                     ConnectingToLobby;                           // 0x00FC (0x000C)
	struct FString                                     ConnectingToInstance;                        // 0x0108 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCGameViewportClient" );

		return ClassPointer;
	};

public:
	void DrawTransition ( class UCanvas* Canvas )
	{
		static UFunction* pfnDrawTransition = NULL;

		if ( !pfnDrawTransition )
			pfnDrawTransition = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameViewportClient.DrawTransition" );

		UCCGameViewportClient_execDrawTransition_Parms DrawTransition_Parms;
		DrawTransition_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnDrawTransition, &DrawTransition_Parms, NULL );
	};

};

UClass* UCCGameViewportClient::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif