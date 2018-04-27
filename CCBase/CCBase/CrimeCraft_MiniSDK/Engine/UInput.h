/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UInput.h
// Date: 06/16/2011 @ 05:19:40.36
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UInput_execSetBind_Parms
{
	struct FName BindName;
	struct FString Command;
};// FUNC_Exec

struct UInput_execGetBind_Parms
{
	struct FName Key;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Native

struct UInput_execResetInput_Parms
{
};// FUNC_Native

// (0x6C - 0xD8)
class UInput : public UInteraction
{
public:
	TArray< struct FKeyBind >                          Bindings;                                    // 0x006C (0x000C)
	TArray< struct FName >                             PressedKeys;                                 // 0x0078 (0x000C)
	unsigned char                                      CurrentEvent;                                // 0x0084 (0x0001)
	float                                              CurrentDelta;                                // 0x0088 (0x0004)
	float                                              CurrentDeltaTime;                            // 0x008C (0x0004)
	unsigned char                                      unknown_data15[ 60 ];                        // 0x0090 (0x003C)
	TArray< struct FPointer >                          AxisArray;                                   // 0x00CC (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.Input" );

		return ClassPointer;
	};

public:
	void SetBind ( struct FName BindName, struct FString Command )
	{
		static UFunction* pfnSetBind = NULL;

		if ( !pfnSetBind )
			pfnSetBind = UObject::FindObject< UFunction >( "Function Engine.Input.SetBind" );

		UInput_execSetBind_Parms SetBind_Parms;
		memcpy( &SetBind_Parms.BindName, &BindName, 0x8 );
		memcpy( &SetBind_Parms.Command, &Command, 0xC );

		this->ProcessEvent( pfnSetBind, &SetBind_Parms, NULL );
	};

	struct FString GetBind ( struct FName Key )
	{
		static UFunction* pfnGetBind = NULL;

		if ( !pfnGetBind )
			pfnGetBind = UObject::FindObject< UFunction >( "Function Engine.Input.GetBind" );

		UInput_execGetBind_Parms GetBind_Parms;
		memcpy( &GetBind_Parms.Key, &Key, 0x8 );

		pfnGetBind->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetBind, &GetBind_Parms, NULL );
		pfnGetBind->FunctionFlags |= 0x400;

		return GetBind_Parms.ReturnValue;
	};

	void ResetInput ()
	{
		static UFunction* pfnResetInput = NULL;

		if ( !pfnResetInput )
			pfnResetInput = UObject::FindObject< UFunction >( "Function Engine.Input.ResetInput" );

		UInput_execResetInput_Parms ResetInput_Parms;

		pfnResetInput->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnResetInput, &ResetInput_Parms, NULL );
		pfnResetInput->FunctionFlags |= 0x400;
	};

};

UClass* UInput::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif