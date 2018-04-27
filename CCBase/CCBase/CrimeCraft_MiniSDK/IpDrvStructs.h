/////////////////////////////////////////////////////////////////////////////
// Unreal Engine MiniSDK Generator by uNrEaL
// Game: CrimeCraft
// File: IpDrvStructs.h
// Date: 06/16/2011 @ 05:19:42.381
/////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#pragma pack( push, 4 )
#endif

struct FEventUploadConfig
{
	unsigned char                                      UploadType;
	struct FString                                     UploadUrl;
	float                                              TimeOut;
	unsigned long                                      bUseCompression : 1;
};

struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;
	int                                                Skill;
	struct FDouble                                     Mu;
	struct FDouble                                     Sigma;
};

struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;
	unsigned char                                      ReadState;
	unsigned char                                      NewsType;
	struct FString                                     NewsItem;
	float                                              TimeOut;
	struct FPointer                                    HttpDownloader;
};

struct FPartyReservation
{
	int                                                TeamNum;
	struct FUniqueNetId                                PartyLeader;
	TArray< struct FPlayerReservation >                PartyMembers;
};

struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;
	float                                              ElapsedHeartbeatTime;
	struct FPointer                                    Socket;
};

#ifdef _MSC_VER
#pragma pack( pop )
#endif