/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AZoneInfo.h
// Date: 06/16/2011 @ 05:19:39.903
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x1BC - 0x1CC)
class AZoneInfo : public AInfo
{
public:
	float                                              KillZ;                                       // 0x01BC (0x0004)
	float                                              SoftKill;                                    // 0x01C0 (0x0004)
	class UClass*                                      KillZDamageType;                             // 0x01C4 (0x0004)
	unsigned long                                      bSoftKillZ : 1;                              // 0x01C8 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.ZoneInfo" );

		return ClassPointer;
	};

public:
};

UClass* AZoneInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif