/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCGameInstanceDM.h
// Date: 06/16/2011 @ 05:19:42.71
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCGameInstanceDM_execSpawnBot_Parms
{
	struct FString rosterId;
	int rosterIdx;
	class AController* ReturnValue; // CPF_ReturnParm
};

struct ACCGameInstanceDM_execFindPlayerStart_Parms
{
	class AController* Player;
	unsigned char InTeam;
	struct FString IncomingName;
	class ANavigationPoint* ReturnValue; // CPF_ReturnParm
};

struct ACCGameInstanceDM_execRatePlayerStart_Parms
{
	void* P;
	unsigned char Team;
	class AController* Player;
	float ReturnValue; // CPF_ReturnParm
};

struct ACCGameInstanceDM_execStartMatch_Parms
{
};

// (0x528 - 0x534)
class ACCGameInstanceDM : public ACCInstanceGameInfo
{
public:
	TArray< struct FSpawnSpotData >                    SpawnData;                                   // 0x0528 (0x000C)

	// MatchInProgress
	// PendingMatch

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCGameInstanceDM" );

		return ClassPointer;
	};

public:
	class AController* SpawnBot ( struct FString rosterId/*CPF_OptionalParm*/, int rosterIdx/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnSpawnBot = NULL;

		if ( !pfnSpawnBot )
			pfnSpawnBot = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceDM.SpawnBot" );

		ACCGameInstanceDM_execSpawnBot_Parms SpawnBot_Parms;
		memcpy( &SpawnBot_Parms.rosterId, &rosterId, 0xC );
		SpawnBot_Parms.rosterIdx = rosterIdx;

		this->ProcessEvent( pfnSpawnBot, &SpawnBot_Parms, NULL );

		return SpawnBot_Parms.ReturnValue;
	};

	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam/*CPF_OptionalParm*/, struct FString IncomingName/*CPF_OptionalParm*/ )
	{
		static UFunction* pfnFindPlayerStart = NULL;

		if ( !pfnFindPlayerStart )
			pfnFindPlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceDM.FindPlayerStart" );

		ACCGameInstanceDM_execFindPlayerStart_Parms FindPlayerStart_Parms;
		FindPlayerStart_Parms.Player = Player;
		FindPlayerStart_Parms.InTeam = InTeam;
		memcpy( &FindPlayerStart_Parms.IncomingName, &IncomingName, 0xC );

		this->ProcessEvent( pfnFindPlayerStart, &FindPlayerStart_Parms, NULL );

		return FindPlayerStart_Parms.ReturnValue;
	};

	float RatePlayerStart ( void* P, unsigned char Team, class AController* Player )
	{
		static UFunction* pfnRatePlayerStart = NULL;

		if ( !pfnRatePlayerStart )
			pfnRatePlayerStart = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceDM.RatePlayerStart" );

		ACCGameInstanceDM_execRatePlayerStart_Parms RatePlayerStart_Parms;
		RatePlayerStart_Parms.P = P;
		RatePlayerStart_Parms.Team = Team;
		RatePlayerStart_Parms.Player = Player;

		this->ProcessEvent( pfnRatePlayerStart, &RatePlayerStart_Parms, NULL );

		return RatePlayerStart_Parms.ReturnValue;
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceDM.StartMatch" );

		ACCGameInstanceDM_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

};

UClass* ACCGameInstanceDM::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif