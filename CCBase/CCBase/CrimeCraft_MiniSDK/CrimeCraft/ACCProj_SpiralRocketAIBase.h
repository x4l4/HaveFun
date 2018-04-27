/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketAIBase.h
// Date: 06/16/2011 @ 05:19:42.77
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketAIBase_execPostProcessMyVelocity_Parms
{
};

struct ACCProj_SpiralRocketAIBase_execUpdateMyVelocity_Parms
{
	float DeltaTime;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketAIBase_execSetPropsFromWeapon_Parms
{
	class ACCWeapon* Wpn;
};

struct ACCProj_SpiralRocketAIBase_execInitialize_Parms
{
	class ACCProj_SpiralRocketBase* InMyRocket;
	class ACCProj_SpiralRocketSimulationSender* InSimulationSender;
};

// (0x1BC - 0x1C4)
class ACCProj_SpiralRocketAIBase : public ACCProj_SpiralRocket_BaseActor
{
public:
	class ACCProj_SpiralRocketBase*                    MyRocket;                                    // 0x01BC (0x0004)
	class ACCProj_SpiralRocketSimulationSender*        SimulationSender;                            // 0x01C0 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketAIBase" );

		return ClassPointer;
	};

public:
	void PostProcessMyVelocity ()
	{
		static UFunction* pfnPostProcessMyVelocity = NULL;

		if ( !pfnPostProcessMyVelocity )
			pfnPostProcessMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAIBase.PostProcessMyVelocity" );

		ACCProj_SpiralRocketAIBase_execPostProcessMyVelocity_Parms PostProcessMyVelocity_Parms;

		this->ProcessEvent( pfnPostProcessMyVelocity, &PostProcessMyVelocity_Parms, NULL );
	};

	float UpdateMyVelocity ( float DeltaTime )
	{
		static UFunction* pfnUpdateMyVelocity = NULL;

		if ( !pfnUpdateMyVelocity )
			pfnUpdateMyVelocity = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAIBase.UpdateMyVelocity" );

		ACCProj_SpiralRocketAIBase_execUpdateMyVelocity_Parms UpdateMyVelocity_Parms;
		UpdateMyVelocity_Parms.DeltaTime = DeltaTime;

		this->ProcessEvent( pfnUpdateMyVelocity, &UpdateMyVelocity_Parms, NULL );

		return UpdateMyVelocity_Parms.ReturnValue;
	};

	void SetPropsFromWeapon ( class ACCWeapon* Wpn )
	{
		static UFunction* pfnSetPropsFromWeapon = NULL;

		if ( !pfnSetPropsFromWeapon )
			pfnSetPropsFromWeapon = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAIBase.SetPropsFromWeapon" );

		ACCProj_SpiralRocketAIBase_execSetPropsFromWeapon_Parms SetPropsFromWeapon_Parms;
		SetPropsFromWeapon_Parms.Wpn = Wpn;

		this->ProcessEvent( pfnSetPropsFromWeapon, &SetPropsFromWeapon_Parms, NULL );
	};

	void Initialize ( class ACCProj_SpiralRocketBase* InMyRocket, class ACCProj_SpiralRocketSimulationSender* InSimulationSender )
	{
		static UFunction* pfnInitialize = NULL;

		if ( !pfnInitialize )
			pfnInitialize = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketAIBase.Initialize" );

		ACCProj_SpiralRocketAIBase_execInitialize_Parms Initialize_Parms;
		Initialize_Parms.InMyRocket = InMyRocket;
		Initialize_Parms.InSimulationSender = InSimulationSender;

		this->ProcessEvent( pfnInitialize, &Initialize_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketAIBase::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif