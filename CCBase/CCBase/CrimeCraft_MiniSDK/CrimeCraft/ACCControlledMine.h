/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCControlledMine.h
// Date: 06/16/2011 @ 05:19:41.926
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCControlledMine_execActivate_Parms
{
};

struct ACCControlledMine_eventTouch_Parms
{
	class AActor* Other;
	class UPrimitiveComponent* OtherComp;
	struct FVector HitLocation;
	struct FVector HitNormal;
};// FUNC_Event

// (0x3DC - 0x3E8)
class ACCControlledMine : public ACCMine
{
public:
	struct FString                                     ActivationAnimName;                          // 0x03DC (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCControlledMine" );

		return ClassPointer;
	};

public:
	void Activate ()
	{
		static UFunction* pfnActivate = NULL;

		if ( !pfnActivate )
			pfnActivate = UObject::FindObject< UFunction >( "Function CrimeCraft.CCControlledMine.Activate" );

		ACCControlledMine_execActivate_Parms Activate_Parms;

		this->ProcessEvent( pfnActivate, &Activate_Parms, NULL );
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
	{
		static UFunction* pfnTouch = NULL;

		if ( !pfnTouch )
			pfnTouch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCControlledMine.Touch" );

		ACCControlledMine_eventTouch_Parms Touch_Parms;
		Touch_Parms.Other = Other;
		Touch_Parms.OtherComp = OtherComp;
		memcpy( &Touch_Parms.HitLocation, &HitLocation, 0xC );
		memcpy( &Touch_Parms.HitNormal, &HitNormal, 0xC );

		this->ProcessEvent( pfnTouch, &Touch_Parms, NULL );
	};

};

UClass* ACCControlledMine::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif