/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UActorComponent.h
// Date: 06/16/2011 @ 05:19:39.600
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UActorComponent_execDetachFromAny_Parms
{
};// FUNC_Final FUNC_Native

struct UActorComponent_execForceUpdate_Parms
{
	unsigned long bTransformOnly : 1;
};// FUNC_Final FUNC_Native

struct UActorComponent_execSetComponentRBFixed_Parms
{
	unsigned long bFixed : 1;
};// FUNC_Final FUNC_Native

struct UActorComponent_execSetTickGroup_Parms
{
	unsigned char NewTickGroup;
};// FUNC_Final FUNC_Native

// (0x48 - 0x55)
class UActorComponent : public UComponent
{
public:
	struct FPointer                                    Scene;                                       // 0x0048 (0x0004)
	class AActor*                                      Owner;                                       // 0x004C (0x0004)
	unsigned long                                      bAttached : 1;                               // 0x0050 (0x0004) [0x00000001]
	unsigned long                                      bTickInEditor : 1;                           // 0x0050 (0x0004) [0x00000002]
	unsigned long                                      bNeedsReattach : 1;                          // 0x0050 (0x0004) [0x00000004]
	unsigned long                                      bNeedsUpdateTransform : 1;                   // 0x0050 (0x0004) [0x00000008]
	unsigned char                                      TickGroup;                                   // 0x0054 (0x0001)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class Engine.ActorComponent" );

		return ClassPointer;
	};

public:
	void DetachFromAny ()
	{
		static UFunction* pfnDetachFromAny = NULL;

		if ( !pfnDetachFromAny )
			pfnDetachFromAny = UObject::FindObject< UFunction >( "Function Engine.ActorComponent.DetachFromAny" );

		UActorComponent_execDetachFromAny_Parms DetachFromAny_Parms;

		pfnDetachFromAny->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnDetachFromAny, &DetachFromAny_Parms, NULL );
		pfnDetachFromAny->FunctionFlags |= 0x400;
	};

	void ForceUpdate ( unsigned long bTransformOnly )
	{
		static UFunction* pfnForceUpdate = NULL;

		if ( !pfnForceUpdate )
			pfnForceUpdate = UObject::FindObject< UFunction >( "Function Engine.ActorComponent.ForceUpdate" );

		UActorComponent_execForceUpdate_Parms ForceUpdate_Parms;
		ForceUpdate_Parms.bTransformOnly = bTransformOnly;

		pfnForceUpdate->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnForceUpdate, &ForceUpdate_Parms, NULL );
		pfnForceUpdate->FunctionFlags |= 0x400;
	};

	void SetComponentRBFixed ( unsigned long bFixed )
	{
		static UFunction* pfnSetComponentRBFixed = NULL;

		if ( !pfnSetComponentRBFixed )
			pfnSetComponentRBFixed = UObject::FindObject< UFunction >( "Function Engine.ActorComponent.SetComponentRBFixed" );

		UActorComponent_execSetComponentRBFixed_Parms SetComponentRBFixed_Parms;
		SetComponentRBFixed_Parms.bFixed = bFixed;

		pfnSetComponentRBFixed->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetComponentRBFixed, &SetComponentRBFixed_Parms, NULL );
		pfnSetComponentRBFixed->FunctionFlags |= 0x400;
	};

	void SetTickGroup ( unsigned char NewTickGroup )
	{
		static UFunction* pfnSetTickGroup = NULL;

		if ( !pfnSetTickGroup )
			pfnSetTickGroup = UObject::FindObject< UFunction >( "Function Engine.ActorComponent.SetTickGroup" );

		UActorComponent_execSetTickGroup_Parms SetTickGroup_Parms;
		SetTickGroup_Parms.NewTickGroup = NewTickGroup;

		pfnSetTickGroup->FunctionFlags |= ~0x400;
		this->ProcessEvent( pfnSetTickGroup, &SetTickGroup_Parms, NULL );
		pfnSetTickGroup->FunctionFlags |= 0x400;
	};

};

UClass* UActorComponent::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif