/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCUniversalLocalMessageParams.h
// Date: 06/16/2011 @ 05:19:42.149
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x260 - 0x274)
class ACCUniversalLocalMessageParams : public APlayerReplicationInfo
{
public:
	struct FString                                     msg;                                         // 0x0260 (0x000C)
	unsigned char                                      Type;                                        // 0x026C (0x0001)
	float                                              flLifetime;                                  // 0x0270 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCUniversalLocalMessageParams" );

		return ClassPointer;
	};

public:
};

UClass* ACCUniversalLocalMessageParams::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif