/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USequenceObject.h
// Date: 06/16/2011 @ 05:19:40.11
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct USequenceObject_eventGetObjClassVersion_Parms
{
	int ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct USequenceObject_eventIsPastingIntoUISequenceAllowed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct USequenceObject_eventIsValidUISequenceObject_Parms
{
	void* TargetObject;
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct USequenceObject_eventIsPastingIntoLevelSequenceAllowed_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct USequenceObject_eventIsValidLevelSequenceObject_Parms
{
	unsigned long ReturnValue : 1; // CPF_ReturnParm
};// FUNC_Event

struct USequenceObject_execGetWorldInfo_Parms
{
	class AWorldInfo* ReturnValue; // CPF_ReturnParm
};// FUNC_Final FUNC_Native

struct USequenceObject_execScriptLog_Parms
{
	struct FString LogText;
	unsigned long bWarning : 1;
};// FUNC_Final FUNC_Native

// (0x3C - 0x8C)
class USequenceObject : public UObject
{
public:
	int                                                ObjInstanceVersion;                          // 0x003C (0x0004)
	void*                                              ParentSequence;                              // 0x0040 (0x0004)
	int                                                ObjPosX;                                     // 0x0044 (0x0004)
	int                                                ObjPosY;                                     // 0x0048 (0x0004)
	struct FString                                     ObjName;                                     // 0x004C (0x000C)
	struct FString                                     ObjCategory;                                 // 0x0058 (0x000C)
	TArray< struct FString >                           ObjRemoveInProject;                          // 0x0064 (0x000C)
	struct FColor                                      ObjColor;                                    // 0x0070 (0x0004)
	struct FString                                     ObjComment;                                  // 0x0074 (0x000C)
	unsigned long                                      bDeletable : 1;                              // 0x0080 (0x0004) [0x00000001]
	unsigned long                                      bDrawFirst : 1;                              // 0x0080 (0x0004) [0x00000002]
	unsigned long                                      bDrawLast : 1;                               // 0x0080 (0x0004) [0x00000004]
	unsigned long                                      bOutputObjCommentToScreen : 1;               // 0x0080 (0x0004) [0x00000008]
	unsigned long                                      bSuppressAutoComment : 1;                    // 0x0080 (0x0004) [0x00000010]
	int                                                DrawWidth;                                   // 0x0084 (0x0004)
	int                                                DrawHeight;                                  // 0x0088 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SequenceObject" );

		return ClassPointer;
	};

public:
	int eventGetObjClassVersion ()
	{
		static UFunction* pfnGetObjClassVersion = NULL;

		if ( !pfnGetObjClassVersion )
			pfnGetObjClassVersion = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.GetObjClassVersion" );

		USequenceObject_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

		this->ProcessEvent( pfnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

		return GetObjClassVersion_Parms.ReturnValue;
	};

	bool eventIsPastingIntoUISequenceAllowed ()
	{
		static UFunction* pfnIsPastingIntoUISequenceAllowed = NULL;

		if ( !pfnIsPastingIntoUISequenceAllowed )
			pfnIsPastingIntoUISequenceAllowed = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.IsPastingIntoUISequenceAllowed" );

		USequenceObject_eventIsPastingIntoUISequenceAllowed_Parms IsPastingIntoUISequenceAllowed_Parms;

		this->ProcessEvent( pfnIsPastingIntoUISequenceAllowed, &IsPastingIntoUISequenceAllowed_Parms, NULL );

		return IsPastingIntoUISequenceAllowed_Parms.ReturnValue;
	};

	bool eventIsValidUISequenceObject ( void* TargetObject/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnIsValidUISequenceObject = NULL;

		if ( !pfnIsValidUISequenceObject )
			pfnIsValidUISequenceObject = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.IsValidUISequenceObject" );

		USequenceObject_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
		IsValidUISequenceObject_Parms.TargetObject = TargetObject;

		this->ProcessEvent( pfnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

		return IsValidUISequenceObject_Parms.ReturnValue;
	};

	bool eventIsPastingIntoLevelSequenceAllowed ()
	{
		static UFunction* pfnIsPastingIntoLevelSequenceAllowed = NULL;

		if ( !pfnIsPastingIntoLevelSequenceAllowed )
			pfnIsPastingIntoLevelSequenceAllowed = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.IsPastingIntoLevelSequenceAllowed" );

		USequenceObject_eventIsPastingIntoLevelSequenceAllowed_Parms IsPastingIntoLevelSequenceAllowed_Parms;

		this->ProcessEvent( pfnIsPastingIntoLevelSequenceAllowed, &IsPastingIntoLevelSequenceAllowed_Parms, NULL );

		return IsPastingIntoLevelSequenceAllowed_Parms.ReturnValue;
	};

	bool eventIsValidLevelSequenceObject ()
	{
		static UFunction* pfnIsValidLevelSequenceObject = NULL;

		if ( !pfnIsValidLevelSequenceObject )
			pfnIsValidLevelSequenceObject = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.IsValidLevelSequenceObject" );

		USequenceObject_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

		this->ProcessEvent( pfnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

		return IsValidLevelSequenceObject_Parms.ReturnValue;
	};

	class AWorldInfo* GetWorldInfo ()
	{
		static UFunction* pfnGetWorldInfo = NULL;

		if ( !pfnGetWorldInfo )
			pfnGetWorldInfo = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.GetWorldInfo" );

		USequenceObject_execGetWorldInfo_Parms GetWorldInfo_Parms;

		pfnGetWorldInfo->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnGetWorldInfo, &GetWorldInfo_Parms, NULL );
		pfnGetWorldInfo->FunctionFlags |= 0x400;

		return GetWorldInfo_Parms.ReturnValue;
	};

	void ScriptLog ( struct FString LogText, unsigned long bWarning/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnScriptLog = NULL;

		if ( !pfnScriptLog )
			pfnScriptLog = UObject::FindObject< UFunction >( "Function Engine.SequenceObject.ScriptLog" );

		USequenceObject_execScriptLog_Parms ScriptLog_Parms;
		memcpy( &ScriptLog_Parms.LogText, &LogText, 0xC );
		ScriptLog_Parms.bWarning = bWarning;

		pfnScriptLog->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnScriptLog, &ScriptLog_Parms, NULL );
		pfnScriptLog->FunctionFlags |= 0x400;
	};

};

UClass* USequenceObject::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif