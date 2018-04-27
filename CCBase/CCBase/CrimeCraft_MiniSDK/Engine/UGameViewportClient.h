/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UGameViewportClient.h
// Date: 06/16/2011 @ 05:19:39.424
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

enum ESafeZoneType
{
	eSZ_TOP = 0,
	eSZ_BOTTOM = 1,
	eSZ_LEFT = 2,
	eSZ_RIGHT = 3,
	eSZ_MAX = 4
};

enum ESplitScreenType
{
	eSST_NONE = 0,
	eSST_2P_HORIZONTAL = 1,
	eSST_2P_VERTICAL = 2,
	eSST_3P_FAVOR_TOP = 3,
	eSST_3P_FAVOR_BOTTOM = 4,
	eSST_4P = 5,
	eSST_MAX = 6
};

struct UGameViewportClient_execRemoveLocalPlayer_Parms
{
	void* ExistingPlayer;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execAddLocalPlayer_Parms
{
	void* NewPlayer;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execNotifyPlayerRemoved_Parms
{
	int PlayerIndex;
	void* RemovedPlayer;
};// FUNC_Final

struct UGameViewportClient_execNotifyPlayerAdded_Parms
{
	int PlayerIndex;
	void* AddedPlayer;
};// FUNC_Final

struct UGameViewportClient_execDrawTransitionMessage_Parms
{
	class UCanvas* Canvas;
	struct FString Message;
};

struct UGameViewportClient_execDrawTransition_Parms
{
	class UCanvas* Canvas;
};

struct UGameViewportClient_eventPostRender_Parms
{
	class UCanvas* Canvas;
};// FUNC_Event

struct UGameViewportClient_execDrawTitleSafeArea_Parms
{
	class UCanvas* Canvas;
};

struct UGameViewportClient_eventTick_Parms
{
	float DeltaTime;
};// FUNC_Event

struct UGameViewportClient_execCalculatePixelCenter_Parms
{
	float out_CenterX; // CPF_OutParm
	float out_CenterY; // CPF_OutParm
	void* LPlayer;
	class UCanvas* Canvas;
	unsigned long bUseMaxPercent : 1;
};// FUNC_Final

struct UGameViewportClient_execCalculateDeadZoneForAllSides_Parms
{
	void* LPlayer;
	class UCanvas* Canvas;
	float fTopSafeZone; // CPF_OutParm
	float fBottomSafeZone; // CPF_OutParm
	float fLeftSafeZone; // CPF_OutParm
	float fRightSafeZone; // CPF_OutParm
	unsigned long bUseMaxPercent : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execCalculateDeadZone_Parms
{
	void* LPlayer;
	unsigned char SZType;
	class UCanvas* Canvas;
	unsigned long bUseMaxPercent : 1;
	float ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execCalculateSafeZoneValues_Parms
{
	float out_Horizontal; // CPF_OutParm
	float out_Vertical; // CPF_OutParm
	class UCanvas* Canvas;
	int LocalPlayerIndex;
	unsigned long bUseMaxPercent : 1;
};// FUNC_Final

struct UGameViewportClient_execGetPixelSizeOfScreen_Parms
{
	float out_Width; // CPF_OutParm
	float out_Height; // CPF_OutParm
	class UCanvas* Canvas;
	int LocalPlayerIndex;
};// FUNC_Final

struct UGameViewportClient_execHasRightSafeZone_Parms
{
	int LocalPlayerIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execHasLeftSafeZone_Parms
{
	int LocalPlayerIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execHasBottomSafeZone_Parms
{
	int LocalPlayerIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execHasTopSafeZone_Parms
{
	int LocalPlayerIndex;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_execConvertLocalPlayerToGamePlayerIndex_Parms
{
	void* LPlayer;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Final

struct UGameViewportClient_eventGetSubtitleRegion_Parms
{
	struct FVector2D MinPos; // CPF_OutParm
	struct FVector2D MaxPos; // CPF_OutParm
};// FUNC_Event

struct UGameViewportClient_eventLayoutPlayers_Parms
{
};// FUNC_Event

struct UGameViewportClient_execUpdateActiveSplitscreenType_Parms
{
};

struct UGameViewportClient_execGetSplitscreenConfiguration_Parms
{
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct UGameViewportClient_execSetSplitscreenConfiguration_Parms
{
	unsigned char SplitType;
};

struct UGameViewportClient_eventGameSessionEnded_Parms
{
};// FUNC_Event

struct UGameViewportClient_eventInsertInteraction_Parms
{
	class UInteraction* NewInteraction;
	int InIndex;
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct UGameViewportClient_execCreateInitialPlayer_Parms
{
	struct FString OutError; // CPF_OutParm
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UGameViewportClient_eventInit_Parms
{
	struct FString OutError; // CPF_OutParm
	unsigned long bConsoleEnabled : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UGameViewportClient_eventFindPlayerByControllerId_Parms
{
	int ControllerId;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Event

struct UGameViewportClient_eventRemovePlayer_Parms
{
	void* ExPlayer;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct UGameViewportClient_eventCreatePlayer_Parms
{
	int ControllerId;
	struct FString OutError; // CPF_OutParm
	unsigned long bSpawnActor : 1;
	void* ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct UGameViewportClient_execShouldForceFullscreenViewport_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UGameViewportClient_execIsFullScreenViewport_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct UGameViewportClient_execGetViewportSize_Parms
{
	struct FVector2D out_ViewportSize; // CPF_OutParm
};// FUNC_Final FUNC_Native

struct UGameViewportClient_execConsoleCommand_Parms
{
	struct FString Command;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UGameViewportClient_execHandleInputChar_Parms
{
	int ControllerId;
	struct FString Unicode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UGameViewportClient_execHandleInputAxis_Parms
{
	int ControllerId;
	struct FName Key;
	float Delta;
	float DeltaTime;
	unsigned long bGamepad : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UGameViewportClient_execHandleInputKey_Parms
{
	int ControllerId;
	struct FName Key;
	unsigned char EventType;
	float AmountDepressed;
	unsigned long bGamepad : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

// (0x3C - 0xFC)
class UGameViewportClient : public UObject
{
public:
	struct FPointer                                    VfTable_FViewportClient;                     // 0x003C (0x0004)
	struct FPointer                                    VfTable_FExec;                               // 0x0040 (0x0004)
	struct FPointer                                    Viewport;                                    // 0x0044 (0x0004)
	struct FPointer                                    ViewportFrame;                               // 0x0048 (0x0004)
	TArray< class UInteraction* >                      GlobalInteractions;                          // 0x004C (0x000C)
	class UClass*                                      UIControllerClass;                           // 0x0058 (0x0004)
	void*                                              UIController;                                // 0x005C (0x0004)
	class UConsole*                                    ViewportConsole;                             // 0x0060 (0x0004)
	struct FQWord                                      ShowFlags;                                   // 0x0064 (0x0008)
	struct FString                                     LoadingMessage;                              // 0x006C (0x000C)
	struct FString                                     SavingMessage;                               // 0x0078 (0x000C)
	struct FString                                     ConnectingMessage;                           // 0x0084 (0x000C)
	struct FString                                     PausedMessage;                               // 0x0090 (0x000C)
	struct FString                                     PrecachingMessage;                           // 0x009C (0x000C)
	unsigned long                                      bShowTitleSafeZone : 1;                      // 0x00A8 (0x0004) [0x00000001]
	unsigned long                                      bDisplayingUIMouseCursor : 1;                // 0x00A8 (0x0004) [0x00000002]
	unsigned long                                      bUIMouseCaptureOverride : 1;                 // 0x00A8 (0x0004) [0x00000004]
	unsigned long                                      bDisableWorldRendering : 1;                  // 0x00A8 (0x0004) [0x00000008]
	struct FTitleSafeZoneArea                          TitleSafeZone;                               // 0x00AC (0x0010)
	TArray< struct FSplitscreenData >                  SplitscreenInfo;                             // 0x00BC (0x000C)
	unsigned char                                      DesiredSplitscreenType;                      // 0x00C8 (0x0001)
	unsigned char                                      ActiveSplitscreenType;                       // 0x00C9 (0x0001)
	unsigned char                                      Default2PSplitType;                          // 0x00CA (0x0001)
	unsigned char                                      Default3PSplitType;                          // 0x00CB (0x0001)
	TArray< struct FDebugDisplayProperty >             DebugProperties;                             // 0x00CC (0x000C)
	struct FScriptDelegate                             __HandleInputKey__Delegate;                  // 0x00D8 (0x000C)
	struct FScriptDelegate                             __HandleInputAxis__Delegate;                 // 0x00E4 (0x000C)
	struct FScriptDelegate                             __HandleInputChar__Delegate;                 // 0x00F0 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.GameViewportClient" );

		return ClassPointer;
	};

public:
	int RemoveLocalPlayer ( void* ExistingPlayer )
	{
		static UFunction* pfnRemoveLocalPlayer = NULL;

		if ( !pfnRemoveLocalPlayer )
			pfnRemoveLocalPlayer = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.RemoveLocalPlayer" );

		UGameViewportClient_execRemoveLocalPlayer_Parms RemoveLocalPlayer_Parms;
		RemoveLocalPlayer_Parms.ExistingPlayer = ExistingPlayer;

		this->ProcessEvent( pfnRemoveLocalPlayer, &RemoveLocalPlayer_Parms, NULL );

		return RemoveLocalPlayer_Parms.ReturnValue;
	};

	int AddLocalPlayer ( void* NewPlayer )
	{
		static UFunction* pfnAddLocalPlayer = NULL;

		if ( !pfnAddLocalPlayer )
			pfnAddLocalPlayer = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.AddLocalPlayer" );

		UGameViewportClient_execAddLocalPlayer_Parms AddLocalPlayer_Parms;
		AddLocalPlayer_Parms.NewPlayer = NewPlayer;

		this->ProcessEvent( pfnAddLocalPlayer, &AddLocalPlayer_Parms, NULL );

		return AddLocalPlayer_Parms.ReturnValue;
	};

	void NotifyPlayerRemoved ( int PlayerIndex, void* RemovedPlayer )
	{
		static UFunction* pfnNotifyPlayerRemoved = NULL;

		if ( !pfnNotifyPlayerRemoved )
			pfnNotifyPlayerRemoved = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.NotifyPlayerRemoved" );

		UGameViewportClient_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;
		NotifyPlayerRemoved_Parms.PlayerIndex = PlayerIndex;
		NotifyPlayerRemoved_Parms.RemovedPlayer = RemovedPlayer;

		this->ProcessEvent( pfnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, NULL );
	};

	void NotifyPlayerAdded ( int PlayerIndex, void* AddedPlayer )
	{
		static UFunction* pfnNotifyPlayerAdded = NULL;

		if ( !pfnNotifyPlayerAdded )
			pfnNotifyPlayerAdded = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.NotifyPlayerAdded" );

		UGameViewportClient_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;
		NotifyPlayerAdded_Parms.PlayerIndex = PlayerIndex;
		NotifyPlayerAdded_Parms.AddedPlayer = AddedPlayer;

		this->ProcessEvent( pfnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, NULL );
	};

	void DrawTransitionMessage ( class UCanvas* Canvas, struct FString Message )
	{
		static UFunction* pfnDrawTransitionMessage = NULL;

		if ( !pfnDrawTransitionMessage )
			pfnDrawTransitionMessage = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.DrawTransitionMessage" );

		UGameViewportClient_execDrawTransitionMessage_Parms DrawTransitionMessage_Parms;
		DrawTransitionMessage_Parms.Canvas = Canvas;
		memcpy( &DrawTransitionMessage_Parms.Message, &Message, 0xC );

		this->ProcessEvent( pfnDrawTransitionMessage, &DrawTransitionMessage_Parms, NULL );
	};

	void DrawTransition ( class UCanvas* Canvas )
	{
		static UFunction* pfnDrawTransition = NULL;

		if ( !pfnDrawTransition )
			pfnDrawTransition = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.DrawTransition" );

		UGameViewportClient_execDrawTransition_Parms DrawTransition_Parms;
		DrawTransition_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnDrawTransition, &DrawTransition_Parms, NULL );
	};

	void eventPostRender ( class UCanvas* Canvas )
	{
		static UFunction* pfnPostRender = NULL;

		if ( !pfnPostRender )
			pfnPostRender = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.PostRender" );

		UGameViewportClient_eventPostRender_Parms PostRender_Parms;
		PostRender_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnPostRender, &PostRender_Parms, NULL );
	};

	void DrawTitleSafeArea ( class UCanvas* Canvas )
	{
		static UFunction* pfnDrawTitleSafeArea = NULL;

		if ( !pfnDrawTitleSafeArea )
			pfnDrawTitleSafeArea = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.DrawTitleSafeArea" );

		UGameViewportClient_execDrawTitleSafeArea_Parms DrawTitleSafeArea_Parms;
		DrawTitleSafeArea_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnDrawTitleSafeArea, &DrawTitleSafeArea_Parms, NULL );
	};

	void eventTick ( float DeltaTime )
	{
		static UFunction* pfnTick = NULL;

		if ( !pfnTick )
			pfnTick = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.Tick" );

		UGameViewportClient_eventTick_Parms Tick_Parms;
		Tick_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnTick, &Tick_Parms, NULL );
	};

	void CalculatePixelCenter ( void* LPlayer, class UCanvas* Canvas, unsigned long bUseMaxPercent/*CPF_OptionalParm*/, float* out_CenterX, float* out_CenterY )
	{
		static UFunction* pfnCalculatePixelCenter = NULL;

		if ( !pfnCalculatePixelCenter )
			pfnCalculatePixelCenter = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CalculatePixelCenter" );

		UGameViewportClient_execCalculatePixelCenter_Parms CalculatePixelCenter_Parms;
		CalculatePixelCenter_Parms.LPlayer = LPlayer;
		CalculatePixelCenter_Parms.Canvas = Canvas;
		CalculatePixelCenter_Parms.bUseMaxPercent = bUseMaxPercent;

		this->ProcessEvent( pfnCalculatePixelCenter, &CalculatePixelCenter_Parms, NULL );

		if ( out_CenterX )
			*out_CenterX = CalculatePixelCenter_Parms.out_CenterX; // CPF_OutParm
		if ( out_CenterY )
			*out_CenterY = CalculatePixelCenter_Parms.out_CenterY; // CPF_OutParm
	};

	bool CalculateDeadZoneForAllSides ( void* LPlayer, class UCanvas* Canvas, unsigned long bUseMaxPercent/*CPF_OptionalParm*/, float* fTopSafeZone, float* fBottomSafeZone, float* fLeftSafeZone, float* fRightSafeZone )
	{
		static UFunction* pfnCalculateDeadZoneForAllSides = NULL;

		if ( !pfnCalculateDeadZoneForAllSides )
			pfnCalculateDeadZoneForAllSides = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CalculateDeadZoneForAllSides" );

		UGameViewportClient_execCalculateDeadZoneForAllSides_Parms CalculateDeadZoneForAllSides_Parms;
		CalculateDeadZoneForAllSides_Parms.LPlayer = LPlayer;
		CalculateDeadZoneForAllSides_Parms.Canvas = Canvas;
		CalculateDeadZoneForAllSides_Parms.bUseMaxPercent = bUseMaxPercent;

		this->ProcessEvent( pfnCalculateDeadZoneForAllSides, &CalculateDeadZoneForAllSides_Parms, NULL );

		if ( fTopSafeZone )
			*fTopSafeZone = CalculateDeadZoneForAllSides_Parms.fTopSafeZone; // CPF_OutParm
		if ( fBottomSafeZone )
			*fBottomSafeZone = CalculateDeadZoneForAllSides_Parms.fBottomSafeZone; // CPF_OutParm
		if ( fLeftSafeZone )
			*fLeftSafeZone = CalculateDeadZoneForAllSides_Parms.fLeftSafeZone; // CPF_OutParm
		if ( fRightSafeZone )
			*fRightSafeZone = CalculateDeadZoneForAllSides_Parms.fRightSafeZone; // CPF_OutParm

		return CalculateDeadZoneForAllSides_Parms.ReturnValue;
	};

	float CalculateDeadZone ( void* LPlayer, unsigned char SZType, class UCanvas* Canvas, unsigned long bUseMaxPercent/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCalculateDeadZone = NULL;

		if ( !pfnCalculateDeadZone )
			pfnCalculateDeadZone = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CalculateDeadZone" );

		UGameViewportClient_execCalculateDeadZone_Parms CalculateDeadZone_Parms;
		CalculateDeadZone_Parms.LPlayer = LPlayer;
		CalculateDeadZone_Parms.SZType = SZType;
		CalculateDeadZone_Parms.Canvas = Canvas;
		CalculateDeadZone_Parms.bUseMaxPercent = bUseMaxPercent;

		this->ProcessEvent( pfnCalculateDeadZone, &CalculateDeadZone_Parms, NULL );

		return CalculateDeadZone_Parms.ReturnValue;
	};

	void CalculateSafeZoneValues ( class UCanvas* Canvas, int LocalPlayerIndex, unsigned long bUseMaxPercent, float* out_Horizontal, float* out_Vertical )
	{
		static UFunction* pfnCalculateSafeZoneValues = NULL;

		if ( !pfnCalculateSafeZoneValues )
			pfnCalculateSafeZoneValues = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CalculateSafeZoneValues" );

		UGameViewportClient_execCalculateSafeZoneValues_Parms CalculateSafeZoneValues_Parms;
		CalculateSafeZoneValues_Parms.Canvas = Canvas;
		CalculateSafeZoneValues_Parms.LocalPlayerIndex = LocalPlayerIndex;
		CalculateSafeZoneValues_Parms.bUseMaxPercent = bUseMaxPercent;

		this->ProcessEvent( pfnCalculateSafeZoneValues, &CalculateSafeZoneValues_Parms, NULL );

		if ( out_Horizontal )
			*out_Horizontal = CalculateSafeZoneValues_Parms.out_Horizontal; // CPF_OutParm
		if ( out_Vertical )
			*out_Vertical = CalculateSafeZoneValues_Parms.out_Vertical; // CPF_OutParm
	};

	void GetPixelSizeOfScreen ( class UCanvas* Canvas, int LocalPlayerIndex, float* out_Width, float* out_Height )
	{
		static UFunction* pfnGetPixelSizeOfScreen = NULL;

		if ( !pfnGetPixelSizeOfScreen )
			pfnGetPixelSizeOfScreen = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.GetPixelSizeOfScreen" );

		UGameViewportClient_execGetPixelSizeOfScreen_Parms GetPixelSizeOfScreen_Parms;
		GetPixelSizeOfScreen_Parms.Canvas = Canvas;
		GetPixelSizeOfScreen_Parms.LocalPlayerIndex = LocalPlayerIndex;

		this->ProcessEvent( pfnGetPixelSizeOfScreen, &GetPixelSizeOfScreen_Parms, NULL );

		if ( out_Width )
			*out_Width = GetPixelSizeOfScreen_Parms.out_Width; // CPF_OutParm
		if ( out_Height )
			*out_Height = GetPixelSizeOfScreen_Parms.out_Height; // CPF_OutParm
	};

	bool HasRightSafeZone ( int LocalPlayerIndex )
	{
		static UFunction* pfnHasRightSafeZone = NULL;

		if ( !pfnHasRightSafeZone )
			pfnHasRightSafeZone = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HasRightSafeZone" );

		UGameViewportClient_execHasRightSafeZone_Parms HasRightSafeZone_Parms;
		HasRightSafeZone_Parms.LocalPlayerIndex = LocalPlayerIndex;

		this->ProcessEvent( pfnHasRightSafeZone, &HasRightSafeZone_Parms, NULL );

		return HasRightSafeZone_Parms.ReturnValue;
	};

	bool HasLeftSafeZone ( int LocalPlayerIndex )
	{
		static UFunction* pfnHasLeftSafeZone = NULL;

		if ( !pfnHasLeftSafeZone )
			pfnHasLeftSafeZone = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HasLeftSafeZone" );

		UGameViewportClient_execHasLeftSafeZone_Parms HasLeftSafeZone_Parms;
		HasLeftSafeZone_Parms.LocalPlayerIndex = LocalPlayerIndex;

		this->ProcessEvent( pfnHasLeftSafeZone, &HasLeftSafeZone_Parms, NULL );

		return HasLeftSafeZone_Parms.ReturnValue;
	};

	bool HasBottomSafeZone ( int LocalPlayerIndex )
	{
		static UFunction* pfnHasBottomSafeZone = NULL;

		if ( !pfnHasBottomSafeZone )
			pfnHasBottomSafeZone = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HasBottomSafeZone" );

		UGameViewportClient_execHasBottomSafeZone_Parms HasBottomSafeZone_Parms;
		HasBottomSafeZone_Parms.LocalPlayerIndex = LocalPlayerIndex;

		this->ProcessEvent( pfnHasBottomSafeZone, &HasBottomSafeZone_Parms, NULL );

		return HasBottomSafeZone_Parms.ReturnValue;
	};

	bool HasTopSafeZone ( int LocalPlayerIndex )
	{
		static UFunction* pfnHasTopSafeZone = NULL;

		if ( !pfnHasTopSafeZone )
			pfnHasTopSafeZone = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HasTopSafeZone" );

		UGameViewportClient_execHasTopSafeZone_Parms HasTopSafeZone_Parms;
		HasTopSafeZone_Parms.LocalPlayerIndex = LocalPlayerIndex;

		this->ProcessEvent( pfnHasTopSafeZone, &HasTopSafeZone_Parms, NULL );

		return HasTopSafeZone_Parms.ReturnValue;
	};

	int ConvertLocalPlayerToGamePlayerIndex ( void* LPlayer )
	{
		static UFunction* pfnConvertLocalPlayerToGamePlayerIndex = NULL;

		if ( !pfnConvertLocalPlayerToGamePlayerIndex )
			pfnConvertLocalPlayerToGamePlayerIndex = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.ConvertLocalPlayerToGamePlayerIndex" );

		UGameViewportClient_execConvertLocalPlayerToGamePlayerIndex_Parms ConvertLocalPlayerToGamePlayerIndex_Parms;
		ConvertLocalPlayerToGamePlayerIndex_Parms.LPlayer = LPlayer;

		this->ProcessEvent( pfnConvertLocalPlayerToGamePlayerIndex, &ConvertLocalPlayerToGamePlayerIndex_Parms, NULL );

		return ConvertLocalPlayerToGamePlayerIndex_Parms.ReturnValue;
	};

	void eventGetSubtitleRegion ( struct FVector2D* MinPos, struct FVector2D* MaxPos )
	{
		static UFunction* pfnGetSubtitleRegion = NULL;

		if ( !pfnGetSubtitleRegion )
			pfnGetSubtitleRegion = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.GetSubtitleRegion" );

		UGameViewportClient_eventGetSubtitleRegion_Parms GetSubtitleRegion_Parms;

		this->ProcessEvent( pfnGetSubtitleRegion, &GetSubtitleRegion_Parms, NULL );

		if ( MinPos )
			memcpy( MinPos, &GetSubtitleRegion_Parms.MinPos, 0x8 ); // CPF_OutParm
		if ( MaxPos )
			memcpy( MaxPos, &GetSubtitleRegion_Parms.MaxPos, 0x8 ); // CPF_OutParm
	};

	void eventLayoutPlayers ()
	{
		static UFunction* pfnLayoutPlayers = NULL;

		if ( !pfnLayoutPlayers )
			pfnLayoutPlayers = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.LayoutPlayers" );

		UGameViewportClient_eventLayoutPlayers_Parms LayoutPlayers_Parms;

		this->ProcessEvent( pfnLayoutPlayers, &LayoutPlayers_Parms, NULL );
	};

	void UpdateActiveSplitscreenType ()
	{
		static UFunction* pfnUpdateActiveSplitscreenType = NULL;

		if ( !pfnUpdateActiveSplitscreenType )
			pfnUpdateActiveSplitscreenType = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.UpdateActiveSplitscreenType" );

		UGameViewportClient_execUpdateActiveSplitscreenType_Parms UpdateActiveSplitscreenType_Parms;

		this->ProcessEvent( pfnUpdateActiveSplitscreenType, &UpdateActiveSplitscreenType_Parms, NULL );
	};

	unsigned char GetSplitscreenConfiguration ()
	{
		static UFunction* pfnGetSplitscreenConfiguration = NULL;

		if ( !pfnGetSplitscreenConfiguration )
			pfnGetSplitscreenConfiguration = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.GetSplitscreenConfiguration" );

		UGameViewportClient_execGetSplitscreenConfiguration_Parms GetSplitscreenConfiguration_Parms;

		this->ProcessEvent( pfnGetSplitscreenConfiguration, &GetSplitscreenConfiguration_Parms, NULL );

		return GetSplitscreenConfiguration_Parms.ReturnValue;
	};

	void SetSplitscreenConfiguration ( unsigned char SplitType )
	{
		static UFunction* pfnSetSplitscreenConfiguration = NULL;

		if ( !pfnSetSplitscreenConfiguration )
			pfnSetSplitscreenConfiguration = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.SetSplitscreenConfiguration" );

		UGameViewportClient_execSetSplitscreenConfiguration_Parms SetSplitscreenConfiguration_Parms;
		SetSplitscreenConfiguration_Parms.SplitType = SplitType;

		this->ProcessEvent( pfnSetSplitscreenConfiguration, &SetSplitscreenConfiguration_Parms, NULL );
	};

	void eventGameSessionEnded ()
	{
		static UFunction* pfnGameSessionEnded = NULL;

		if ( !pfnGameSessionEnded )
			pfnGameSessionEnded = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.GameSessionEnded" );

		UGameViewportClient_eventGameSessionEnded_Parms GameSessionEnded_Parms;

		this->ProcessEvent( pfnGameSessionEnded, &GameSessionEnded_Parms, NULL );
	};

	int eventInsertInteraction ( class UInteraction* NewInteraction, int InIndex/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnInsertInteraction = NULL;

		if ( !pfnInsertInteraction )
			pfnInsertInteraction = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.InsertInteraction" );

		UGameViewportClient_eventInsertInteraction_Parms InsertInteraction_Parms;
		InsertInteraction_Parms.NewInteraction = NewInteraction;
		InsertInteraction_Parms.InIndex = InIndex;

		this->ProcessEvent( pfnInsertInteraction, &InsertInteraction_Parms, NULL );

		return InsertInteraction_Parms.ReturnValue;
	};

	bool CreateInitialPlayer ( struct FString* OutError )
	{
		static UFunction* pfnCreateInitialPlayer = NULL;

		if ( !pfnCreateInitialPlayer )
			pfnCreateInitialPlayer = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CreateInitialPlayer" );

		UGameViewportClient_execCreateInitialPlayer_Parms CreateInitialPlayer_Parms;

		this->ProcessEvent( pfnCreateInitialPlayer, &CreateInitialPlayer_Parms, NULL );

		if ( OutError )
			memcpy( OutError, &CreateInitialPlayer_Parms.OutError, 0xC ); // CPF_OutParm

		return CreateInitialPlayer_Parms.ReturnValue;
	};

	bool eventInit ( unsigned long bConsoleEnabled, struct FString* OutError )
	{
		static UFunction* pfnInit = NULL;

		if ( !pfnInit )
			pfnInit = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.Init" );

		UGameViewportClient_eventInit_Parms Init_Parms;
		Init_Parms.bConsoleEnabled = bConsoleEnabled;

		this->ProcessEvent( pfnInit, &Init_Parms, NULL );

		if ( OutError )
			memcpy( OutError, &Init_Parms.OutError, 0xC ); // CPF_OutParm

		return Init_Parms.ReturnValue;
	};

	void* eventFindPlayerByControllerId ( int ControllerId )
	{
		static UFunction* pfnFindPlayerByControllerId = NULL;

		if ( !pfnFindPlayerByControllerId )
			pfnFindPlayerByControllerId = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.FindPlayerByControllerId" );

		UGameViewportClient_eventFindPlayerByControllerId_Parms FindPlayerByControllerId_Parms;
		FindPlayerByControllerId_Parms.ControllerId = ControllerId;

		this->ProcessEvent( pfnFindPlayerByControllerId, &FindPlayerByControllerId_Parms, NULL );

		return FindPlayerByControllerId_Parms.ReturnValue;
	};

	bool eventRemovePlayer ( void* ExPlayer )
	{
		static UFunction* pfnRemovePlayer = NULL;

		if ( !pfnRemovePlayer )
			pfnRemovePlayer = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.RemovePlayer" );

		UGameViewportClient_eventRemovePlayer_Parms RemovePlayer_Parms;
		RemovePlayer_Parms.ExPlayer = ExPlayer;

		this->ProcessEvent( pfnRemovePlayer, &RemovePlayer_Parms, NULL );

		return RemovePlayer_Parms.ReturnValue;
	};

	void* eventCreatePlayer ( int ControllerId, unsigned long bSpawnActor, struct FString* OutError )
	{
		static UFunction* pfnCreatePlayer = NULL;

		if ( !pfnCreatePlayer )
			pfnCreatePlayer = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.CreatePlayer" );

		UGameViewportClient_eventCreatePlayer_Parms CreatePlayer_Parms;
		CreatePlayer_Parms.ControllerId = ControllerId;
		CreatePlayer_Parms.bSpawnActor = bSpawnActor;

		this->ProcessEvent( pfnCreatePlayer, &CreatePlayer_Parms, NULL );

		if ( OutError )
			memcpy( OutError, &CreatePlayer_Parms.OutError, 0xC ); // CPF_OutParm

		return CreatePlayer_Parms.ReturnValue;
	};

	bool ShouldForceFullscreenViewport ()
	{
		static UFunction* pfnShouldForceFullscreenViewport = NULL;

		if ( !pfnShouldForceFullscreenViewport )
			pfnShouldForceFullscreenViewport = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.ShouldForceFullscreenViewport" );

		UGameViewportClient_execShouldForceFullscreenViewport_Parms ShouldForceFullscreenViewport_Parms;

		pfnShouldForceFullscreenViewport->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnShouldForceFullscreenViewport, &ShouldForceFullscreenViewport_Parms, NULL );
		pfnShouldForceFullscreenViewport->FunctionFlags |= 0x400;

		return ShouldForceFullscreenViewport_Parms.ReturnValue;
	};

	bool IsFullScreenViewport ()
	{
		static UFunction* pfnIsFullScreenViewport = NULL;

		if ( !pfnIsFullScreenViewport )
			pfnIsFullScreenViewport = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.IsFullScreenViewport" );

		UGameViewportClient_execIsFullScreenViewport_Parms IsFullScreenViewport_Parms;

		pfnIsFullScreenViewport->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnIsFullScreenViewport, &IsFullScreenViewport_Parms, NULL );
		pfnIsFullScreenViewport->FunctionFlags |= 0x400;

		return IsFullScreenViewport_Parms.ReturnValue;
	};

	void GetViewportSize ( struct FVector2D* out_ViewportSize )
	{
		static UFunction* pfnGetViewportSize = NULL;

		if ( !pfnGetViewportSize )
			pfnGetViewportSize = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.GetViewportSize" );

		UGameViewportClient_execGetViewportSize_Parms GetViewportSize_Parms;

		pfnGetViewportSize->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetViewportSize, &GetViewportSize_Parms, NULL );
		pfnGetViewportSize->FunctionFlags |= 0x400;

		if ( out_ViewportSize )
			memcpy( out_ViewportSize, &GetViewportSize_Parms.out_ViewportSize, 0x8 ); // CPF_OutParm
	};

	struct FString ConsoleCommand ( struct FString Command )
	{
		static UFunction* pfnConsoleCommand = NULL;

		if ( !pfnConsoleCommand )
			pfnConsoleCommand = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.ConsoleCommand" );

		UGameViewportClient_execConsoleCommand_Parms ConsoleCommand_Parms;
		memcpy( &ConsoleCommand_Parms.Command, &Command, 0xC );

		pfnConsoleCommand->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnConsoleCommand, &ConsoleCommand_Parms, NULL );
		pfnConsoleCommand->FunctionFlags |= 0x400;

		return ConsoleCommand_Parms.ReturnValue;
	};

	bool HandleInputChar ( int ControllerId, struct FString Unicode )
	{
		static UFunction* pfnHandleInputChar = NULL;

		if ( !pfnHandleInputChar )
			pfnHandleInputChar = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HandleInputChar" );

		UGameViewportClient_execHandleInputChar_Parms HandleInputChar_Parms;
		HandleInputChar_Parms.ControllerId = ControllerId;
		memcpy( &HandleInputChar_Parms.Unicode, &Unicode, 0xC );

		this->ProcessEvent( pfnHandleInputChar, &HandleInputChar_Parms, NULL );

		return HandleInputChar_Parms.ReturnValue;
	};

	bool HandleInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime, unsigned long bGamepad )
	{
		static UFunction* pfnHandleInputAxis = NULL;

		if ( !pfnHandleInputAxis )
			pfnHandleInputAxis = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HandleInputAxis" );

		UGameViewportClient_execHandleInputAxis_Parms HandleInputAxis_Parms;
		HandleInputAxis_Parms.ControllerId = ControllerId;
		memcpy( &HandleInputAxis_Parms.Key, &Key, 0x8 );
		HandleInputAxis_Parms.Delta = Delta;
		HandleInputAxis_Parms.DeltaTime = DeltaTime;
		HandleInputAxis_Parms.bGamepad = bGamepad;

		this->ProcessEvent( pfnHandleInputAxis, &HandleInputAxis_Parms, NULL );

		return HandleInputAxis_Parms.ReturnValue;
	};

	bool HandleInputKey ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnHandleInputKey = NULL;

		if ( !pfnHandleInputKey )
			pfnHandleInputKey = UObject::FindObject< UFunction >( "Function Engine.GameViewportClient.HandleInputKey" );

		UGameViewportClient_execHandleInputKey_Parms HandleInputKey_Parms;
		HandleInputKey_Parms.ControllerId = ControllerId;
		memcpy( &HandleInputKey_Parms.Key, &Key, 0x8 );
		HandleInputKey_Parms.EventType = EventType;
		HandleInputKey_Parms.AmountDepressed = AmountDepressed;
		HandleInputKey_Parms.bGamepad = bGamepad;

		this->ProcessEvent( pfnHandleInputKey, &HandleInputKey_Parms, NULL );

		return HandleInputKey_Parms.ReturnValue;
	};

};

UClass* UGameViewportClient::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif