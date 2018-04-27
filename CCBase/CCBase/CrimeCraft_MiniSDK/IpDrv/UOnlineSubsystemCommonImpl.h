/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: UOnlineSubsystemCommonImpl.h
// Date: 06/16/2011 @ 05:19:40.46
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms
{
	int UserIndex;
	struct FUniqueNetId ReturnValue; // CPF_ReturnParm
};// FUNC_Event

struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms
{
	int UserIndex;
	struct FString ReturnValue; // CPF_ReturnParm
};// FUNC_Event

// (0xC4 - 0xD8)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                 // 0x00C4 (0x0004)
	int                                                MaxLocalTalkers;                             // 0x00C8 (0x0004)
	int                                                MaxRemoteTalkers;                            // 0x00CC (0x0004)
	unsigned long                                      bIsUsingSpeechRecognition : 1;               // 0x00D0 (0x0004) [0x00000001]
	void*                                              GameInterfaceImpl;                           // 0x00D4 (0x0004)

private:
	static UClass* ClassPointer;

public:
	static UClass* StaticClass ()
	{
		if ( !ClassPointer )
			ClassPointer = UObject::FindClass( "Class IpDrv.OnlineSubsystemCommonImpl" );

		return ClassPointer;
	};

public:
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
	{
		static UFunction* pfnGetPlayerUniqueNetIdFromIndex = NULL;

		if ( !pfnGetPlayerUniqueNetIdFromIndex )
			pfnGetPlayerUniqueNetIdFromIndex = UObject::FindObject< UFunction >( "Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex" );

		UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
		GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

		this->ProcessEvent( pfnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

		return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
	};

	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex )
	{
		static UFunction* pfnGetPlayerNicknameFromIndex = NULL;

		if ( !pfnGetPlayerNicknameFromIndex )
			pfnGetPlayerNicknameFromIndex = UObject::FindObject< UFunction >( "Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex" );

		UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
		GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

		this->ProcessEvent( pfnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

		return GetPlayerNicknameFromIndex_Parms.ReturnValue;
	};

};

UClass* UOnlineSubsystemCommonImpl::ClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack( pop )
#endif