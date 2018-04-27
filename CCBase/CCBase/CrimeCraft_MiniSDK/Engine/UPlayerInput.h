/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UPlayerInput.h
// Date: 06/16/2011 @ 05:19:40.38
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UPlayerInput_execSmoothMouse_Parms
{
	float aMouse;
	float DeltaTime;
	unsigned char SampleCount; // CPF_OutParm
	int Index;
	float ReturnValue; // CPF_ReturnParm
};

struct UPlayerInput_execClearSmoothing_Parms
{
};// FUNC_Exec

struct UPlayerInput_execSmartJump_Parms
{
};// FUNC_Exec

struct UPlayerInput_execJump_Parms
{
};// FUNC_Exec

struct UPlayerInput_execProcessInputMatching_Parms
{
	float DeltaTime;
};// FUNC_Final

struct UPlayerInput_execCheckForDoubleClickMove_Parms
{
	float DeltaTime;
	unsigned char ReturnValue; // CPF_ReturnParm
};

struct UPlayerInput_execCatchDoubleClickInput_Parms
{
};

struct UPlayerInput_eventPlayerInput_Parms
{
	float DeltaTime;
};// FUNC_Event

struct UPlayerInput_execAdjustMouseSensitivity_Parms
{
	float FOVScale;
};

struct UPlayerInput_execPostProcessInput_Parms
{
	float DeltaTime;
};

struct UPlayerInput_execPreProcessInput_Parms
{
	float DeltaTime;
};

struct UPlayerInput_execDrawHUD_Parms
{
	class AHUD* H;
};

struct UPlayerInput_execSetSensitivity_Parms
{
	float F;
};// FUNC_Exec

struct UPlayerInput_execInvertTurn_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Exec

struct UPlayerInput_execInvertMouse_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Exec

// (0xD8 - 0x164)
class UPlayerInput : public UInput
{
public:
	unsigned long                                      bUsingGamepad : 1;                           // 0x00D8 (0x0004) [0x00000001]
	unsigned long                                      bInvertMouse : 1;                            // 0x00D8 (0x0004) [0x00000002]
	unsigned long                                      bInvertTurn : 1;                             // 0x00D8 (0x0004) [0x00000004]
	unsigned long                                      bWasForward : 1;                             // 0x00D8 (0x0004) [0x00000008]
	unsigned long                                      bWasBack : 1;                                // 0x00D8 (0x0004) [0x00000010]
	unsigned long                                      bWasLeft : 1;                                // 0x00D8 (0x0004) [0x00000020]
	unsigned long                                      bWasRight : 1;                               // 0x00D8 (0x0004) [0x00000040]
	unsigned long                                      bEdgeForward : 1;                            // 0x00D8 (0x0004) [0x00000080]
	unsigned long                                      bEdgeBack : 1;                               // 0x00D8 (0x0004) [0x00000100]
	unsigned long                                      bEdgeLeft : 1;                               // 0x00D8 (0x0004) [0x00000200]
	unsigned long                                      bEdgeRight : 1;                              // 0x00D8 (0x0004) [0x00000400]
	unsigned long                                      bEnableMouseSmoothing : 1;                   // 0x00D8 (0x0004) [0x00000800]
	unsigned long                                      bEnableFOVScaling : 1;                       // 0x00D8 (0x0004) [0x00001000]
	struct FName                                       LastAxisKeyName;                             // 0x00DC (0x0008)
	float                                              DoubleClickTimer;                            // 0x00E4 (0x0004)
	float                                              DoubleClickTime;                             // 0x00E8 (0x0004)
	float                                              MouseSensitivity;                            // 0x00EC (0x0004)
	float                                              aBaseX;                                      // 0x00F0 (0x0004)
	float                                              aBaseY;                                      // 0x00F4 (0x0004)
	float                                              aBaseZ;                                      // 0x00F8 (0x0004)
	float                                              aMouseX;                                     // 0x00FC (0x0004)
	float                                              aMouseY;                                     // 0x0100 (0x0004)
	float                                              aForward;                                    // 0x0104 (0x0004)
	float                                              aTurn;                                       // 0x0108 (0x0004)
	float                                              aStrafe;                                     // 0x010C (0x0004)
	float                                              aUp;                                         // 0x0110 (0x0004)
	float                                              aLookUp;                                     // 0x0114 (0x0004)
	float                                              aPS3AccelX;                                  // 0x0118 (0x0004)
	float                                              aPS3AccelY;                                  // 0x011C (0x0004)
	float                                              aPS3AccelZ;                                  // 0x0120 (0x0004)
	float                                              aPS3Gyro;                                    // 0x0124 (0x0004)
	float                                              RawJoyUp;                                    // 0x0128 (0x0004)
	float                                              RawJoyRight;                                 // 0x012C (0x0004)
	float                                              RawJoyLookRight;                             // 0x0130 (0x0004)
	float                                              RawJoyLookUp;                                // 0x0134 (0x0004)
	float                                              MoveForwardSpeed;                            // 0x0138 (0x0004)
	float                                              MoveStrafeSpeed;                             // 0x013C (0x0004)
	float                                              LookRightScale;                              // 0x0140 (0x0004)
	float                                              LookUpScale;                                 // 0x0144 (0x0004)
	unsigned char                                      bStrafe;                                     // 0x0148 (0x0001)
	unsigned char                                      bXAxis;                                      // 0x0149 (0x0001)
	unsigned char                                      bYAxis;                                      // 0x014A (0x0001)
	float                                              ZeroTime[ 2 ];                               // 0x014C (0x0008)
	float                                              SmoothedMouse[ 2 ];                          // 0x0154 (0x0008)
	int                                                MouseSamples;                                // 0x015C (0x0004)
	float                                              MouseSamplingTotal;                          // 0x0160 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.PlayerInput" );

		return ClassPointer;
	};

public:
	float SmoothMouse ( float aMouse, float DeltaTime, int Index, unsigned char* SampleCount )
	{
		static UFunction* pfnSmoothMouse = NULL;

		if ( !pfnSmoothMouse )
			pfnSmoothMouse = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.SmoothMouse" );

		UPlayerInput_execSmoothMouse_Parms SmoothMouse_Parms;
		SmoothMouse_Parms.aMouse = aMouse;
		SmoothMouse_Parms.DeltaTime = DeltaTime;
		SmoothMouse_Parms.Index = Index;

		this->ProcessEvent( pfnSmoothMouse, &SmoothMouse_Parms, NULL );

		if ( SampleCount )
			*SampleCount = SmoothMouse_Parms.SampleCount; // CPF_OutParm

		return SmoothMouse_Parms.ReturnValue;
	};

	void ClearSmoothing ()
	{
		static UFunction* pfnClearSmoothing = NULL;

		if ( !pfnClearSmoothing )
			pfnClearSmoothing = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.ClearSmoothing" );

		UPlayerInput_execClearSmoothing_Parms ClearSmoothing_Parms;

		this->ProcessEvent( pfnClearSmoothing, &ClearSmoothing_Parms, NULL );
	};

	void SmartJump ()
	{
		static UFunction* pfnSmartJump = NULL;

		if ( !pfnSmartJump )
			pfnSmartJump = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.SmartJump" );

		UPlayerInput_execSmartJump_Parms SmartJump_Parms;

		this->ProcessEvent( pfnSmartJump, &SmartJump_Parms, NULL );
	};

	void Jump ()
	{
		static UFunction* pfnJump = NULL;

		if ( !pfnJump )
			pfnJump = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.Jump" );

		UPlayerInput_execJump_Parms Jump_Parms;

		this->ProcessEvent( pfnJump, &Jump_Parms, NULL );
	};

	void ProcessInputMatching ( float DeltaTime )
	{
		static UFunction* pfnProcessInputMatching = NULL;

		if ( !pfnProcessInputMatching )
			pfnProcessInputMatching = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.ProcessInputMatching" );

		UPlayerInput_execProcessInputMatching_Parms ProcessInputMatching_Parms;
		ProcessInputMatching_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnProcessInputMatching, &ProcessInputMatching_Parms, NULL );
	};

	unsigned char CheckForDoubleClickMove ( float DeltaTime )
	{
		static UFunction* pfnCheckForDoubleClickMove = NULL;

		if ( !pfnCheckForDoubleClickMove )
			pfnCheckForDoubleClickMove = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.CheckForDoubleClickMove" );

		UPlayerInput_execCheckForDoubleClickMove_Parms CheckForDoubleClickMove_Parms;
		CheckForDoubleClickMove_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnCheckForDoubleClickMove, &CheckForDoubleClickMove_Parms, NULL );

		return CheckForDoubleClickMove_Parms.ReturnValue;
	};

	void CatchDoubleClickInput ()
	{
		static UFunction* pfnCatchDoubleClickInput = NULL;

		if ( !pfnCatchDoubleClickInput )
			pfnCatchDoubleClickInput = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.CatchDoubleClickInput" );

		UPlayerInput_execCatchDoubleClickInput_Parms CatchDoubleClickInput_Parms;

		this->ProcessEvent( pfnCatchDoubleClickInput, &CatchDoubleClickInput_Parms, NULL );
	};

	void eventPlayerInput ( float DeltaTime )
	{
		static UFunction* pfnPlayerInput = NULL;

		if ( !pfnPlayerInput )
			pfnPlayerInput = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.PlayerInput" );

		UPlayerInput_eventPlayerInput_Parms PlayerInput_Parms;
		PlayerInput_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPlayerInput, &PlayerInput_Parms, NULL );
	};

	void AdjustMouseSensitivity ( float FOVScale )
	{
		static UFunction* pfnAdjustMouseSensitivity = NULL;

		if ( !pfnAdjustMouseSensitivity )
			pfnAdjustMouseSensitivity = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.AdjustMouseSensitivity" );

		UPlayerInput_execAdjustMouseSensitivity_Parms AdjustMouseSensitivity_Parms;
		AdjustMouseSensitivity_Parms.FOVScale = FOVScale;

		this->ProcessEvent( pfnAdjustMouseSensitivity, &AdjustMouseSensitivity_Parms, NULL );
	};

	void PostProcessInput ( float DeltaTime )
	{
		static UFunction* pfnPostProcessInput = NULL;

		if ( !pfnPostProcessInput )
			pfnPostProcessInput = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.PostProcessInput" );

		UPlayerInput_execPostProcessInput_Parms PostProcessInput_Parms;
		PostProcessInput_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPostProcessInput, &PostProcessInput_Parms, NULL );
	};

	void PreProcessInput ( float DeltaTime )
	{
		static UFunction* pfnPreProcessInput = NULL;

		if ( !pfnPreProcessInput )
			pfnPreProcessInput = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.PreProcessInput" );

		UPlayerInput_execPreProcessInput_Parms PreProcessInput_Parms;
		PreProcessInput_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnPreProcessInput, &PreProcessInput_Parms, NULL );
	};

	void DrawHUD ( class AHUD* H )
	{
		static UFunction* pfnDrawHUD = NULL;

		if ( !pfnDrawHUD )
			pfnDrawHUD = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.DrawHUD" );

		UPlayerInput_execDrawHUD_Parms DrawHUD_Parms;
		DrawHUD_Parms.H = H;

		this->ProcessEvent( pfnDrawHUD, &DrawHUD_Parms, NULL );
	};

	void SetSensitivity ( float F )
	{
		static UFunction* pfnSetSensitivity = NULL;

		if ( !pfnSetSensitivity )
			pfnSetSensitivity = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.SetSensitivity" );

		UPlayerInput_execSetSensitivity_Parms SetSensitivity_Parms;
		SetSensitivity_Parms.F = F;

		this->ProcessEvent( pfnSetSensitivity, &SetSensitivity_Parms, NULL );
	};

	bool InvertTurn ()
	{
		static UFunction* pfnInvertTurn = NULL;

		if ( !pfnInvertTurn )
			pfnInvertTurn = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.InvertTurn" );

		UPlayerInput_execInvertTurn_Parms InvertTurn_Parms;

		this->ProcessEvent( pfnInvertTurn, &InvertTurn_Parms, NULL );

		return InvertTurn_Parms.ReturnValue;
	};

	bool InvertMouse ()
	{
		static UFunction* pfnInvertMouse = NULL;

		if ( !pfnInvertMouse )
			pfnInvertMouse = UObject::FindObject< UFunction >( "Function Engine.PlayerInput.InvertMouse" );

		UPlayerInput_execInvertMouse_Parms InvertMouse_Parms;

		this->ProcessEvent( pfnInvertMouse, &InvertMouse_Parms, NULL );

		return InvertMouse_Parms.ReturnValue;
	};

};

UClass* UPlayerInput::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif