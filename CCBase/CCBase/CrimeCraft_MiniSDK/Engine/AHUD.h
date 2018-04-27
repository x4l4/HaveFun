/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AHUD.h
// Date: 06/16/2011 @ 05:19:39.436
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AHUD_execGetConsoleFont_Parms
{
	class UFont* ReturnValue; // CPF_ReturnParm
};

struct AHUD_eventOnLostFocusPause_Parms
{
	unsigned long Enable : 1;
};// FUNC_Event

struct AHUD_execPlayerOwnerDied_Parms
{
};

struct AHUD_execGetRYGColorRamp_Parms
{
	float Pct;
	struct FColor ReturnValue; // CPF_ReturnParm
};

struct AHUD_execGetFontSizeIndex_Parms
{
	int FontSize;
	class UFont* ReturnValue; // CPF_ReturnParm
};

struct AHUD_execDisplayLocalMessages_Parms
{
};

struct AHUD_execDrawMessageText_Parms
{
	struct FHudLocalizedMessage LocalMessage;
	float ScreenX;
	float ScreenY;
};

struct AHUD_execDrawMessage_Parms
{
	int I;
	float PosY;
	float DX; // CPF_OutParm
	float DY; // CPF_OutParm
};

struct AHUD_execGetScreenCoords_Parms
{
	float PosY;
	float ScreenX; // CPF_OutParm
	float ScreenY; // CPF_OutParm
	struct FHudLocalizedMessage InMessage; // CPF_OutParm
};

struct AHUD_execAddLocalizedMessage_Parms
{
	int Index;
	class UClass* InMessageClass;
	struct FString CriticalString;
	int Switch;
	float Position;
	float Lifetime;
	int FontSize;
	struct FColor DrawColor;
	int MessageCount;
	class UObject* OptionalObject;
	int OptionalData;
};

struct AHUD_execLocalizedMessage_Parms
{
	class UClass* InMessageClass;
	class APlayerReplicationInfo* RelatedPRI;
	struct FString CriticalString;
	int Switch;
	float Position;
	float Lifetime;
	int FontSize;
	struct FColor DrawColor;
	class UObject* OptionalObject;
	int OptionalData;
};

struct AHUD_execAddConsoleMessage_Parms
{
	struct FString M;
	class UClass* InMessageClass;
	class APlayerReplicationInfo* PRI;
	float Lifetime;
};

struct AHUD_execDisplayConsoleMessages_Parms
{
};

struct AHUD_execMessage_Parms
{
	class APlayerReplicationInfo* PRI;
	struct FString msg;
	struct FName MsgType;
	float Lifetime;
};

struct AHUD_execClearMessage_Parms
{
	struct FHudLocalizedMessage M; // CPF_OutParm
};

struct AHUD_execDisplayBadConnectionAlert_Parms
{
};

struct AHUD_execDisplayProgressMessage_Parms
{
};

struct AHUD_execDrawEngineHUD_Parms
{
};

struct AHUD_execDrawDemoHUD_Parms
{
};

struct AHUD_execDrawHUD_Parms
{
};

struct AHUD_eventPostRender_Parms
{
};// FUNC_Event

struct AHUD_execPreCalcValues_Parms
{
};

struct AHUD_execDrawRoute_Parms
{
	class APawn* Target;
};

struct AHUD_execFXStop_Parms
{
	class UClass* aClass;
};// FUNC_Exec

struct AHUD_execFXPlay_Parms
{
	class UClass* aClass;
	struct FString FXAnimPath;
};// FUNC_Exec

struct AHUD_execShouldDisplayDebug_Parms
{
	struct FName DebugType;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct AHUD_execShowDebug_Parms
{
	struct FName DebugType;
};// FUNC_Exec

struct AHUD_execSetShowScores_Parms
{
	unsigned long bNewValue : 1;
};// FUNC_Exec

struct AHUD_execShowScores_Parms
{
};// FUNC_Exec

struct AHUD_execShowHUD_Parms
{
};// FUNC_Exec

struct AHUD_execToggleHUD_Parms
{
};// FUNC_Exec

struct AHUD_eventDestroyed_Parms
{
};// FUNC_Event

struct AHUD_execSpawnScoreBoard_Parms
{
	class UClass* ScoringType;
};

struct AHUD_eventPostBeginPlay_Parms
{
};// FUNC_Event

struct AHUD_execDraw2DLine_Parms
{
	int X1;
	int Y1;
	int X2;
	int Y2;
	struct FColor LineColor;
};// FUNC_Final FUNC_Native

struct AHUD_execDraw3DLine_Parms
{
	struct FVector Start;
	struct FVector End;
	struct FColor LineColor;
};// FUNC_Final FUNC_Native

// (0x1BC - 0x460)
class AHUD : public AActor
{
public:
	struct FColor                                      WhiteColor;                                  // 0x01BC (0x0004)
	struct FColor                                      GreenColor;                                  // 0x01C0 (0x0004)
	struct FColor                                      RedColor;                                    // 0x01C4 (0x0004)
	class APlayerController*                           PlayerOwner;                                 // 0x01C8 (0x0004)
	class AHUD*                                        HudOwner;                                    // 0x01CC (0x0004)
	class APlayerReplicationInfo*                      ViewedInfo;                                  // 0x01D0 (0x0004)
	float                                              ProgressFadeTime;                            // 0x01D4 (0x0004)
	struct FColor                                      MOTDColor;                                   // 0x01D8 (0x0004)
	void*                                              ScoreBoard;                                  // 0x01DC (0x0004)
	unsigned long                                      LostFocusPaused : 1;                         // 0x01E0 (0x0004) [0x00000001]
	unsigned long                                      bShowHUD : 1;                                // 0x01E0 (0x0004) [0x00000002]
	unsigned long                                      bShowScores : 1;                             // 0x01E0 (0x0004) [0x00000004]
	unsigned long                                      bShowDebugInfo : 1;                          // 0x01E0 (0x0004) [0x00000008]
	unsigned long                                      bShowBadConnectionAlert : 1;                 // 0x01E0 (0x0004) [0x00000010]
	unsigned long                                      bMessageBeep : 1;                            // 0x01E0 (0x0004) [0x00000020]
	float                                              HudCanvasScale;                              // 0x01E4 (0x0004)
	TArray< struct FConsoleMessage >                   ConsoleMessages;                             // 0x01E8 (0x000C)
	struct FColor                                      ConsoleColor;                                // 0x01F4 (0x0004)
	int                                                ConsoleMessageCount;                         // 0x01F8 (0x0004)
	int                                                ConsoleFontSize;                             // 0x01FC (0x0004)
	int                                                MessageFontOffset;                           // 0x0200 (0x0004)
	int                                                MaxHUDAreaMessageCount;                      // 0x0204 (0x0004)
	struct FHudLocalizedMessage                        LocalMessages[ 8 ];                          // 0x0208 (0x0220)
	float                                              ConsoleMessagePosX;                          // 0x0428 (0x0004)
	float                                              ConsoleMessagePosY;                          // 0x042C (0x0004)
	class UCanvas*                                     Canvas;                                      // 0x0430 (0x0004)
	float                                              LastHUDRenderTime;                           // 0x0434 (0x0004)
	float                                              RenderDelta;                                 // 0x0438 (0x0004)
	float                                              SizeX;                                       // 0x043C (0x0004)
	float                                              SizeY;                                       // 0x0440 (0x0004)
	float                                              CenterX;                                     // 0x0444 (0x0004)
	float                                              CenterY;                                     // 0x0448 (0x0004)
	float                                              RatioX;                                      // 0x044C (0x0004)
	float                                              RatioY;                                      // 0x0450 (0x0004)
	TArray< struct FName >                             DebugDisplay;                                // 0x0454 (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.HUD" );

		return ClassPointer;
	};

public:
	class UFont* GetConsoleFont ()
	{
		static UFunction* pfnGetConsoleFont = NULL;

		if ( !pfnGetConsoleFont )
			pfnGetConsoleFont = UObject::FindObject< UFunction >( "Function Engine.HUD.GetConsoleFont" );

		AHUD_execGetConsoleFont_Parms GetConsoleFont_Parms;

		this->ProcessEvent( pfnGetConsoleFont, &GetConsoleFont_Parms, NULL );

		return GetConsoleFont_Parms.ReturnValue;
	};

	void eventOnLostFocusPause ( unsigned long Enable )
	{
		static UFunction* pfnOnLostFocusPause = NULL;

		if ( !pfnOnLostFocusPause )
			pfnOnLostFocusPause = UObject::FindObject< UFunction >( "Function Engine.HUD.OnLostFocusPause" );

		AHUD_eventOnLostFocusPause_Parms OnLostFocusPause_Parms;
		OnLostFocusPause_Parms.Enable = Enable;

		this->ProcessEvent( pfnOnLostFocusPause, &OnLostFocusPause_Parms, NULL );
	};

	void PlayerOwnerDied ()
	{
		static UFunction* pfnPlayerOwnerDied = NULL;

		if ( !pfnPlayerOwnerDied )
			pfnPlayerOwnerDied = UObject::FindObject< UFunction >( "Function Engine.HUD.PlayerOwnerDied" );

		AHUD_execPlayerOwnerDied_Parms PlayerOwnerDied_Parms;

		this->ProcessEvent( pfnPlayerOwnerDied, &PlayerOwnerDied_Parms, NULL );
	};

	struct FColor GetRYGColorRamp ( float Pct )
	{
		static UFunction* pfnGetRYGColorRamp = NULL;

		if ( !pfnGetRYGColorRamp )
			pfnGetRYGColorRamp = UObject::FindObject< UFunction >( "Function Engine.HUD.GetRYGColorRamp" );

		AHUD_execGetRYGColorRamp_Parms GetRYGColorRamp_Parms;
		GetRYGColorRamp_Parms.Pct = Pct;

		this->ProcessEvent( pfnGetRYGColorRamp, &GetRYGColorRamp_Parms, NULL );

		return GetRYGColorRamp_Parms.ReturnValue;
	};

	class UFont* GetFontSizeIndex ( int FontSize )
	{
		static UFunction* pfnGetFontSizeIndex = NULL;

		if ( !pfnGetFontSizeIndex )
			pfnGetFontSizeIndex = UObject::FindObject< UFunction >( "Function Engine.HUD.GetFontSizeIndex" );

		AHUD_execGetFontSizeIndex_Parms GetFontSizeIndex_Parms;
		GetFontSizeIndex_Parms.FontSize = FontSize;

		this->ProcessEvent( pfnGetFontSizeIndex, &GetFontSizeIndex_Parms, NULL );

		return GetFontSizeIndex_Parms.ReturnValue;
	};

	void DisplayLocalMessages ()
	{
		static UFunction* pfnDisplayLocalMessages = NULL;

		if ( !pfnDisplayLocalMessages )
			pfnDisplayLocalMessages = UObject::FindObject< UFunction >( "Function Engine.HUD.DisplayLocalMessages" );

		AHUD_execDisplayLocalMessages_Parms DisplayLocalMessages_Parms;

		this->ProcessEvent( pfnDisplayLocalMessages, &DisplayLocalMessages_Parms, NULL );
	};

	void DrawMessageText ( struct FHudLocalizedMessage LocalMessage, float ScreenX, float ScreenY )
	{
		static UFunction* pfnDrawMessageText = NULL;

		if ( !pfnDrawMessageText )
			pfnDrawMessageText = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawMessageText" );

		AHUD_execDrawMessageText_Parms DrawMessageText_Parms;
		memcpy( &DrawMessageText_Parms.LocalMessage, &LocalMessage, 0x44 );
		DrawMessageText_Parms.ScreenX = ScreenX;
		DrawMessageText_Parms.ScreenY = ScreenY;

		this->ProcessEvent( pfnDrawMessageText, &DrawMessageText_Parms, NULL );
	};

	void DrawMessage ( int I, float PosY, float* DX, float* DY )
	{
		static UFunction* pfnDrawMessage = NULL;

		if ( !pfnDrawMessage )
			pfnDrawMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawMessage" );

		AHUD_execDrawMessage_Parms DrawMessage_Parms;
		DrawMessage_Parms.I = I;
		DrawMessage_Parms.PosY = PosY;

		this->ProcessEvent( pfnDrawMessage, &DrawMessage_Parms, NULL );

		if ( DX )
			*DX = DrawMessage_Parms.DX; // CPF_OutParm
		if ( DY )
			*DY = DrawMessage_Parms.DY; // CPF_OutParm
	};

	void GetScreenCoords ( float PosY, float* ScreenX, float* ScreenY, struct FHudLocalizedMessage* InMessage )
	{
		static UFunction* pfnGetScreenCoords = NULL;

		if ( !pfnGetScreenCoords )
			pfnGetScreenCoords = UObject::FindObject< UFunction >( "Function Engine.HUD.GetScreenCoords" );

		AHUD_execGetScreenCoords_Parms GetScreenCoords_Parms;
		GetScreenCoords_Parms.PosY = PosY;

		this->ProcessEvent( pfnGetScreenCoords, &GetScreenCoords_Parms, NULL );

		if ( ScreenX )
			*ScreenX = GetScreenCoords_Parms.ScreenX; // CPF_OutParm
		if ( ScreenY )
			*ScreenY = GetScreenCoords_Parms.ScreenY; // CPF_OutParm
		if ( InMessage )
			memcpy( InMessage, &GetScreenCoords_Parms.InMessage, 0x44 ); // CPF_OutParm
	};

	void AddLocalizedMessage ( int Index, class UClass* InMessageClass, struct FString CriticalString, int Switch, float Position, float Lifetime, int FontSize, struct FColor DrawColor, int MessageCount/*CPF_OptionalParm*/, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddLocalizedMessage = NULL;

		if ( !pfnAddLocalizedMessage )
			pfnAddLocalizedMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.AddLocalizedMessage" );

		AHUD_execAddLocalizedMessage_Parms AddLocalizedMessage_Parms;
		AddLocalizedMessage_Parms.Index = Index;
		AddLocalizedMessage_Parms.InMessageClass = InMessageClass;
		memcpy( &AddLocalizedMessage_Parms.CriticalString, &CriticalString, 0xC );
		AddLocalizedMessage_Parms.Switch = Switch;
		AddLocalizedMessage_Parms.Position = Position;
		AddLocalizedMessage_Parms.Lifetime = Lifetime;
		AddLocalizedMessage_Parms.FontSize = FontSize;
		memcpy( &AddLocalizedMessage_Parms.DrawColor, &DrawColor, 0x4 );
		AddLocalizedMessage_Parms.MessageCount = MessageCount;
		AddLocalizedMessage_Parms.OptionalObject = OptionalObject;
		AddLocalizedMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnAddLocalizedMessage, &AddLocalizedMessage_Parms, NULL );
	};

	void LocalizedMessage ( class UClass* InMessageClass, class APlayerReplicationInfo* RelatedPRI, struct FString CriticalString, int Switch, float Position, float Lifetime, int FontSize, struct FColor DrawColor, class UObject* OptionalObject/*CPF_OptionalParm*/, int OptionalData/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnLocalizedMessage = NULL;

		if ( !pfnLocalizedMessage )
			pfnLocalizedMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.LocalizedMessage" );

		AHUD_execLocalizedMessage_Parms LocalizedMessage_Parms;
		LocalizedMessage_Parms.InMessageClass = InMessageClass;
		LocalizedMessage_Parms.RelatedPRI = RelatedPRI;
		memcpy( &LocalizedMessage_Parms.CriticalString, &CriticalString, 0xC );
		LocalizedMessage_Parms.Switch = Switch;
		LocalizedMessage_Parms.Position = Position;
		LocalizedMessage_Parms.Lifetime = Lifetime;
		LocalizedMessage_Parms.FontSize = FontSize;
		memcpy( &LocalizedMessage_Parms.DrawColor, &DrawColor, 0x4 );
		LocalizedMessage_Parms.OptionalObject = OptionalObject;
		LocalizedMessage_Parms.OptionalData = OptionalData;

		this->ProcessEvent( pfnLocalizedMessage, &LocalizedMessage_Parms, NULL );
	};

	void AddConsoleMessage ( struct FString M, class UClass* InMessageClass, class APlayerReplicationInfo* PRI, float Lifetime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnAddConsoleMessage = NULL;

		if ( !pfnAddConsoleMessage )
			pfnAddConsoleMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.AddConsoleMessage" );

		AHUD_execAddConsoleMessage_Parms AddConsoleMessage_Parms;
		memcpy( &AddConsoleMessage_Parms.M, &M, 0xC );
		AddConsoleMessage_Parms.InMessageClass = InMessageClass;
		AddConsoleMessage_Parms.PRI = PRI;
		AddConsoleMessage_Parms.Lifetime = Lifetime;

		this->ProcessEvent( pfnAddConsoleMessage, &AddConsoleMessage_Parms, NULL );
	};

	void DisplayConsoleMessages ()
	{
		static UFunction* pfnDisplayConsoleMessages = NULL;

		if ( !pfnDisplayConsoleMessages )
			pfnDisplayConsoleMessages = UObject::FindObject< UFunction >( "Function Engine.HUD.DisplayConsoleMessages" );

		AHUD_execDisplayConsoleMessages_Parms DisplayConsoleMessages_Parms;

		this->ProcessEvent( pfnDisplayConsoleMessages, &DisplayConsoleMessages_Parms, NULL );
	};

	void Message ( class APlayerReplicationInfo* PRI, struct FString msg, struct FName MsgType, float Lifetime/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnMessage = NULL;

		if ( !pfnMessage )
			pfnMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.Message" );

		AHUD_execMessage_Parms Message_Parms;
		Message_Parms.PRI = PRI;
		memcpy( &Message_Parms.msg, &msg, 0xC );
		memcpy( &Message_Parms.MsgType, &MsgType, 0x8 );
		Message_Parms.Lifetime = Lifetime;

		this->ProcessEvent( pfnMessage, &Message_Parms, NULL );
	};

	void ClearMessage ( struct FHudLocalizedMessage* M )
	{
		static UFunction* pfnClearMessage = NULL;

		if ( !pfnClearMessage )
			pfnClearMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.ClearMessage" );

		AHUD_execClearMessage_Parms ClearMessage_Parms;

		this->ProcessEvent( pfnClearMessage, &ClearMessage_Parms, NULL );

		if ( M )
			memcpy( M, &ClearMessage_Parms.M, 0x44 ); // CPF_OutParm
	};

	void DisplayBadConnectionAlert ()
	{
		static UFunction* pfnDisplayBadConnectionAlert = NULL;

		if ( !pfnDisplayBadConnectionAlert )
			pfnDisplayBadConnectionAlert = UObject::FindObject< UFunction >( "Function Engine.HUD.DisplayBadConnectionAlert" );

		AHUD_execDisplayBadConnectionAlert_Parms DisplayBadConnectionAlert_Parms;

		this->ProcessEvent( pfnDisplayBadConnectionAlert, &DisplayBadConnectionAlert_Parms, NULL );
	};

	void DisplayProgressMessage ()
	{
		static UFunction* pfnDisplayProgressMessage = NULL;

		if ( !pfnDisplayProgressMessage )
			pfnDisplayProgressMessage = UObject::FindObject< UFunction >( "Function Engine.HUD.DisplayProgressMessage" );

		AHUD_execDisplayProgressMessage_Parms DisplayProgressMessage_Parms;

		this->ProcessEvent( pfnDisplayProgressMessage, &DisplayProgressMessage_Parms, NULL );
	};

	void DrawEngineHUD ()
	{
		static UFunction* pfnDrawEngineHUD = NULL;

		if ( !pfnDrawEngineHUD )
			pfnDrawEngineHUD = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawEngineHUD" );

		AHUD_execDrawEngineHUD_Parms DrawEngineHUD_Parms;

		this->ProcessEvent( pfnDrawEngineHUD, &DrawEngineHUD_Parms, NULL );
	};

	void DrawDemoHUD ()
	{
		static UFunction* pfnDrawDemoHUD = NULL;

		if ( !pfnDrawDemoHUD )
			pfnDrawDemoHUD = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawDemoHUD" );

		AHUD_execDrawDemoHUD_Parms DrawDemoHUD_Parms;

		this->ProcessEvent( pfnDrawDemoHUD, &DrawDemoHUD_Parms, NULL );
	};

	void DrawHUD ()
	{
		static UFunction* pfnDrawHUD = NULL;

		if ( !pfnDrawHUD )
			pfnDrawHUD = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawHUD" );

		AHUD_execDrawHUD_Parms DrawHUD_Parms;

		this->ProcessEvent( pfnDrawHUD, &DrawHUD_Parms, NULL );
	};

	void eventPostRender ()
	{
		static UFunction* pfnPostRender = NULL;

		if ( !pfnPostRender )
			pfnPostRender = UObject::FindObject< UFunction >( "Function Engine.HUD.PostRender" );

		AHUD_eventPostRender_Parms PostRender_Parms;

		this->ProcessEvent( pfnPostRender, &PostRender_Parms, NULL );
	};

	void PreCalcValues ()
	{
		static UFunction* pfnPreCalcValues = NULL;

		if ( !pfnPreCalcValues )
			pfnPreCalcValues = UObject::FindObject< UFunction >( "Function Engine.HUD.PreCalcValues" );

		AHUD_execPreCalcValues_Parms PreCalcValues_Parms;

		this->ProcessEvent( pfnPreCalcValues, &PreCalcValues_Parms, NULL );
	};

	void DrawRoute ( class APawn* Target )
	{
		static UFunction* pfnDrawRoute = NULL;

		if ( !pfnDrawRoute )
			pfnDrawRoute = UObject::FindObject< UFunction >( "Function Engine.HUD.DrawRoute" );

		AHUD_execDrawRoute_Parms DrawRoute_Parms;
		DrawRoute_Parms.Target = Target;

		this->ProcessEvent( pfnDrawRoute, &DrawRoute_Parms, NULL );
	};

	void FXStop ( class UClass* aClass )
	{
		static UFunction* pfnFXStop = NULL;

		if ( !pfnFXStop )
			pfnFXStop = UObject::FindObject< UFunction >( "Function Engine.HUD.FXStop" );

		AHUD_execFXStop_Parms FXStop_Parms;
		FXStop_Parms.aClass = aClass;

		this->ProcessEvent( pfnFXStop, &FXStop_Parms, NULL );
	};

	void FXPlay ( class UClass* aClass, struct FString FXAnimPath )
	{
		static UFunction* pfnFXPlay = NULL;

		if ( !pfnFXPlay )
			pfnFXPlay = UObject::FindObject< UFunction >( "Function Engine.HUD.FXPlay" );

		AHUD_execFXPlay_Parms FXPlay_Parms;
		FXPlay_Parms.aClass = aClass;
		memcpy( &FXPlay_Parms.FXAnimPath, &FXAnimPath, 0xC );

		this->ProcessEvent( pfnFXPlay, &FXPlay_Parms, NULL );
	};

	bool ShouldDisplayDebug ( struct FName DebugType )
	{
		static UFunction* pfnShouldDisplayDebug = NULL;

		if ( !pfnShouldDisplayDebug )
			pfnShouldDisplayDebug = UObject::FindObject< UFunction >( "Function Engine.HUD.ShouldDisplayDebug" );

		AHUD_execShouldDisplayDebug_Parms ShouldDisplayDebug_Parms;
		memcpy( &ShouldDisplayDebug_Parms.DebugType, &DebugType, 0x8 );

		this->ProcessEvent( pfnShouldDisplayDebug, &ShouldDisplayDebug_Parms, NULL );

		return ShouldDisplayDebug_Parms.ReturnValue;
	};

	void ShowDebug ( struct FName DebugType/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnShowDebug = NULL;

		if ( !pfnShowDebug )
			pfnShowDebug = UObject::FindObject< UFunction >( "Function Engine.HUD.ShowDebug" );

		AHUD_execShowDebug_Parms ShowDebug_Parms;
		memcpy( &ShowDebug_Parms.DebugType, &DebugType, 0x8 );

		this->ProcessEvent( pfnShowDebug, &ShowDebug_Parms, NULL );
	};

	void SetShowScores ( unsigned long bNewValue )
	{
		static UFunction* pfnSetShowScores = NULL;

		if ( !pfnSetShowScores )
			pfnSetShowScores = UObject::FindObject< UFunction >( "Function Engine.HUD.SetShowScores" );

		AHUD_execSetShowScores_Parms SetShowScores_Parms;
		SetShowScores_Parms.bNewValue = bNewValue;

		this->ProcessEvent( pfnSetShowScores, &SetShowScores_Parms, NULL );
	};

	void ShowScores ()
	{
		static UFunction* pfnShowScores = NULL;

		if ( !pfnShowScores )
			pfnShowScores = UObject::FindObject< UFunction >( "Function Engine.HUD.ShowScores" );

		AHUD_execShowScores_Parms ShowScores_Parms;

		this->ProcessEvent( pfnShowScores, &ShowScores_Parms, NULL );
	};

	void ShowHUD ()
	{
		static UFunction* pfnShowHUD = NULL;

		if ( !pfnShowHUD )
			pfnShowHUD = UObject::FindObject< UFunction >( "Function Engine.HUD.ShowHUD" );

		AHUD_execShowHUD_Parms ShowHUD_Parms;

		this->ProcessEvent( pfnShowHUD, &ShowHUD_Parms, NULL );
	};

	void ToggleHUD ()
	{
		static UFunction* pfnToggleHUD = NULL;

		if ( !pfnToggleHUD )
			pfnToggleHUD = UObject::FindObject< UFunction >( "Function Engine.HUD.ToggleHUD" );

		AHUD_execToggleHUD_Parms ToggleHUD_Parms;

		this->ProcessEvent( pfnToggleHUD, &ToggleHUD_Parms, NULL );
	};

	void eventDestroyed ()
	{
		static UFunction* pfnDestroyed = NULL;

		if ( !pfnDestroyed )
			pfnDestroyed = UObject::FindObject< UFunction >( "Function Engine.HUD.Destroyed" );

		AHUD_eventDestroyed_Parms Destroyed_Parms;

		this->ProcessEvent( pfnDestroyed, &Destroyed_Parms, NULL );
	};

	void SpawnScoreBoard ( class UClass* ScoringType )
	{
		static UFunction* pfnSpawnScoreBoard = NULL;

		if ( !pfnSpawnScoreBoard )
			pfnSpawnScoreBoard = UObject::FindObject< UFunction >( "Function Engine.HUD.SpawnScoreBoard" );

		AHUD_execSpawnScoreBoard_Parms SpawnScoreBoard_Parms;
		SpawnScoreBoard_Parms.ScoringType = ScoringType;

		this->ProcessEvent( pfnSpawnScoreBoard, &SpawnScoreBoard_Parms, NULL );
	};

	void eventPostBeginPlay ()
	{
		static UFunction* pfnPostBeginPlay = NULL;

		if ( !pfnPostBeginPlay )
			pfnPostBeginPlay = UObject::FindObject< UFunction >( "Function Engine.HUD.PostBeginPlay" );

		AHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

		this->ProcessEvent( pfnPostBeginPlay, &PostBeginPlay_Parms, NULL );
	};

	void Draw2DLine ( int X1, int Y1, int X2, int Y2, struct FColor LineColor )
	{
		static UFunction* pfnDraw2DLine = NULL;

		if ( !pfnDraw2DLine )
			pfnDraw2DLine = UObject::FindObject< UFunction >( "Function Engine.HUD.Draw2DLine" );

		AHUD_execDraw2DLine_Parms Draw2DLine_Parms;
		Draw2DLine_Parms.X1 = X1;
		Draw2DLine_Parms.Y1 = Y1;
		Draw2DLine_Parms.X2 = X2;
		Draw2DLine_Parms.Y2 = Y2;
		memcpy( &Draw2DLine_Parms.LineColor, &LineColor, 0x4 );

		pfnDraw2DLine->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDraw2DLine, &Draw2DLine_Parms, NULL );
		pfnDraw2DLine->FunctionFlags |= 0x400;
	};

	void Draw3DLine ( struct FVector Start, struct FVector End, struct FColor LineColor )
	{
		static UFunction* pfnDraw3DLine = NULL;

		if ( !pfnDraw3DLine )
			pfnDraw3DLine = UObject::FindObject< UFunction >( "Function Engine.HUD.Draw3DLine" );

		AHUD_execDraw3DLine_Parms Draw3DLine_Parms;
		memcpy( &Draw3DLine_Parms.Start, &Start, 0xC );
		memcpy( &Draw3DLine_Parms.End, &End, 0xC );
		memcpy( &Draw3DLine_Parms.LineColor, &LineColor, 0x4 );

		pfnDraw3DLine->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDraw3DLine, &Draw3DLine_Parms, NULL );
		pfnDraw3DLine->FunctionFlags |= 0x400;
	};

};

UClass* AHUD::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif