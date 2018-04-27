/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UFunction.h
// Date: 06/16/2011 @ 05:19:38.904
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x90 - 0xB0)
class UFunction : public UStruct
{
public:
	DWORD                                              FunctionFlags;
	WORD                                               iNative;
	WORD                                               RepOffset;
	unsigned char                                      OperPrecedence;
	struct FName                                       FriendlyName;
	unsigned char                                      NumParms;
	WORD                                               ParmsSize;
	WORD                                               ReturnValueOffset;
	void*                                              Func;

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Function" );

		return ClassPointer;
	};

public:
};

UClass* UFunction::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif