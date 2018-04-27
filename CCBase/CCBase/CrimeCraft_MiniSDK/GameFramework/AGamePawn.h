/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: AGamePawn.h
// Date: 06/16/2011 @ 05:19:40.44
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct AGamePawn_eventCringe_Parms
{
	float Duration;
};// FUNC_Event

struct AGamePawn_execServerKnockdown_Parms
{
	struct FVector RBLinearVelocity;
	struct FVector RBAngularVelocity;
	struct FVector RadialOrigin;
	float RadialRadius;
	float RadialStrength;
	struct FVector PointImpulse;
	struct FVector PointImpulsePosition;
	struct FName PointImpulseBoneName;
};

struct AGamePawn_execGetTargetFrictionCylinder_Parms
{
	float CylinderRadius; // CPF_OutParm
	float CylinderHeight; // CPF_OutParm
};

// (0x3D8 - 0x3DC)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bRespondToExplosions : 1;                    // 0x03D8 (0x0004) [0x00000001]

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class GameFramework.GamePawn" );

		return ClassPointer;
	};

public:
	void eventCringe ( float Duration/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnCringe = NULL;

		if ( !pfnCringe )
			pfnCringe = UObject::FindObject< UFunction >( "Function GameFramework.GamePawn.Cringe" );

		AGamePawn_eventCringe_Parms Cringe_Parms;
		Cringe_Parms.Duration = Duration;

		this->ProcessEvent( pfnCringe, &Cringe_Parms, NULL );
	};

	void ServerKnockdown ( struct FVector RBLinearVelocity/*CPF_OptionalParm*/, struct FVector RBAngularVelocity/*CPF_OptionalParm*/, struct FVector RadialOrigin/*CPF_OptionalParm*/, float RadialRadius/*CPF_OptionalParm*/, float RadialStrength/*CPF_OptionalParm*/, struct FVector PointImpulse/*CPF_OptionalParm*/, struct FVector PointImpulsePosition/*CPF_OptionalParm*/, struct FName PointImpulseBoneName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnServerKnockdown = NULL;

		if ( !pfnServerKnockdown )
			pfnServerKnockdown = UObject::FindObject< UFunction >( "Function GameFramework.GamePawn.ServerKnockdown" );

		AGamePawn_execServerKnockdown_Parms ServerKnockdown_Parms;
		memcpy( &ServerKnockdown_Parms.RBLinearVelocity, &RBLinearVelocity, 0xC );
		memcpy( &ServerKnockdown_Parms.RBAngularVelocity, &RBAngularVelocity, 0xC );
		memcpy( &ServerKnockdown_Parms.RadialOrigin, &RadialOrigin, 0xC );
		ServerKnockdown_Parms.RadialRadius = RadialRadius;
		ServerKnockdown_Parms.RadialStrength = RadialStrength;
		memcpy( &ServerKnockdown_Parms.PointImpulse, &PointImpulse, 0xC );
		memcpy( &ServerKnockdown_Parms.PointImpulsePosition, &PointImpulsePosition, 0xC );
		memcpy( &ServerKnockdown_Parms.PointImpulseBoneName, &PointImpulseBoneName, 0x8 );

		this->ProcessEvent( pfnServerKnockdown, &ServerKnockdown_Parms, NULL );
	};

	void GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight )
	{
		static UFunction* pfnGetTargetFrictionCylinder = NULL;

		if ( !pfnGetTargetFrictionCylinder )
			pfnGetTargetFrictionCylinder = UObject::FindObject< UFunction >( "Function GameFramework.GamePawn.GetTargetFrictionCylinder" );

		AGamePawn_execGetTargetFrictionCylinder_Parms GetTargetFrictionCylinder_Parms;

		this->ProcessEvent( pfnGetTargetFrictionCylinder, &GetTargetFrictionCylinder_Parms, NULL );

		if ( CylinderRadius )
			*CylinderRadius = GetTargetFrictionCylinder_Parms.CylinderRadius; // CPF_OutParm
		if ( CylinderHeight )
			*CylinderHeight = GetTargetFrictionCylinder_Parms.CylinderHeight; // CPF_OutParm
	};

};

UClass* AGamePawn::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif