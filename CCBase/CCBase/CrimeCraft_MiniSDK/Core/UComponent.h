/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UComponent.h
// Date: 06/16/2011 @ 05:19:39.600
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x3C - 0x48)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                          // 0x003C (0x0004)
	struct FName                                       TemplateName;                                // 0x0040 (0x0008)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Core.Component" );

		return ClassPointer;
	};

public:
};

UClass* UComponent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif