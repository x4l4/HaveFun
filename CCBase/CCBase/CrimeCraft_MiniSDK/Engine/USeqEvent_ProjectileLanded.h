/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: USeqEvent_ProjectileLanded.h
// Date: 06/16/2011 @ 05:19:40.20
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

// (0x100 - 0x104)
class USeqEvent_ProjectileLanded : public USequenceEvent
{
public:
	float                                              MaxDistance;                                 // 0x0100 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.SeqEvent_ProjectileLanded" );

		return ClassPointer;
	};

public:
};

UClass* USeqEvent_ProjectileLanded::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif