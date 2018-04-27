/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCPTBController.h
// Date: 06/16/2011 @ 05:19:42.125
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCPTBController_execCalcRespawnTime_Parms
{
	float ReturnValue; // CPF_ReturnParm
};

struct ACCPTBController_execPlayDemineAnimation_Parms
{
};

struct ACCPTBController_execPlayPlantMineAnimation_Parms
{
};

struct ACCPTBController_execCCServerUse_Parms
{
};

struct ACCPTBController_execServerDebugForceUse_Parms
{
};

struct ACCPTBController_execDebugForceUse_Parms
{
};// FUNC_Exec

struct ACCPTBController_execUse_Parms
{
};// FUNC_Exec

struct ACCPTBController_execDoPTBUse_Parms
{
};

// (0xF50 - 0xF68)
class ACCPTBController : public ACCInstanceController
{
public:
	struct FString                                     PlantMineAnimation;                          // 0x0F50 (0x000C)
	struct FString                                     DemineAnimation;                             // 0x0F5C (0x000C)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCPTBController" );

		return ClassPointer;
	};

public:
	float CalcRespawnTime ()
	{
		static UFunction* pfnCalcRespawnTime = NULL;

		if ( !pfnCalcRespawnTime )
			pfnCalcRespawnTime = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.CalcRespawnTime" );

		ACCPTBController_execCalcRespawnTime_Parms CalcRespawnTime_Parms;

		this->ProcessEvent( pfnCalcRespawnTime, &CalcRespawnTime_Parms, NULL );

		return CalcRespawnTime_Parms.ReturnValue;
	};

	void PlayDemineAnimation ()
	{
		static UFunction* pfnPlayDemineAnimation = NULL;

		if ( !pfnPlayDemineAnimation )
			pfnPlayDemineAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.PlayDemineAnimation" );

		ACCPTBController_execPlayDemineAnimation_Parms PlayDemineAnimation_Parms;

		this->ProcessEvent( pfnPlayDemineAnimation, &PlayDemineAnimation_Parms, NULL );
	};

	void PlayPlantMineAnimation ()
	{
		static UFunction* pfnPlayPlantMineAnimation = NULL;

		if ( !pfnPlayPlantMineAnimation )
			pfnPlayPlantMineAnimation = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.PlayPlantMineAnimation" );

		ACCPTBController_execPlayPlantMineAnimation_Parms PlayPlantMineAnimation_Parms;

		this->ProcessEvent( pfnPlayPlantMineAnimation, &PlayPlantMineAnimation_Parms, NULL );
	};

	void CCServerUse ()
	{
		static UFunction* pfnCCServerUse = NULL;

		if ( !pfnCCServerUse )
			pfnCCServerUse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.CCServerUse" );

		ACCPTBController_execCCServerUse_Parms CCServerUse_Parms;

		this->ProcessEvent( pfnCCServerUse, &CCServerUse_Parms, NULL );
	};

	void ServerDebugForceUse ()
	{
		static UFunction* pfnServerDebugForceUse = NULL;

		if ( !pfnServerDebugForceUse )
			pfnServerDebugForceUse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.ServerDebugForceUse" );

		ACCPTBController_execServerDebugForceUse_Parms ServerDebugForceUse_Parms;

		this->ProcessEvent( pfnServerDebugForceUse, &ServerDebugForceUse_Parms, NULL );
	};

	void DebugForceUse ()
	{
		static UFunction* pfnDebugForceUse = NULL;

		if ( !pfnDebugForceUse )
			pfnDebugForceUse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.DebugForceUse" );

		ACCPTBController_execDebugForceUse_Parms DebugForceUse_Parms;

		this->ProcessEvent( pfnDebugForceUse, &DebugForceUse_Parms, NULL );
	};

	void Use ()
	{
		static UFunction* pfnUse = NULL;

		if ( !pfnUse )
			pfnUse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.Use" );

		ACCPTBController_execUse_Parms Use_Parms;

		this->ProcessEvent( pfnUse, &Use_Parms, NULL );
	};

	void DoPTBUse ()
	{
		static UFunction* pfnDoPTBUse = NULL;

		if ( !pfnDoPTBUse )
			pfnDoPTBUse = UObject::FindObject< UFunction >( "Function CrimeCraft.CCPTBController.DoPTBUse" );

		ACCPTBController_execDoPTBUse_Parms DoPTBUse_Parms;

		this->ProcessEvent( pfnDoPTBUse, &DoPTBUse_Parms, NULL );
	};

};

UClass* ACCPTBController::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif