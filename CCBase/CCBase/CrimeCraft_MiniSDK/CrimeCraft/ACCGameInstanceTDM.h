/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: ACCGameInstanceTDM.h
// Date: 06/16/2011 @ 05:19:42.103
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct ACCGameInstanceTDM_execCreateTeam_Parms
{
	int TeamIndex;
};

struct ACCGameInstanceTDM_execStartMatch_Parms
{
};

// (0x534 - 0x54C)
class ACCGameInstanceTDM : public ACCGameInstanceDM
{
public:
	class ACCTeamInfo*                                 Teams[ 2 ];                                  // 0x0534 (0x0008)
	class UClass*                                      TeamAIType[ 2 ];                             // 0x053C (0x0008)
	class ACCTeamInfo*                                 TeamRed;                                     // 0x0544 (0x0004)
	class ACCTeamInfo*                                 TeamBlue;                                    // 0x0548 (0x0004)

	// MatchInProgress

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class CrimeCraft.CCGameInstanceTDM" );

		return ClassPointer;
	};

public:
	void CreateTeam ( int TeamIndex )
	{
		static UFunction* pfnCreateTeam = NULL;

		if ( !pfnCreateTeam )
			pfnCreateTeam = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceTDM.CreateTeam" );

		ACCGameInstanceTDM_execCreateTeam_Parms CreateTeam_Parms;
		CreateTeam_Parms.TeamIndex = TeamIndex;

		this->ProcessEvent( pfnCreateTeam, &CreateTeam_Parms, NULL );
	};

	void StartMatch ()
	{
		static UFunction* pfnStartMatch = NULL;

		if ( !pfnStartMatch )
			pfnStartMatch = UObject::FindObject< UFunction >( "Function CrimeCraft.CCGameInstanceTDM.StartMatch" );

		ACCGameInstanceTDM_execStartMatch_Parms StartMatch_Parms;

		this->ProcessEvent( pfnStartMatch, &StartMatch_Parms, NULL );
	};

};

UClass* ACCGameInstanceTDM::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif