/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCProj_SpiralRocketSimulation.h
// Date: 06/16/2011 @ 05:19:42.72
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCProj_SpiralRocketSimulation_execGetUniqID_Parms
{
	int ReturnValue; // CPF_ReturnParm
};

struct ACCProj_SpiralRocketSimulation_execSetUniqID_Parms
{
	int NewUniqID;
};

// (0x1BC - 0x1C0)
class ACCProj_SpiralRocketSimulation : public ACCProj_SpiralRocket_BaseActor
{
public:
	int                                                UniqID;                                      // 0x01BC (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCProj_SpiralRocketSimulation" );

		return ClassPointer;
	};

public:
	int GetUniqID ()
	{
		static UFunction* pfnGetUniqID = NULL;

		if ( !pfnGetUniqID )
			pfnGetUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulation.GetUniqID" );

		ACCProj_SpiralRocketSimulation_execGetUniqID_Parms GetUniqID_Parms;

		this->ProcessEvent( pfnGetUniqID, &GetUniqID_Parms, NULL );

		return GetUniqID_Parms.ReturnValue;
	};

	void SetUniqID ( int NewUniqID )
	{
		static UFunction* pfnSetUniqID = NULL;

		if ( !pfnSetUniqID )
			pfnSetUniqID = UObject::FindObject< UFunction >( "Function CrimeCraft.CCProj_SpiralRocketSimulation.SetUniqID" );

		ACCProj_SpiralRocketSimulation_execSetUniqID_Parms SetUniqID_Parms;
		SetUniqID_Parms.NewUniqID = NewUniqID;

		this->ProcessEvent( pfnSetUniqID, &SetUniqID_Parms, NULL );
	};

};

UClass* ACCProj_SpiralRocketSimulation::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif