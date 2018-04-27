/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UConsole.h
// Date: 06/16/2011 @ 05:19:40.32
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

#define Const_MaxHistory                           16

struct UConsole_execGetFont_Parms
{
	class UFont* ReturnValue; // CPF_ReturnParm
};

struct UConsole_execAppendInputText_Parms
{
	struct FString Text;
};

struct UConsole_execProcessControlKey_Parms
{
	struct FName Key;
	unsigned char Event;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UConsole_execFlushPlayerInput_Parms
{
};

struct UConsole_execIsUIMiniConsoleOpen_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UConsole_execIsUIConsoleOpen_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UConsole_execInputChar_Parms
{
	int ControllerId;
	struct FString Unicode;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UConsole_execInputKey_Parms
{
	int ControllerId;
	struct FName Key;
	unsigned char Event;
	float AmountDepressed;
	unsigned long bGamepad : 1;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};

struct UConsole_execPostRender_Console_Parms
{
	class UCanvas* Canvas;
};

struct UConsole_execStartTyping_Parms
{
	struct FString Text;
};

struct UConsole_eventOutputText_Parms
{
	struct FString Text;
};// FUNC_Event

struct UConsole_execOutputTextLine_Parms
{
	struct FString Text;
};

struct UConsole_execClearOutput_Parms
{
};

struct UConsole_execConsoleCommand_Parms
{
	struct FString Command;
};

struct UConsole_execPurgeCommandFromHistory_Parms
{
	struct FString Command;
};

struct UConsole_execSetCursorPos_Parms
{
	int Position;
};

struct UConsole_execSetInputText_Parms
{
	struct FString Text;
};

struct UConsole_execInitialized_Parms
{
};

// (0x6C - 0x194)
class UConsole : public UInteraction
{
public:
	void*                                              ConsoleTargetPlayer;                         // 0x006C (0x0004)
	void*                                              LargeConsoleScene;                           // 0x0070 (0x0004)
	void*                                              MiniConsoleScene;                            // 0x0074 (0x0004)
	void*                                              ConsoleBufferText;                           // 0x0078 (0x0004)
	void*                                              MiniConsoleInput;                            // 0x007C (0x0004)
	void*                                              LargeConsoleInput;                           // 0x0080 (0x0004)
	class UTexture2D*                                  DefaultTexture_Black;                        // 0x0084 (0x0004)
	class UTexture2D*                                  DefaultTexture_White;                        // 0x0088 (0x0004)
	struct FName                                       ConsoleKey;                                  // 0x008C (0x0008)
	struct FName                                       TypeKey;                                     // 0x0094 (0x0008)
	int                                                MaxScrollbackSize;                           // 0x009C (0x0004)
	TArray< struct FString >                           Scrollback;                                  // 0x00A0 (0x000C)
	int                                                SBHead;                                      // 0x00AC (0x0004)
	int                                                SBPos;                                       // 0x00B0 (0x0004)
	int                                                HistoryTop;                                  // 0x00B4 (0x0004)
	int                                                HistoryBot;                                  // 0x00B8 (0x0004)
	int                                                HistoryCur;                                  // 0x00BC (0x0004)
	struct FString                                     History[ 16 ];                               // 0x00C0 (0x00C0)
	struct FString                                     TypedStr;                                    // 0x0180 (0x000C)
	int                                                TypedStrPos;                                 // 0x018C (0x0004)
	unsigned long                                      bCaptureKeyInput : 1;                        // 0x0190 (0x0004) [0x00000001]
	unsigned long                                      bCtrl : 1;                                   // 0x0190 (0x0004) [0x00000002]
	unsigned long                                      bEnableUI : 1;                               // 0x0190 (0x0004) [0x00000004]

	// Open
	// Typing

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Console" );

		return ClassPointer;
	};

public:
	class UFont* GetFont ()
	{
		static UFunction* pfnGetFont = NULL;

		if ( !pfnGetFont )
			pfnGetFont = UObject::FindObject< UFunction >( "Function Engine.Console.GetFont" );

		UConsole_execGetFont_Parms GetFont_Parms;

		this->ProcessEvent( pfnGetFont, &GetFont_Parms, NULL );

		return GetFont_Parms.ReturnValue;
	};

	void AppendInputText ( struct FString Text )
	{
		static UFunction* pfnAppendInputText = NULL;

		if ( !pfnAppendInputText )
			pfnAppendInputText = UObject::FindObject< UFunction >( "Function Engine.Console.AppendInputText" );

		UConsole_execAppendInputText_Parms AppendInputText_Parms;
		memcpy( &AppendInputText_Parms.Text, &Text, 0xC );

		this->ProcessEvent( pfnAppendInputText, &AppendInputText_Parms, NULL );
	};

	bool ProcessControlKey ( struct FName Key, unsigned char Event )
	{
		static UFunction* pfnProcessControlKey = NULL;

		if ( !pfnProcessControlKey )
			pfnProcessControlKey = UObject::FindObject< UFunction >( "Function Engine.Console.ProcessControlKey" );

		UConsole_execProcessControlKey_Parms ProcessControlKey_Parms;
		memcpy( &ProcessControlKey_Parms.Key, &Key, 0x8 );
		ProcessControlKey_Parms.Event = Event;

		this->ProcessEvent( pfnProcessControlKey, &ProcessControlKey_Parms, NULL );

		return ProcessControlKey_Parms.ReturnValue;
	};

	void FlushPlayerInput ()
	{
		static UFunction* pfnFlushPlayerInput = NULL;

		if ( !pfnFlushPlayerInput )
			pfnFlushPlayerInput = UObject::FindObject< UFunction >( "Function Engine.Console.FlushPlayerInput" );

		UConsole_execFlushPlayerInput_Parms FlushPlayerInput_Parms;

		this->ProcessEvent( pfnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );
	};

	bool IsUIMiniConsoleOpen ()
	{
		static UFunction* pfnIsUIMiniConsoleOpen = NULL;

		if ( !pfnIsUIMiniConsoleOpen )
			pfnIsUIMiniConsoleOpen = UObject::FindObject< UFunction >( "Function Engine.Console.IsUIMiniConsoleOpen" );

		UConsole_execIsUIMiniConsoleOpen_Parms IsUIMiniConsoleOpen_Parms;

		this->ProcessEvent( pfnIsUIMiniConsoleOpen, &IsUIMiniConsoleOpen_Parms, NULL );

		return IsUIMiniConsoleOpen_Parms.ReturnValue;
	};

	bool IsUIConsoleOpen ()
	{
		static UFunction* pfnIsUIConsoleOpen = NULL;

		if ( !pfnIsUIConsoleOpen )
			pfnIsUIConsoleOpen = UObject::FindObject< UFunction >( "Function Engine.Console.IsUIConsoleOpen" );

		UConsole_execIsUIConsoleOpen_Parms IsUIConsoleOpen_Parms;

		this->ProcessEvent( pfnIsUIConsoleOpen, &IsUIConsoleOpen_Parms, NULL );

		return IsUIConsoleOpen_Parms.ReturnValue;
	};

	bool InputChar ( int ControllerId, struct FString Unicode )
	{
		static UFunction* pfnInputChar = NULL;

		if ( !pfnInputChar )
			pfnInputChar = UObject::FindObject< UFunction >( "Function Engine.Console.InputChar" );

		UConsole_execInputChar_Parms InputChar_Parms;
		InputChar_Parms.ControllerId = ControllerId;
		memcpy( &InputChar_Parms.Unicode, &Unicode, 0xC );

		this->ProcessEvent( pfnInputChar, &InputChar_Parms, NULL );

		return InputChar_Parms.ReturnValue;
	};

	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed/*CPF_OptionalParm*/, unsigned long bGamepad/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnInputKey = NULL;

		if ( !pfnInputKey )
			pfnInputKey = UObject::FindObject< UFunction >( "Function Engine.Console.InputKey" );

		UConsole_execInputKey_Parms InputKey_Parms;
		InputKey_Parms.ControllerId = ControllerId;
		memcpy( &InputKey_Parms.Key, &Key, 0x8 );
		InputKey_Parms.Event = Event;
		InputKey_Parms.AmountDepressed = AmountDepressed;
		InputKey_Parms.bGamepad = bGamepad;

		this->ProcessEvent( pfnInputKey, &InputKey_Parms, NULL );

		return InputKey_Parms.ReturnValue;
	};

	void PostRender_Console ( class UCanvas* Canvas )
	{
		static UFunction* pfnPostRender_Console = NULL;

		if ( !pfnPostRender_Console )
			pfnPostRender_Console = UObject::FindObject< UFunction >( "Function Engine.Console.PostRender_Console" );

		UConsole_execPostRender_Console_Parms PostRender_Console_Parms;
		PostRender_Console_Parms.Canvas = Canvas;

		this->ProcessEvent( pfnPostRender_Console, &PostRender_Console_Parms, NULL );
	};

	void StartTyping ( struct FString Text )
	{
		static UFunction* pfnStartTyping = NULL;

		if ( !pfnStartTyping )
			pfnStartTyping = UObject::FindObject< UFunction >( "Function Engine.Console.StartTyping" );

		UConsole_execStartTyping_Parms StartTyping_Parms;
		memcpy( &StartTyping_Parms.Text, &Text, 0xC );

		this->ProcessEvent( pfnStartTyping, &StartTyping_Parms, NULL );
	};

	void eventOutputText ( struct FString Text )
	{
		static UFunction* pfnOutputText = NULL;

		if ( !pfnOutputText )
			pfnOutputText = UObject::FindObject< UFunction >( "Function Engine.Console.OutputText" );

		UConsole_eventOutputText_Parms OutputText_Parms;
		memcpy( &OutputText_Parms.Text, &Text, 0xC );

		this->ProcessEvent( pfnOutputText, &OutputText_Parms, NULL );
	};

	void OutputTextLine ( struct FString Text )
	{
		static UFunction* pfnOutputTextLine = NULL;

		if ( !pfnOutputTextLine )
			pfnOutputTextLine = UObject::FindObject< UFunction >( "Function Engine.Console.OutputTextLine" );

		UConsole_execOutputTextLine_Parms OutputTextLine_Parms;
		memcpy( &OutputTextLine_Parms.Text, &Text, 0xC );

		this->ProcessEvent( pfnOutputTextLine, &OutputTextLine_Parms, NULL );
	};

	void ClearOutput ()
	{
		static UFunction* pfnClearOutput = NULL;

		if ( !pfnClearOutput )
			pfnClearOutput = UObject::FindObject< UFunction >( "Function Engine.Console.ClearOutput" );

		UConsole_execClearOutput_Parms ClearOutput_Parms;

		this->ProcessEvent( pfnClearOutput, &ClearOutput_Parms, NULL );
	};

	void ConsoleCommand ( struct FString Command )
	{
		static UFunction* pfnConsoleCommand = NULL;

		if ( !pfnConsoleCommand )
			pfnConsoleCommand = UObject::FindObject< UFunction >( "Function Engine.Console.ConsoleCommand" );

		UConsole_execConsoleCommand_Parms ConsoleCommand_Parms;
		memcpy( &ConsoleCommand_Parms.Command, &Command, 0xC );

		this->ProcessEvent( pfnConsoleCommand, &ConsoleCommand_Parms, NULL );
	};

	void PurgeCommandFromHistory ( struct FString Command )
	{
		static UFunction* pfnPurgeCommandFromHistory = NULL;

		if ( !pfnPurgeCommandFromHistory )
			pfnPurgeCommandFromHistory = UObject::FindObject< UFunction >( "Function Engine.Console.PurgeCommandFromHistory" );

		UConsole_execPurgeCommandFromHistory_Parms PurgeCommandFromHistory_Parms;
		memcpy( &PurgeCommandFromHistory_Parms.Command, &Command, 0xC );

		this->ProcessEvent( pfnPurgeCommandFromHistory, &PurgeCommandFromHistory_Parms, NULL );
	};

	void SetCursorPos ( int Position )
	{
		static UFunction* pfnSetCursorPos = NULL;

		if ( !pfnSetCursorPos )
			pfnSetCursorPos = UObject::FindObject< UFunction >( "Function Engine.Console.SetCursorPos" );

		UConsole_execSetCursorPos_Parms SetCursorPos_Parms;
		SetCursorPos_Parms.Position = Position;

		this->ProcessEvent( pfnSetCursorPos, &SetCursorPos_Parms, NULL );
	};

	void SetInputText ( struct FString Text )
	{
		static UFunction* pfnSetInputText = NULL;

		if ( !pfnSetInputText )
			pfnSetInputText = UObject::FindObject< UFunction >( "Function Engine.Console.SetInputText" );

		UConsole_execSetInputText_Parms SetInputText_Parms;
		memcpy( &SetInputText_Parms.Text, &Text, 0xC );

		this->ProcessEvent( pfnSetInputText, &SetInputText_Parms, NULL );
	};

	void Initialized ()
	{
		static UFunction* pfnInitialized = NULL;

		if ( !pfnInitialized )
			pfnInitialized = UObject::FindObject< UFunction >( "Function Engine.Console.Initialized" );

		UConsole_execInitialized_Parms Initialized_Parms;

		this->ProcessEvent( pfnInitialized, &Initialized_Parms, NULL );
	};

};

UClass* UConsole::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif