/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCTDMGameReplicationInfo.h
// Date: 06/16/2011 @ 05:19:41.977
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x644 - 0x64C)
class ACCTDMGameReplicationInfo : public ACCGameReplicationInfo
{
public:
	int                                                Score[ 2 ];                                  // 0x0644 (0x0008)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCTDMGameReplicationInfo" );

		return ClassPointer;
	};

public:
};

UClass* ACCTDMGameReplicationInfo::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif